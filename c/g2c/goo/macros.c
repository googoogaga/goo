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
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynil,"goo/boot","nil");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yhead,"goo/boot","head");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YLnumG,"goo/boot","<num>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
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
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yas_error,"goo/boot","as-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(YtT,"goo/boot","t*");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
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
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Ynew,"goo/boot","new");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_181);
DEFLIT(lit_210);
DEFLIT(lit_38);
DEFLIT(lit_14);
DEFLIT(lit_124);
DEFLIT(lit_176);
DEFLIT(lit_62);
DEFLIT(lit_51);
DEFLIT(lit_75);
DEFLIT(lit_60);
DEFLIT(lit_48);
DEFLIT(lit_247);
DEFLIT(lit_122);
DEFLIT(lit_209);
DEFLIT(lit_64);
DEFLIT(lit_42);
DEFLIT(lit_55);
DEFLIT(lit_77);
DEFLIT(lit_70);
DEFLIT(lit_194);
DEFLIT(lit_109);
DEFLIT(lit_241);
DEFLIT(lit_106);
DEFLIT(lit_205);
DEFLIT(lit_180);
DEFLIT(lit_44);
DEFLIT(lit_173);
DEFLIT(lit_59);
DEFLIT(lit_235);
DEFLIT(lit_217);
DEFLIT(lit_159);
DEFLIT(lit_273);
DEFLIT(lit_261);
DEFLIT(lit_110);
DEFLIT(lit_161);
DEFLIT(lit_185);
DEFLIT(lit_101);
DEFLIT(lit_129);
DEFLIT(lit_67);
DEFLIT(lit_222);
DEFLIT(lit_146);
DEFLIT(lit_150);
DEFLIT(lit_211);
DEFLIT(lit_164);
DEFLIT(lit_105);
DEFLIT(lit_186);
DEFLIT(lit_18);
DEFLIT(lit_20);
DEFLIT(lit_271);
DEFLIT(lit_66);
DEFLIT(lit_259);
DEFLIT(lit_179);
DEFLIT(lit_166);
DEFLIT(lit_40);
DEFLIT(lit_68);
DEFLIT(lit_167);
DEFLIT(lit_234);
DEFLIT(lit_253);
DEFLIT(lit_245);
DEFLIT(lit_2);
DEFLIT(lit_138);
DEFLIT(lit_137);
DEFLIT(lit_154);
DEFLIT(lit_142);
DEFLIT(lit_175);
DEFLIT(lit_174);
DEFLIT(lit_188);
DEFLIT(lit_16);
DEFLIT(lit_36);
DEFLIT(lit_218);
DEFLIT(lit_183);
DEFLIT(lit_178);
DEFLIT(lit_56);
DEFLIT(lit_92);
DEFLIT(lit_35);
DEFLIT(lit_26);
DEFLIT(lit_102);
DEFLIT(lit_258);
DEFLIT(lit_244);
DEFLIT(lit_219);
DEFLIT(lit_276);
DEFLIT(lit_103);
DEFLIT(lit_104);
DEFLIT(lit_13);
DEFLIT(lit_232);
DEFLIT(lit_73);
DEFLIT(lit_242);
DEFLIT(lit_53);
DEFLIT(lit_74);
DEFLIT(lit_116);
DEFLIT(lit_91);
DEFLIT(lit_213);
DEFLIT(lit_226);
DEFLIT(lit_228);
DEFLIT(lit_202);
DEFLIT(lit_233);
DEFLIT(lit_190);
DEFLIT(lit_246);
DEFLIT(lit_37);
DEFLIT(lit_243);
DEFLIT(lit_257);
DEFLIT(lit_80);
DEFLIT(lit_118);
DEFLIT(lit_184);
DEFLIT(lit_107);
DEFLIT(lit_187);
DEFLIT(lit_28);
DEFLIT(lit_204);
DEFLIT(lit_220);
DEFLIT(lit_207);
DEFLIT(lit_93);
DEFLIT(lit_227);
DEFLIT(lit_231);
DEFLIT(lit_250);
DEFLIT(lit_128);
DEFLIT(lit_270);
DEFLIT(lit_24);
DEFLIT(lit_272);
DEFLIT(lit_0);
DEFLIT(lit_237);
DEFLIT(lit_198);
DEFLIT(lit_126);
DEFLIT(lit_223);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_255);
DEFLIT(lit_177);
DEFLIT(lit_230);
DEFLIT(lit_216);
DEFLIT(lit_158);
DEFLIT(lit_141);
DEFLIT(lit_262);
DEFLIT(lit_114);
DEFLIT(lit_89);
DEFLIT(lit_249);
DEFLIT(lit_49);
DEFLIT(lit_78);
DEFLIT(lit_79);
DEFLIT(lit_197);
DEFLIT(lit_95);
DEFLIT(lit_123);
DEFLIT(lit_135);
DEFLIT(lit_81);
DEFLIT(lit_9);
DEFLIT(lit_152);
DEFLIT(lit_163);
DEFLIT(lit_170);
DEFLIT(lit_172);
DEFLIT(lit_157);
DEFLIT(lit_212);
DEFLIT(lit_65);
DEFLIT(lit_200);
DEFLIT(lit_115);
DEFLIT(lit_47);
DEFLIT(lit_145);
DEFLIT(lit_263);
DEFLIT(lit_5);
DEFLIT(lit_214);
DEFLIT(lit_171);
DEFLIT(lit_196);
DEFLIT(lit_117);
DEFLIT(lit_43);
DEFLIT(lit_71);
DEFLIT(lit_8);
DEFLIT(lit_221);
DEFLIT(lit_148);
DEFLIT(lit_278);
DEFLIT(lit_136);
DEFLIT(lit_203);
DEFLIT(lit_156);
DEFLIT(lit_46);
DEFLIT(lit_4);
DEFLIT(lit_12);
DEFLIT(lit_269);
DEFLIT(lit_252);
DEFLIT(lit_39);
DEFLIT(lit_206);
DEFLIT(lit_50);
DEFLIT(lit_57);
DEFLIT(lit_134);
DEFLIT(lit_111);
DEFLIT(lit_100);
DEFLIT(lit_54);
DEFLIT(lit_76);
DEFLIT(lit_275);
DEFLIT(lit_6);
DEFLIT(lit_127);
DEFLIT(lit_25);
DEFLIT(lit_225);
DEFLIT(lit_193);
DEFLIT(lit_155);
DEFLIT(lit_27);
DEFLIT(lit_208);
DEFLIT(lit_215);
DEFLIT(lit_63);
DEFLIT(lit_41);
DEFLIT(lit_15);
DEFLIT(lit_90);
DEFLIT(lit_151);
DEFLIT(lit_256);
DEFLIT(lit_195);
DEFLIT(lit_168);
DEFLIT(lit_58);
DEFLIT(lit_144);
DEFLIT(lit_139);
DEFLIT(lit_121);
DEFLIT(lit_11);
DEFLIT(lit_98);
DEFLIT(lit_266);
DEFLIT(lit_32);
DEFLIT(lit_149);
DEFLIT(lit_17);
DEFLIT(lit_201);
DEFLIT(lit_147);
DEFLIT(lit_153);
DEFLIT(lit_132);
DEFLIT(lit_99);
DEFLIT(lit_189);
DEFLIT(lit_1);
DEFLIT(lit_21);
DEFLIT(lit_267);
DEFLIT(lit_239);
DEFLIT(lit_160);
DEFLIT(lit_113);
DEFLIT(lit_61);
DEFLIT(lit_97);
DEFLIT(lit_52);
DEFLIT(lit_277);
DEFLIT(lit_31);
DEFLIT(lit_162);
DEFLIT(lit_199);
DEFLIT(lit_96);
DEFLIT(lit_34);
DEFLIT(lit_192);
DEFLIT(lit_87);
DEFLIT(lit_108);
DEFLIT(lit_23);
DEFLIT(lit_86);
DEFLIT(lit_69);
DEFLIT(lit_30);
DEFLIT(lit_236);
DEFLIT(lit_265);
DEFLIT(lit_125);
DEFLIT(lit_182);
DEFLIT(lit_169);
DEFLIT(lit_119);
DEFLIT(lit_112);
DEFLIT(lit_274);
DEFLIT(lit_229);
DEFLIT(lit_88);
DEFLIT(lit_248);
DEFLIT(lit_254);
DEFLIT(lit_251);
DEFLIT(lit_165);
DEFLIT(lit_191);
DEFLIT(lit_140);
DEFLIT(lit_130);
DEFLIT(lit_22);
DEFLIT(lit_85);
DEFLIT(lit_19);
DEFLIT(lit_133);
DEFLIT(lit_82);
DEFLIT(lit_120);
DEFLIT(lit_143);
DEFLIT(lit_29);
DEFLIT(lit_264);
DEFLIT(lit_240);
DEFLIT(lit_3);
DEFLIT(lit_268);
DEFLIT(lit_72);
DEFLIT(lit_84);
DEFLIT(lit_260);
DEFLIT(lit_83);
DEFLIT(lit_238);
DEFLIT(lit_7);
DEFLIT(lit_131);
DEFLIT(lit_94);
DEFLIT(lit_224);

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
  P yF1042;
  P xF1041;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(met_, 0);
  ARG(nxt_mets_, 1);
  NARGS(args_, 2);
  if (nxt_mets_ != YPfalse) {
    xF1041 = nxt_mets_;
    yF1042 = Ynil;
    T3 = (P)YPeqQ(xF1041,yF1042);
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
  P x_1075F1049;
  P x_1075F1048;
  P x_1075F1047;
  P x_1075F1046;
  P argsF1045;
  P x_1075F1044;
  P x_1076F1043;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_1076_1,2);
  x_1076F1043 = T41;
  FUNINIT(x_1076F1043, 2,FREEREF(0),return_);
  x_1075F1044 = FREEREF(0);
  argsF1045 = YPfalse;
  argsF1045 = BOXFAB(argsF1045);
  T1 = CALL2(1,VARREF(YisaQ),x_1075F1044,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F1044,LITREF(lit_6),x_1076F1043);
    x_1075F1046 = T6;
    BOXVAL(argsF1045) = x_1075F1046;
    x_1075F1047 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1075F1047,x_1076F1043);
    x_1075F1048 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F1048,x_1076F1043);
    T5 = CALL1(1,VARREF(Ytail),x_1075F1047);
    x_1075F1049 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F1049,x_1076F1043);
  } else {
    T7 = CALL2(1,x_1076F1043,LITREF(lit_7),x_1075F1044);
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
  T24 = BOXVAL(argsF1045);
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
  T36 = BOXVAL(argsF1045);
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
  P x_1079F1056;
  P x_1079F1055;
  P x_1079F1054;
  P x_1079F1053;
  P argsF1052;
  P x_1079F1051;
  P x_1080F1050;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1080_4,2);
  x_1080F1050 = T37;
  FUNINIT(x_1080F1050, 2,FREEREF(0),return_);
  x_1079F1051 = FREEREF(0);
  argsF1052 = YPfalse;
  argsF1052 = BOXFAB(argsF1052);
  T1 = CALL2(1,VARREF(YisaQ),x_1079F1051,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F1051,LITREF(lit_21),x_1080F1050);
    x_1079F1053 = T6;
    BOXVAL(argsF1052) = x_1079F1053;
    x_1079F1054 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1079F1054,x_1080F1050);
    x_1079F1055 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F1055,x_1080F1050);
    T5 = CALL1(1,VARREF(Ytail),x_1079F1054);
    x_1079F1056 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F1056,x_1080F1050);
  } else {
    T7 = CALL2(1,x_1080F1050,LITREF(lit_7),x_1079F1051);
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
  T24 = BOXVAL(argsF1052);
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
  T36 = BOXVAL(argsF1052);
  T26 = CALL5(1,VARREF(YgooSmacrosYcat),T27,T28,T32,T36,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T25,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P x_1083F1065;
  P x_1083F1064;
  P x_1083F1063;
  P x_1083F1062;
  P x_1083F1061;
  P argsF1060;
  P fF1059;
  P x_1083F1058;
  P x_1084F1057;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1084_7,2);
  x_1084F1057 = T17;
  FUNINIT(x_1084F1057, 2,FREEREF(0),return_);
  x_1083F1058 = FREEREF(0);
  fF1059 = YPfalse;
  fF1059 = BOXFAB(fF1059);
  argsF1060 = YPfalse;
  argsF1060 = BOXFAB(argsF1060);
  T2 = CALL2(1,VARREF(YisaQ),x_1083F1058,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F1058,LITREF(lit_26),x_1084F1057);
    x_1083F1061 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F1061,x_1084F1057);
    BOXVAL(fF1059) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1083F1061);
    x_1083F1062 = T8;
    BOXVAL(argsF1060) = x_1083F1062;
    x_1083F1063 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1083F1063,x_1084F1057);
    x_1083F1064 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F1064,x_1084F1057);
    T6 = CALL1(1,VARREF(Ytail),x_1083F1063);
    x_1083F1065 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F1065,x_1084F1057);
  } else {
    T10 = CALL2(1,x_1084F1057,LITREF(lit_7),x_1083F1058);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T14 = BOXVAL(fF1059);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = BOXVAL(argsF1060);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T15,T16,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P setsF1079;
  P valF1078;
  P initsF1077;
  P setsF1076;
  P varF1075;
  P x_1087F1074;
  P x_1087F1073;
  P x_1087F1072;
  P x_1087F1071;
  P x_1087F1070;
  P prop_initsF1069;
  P xF1068;
  P x_1087F1067;
  P x_1088F1066;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1088_10,2);
  x_1088F1066 = T40;
  FUNINIT(x_1088F1066, 2,FREEREF(0),return_);
  x_1087F1067 = FREEREF(0);
  xF1068 = YPfalse;
  xF1068 = BOXFAB(xF1068);
  prop_initsF1069 = YPfalse;
  prop_initsF1069 = BOXFAB(prop_initsF1069);
  T2 = CALL2(1,VARREF(YisaQ),x_1087F1067,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F1067,LITREF(lit_31),x_1088F1066);
    x_1087F1070 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F1070,x_1088F1066);
    BOXVAL(xF1068) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1087F1070);
    x_1087F1071 = T8;
    BOXVAL(prop_initsF1069) = x_1087F1071;
    x_1087F1072 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1087F1072,x_1088F1066);
    x_1087F1073 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1073,x_1088F1066);
    T6 = CALL1(1,VARREF(Ytail),x_1087F1072);
    x_1087F1074 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1074,x_1088F1066);
  } else {
    T10 = CALL2(1,x_1088F1066,LITREF(lit_7),x_1087F1067);
  }
  T39 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF1075 = T39;
  setsF1076 = Ynil;
  T38 = BOXVAL(prop_initsF1069);
  initsF1077 = T38;
  for (;;) {
    P a45_0,a45_1;
  loop45:
    T22 = CALL1(1,VARREF(YgooSmacrosYemptyQ),initsF1077);
    if (T22 != YPfalse) {
      T23 = CALL1(1,VARREF(YgooSmacrosYrevX),setsF1076);
      T21 = T23;
    } else {
      T37 = CALL1(1,VARREF(Ytail),initsF1077);
      T36 = CALL1(1,VARREF(Yhead),T37);
      valF1078 = T36;
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
      T31 = CALL1(1,VARREF(Yhead),initsF1077);
      T30 = CALL1(1,VARREF(Ylst),T31);
      T32 = CALL1(1,VARREF(Ylst),varF1075);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T32,LITREF(lit_11));
      T28 = CALL1(1,VARREF(Ylst),T29);
      T33 = CALL1(1,VARREF(Ylst),valF1078);
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T33,LITREF(lit_11));
      T25 = CALL2(1,VARREF(YgooSmacrosYpair),T26,setsF1076);
      T35 = CALL1(1,VARREF(Ytail),initsF1077);
      T34 = CALL1(1,VARREF(Ytail),T35);
      a45_0 = T25;
      a45_1 = T34;
      setsF1076 = a45_0;
      initsF1077 = a45_1;
      goto loop45;
      T21 = T24;
    }
    break;
  }
  setsF1079 = T21;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),varF1075);
  T19 = BOXVAL(xF1068);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),varF1075);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,setsF1079,T20,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P gF1083;
  P g_argsF1082;
  P g_declsF1081;
  P tup3F1080;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(subforms_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),subforms_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,Ynil);
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(Ytail),subforms_);
    T13 = CALL1(1,FREEREF(0),T14);
    tup3F1080 = T13;
    T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1080,YPint((P)0));
    g_declsF1081 = T12;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1080,YPint((P)1));
    g_argsF1082 = T11;
    T10 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF1083 = T10;
    T6 = CALL1(1,VARREF(Ylst),gF1083);
    T8 = CALL1(1,VARREF(Yhead),subforms_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_11));
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,g_declsF1081);
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),gF1083,g_argsF1082);
    T3 = CALL2(1,VARREF(Ytup),T4,T9);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF1087;
  P g_declsF1086;
  P tup4F1085;
  P munchF1084;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(place_, 0);
  T10 = FUNSHELL(1,fun_munch_13,1);
  munchF1084 = T10;
  FUNINIT(munchF1084, 1,munchF1084);
  T1 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T0 = T2;
  } else {
    T9 = CALL1(1,VARREF(Ytail),place_);
    T8 = CALL1(1,munchF1084,T9);
    tup4F1085 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1085,YPint((P)0));
    g_declsF1086 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1085,YPint((P)1));
    g_argsF1087 = T6;
    T5 = CALL1(1,VARREF(Yhead),place_);
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,g_argsF1087);
    T3 = CALL2(1,VARREF(Ytup),g_declsF1086,T4);
    T0 = T3;
  }
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
  P x_1095F1093;
  P x_1095F1092;
  P x_1095F1091;
  P amountF1090;
  P x_1095F1089;
  P x_1096F1088;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1096_16,1);
  x_1096F1088 = T11;
  FUNINIT(x_1096F1088, 1,return_);
  T10 = BOXVAL(FREEREF(0));
  x_1095F1089 = T10;
  amountF1090 = YPfalse;
  amountF1090 = BOXFAB(amountF1090);
  T1 = CALL2(1,VARREF(YisaQ),x_1095F1089,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F1089,x_1096F1088);
    BOXVAL(amountF1090) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1095F1089);
    x_1095F1091 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1095F1091,x_1096F1088);
    x_1095F1092 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1092,x_1096F1088);
    T5 = CALL1(1,VARREF(Ytail),x_1095F1091);
    x_1095F1093 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1093,x_1096F1088);
  } else {
    T8 = CALL2(1,x_1096F1088,LITREF(lit_7),x_1095F1089);
  }
  T9 = BOXVAL(amountF1090);
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF1106;
  P g_placeF1105;
  P g_declsF1104;
  P tup6F1103;
  P x_1093F1102;
  P x_1093F1101;
  P x_1093F1100;
  P x_1093F1099;
  P x_1093F1098;
  P amountF1097;
  P placeF1096;
  P x_1093F1095;
  P x_1094F1094;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1094_15,2);
  x_1094F1094 = T30;
  FUNINIT(x_1094F1094, 2,FREEREF(0),return_);
  x_1093F1095 = FREEREF(0);
  placeF1096 = YPfalse;
  placeF1096 = BOXFAB(placeF1096);
  amountF1097 = YPfalse;
  amountF1097 = BOXFAB(amountF1097);
  T2 = CALL2(1,VARREF(YisaQ),x_1093F1095,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F1095,LITREF(lit_41),x_1094F1094);
    x_1093F1098 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F1098,x_1094F1094);
    BOXVAL(placeF1096) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1093F1098);
    x_1093F1099 = T8;
    BOXVAL(amountF1097) = x_1093F1099;
    x_1093F1100 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1093F1100,x_1094F1094);
    x_1093F1101 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1101,x_1094F1094);
    T6 = CALL1(1,VARREF(Ytail),x_1093F1100);
    x_1093F1102 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1102,x_1094F1094);
  } else {
    T10 = CALL2(1,x_1094F1094,LITREF(lit_7),x_1093F1095);
  }
  T29 = BOXVAL(placeF1096);
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup6F1103 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1103,YPint((P)0));
  g_declsF1104 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1103,YPint((P)1));
  g_placeF1105 = T26;
  T25 = FUNFAB(fun_17,1,amountF1097);
  T24 = with_exit(T25);
  amountF1106 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1104,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF1105);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T22 = CALL1(1,VARREF(Ylst),g_placeF1105);
  T23 = CALL1(1,VARREF(Ylst),amountF1106);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1103F1112;
  P x_1103F1111;
  P x_1103F1110;
  P amountF1109;
  P x_1103F1108;
  P x_1104F1107;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1104_21,1);
  x_1104F1107 = T11;
  FUNINIT(x_1104F1107, 1,return_);
  T10 = BOXVAL(FREEREF(0));
  x_1103F1108 = T10;
  amountF1109 = YPfalse;
  amountF1109 = BOXFAB(amountF1109);
  T1 = CALL2(1,VARREF(YisaQ),x_1103F1108,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F1108,x_1104F1107);
    BOXVAL(amountF1109) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1103F1108);
    x_1103F1110 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1103F1110,x_1104F1107);
    x_1103F1111 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1111,x_1104F1107);
    T5 = CALL1(1,VARREF(Ytail),x_1103F1110);
    x_1103F1112 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1112,x_1104F1107);
  } else {
    T8 = CALL2(1,x_1104F1107,LITREF(lit_7),x_1103F1108);
  }
  T9 = BOXVAL(amountF1109);
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF1125;
  P g_placeF1124;
  P g_declsF1123;
  P tup8F1122;
  P x_1101F1121;
  P x_1101F1120;
  P x_1101F1119;
  P x_1101F1118;
  P x_1101F1117;
  P amountF1116;
  P placeF1115;
  P x_1101F1114;
  P x_1102F1113;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1102_20,2);
  x_1102F1113 = T30;
  FUNINIT(x_1102F1113, 2,FREEREF(0),return_);
  x_1101F1114 = FREEREF(0);
  placeF1115 = YPfalse;
  placeF1115 = BOXFAB(placeF1115);
  amountF1116 = YPfalse;
  amountF1116 = BOXFAB(amountF1116);
  T2 = CALL2(1,VARREF(YisaQ),x_1101F1114,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F1114,LITREF(lit_50),x_1102F1113);
    x_1101F1117 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F1117,x_1102F1113);
    BOXVAL(placeF1115) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1101F1117);
    x_1101F1118 = T8;
    BOXVAL(amountF1116) = x_1101F1118;
    x_1101F1119 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1101F1119,x_1102F1113);
    x_1101F1120 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1120,x_1102F1113);
    T6 = CALL1(1,VARREF(Ytail),x_1101F1119);
    x_1101F1121 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1121,x_1102F1113);
  } else {
    T10 = CALL2(1,x_1102F1113,LITREF(lit_7),x_1101F1114);
  }
  T29 = BOXVAL(placeF1115);
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup8F1122 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1122,YPint((P)0));
  g_declsF1123 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1122,YPint((P)1));
  g_placeF1124 = T26;
  T25 = FUNFAB(fun_22,1,amountF1116);
  T24 = with_exit(T25);
  amountF1125 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1123,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF1124);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = CALL1(1,VARREF(Ylst),g_placeF1124);
  T23 = CALL1(1,VARREF(Ylst),amountF1125);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P g_placeF1137;
  P g_declsF1136;
  P tup10F1135;
  P x_1107F1134;
  P x_1107F1133;
  P x_1107F1132;
  P x_1107F1131;
  P x_1107F1130;
  P valueF1129;
  P placeF1128;
  P x_1107F1127;
  P x_1108F1126;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1108_25,2);
  x_1108F1126 = T31;
  FUNINIT(x_1108F1126, 2,FREEREF(0),return_);
  x_1107F1127 = FREEREF(0);
  placeF1128 = YPfalse;
  placeF1128 = BOXFAB(placeF1128);
  valueF1129 = YPfalse;
  valueF1129 = BOXFAB(valueF1129);
  T2 = CALL2(1,VARREF(YisaQ),x_1107F1127,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F1127,LITREF(lit_59),x_1108F1126);
    x_1107F1130 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1130,x_1108F1126);
    BOXVAL(placeF1128) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1107F1130);
    x_1107F1131 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1131,x_1108F1126);
    BOXVAL(valueF1129) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1107F1131);
    x_1107F1132 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1107F1132,x_1108F1126);
    x_1107F1133 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1133,x_1108F1126);
    T6 = CALL1(1,VARREF(Ytail),x_1107F1132);
    x_1107F1134 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1134,x_1108F1126);
  } else {
    T12 = CALL2(1,x_1108F1126,LITREF(lit_7),x_1107F1127);
  }
  T30 = BOXVAL(placeF1128);
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup10F1135 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1135,YPint((P)0));
  g_declsF1136 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1135,YPint((P)1));
  g_placeF1137 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1136,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T20 = CALL1(1,VARREF(Ylst),g_placeF1137);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T24 = CALL1(1,VARREF(Ylst),g_placeF1137);
  T26 = BOXVAL(valueF1129);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T21,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P tmpF1153;
  P yg_placeF1152;
  P yg_declsF1151;
  P tup14F1150;
  P xg_placeF1149;
  P xg_declsF1148;
  P tup13F1147;
  P x_1111F1146;
  P x_1111F1145;
  P x_1111F1144;
  P x_1111F1143;
  P x_1111F1142;
  P yF1141;
  P xF1140;
  P x_1111F1139;
  P x_1112F1138;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1112_28,2);
  x_1112F1138 = T40;
  FUNINIT(x_1112F1138, 2,FREEREF(0),return_);
  x_1111F1139 = FREEREF(0);
  xF1140 = YPfalse;
  xF1140 = BOXFAB(xF1140);
  yF1141 = YPfalse;
  yF1141 = BOXFAB(yF1141);
  T2 = CALL2(1,VARREF(YisaQ),x_1111F1139,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F1139,LITREF(lit_65),x_1112F1138);
    x_1111F1142 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1142,x_1112F1138);
    BOXVAL(xF1140) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1111F1142);
    x_1111F1143 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1143,x_1112F1138);
    BOXVAL(yF1141) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1111F1143);
    x_1111F1144 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1111F1144,x_1112F1138);
    x_1111F1145 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1145,x_1112F1138);
    T6 = CALL1(1,VARREF(Ytail),x_1111F1144);
    x_1111F1146 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1146,x_1112F1138);
  } else {
    T12 = CALL2(1,x_1112F1138,LITREF(lit_7),x_1111F1139);
  }
  T39 = BOXVAL(xF1140);
  T38 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T39);
  tup13F1147 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1147,YPint((P)0));
  xg_declsF1148 = T37;
  T36 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1147,YPint((P)1));
  xg_placeF1149 = T36;
  T35 = BOXVAL(yF1141);
  T34 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T35);
  tup14F1150 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1150,YPint((P)0));
  yg_declsF1151 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1150,YPint((P)1));
  yg_placeF1152 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF1153 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),tmpF1153);
  T20 = CALL1(1,VARREF(Ylst),xg_placeF1149);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF1148,yg_declsF1151,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),xg_placeF1149);
  T25 = CALL1(1,VARREF(Ylst),yg_placeF1152);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T29 = CALL1(1,VARREF(Ylst),yg_placeF1152);
  T30 = CALL1(1,VARREF(Ylst),tmpF1153);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_11));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T21,T26,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P placesF1169;
  P declsF1168;
  P psF1167;
  P tmpsF1166;
  P placesF1165;
  P x_1115F1164;
  P x_1115F1163;
  P x_1115F1162;
  P x_1115F1161;
  P x_1115F1160;
  P x_1115F1159;
  P zsF1158;
  P yF1157;
  P xF1156;
  P x_1115F1155;
  P x_1116F1154;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_1116_31,2);
  x_1116F1154 = T42;
  FUNINIT(x_1116F1154, 2,FREEREF(0),return_);
  x_1115F1155 = FREEREF(0);
  xF1156 = YPfalse;
  xF1156 = BOXFAB(xF1156);
  yF1157 = YPfalse;
  yF1157 = BOXFAB(yF1157);
  zsF1158 = YPfalse;
  zsF1158 = BOXFAB(zsF1158);
  T3 = CALL2(1,VARREF(YisaQ),x_1115F1155,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F1155,LITREF(lit_70),x_1116F1154);
    x_1115F1159 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1159,x_1116F1154);
    BOXVAL(xF1156) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1115F1159);
    x_1115F1160 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1160,x_1116F1154);
    BOXVAL(yF1157) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1115F1160);
    x_1115F1161 = T9;
    BOXVAL(zsF1158) = x_1115F1161;
    x_1115F1162 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1115F1162,x_1116F1154);
    x_1115F1163 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1163,x_1116F1154);
    T7 = CALL1(1,VARREF(Ytail),x_1115F1162);
    x_1115F1164 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1164,x_1116F1154);
  } else {
    T13 = CALL2(1,x_1116F1154,LITREF(lit_7),x_1115F1155);
  }
  T38 = BOXVAL(xF1156);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = BOXVAL(yF1157);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = BOXVAL(zsF1158);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T39,T41,LITREF(lit_11));
  placesF1165 = T36;
  T35 = fun_32;
  T34 = CALL2(1,VARREF(YgooSmacrosYmap),T35,placesF1165);
  tmpsF1166 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF1165);
  psF1167 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF1167);
  declsF1168 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF1167);
  placesF1169 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF1168);
  T20 = fun_33;
  T19 = CALL3(1,VARREF(YgooSmacrosYmap2),T20,tmpsF1166,placesF1169);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T22 = fun_34;
  T23 = CALL1(1,VARREF(Ytail),tmpsF1166);
  T21 = CALL3(1,VARREF(YgooSmacrosYmap2),T22,placesF1169,T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(YgooSmacrosYlast),placesF1169);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF1166);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T29,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T14 = CALL5(1,VARREF(YgooSmacrosYcat),T15,T16,T21,T24,LITREF(lit_11));
