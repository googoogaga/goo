/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/macros */

EXT(Yclone,"goo/boot","clone");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynil,"goo/boot","nil");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yas_error,"goo/boot","as-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(YtT,"goo/boot","t*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ynew,"goo/boot","new");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_183);
DEFLIT(lit_220);
DEFLIT(lit_22);
DEFLIT(lit_267);
DEFLIT(lit_14);
DEFLIT(lit_49);
DEFLIT(lit_176);
DEFLIT(lit_261);
DEFLIT(lit_152);
DEFLIT(lit_167);
DEFLIT(lit_60);
DEFLIT(lit_48);
DEFLIT(lit_104);
DEFLIT(lit_201);
DEFLIT(lit_240);
DEFLIT(lit_209);
DEFLIT(lit_184);
DEFLIT(lit_273);
DEFLIT(lit_169);
DEFLIT(lit_70);
DEFLIT(lit_101);
DEFLIT(lit_1);
DEFLIT(lit_142);
DEFLIT(lit_260);
DEFLIT(lit_251);
DEFLIT(lit_250);
DEFLIT(lit_81);
DEFLIT(lit_59);
DEFLIT(lit_85);
DEFLIT(lit_27);
DEFLIT(lit_38);
DEFLIT(lit_161);
DEFLIT(lit_185);
DEFLIT(lit_206);
DEFLIT(lit_37);
DEFLIT(lit_11);
DEFLIT(lit_71);
DEFLIT(lit_211);
DEFLIT(lit_69);
DEFLIT(lit_66);
DEFLIT(lit_136);
DEFLIT(lit_150);
DEFLIT(lit_105);
DEFLIT(lit_213);
DEFLIT(lit_86);
DEFLIT(lit_146);
DEFLIT(lit_276);
DEFLIT(lit_159);
DEFLIT(lit_34);
DEFLIT(lit_40);
DEFLIT(lit_207);
DEFLIT(lit_179);
DEFLIT(lit_68);
DEFLIT(lit_133);
DEFLIT(lit_265);
DEFLIT(lit_200);
DEFLIT(lit_112);
DEFLIT(lit_17);
DEFLIT(lit_235);
DEFLIT(lit_137);
DEFLIT(lit_135);
DEFLIT(lit_57);
DEFLIT(lit_16);
DEFLIT(lit_190);
DEFLIT(lit_42);
DEFLIT(lit_241);
DEFLIT(lit_236);
DEFLIT(lit_221);
DEFLIT(lit_139);
DEFLIT(lit_202);
DEFLIT(lit_92);
DEFLIT(lit_35);
DEFLIT(lit_25);
DEFLIT(lit_15);
DEFLIT(lit_258);
DEFLIT(lit_244);
DEFLIT(lit_243);
DEFLIT(lit_186);
DEFLIT(lit_154);
DEFLIT(lit_141);
DEFLIT(lit_103);
DEFLIT(lit_74);
DEFLIT(lit_58);
DEFLIT(lit_218);
DEFLIT(lit_13);
DEFLIT(lit_122);
DEFLIT(lit_149);
DEFLIT(lit_156);
DEFLIT(lit_116);
DEFLIT(lit_266);
DEFLIT(lit_91);
DEFLIT(lit_237);
DEFLIT(lit_124);
DEFLIT(lit_151);
DEFLIT(lit_153);
DEFLIT(lit_77);
DEFLIT(lit_264);
DEFLIT(lit_262);
DEFLIT(lit_4);
DEFLIT(lit_181);
DEFLIT(lit_257);
DEFLIT(lit_80);
DEFLIT(lit_178);
DEFLIT(lit_12);
DEFLIT(lit_187);
DEFLIT(lit_102);
DEFLIT(lit_73);
DEFLIT(lit_94);
DEFLIT(lit_216);
DEFLIT(lit_96);
DEFLIT(lit_219);
DEFLIT(lit_249);
DEFLIT(lit_231);
DEFLIT(lit_245);
DEFLIT(lit_125);
DEFLIT(lit_46);
DEFLIT(lit_193);
DEFLIT(lit_24);
DEFLIT(lit_272);
DEFLIT(lit_0);
DEFLIT(lit_242);
DEFLIT(lit_254);
DEFLIT(lit_198);
DEFLIT(lit_180);
DEFLIT(lit_117);
DEFLIT(lit_126);
DEFLIT(lit_148);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_255);
DEFLIT(lit_230);
DEFLIT(lit_53);
DEFLIT(lit_75);
DEFLIT(lit_158);
DEFLIT(lit_208);
DEFLIT(lit_114);
DEFLIT(lit_256);
DEFLIT(lit_89);
DEFLIT(lit_62);
DEFLIT(lit_232);
DEFLIT(lit_271);
DEFLIT(lit_172);
DEFLIT(lit_197);
DEFLIT(lit_170);
DEFLIT(lit_123);
DEFLIT(lit_64);
DEFLIT(lit_78);
DEFLIT(lit_9);
DEFLIT(lit_227);
DEFLIT(lit_204);
DEFLIT(lit_157);
DEFLIT(lit_113);
DEFLIT(lit_160);
DEFLIT(lit_65);
DEFLIT(lit_195);
DEFLIT(lit_79);
DEFLIT(lit_246);
DEFLIT(lit_270);
DEFLIT(lit_268);
DEFLIT(lit_214);
DEFLIT(lit_171);
DEFLIT(lit_115);
DEFLIT(lit_278);
DEFLIT(lit_173);
DEFLIT(lit_259);
DEFLIT(lit_110);
DEFLIT(lit_43);
DEFLIT(lit_226);
DEFLIT(lit_8);
DEFLIT(lit_82);
DEFLIT(lit_147);
DEFLIT(lit_203);
DEFLIT(lit_23);
DEFLIT(lit_199);
DEFLIT(lit_129);
DEFLIT(lit_5);
DEFLIT(lit_56);
DEFLIT(lit_106);
DEFLIT(lit_224);
DEFLIT(lit_269);
DEFLIT(lit_26);
DEFLIT(lit_72);
DEFLIT(lit_39);
DEFLIT(lit_50);
DEFLIT(lit_67);
DEFLIT(lit_134);
DEFLIT(lit_111);
DEFLIT(lit_100);
DEFLIT(lit_54);
DEFLIT(lit_76);
DEFLIT(lit_275);
DEFLIT(lit_6);
DEFLIT(lit_210);
DEFLIT(lit_225);
DEFLIT(lit_131);
DEFLIT(lit_228);
DEFLIT(lit_155);
DEFLIT(lit_234);
DEFLIT(lit_233);
DEFLIT(lit_63);
DEFLIT(lit_41);
DEFLIT(lit_87);
DEFLIT(lit_212);
DEFLIT(lit_168);
DEFLIT(lit_194);
DEFLIT(lit_144);
DEFLIT(lit_88);
DEFLIT(lit_121);
DEFLIT(lit_90);
DEFLIT(lit_98);
DEFLIT(lit_32);
DEFLIT(lit_128);
DEFLIT(lit_175);
DEFLIT(lit_107);
DEFLIT(lit_132);
DEFLIT(lit_99);
DEFLIT(lit_189);
DEFLIT(lit_55);
DEFLIT(lit_21);
DEFLIT(lit_36);
DEFLIT(lit_177);
DEFLIT(lit_239);
DEFLIT(lit_109);
DEFLIT(lit_3);
DEFLIT(lit_97);
DEFLIT(lit_52);
DEFLIT(lit_277);
DEFLIT(lit_31);
DEFLIT(lit_205);
DEFLIT(lit_253);
DEFLIT(lit_229);
DEFLIT(lit_192);
DEFLIT(lit_127);
DEFLIT(lit_162);
DEFLIT(lit_18);
DEFLIT(lit_166);
DEFLIT(lit_30);
DEFLIT(lit_20);
DEFLIT(lit_196);
DEFLIT(lit_238);
DEFLIT(lit_84);
DEFLIT(lit_215);
DEFLIT(lit_182);
DEFLIT(lit_119);
DEFLIT(lit_143);
DEFLIT(lit_93);
DEFLIT(lit_44);
DEFLIT(lit_248);
DEFLIT(lit_223);
DEFLIT(lit_165);
DEFLIT(lit_108);
DEFLIT(lit_140);
DEFLIT(lit_130);
DEFLIT(lit_51);
DEFLIT(lit_174);
DEFLIT(lit_145);
DEFLIT(lit_222);
DEFLIT(lit_19);
DEFLIT(lit_191);
DEFLIT(lit_217);
DEFLIT(lit_247);
DEFLIT(lit_118);
DEFLIT(lit_138);
DEFLIT(lit_95);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_47);
DEFLIT(lit_61);
DEFLIT(lit_263);
DEFLIT(lit_2);
DEFLIT(lit_120);
DEFLIT(lit_164);
DEFLIT(lit_188);
DEFLIT(lit_274);
DEFLIT(lit_83);
DEFLIT(lit_252);
DEFLIT(lit_7);
DEFLIT(lit_163);

/* FUNCTIONS: */