UNLINK_STACK();
  QRET(T14);
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
  P valF1181;
  P new_colF1180;
  P g_placeF1179;
  P g_declsF1178;
  P tup16F1177;
  P x_1119F1176;
  P x_1119F1175;
  P x_1119F1174;
  P x_1119F1173;
  P placeF1172;
  P x_1119F1171;
  P x_1120F1170;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1120_37,2);
  x_1120F1170 = T37;
  FUNINIT(x_1120F1170, 2,FREEREF(0),return_);
  x_1119F1171 = FREEREF(0);
  placeF1172 = YPfalse;
  placeF1172 = BOXFAB(placeF1172);
  T1 = CALL2(1,VARREF(YisaQ),x_1119F1171,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F1171,LITREF(lit_78),x_1120F1170);
    x_1119F1173 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F1173,x_1120F1170);
    BOXVAL(placeF1172) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1119F1173);
    x_1119F1174 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1119F1174,x_1120F1170);
    x_1119F1175 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1175,x_1120F1170);
    T5 = CALL1(1,VARREF(Ytail),x_1119F1174);
    x_1119F1176 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1176,x_1120F1170);
  } else {
    T9 = CALL2(1,x_1120F1170,LITREF(lit_7),x_1119F1171);
  }
  T36 = BOXVAL(placeF1172);
  T35 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T36);
  tup16F1177 = T35;
  T34 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1177,YPint((P)0));
  g_declsF1178 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1177,YPint((P)1));
  g_placeF1179 = T33;
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF1180 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF1181 = T31;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T19 = CALL1(1,VARREF(Ylst),new_colF1180);
  T20 = CALL1(1,VARREF(Ylst),valF1181);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T24 = CALL1(1,VARREF(Ylst),g_placeF1179);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T21,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1178,T14,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF1179);
  T29 = CALL1(1,VARREF(Ylst),new_colF1180);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T29,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T30 = CALL1(1,VARREF(Ylst),valF1181);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T25,T30,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
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
  P g_placeF1193;
  P g_declsF1192;
  P tup18F1191;
  P x_1123F1190;
  P x_1123F1189;
  P x_1123F1188;
  P x_1123F1187;
  P x_1123F1186;
  P callF1185;
  P placeF1184;
  P x_1123F1183;
  P x_1124F1182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1124_40,2);
  x_1124F1182 = T31;
  FUNINIT(x_1124F1182, 2,FREEREF(0),return_);
  x_1123F1183 = FREEREF(0);
  placeF1184 = YPfalse;
  placeF1184 = BOXFAB(placeF1184);
  callF1185 = YPfalse;
  callF1185 = BOXFAB(callF1185);
  T2 = CALL2(1,VARREF(YisaQ),x_1123F1183,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F1183,LITREF(lit_85),x_1124F1182);
    x_1123F1186 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1186,x_1124F1182);
    BOXVAL(placeF1184) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1123F1186);
    x_1123F1187 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1187,x_1124F1182);
    BOXVAL(callF1185) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1123F1187);
    x_1123F1188 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1123F1188,x_1124F1182);
    x_1123F1189 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1189,x_1124F1182);
    T6 = CALL1(1,VARREF(Ytail),x_1123F1188);
    x_1123F1190 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1190,x_1124F1182);
  } else {
    T12 = CALL2(1,x_1124F1182,LITREF(lit_7),x_1123F1183);
  }
  T30 = BOXVAL(placeF1184);
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup18F1191 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1191,YPint((P)0));
  g_declsF1192 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1191,YPint((P)1));
  g_placeF1193 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF1193);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1192,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),g_placeF1193);
  T26 = BOXVAL(callF1185);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P g_placeF1205;
  P g_declsF1204;
  P tup20F1203;
  P x_1127F1202;
  P x_1127F1201;
  P x_1127F1200;
  P x_1127F1199;
  P x_1127F1198;
  P valueF1197;
  P placeF1196;
  P x_1127F1195;
  P x_1128F1194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_1128_43,2);
  x_1128F1194 = T35;
  FUNINIT(x_1128F1194, 2,FREEREF(0),return_);
  x_1127F1195 = FREEREF(0);
  placeF1196 = YPfalse;
  placeF1196 = BOXFAB(placeF1196);
  valueF1197 = YPfalse;
  valueF1197 = BOXFAB(valueF1197);
  T2 = CALL2(1,VARREF(YisaQ),x_1127F1195,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F1195,LITREF(lit_91),x_1128F1194);
    x_1127F1198 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1198,x_1128F1194);
    BOXVAL(placeF1196) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1127F1198);
    x_1127F1199 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1199,x_1128F1194);
    BOXVAL(valueF1197) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1127F1199);
    x_1127F1200 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1127F1200,x_1128F1194);
    x_1127F1201 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1201,x_1128F1194);
    T6 = CALL1(1,VARREF(Ytail),x_1127F1200);
    x_1127F1202 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1202,x_1128F1194);
  } else {
    T12 = CALL2(1,x_1128F1194,LITREF(lit_7),x_1127F1195);
  }
  T34 = BOXVAL(placeF1196);
  T33 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T34);
  tup20F1203 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1203,YPint((P)0));
  g_declsF1204 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1203,YPint((P)1));
  g_placeF1205 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF1205);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1204,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T24 = CALL1(1,VARREF(Ylst),g_placeF1205);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF1205);
  T30 = BOXVAL(valueF1197);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T29,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P x_1131F1214;
  P x_1131F1213;
  P x_1131F1212;
  P x_1131F1211;
  P x_1131F1210;
  P bodyF1209;
  P testF1208;
  P x_1131F1207;
  P x_1132F1206;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(return_, 0);
  T22 = FUNSHELL(0,fun_x_1132_46,2);
  x_1132F1206 = T22;
  FUNINIT(x_1132F1206, 2,FREEREF(0),return_);
  x_1131F1207 = FREEREF(0);
  testF1208 = YPfalse;
  testF1208 = BOXFAB(testF1208);
  bodyF1209 = YPfalse;
  bodyF1209 = BOXFAB(bodyF1209);
  T2 = CALL2(1,VARREF(YisaQ),x_1131F1207,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F1207,LITREF(lit_97),x_1132F1206);
    x_1131F1210 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F1210,x_1132F1206);
    BOXVAL(testF1208) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1131F1210);
    x_1131F1211 = T8;
    BOXVAL(bodyF1209) = x_1131F1211;
    x_1131F1212 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1131F1212,x_1132F1206);
    x_1131F1213 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1213,x_1132F1206);
    T6 = CALL1(1,VARREF(Ytail),x_1131F1212);
    x_1131F1214 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1214,x_1132F1206);
  } else {
    T10 = CALL2(1,x_1132F1206,LITREF(lit_7),x_1131F1207);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T17 = BOXVAL(testF1208);
  T16 = CALL1(1,VARREF(Ylst),T17);
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T21 = BOXVAL(bodyF1209);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T18,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1135F1223;
  P x_1135F1222;
  P x_1135F1221;
  P x_1135F1220;
  P x_1135F1219;
  P bodyF1218;
  P testF1217;
  P x_1135F1216;
  P x_1136F1215;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1136_49,2);
  x_1136F1215 = T19;
  FUNINIT(x_1136F1215, 2,FREEREF(0),return_);
  x_1135F1216 = FREEREF(0);
  testF1217 = YPfalse;
  testF1217 = BOXFAB(testF1217);
  bodyF1218 = YPfalse;
  bodyF1218 = BOXFAB(bodyF1218);
  T2 = CALL2(1,VARREF(YisaQ),x_1135F1216,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F1216,LITREF(lit_105),x_1136F1215);
    x_1135F1219 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1135F1219,x_1136F1215);
    BOXVAL(testF1217) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1135F1219);
    x_1135F1220 = T8;
    BOXVAL(bodyF1218) = x_1135F1220;
    x_1135F1221 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1135F1221,x_1136F1215);
    x_1135F1222 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F1222,x_1136F1215);
    T6 = CALL1(1,VARREF(Ytail),x_1135F1221);
    x_1135F1223 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F1223,x_1136F1215);
  } else {
    T10 = CALL2(1,x_1136F1215,LITREF(lit_7),x_1135F1216);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T14 = BOXVAL(testF1217);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = BOXVAL(bodyF1218);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1147F1225;
  P x_1148F1224;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1148_54,3);
  x_1148F1224 = T5;
  FUNINIT(x_1148F1224, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXVAL(FREEREF(1));
  x_1147F1225 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1147F1225,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F1225,x_1148F1224);
  } else {
    T2 = CALL2(1,x_1148F1224,LITREF(lit_7),x_1147F1225);
  }
  T3 = BOXVAL(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1145F1233;
  P x_1145F1232;
  P x_1145F1231;
  P x_1145F1230;
  P restF1229;
  P xF1228;
  P x_1145F1227;
  P x_1146F1226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1146_53,1);
  x_1146F1226 = T13;
  FUNINIT(x_1146F1226, 1,return_);
  T12 = BOXVAL(FREEREF(0));
  x_1145F1227 = T12;
  xF1228 = YPfalse;
  xF1228 = BOXFAB(xF1228);
  restF1229 = YPfalse;
  restF1229 = BOXFAB(restF1229);
  T2 = CALL2(1,VARREF(YisaQ),x_1145F1227,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1145F1227,x_1146F1226);
    BOXVAL(xF1228) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1145F1227);
    x_1145F1230 = T8;
    BOXVAL(restF1229) = x_1145F1230;
    x_1145F1231 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1145F1231,x_1146F1226);
    x_1145F1232 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1145F1232,x_1146F1226);
    T6 = CALL1(1,VARREF(Ytail),x_1145F1231);
    x_1145F1233 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1145F1233,x_1146F1226);
  } else {
    T9 = CALL2(1,x_1146F1226,LITREF(lit_7),x_1145F1227);
  }
  T11 = FUNFAB(fun_55,2,xF1228,restF1229);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1143F1240;
  P x_1143F1239;
  P x_1143F1238;
  P x_1143F1237;
  P restF1236;
  P x_1143F1235;
  P x_1144F1234;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1144_52,2);
  x_1144F1234 = T10;
  FUNINIT(x_1144F1234, 2,FREEREF(0),return_);
  x_1143F1235 = FREEREF(0);
  restF1236 = YPfalse;
  restF1236 = BOXFAB(restF1236);
  T1 = CALL2(1,VARREF(YisaQ),x_1143F1235,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1143F1235,LITREF(lit_92),x_1144F1234);
    x_1143F1237 = T6;
    BOXVAL(restF1236) = x_1143F1237;
    x_1143F1238 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1143F1238,x_1144F1234);
    x_1143F1239 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1239,x_1144F1234);
    T5 = CALL1(1,VARREF(Ytail),x_1143F1238);
    x_1143F1240 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1240,x_1144F1234);
  } else {
    T7 = CALL2(1,x_1144F1234,LITREF(lit_7),x_1143F1235);
  }
  T9 = FUNFAB(fun_56,1,restF1236);
  T8 = with_exit(T9);