FUNFOR(YgooSmacrosYOchecked_next_methods);
LOCFOR(fun_x_1076_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_x_1080_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_x_1084_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_x_1088_10);
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
LOCFOR(fun_x_1136_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1144_52);
LOCFOR(fun_x_1146_53);
LOCFOR(fun_x_1148_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1156_59);
LOCFOR(fun_x_1158_60);
LOCFOR(fun_x_1160_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1166_66);
LOCFOR(fun_x_1168_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1174_71);
LOCFOR(fun_x_1176_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1180_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1184_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1192_83);
LOCFOR(fun_x_1196_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1194_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1200_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_1208_93);
LOCFOR(fun_x_1210_94);
LOCFOR(fun_x_1212_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_1216_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_1220_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1228_107);
LOCFOR(fun_x_1232_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1230_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_x_1236_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_1240_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1244_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1266_123);
LOCFOR(fun_x_1284_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1281_126);
LOCFOR(fun_127);
LOCFOR(fun_x_1278_128);
LOCFOR(fun_129);
LOCFOR(fun_x_1275_130);
LOCFOR(fun_131);
LOCFOR(fun_x_1272_132);
LOCFOR(fun_133);
LOCFOR(fun_x_1269_134);
LOCFOR(fun_135);
LOCFOR(fun_136);
LOCFOR(fun_137);
LOCFOR(fun_x_1288_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_141);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYOchecked_next_methods) {
  P met_,nxt_mets_,args_;
  P yF1003;
  P xF1002;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(met_, 0);
  ARG(nxt_mets_, 1);
  NARGS(args_, 2);
  if (nxt_mets_ != YPfalse) {
    xF1002 = nxt_mets_;
    yF1003 = Ynil;
    T4 = (P)YPeqQ(xF1002,yF1003);
    T3 = (P)YPbb(T4);
    T2 = T3;
    if (T2 != YPfalse) {
      T5 = CALL2(1,VARREF(Yno_next_methods_error),met_,args_);
      T1 = T5;
    } else {
      T1 = nxt_mets_;
    }
    T0 = T1;
  } else {
    T6 = CALL2(1,VARREF(Yno_next_methods_error),met_,args_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1076_1) {
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

FUNCODEDEF(fun_2) {
  P return_;
  P x_1075F1010;
  P x_1075F1009;
  P x_1075F1008;
  P x_1075F1007;
  P argsF1006;
  P x_1075F1005;
  P x_1076F1004;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1076_1,2);
  x_1076F1004 = T1;
  FUNINIT(x_1076F1004, 2,FREEREF(0),return_);
  x_1075F1005 = FREEREF(0);
  argsF1006 = YPfalse;
  argsF1006 = BOXFAB(argsF1006);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F1005,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F1005,LITREF(lit_6),x_1076F1004);
    x_1075F1007 = T7;
    BOXVAL(argsF1006) = x_1075F1007;
    x_1075F1008 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1075F1008,x_1076F1004);
    x_1075F1009 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F1009,x_1076F1004);
    T12 = CALL1(1,VARREF(Ytail),x_1075F1008);
    x_1075F1010 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F1010,x_1076F1004);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1076F1004,LITREF(lit_7),x_1075F1005);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_11));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T31 = BOXVAL(argsF1006);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T28,T31,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,LITREF(lit_11));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T43 = BOXVAL(argsF1006);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T47 = CALL1(1,VARREF(Ylst),Ynil);
  T45 = CALL3(1,VARREF(YgooSmacrosYcat),T46,T47,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T33 = CALLN(1,VARREF(YgooSmacrosYcat),6,T34,T35,T39,T43,T44,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T32,LITREF(lit_11));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_2,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1080_4) {
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

FUNCODEDEF(fun_5) {
  P return_;
  P x_1079F1017;
  P x_1079F1016;
  P x_1079F1015;
  P x_1079F1014;
  P argsF1013;
  P x_1079F1012;
  P x_1080F1011;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1080_4,2);
  x_1080F1011 = T1;
  FUNINIT(x_1080F1011, 2,FREEREF(0),return_);
  x_1079F1012 = FREEREF(0);
  argsF1013 = YPfalse;
  argsF1013 = BOXFAB(argsF1013);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F1012,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F1012,LITREF(lit_21),x_1080F1011);
    x_1079F1014 = T7;
    BOXVAL(argsF1013) = x_1079F1014;
    x_1079F1015 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1079F1015,x_1080F1011);
    x_1079F1016 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F1016,x_1080F1011);
    T12 = CALL1(1,VARREF(Ytail),x_1079F1015);
    x_1079F1017 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F1017,x_1080F1011);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1080F1011,LITREF(lit_7),x_1079F1012);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_11));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T31 = BOXVAL(argsF1013);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T28,T31,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,LITREF(lit_11));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T43 = BOXVAL(argsF1013);
  T33 = CALL5(1,VARREF(YgooSmacrosYcat),T34,T35,T39,T43,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T32,LITREF(lit_11));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_5,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1084_7) {
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

FUNCODEDEF(fun_8) {
  P return_;
  P x_1083F1026;
  P x_1083F1025;
  P x_1083F1024;
  P x_1083F1023;
  P x_1083F1022;
  P argsF1021;
  P fF1020;
  P x_1083F1019;
  P x_1084F1018;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1084_7,2);
  x_1084F1018 = T1;
  FUNINIT(x_1084F1018, 2,FREEREF(0),return_);
  x_1083F1019 = FREEREF(0);
  fF1020 = YPfalse;
  fF1020 = BOXFAB(fF1020);
  argsF1021 = YPfalse;
  argsF1021 = BOXFAB(argsF1021);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F1019,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F1019,LITREF(lit_26),x_1084F1018);
    x_1083F1022 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F1022,x_1084F1018);
    BOXVAL(fF1020) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F1022);
    x_1083F1023 = T12;
    BOXVAL(argsF1021) = x_1083F1023;
    x_1083F1024 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1083F1024,x_1084F1018);
    x_1083F1025 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F1025,x_1084F1018);
    T17 = CALL1(1,VARREF(Ytail),x_1083F1024);
    x_1083F1026 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F1026,x_1084F1018);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1084F1018,LITREF(lit_7),x_1083F1019);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T23 = BOXVAL(fF1020);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = BOXVAL(argsF1021);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T24,T25,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_8,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1088_10) {
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

FUNCODEDEF(fun_11) {
  P return_;
  P setsF1040;
  P valF1039;
  P initsF1038;
  P setsF1037;
  P varF1036;
  P x_1087F1035;
  P x_1087F1034;
  P x_1087F1033;
  P x_1087F1032;
  P x_1087F1031;
  P prop_initsF1030;
  P xF1029;
  P x_1087F1028;
  P x_1088F1027;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1088_10,2);
  x_1088F1027 = T1;
  FUNINIT(x_1088F1027, 2,FREEREF(0),return_);
  x_1087F1028 = FREEREF(0);
  xF1029 = YPfalse;
  xF1029 = BOXFAB(xF1029);
  prop_initsF1030 = YPfalse;
  prop_initsF1030 = BOXFAB(prop_initsF1030);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F1028,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F1028,LITREF(lit_31),x_1088F1027);
    x_1087F1031 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F1031,x_1088F1027);
    BOXVAL(xF1029) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F1031);
    x_1087F1032 = T12;
    BOXVAL(prop_initsF1030) = x_1087F1032;
    x_1087F1033 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1087F1033,x_1088F1027);
    x_1087F1034 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1034,x_1088F1027);
    T17 = CALL1(1,VARREF(Ytail),x_1087F1033);
    x_1087F1035 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1035,x_1088F1027);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1088F1027,LITREF(lit_7),x_1087F1028);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF1036 = T21;
  setsF1037 = Ynil;
  T24 = BOXVAL(prop_initsF1030);
  initsF1038 = T24;
  for (;;) {
    P a45_0,a45_1;
  loop45:
    T27 = CALL1(1,VARREF(YgooSmacrosYemptyQ),initsF1038);
    if (T27 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooSmacrosYrevX),setsF1037);
      T26 = T28;
    } else {
      T31 = CALL1(1,VARREF(Ytail),initsF1038);
      T30 = CALL1(1,VARREF(Yhead),T31);
      valF1039 = T30;
      T35 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
      T39 = CALL1(1,VARREF(Yhead),initsF1038);
      T38 = CALL1(1,VARREF(Ylst),T39);
      T40 = CALL1(1,VARREF(Ylst),varF1036);
      T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T40,LITREF(lit_11));
      T36 = CALL1(1,VARREF(Ylst),T37);
      T41 = CALL1(1,VARREF(Ylst),valF1039);
      T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T41,LITREF(lit_11));
      T33 = CALL2(1,VARREF(YgooSmacrosYpair),T34,setsF1037);
      T43 = CALL1(1,VARREF(Ytail),initsF1038);
      T42 = CALL1(1,VARREF(Ytail),T43);
      a45_0 = T33;
      a45_1 = T42;
      setsF1037 = a45_0;
      initsF1038 = a45_1;
      goto loop45;
      T29 = T32;
      T26 = T29;
    }
    break;
  }
  T25 = T26;
  T23 = T25;
  setsF1040 = T23;
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T50 = CALL1(1,VARREF(Ylst),varF1036);
  T52 = BOXVAL(xF1029);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_11));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T47 = CALL2(1,VARREF(YgooSmacrosYcat),T48,LITREF(lit_11));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T53 = CALL1(1,VARREF(Ylst),varF1036);
  T44 = CALL5(1,VARREF(YgooSmacrosYcat),T45,T46,setsF1040,T53,LITREF(lit_11));
  T22 = T44;
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_11,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_munch_13) {
  P subforms_;
  P gF1044;
  P g_argsF1043;
  P g_declsF1042;
  P tup3F1041;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(subforms_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),subforms_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,Ynil);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),subforms_);
    T4 = CALL1(1,FREEREF(0),T5);
    tup3F1041 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1041,YPint((P)0));
    g_declsF1042 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1041,YPint((P)1));
    g_argsF1043 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF1044 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF1044);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF1042);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF1044,g_argsF1043);
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
  P g_argsF1048;
  P g_declsF1047;
  P tup4F1046;
  P munchF1045;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(place_, 0);
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF1045 = T1;
  FUNINIT(munchF1045, 1,munchF1045);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF1045,T7);
    tup4F1046 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1046,YPint((P)0));
    g_declsF1047 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1046,YPint((P)1));
    g_argsF1048 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF1048);
    T12 = CALL2(1,VARREF(Ytup),g_declsF1047,T13);
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
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_41),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1096_16) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P return_;
  P x_1095F1054;
  P x_1095F1053;
  P x_1095F1052;
  P amountF1051;
  P x_1095F1050;
  P x_1096F1049;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1096_16,1);
  x_1096F1049 = T1;
  FUNINIT(x_1096F1049, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1095F1050 = T3;
  amountF1051 = YPfalse;
  amountF1051 = BOXFAB(amountF1051);
  T6 = CALL2(1,VARREF(YisaQ),x_1095F1050,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F1050,x_1096F1049);
    BOXVAL(amountF1051) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1095F1050);
    x_1095F1052 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1095F1052,x_1096F1049);
    x_1095F1053 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1053,x_1096F1049);
    T13 = CALL1(1,VARREF(Ytail),x_1095F1052);
    x_1095F1054 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1054,x_1096F1049);
    T10 = T14;
    T7 = T10;
  } else {
    T15 = CALL2(1,x_1096F1049,LITREF(lit_7),x_1095F1050);
  }
  T16 = BOXVAL(amountF1051);
  T4 = T16;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF1067;
  P g_placeF1066;
  P g_declsF1065;
  P tup6F1064;
  P x_1093F1063;
  P x_1093F1062;
  P x_1093F1061;
  P x_1093F1060;
  P x_1093F1059;
  P amountF1058;
  P placeF1057;
  P x_1093F1056;
  P x_1094F1055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1094_15,2);
  x_1094F1055 = T1;
  FUNINIT(x_1094F1055, 2,FREEREF(0),return_);
  x_1093F1056 = FREEREF(0);
  placeF1057 = YPfalse;
  placeF1057 = BOXFAB(placeF1057);
  amountF1058 = YPfalse;
  amountF1058 = BOXFAB(amountF1058);
  T7 = CALL2(1,VARREF(YisaQ),x_1093F1056,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F1056,LITREF(lit_41),x_1094F1055);
    x_1093F1059 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F1059,x_1094F1055);
    BOXVAL(placeF1057) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1093F1059);
    x_1093F1060 = T12;
    BOXVAL(amountF1058) = x_1093F1060;
    x_1093F1061 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1093F1061,x_1094F1055);
    x_1093F1062 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1062,x_1094F1055);
    T17 = CALL1(1,VARREF(Ytail),x_1093F1061);
    x_1093F1063 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1063,x_1094F1055);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1094F1055,LITREF(lit_7),x_1093F1056);
  }
  T22 = BOXVAL(placeF1057);
  T21 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T22);
  tup6F1064 = T21;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1064,YPint((P)0));
  g_declsF1065 = T24;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1064,YPint((P)1));
  g_placeF1066 = T26;
  T29 = FUNFAB(fun_17,1,amountF1058);
  T28 = with_exit(T29);
  amountF1067 = T28;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1065,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1066);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T41 = CALL1(1,VARREF(Ylst),g_placeF1066);
  T42 = CALL1(1,VARREF(Ylst),amountF1067);
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_11));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T34,LITREF(lit_11));
  T27 = T30;
  T25 = T27;
  T23 = T25;
  T20 = T23;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1102_20) {
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

FUNCODEDEF(fun_x_1104_21) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P return_;
  P x_1103F1073;
  P x_1103F1072;
  P x_1103F1071;
  P amountF1070;
  P x_1103F1069;
  P x_1104F1068;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1104_21,1);
  x_1104F1068 = T1;
  FUNINIT(x_1104F1068, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1103F1069 = T3;
  amountF1070 = YPfalse;
  amountF1070 = BOXFAB(amountF1070);
  T6 = CALL2(1,VARREF(YisaQ),x_1103F1069,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F1069,x_1104F1068);
    BOXVAL(amountF1070) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1103F1069);
    x_1103F1071 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1103F1071,x_1104F1068);
    x_1103F1072 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1072,x_1104F1068);
    T13 = CALL1(1,VARREF(Ytail),x_1103F1071);
    x_1103F1073 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1073,x_1104F1068);
    T10 = T14;
    T7 = T10;
  } else {
    T15 = CALL2(1,x_1104F1068,LITREF(lit_7),x_1103F1069);
  }
  T16 = BOXVAL(amountF1070);
  T4 = T16;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF1086;
  P g_placeF1085;
  P g_declsF1084;
  P tup8F1083;
  P x_1101F1082;
  P x_1101F1081;
  P x_1101F1080;
  P x_1101F1079;
  P x_1101F1078;
  P amountF1077;
  P placeF1076;
  P x_1101F1075;
  P x_1102F1074;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1102_20,2);
  x_1102F1074 = T1;
  FUNINIT(x_1102F1074, 2,FREEREF(0),return_);
  x_1101F1075 = FREEREF(0);
  placeF1076 = YPfalse;
  placeF1076 = BOXFAB(placeF1076);
  amountF1077 = YPfalse;
  amountF1077 = BOXFAB(amountF1077);
  T7 = CALL2(1,VARREF(YisaQ),x_1101F1075,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F1075,LITREF(lit_50),x_1102F1074);
    x_1101F1078 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F1078,x_1102F1074);
    BOXVAL(placeF1076) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1101F1078);
    x_1101F1079 = T12;
    BOXVAL(amountF1077) = x_1101F1079;
    x_1101F1080 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1101F1080,x_1102F1074);
    x_1101F1081 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1081,x_1102F1074);
    T17 = CALL1(1,VARREF(Ytail),x_1101F1080);
    x_1101F1082 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1082,x_1102F1074);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1102F1074,LITREF(lit_7),x_1101F1075);
  }
  T22 = BOXVAL(placeF1076);
  T21 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T22);
  tup8F1083 = T21;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1083,YPint((P)0));
  g_declsF1084 = T24;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1083,YPint((P)1));
  g_placeF1085 = T26;
  T29 = FUNFAB(fun_22,1,amountF1077);
  T28 = with_exit(T29);
  amountF1086 = T28;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1084,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1085);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T41 = CALL1(1,VARREF(Ylst),g_placeF1085);
  T42 = CALL1(1,VARREF(Ylst),amountF1086);
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_11));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T34,LITREF(lit_11));
  T27 = T30;
  T25 = T27;
  T23 = T25;
  T20 = T23;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_23,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1108_25) {
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

FUNCODEDEF(fun_26) {
  P return_;
  P g_placeF1098;
  P g_declsF1097;
  P tup10F1096;
  P x_1107F1095;
  P x_1107F1094;
  P x_1107F1093;
  P x_1107F1092;
  P x_1107F1091;
  P valueF1090;
  P placeF1089;
  P x_1107F1088;
  P x_1108F1087;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1108_25,2);
  x_1108F1087 = T1;
  FUNINIT(x_1108F1087, 2,FREEREF(0),return_);
  x_1107F1088 = FREEREF(0);
  placeF1089 = YPfalse;
  placeF1089 = BOXFAB(placeF1089);
  valueF1090 = YPfalse;
  valueF1090 = BOXFAB(valueF1090);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F1088,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F1088,LITREF(lit_59),x_1108F1087);
    x_1107F1091 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1091,x_1108F1087);
    BOXVAL(placeF1089) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F1091);
    x_1107F1092 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1092,x_1108F1087);
    BOXVAL(valueF1090) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1107F1092);
    x_1107F1093 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1107F1093,x_1108F1087);
    x_1107F1094 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1094,x_1108F1087);
    T19 = CALL1(1,VARREF(Ytail),x_1107F1093);
    x_1107F1095 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1095,x_1108F1087);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1108F1087,LITREF(lit_7),x_1107F1088);
  }
  T24 = BOXVAL(placeF1089);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup10F1096 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1096,YPint((P)0));
  g_declsF1097 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1096,YPint((P)1));
  g_placeF1098 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1097,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1098);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T40 = CALL1(1,VARREF(Ylst),g_placeF1098);
  T42 = BOXVAL(valueF1090);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T33,LITREF(lit_11));
  T27 = T29;
  T25 = T27;
  T22 = T25;
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_26,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1112_28) {
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

FUNCODEDEF(fun_29) {
  P return_;
  P tmpF1114;
  P yg_placeF1113;
  P yg_declsF1112;
  P tup14F1111;
  P xg_placeF1110;
  P xg_declsF1109;
  P tup13F1108;
  P x_1111F1107;
  P x_1111F1106;
  P x_1111F1105;
  P x_1111F1104;
  P x_1111F1103;
  P yF1102;
  P xF1101;
  P x_1111F1100;
  P x_1112F1099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1112_28,2);
  x_1112F1099 = T1;
  FUNINIT(x_1112F1099, 2,FREEREF(0),return_);
  x_1111F1100 = FREEREF(0);
  xF1101 = YPfalse;
  xF1101 = BOXFAB(xF1101);
  yF1102 = YPfalse;
  yF1102 = BOXFAB(yF1102);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F1100,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F1100,LITREF(lit_65),x_1112F1099);
    x_1111F1103 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1103,x_1112F1099);
    BOXVAL(xF1101) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F1103);
    x_1111F1104 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1104,x_1112F1099);
    BOXVAL(yF1102) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F1104);
    x_1111F1105 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1111F1105,x_1112F1099);
    x_1111F1106 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1106,x_1112F1099);
    T19 = CALL1(1,VARREF(Ytail),x_1111F1105);
    x_1111F1107 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1107,x_1112F1099);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1112F1099,LITREF(lit_7),x_1111F1100);
  }
  T24 = BOXVAL(xF1101);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup13F1108 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1108,YPint((P)0));
  xg_declsF1109 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1108,YPint((P)1));
  xg_placeF1110 = T28;
  T31 = BOXVAL(yF1102);
  T30 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T31);
  tup14F1111 = T30;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1111,YPint((P)0));
  yg_declsF1112 = T33;
  T35 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1111,YPint((P)1));
  yg_placeF1113 = T35;
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF1114 = T37;
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T44 = CALL1(1,VARREF(Ylst),tmpF1114);
  T45 = CALL1(1,VARREF(Ylst),xg_placeF1110);
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF1109,yg_declsF1112,T42,LITREF(lit_11));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T49 = CALL1(1,VARREF(Ylst),xg_placeF1110);
  T50 = CALL1(1,VARREF(Ylst),yg_placeF1113);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_11));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T54 = CALL1(1,VARREF(Ylst),yg_placeF1113);
  T55 = CALL1(1,VARREF(Ylst),tmpF1114);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_11));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T38 = CALL5(1,VARREF(YgooSmacrosYcat),T39,T40,T46,T51,LITREF(lit_11));
  T36 = T38;
  T34 = T36;
  T32 = T34;
  T29 = T32;
  T27 = T29;
  T25 = T27;
  T22 = T25;
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_29,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1116_31) {
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

FUNCODEDEF(fun_32) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL0(1,VARREF(YgooSmacrosYgensym));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
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

FUNCODEDEF(fun_34) {
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

FUNCODEDEF(fun_35) {
  P return_;
  P placesF1130;
  P declsF1129;
  P psF1128;
  P tmpsF1127;
  P placesF1126;
  P x_1115F1125;
  P x_1115F1124;
  P x_1115F1123;
  P x_1115F1122;
  P x_1115F1121;
  P x_1115F1120;
  P zsF1119;
  P yF1118;
  P xF1117;
  P x_1115F1116;
  P x_1116F1115;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1116_31,2);
  x_1116F1115 = T1;
  FUNINIT(x_1116F1115, 2,FREEREF(0),return_);
  x_1115F1116 = FREEREF(0);
  xF1117 = YPfalse;
  xF1117 = BOXFAB(xF1117);
  yF1118 = YPfalse;
  yF1118 = BOXFAB(yF1118);
  zsF1119 = YPfalse;
  zsF1119 = BOXFAB(zsF1119);
  T9 = CALL2(1,VARREF(YisaQ),x_1115F1116,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F1116,LITREF(lit_70),x_1116F1115);
    x_1115F1120 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1120,x_1116F1115);
    BOXVAL(xF1117) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1115F1120);
    x_1115F1121 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1121,x_1116F1115);
    BOXVAL(yF1118) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1115F1121);
    x_1115F1122 = T17;
    BOXVAL(zsF1119) = x_1115F1122;
    x_1115F1123 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1115F1123,x_1116F1115);
    x_1115F1124 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1124,x_1116F1115);
    T22 = CALL1(1,VARREF(Ytail),x_1115F1123);
    x_1115F1125 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1125,x_1116F1115);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1116F1115,LITREF(lit_7),x_1115F1116);
  }
  T28 = BOXVAL(xF1117);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = BOXVAL(yF1118);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T31 = BOXVAL(zsF1119);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T29,T31,LITREF(lit_11));
  placesF1126 = T26;
  T34 = fun_32;
  T33 = CALL2(1,VARREF(YgooSmacrosYmap),T34,placesF1126);
  tmpsF1127 = T33;
  T36 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF1126);
  psF1128 = T36;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF1128);
  declsF1129 = T38;
  T40 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF1128);
  placesF1130 = T40;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T45 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF1129);
  T47 = fun_33;
  T46 = CALL3(1,VARREF(YgooSmacrosYmap2),T47,tmpsF1127,placesF1130);
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T46,LITREF(lit_11));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T49 = fun_34;
  T50 = CALL1(1,VARREF(Ytail),tmpsF1127);
  T48 = CALL3(1,VARREF(YgooSmacrosYmap2),T49,placesF1130,T50);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T55 = CALL1(1,VARREF(YgooSmacrosYlast),placesF1130);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T57 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF1127);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T56,LITREF(lit_11));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T41 = CALL5(1,VARREF(YgooSmacrosYcat),T42,T43,T48,T51,LITREF(lit_11));
  T39 = T41;
  T37 = T39;
  T35 = T37;
  T32 = T35;
  T25 = T32;
  T7 = T25;
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
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_35,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1120_37) {
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

FUNCODEDEF(fun_38) {
  P return_;
  P valF1142;
  P new_colF1141;
  P g_placeF1140;
  P g_declsF1139;
  P tup16F1138;
  P x_1119F1137;
  P x_1119F1136;
  P x_1119F1135;
  P x_1119F1134;
  P placeF1133;
  P x_1119F1132;
  P x_1120F1131;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1120_37,2);
  x_1120F1131 = T1;
  FUNINIT(x_1120F1131, 2,FREEREF(0),return_);
  x_1119F1132 = FREEREF(0);
  placeF1133 = YPfalse;
  placeF1133 = BOXFAB(placeF1133);
  T5 = CALL2(1,VARREF(YisaQ),x_1119F1132,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F1132,LITREF(lit_78),x_1120F1131);
    x_1119F1134 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F1134,x_1120F1131);
    BOXVAL(placeF1133) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1119F1134);
    x_1119F1135 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1119F1135,x_1120F1131);
    x_1119F1136 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1136,x_1120F1131);
    T14 = CALL1(1,VARREF(Ytail),x_1119F1135);
    x_1119F1137 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1137,x_1120F1131);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1120F1131,LITREF(lit_7),x_1119F1132);
  }
  T19 = BOXVAL(placeF1133);
  T18 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T19);
  tup16F1138 = T18;
  T21 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1138,YPint((P)0));
  g_declsF1139 = T21;
  T23 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1138,YPint((P)1));
  g_placeF1140 = T23;
  T25 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF1141 = T25;
  T27 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF1142 = T27;
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T37 = CALL1(1,VARREF(Ylst),new_colF1141);
  T38 = CALL1(1,VARREF(Ylst),valF1142);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_11));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T42 = CALL1(1,VARREF(Ylst),g_placeF1140);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T39,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1139,T32,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T46 = CALL1(1,VARREF(Ylst),g_placeF1140);
  T47 = CALL1(1,VARREF(Ylst),new_colF1141);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_11));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T48 = CALL1(1,VARREF(Ylst),valF1142);
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T43,T48,LITREF(lit_11));
  T26 = T28;
  T24 = T26;
  T22 = T24;
  T20 = T22;
  T17 = T20;
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_38,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1124_40) {
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

FUNCODEDEF(fun_41) {
  P return_;
  P g_placeF1154;
  P g_declsF1153;
  P tup18F1152;
  P x_1123F1151;
  P x_1123F1150;
  P x_1123F1149;
  P x_1123F1148;
  P x_1123F1147;
  P callF1146;
  P placeF1145;
  P x_1123F1144;
  P x_1124F1143;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1124_40,2);
  x_1124F1143 = T1;
  FUNINIT(x_1124F1143, 2,FREEREF(0),return_);
  x_1123F1144 = FREEREF(0);
  placeF1145 = YPfalse;
  placeF1145 = BOXFAB(placeF1145);
  callF1146 = YPfalse;
  callF1146 = BOXFAB(callF1146);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F1144,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F1144,LITREF(lit_85),x_1124F1143);
    x_1123F1147 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1147,x_1124F1143);
    BOXVAL(placeF1145) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F1147);
    x_1123F1148 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1148,x_1124F1143);
    BOXVAL(callF1146) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1123F1148);
    x_1123F1149 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1123F1149,x_1124F1143);
    x_1123F1150 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1150,x_1124F1143);
    T19 = CALL1(1,VARREF(Ytail),x_1123F1149);
    x_1123F1151 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1151,x_1124F1143);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1124F1143,LITREF(lit_7),x_1123F1144);
  }
  T24 = BOXVAL(placeF1145);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup18F1152 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1152,YPint((P)0));
  g_declsF1153 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1152,YPint((P)1));
  g_placeF1154 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1154);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1153,T33,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T40 = CALL1(1,VARREF(Ylst),g_placeF1154);
  T42 = BOXVAL(callF1146);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T37,LITREF(lit_11));
  T27 = T29;
  T25 = T27;
  T22 = T25;
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_41,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1128_43) {
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

FUNCODEDEF(fun_44) {
  P return_;
  P g_placeF1166;
  P g_declsF1165;
  P tup20F1164;
  P x_1127F1163;
  P x_1127F1162;
  P x_1127F1161;
  P x_1127F1160;
  P x_1127F1159;
  P valueF1158;
  P placeF1157;
  P x_1127F1156;
  P x_1128F1155;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1128_43,2);
  x_1128F1155 = T1;
  FUNINIT(x_1128F1155, 2,FREEREF(0),return_);
  x_1127F1156 = FREEREF(0);
  placeF1157 = YPfalse;
  placeF1157 = BOXFAB(placeF1157);
  valueF1158 = YPfalse;
  valueF1158 = BOXFAB(valueF1158);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F1156,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F1156,LITREF(lit_91),x_1128F1155);
    x_1127F1159 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1159,x_1128F1155);
    BOXVAL(placeF1157) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F1159);
    x_1127F1160 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1160,x_1128F1155);
    BOXVAL(valueF1158) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1127F1160);
    x_1127F1161 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1127F1161,x_1128F1155);
    x_1127F1162 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1162,x_1128F1155);
    T19 = CALL1(1,VARREF(Ytail),x_1127F1161);
    x_1127F1163 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1163,x_1128F1155);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1128F1155,LITREF(lit_7),x_1127F1156);
  }
  T24 = BOXVAL(placeF1157);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup20F1164 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1164,YPint((P)0));
  g_declsF1165 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1164,YPint((P)1));
  g_placeF1166 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1166);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1165,T33,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T40 = CALL1(1,VARREF(Ylst),g_placeF1166);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T44 = CALL1(1,VARREF(Ylst),g_placeF1166);
  T46 = BOXVAL(valueF1158);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T45,LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T37,LITREF(lit_11));
  T27 = T29;
  T25 = T27;
  T22 = T25;
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_44,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1132_46) {
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

FUNCODEDEF(fun_47) {
  P return_;
  P x_1131F1175;
  P x_1131F1174;
  P x_1131F1173;
  P x_1131F1172;
  P x_1131F1171;
  P bodyF1170;
  P testF1169;
  P x_1131F1168;
  P x_1132F1167;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1132_46,2);
  x_1132F1167 = T1;
  FUNINIT(x_1132F1167, 2,FREEREF(0),return_);
  x_1131F1168 = FREEREF(0);
  testF1169 = YPfalse;
  testF1169 = BOXFAB(testF1169);
  bodyF1170 = YPfalse;
  bodyF1170 = BOXFAB(bodyF1170);
  T7 = CALL2(1,VARREF(YisaQ),x_1131F1168,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F1168,LITREF(lit_97),x_1132F1167);
    x_1131F1171 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F1171,x_1132F1167);
    BOXVAL(testF1169) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1131F1171);
    x_1131F1172 = T12;
    BOXVAL(bodyF1170) = x_1131F1172;
    x_1131F1173 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1131F1173,x_1132F1167);
    x_1131F1174 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1174,x_1132F1167);
    T17 = CALL1(1,VARREF(Ytail),x_1131F1173);
    x_1131F1175 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1175,x_1132F1167);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1132F1167,LITREF(lit_7),x_1131F1168);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T26 = BOXVAL(testF1169);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T30 = BOXVAL(bodyF1170);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T27,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_47,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1136_49) {
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

FUNCODEDEF(fun_50) {
  P return_;
  P x_1135F1184;
  P x_1135F1183;
  P x_1135F1182;
  P x_1135F1181;
  P x_1135F1180;
  P bodyF1179;
  P testF1178;
  P x_1135F1177;
  P x_1136F1176;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1136_49,2);
  x_1136F1176 = T1;
  FUNINIT(x_1136F1176, 2,FREEREF(0),return_);
  x_1135F1177 = FREEREF(0);
  testF1178 = YPfalse;
  testF1178 = BOXFAB(testF1178);
  bodyF1179 = YPfalse;
  bodyF1179 = BOXFAB(bodyF1179);
  T7 = CALL2(1,VARREF(YisaQ),x_1135F1177,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F1177,LITREF(lit_105),x_1136F1176);
    x_1135F1180 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1135F1180,x_1136F1176);
    BOXVAL(testF1178) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1135F1180);
    x_1135F1181 = T12;
    BOXVAL(bodyF1179) = x_1135F1181;
    x_1135F1182 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1135F1182,x_1136F1176);
    x_1135F1183 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F1183,x_1136F1176);
    T17 = CALL1(1,VARREF(Ytail),x_1135F1182);
    x_1135F1184 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F1184,x_1136F1176);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1136F1176,LITREF(lit_7),x_1135F1177);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T23 = BOXVAL(testF1178);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T27 = BOXVAL(bodyF1179);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T24,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_50,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1144_52) {
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

FUNCODEDEF(fun_x_1146_53) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1148_54) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_11));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_11));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T18 = BOXVAL(FREEREF(1));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,LITREF(lit_11));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1147F1186;
  P x_1148F1185;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1148_54,3);
  x_1148F1185 = T1;
  FUNINIT(x_1148F1185, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1147F1186 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1147F1186,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F1186,x_1148F1185);
  } else {
    T6 = CALL2(1,x_1148F1185,LITREF(lit_7),x_1147F1186);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1145F1194;
  P x_1145F1193;
  P x_1145F1192;
  P x_1145F1191;
  P restF1190;
  P xF1189;
  P x_1145F1188;
  P x_1146F1187;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1146_53,1);
  x_1146F1187 = T1;
  FUNINIT(x_1146F1187, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1145F1188 = T3;
  xF1189 = YPfalse;
  xF1189 = BOXFAB(xF1189);
  restF1190 = YPfalse;
  restF1190 = BOXFAB(restF1190);
  T8 = CALL2(1,VARREF(YisaQ),x_1145F1188,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1145F1188,x_1146F1187);
    BOXVAL(xF1189) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1145F1188);
    x_1145F1191 = T11;
    BOXVAL(restF1190) = x_1145F1191;
    x_1145F1192 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1145F1192,x_1146F1187);
    x_1145F1193 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1145F1193,x_1146F1187);
    T16 = CALL1(1,VARREF(Ytail),x_1145F1192);
    x_1145F1194 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1145F1194,x_1146F1187);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1146F1187,LITREF(lit_7),x_1145F1188);
  }
  T20 = FUNFAB(fun_55,2,xF1189,restF1190);
  T19 = with_exit(T20);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1143F1201;
  P x_1143F1200;
  P x_1143F1199;
  P x_1143F1198;
  P restF1197;
  P x_1143F1196;
  P x_1144F1195;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1144_52,2);
  x_1144F1195 = T1;
  FUNINIT(x_1144F1195, 2,FREEREF(0),return_);
  x_1143F1196 = FREEREF(0);
  restF1197 = YPfalse;
  restF1197 = BOXFAB(restF1197);
  T5 = CALL2(1,VARREF(YisaQ),x_1143F1196,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1143F1196,LITREF(lit_92),x_1144F1195);
    x_1143F1198 = T7;
    BOXVAL(restF1197) = x_1143F1198;
    x_1143F1199 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1143F1199,x_1144F1195);
    x_1143F1200 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1200,x_1144F1195);
    T12 = CALL1(1,VARREF(Ytail),x_1143F1199);
    x_1143F1201 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1201,x_1144F1195);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1144F1195,LITREF(lit_7),x_1143F1196);
  }
  T16 = FUNFAB(fun_56,1,restF1197);
  T15 = with_exit(T16);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_57,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1156_59) {
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

FUNCODEDEF(fun_x_1158_60) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1160_61) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_11));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_11));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
  T17 = BOXVAL(FREEREF(1));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T18,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,LITREF(lit_11));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1159F1203;
  P x_1160F1202;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1160_61,3);
  x_1160F1202 = T1;
  FUNINIT(x_1160F1202, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1159F1203 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1159F1203,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F1203,x_1160F1202);
  } else {
    T6 = CALL2(1,x_1160F1202,LITREF(lit_7),x_1159F1203);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1157F1211;
  P x_1157F1210;
  P x_1157F1209;
  P x_1157F1208;
  P restF1207;
  P xF1206;
  P x_1157F1205;
  P x_1158F1204;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1158_60,1);
  x_1158F1204 = T1;
  FUNINIT(x_1158F1204, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1157F1205 = T3;
  xF1206 = YPfalse;
  xF1206 = BOXFAB(xF1206);
  restF1207 = YPfalse;
  restF1207 = BOXFAB(restF1207);
  T8 = CALL2(1,VARREF(YisaQ),x_1157F1205,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1157F1205,x_1158F1204);
    BOXVAL(xF1206) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1157F1205);
    x_1157F1208 = T11;
    BOXVAL(restF1207) = x_1157F1208;
    x_1157F1209 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1157F1209,x_1158F1204);
    x_1157F1210 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F1210,x_1158F1204);
    T16 = CALL1(1,VARREF(Ytail),x_1157F1209);
    x_1157F1211 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F1211,x_1158F1204);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1158F1204,LITREF(lit_7),x_1157F1205);
  }
  T20 = FUNFAB(fun_62,2,xF1206,restF1207);
  T19 = with_exit(T20);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1155F1218;
  P x_1155F1217;
  P x_1155F1216;
  P x_1155F1215;
  P restF1214;
  P x_1155F1213;
  P x_1156F1212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1156_59,2);
  x_1156F1212 = T1;
  FUNINIT(x_1156F1212, 2,FREEREF(0),return_);
  x_1155F1213 = FREEREF(0);
  restF1214 = YPfalse;
  restF1214 = BOXFAB(restF1214);
  T5 = CALL2(1,VARREF(YisaQ),x_1155F1213,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1155F1213,LITREF(lit_121),x_1156F1212);
    x_1155F1215 = T7;
    BOXVAL(restF1214) = x_1155F1215;
    x_1155F1216 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1155F1216,x_1156F1212);
    x_1155F1217 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1217,x_1156F1212);
    T12 = CALL1(1,VARREF(Ytail),x_1155F1216);
    x_1155F1218 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1218,x_1156F1212);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1156F1212,LITREF(lit_7),x_1155F1213);
  }
  T16 = FUNFAB(fun_63,1,restF1214);
  T15 = with_exit(T16);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_64,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1166_66) {
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

FUNCODEDEF(fun_x_1168_67) {
  P msg_,args_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_136),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P return_;
  P x_1167F1226;
  P x_1167F1225;
  P x_1167F1224;
  P x_1167F1223;
  P bodyF1222;
  P condF1221;
  P x_1167F1220;
  P x_1168F1219;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1168_67,2);
  x_1168F1219 = T1;
  FUNINIT(x_1168F1219, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1167F1220 = T3;
  condF1221 = YPfalse;
  condF1221 = BOXFAB(condF1221);
  bodyF1222 = YPfalse;
  bodyF1222 = BOXFAB(bodyF1222);
  T9 = CALL2(1,VARREF(YisaQ),x_1167F1220,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1167F1220,x_1168F1219);
    BOXVAL(condF1221) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1167F1220);
    x_1167F1223 = T12;
    BOXVAL(bodyF1222) = x_1167F1223;
    x_1167F1224 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1167F1224,x_1168F1219);
    x_1167F1225 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F1225,x_1168F1219);
    T17 = CALL1(1,VARREF(Ytail),x_1167F1224);
    x_1167F1226 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F1226,x_1168F1219);
    T14 = T18;
    T13 = T14;
    T10 = T13;
  } else {
    T19 = CALL2(1,x_1168F1219,LITREF(lit_7),x_1167F1220);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T23 = BOXVAL(condF1221);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T27 = BOXVAL(bodyF1222);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T32 = BOXVAL(FREEREF(0));
  T31 = CALL1(1,VARREF(Ytail),T32);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_11));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T24,T28,LITREF(lit_11));
  T7 = T20;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1165F1233;
  P x_1165F1232;
  P x_1165F1231;
  P x_1165F1230;
  P casesF1229;
  P x_1165F1228;
  P x_1166F1227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1166_66,2);
  x_1166F1227 = T1;
  FUNINIT(x_1166F1227, 2,FREEREF(0),return_);
  x_1165F1228 = FREEREF(0);
  casesF1229 = YPfalse;
  casesF1229 = BOXFAB(casesF1229);
  T5 = CALL2(1,VARREF(YisaQ),x_1165F1228,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1165F1228,LITREF(lit_132),x_1166F1227);
    x_1165F1230 = T7;
    BOXVAL(casesF1229) = x_1165F1230;
    x_1165F1231 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1165F1231,x_1166F1227);
    x_1165F1232 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F1232,x_1166F1227);
    T12 = CALL1(1,VARREF(Ytail),x_1165F1231);
    x_1165F1233 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F1233,x_1166F1227);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1166F1227,LITREF(lit_7),x_1165F1228);
  }
  T17 = BOXVAL(casesF1229);
  T16 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T17);
  if (T16 != YPfalse) {
    T15 = YPfalse;
  } else {
    T19 = FUNFAB(fun_68,1,casesF1229);
    T18 = with_exit(T19);
    T15 = T18;
  }
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_69,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1174_71) {
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

FUNCODEDEF(fun_x_1176_72) {
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

FUNCODEDEF(fun_73) {
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

FUNCODEDEF(fun_74) {
  P return_;
  P x_1175F1239;
  P x_1175F1238;
  P x_1175F1237;
  P valuesF1236;
  P x_1175F1235;
  P x_1176F1234;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1176_72,2);
  x_1176F1234 = T1;
  FUNINIT(x_1176F1234, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1175F1235 = T3;
  valuesF1236 = YPfalse;
  valuesF1236 = BOXFAB(valuesF1236);
  T6 = CALL2(1,VARREF(YisaQ),x_1175F1235,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF1236) = x_1175F1235;
    x_1175F1237 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1175F1237,x_1176F1234);
    x_1175F1238 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1238,x_1176F1234);
    T11 = CALL1(1,VARREF(Ytail),x_1175F1237);
    x_1175F1239 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1239,x_1176F1234);
    T8 = T12;
    T7 = T8;
  } else {
    T13 = CALL2(1,x_1176F1234,LITREF(lit_7),x_1175F1235);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T20 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T21 = BOXVAL(valuesF1236);
  T19 = CALL2(1,VARREF(YgooSmacrosYmap),T20,T21);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T25 = BOXVAL(FREEREF(4));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T28 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T27 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),FREEREF(3),FREEREF(2),T28);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T14 = CALL5(1,VARREF(YgooSmacrosYcat),T15,T16,T22,T26,LITREF(lit_11));
  T4 = T14;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1173F1247;
  P x_1173F1246;
  P x_1173F1245;
  P x_1173F1244;
  P bodyF1243;
  P condF1242;
  P x_1173F1241;
  P x_1174F1240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1174_71,2);
  x_1174F1240 = T1;
  FUNINIT(x_1174F1240, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1173F1241 = T3;
  condF1242 = YPfalse;
  condF1242 = BOXFAB(condF1242);
  bodyF1243 = YPfalse;
  bodyF1243 = BOXFAB(bodyF1243);
  T8 = CALL2(1,VARREF(YisaQ),x_1173F1241,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1173F1241,x_1174F1240);
    BOXVAL(condF1242) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1173F1241);
    x_1173F1244 = T11;
    BOXVAL(bodyF1243) = x_1173F1244;
    x_1173F1245 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1173F1245,x_1174F1240);
    x_1173F1246 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1173F1246,x_1174F1240);
    T16 = CALL1(1,VARREF(Ytail),x_1173F1245);
    x_1173F1247 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1173F1247,x_1174F1240);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1174F1240,LITREF(lit_7),x_1173F1241);
  }
  T21 = BOXVAL(condF1242);
  T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,YPtrue);
  if (T20 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T24 = BOXVAL(bodyF1243);
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_11));
    T19 = T22;
  } else {
    T26 = FUNFAB(fun_74,5,FREEREF(0),condF1242,FREEREF(1),FREEREF(2),bodyF1243);
    T25 = with_exit(T26);
    T19 = T25;
  }
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYdo_case_by) {
  P val_,tst_,cases_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(val_, 0);
  ARG(tst_, 1);
  ARG(cases_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),cases_);
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