UNLINK_STACK();
  QRET(T8);
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
  T8 = BOXVAL(FREEREF(1));
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_11));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T9 = CALL1(1,VARREF(Ylst),YPfalse);
  T1 = CALL5(1,VARREF(YgooSmacrosYcat),T2,T3,T5,T9,LITREF(lit_11));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1159F1242;
  P x_1160F1241;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1160_61,3);
  x_1160F1241 = T5;
  FUNINIT(x_1160F1241, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXVAL(FREEREF(1));
  x_1159F1242 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1159F1242,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F1242,x_1160F1241);
  } else {
    T2 = CALL2(1,x_1160F1241,LITREF(lit_7),x_1159F1242);
  }
  T3 = BOXVAL(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1157F1250;
  P x_1157F1249;
  P x_1157F1248;
  P x_1157F1247;
  P restF1246;
  P xF1245;
  P x_1157F1244;
  P x_1158F1243;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1158_60,1);
  x_1158F1243 = T13;
  FUNINIT(x_1158F1243, 1,return_);
  T12 = BOXVAL(FREEREF(0));
  x_1157F1244 = T12;
  xF1245 = YPfalse;
  xF1245 = BOXFAB(xF1245);
  restF1246 = YPfalse;
  restF1246 = BOXFAB(restF1246);
  T2 = CALL2(1,VARREF(YisaQ),x_1157F1244,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1157F1244,x_1158F1243);
    BOXVAL(xF1245) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1157F1244);
    x_1157F1247 = T8;
    BOXVAL(restF1246) = x_1157F1247;
    x_1157F1248 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1157F1248,x_1158F1243);
    x_1157F1249 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F1249,x_1158F1243);
    T6 = CALL1(1,VARREF(Ytail),x_1157F1248);
    x_1157F1250 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F1250,x_1158F1243);
  } else {
    T9 = CALL2(1,x_1158F1243,LITREF(lit_7),x_1157F1244);
  }
  T11 = FUNFAB(fun_62,2,xF1245,restF1246);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1155F1257;
  P x_1155F1256;
  P x_1155F1255;
  P x_1155F1254;
  P restF1253;
  P x_1155F1252;
  P x_1156F1251;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1156_59,2);
  x_1156F1251 = T10;
  FUNINIT(x_1156F1251, 2,FREEREF(0),return_);
  x_1155F1252 = FREEREF(0);
  restF1253 = YPfalse;
  restF1253 = BOXFAB(restF1253);
  T1 = CALL2(1,VARREF(YisaQ),x_1155F1252,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1155F1252,LITREF(lit_121),x_1156F1251);
    x_1155F1254 = T6;
    BOXVAL(restF1253) = x_1155F1254;
    x_1155F1255 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1155F1255,x_1156F1251);
    x_1155F1256 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1256,x_1156F1251);
    T5 = CALL1(1,VARREF(Ytail),x_1155F1255);
    x_1155F1257 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1257,x_1156F1251);
  } else {
    T7 = CALL2(1,x_1156F1251,LITREF(lit_7),x_1155F1252);
  }
  T9 = FUNFAB(fun_63,1,restF1253);
  T8 = with_exit(T9);
UNLINK_STACK();
  QRET(T8);
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
  P x_1167F1265;
  P x_1167F1264;
  P x_1167F1263;
  P x_1167F1262;
  P bodyF1261;
  P condF1260;
  P x_1167F1259;
  P x_1168F1258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1168_67,2);
  x_1168F1258 = T25;
  FUNINIT(x_1168F1258, 2,FREEREF(0),return_);
  T24 = BOXVAL(FREEREF(0));
  T23 = CALL1(1,VARREF(Yhead),T24);
  x_1167F1259 = T23;
  condF1260 = YPfalse;
  condF1260 = BOXFAB(condF1260);
  bodyF1261 = YPfalse;
  bodyF1261 = BOXFAB(bodyF1261);
  T2 = CALL2(1,VARREF(YisaQ),x_1167F1259,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1167F1259,x_1168F1258);
    BOXVAL(condF1260) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1167F1259);
    x_1167F1262 = T8;
    BOXVAL(bodyF1261) = x_1167F1262;
    x_1167F1263 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1167F1263,x_1168F1258);
    x_1167F1264 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F1264,x_1168F1258);
    T6 = CALL1(1,VARREF(Ytail),x_1167F1263);
    x_1167F1265 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F1265,x_1168F1258);
  } else {
    T9 = CALL2(1,x_1168F1258,LITREF(lit_7),x_1167F1259);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = BOXVAL(condF1260);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = BOXVAL(bodyF1261);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T22 = BOXVAL(FREEREF(0));
  T21 = CALL1(1,VARREF(Ytail),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T14,T18,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1165F1272;
  P x_1165F1271;
  P x_1165F1270;
  P x_1165F1269;
  P casesF1268;
  P x_1165F1267;
  P x_1166F1266;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1166_66,2);
  x_1166F1266 = T13;
  FUNINIT(x_1166F1266, 2,FREEREF(0),return_);
  x_1165F1267 = FREEREF(0);
  casesF1268 = YPfalse;
  casesF1268 = BOXFAB(casesF1268);
  T1 = CALL2(1,VARREF(YisaQ),x_1165F1267,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1165F1267,LITREF(lit_132),x_1166F1266);
    x_1165F1269 = T6;
    BOXVAL(casesF1268) = x_1165F1269;
    x_1165F1270 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1165F1270,x_1166F1266);
    x_1165F1271 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F1271,x_1166F1266);
    T5 = CALL1(1,VARREF(Ytail),x_1165F1270);
    x_1165F1272 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F1272,x_1166F1266);
  } else {
    T7 = CALL2(1,x_1166F1266,LITREF(lit_7),x_1165F1267);
  }
  T10 = BOXVAL(casesF1268);
  T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = FUNFAB(fun_68,1,casesF1268);
    T11 = with_exit(T12);
    T8 = T11;
  }