FUNCODEDEF(fun_x_1180_77) {
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

FUNCODEDEF(fun_78) {
  P return_;
  P tst_varF1260;
  P val_varF1259;
  P x_1179F1258;
  P x_1179F1257;
  P x_1179F1256;
  P x_1179F1255;
  P x_1179F1254;
  P x_1179F1253;
  P casesF1252;
  P tstF1251;
  P valF1250;
  P x_1179F1249;
  P x_1180F1248;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1180_77,2);
  x_1180F1248 = T1;
  FUNINIT(x_1180F1248, 2,FREEREF(0),return_);
  x_1179F1249 = FREEREF(0);
  valF1250 = YPfalse;
  valF1250 = BOXFAB(valF1250);
  tstF1251 = YPfalse;
  tstF1251 = BOXFAB(tstF1251);
  casesF1252 = YPfalse;
  casesF1252 = BOXFAB(casesF1252);
  T9 = CALL2(1,VARREF(YisaQ),x_1179F1249,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F1249,LITREF(lit_152),x_1180F1248);
    x_1179F1253 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1253,x_1180F1248);
    BOXVAL(valF1250) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1179F1253);
    x_1179F1254 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1254,x_1180F1248);
    BOXVAL(tstF1251) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1179F1254);
    x_1179F1255 = T17;
    BOXVAL(casesF1252) = x_1179F1255;
    x_1179F1256 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1179F1256,x_1180F1248);
    x_1179F1257 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1257,x_1180F1248);
    T22 = CALL1(1,VARREF(Ytail),x_1179F1256);
    x_1179F1258 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1258,x_1180F1248);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1180F1248,LITREF(lit_7),x_1179F1249);
  }
  T26 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF1259 = T26;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF1260 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = CALL1(1,VARREF(Ylst),val_varF1259);
  T37 = BOXVAL(valF1250);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = CALL1(1,VARREF(Ylst),tst_varF1260);
  T42 = BOXVAL(tstF1251);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T38,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T45 = BOXVAL(casesF1252);
  T44 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF1259,tst_varF1260,T45);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T43,LITREF(lit_11));
  T27 = T29;
  T25 = T27;
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_78,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1184_80) {
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

FUNCODEDEF(fun_81) {
  P return_;
  P x_1183F1269;
  P x_1183F1268;
  P x_1183F1267;
  P x_1183F1266;
  P x_1183F1265;
  P casesF1264;
  P valF1263;
  P x_1183F1262;
  P x_1184F1261;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1184_80,2);
  x_1184F1261 = T1;
  FUNINIT(x_1184F1261, 2,FREEREF(0),return_);
  x_1183F1262 = FREEREF(0);
  valF1263 = YPfalse;
  valF1263 = BOXFAB(valF1263);
  casesF1264 = YPfalse;
  casesF1264 = BOXFAB(casesF1264);
  T7 = CALL2(1,VARREF(YisaQ),x_1183F1262,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1183F1262,LITREF(lit_157),x_1184F1261);
    x_1183F1265 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F1265,x_1184F1261);
    BOXVAL(valF1263) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1183F1265);
    x_1183F1266 = T12;
    BOXVAL(casesF1264) = x_1183F1266;
    x_1183F1267 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1183F1267,x_1184F1261);
    x_1183F1268 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F1268,x_1184F1261);
    T17 = CALL1(1,VARREF(Ytail),x_1183F1267);
    x_1183F1269 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F1269,x_1184F1261);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1184F1261,LITREF(lit_7),x_1183F1262);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T23 = BOXVAL(valF1263);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T25 = BOXVAL(casesF1264);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T24,T25,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_81,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1192_83) {
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

FUNCODEDEF(fun_x_1196_84) {
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

FUNCODEDEF(fun_85) {
  P return_;
  P varF1284;
  P x_1195F1283;
  P x_1195F1282;
  P x_1195F1281;
  P x_1195F1280;
  P x_1195F1279;
  P x_1195F1278;
  P x_1195F1277;
  P x_1195F1276;
  P x_1195F1275;
  P restF1274;
  P thenF1273;
  P patF1272;
  P x_1195F1271;
  P x_1196F1270;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1196_84,1);
  x_1196F1270 = T1;
  FUNINIT(x_1196F1270, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1195F1271 = T3;
  patF1272 = YPfalse;
  patF1272 = BOXFAB(patF1272);
  thenF1273 = YPfalse;
  thenF1273 = BOXFAB(thenF1273);
  restF1274 = YPfalse;
  restF1274 = BOXFAB(restF1274);
  T10 = CALL2(1,VARREF(YisaQ),x_1195F1271,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1271,x_1196F1270);
    x_1195F1275 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1275,x_1196F1270);
    BOXVAL(patF1272) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1195F1275);
    x_1195F1276 = T15;
    BOXVAL(thenF1273) = x_1195F1276;
    x_1195F1277 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1277,x_1196F1270);
    x_1195F1278 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1278,x_1196F1270);
    T20 = CALL1(1,VARREF(Ytail),x_1195F1277);
    x_1195F1279 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1279,x_1196F1270);
    T17 = T21;
    T16 = T17;
    T13 = T16;
    T22 = CALL1(1,VARREF(Ytail),x_1195F1271);
    x_1195F1280 = T22;
    BOXVAL(restF1274) = x_1195F1280;
    x_1195F1281 = Ynil;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1281,x_1196F1270);
    x_1195F1282 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1282,x_1196F1270);
    T27 = CALL1(1,VARREF(Ytail),x_1195F1281);
    x_1195F1283 = T27;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1283,x_1196F1270);
    T24 = T28;
    T23 = T24;
    T11 = T23;
  } else {
    T29 = CALL2(1,x_1196F1270,LITREF(lit_7),x_1195F1271);
  }
  T32 = BOXVAL(patF1272);
  T31 = CALL2(1,VARREF(YgooSmacrosYEE),T32,YPtrue);
  if (T31 != YPfalse) {
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T35 = BOXVAL(thenF1273);
    T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_11));
    T30 = T33;
  } else {
    T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF1284 = T37;
    T39 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T44 = CALL1(1,VARREF(Ylst),varF1284);
    T46 = BOXVAL(FREEREF(1));
    T45 = CALL1(1,VARREF(Ylst),T46);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_11));
    T42 = CALL1(1,VARREF(Ylst),T43);
    T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,LITREF(lit_11));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
    T53 = BOXVAL(patF1272);
    T52 = CALL1(1,VARREF(Ylst),T53);
    T54 = CALL1(1,VARREF(Ylst),varF1284);
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,LITREF(lit_11));
    T50 = CALL1(1,VARREF(Ylst),T51);
    T57 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T58 = BOXVAL(thenF1273);
    T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,LITREF(lit_11));
    T55 = CALL1(1,VARREF(Ylst),T56);
    T61 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
    T62 = CALL1(1,VARREF(Ylst),varF1284);
    T63 = BOXVAL(restF1274);
    T60 = CALL4(1,VARREF(YgooSmacrosYcat),T61,T62,T63,LITREF(lit_11));
    T59 = CALL1(1,VARREF(Ylst),T60);
    T48 = CALL5(1,VARREF(YgooSmacrosYcat),T49,T50,T55,T59,LITREF(lit_11));
    T47 = CALL1(1,VARREF(Ylst),T48);
    T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T47,LITREF(lit_11));
    T36 = T38;
    T30 = T36;
  }
  T8 = T30;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1194_86) {
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

FUNCODEDEF(fun_87) {
  P return_;
  P x_1193F1286;
  P x_1194F1285;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1194_86,3);
  x_1194F1285 = T1;
  FUNINIT(x_1194F1285, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1193F1286 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1193F1286,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1193F1286,x_1194F1285);
  } else {
    T6 = CALL2(1,x_1194F1285,LITREF(lit_7),x_1193F1286);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_11));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P return_;
  P x_1191F1295;
  P x_1191F1294;
  P x_1191F1293;
  P x_1191F1292;
  P x_1191F1291;
  P casesF1290;
  P expF1289;
  P x_1191F1288;
  P x_1192F1287;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1192_83,2);
  x_1192F1287 = T1;
  FUNINIT(x_1192F1287, 2,FREEREF(0),return_);
  x_1191F1288 = FREEREF(0);
  expF1289 = YPfalse;
  expF1289 = BOXFAB(expF1289);
  casesF1290 = YPfalse;
  casesF1290 = BOXFAB(casesF1290);
  T7 = CALL2(1,VARREF(YisaQ),x_1191F1288,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F1288,LITREF(lit_163),x_1192F1287);
    x_1191F1291 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F1291,x_1192F1287);
    BOXVAL(expF1289) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1191F1291);
    x_1191F1292 = T12;
    BOXVAL(casesF1290) = x_1191F1292;
    x_1191F1293 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1293,x_1192F1287);
    x_1191F1294 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1294,x_1192F1287);
    T17 = CALL1(1,VARREF(Ytail),x_1191F1293);
    x_1191F1295 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1295,x_1192F1287);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1192F1287,LITREF(lit_7),x_1191F1288);
  }
  T21 = FUNFAB(fun_87,2,casesF1290,expF1289);
  T20 = with_exit(T21);
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_88,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1200_90) {
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

FUNCODEDEF(fun_91) {
  P return_;
  P x_1199F1306;
  P x_1199F1305;
  P x_1199F1304;
  P x_1199F1303;
  P x_1199F1302;
  P x_1199F1301;
  P argsF1300;
  P messageF1299;
  P condF1298;
  P x_1199F1297;
  P x_1200F1296;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1200_90,2);
  x_1200F1296 = T1;
  FUNINIT(x_1200F1296, 2,FREEREF(0),return_);
  x_1199F1297 = FREEREF(0);
  condF1298 = YPfalse;
  condF1298 = BOXFAB(condF1298);
  messageF1299 = YPfalse;
  messageF1299 = BOXFAB(messageF1299);
  argsF1300 = YPfalse;
  argsF1300 = BOXFAB(argsF1300);
  T9 = CALL2(1,VARREF(YisaQ),x_1199F1297,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1199F1297,LITREF(lit_178),x_1200F1296);
    x_1199F1301 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F1301,x_1200F1296);
    BOXVAL(condF1298) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1199F1301);
    x_1199F1302 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F1302,x_1200F1296);
    BOXVAL(messageF1299) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1199F1302);
    x_1199F1303 = T17;
    BOXVAL(argsF1300) = x_1199F1303;
    x_1199F1304 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1199F1304,x_1200F1296);
    x_1199F1305 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F1305,x_1200F1296);
    T22 = CALL1(1,VARREF(Ytail),x_1199F1304);
    x_1199F1306 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F1306,x_1200F1296);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1200F1296,LITREF(lit_7),x_1199F1297);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T31 = BOXVAL(condF1298);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_179));
  T36 = BOXVAL(messageF1299);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T37 = BOXVAL(argsF1300);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T37,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T32,LITREF(lit_11));
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_91,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1208_93) {
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

FUNCODEDEF(fun_x_1210_94) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1212_95) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T3 = BOXVAL(FREEREF(0));
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