UNLINK_STACK();
  QRET(T8);
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
  P x_1175F1278;
  P x_1175F1277;
  P x_1175F1276;
  P valuesF1275;
  P x_1175F1274;
  P x_1176F1273;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_1176_72,2);
  x_1176F1273 = T23;
  FUNINIT(x_1176F1273, 2,FREEREF(0),return_);
  T22 = BOXVAL(FREEREF(1));
  x_1175F1274 = T22;
  valuesF1275 = YPfalse;
  valuesF1275 = BOXFAB(valuesF1275);
  T1 = CALL2(1,VARREF(YisaQ),x_1175F1274,VARREF(YLlstG));
  if (T1 != YPfalse) {
    BOXVAL(valuesF1275) = x_1175F1274;
    x_1175F1276 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1175F1276,x_1176F1273);
    x_1175F1277 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1277,x_1176F1273);
    T5 = CALL1(1,VARREF(Ytail),x_1175F1276);
    x_1175F1278 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1278,x_1176F1273);
  } else {
    T6 = CALL2(1,x_1176F1273,LITREF(lit_7),x_1175F1274);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T13 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T14 = BOXVAL(valuesF1275);
  T12 = CALL2(1,VARREF(YgooSmacrosYmap),T13,T14);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_11));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = BOXVAL(FREEREF(4));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T21 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T20 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),FREEREF(3),FREEREF(2),T21);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T7 = CALL5(1,VARREF(YgooSmacrosYcat),T8,T9,T15,T19,LITREF(lit_11));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1173F1286;
  P x_1173F1285;
  P x_1173F1284;
  P x_1173F1283;
  P bodyF1282;
  P condF1281;
  P x_1173F1280;
  P x_1174F1279;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1174_71,2);
  x_1174F1279 = T19;
  FUNINIT(x_1174F1279, 2,FREEREF(0),return_);
  T18 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1173F1280 = T18;
  condF1281 = YPfalse;
  condF1281 = BOXFAB(condF1281);
  bodyF1282 = YPfalse;
  bodyF1282 = BOXFAB(bodyF1282);
  T2 = CALL2(1,VARREF(YisaQ),x_1173F1280,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1173F1280,x_1174F1279);
    BOXVAL(condF1281) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1173F1280);
    x_1173F1283 = T8;
    BOXVAL(bodyF1282) = x_1173F1283;
    x_1173F1284 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1173F1284,x_1174F1279);
    x_1173F1285 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1173F1285,x_1174F1279);
    T6 = CALL1(1,VARREF(Ytail),x_1173F1284);
    x_1173F1286 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1173F1286,x_1174F1279);
  } else {
    T9 = CALL2(1,x_1174F1279,LITREF(lit_7),x_1173F1280);
  }
  T12 = BOXVAL(condF1281);
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,YPtrue);
  if (T11 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = BOXVAL(bodyF1282);
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
    T10 = T13;
  } else {
    T17 = FUNFAB(fun_74,5,FREEREF(0),condF1281,FREEREF(1),FREEREF(2),bodyF1282);
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
  P tst_varF1299;
  P val_varF1298;
  P x_1179F1297;
  P x_1179F1296;
  P x_1179F1295;
  P x_1179F1294;
  P x_1179F1293;
  P x_1179F1292;
  P casesF1291;
  P tstF1290;
  P valF1289;
  P x_1179F1288;
  P x_1180F1287;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1180_77,2);
  x_1180F1287 = T33;
  FUNINIT(x_1180F1287, 2,FREEREF(0),return_);
  x_1179F1288 = FREEREF(0);
  valF1289 = YPfalse;
  valF1289 = BOXFAB(valF1289);
  tstF1290 = YPfalse;
  tstF1290 = BOXFAB(tstF1290);
  casesF1291 = YPfalse;
  casesF1291 = BOXFAB(casesF1291);
  T3 = CALL2(1,VARREF(YisaQ),x_1179F1288,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F1288,LITREF(lit_152),x_1180F1287);
    x_1179F1292 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1292,x_1180F1287);
    BOXVAL(valF1289) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1179F1292);
    x_1179F1293 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1293,x_1180F1287);
    BOXVAL(tstF1290) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1179F1293);
    x_1179F1294 = T9;
    BOXVAL(casesF1291) = x_1179F1294;
    x_1179F1295 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1179F1295,x_1180F1287);
    x_1179F1296 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1296,x_1180F1287);
    T7 = CALL1(1,VARREF(Ytail),x_1179F1295);
    x_1179F1297 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1297,x_1180F1287);
  } else {
    T13 = CALL2(1,x_1180F1287,LITREF(lit_7),x_1179F1288);
  }
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF1298 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF1299 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T20 = CALL1(1,VARREF(Ylst),val_varF1298);
  T22 = BOXVAL(valF1289);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),tst_varF1299);
  T27 = BOXVAL(tstF1290);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T23,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T30 = BOXVAL(casesF1291);
  T29 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF1298,tst_varF1299,T30);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T28,LITREF(lit_11));
UNLINK_STACK();
  QRET(T14);
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
  P x_1183F1308;
  P x_1183F1307;
  P x_1183F1306;
  P x_1183F1305;
  P x_1183F1304;
  P casesF1303;
  P valF1302;
  P x_1183F1301;
  P x_1184F1300;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1184_80,2);
  x_1184F1300 = T17;
  FUNINIT(x_1184F1300, 2,FREEREF(0),return_);
  x_1183F1301 = FREEREF(0);
  valF1302 = YPfalse;
  valF1302 = BOXFAB(valF1302);
  casesF1303 = YPfalse;
  casesF1303 = BOXFAB(casesF1303);
  T2 = CALL2(1,VARREF(YisaQ),x_1183F1301,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1183F1301,LITREF(lit_157),x_1184F1300);
    x_1183F1304 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F1304,x_1184F1300);
    BOXVAL(valF1302) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1183F1304);
    x_1183F1305 = T8;
    BOXVAL(casesF1303) = x_1183F1305;
    x_1183F1306 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1183F1306,x_1184F1300);
    x_1183F1307 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F1307,x_1184F1300);
    T6 = CALL1(1,VARREF(Ytail),x_1183F1306);
    x_1183F1308 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F1308,x_1184F1300);
  } else {
    T10 = CALL2(1,x_1184F1300,LITREF(lit_7),x_1183F1301);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T14 = BOXVAL(valF1302);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T16 = BOXVAL(casesF1303);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T15,T16,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P varF1323;
  P x_1195F1322;
  P x_1195F1321;
  P x_1195F1320;
  P x_1195F1319;
  P x_1195F1318;
  P x_1195F1317;
  P x_1195F1316;
  P x_1195F1315;
  P x_1195F1314;
  P restF1313;
  P thenF1312;
  P patF1311;
  P x_1195F1310;
  P x_1196F1309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1196_84,1);
  x_1196F1309 = T51;
  FUNINIT(x_1196F1309, 1,return_);
  T50 = BOXVAL(FREEREF(0));
  x_1195F1310 = T50;
  patF1311 = YPfalse;
  patF1311 = BOXFAB(patF1311);
  thenF1312 = YPfalse;
  thenF1312 = BOXFAB(thenF1312);
  restF1313 = YPfalse;
  restF1313 = BOXFAB(restF1313);
  T3 = CALL2(1,VARREF(YisaQ),x_1195F1310,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1310,x_1196F1309);
    x_1195F1314 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1314,x_1196F1309);
    BOXVAL(patF1311) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1195F1314);
    x_1195F1315 = T13;
    BOXVAL(thenF1312) = x_1195F1315;
    x_1195F1316 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1316,x_1196F1309);
    x_1195F1317 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1317,x_1196F1309);
    T11 = CALL1(1,VARREF(Ytail),x_1195F1316);
    x_1195F1318 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1318,x_1196F1309);
    T15 = CALL1(1,VARREF(Ytail),x_1195F1310);
    x_1195F1319 = T15;
    BOXVAL(restF1313) = x_1195F1319;
    x_1195F1320 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1320,x_1196F1309);
    x_1195F1321 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1321,x_1196F1309);
    T7 = CALL1(1,VARREF(Ytail),x_1195F1320);
    x_1195F1322 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1322,x_1196F1309);
  } else {
    T16 = CALL2(1,x_1196F1309,LITREF(lit_7),x_1195F1310);
  }
  T19 = BOXVAL(patF1311);
  T18 = CALL2(1,VARREF(YgooSmacrosYEE),T19,YPtrue);
  if (T18 != YPfalse) {
    T21 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T22 = BOXVAL(thenF1312);
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
    T17 = T20;
  } else {
    T49 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF1323 = T49;
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T29 = CALL1(1,VARREF(Ylst),varF1323);
    T31 = BOXVAL(FREEREF(1));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_11));
    T25 = CALL1(1,VARREF(Ylst),T26);
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
    T38 = BOXVAL(patF1311);
    T37 = CALL1(1,VARREF(Ylst),T38);
    T39 = CALL1(1,VARREF(Ylst),varF1323);
    T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_11));
    T35 = CALL1(1,VARREF(Ylst),T36);
    T42 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T43 = BOXVAL(thenF1312);
    T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_11));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T46 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
    T47 = CALL1(1,VARREF(Ylst),varF1323);
    T48 = BOXVAL(restF1313);
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
  P x_1193F1325;
  P x_1194F1324;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_1194_86,3);
  x_1194F1324 = T7;
  FUNINIT(x_1194F1324, 3,FREEREF(0),FREEREF(1),return_);
  T6 = BOXVAL(FREEREF(0));
  x_1193F1325 = T6;
  T0 = CALL2(1,VARREF(YisaQ),x_1193F1325,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1193F1325,x_1194F1324);
  } else {
    T2 = CALL2(1,x_1194F1324,LITREF(lit_7),x_1193F1325);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_88) {
  P return_;
  P x_1191F1334;
  P x_1191F1333;
  P x_1191F1332;
  P x_1191F1331;
  P x_1191F1330;
  P casesF1329;
  P expF1328;
  P x_1191F1327;
  P x_1192F1326;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1192_83,2);
  x_1192F1326 = T13;
  FUNINIT(x_1192F1326, 2,FREEREF(0),return_);
  x_1191F1327 = FREEREF(0);
  expF1328 = YPfalse;
  expF1328 = BOXFAB(expF1328);
  casesF1329 = YPfalse;
  casesF1329 = BOXFAB(casesF1329);
  T2 = CALL2(1,VARREF(YisaQ),x_1191F1327,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F1327,LITREF(lit_163),x_1192F1326);
    x_1191F1330 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F1330,x_1192F1326);
    BOXVAL(expF1328) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1191F1330);
    x_1191F1331 = T8;
    BOXVAL(casesF1329) = x_1191F1331;
    x_1191F1332 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1332,x_1192F1326);
    x_1191F1333 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1333,x_1192F1326);
    T6 = CALL1(1,VARREF(Ytail),x_1191F1332);
    x_1191F1334 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1334,x_1192F1326);
  } else {
    T10 = CALL2(1,x_1192F1326,LITREF(lit_7),x_1191F1327);
  }
  T12 = FUNFAB(fun_87,2,casesF1329,expF1328);
  T11 = with_exit(T12);
UNLINK_STACK();
  QRET(T11);
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
  P x_1199F1345;
  P x_1199F1344;
  P x_1199F1343;
  P x_1199F1342;
  P x_1199F1341;
  P x_1199F1340;
  P argsF1339;
  P messageF1338;
  P condF1337;
  P x_1199F1336;
  P x_1200F1335;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T27 = FUNSHELL(0,fun_x_1200_90,2);
  x_1200F1335 = T27;
  FUNINIT(x_1200F1335, 2,FREEREF(0),return_);
  x_1199F1336 = FREEREF(0);
  condF1337 = YPfalse;
  condF1337 = BOXFAB(condF1337);
  messageF1338 = YPfalse;
  messageF1338 = BOXFAB(messageF1338);
  argsF1339 = YPfalse;
  argsF1339 = BOXFAB(argsF1339);
  T3 = CALL2(1,VARREF(YisaQ),x_1199F1336,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1199F1336,LITREF(lit_178),x_1200F1335);
    x_1199F1340 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F1340,x_1200F1335);
    BOXVAL(condF1337) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1199F1340);
    x_1199F1341 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F1341,x_1200F1335);
    BOXVAL(messageF1338) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1199F1341);
    x_1199F1342 = T9;
    BOXVAL(argsF1339) = x_1199F1342;
    x_1199F1343 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1199F1343,x_1200F1335);
    x_1199F1344 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F1344,x_1200F1335);
    T7 = CALL1(1,VARREF(Ytail),x_1199F1343);
    x_1199F1345 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F1345,x_1200F1335);
  } else {
    T13 = CALL2(1,x_1200F1335,LITREF(lit_7),x_1199F1336);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T20 = BOXVAL(condF1337);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_179));
  T25 = BOXVAL(messageF1338);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T26 = BOXVAL(argsF1339);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T14);
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
  P x_1211F1354;
  P x_1211F1353;
  P x_1211F1352;
  P x_1211F1351;
  P x_1211F1350;
  P valF1349;
  P keyF1348;
  P x_1211F1347;
  P x_1212F1346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1212_95,3);
  x_1212F1346 = T33;
  FUNINIT(x_1212F1346, 3,FREEREF(0),FREEREF(1),return_);
  T32 = BOXVAL(FREEREF(0));
  x_1211F1347 = T32;
  keyF1348 = YPfalse;
  keyF1348 = BOXFAB(keyF1348);
  valF1349 = YPfalse;
  valF1349 = BOXFAB(valF1349);
  T2 = CALL2(1,VARREF(YisaQ),x_1211F1347,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F1347,LITREF(lit_79),x_1212F1346);
    x_1211F1350 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1350,x_1212F1346);
    BOXVAL(keyF1348) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1211F1350);
    x_1211F1351 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1351,x_1212F1346);
    BOXVAL(valF1349) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1211F1351);
    x_1211F1352 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F1352,x_1212F1346);
    x_1211F1353 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1353,x_1212F1346);
    T6 = CALL1(1,VARREF(Ytail),x_1211F1352);
    x_1211F1354 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1354,x_1212F1346);
  } else {
    T12 = CALL2(1,x_1212F1346,LITREF(lit_7),x_1211F1347);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T18 = BOXVAL(keyF1348);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T20 = BOXVAL(valF1349);
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

FUNCODEDEF(fun_97) {
  P return_;
  P stateF1363;
  P x_1209F1362;
  P x_1209F1361;
  P x_1209F1360;
  P x_1209F1359;
  P expF1358;
  P varF1357;
  P x_1209F1356;
  P x_1210F1355;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_1210_94,1);
  x_1210F1355 = T34;
  FUNINIT(x_1210F1355, 1,return_);
  x_1209F1356 = FREEREF(0);
  varF1357 = YPfalse;
  varF1357 = BOXFAB(varF1357);
  expF1358 = YPfalse;
  expF1358 = BOXFAB(expF1358);
  T2 = CALL2(1,VARREF(YisaQ),x_1209F1356,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F1356,x_1210F1355);
    BOXVAL(varF1357) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1209F1356);
    x_1209F1359 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F1359,x_1210F1355);
    BOXVAL(expF1358) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1209F1359);
    x_1209F1360 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1209F1360,x_1210F1355);
    x_1209F1361 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1209F1361,x_1210F1355);
    T6 = CALL1(1,VARREF(Ytail),x_1209F1360);
    x_1209F1362 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1209F1362,x_1210F1355);
  } else {
    T11 = CALL2(1,x_1210F1355,LITREF(lit_7),x_1209F1356);
  }
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF1363 = T33;
  T13 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T16 = CALL1(1,VARREF(Ylst),stateF1363);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T21 = BOXVAL(expF1358);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,FREEREF(2));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T25 = CALL1(1,VARREF(Ylst),stateF1363);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL2(1,VARREF(YgooSmacrosYpair),T23,FREEREF(3));
  T28 = FUNFAB(fun_96,2,varF1357,stateF1363);
  T27 = with_exit(T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYpair),T27,FREEREF(4));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T32 = CALL1(1,VARREF(Ylst),stateF1363);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_11));
  T29 = CALL2(1,VARREF(YgooSmacrosYpair),T30,FREEREF(5));
  T12 = CALL5(1,FREEREF(6),T13,T14,T22,T26,T29);
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF1365;
  P loopF1364;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(clauses_, 0);
  ARG(inits_, 1);
  ARG(preds_, 2);
  ARG(nows_, 3);
  ARG(nexts_, 4);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),clauses_);
  if (T1 != YPfalse) {
    T20 = CALL0(1,VARREF(YgooSmacrosYgensym));
    loopF1364 = T20;
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
    T4 = CALL1(1,VARREF(Ylst),loopF1364);
    T5 = CALL1(1,VARREF(Ylst),inits_);
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
    T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,preds_,LITREF(lit_11));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T15 = CALL1(1,VARREF(Ylst),nows_);
    T16 = BOXVAL(FREEREF(0));
    T19 = CALL1(1,VARREF(Ylst),loopF1364);
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
    clauseF1365 = T23;
    T22 = FUNFAB(fun_97,7,clauseF1365,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T21 = with_exit(T22);
    T0 = T21;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF1379;
  P x_1207F1378;
  P x_1207F1377;
  P x_1207F1376;
  P x_1207F1375;
  P x_1207F1374;
  P x_1207F1373;
  P x_1207F1372;
  P x_1207F1371;
  P x_1207F1370;
  P bodyF1369;
  P clausesF1368;
  P x_1207F1367;
  P x_1208F1366;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1208_93,2);
  x_1208F1366 = T18;
  FUNINIT(x_1208F1366, 2,FREEREF(0),return_);
  x_1207F1367 = FREEREF(0);
  clausesF1368 = YPfalse;
  clausesF1368 = BOXFAB(clausesF1368);
  bodyF1369 = YPfalse;
  bodyF1369 = BOXFAB(bodyF1369);
  T2 = CALL2(1,VARREF(YisaQ),x_1207F1367,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F1367,LITREF(lit_184),x_1208F1366);
    x_1207F1370 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1370,x_1208F1366);
    x_1207F1371 = T11;
    BOXVAL(clausesF1368) = x_1207F1371;
    x_1207F1372 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1372,x_1208F1366);
    x_1207F1373 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1373,x_1208F1366);
    T10 = CALL1(1,VARREF(Ytail),x_1207F1372);
    x_1207F1374 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1374,x_1208F1366);
    T12 = CALL1(1,VARREF(Ytail),x_1207F1370);
    x_1207F1375 = T12;
    BOXVAL(bodyF1369) = x_1207F1375;
    x_1207F1376 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1376,x_1208F1366);
    x_1207F1377 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1377,x_1208F1366);
    T6 = CALL1(1,VARREF(Ytail),x_1207F1376);
    x_1207F1378 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1378,x_1208F1366);
  } else {
    T14 = CALL2(1,x_1208F1366,LITREF(lit_7),x_1207F1367);
  }
  T17 = FUNSHELL(1,fun_grok_98,2);
  grokF1379 = T17;
  FUNINIT(grokF1379, 2,bodyF1369,grokF1379);
  T16 = BOXVAL(clausesF1368);
  T15 = CALL5(1,grokF1379,T16,Ynil,Ynil,Ynil,Ynil);
UNLINK_STACK();
  QRET(T15);
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
  P x_1215F1388;
  P x_1215F1387;
  P x_1215F1386;
  P x_1215F1385;
  P x_1215F1384;
  P bodyF1383;
  P testF1382;
  P x_1215F1381;
  P x_1216F1380;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1216_101,2);
  x_1216F1380 = T24;
  FUNINIT(x_1216F1380, 2,FREEREF(0),return_);
  x_1215F1381 = FREEREF(0);
  testF1382 = YPfalse;
  testF1382 = BOXFAB(testF1382);
  bodyF1383 = YPfalse;
  bodyF1383 = BOXFAB(bodyF1383);
  T2 = CALL2(1,VARREF(YisaQ),x_1215F1381,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F1381,LITREF(lit_203),x_1216F1380);
    x_1215F1384 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F1384,x_1216F1380);
    BOXVAL(testF1382) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1215F1384);
    x_1215F1385 = T8;
    BOXVAL(bodyF1383) = x_1215F1385;
    x_1215F1386 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F1386,x_1216F1380);
    x_1215F1387 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1387,x_1216F1380);
    T6 = CALL1(1,VARREF(Ytail),x_1215F1386);
    x_1215F1388 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1388,x_1216F1380);
  } else {
    T10 = CALL2(1,x_1216F1380,LITREF(lit_7),x_1215F1381);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T19 = BOXVAL(testF1382);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = BOXVAL(bodyF1383);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1219F1397;
  P x_1219F1396;
  P x_1219F1395;
  P x_1219F1394;
  P x_1219F1393;
  P bodyF1392;
  P testF1391;
  P x_1219F1390;
  P x_1220F1389;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1220_104,2);
  x_1220F1389 = T24;
  FUNINIT(x_1220F1389, 2,FREEREF(0),return_);
  x_1219F1390 = FREEREF(0);
  testF1391 = YPfalse;
  testF1391 = BOXFAB(testF1391);
  bodyF1392 = YPfalse;
  bodyF1392 = BOXFAB(bodyF1392);
  T2 = CALL2(1,VARREF(YisaQ),x_1219F1390,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F1390,LITREF(lit_209),x_1220F1389);
    x_1219F1393 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F1393,x_1220F1389);
    BOXVAL(testF1391) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1219F1393);
    x_1219F1394 = T8;
    BOXVAL(bodyF1392) = x_1219F1394;
    x_1219F1395 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1219F1395,x_1220F1389);
    x_1219F1396 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F1396,x_1220F1389);
    T6 = CALL1(1,VARREF(Ytail),x_1219F1395);
    x_1219F1397 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F1397,x_1220F1389);
  } else {
    T10 = CALL2(1,x_1220F1389,LITREF(lit_7),x_1219F1390);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T19 = BOXVAL(testF1391);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = BOXVAL(bodyF1392);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P old_valueF1413;
  P nameF1412;
  P x_1231F1411;
  P x_1231F1410;
  P x_1231F1409;
  P x_1231F1408;
  P x_1231F1407;
  P x_1231F1406;
  P x_1231F1405;
  P x_1231F1404;
  P x_1231F1403;
  P restF1402;
  P valueF1401;
  P varF1400;
  P x_1231F1399;
  P x_1232F1398;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T55 = FUNSHELL(0,fun_x_1232_108,2);
  x_1232F1398 = T55;
  FUNINIT(x_1232F1398, 2,FREEREF(0),return_);
  T54 = BOXVAL(FREEREF(0));
  x_1231F1399 = T54;
  varF1400 = YPfalse;
  varF1400 = BOXFAB(varF1400);
  valueF1401 = YPfalse;
  valueF1401 = BOXFAB(valueF1401);
  restF1402 = YPfalse;
  restF1402 = BOXFAB(restF1402);
  T3 = CALL2(1,VARREF(YisaQ),x_1231F1399,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1399,x_1232F1398);
    x_1231F1403 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1403,x_1232F1398);
    BOXVAL(varF1400) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F1403);
    x_1231F1404 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1404,x_1232F1398);
    BOXVAL(valueF1401) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1231F1404);
    x_1231F1405 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1405,x_1232F1398);
    x_1231F1406 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1406,x_1232F1398);
    T11 = CALL1(1,VARREF(Ytail),x_1231F1405);
    x_1231F1407 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1407,x_1232F1398);
    T17 = CALL1(1,VARREF(Ytail),x_1231F1399);
    x_1231F1408 = T17;
    BOXVAL(restF1402) = x_1231F1408;
    x_1231F1409 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1409,x_1232F1398);
    x_1231F1410 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1410,x_1232F1398);
    T7 = CALL1(1,VARREF(Ytail),x_1231F1409);
    x_1231F1411 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1411,x_1232F1398);
  } else {
    T18 = CALL2(1,x_1232F1398,LITREF(lit_7),x_1231F1399);
  }
  T53 = BOXVAL(varF1400);
  T52 = CALL1(1,VARREF(YgooSmacrosYvar_name),T53);
  nameF1412 = T52;
  T51 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF1413 = T51;
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),old_valueF1413);
  T26 = CALL1(1,VARREF(Ylst),nameF1412);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_222));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T36 = CALL1(1,VARREF(Ylst),nameF1412);
  T38 = BOXVAL(valueF1401);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T44 = BOXVAL(restF1402);
  T43 = CALL2(1,VARREF(YgooSmacrosYcat),T44,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(FREEREF(1));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T45,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T39,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T49 = CALL1(1,VARREF(Ylst),nameF1412);
  T50 = CALL1(1,VARREF(Ylst),old_valueF1413);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_11));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T46,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T27,LITREF(lit_11));