FUNCODEDEF(fun_96) {
  P return_;
  P x_1211F1315;
  P x_1211F1314;
  P x_1211F1313;
  P x_1211F1312;
  P x_1211F1311;
  P valF1310;
  P keyF1309;
  P x_1211F1308;
  P x_1212F1307;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1212_95,3);
  x_1212F1307 = T1;
  FUNINIT(x_1212F1307, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1211F1308 = T3;
  keyF1309 = YPfalse;
  keyF1309 = BOXFAB(keyF1309);
  valF1310 = YPfalse;
  valF1310 = BOXFAB(valF1310);
  T8 = CALL2(1,VARREF(YisaQ),x_1211F1308,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F1308,LITREF(lit_79),x_1212F1307);
    x_1211F1311 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1311,x_1212F1307);
    BOXVAL(keyF1309) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1211F1311);
    x_1211F1312 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1312,x_1212F1307);
    BOXVAL(valF1310) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1211F1312);
    x_1211F1313 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F1313,x_1212F1307);
    x_1211F1314 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1314,x_1212F1307);
    T20 = CALL1(1,VARREF(Ytail),x_1211F1313);
    x_1211F1315 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1315,x_1212F1307);
    T17 = T21;
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T22 = CALL2(1,x_1212F1307,LITREF(lit_7),x_1211F1308);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T28 = BOXVAL(keyF1309);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = BOXVAL(valF1310);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T29,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T37 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_11));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T41 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T38,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T31,LITREF(lit_11));
  T6 = T23;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P stateF1324;
  P x_1209F1323;
  P x_1209F1322;
  P x_1209F1321;
  P x_1209F1320;
  P expF1319;
  P varF1318;
  P x_1209F1317;
  P x_1210F1316;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1210_94,1);
  x_1210F1316 = T1;
  FUNINIT(x_1210F1316, 1,return_);
  x_1209F1317 = FREEREF(0);
  varF1318 = YPfalse;
  varF1318 = BOXFAB(varF1318);
  expF1319 = YPfalse;
  expF1319 = BOXFAB(expF1319);
  T7 = CALL2(1,VARREF(YisaQ),x_1209F1317,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F1317,x_1210F1316);
    BOXVAL(varF1318) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1209F1317);
    x_1209F1320 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F1320,x_1210F1316);
    BOXVAL(expF1319) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1209F1320);
    x_1209F1321 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1209F1321,x_1210F1316);
    x_1209F1322 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1209F1322,x_1210F1316);
    T17 = CALL1(1,VARREF(Ytail),x_1209F1321);
    x_1209F1323 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1209F1323,x_1210F1316);
    T14 = T18;
    T11 = T14;
    T8 = T11;
  } else {
    T19 = CALL2(1,x_1210F1316,LITREF(lit_7),x_1209F1317);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF1324 = T21;
  T23 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T26 = CALL1(1,VARREF(Ylst),stateF1324);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T31 = BOXVAL(expF1319);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_11));
  T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,FREEREF(2));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T35 = CALL1(1,VARREF(Ylst),stateF1324);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_11));
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(3));
  T38 = FUNFAB(fun_96,2,varF1318,stateF1324);
  T37 = with_exit(T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYpair),T37,FREEREF(4));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T42 = CALL1(1,VARREF(Ylst),stateF1324);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_11));
  T39 = CALL2(1,VARREF(YgooSmacrosYpair),T40,FREEREF(5));
  T22 = CALL5(1,FREEREF(6),T23,T24,T32,T36,T39);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF1326;
  P loopF1325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(clauses_, 0);
  ARG(inits_, 1);
  ARG(preds_, 2);
  ARG(nows_, 3);
  ARG(nexts_, 4);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),clauses_);
  if (T1 != YPfalse) {
    T3 = CALL0(1,VARREF(YgooSmacrosYgensym));
    loopF1325 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
    T6 = CALL1(1,VARREF(Ylst),loopF1325);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,LITREF(lit_11));
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF1325);
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,nexts_,LITREF(lit_11));
    T19 = CALL1(1,VARREF(Ylst),T20);
    T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,LITREF(lit_11));
    T14 = CALL1(1,VARREF(Ylst),T15);
    T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T14,LITREF(lit_11));
    T8 = CALL1(1,VARREF(Ylst),T9);
    T4 = CALL5(1,VARREF(YgooSmacrosYcat),T5,T6,T7,T8,LITREF(lit_11));
    T2 = T4;
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF1326 = T23;
    T25 = FUNFAB(fun_97,7,clauseF1326,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF1340;
  P x_1207F1339;
  P x_1207F1338;
  P x_1207F1337;
  P x_1207F1336;
  P x_1207F1335;
  P x_1207F1334;
  P x_1207F1333;
  P x_1207F1332;
  P x_1207F1331;
  P bodyF1330;
  P clausesF1329;
  P x_1207F1328;
  P x_1208F1327;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1208_93,2);
  x_1208F1327 = T1;
  FUNINIT(x_1208F1327, 2,FREEREF(0),return_);
  x_1207F1328 = FREEREF(0);
  clausesF1329 = YPfalse;
  clausesF1329 = BOXFAB(clausesF1329);
  bodyF1330 = YPfalse;
  bodyF1330 = BOXFAB(bodyF1330);
  T7 = CALL2(1,VARREF(YisaQ),x_1207F1328,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F1328,LITREF(lit_184),x_1208F1327);
    x_1207F1331 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1331,x_1208F1327);
    x_1207F1332 = T11;
    BOXVAL(clausesF1329) = x_1207F1332;
    x_1207F1333 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1333,x_1208F1327);
    x_1207F1334 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1334,x_1208F1327);
    T16 = CALL1(1,VARREF(Ytail),x_1207F1333);
    x_1207F1335 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1335,x_1208F1327);
    T13 = T17;
    T12 = T13;
    T18 = CALL1(1,VARREF(Ytail),x_1207F1331);
    x_1207F1336 = T18;
    BOXVAL(bodyF1330) = x_1207F1336;
    x_1207F1337 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1337,x_1208F1327);
    x_1207F1338 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1338,x_1208F1327);
    T23 = CALL1(1,VARREF(Ytail),x_1207F1337);
    x_1207F1339 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1339,x_1208F1327);
    T20 = T24;
    T19 = T20;
    T10 = T19;
    T8 = T10;
  } else {
    T25 = CALL2(1,x_1208F1327,LITREF(lit_7),x_1207F1328);
  }
  T27 = FUNSHELL(1,fun_grok_98,2);
  grokF1340 = T27;
  FUNINIT(grokF1340, 2,bodyF1330,grokF1340);
  T29 = BOXVAL(clausesF1329);
  T28 = CALL5(1,grokF1340,T29,Ynil,Ynil,Ynil,Ynil);
  T26 = T28;
  T5 = T26;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_99,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1216_101) {
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

FUNCODEDEF(fun_102) {
  P return_;
  P x_1215F1349;
  P x_1215F1348;
  P x_1215F1347;
  P x_1215F1346;
  P x_1215F1345;
  P bodyF1344;
  P testF1343;
  P x_1215F1342;
  P x_1216F1341;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1216_101,2);
  x_1216F1341 = T1;
  FUNINIT(x_1216F1341, 2,FREEREF(0),return_);
  x_1215F1342 = FREEREF(0);
  testF1343 = YPfalse;
  testF1343 = BOXFAB(testF1343);
  bodyF1344 = YPfalse;
  bodyF1344 = BOXFAB(bodyF1344);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F1342,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F1342,LITREF(lit_203),x_1216F1341);
    x_1215F1345 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F1345,x_1216F1341);
    BOXVAL(testF1343) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1215F1345);
    x_1215F1346 = T12;
    BOXVAL(bodyF1344) = x_1215F1346;
    x_1215F1347 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F1347,x_1216F1341);
    x_1215F1348 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1348,x_1216F1341);
    T17 = CALL1(1,VARREF(Ytail),x_1215F1347);
    x_1215F1349 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1349,x_1216F1341);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1216F1341,LITREF(lit_7),x_1215F1342);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T23 = CALL1(1,VARREF(Ylst),Ynil);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T28 = BOXVAL(testF1343);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T29 = BOXVAL(bodyF1344);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T29,T30,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T23,T24,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_103) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_102,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1220_104) {
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

FUNCODEDEF(fun_105) {
  P return_;
  P x_1219F1358;
  P x_1219F1357;
  P x_1219F1356;
  P x_1219F1355;
  P x_1219F1354;
  P bodyF1353;
  P testF1352;
  P x_1219F1351;
  P x_1220F1350;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1220_104,2);
  x_1220F1350 = T1;
  FUNINIT(x_1220F1350, 2,FREEREF(0),return_);
  x_1219F1351 = FREEREF(0);
  testF1352 = YPfalse;
  testF1352 = BOXFAB(testF1352);
  bodyF1353 = YPfalse;
  bodyF1353 = BOXFAB(bodyF1353);
  T7 = CALL2(1,VARREF(YisaQ),x_1219F1351,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F1351,LITREF(lit_209),x_1220F1350);
    x_1219F1354 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F1354,x_1220F1350);
    BOXVAL(testF1352) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1219F1354);
    x_1219F1355 = T12;
    BOXVAL(bodyF1353) = x_1219F1355;
    x_1219F1356 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1219F1356,x_1220F1350);
    x_1219F1357 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F1357,x_1220F1350);
    T17 = CALL1(1,VARREF(Ytail),x_1219F1356);
    x_1219F1358 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F1358,x_1220F1350);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1220F1350,LITREF(lit_7),x_1219F1351);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T23 = CALL1(1,VARREF(Ylst),Ynil);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T28 = BOXVAL(testF1352);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T29 = BOXVAL(bodyF1353);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T29,T30,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T23,T24,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_105,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1228_107) {
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

FUNCODEDEF(fun_x_1232_108) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_221),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P return_;
  P old_valueF1374;
  P nameF1373;
  P x_1231F1372;
  P x_1231F1371;
  P x_1231F1370;
  P x_1231F1369;
  P x_1231F1368;
  P x_1231F1367;
  P x_1231F1366;
  P x_1231F1365;
  P x_1231F1364;
  P restF1363;
  P valueF1362;
  P varF1361;
  P x_1231F1360;
  P x_1232F1359;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1232_108,2);
  x_1232F1359 = T1;
  FUNINIT(x_1232F1359, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1231F1360 = T3;
  varF1361 = YPfalse;
  varF1361 = BOXFAB(varF1361);
  valueF1362 = YPfalse;
  valueF1362 = BOXFAB(valueF1362);
  restF1363 = YPfalse;
  restF1363 = BOXFAB(restF1363);
  T10 = CALL2(1,VARREF(YisaQ),x_1231F1360,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1360,x_1232F1359);
    x_1231F1364 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1364,x_1232F1359);
    BOXVAL(varF1361) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F1364);
    x_1231F1365 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1365,x_1232F1359);
    BOXVAL(valueF1362) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1231F1365);
    x_1231F1366 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1366,x_1232F1359);
    x_1231F1367 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1367,x_1232F1359);
    T22 = CALL1(1,VARREF(Ytail),x_1231F1366);
    x_1231F1368 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1368,x_1232F1359);
    T19 = T23;
    T16 = T19;
    T13 = T16;
    T24 = CALL1(1,VARREF(Ytail),x_1231F1360);
    x_1231F1369 = T24;
    BOXVAL(restF1363) = x_1231F1369;
    x_1231F1370 = Ynil;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1370,x_1232F1359);
    x_1231F1371 = T27;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1371,x_1232F1359);
    T29 = CALL1(1,VARREF(Ytail),x_1231F1370);
    x_1231F1372 = T29;
    T30 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1372,x_1232F1359);
    T26 = T30;
    T25 = T26;
    T11 = T25;
  } else {
    T31 = CALL2(1,x_1232F1359,LITREF(lit_7),x_1231F1360);
  }
  T34 = BOXVAL(varF1361);
  T33 = CALL1(1,VARREF(YgooSmacrosYvar_name),T34);
  nameF1373 = T33;
  T36 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF1374 = T36;
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T43 = CALL1(1,VARREF(Ylst),old_valueF1374);
  T44 = CALL1(1,VARREF(Ylst),nameF1373);
  T42 = CALL3(1,VARREF(YgooSmacrosYcat),T43,T44,LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T40 = CALL2(1,VARREF(YgooSmacrosYcat),T41,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_222));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T54 = CALL1(1,VARREF(Ylst),nameF1373);
  T56 = BOXVAL(valueF1362);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_11));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T62 = BOXVAL(restF1363);
  T61 = CALL2(1,VARREF(YgooSmacrosYcat),T62,LITREF(lit_11));
  T60 = CALL1(1,VARREF(Ylst),T61);
  T63 = BOXVAL(FREEREF(1));
  T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T63,LITREF(lit_11));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T57,LITREF(lit_11));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T67 = CALL1(1,VARREF(Ylst),nameF1373);
  T68 = CALL1(1,VARREF(Ylst),old_valueF1374);
  T65 = CALL4(1,VARREF(YgooSmacrosYcat),T66,T67,T68,LITREF(lit_11));
  T64 = CALL1(1,VARREF(Ylst),T65);
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T64,LITREF(lit_11));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T45,LITREF(lit_11));
  T35 = T37;
  T32 = T35;
  T8 = T32;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1230_110) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = FUNFAB(fun_109,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P return_;
  P x_1229F1376;
  P x_1230F1375;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1230_110,3);
  x_1230F1375 = T1;
  FUNINIT(x_1230F1375, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1229F1376 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1229F1376,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1229F1376,x_1230F1375);
  } else {
    T6 = CALL2(1,x_1230F1375,LITREF(lit_7),x_1229F1376);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_11));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P return_;
  P x_1227F1385;
  P x_1227F1384;
  P x_1227F1383;
  P x_1227F1382;
  P x_1227F1381;
  P bodyF1380;
  P bindingsF1379;
  P x_1227F1378;
  P x_1228F1377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1228_107,2);
  x_1228F1377 = T1;
  FUNINIT(x_1228F1377, 2,FREEREF(0),return_);
  x_1227F1378 = FREEREF(0);
  bindingsF1379 = YPfalse;
  bindingsF1379 = BOXFAB(bindingsF1379);
  bodyF1380 = YPfalse;
  bodyF1380 = BOXFAB(bodyF1380);
  T7 = CALL2(1,VARREF(YisaQ),x_1227F1378,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F1378,LITREF(lit_214),x_1228F1377);
    x_1227F1381 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F1381,x_1228F1377);
    BOXVAL(bindingsF1379) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1227F1381);
    x_1227F1382 = T12;
    BOXVAL(bodyF1380) = x_1227F1382;
    x_1227F1383 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1383,x_1228F1377);
    x_1227F1384 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1384,x_1228F1377);
    T17 = CALL1(1,VARREF(Ytail),x_1227F1383);
    x_1227F1385 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1385,x_1228F1377);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1228F1377,LITREF(lit_7),x_1227F1378);
  }
  T21 = FUNFAB(fun_111,2,bindingsF1379,bodyF1380);
  T20 = with_exit(T21);
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_112,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_114) {
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

FUNCODEDEF(fun_115) {
  P return_;
  P vnamF1397;
  P typF1396;
  P namF1395;
  P x_1235F1394;
  P x_1235F1393;
  P x_1235F1392;
  P x_1235F1391;
  P x_1235F1390;
  P valueF1389;
  P varF1388;
  P x_1235F1387;
  P x_1236F1386;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1236_114,2);
  x_1236F1386 = T1;
  FUNINIT(x_1236F1386, 2,FREEREF(0),return_);
  x_1235F1387 = FREEREF(0);
  varF1388 = YPfalse;
  varF1388 = BOXFAB(varF1388);
  valueF1389 = YPfalse;
  valueF1389 = BOXFAB(valueF1389);
  T7 = CALL2(1,VARREF(YisaQ),x_1235F1387,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F1387,LITREF(lit_227),x_1236F1386);
    x_1235F1390 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1390,x_1236F1386);
    BOXVAL(varF1388) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1235F1390);
    x_1235F1391 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1391,x_1236F1386);
    BOXVAL(valueF1389) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1235F1391);
    x_1235F1392 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1235F1392,x_1236F1386);
    x_1235F1393 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1393,x_1236F1386);
    T19 = CALL1(1,VARREF(Ytail),x_1235F1392);
    x_1235F1394 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1394,x_1236F1386);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1236F1386,LITREF(lit_7),x_1235F1387);
  }
  T24 = BOXVAL(varF1388);
  T23 = CALL1(1,VARREF(YgooSmacrosYvar_name),T24);
  namF1395 = T23;
  T27 = BOXVAL(varF1388);
  T26 = CALL1(1,VARREF(YgooSmacrosYvar_type),T27);
  typF1396 = T26;
  T29 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_228),namF1395,LITREF(lit_229));
  vnamF1397 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T35 = CALL1(1,VARREF(Ylst),vnamF1397);
  T37 = BOXVAL(valueF1389);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T41 = CALL1(1,VARREF(Ylst),namF1395);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T45 = CALL1(1,VARREF(Ylst),typF1396);
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T46 = CALL1(1,VARREF(Ylst),vnamF1397);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T42,T46,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T51 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF1395);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T57 = CALL1(1,VARREF(Ylst),typF1396);
  T55 = CALL3(1,VARREF(YgooSmacrosYcat),T56,T57,LITREF(lit_11));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,LITREF(lit_11));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T61 = CALL1(1,VARREF(Ylst),vnamF1397);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,LITREF(lit_11));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T48 = CALL5(1,VARREF(YgooSmacrosYcat),T49,T50,T52,T58,LITREF(lit_11));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T30 = CALL5(1,VARREF(YgooSmacrosYcat),T31,T32,T38,T47,LITREF(lit_11));
  T28 = T30;
  T25 = T28;
  T22 = T25;
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_116) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_115,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_117) {
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

FUNCODEDEF(fun_118) {
  P return_;
  P x_1239F1404;
  P x_1239F1403;
  P x_1239F1402;
  P x_1239F1401;
  P bodyF1400;
  P x_1239F1399;
  P x_1240F1398;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1240_117,2);
  x_1240F1398 = T1;
  FUNINIT(x_1240F1398, 2,FREEREF(0),return_);
  x_1239F1399 = FREEREF(0);
  bodyF1400 = YPfalse;
  bodyF1400 = BOXFAB(bodyF1400);
  T5 = CALL2(1,VARREF(YisaQ),x_1239F1399,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F1399,LITREF(lit_238),x_1240F1398);
    x_1239F1401 = T7;
    BOXVAL(bodyF1400) = x_1239F1401;
    x_1239F1402 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1239F1402,x_1240F1398);
    x_1239F1403 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1403,x_1240F1398);
    T12 = CALL1(1,VARREF(Ytail),x_1239F1402);
    x_1239F1404 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1404,x_1240F1398);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1240F1398,LITREF(lit_7),x_1239F1399);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T22 = CALL1(1,VARREF(Ylst),YPfalse);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T23 = BOXVAL(bodyF1400);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T23,LITREF(lit_11));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_118,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1244_120) {
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

FUNCODEDEF(fun_121) {
  P return_;
  P x_1243F1411;
  P x_1243F1410;
  P x_1243F1409;
  P x_1243F1408;
  P namesF1407;
  P x_1243F1406;
  P x_1244F1405;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1244_120,2);
  x_1244F1405 = T1;
  FUNINIT(x_1244F1405, 2,FREEREF(0),return_);
  x_1243F1406 = FREEREF(0);
  namesF1407 = YPfalse;
  namesF1407 = BOXFAB(namesF1407);
  T5 = CALL2(1,VARREF(YisaQ),x_1243F1406,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F1406,LITREF(lit_244),x_1244F1405);
    x_1243F1408 = T7;
    BOXVAL(namesF1407) = x_1243F1408;
    x_1243F1409 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F1409,x_1244F1405);
    x_1243F1410 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F1410,x_1244F1405);
    T12 = CALL1(1,VARREF(Ytail),x_1243F1409);
    x_1243F1411 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F1411,x_1244F1405);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1244F1405,LITREF(lit_7),x_1243F1406);
  }
  T17 = BOXVAL(namesF1407);
  T16 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T17);
  if (T16 != YPfalse) {
    T15 = YPfalse;
  } else {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
    T23 = CALL1(1,VARREF(Ylst),YPfalse);
    T26 = BOXVAL(namesF1407);
    T25 = CALL1(1,VARREF(Yhead),T26);
    T24 = CALL1(1,VARREF(Ylst),T25);
    T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T24,LITREF(lit_11));
    T20 = CALL1(1,VARREF(Ylst),T21);
    T29 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T32 = BOXVAL(namesF1407);
    T31 = CALL1(1,VARREF(Yhead),T32);
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T35 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T37 = BOXVAL(namesF1407);
    T36 = CALL1(1,VARREF(Ytail),T37);
    T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_11));
    T33 = CALL1(1,VARREF(Ylst),T34);
    T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T27,T33,LITREF(lit_11));
    T15 = T18;
  }
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_121,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1266_123) {
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

FUNCODEDEF(fun_x_1284_124) {
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

FUNCODEDEF(fun_125) {
  P return_;
  P x_1283F1417;
  P x_1283F1416;
  P x_1283F1415;
  P nameF1414;
  P x_1283F1413;
  P x_1284F1412;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1284_124,1);
  x_1284F1412 = T1;
  FUNINIT(x_1284F1412, 1,return_);
  x_1283F1413 = FREEREF(0);
  nameF1414 = YPfalse;
  nameF1414 = BOXFAB(nameF1414);
  T5 = CALL2(1,VARREF(YisaQ),x_1283F1413,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1283F1413,x_1284F1412);
    BOXVAL(nameF1414) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1283F1413);
    x_1283F1415 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1283F1415,x_1284F1412);
    x_1283F1416 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1416,x_1284F1412);
    T12 = CALL1(1,VARREF(Ytail),x_1283F1415);
    x_1283F1417 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1417,x_1284F1412);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1284F1412,LITREF(lit_7),x_1283F1413);
  }
  T17 = BOXVAL(nameF1414);
  T16 = CALL2(1,VARREF(YisaQ),T17,VARREF(YLsymG));
  if (T16 != YPfalse) {
    T20 = BOXVAL(nameF1414);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T23 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T25 = BOXVAL(nameF1414);
    T24 = CALL1(1,VARREF(Ylst),T25);
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_11));
    T21 = CALL1(1,VARREF(Ylst),T22);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T21,LITREF(lit_11));
    T15 = T18;
  } else {
    T15 = Ynil;
  }
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1281_126) {
  P msg_,args_;
  P x_1282F1418;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1282F1418 = FREEREF(0);
  T3 = FUNFAB(fun_125,1,x_1282F1418);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P return_;
  P x_1280F1427;
  P x_1280F1426;
  P x_1280F1425;
  P x_1280F1424;
  P x_1280F1423;
  P restF1422;
  P nameF1421;
  P x_1280F1420;
  P x_1281F1419;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1281_126,2);
  x_1281F1419 = T1;
  FUNINIT(x_1281F1419, 2,FREEREF(0),return_);
  x_1280F1420 = FREEREF(0);
  nameF1421 = YPfalse;
  nameF1421 = BOXFAB(nameF1421);
  restF1422 = YPfalse;
  restF1422 = BOXFAB(restF1422);
  T7 = CALL2(1,VARREF(YisaQ),x_1280F1420,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1280F1420,LITREF(lit_269),x_1281F1419);
    x_1280F1423 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1280F1423,x_1281F1419);
    BOXVAL(nameF1421) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1280F1423);
    x_1280F1424 = T12;
    BOXVAL(restF1422) = x_1280F1424;
    x_1280F1425 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1280F1425,x_1281F1419);
    x_1280F1426 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F1426,x_1281F1419);
    T17 = CALL1(1,VARREF(Ytail),x_1280F1425);
    x_1280F1427 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F1427,x_1281F1419);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1281F1419,LITREF(lit_7),x_1280F1420);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T27 = BOXVAL(nameF1421);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1278_128) {
  P msg_,args_;
  P x_1279F1428;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1279F1428 = FREEREF(0);
  T3 = FUNFAB(fun_127,2,x_1279F1428,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  P return_;
  P x_1277F1437;
  P x_1277F1436;
  P x_1277F1435;
  P x_1277F1434;
  P x_1277F1433;
  P restF1432;
  P nameF1431;
  P x_1277F1430;
  P x_1278F1429;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1278_128,3);
  x_1278F1429 = T1;
  FUNINIT(x_1278F1429, 3,FREEREF(0),FREEREF(1),return_);
  x_1277F1430 = FREEREF(0);
  nameF1431 = YPfalse;
  nameF1431 = BOXFAB(nameF1431);
  restF1432 = YPfalse;
  restF1432 = BOXFAB(restF1432);
  T7 = CALL2(1,VARREF(YisaQ),x_1277F1430,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1277F1430,LITREF(lit_270),x_1278F1429);
    x_1277F1433 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1277F1433,x_1278F1429);
    BOXVAL(nameF1431) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1277F1433);
    x_1277F1434 = T12;
    BOXVAL(restF1432) = x_1277F1434;
    x_1277F1435 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1277F1435,x_1278F1429);
    x_1277F1436 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F1436,x_1278F1429);
    T17 = CALL1(1,VARREF(Ytail),x_1277F1435);
    x_1277F1437 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F1437,x_1278F1429);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1278F1429,LITREF(lit_7),x_1277F1430);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T27 = BOXVAL(nameF1431);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1275_130) {
  P msg_,args_;
  P x_1276F1438;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1276F1438 = FREEREF(0);
  T3 = FUNFAB(fun_129,2,x_1276F1438,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P return_;
  P x_1274F1447;
  P x_1274F1446;
  P x_1274F1445;
  P x_1274F1444;
  P x_1274F1443;
  P restF1442;
  P nameF1441;
  P x_1274F1440;
  P x_1275F1439;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1275_130,3);
  x_1275F1439 = T1;
  FUNINIT(x_1275F1439, 3,FREEREF(0),FREEREF(1),return_);
  x_1274F1440 = FREEREF(0);
  nameF1441 = YPfalse;
  nameF1441 = BOXFAB(nameF1441);
  restF1442 = YPfalse;
  restF1442 = BOXFAB(restF1442);
  T7 = CALL2(1,VARREF(YisaQ),x_1274F1440,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1274F1440,LITREF(lit_230),x_1275F1439);
    x_1274F1443 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1274F1443,x_1275F1439);
    BOXVAL(nameF1441) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1274F1443);
    x_1274F1444 = T12;
    BOXVAL(restF1442) = x_1274F1444;
    x_1274F1445 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1274F1445,x_1275F1439);
    x_1274F1446 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1274F1446,x_1275F1439);
    T17 = CALL1(1,VARREF(Ytail),x_1274F1445);
    x_1274F1447 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1274F1447,x_1275F1439);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1275F1439,LITREF(lit_7),x_1274F1440);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T27 = BOXVAL(nameF1441);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1272_132) {
  P msg_,args_;
  P x_1273F1448;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1273F1448 = FREEREF(0);
  T3 = FUNFAB(fun_131,2,x_1273F1448,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P x_1271F1457;
  P x_1271F1456;
  P x_1271F1455;
  P x_1271F1454;
  P x_1271F1453;
  P restF1452;
  P nameF1451;
  P x_1271F1450;
  P x_1272F1449;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1272_132,3);
  x_1272F1449 = T1;
  FUNINIT(x_1272F1449, 3,FREEREF(0),FREEREF(1),return_);
  x_1271F1450 = FREEREF(0);
  nameF1451 = YPfalse;
  nameF1451 = BOXFAB(nameF1451);
  restF1452 = YPfalse;
  restF1452 = BOXFAB(restF1452);
  T7 = CALL2(1,VARREF(YisaQ),x_1271F1450,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1271F1450,LITREF(lit_271),x_1272F1449);
    x_1271F1453 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F1453,x_1272F1449);
    BOXVAL(nameF1451) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1271F1453);
    x_1271F1454 = T12;
    BOXVAL(restF1452) = x_1271F1454;
    x_1271F1455 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F1455,x_1272F1449);
    x_1271F1456 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F1456,x_1272F1449);
    T17 = CALL1(1,VARREF(Ytail),x_1271F1455);
    x_1271F1457 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F1457,x_1272F1449);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1272F1449,LITREF(lit_7),x_1271F1450);
  }
  T22 = BOXVAL(nameF1451);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T27 = BOXVAL(nameF1451);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1269_134) {
  P msg_,args_;
  P x_1270F1458;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1270F1458 = FREEREF(0);
  T3 = FUNFAB(fun_133,2,x_1270F1458,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P return_;
  P x_1268F1467;
  P x_1268F1466;
  P x_1268F1465;
  P x_1268F1464;
  P x_1268F1463;
  P restF1462;
  P nameF1461;
  P x_1268F1460;
  P x_1269F1459;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1269_134,3);
  x_1269F1459 = T1;
  FUNINIT(x_1269F1459, 3,FREEREF(0),FREEREF(1),return_);
  x_1268F1460 = FREEREF(0);
  nameF1461 = YPfalse;
  nameF1461 = BOXFAB(nameF1461);
  restF1462 = YPfalse;
  restF1462 = BOXFAB(restF1462);
  T7 = CALL2(1,VARREF(YisaQ),x_1268F1460,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1268F1460,LITREF(lit_272),x_1269F1459);
    x_1268F1463 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1268F1463,x_1269F1459);
    BOXVAL(nameF1461) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1268F1463);
    x_1268F1464 = T12;
    BOXVAL(restF1462) = x_1268F1464;
    x_1268F1465 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1268F1465,x_1269F1459);
    x_1268F1466 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1268F1466,x_1269F1459);
    T17 = CALL1(1,VARREF(Ytail),x_1268F1465);
    x_1268F1467 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1268F1467,x_1269F1459);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1269F1459,LITREF(lit_7),x_1268F1460);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T27 = BOXVAL(nameF1461);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T33 = BOXVAL(nameF1461);
  T32 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T33);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_11));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T23,T28,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  P return_;
  P defsF1476;
  P x_1267F1475;
  P x_1265F1474;
  P x_1265F1473;
  P x_1265F1472;
  P x_1265F1471;
  P defF1470;
  P x_1265F1469;
  P x_1266F1468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1266_123,2);
  x_1266F1468 = T1;
  FUNINIT(x_1266F1468, 2,FREEREF(0),return_);
  x_1265F1469 = FREEREF(0);
  defF1470 = YPfalse;
  defF1470 = BOXFAB(defF1470);
  T5 = CALL2(1,VARREF(YisaQ),x_1265F1469,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F1469,LITREF(lit_250),x_1266F1468);
    x_1265F1471 = T7;
    BOXVAL(defF1470) = x_1265F1471;
    x_1265F1472 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1265F1472,x_1266F1468);
    x_1265F1473 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F1473,x_1266F1468);
    T12 = CALL1(1,VARREF(Ytail),x_1265F1472);
    x_1265F1474 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F1474,x_1266F1468);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1266F1468,LITREF(lit_7),x_1265F1469);
  }
  T17 = BOXVAL(defF1470);
  x_1267F1475 = T17;
  T19 = FUNFAB(fun_135,2,x_1267F1475,defF1470);
  T18 = with_exit(T19);
  T16 = T18;
  defsF1476 = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,defsF1476,LITREF(lit_11));
  T15 = T20;
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_136,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1288_138) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_277),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P x_;
  P xF1477;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T1 = x_;
  } else {
    T3 = CALL1(1,VARREF(Ylst),x_);
    T1 = T3;
  }
  xF1477 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_250));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF1477,LITREF(lit_11));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  P return_;
  P x_1287F1484;
  P x_1287F1483;
  P x_1287F1482;
  P x_1287F1481;
  P defsF1480;
  P x_1287F1479;
  P x_1288F1478;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1288_138,2);
  x_1288F1478 = T1;
  FUNINIT(x_1288F1478, 2,FREEREF(0),return_);
  x_1287F1479 = FREEREF(0);
  defsF1480 = YPfalse;
  defsF1480 = BOXFAB(defsF1480);
  T5 = CALL2(1,VARREF(YisaQ),x_1287F1479,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1287F1479,LITREF(lit_277),x_1288F1478);
    x_1287F1481 = T7;
    BOXVAL(defsF1480) = x_1287F1481;
    x_1287F1482 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1287F1482,x_1288F1478);
    x_1287F1483 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1483,x_1288F1478);
    T12 = CALL1(1,VARREF(Ytail),x_1287F1482);
    x_1287F1484 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1484,x_1288F1478);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1288F1478,LITREF(lit_7),x_1287F1479);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = fun_139;
  T19 = BOXVAL(defsF1480);
  T17 = CALL2(1,VARREF(YgooSmacrosYmap),T18,T19);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_140,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
  P tmpF1499;
  P tmpF1498;
  P tmpF1497;
  P tmpF1496;
  P tmpF1495;
  P tmpF1494;
  P tmpF1493;
  P tmpF1492;
  P tmpF1491;
  P tmpF1490;
  P tmpF1489;
  P tmpF1488;
  P tmpF1487;
  P tmpF1486;
  P tmpF1485;
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
  P T192;