UNLINK_STACK();
  QRET(T19);
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
  P x_1229F1415;
  P x_1230F1414;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_1230_110,3);
  x_1230F1414 = T7;
  FUNINIT(x_1230F1414, 3,FREEREF(0),FREEREF(1),return_);
  T6 = BOXVAL(FREEREF(0));
  x_1229F1415 = T6;
  T0 = CALL2(1,VARREF(YisaQ),x_1229F1415,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1229F1415,x_1230F1414);
  } else {
    T2 = CALL2(1,x_1230F1414,LITREF(lit_7),x_1229F1415);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T5 = BOXVAL(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_112) {
  P return_;
  P x_1227F1424;
  P x_1227F1423;
  P x_1227F1422;
  P x_1227F1421;
  P x_1227F1420;
  P bodyF1419;
  P bindingsF1418;
  P x_1227F1417;
  P x_1228F1416;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1228_107,2);
  x_1228F1416 = T13;
  FUNINIT(x_1228F1416, 2,FREEREF(0),return_);
  x_1227F1417 = FREEREF(0);
  bindingsF1418 = YPfalse;
  bindingsF1418 = BOXFAB(bindingsF1418);
  bodyF1419 = YPfalse;
  bodyF1419 = BOXFAB(bodyF1419);
  T2 = CALL2(1,VARREF(YisaQ),x_1227F1417,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F1417,LITREF(lit_214),x_1228F1416);
    x_1227F1420 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F1420,x_1228F1416);
    BOXVAL(bindingsF1418) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1227F1420);
    x_1227F1421 = T8;
    BOXVAL(bodyF1419) = x_1227F1421;
    x_1227F1422 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1422,x_1228F1416);
    x_1227F1423 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1423,x_1228F1416);
    T6 = CALL1(1,VARREF(Ytail),x_1227F1422);
    x_1227F1424 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1424,x_1228F1416);
  } else {
    T10 = CALL2(1,x_1228F1416,LITREF(lit_7),x_1227F1417);
  }
  T12 = FUNFAB(fun_111,2,bindingsF1418,bodyF1419);
  T11 = with_exit(T12);
UNLINK_STACK();
  QRET(T11);
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
  P vnamF1436;
  P typF1435;
  P namF1434;
  P x_1235F1433;
  P x_1235F1432;
  P x_1235F1431;
  P x_1235F1430;
  P x_1235F1429;
  P valueF1428;
  P varF1427;
  P x_1235F1426;
  P x_1236F1425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1236_114,2);
  x_1236F1425 = T51;
  FUNINIT(x_1236F1425, 2,FREEREF(0),return_);
  x_1235F1426 = FREEREF(0);
  varF1427 = YPfalse;
  varF1427 = BOXFAB(varF1427);
  valueF1428 = YPfalse;
  valueF1428 = BOXFAB(valueF1428);
  T2 = CALL2(1,VARREF(YisaQ),x_1235F1426,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F1426,LITREF(lit_227),x_1236F1425);
    x_1235F1429 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1429,x_1236F1425);
    BOXVAL(varF1427) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1235F1429);
    x_1235F1430 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1430,x_1236F1425);
    BOXVAL(valueF1428) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1235F1430);
    x_1235F1431 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1235F1431,x_1236F1425);
    x_1235F1432 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1432,x_1236F1425);
    T6 = CALL1(1,VARREF(Ytail),x_1235F1431);
    x_1235F1433 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1433,x_1236F1425);
  } else {
    T12 = CALL2(1,x_1236F1425,LITREF(lit_7),x_1235F1426);
  }
  T50 = BOXVAL(varF1427);
  T49 = CALL1(1,VARREF(YgooSmacrosYvar_name),T50);
  namF1434 = T49;
  T48 = BOXVAL(varF1427);
  T47 = CALL1(1,VARREF(YgooSmacrosYvar_type),T48);
  typF1435 = T47;
  T46 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_228),namF1434,LITREF(lit_229));
  vnamF1436 = T46;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T18 = CALL1(1,VARREF(Ylst),vnamF1436);
  T20 = BOXVAL(valueF1428);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T24 = CALL1(1,VARREF(Ylst),namF1434);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T28 = CALL1(1,VARREF(Ylst),typF1435);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = CALL1(1,VARREF(Ylst),vnamF1436);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T25,T29,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T34 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF1434);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T40 = CALL1(1,VARREF(Ylst),typF1435);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_11));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T44 = CALL1(1,VARREF(Ylst),vnamF1436);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T45,LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T31 = CALL5(1,VARREF(YgooSmacrosYcat),T32,T33,T35,T41,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T21,T30,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P x_1239F1443;
  P x_1239F1442;
  P x_1239F1441;
  P x_1239F1440;
  P bodyF1439;
  P x_1239F1438;
  P x_1240F1437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1240_117,2);
  x_1240F1437 = T17;
  FUNINIT(x_1240F1437, 2,FREEREF(0),return_);
  x_1239F1438 = FREEREF(0);
  bodyF1439 = YPfalse;
  bodyF1439 = BOXFAB(bodyF1439);
  T1 = CALL2(1,VARREF(YisaQ),x_1239F1438,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F1438,LITREF(lit_238),x_1240F1437);
    x_1239F1440 = T6;
    BOXVAL(bodyF1439) = x_1239F1440;
    x_1239F1441 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1239F1441,x_1240F1437);
    x_1239F1442 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1442,x_1240F1437);
    T5 = CALL1(1,VARREF(Ytail),x_1239F1441);
    x_1239F1443 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1443,x_1240F1437);
  } else {
    T7 = CALL2(1,x_1240F1437,LITREF(lit_7),x_1239F1438);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T16 = BOXVAL(bodyF1439);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T16,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P x_1243F1450;
  P x_1243F1449;
  P x_1243F1448;
  P x_1243F1447;
  P namesF1446;
  P x_1243F1445;
  P x_1244F1444;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1244_120,2);
  x_1244F1444 = T31;
  FUNINIT(x_1244F1444, 2,FREEREF(0),return_);
  x_1243F1445 = FREEREF(0);
  namesF1446 = YPfalse;
  namesF1446 = BOXFAB(namesF1446);
  T1 = CALL2(1,VARREF(YisaQ),x_1243F1445,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F1445,LITREF(lit_244),x_1244F1444);
    x_1243F1447 = T6;
    BOXVAL(namesF1446) = x_1243F1447;
    x_1243F1448 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F1448,x_1244F1444);
    x_1243F1449 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F1449,x_1244F1444);
    T5 = CALL1(1,VARREF(Ytail),x_1243F1448);
    x_1243F1450 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F1450,x_1244F1444);
  } else {
    T7 = CALL2(1,x_1244F1444,LITREF(lit_7),x_1243F1445);
  }
  T10 = BOXVAL(namesF1446);
  T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
    T16 = CALL1(1,VARREF(Ylst),YPfalse);
    T19 = BOXVAL(namesF1446);
    T18 = CALL1(1,VARREF(Yhead),T19);
    T17 = CALL1(1,VARREF(Ylst),T18);
    T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T17,LITREF(lit_11));
    T13 = CALL1(1,VARREF(Ylst),T14);
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T25 = BOXVAL(namesF1446);
    T24 = CALL1(1,VARREF(Yhead),T25);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_11));
    T20 = CALL1(1,VARREF(Ylst),T21);
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T30 = BOXVAL(namesF1446);
    T29 = CALL1(1,VARREF(Ytail),T30);
    T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,LITREF(lit_11));
    T26 = CALL1(1,VARREF(Ylst),T27);
    T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T20,T26,LITREF(lit_11));
    T8 = T11;
  }
UNLINK_STACK();
  QRET(T8);
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
  P x_1283F1456;
  P x_1283F1455;
  P x_1283F1454;
  P nameF1453;
  P x_1283F1452;
  P x_1284F1451;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T20 = FUNSHELL(0,fun_x_1284_124,1);
  x_1284F1451 = T20;
  FUNINIT(x_1284F1451, 1,return_);
  x_1283F1452 = FREEREF(0);
  nameF1453 = YPfalse;
  nameF1453 = BOXFAB(nameF1453);
  T1 = CALL2(1,VARREF(YisaQ),x_1283F1452,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1283F1452,x_1284F1451);
    BOXVAL(nameF1453) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1283F1452);
    x_1283F1454 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1283F1454,x_1284F1451);
    x_1283F1455 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1455,x_1284F1451);
    T5 = CALL1(1,VARREF(Ytail),x_1283F1454);
    x_1283F1456 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1456,x_1284F1451);
  } else {
    T8 = CALL2(1,x_1284F1451,LITREF(lit_7),x_1283F1452);
  }
  T11 = BOXVAL(nameF1453);
  T10 = CALL2(1,VARREF(YisaQ),T11,VARREF(YLsymG));
  if (T10 != YPfalse) {
    T14 = BOXVAL(nameF1453);
    T13 = CALL1(1,VARREF(Ylst),T14);
    T17 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T19 = BOXVAL(nameF1453);
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

FUNCODEDEF(fun_x_1281_126) {
  P msg_,args_;
  P x_1282F1457;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1282F1457 = FREEREF(0);
  T2 = FUNFAB(fun_125,1,x_1282F1457);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P return_;
  P x_1280F1466;
  P x_1280F1465;
  P x_1280F1464;
  P x_1280F1463;
  P x_1280F1462;
  P restF1461;
  P nameF1460;
  P x_1280F1459;
  P x_1281F1458;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1281_126,2);
  x_1281F1458 = T19;
  FUNINIT(x_1281F1458, 2,FREEREF(0),return_);
  x_1280F1459 = FREEREF(0);
  nameF1460 = YPfalse;
  nameF1460 = BOXFAB(nameF1460);
  restF1461 = YPfalse;
  restF1461 = BOXFAB(restF1461);
  T2 = CALL2(1,VARREF(YisaQ),x_1280F1459,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1280F1459,LITREF(lit_269),x_1281F1458);
    x_1280F1462 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1280F1462,x_1281F1458);
    BOXVAL(nameF1460) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1280F1462);
    x_1280F1463 = T8;
    BOXVAL(restF1461) = x_1280F1463;
    x_1280F1464 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1280F1464,x_1281F1458);
    x_1280F1465 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F1465,x_1281F1458);
    T6 = CALL1(1,VARREF(Ytail),x_1280F1464);
    x_1280F1466 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F1466,x_1281F1458);
  } else {
    T10 = CALL2(1,x_1281F1458,LITREF(lit_7),x_1280F1459);
  }
  T13 = BOXVAL(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = BOXVAL(nameF1460);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_1278_128) {
  P msg_,args_;
  P x_1279F1467;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1279F1467 = FREEREF(0);
  T2 = FUNFAB(fun_127,2,x_1279F1467,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  P return_;
  P x_1277F1476;
  P x_1277F1475;
  P x_1277F1474;
  P x_1277F1473;
  P x_1277F1472;
  P restF1471;
  P nameF1470;
  P x_1277F1469;
  P x_1278F1468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1278_128,3);
  x_1278F1468 = T19;
  FUNINIT(x_1278F1468, 3,FREEREF(0),FREEREF(1),return_);
  x_1277F1469 = FREEREF(0);
  nameF1470 = YPfalse;
  nameF1470 = BOXFAB(nameF1470);
  restF1471 = YPfalse;
  restF1471 = BOXFAB(restF1471);
  T2 = CALL2(1,VARREF(YisaQ),x_1277F1469,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1277F1469,LITREF(lit_270),x_1278F1468);
    x_1277F1472 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1277F1472,x_1278F1468);
    BOXVAL(nameF1470) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1277F1472);
    x_1277F1473 = T8;
    BOXVAL(restF1471) = x_1277F1473;
    x_1277F1474 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1277F1474,x_1278F1468);
    x_1277F1475 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F1475,x_1278F1468);
    T6 = CALL1(1,VARREF(Ytail),x_1277F1474);
    x_1277F1476 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F1476,x_1278F1468);
  } else {
    T10 = CALL2(1,x_1278F1468,LITREF(lit_7),x_1277F1469);
  }
  T13 = BOXVAL(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = BOXVAL(nameF1470);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_1275_130) {
  P msg_,args_;
  P x_1276F1477;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1276F1477 = FREEREF(0);
  T2 = FUNFAB(fun_129,2,x_1276F1477,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P return_;
  P x_1274F1486;
  P x_1274F1485;
  P x_1274F1484;
  P x_1274F1483;
  P x_1274F1482;
  P restF1481;
  P nameF1480;
  P x_1274F1479;
  P x_1275F1478;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1275_130,3);
  x_1275F1478 = T19;
  FUNINIT(x_1275F1478, 3,FREEREF(0),FREEREF(1),return_);
  x_1274F1479 = FREEREF(0);
  nameF1480 = YPfalse;
  nameF1480 = BOXFAB(nameF1480);
  restF1481 = YPfalse;
  restF1481 = BOXFAB(restF1481);
  T2 = CALL2(1,VARREF(YisaQ),x_1274F1479,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1274F1479,LITREF(lit_230),x_1275F1478);
    x_1274F1482 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1274F1482,x_1275F1478);
    BOXVAL(nameF1480) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1274F1482);
    x_1274F1483 = T8;
    BOXVAL(restF1481) = x_1274F1483;
    x_1274F1484 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1274F1484,x_1275F1478);
    x_1274F1485 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1274F1485,x_1275F1478);
    T6 = CALL1(1,VARREF(Ytail),x_1274F1484);
    x_1274F1486 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1274F1486,x_1275F1478);
  } else {
    T10 = CALL2(1,x_1275F1478,LITREF(lit_7),x_1274F1479);
  }
  T13 = BOXVAL(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = BOXVAL(nameF1480);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_1272_132) {
  P msg_,args_;
  P x_1273F1487;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1273F1487 = FREEREF(0);
  T2 = FUNFAB(fun_131,2,x_1273F1487,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P x_1271F1496;
  P x_1271F1495;
  P x_1271F1494;
  P x_1271F1493;
  P x_1271F1492;
  P restF1491;
  P nameF1490;
  P x_1271F1489;
  P x_1272F1488;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1272_132,3);
  x_1272F1488 = T19;
  FUNINIT(x_1272F1488, 3,FREEREF(0),FREEREF(1),return_);
  x_1271F1489 = FREEREF(0);
  nameF1490 = YPfalse;
  nameF1490 = BOXFAB(nameF1490);
  restF1491 = YPfalse;
  restF1491 = BOXFAB(restF1491);
  T2 = CALL2(1,VARREF(YisaQ),x_1271F1489,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1271F1489,LITREF(lit_271),x_1272F1488);
    x_1271F1492 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F1492,x_1272F1488);
    BOXVAL(nameF1490) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1271F1492);
    x_1271F1493 = T8;
    BOXVAL(restF1491) = x_1271F1493;
    x_1271F1494 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F1494,x_1272F1488);
    x_1271F1495 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F1495,x_1272F1488);
    T6 = CALL1(1,VARREF(Ytail),x_1271F1494);
    x_1271F1496 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F1496,x_1272F1488);
  } else {
    T10 = CALL2(1,x_1272F1488,LITREF(lit_7),x_1271F1489);
  }
  T13 = BOXVAL(nameF1490);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = BOXVAL(nameF1490);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_1269_134) {
  P msg_,args_;
  P x_1270F1497;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1270F1497 = FREEREF(0);
  T2 = FUNFAB(fun_133,2,x_1270F1497,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P return_;
  P x_1268F1506;
  P x_1268F1505;
  P x_1268F1504;
  P x_1268F1503;
  P x_1268F1502;
  P restF1501;
  P nameF1500;
  P x_1268F1499;
  P x_1269F1498;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1269_134,3);
  x_1269F1498 = T25;
  FUNINIT(x_1269F1498, 3,FREEREF(0),FREEREF(1),return_);
  x_1268F1499 = FREEREF(0);
  nameF1500 = YPfalse;
  nameF1500 = BOXFAB(nameF1500);
  restF1501 = YPfalse;
  restF1501 = BOXFAB(restF1501);
  T2 = CALL2(1,VARREF(YisaQ),x_1268F1499,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1268F1499,LITREF(lit_272),x_1269F1498);
    x_1268F1502 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1268F1502,x_1269F1498);
    BOXVAL(nameF1500) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1268F1502);
    x_1268F1503 = T8;
    BOXVAL(restF1501) = x_1268F1503;
    x_1268F1504 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1268F1504,x_1269F1498);
    x_1268F1505 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1268F1505,x_1269F1498);
    T6 = CALL1(1,VARREF(Ytail),x_1268F1504);
    x_1268F1506 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1268F1506,x_1269F1498);
  } else {
    T10 = CALL2(1,x_1269F1498,LITREF(lit_7),x_1268F1499);
  }
  T13 = BOXVAL(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = BOXVAL(nameF1500);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T24 = BOXVAL(nameF1500);
  T23 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T24);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T14,T19,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_136) {
  P return_;
  P defsF1515;
  P x_1267F1514;
  P x_1265F1513;
  P x_1265F1512;
  P x_1265F1511;
  P x_1265F1510;
  P defF1509;
  P x_1265F1508;
  P x_1266F1507;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1266_123,2);
  x_1266F1507 = T13;
  FUNINIT(x_1266F1507, 2,FREEREF(0),return_);
  x_1265F1508 = FREEREF(0);
  defF1509 = YPfalse;
  defF1509 = BOXFAB(defF1509);
  T1 = CALL2(1,VARREF(YisaQ),x_1265F1508,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F1508,LITREF(lit_250),x_1266F1507);
    x_1265F1510 = T6;
    BOXVAL(defF1509) = x_1265F1510;
    x_1265F1511 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1265F1511,x_1266F1507);
    x_1265F1512 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F1512,x_1266F1507);
    T5 = CALL1(1,VARREF(Ytail),x_1265F1511);
    x_1265F1513 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F1513,x_1266F1507);
  } else {
    T7 = CALL2(1,x_1266F1507,LITREF(lit_7),x_1265F1508);
  }
  T12 = BOXVAL(defF1509);
  x_1267F1514 = T12;
  T11 = FUNFAB(fun_135,2,x_1267F1514,defF1509);
  T10 = with_exit(T11);
  defsF1515 = T10;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,defsF1515,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P xF1516;
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
  xF1516 = T2;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_250));
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,xF1516,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  P return_;
  P x_1287F1523;
  P x_1287F1522;
  P x_1287F1521;
  P x_1287F1520;
  P defsF1519;
  P x_1287F1518;
  P x_1288F1517;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1288_138,2);
  x_1288F1517 = T13;
  FUNINIT(x_1288F1517, 2,FREEREF(0),return_);
  x_1287F1518 = FREEREF(0);
  defsF1519 = YPfalse;
  defsF1519 = BOXFAB(defsF1519);
  T1 = CALL2(1,VARREF(YisaQ),x_1287F1518,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1287F1518,LITREF(lit_277),x_1288F1517);
    x_1287F1520 = T6;
    BOXVAL(defsF1519) = x_1287F1520;
    x_1287F1521 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1287F1521,x_1288F1517);
    x_1287F1522 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1522,x_1288F1517);
    T5 = CALL1(1,VARREF(Ytail),x_1287F1521);
    x_1287F1523 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1523,x_1288F1517);
  } else {
    T7 = CALL2(1,x_1288F1517,LITREF(lit_7),x_1287F1518);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T11 = fun_139;
  T12 = BOXVAL(defsF1519);
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),T11,T12);
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,T10,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P T176,T177;
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
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_137),T92,ENVNUL,PNUL,sloc(147));
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
  fun_grok_98 = YPmet(FUNCODEREF(fun_grok_98),LITREF(lit_185),T121,ENVNUL,PNUL,sloc(185));
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
  T177 = YPfalse;
  return T177;
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
  {"%vpc", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"case-by", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"renew", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"assert", PVAR, NULL},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"pub", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"unless", PVAR, NULL},
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
  {"do", CVAR, &YgooSmacrosYdo},
  {"need-implementation", PVAR, NULL},
  {"dlet", PVAR, NULL},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"or/set", PVAR, NULL},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"---main-0---", PVAR, NULL},
  {"app-sup", PVAR, NULL},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"incf", PVAR, NULL},
  {"match", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"until", PVAR, NULL},
  {"or", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"decf", PVAR, NULL},
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
  {"while", PVAR, NULL},
  {"when", PVAR, NULL},
  {"def-fun-var", PVAR, NULL},
  {"popf", PVAR, NULL},
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