DEFCREGS();
  lit_0 = YPPsym((P)"@checked-next-methods");
  lit_1 = YPPlist(3,YPPsym((P)"met"),YPPsym((P)"nxt-mets"),YPPsym((P)"args"));
  T0 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYOchecked_next_methods = YPmet(FUNCODEREF(YgooSmacrosYOchecked_next_methods),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(10));
  T1 = YgooSmacrosYOchecked_next_methods;
  VARSET(YgooSmacrosYOchecked_next_methods,T1);
  lit_2 = YPPlist(1,YPPsym((P)"exp"));
  lit_3 = YPPlist(1,YPPsym((P)"return"));
  lit_4 = YPPsym((P)"x-1076");
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
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1076_1 = YPmet(FUNCODEREF(fun_x_1076_1),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T3 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T5 = fun_3;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T5);
  lit_17 = YPPlist(1,YPPsym((P)"exp"));
  lit_18 = YPPlist(1,YPPsym((P)"return"));
  lit_19 = YPPsym((P)"x-1080");
  lit_20 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_21 = YPPsym((P)"app-sup");
  T8 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1080_4 = YPmet(FUNCODEREF(fun_x_1080_4),LITREF(lit_19),T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T9 = fun_6;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T9);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  lit_23 = YPPlist(1,YPPsym((P)"return"));
  lit_24 = YPPsym((P)"x-1084");
  lit_25 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_26 = YPPsym((P)"app");
  T12 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1084_7 = YPmet(FUNCODEREF(fun_x_1084_7),LITREF(lit_24),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T13 = fun_9;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T13);
  lit_27 = YPPlist(1,YPPsym((P)"exp"));
  lit_28 = YPPlist(1,YPPsym((P)"return"));
  lit_29 = YPPsym((P)"x-1088");
  lit_30 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_31 = YPPsym((P)"renew");
  lit_32 = YPPsym((P)"set");
  T16 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1088_10 = YPmet(FUNCODEREF(fun_x_1088_10),LITREF(lit_29),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T17 = fun_12;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T17);
  lit_33 = YPPsym((P)"lift-place-subforms");
  lit_34 = YPPlist(1,YPPsym((P)"place"));
  lit_35 = YPPsym((P)"munch");
  lit_36 = YPPlist(1,YPPsym((P)"subforms"));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T20 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T21,Ynil);
  fun_munch_13 = YPmet(FUNCODEREF(fun_munch_13),LITREF(lit_35),T20,ENVNUL,PNUL,sloc(48));
  T19 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T18 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T19,Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_33),T18,ENVNUL,PNUL,sloc(47));
  T22 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T22);
  lit_37 = YPPlist(1,YPPsym((P)"exp"));
  lit_38 = YPPlist(1,YPPsym((P)"return"));
  lit_39 = YPPsym((P)"x-1094");
  lit_40 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_41 = YPPsym((P)"incf");
  lit_42 = YPPlist(1,YPPsym((P)"return"));
  lit_43 = YPPsym((P)"x-1096");
  lit_44 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_45 = YPPsym((P)"+");
  T27 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),LITREF(lit_39),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1096_16 = YPmet(FUNCODEREF(fun_x_1096_16),LITREF(lit_43),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T28 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T28);
  lit_46 = YPPlist(1,YPPsym((P)"exp"));
  lit_47 = YPPlist(1,YPPsym((P)"return"));
  lit_48 = YPPsym((P)"x-1102");
  lit_49 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_50 = YPPsym((P)"decf");
  lit_51 = YPPlist(1,YPPsym((P)"return"));
  lit_52 = YPPsym((P)"x-1104");
  lit_53 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_54 = YPPsym((P)"-");
  T33 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1102_20 = YPmet(FUNCODEREF(fun_x_1102_20),LITREF(lit_48),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1104_21 = YPmet(FUNCODEREF(fun_x_1104_21),LITREF(lit_52),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T34 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T34);
  lit_55 = YPPlist(1,YPPsym((P)"exp"));
  lit_56 = YPPlist(1,YPPsym((P)"return"));
  lit_57 = YPPsym((P)"x-1108");
  lit_58 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_59 = YPPsym((P)"pushf");
  lit_60 = YPPsym((P)"push!");
  T37 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),LITREF(lit_57),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T38 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T38);
  lit_61 = YPPlist(1,YPPsym((P)"exp"));
  lit_62 = YPPlist(1,YPPsym((P)"return"));
  lit_63 = YPPsym((P)"x-1112");
  lit_64 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_65 = YPPsym((P)"swapf");
  T41 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_28 = YPmet(FUNCODEREF(fun_x_1112_28),LITREF(lit_63),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T42 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T42);
  lit_66 = YPPlist(1,YPPsym((P)"exp"));
  lit_67 = YPPlist(1,YPPsym((P)"return"));
  lit_68 = YPPsym((P)"x-1116");
  lit_69 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_70 = YPPsym((P)"rotf");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  lit_72 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  lit_73 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"t"));
  T48 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_31 = YPmet(FUNCODEREF(fun_x_1116_31),LITREF(lit_68),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T47,ENVNUL,PNUL,sloc(89));
  T46 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T49 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"rotf"),T49);
  lit_74 = YPPlist(1,YPPsym((P)"exp"));
  lit_75 = YPPlist(1,YPPsym((P)"return"));
  lit_76 = YPPsym((P)"x-1120");
  lit_77 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_78 = YPPsym((P)"popf");
  lit_79 = YPPsym((P)"tup");
  lit_80 = YPPsym((P)"pop!");
  T52 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_37 = YPmet(FUNCODEREF(fun_x_1120_37),LITREF(lit_76),T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T53 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T53);
  lit_81 = YPPlist(1,YPPsym((P)"exp"));
  lit_82 = YPPlist(1,YPPsym((P)"return"));
  lit_83 = YPPsym((P)"x-1124");
  lit_84 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_85 = YPPsym((P)"opf");
  lit_86 = YPPsym((P)"_");
  T56 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_40 = YPmet(FUNCODEREF(fun_x_1124_40),LITREF(lit_83),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T57 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T57);
  lit_87 = YPPlist(1,YPPsym((P)"exp"));
  lit_88 = YPPlist(1,YPPsym((P)"return"));
  lit_89 = YPPsym((P)"x-1128");
  lit_90 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_91 = YPPsym((P)"or/set");
  lit_92 = YPPsym((P)"or");
  T60 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_43 = YPmet(FUNCODEREF(fun_x_1128_43),LITREF(lit_89),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(LITREF(lit_88),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T61 = fun_45;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or/set"),T61);
  lit_93 = YPPlist(1,YPPsym((P)"exp"));
  lit_94 = YPPlist(1,YPPsym((P)"return"));
  lit_95 = YPPsym((P)"x-1132");
  lit_96 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_97 = YPPsym((P)"unless");
  lit_98 = YPPsym((P)"if");
  lit_99 = YPPsym((P)"not");
  lit_100 = YPPsym((P)"seq");
  T64 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_46 = YPmet(FUNCODEREF(fun_x_1132_46),LITREF(lit_95),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T65 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T65);
  lit_101 = YPPlist(1,YPPsym((P)"exp"));
  lit_102 = YPPlist(1,YPPsym((P)"return"));
  lit_103 = YPPsym((P)"x-1136");
  lit_104 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_105 = YPPsym((P)"when");
  T68 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1136_49 = YPmet(FUNCODEREF(fun_x_1136_49),LITREF(lit_103),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T69 = fun_51;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T69);
  lit_106 = YPPlist(1,YPPsym((P)"exp"));
  lit_107 = YPPlist(1,YPPsym((P)"return"));
  lit_108 = YPPsym((P)"x-1144");
  lit_109 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_110 = YPPlist(1,YPPsym((P)"return"));
  lit_111 = YPPsym((P)"x-1146");
  lit_112 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_113 = YPPlist(1,YPPsym((P)"return"));
  lit_114 = YPPsym((P)"x-1148");
  lit_115 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_116 = YPPsym((P)"tmp");
  T76 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_52 = YPmet(FUNCODEREF(fun_x_1144_52),LITREF(lit_108),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1146_53 = YPmet(FUNCODEREF(fun_x_1146_53),LITREF(lit_111),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_54 = YPmet(FUNCODEREF(fun_x_1148_54),LITREF(lit_114),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T77 = fun_58;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T77);
  lit_117 = YPPlist(1,YPPsym((P)"exp"));
  lit_118 = YPPlist(1,YPPsym((P)"return"));
  lit_119 = YPPsym((P)"x-1156");
  lit_120 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_121 = YPPsym((P)"and");
  lit_122 = YPPlist(1,YPPsym((P)"return"));
  lit_123 = YPPsym((P)"x-1158");
  lit_124 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_125 = YPPlist(1,YPPsym((P)"return"));
  lit_126 = YPPsym((P)"x-1160");
  lit_127 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T84 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1156_59 = YPmet(FUNCODEREF(fun_x_1156_59),LITREF(lit_119),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1158_60 = YPmet(FUNCODEREF(fun_x_1158_60),LITREF(lit_123),T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_61 = YPmet(FUNCODEREF(fun_x_1160_61),LITREF(lit_126),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T85 = fun_65;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T85);
  lit_128 = YPPlist(1,YPPsym((P)"exp"));
  lit_129 = YPPlist(1,YPPsym((P)"return"));
  lit_130 = YPPsym((P)"x-1166");
  lit_131 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_132 = YPPsym((P)"cond");
  lit_133 = YPPlist(1,YPPsym((P)"return"));
  lit_134 = YPPsym((P)"x-1168");
  lit_135 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_136 = YPsb((P)"bad case %=");
  T90 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1166_66 = YPmet(FUNCODEREF(fun_x_1166_66),LITREF(lit_130),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1168_67 = YPmet(FUNCODEREF(fun_x_1168_67),LITREF(lit_134),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(LITREF(lit_133),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T91 = fun_70;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T91);
  lit_137 = YPPsym((P)"do-case-by");
  lit_138 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"tst"),YPPsym((P)"cases"));
  lit_139 = YPPlist(1,YPPsym((P)"return"));
  lit_140 = YPPsym((P)"x-1174");
  lit_141 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_142 = YPsb((P)"bad case %=");
  lit_143 = YPPlist(1,YPPsym((P)"return"));
  lit_144 = YPPsym((P)"x-1176");
  lit_145 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_146 = YPsb((P)"bad case %=");
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1174_71 = YPmet(FUNCODEREF(fun_x_1174_71),LITREF(lit_140),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_72 = YPmet(FUNCODEREF(fun_x_1176_72),LITREF(lit_144),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(LITREF(lit_138),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_137),T92,ENVNUL,PNUL,sloc(148));
  T98 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T98);
  lit_148 = YPPlist(1,YPPsym((P)"exp"));
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-1180");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPsym((P)"case-by");
  T101 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_77 = YPmet(FUNCODEREF(fun_x_1180_77),LITREF(lit_150),T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T102 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T102);
  lit_153 = YPPlist(1,YPPsym((P)"exp"));
  lit_154 = YPPlist(1,YPPsym((P)"return"));
  lit_155 = YPPsym((P)"x-1184");
  lit_156 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_157 = YPPsym((P)"case");
  lit_158 = YPPsym((P)"==");
  T105 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1184_80 = YPmet(FUNCODEREF(fun_x_1184_80),LITREF(lit_155),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T106 = fun_82;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T106);
  lit_159 = YPPlist(1,YPPsym((P)"exp"));
  lit_160 = YPPlist(1,YPPsym((P)"return"));
  lit_161 = YPPsym((P)"x-1192");
  lit_162 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_163 = YPPsym((P)"match");
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-1194");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-1196");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPsb((P)"invalid match syntax.");
  lit_171 = YPPsym((P)"mif");
  lit_172 = YPPsym((P)"syntax-error");
  lit_173 = YPsb((P)"failed to match.");
  T113 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_83 = YPmet(FUNCODEREF(fun_x_1192_83),LITREF(lit_161),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_84 = YPmet(FUNCODEREF(fun_x_1196_84),LITREF(lit_168),T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1194_86 = YPmet(FUNCODEREF(fun_x_1194_86),LITREF(lit_165),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T114 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T114);
  lit_174 = YPPlist(1,YPPsym((P)"exp"));
  lit_175 = YPPlist(1,YPPsym((P)"return"));
  lit_176 = YPPsym((P)"x-1200");
  lit_177 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_178 = YPPsym((P)"assert");
  lit_179 = YPPsym((P)"assert-error");
  T117 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1200_90 = YPmet(FUNCODEREF(fun_x_1200_90),LITREF(lit_176),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T118 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T118);
  lit_180 = YPPlist(1,YPPsym((P)"exp"));
  lit_181 = YPPlist(1,YPPsym((P)"return"));
  lit_182 = YPPsym((P)"x-1208");
  lit_183 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_184 = YPPsym((P)"for");
  lit_185 = YPPsym((P)"grok");
  lit_186 = YPPlist(5,YPPsym((P)"clauses"),YPPsym((P)"inits"),YPPsym((P)"preds"),YPPsym((P)"nows"),YPPsym((P)"nexts"));
  lit_187 = YPPsym((P)"rep");
  lit_188 = YPPlist(1,YPPsym((P)"return"));
  lit_189 = YPPsym((P)"x-1210");
  lit_190 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_191 = YPPsym((P)"enum");
  lit_192 = YPPsym((P)"fin?");
  lit_193 = YPPlist(1,YPPsym((P)"return"));
  lit_194 = YPPsym((P)"x-1212");
  lit_195 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_196 = YPPsym((P)"now");
  lit_197 = YPPsym((P)"now-key");
  lit_198 = YPPsym((P)"nxt");
  T126 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_93 = YPmet(FUNCODEREF(fun_x_1208_93),LITREF(lit_182),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1210_94 = YPmet(FUNCODEREF(fun_x_1210_94),LITREF(lit_189),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_95 = YPmet(FUNCODEREF(fun_x_1212_95),LITREF(lit_194),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(LITREF(lit_193),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(LITREF(lit_186),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_98 = YPmet(FUNCODEREF(fun_grok_98),LITREF(lit_185),T121,ENVNUL,PNUL,sloc(186));
  T120 = YPsig(LITREF(lit_181),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T127 = fun_100;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T127);
  lit_199 = YPPlist(1,YPPsym((P)"exp"));
  lit_200 = YPPlist(1,YPPsym((P)"return"));
  lit_201 = YPPsym((P)"x-1216");
  lit_202 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_203 = YPPsym((P)"while");
  lit_204 = YPPsym((P)"_loop");
  T130 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_101 = YPmet(FUNCODEREF(fun_x_1216_101),LITREF(lit_201),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T131 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T131);
  lit_205 = YPPlist(1,YPPsym((P)"exp"));
  lit_206 = YPPlist(1,YPPsym((P)"return"));
  lit_207 = YPPsym((P)"x-1220");
  lit_208 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_209 = YPPsym((P)"until");
  T134 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1220_104 = YPmet(FUNCODEREF(fun_x_1220_104),LITREF(lit_207),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T135);
  lit_210 = YPPlist(1,YPPsym((P)"exp"));
  lit_211 = YPPlist(1,YPPsym((P)"return"));
  lit_212 = YPPsym((P)"x-1228");
  lit_213 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_214 = YPPsym((P)"dlet");
  lit_215 = YPPlist(1,YPPsym((P)"return"));
  lit_216 = YPPsym((P)"x-1230");
  lit_217 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_218 = YPPlist(1,YPPsym((P)"return"));
  lit_219 = YPPsym((P)"x-1232");
  lit_220 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_221 = YPsb((P)"Bad dlet bindings %=");
  lit_222 = YPPsym((P)"fin");
  T142 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_107 = YPmet(FUNCODEREF(fun_x_1228_107),LITREF(lit_212),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_108 = YPmet(FUNCODEREF(fun_x_1232_108),LITREF(lit_219),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1230_110 = YPmet(FUNCODEREF(fun_x_1230_110),LITREF(lit_216),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T143 = fun_113;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T143);
  lit_223 = YPPlist(1,YPPsym((P)"exp"));
  lit_224 = YPPlist(1,YPPsym((P)"return"));
  lit_225 = YPPsym((P)"x-1236");
  lit_226 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_227 = YPPsym((P)"def-fun-var");
  lit_228 = YPsb((P)"*");
  lit_229 = YPsb((P)"*");
  lit_230 = YPPsym((P)"dv");
  lit_231 = YPPsym((P)"dm");
  lit_232 = YPPsym((P)"=>");
  lit_233 = YPPsym((P)"z");
  T146 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_114 = YPmet(FUNCODEREF(fun_x_1236_114),LITREF(lit_225),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T147 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T147);
  lit_234 = YPPlist(1,YPPsym((P)"exp"));
  lit_235 = YPPlist(1,YPPsym((P)"return"));
  lit_236 = YPPsym((P)"x-1240");
  lit_237 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_238 = YPPsym((P)"without-prop-unbound-errors");
  lit_239 = YPPsym((P)"*report-prop-unbound-errors?*");
  T150 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_117 = YPmet(FUNCODEREF(fun_x_1240_117),LITREF(lit_236),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T151 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T151);
  lit_240 = YPPlist(1,YPPsym((P)"exp"));
  lit_241 = YPPlist(1,YPPsym((P)"return"));
  lit_242 = YPPsym((P)"x-1244");
  lit_243 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_244 = YPPsym((P)"need-implementation");
  lit_245 = YPPsym((P)"export");
  T154 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1244_120 = YPmet(FUNCODEREF(fun_x_1244_120),LITREF(lit_242),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_241),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T155 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T155);
  lit_246 = YPPlist(1,YPPsym((P)"exp"));
  lit_247 = YPPlist(1,YPPsym((P)"return"));
  lit_248 = YPPsym((P)"x-1266");
  lit_249 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_250 = YPPsym((P)"pub");
  lit_251 = YPPlist(1,YPPsym((P)"return"));
  lit_252 = YPPsym((P)"x-1269");
  lit_253 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_254 = YPPlist(1,YPPsym((P)"return"));
  lit_255 = YPPsym((P)"x-1272");
  lit_256 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_257 = YPPlist(1,YPPsym((P)"return"));
  lit_258 = YPPsym((P)"x-1275");
  lit_259 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_260 = YPPlist(1,YPPsym((P)"return"));
  lit_261 = YPPsym((P)"x-1278");
  lit_262 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_263 = YPPlist(1,YPPsym((P)"return"));
  lit_264 = YPPsym((P)"x-1281");
  lit_265 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_266 = YPPlist(1,YPPsym((P)"return"));
  lit_267 = YPPsym((P)"x-1284");
  lit_268 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_269 = YPPsym((P)"dc");
  lit_270 = YPPsym((P)"dg");
  lit_271 = YPPsym((P)"df");
  lit_272 = YPPsym((P)"dp");
  T170 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1266_123 = YPmet(FUNCODEREF(fun_x_1266_123),LITREF(lit_248),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_124 = YPmet(FUNCODEREF(fun_x_1284_124),LITREF(lit_267),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1281_126 = YPmet(FUNCODEREF(fun_x_1281_126),LITREF(lit_264),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1278_128 = YPmet(FUNCODEREF(fun_x_1278_128),LITREF(lit_261),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1275_130 = YPmet(FUNCODEREF(fun_x_1275_130),LITREF(lit_258),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1272_132 = YPmet(FUNCODEREF(fun_x_1272_132),LITREF(lit_255),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_254),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1269_134 = YPmet(FUNCODEREF(fun_x_1269_134),LITREF(lit_252),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T171 = fun_137;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T171);
  lit_273 = YPPlist(1,YPPsym((P)"exp"));
  lit_274 = YPPlist(1,YPPsym((P)"return"));
  lit_275 = YPPsym((P)"x-1288");
  lit_276 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_277 = YPPsym((P)"exported");
  lit_278 = YPPlist(1,YPPsym((P)"x"));
  T175 = YPsig(LITREF(lit_276),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1288_138 = YPmet(FUNCODEREF(fun_x_1288_138),LITREF(lit_275),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(LITREF(lit_278),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(LITREF(lit_274),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T176 = fun_141;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T176);
  tmpF1485 = YPfalse;
  if (tmpF1485 != YPfalse) {
    T177 = VARREF(YgooSmacrosYEE);
  } else {
    T177 = YPfalse;
  }
  tmpF1486 = YPfalse;
  if (tmpF1486 != YPfalse) {
    T178 = VARREF(YgooSmacrosYdo);
  } else {
    T178 = YPfalse;
  }
  tmpF1487 = YPfalse;
  if (tmpF1487 != YPfalse) {
    T179 = VARREF(YgooSmacrosYrevX);
  } else {
    T179 = YPfalse;
  }
  tmpF1488 = YPfalse;
  if (tmpF1488 != YPfalse) {
    T180 = VARREF(YgooSmacrosYcat);
  } else {
    T180 = YPfalse;
  }
  tmpF1489 = YPfalse;
  if (tmpF1489 != YPfalse) {
    T181 = VARREF(YgooSmacrosYelt);
  } else {
    T181 = YPfalse;
  }
  tmpF1490 = YPfalse;
  if (tmpF1490 != YPfalse) {
    T182 = VARREF(YgooSmacrosY1st);
  } else {
    T182 = YPfalse;
  }
  tmpF1491 = YPfalse;
  if (tmpF1491 != YPfalse) {
    T183 = VARREF(YgooSmacrosY2nd);
  } else {
    T183 = YPfalse;
  }
  tmpF1492 = YPfalse;
  if (tmpF1492 != YPfalse) {
    T184 = VARREF(YgooSmacrosYlast);
  } else {
    T184 = YPfalse;
  }
  tmpF1493 = YPfalse;
  if (tmpF1493 != YPfalse) {
    T185 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T185 = YPfalse;
  }
  tmpF1494 = YPfalse;
  if (tmpF1494 != YPfalse) {
    T186 = VARREF(Yerror);
  } else {
    T186 = YPfalse;
  }
  tmpF1495 = YPfalse;
  if (tmpF1495 != YPfalse) {
    T187 = VARREF(YgooSmacrosYgensym);
  } else {
    T187 = YPfalse;
  }
  tmpF1496 = YPfalse;
  if (tmpF1496 != YPfalse) {
    T188 = VARREF(Ylst);
  } else {
    T188 = YPfalse;
  }
  tmpF1497 = YPfalse;
  if (tmpF1497 != YPfalse) {
    T189 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T189 = YPfalse;
  }
  tmpF1498 = YPfalse;
  if (tmpF1498 != YPfalse) {
    T190 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T190 = YPfalse;
  }
  tmpF1499 = YPfalse;
  if (tmpF1499 != YPfalse) {
    T191 = VARREF(YgooSmacrosYmap);
  } else {
    T191 = YPfalse;
  }
  T192 = YPfalse;
  return T192;
}

P YgooSmacrosY___main_1___() {
  P tmpF1510;
  P tmpF1509;
  P tmpF1508;
  P tmpF1507;
  P tmpF1506;
  P tmpF1505;
  P tmpF1504;
  P tmpF1503;
  P tmpF1502;
  P tmpF1501;
  P tmpF1500;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
DEFCREGS();
  tmpF1500 = YPfalse;
  if (tmpF1500 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmap2);
  } else {
    T0 = YPfalse;
  }
  tmpF1501 = YPfalse;
  if (tmpF1501 != YPfalse) {
    T1 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T1 = YPfalse;
  }
  tmpF1502 = YPfalse;
  if (tmpF1502 != YPfalse) {
    T2 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T2 = YPfalse;
  }
  tmpF1503 = YPfalse;
  if (tmpF1503 != YPfalse) {
    T3 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T3 = YPfalse;
  }
  tmpF1504 = YPfalse;
  if (tmpF1504 != YPfalse) {
    T4 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T4 = YPfalse;
  }
  tmpF1505 = YPfalse;
  if (tmpF1505 != YPfalse) {
    T5 = VARREF(YgooSmacrosYpair);
  } else {
    T5 = YPfalse;
  }
  tmpF1506 = YPfalse;
  if (tmpF1506 != YPfalse) {
    T6 = VARREF(Ytup);
  } else {
    T6 = YPfalse;
  }
  tmpF1507 = YPfalse;
  if (tmpF1507 != YPfalse) {
    T7 = VARREF(YgooSmacrosYvar_name);
  } else {
    T7 = YPfalse;
  }
  tmpF1508 = YPfalse;
  if (tmpF1508 != YPfalse) {
    T8 = VARREF(YgooSmacrosYvar_type);
  } else {
    T8 = YPfalse;
  }
  tmpF1509 = YPfalse;
  if (tmpF1509 != YPfalse) {
    T9 = VARREF(YgooSmacrosYnapp);
  } else {
    T9 = YPfalse;
  }
  tmpF1510 = YPfalse;
  if (tmpF1510 != YPfalse) {
    T10 = VARREF(YgooSmacrosYmacro_error);
  } else {
    T10 = YPfalse;
  }
  T11 = YPfalse;
  return T11;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"clone", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"case-by", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"renew", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"assert", PVAR, NULL},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"exported", PVAR, NULL},
  {"decf", PVAR, NULL},
  {"@checked-next-methods", CVAR, &YgooSmacrosYOchecked_next_methods},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"and", PVAR, NULL},
  {"app", PVAR, NULL},
  {"map", CVAR, &YgooSmacrosYmap},
  {"match-empty-list", CVAR, &YgooSmacrosYmatch_empty_list},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"last", CVAR, &YgooSmacrosYlast},
  {"rotf", PVAR, NULL},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"---main-0---", PVAR, NULL},
  {"do", CVAR, &YgooSmacrosYdo},
  {"need-implementation", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"dlet", PVAR, NULL},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"or/set", PVAR, NULL},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"app-sup", PVAR, NULL},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"incf", PVAR, NULL},
  {"match", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"pub", PVAR, NULL},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"until", PVAR, NULL},
  {"popf", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"or", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"opf", PVAR, NULL},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"==", CVAR, &YgooSmacrosYEE},
  {"case", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"pushf", PVAR, NULL},
  {"for", PVAR, NULL},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"sup", PVAR, NULL},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"while", PVAR, NULL},
  {"when", PVAR, NULL},
  {"def-fun-var", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"case-by", NULL},
  {"match-atom", NULL},
  {"renew", NULL},
  {"var-type", NULL},
  {"assert", NULL},
  {"match-unquote", NULL},
  {"exported", NULL},
  {"decf", NULL},
  {"unless", NULL},
  {"@checked-next-methods", NULL},
  {"cat", NULL},
  {"and", NULL},
  {"app", NULL},
  {"map", NULL},
  {"match-empty-list", NULL},
  {"macro-error", NULL},
  {"last", NULL},
  {"rotf", NULL},
  {"var-name", NULL},
  {"do", NULL},
  {"need-implementation", NULL},
  {"or", NULL},
  {"dlet", NULL},
  {"2nd", NULL},
  {"or/set", NULL},
  {"1st", NULL},
  {"app-sup", NULL},
  {"elt", NULL},
  {"fab-setter-name", NULL},
  {"incf", NULL},
  {"match", NULL},
  {"swapf", NULL},
  {"gensym", NULL},
  {"error", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"pub", NULL},
  {"without-prop-unbound-errors", NULL},
  {"until", NULL},
  {"map2", NULL},
  {"opf", NULL},
  {"rev!", NULL},
  {"napp", NULL},
  {"pair", NULL},
  {"cat-sym", NULL},
  {"==", NULL},
  {"lst", NULL},
  {"case", NULL},
  {"cond", NULL},
  {"pushf", NULL},
  {"for", NULL},
  {"match-sublist", NULL},
  {"lift-place-subforms", NULL},
  {"sup", NULL},
  {"empty?", NULL},
  {"while", NULL},
  {"when", NULL},
  {"tup", NULL},
  {"def-fun-var", NULL},
  {"popf", NULL},
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
