/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/macros */

EXT(Ytype_object,"goo/boot","type-object");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ylst,"goo/boot","lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yhead,"goo/boot","head");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yerror,"goo/boot","error");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ynul,"goo/boot","nul");
EXT(Ynew,"goo/boot","new");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ynil,"goo/boot","nil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclone,"goo/boot","clone");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Ytail,"goo/boot","tail");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_242);
DEFLIT(lit_86);
DEFLIT(lit_105);
DEFLIT(lit_12);
DEFLIT(lit_163);
DEFLIT(lit_107);
DEFLIT(lit_61);
DEFLIT(lit_254);
DEFLIT(lit_230);
DEFLIT(lit_100);
DEFLIT(lit_0);
DEFLIT(lit_76);
DEFLIT(lit_90);
DEFLIT(lit_81);
DEFLIT(lit_189);
DEFLIT(lit_170);
DEFLIT(lit_185);
DEFLIT(lit_205);
DEFLIT(lit_71);
DEFLIT(lit_216);
DEFLIT(lit_268);
DEFLIT(lit_10);
DEFLIT(lit_91);
DEFLIT(lit_57);
DEFLIT(lit_179);
DEFLIT(lit_192);
DEFLIT(lit_155);
DEFLIT(lit_29);
DEFLIT(lit_229);
DEFLIT(lit_157);
DEFLIT(lit_89);
DEFLIT(lit_158);
DEFLIT(lit_208);
DEFLIT(lit_80);
DEFLIT(lit_70);
DEFLIT(lit_169);
DEFLIT(lit_248);
DEFLIT(lit_222);
DEFLIT(lit_9);
DEFLIT(lit_103);
DEFLIT(lit_39);
DEFLIT(lit_59);
DEFLIT(lit_154);
DEFLIT(lit_36);
DEFLIT(lit_228);
DEFLIT(lit_256);
DEFLIT(lit_260);
DEFLIT(lit_46);
DEFLIT(lit_168);
DEFLIT(lit_37);
DEFLIT(lit_269);
DEFLIT(lit_180);
DEFLIT(lit_74);
DEFLIT(lit_7);
DEFLIT(lit_8);
DEFLIT(lit_196);
DEFLIT(lit_188);
DEFLIT(lit_63);
DEFLIT(lit_55);
DEFLIT(lit_252);
DEFLIT(lit_144);
DEFLIT(lit_227);
DEFLIT(lit_117);
DEFLIT(lit_246);
DEFLIT(lit_49);
DEFLIT(lit_264);
DEFLIT(lit_243);
DEFLIT(lit_78);
DEFLIT(lit_186);
DEFLIT(lit_187);
DEFLIT(lit_2);
DEFLIT(lit_161);
DEFLIT(lit_131);
DEFLIT(lit_247);
DEFLIT(lit_223);
DEFLIT(lit_6);
DEFLIT(lit_206);
DEFLIT(lit_219);
DEFLIT(lit_137);
DEFLIT(lit_139);
DEFLIT(lit_53);
DEFLIT(lit_152);
DEFLIT(lit_210);
DEFLIT(lit_20);
DEFLIT(lit_164);
DEFLIT(lit_84);
DEFLIT(lit_130);
DEFLIT(lit_240);
DEFLIT(lit_27);
DEFLIT(lit_101);
DEFLIT(lit_79);
DEFLIT(lit_92);
DEFLIT(lit_44);
DEFLIT(lit_141);
DEFLIT(lit_259);
DEFLIT(lit_118);
DEFLIT(lit_211);
DEFLIT(lit_146);
DEFLIT(lit_42);
DEFLIT(lit_184);
DEFLIT(lit_47);
DEFLIT(lit_33);
DEFLIT(lit_156);
DEFLIT(lit_129);
DEFLIT(lit_166);
DEFLIT(lit_148);
DEFLIT(lit_109);
DEFLIT(lit_38);
DEFLIT(lit_5);
DEFLIT(lit_224);
DEFLIT(lit_231);
DEFLIT(lit_239);
DEFLIT(lit_255);
DEFLIT(lit_143);
DEFLIT(lit_267);
DEFLIT(lit_266);
DEFLIT(lit_249);
DEFLIT(lit_43);
DEFLIT(lit_60);
DEFLIT(lit_113);
DEFLIT(lit_88);
DEFLIT(lit_176);
DEFLIT(lit_272);
DEFLIT(lit_26);
DEFLIT(lit_83);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_51);
DEFLIT(lit_99);
DEFLIT(lit_123);
DEFLIT(lit_244);
DEFLIT(lit_67);
DEFLIT(lit_77);
DEFLIT(lit_162);
DEFLIT(lit_174);
DEFLIT(lit_116);
DEFLIT(lit_181);
DEFLIT(lit_145);
DEFLIT(lit_4);
DEFLIT(lit_198);
DEFLIT(lit_87);
DEFLIT(lit_32);
DEFLIT(lit_270);
DEFLIT(lit_175);
DEFLIT(lit_45);
DEFLIT(lit_25);
DEFLIT(lit_127);
DEFLIT(lit_215);
DEFLIT(lit_234);
DEFLIT(lit_19);
DEFLIT(lit_58);
DEFLIT(lit_3);
DEFLIT(lit_250);
DEFLIT(lit_273);
DEFLIT(lit_24);
DEFLIT(lit_31);
DEFLIT(lit_35);
DEFLIT(lit_236);
DEFLIT(lit_271);
DEFLIT(lit_65);
DEFLIT(lit_111);
DEFLIT(lit_96);
DEFLIT(lit_56);
DEFLIT(lit_202);
DEFLIT(lit_75);
DEFLIT(lit_114);
DEFLIT(lit_132);
DEFLIT(lit_73);
DEFLIT(lit_98);
DEFLIT(lit_209);
DEFLIT(lit_68);
DEFLIT(lit_160);
DEFLIT(lit_199);
DEFLIT(lit_235);
DEFLIT(lit_172);
DEFLIT(lit_165);
DEFLIT(lit_102);
DEFLIT(lit_128);
DEFLIT(lit_85);
DEFLIT(lit_124);
DEFLIT(lit_173);
DEFLIT(lit_149);
DEFLIT(lit_13);
DEFLIT(lit_245);
DEFLIT(lit_178);
DEFLIT(lit_48);
DEFLIT(lit_212);
DEFLIT(lit_133);
DEFLIT(lit_232);
DEFLIT(lit_238);
DEFLIT(lit_213);
DEFLIT(lit_195);
DEFLIT(lit_177);
DEFLIT(lit_112);
DEFLIT(lit_14);
DEFLIT(lit_120);
DEFLIT(lit_237);
DEFLIT(lit_251);
DEFLIT(lit_119);
DEFLIT(lit_204);
DEFLIT(lit_54);
DEFLIT(lit_261);
DEFLIT(lit_110);
DEFLIT(lit_241);
DEFLIT(lit_274);
DEFLIT(lit_138);
DEFLIT(lit_1);
DEFLIT(lit_153);
DEFLIT(lit_108);
DEFLIT(lit_217);
DEFLIT(lit_194);
DEFLIT(lit_17);
DEFLIT(lit_41);
DEFLIT(lit_34);
DEFLIT(lit_207);
DEFLIT(lit_197);
DEFLIT(lit_233);
DEFLIT(lit_171);
DEFLIT(lit_183);
DEFLIT(lit_201);
DEFLIT(lit_126);
DEFLIT(lit_40);
DEFLIT(lit_125);
DEFLIT(lit_147);
DEFLIT(lit_226);
DEFLIT(lit_203);
DEFLIT(lit_140);
DEFLIT(lit_150);
DEFLIT(lit_69);
DEFLIT(lit_214);
DEFLIT(lit_193);
DEFLIT(lit_52);
DEFLIT(lit_262);
DEFLIT(lit_30);
DEFLIT(lit_220);
DEFLIT(lit_66);
DEFLIT(lit_106);
DEFLIT(lit_200);
DEFLIT(lit_122);
DEFLIT(lit_134);
DEFLIT(lit_225);
DEFLIT(lit_190);
DEFLIT(lit_16);
DEFLIT(lit_94);
DEFLIT(lit_182);
DEFLIT(lit_97);
DEFLIT(lit_275);
DEFLIT(lit_257);
DEFLIT(lit_258);
DEFLIT(lit_253);
DEFLIT(lit_11);
DEFLIT(lit_136);
DEFLIT(lit_121);
DEFLIT(lit_151);
DEFLIT(lit_263);
DEFLIT(lit_218);
DEFLIT(lit_21);
DEFLIT(lit_23);
DEFLIT(lit_142);
DEFLIT(lit_115);
DEFLIT(lit_221);
DEFLIT(lit_93);
DEFLIT(lit_95);
DEFLIT(lit_191);
DEFLIT(lit_62);
DEFLIT(lit_50);
DEFLIT(lit_15);
DEFLIT(lit_135);
DEFLIT(lit_64);
DEFLIT(lit_28);
DEFLIT(lit_159);
DEFLIT(lit_104);
DEFLIT(lit_265);
DEFLIT(lit_82);
DEFLIT(lit_72);
DEFLIT(lit_167);

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
LOCFOR(fun_loop_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_munch_14);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1094_16);
LOCFOR(fun_x_1096_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_x_1102_21);
LOCFOR(fun_x_1104_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_x_1108_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_1112_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_x_1116_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_x_1120_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_x_1124_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_x_1128_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_x_1132_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1140_50);
LOCFOR(fun_x_1142_51);
LOCFOR(fun_x_1144_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_x_1152_57);
LOCFOR(fun_x_1154_58);
LOCFOR(fun_x_1156_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1162_64);
LOCFOR(fun_x_1164_65);
LOCFOR(fun_66);
LOCFOR(fun_67);
LOCFOR(fun_68);
LOCFOR(fun_x_1170_69);
LOCFOR(fun_x_1172_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1176_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1180_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_x_1188_81);
LOCFOR(fun_x_1192_82);
LOCFOR(fun_83);
LOCFOR(fun_x_1190_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_x_1196_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_x_1204_91);
LOCFOR(fun_x_1206_92);
LOCFOR(fun_x_1208_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_grok_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1212_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_x_1216_102);
LOCFOR(fun_103);
LOCFOR(fun_104);
LOCFOR(fun_x_1224_105);
LOCFOR(fun_x_1228_106);
LOCFOR(fun_107);
LOCFOR(fun_x_1226_108);
LOCFOR(fun_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1232_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_x_1236_115);
LOCFOR(fun_116);
LOCFOR(fun_117);
LOCFOR(fun_x_1240_118);
LOCFOR(fun_119);
LOCFOR(fun_120);
LOCFOR(fun_x_1262_121);
LOCFOR(fun_x_1280_122);
LOCFOR(fun_123);
LOCFOR(fun_x_1277_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1274_126);
LOCFOR(fun_127);
LOCFOR(fun_x_1271_128);
LOCFOR(fun_129);
LOCFOR(fun_x_1268_130);
LOCFOR(fun_131);
LOCFOR(fun_x_1265_132);
LOCFOR(fun_133);
LOCFOR(fun_134);
LOCFOR(fun_135);
LOCFOR(fun_x_1284_136);
LOCFOR(fun_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYOchecked_next_methods) {
  P met_,nxt_mets_,args_;
  P yF974;
  P xF973;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(met_, 0);
  ARG(nxt_mets_, 1);
  NARGS(args_, 2);
loop:
  if (nxt_mets_ != YPfalse) {
    xF973 = nxt_mets_;
    yF974 = Ynil;
    T4 = (P)YPeqQ(xF973,yF974);
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
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_6),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P return_;
  P x_1075F981;
  P x_1075F980;
  P x_1075F979;
  P x_1075F978;
  P argsF977;
  P x_1075F976;
  P x_1076F975;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_1,2);
  x_1076F975 = T1;
  FUNINIT(x_1076F975, 2,FREEREF(0),return_);
  x_1075F976 = FREEREF(0);
  argsF977 = YPfalse;
  argsF977 = BOXFAB(argsF977);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F976,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F976,LITREF(lit_6),x_1076F975);
    x_1075F978 = T7;
    BOXVAL(argsF977) = x_1075F978;
    x_1075F979 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1075F979,x_1076F975);
    x_1075F980 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F980,x_1076F975);
    T12 = CALL1(1,VARREF(Ytail),x_1075F979);
    x_1075F981 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F981,x_1076F975);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1076F975,LITREF(lit_7),x_1075F976);
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
  T31 = BOXVAL(argsF977);
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
  T43 = BOXVAL(argsF977);
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_2,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1080_4) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_21),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P return_;
  P x_1079F988;
  P x_1079F987;
  P x_1079F986;
  P x_1079F985;
  P argsF984;
  P x_1079F983;
  P x_1080F982;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_4,2);
  x_1080F982 = T1;
  FUNINIT(x_1080F982, 2,FREEREF(0),return_);
  x_1079F983 = FREEREF(0);
  argsF984 = YPfalse;
  argsF984 = BOXFAB(argsF984);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F983,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F983,LITREF(lit_21),x_1080F982);
    x_1079F985 = T7;
    BOXVAL(argsF984) = x_1079F985;
    x_1079F986 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1079F986,x_1080F982);
    x_1079F987 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F987,x_1080F982);
    T12 = CALL1(1,VARREF(Ytail),x_1079F986);
    x_1079F988 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F988,x_1080F982);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1080F982,LITREF(lit_7),x_1079F983);
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
  T31 = BOXVAL(argsF984);
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
  T43 = BOXVAL(argsF984);
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_5,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1084_7) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_26),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P return_;
  P x_1083F997;
  P x_1083F996;
  P x_1083F995;
  P x_1083F994;
  P x_1083F993;
  P argsF992;
  P fF991;
  P x_1083F990;
  P x_1084F989;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_7,2);
  x_1084F989 = T1;
  FUNINIT(x_1084F989, 2,FREEREF(0),return_);
  x_1083F990 = FREEREF(0);
  fF991 = YPfalse;
  fF991 = BOXFAB(fF991);
  argsF992 = YPfalse;
  argsF992 = BOXFAB(argsF992);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F990,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F990,LITREF(lit_26),x_1084F989);
    x_1083F993 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F993,x_1084F989);
    BOXVAL(fF991) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F993);
    x_1083F994 = T12;
    BOXVAL(argsF992) = x_1083F994;
    x_1083F995 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1083F995,x_1084F989);
    x_1083F996 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F996,x_1084F989);
    T17 = CALL1(1,VARREF(Ytail),x_1083F995);
    x_1083F997 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F997,x_1084F989);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1084F989,LITREF(lit_7),x_1083F990);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T23 = BOXVAL(fF991);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = BOXVAL(argsF992);
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_8,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1088_10) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_31),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_11) {
  P sets_,inits_;
  P valF998;
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
    valF998 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF998);
    T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T15,LITREF(lit_11));
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

FUNCODEDEF(fun_12) {
  P return_;
  P setsF1010;
  P loopF1009;
  P varF1008;
  P x_1087F1007;
  P x_1087F1006;
  P x_1087F1005;
  P x_1087F1004;
  P x_1087F1003;
  P prop_initsF1002;
  P xF1001;
  P x_1087F1000;
  P x_1088F999;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_10,2);
  x_1088F999 = T1;
  FUNINIT(x_1088F999, 2,FREEREF(0),return_);
  x_1087F1000 = FREEREF(0);
  xF1001 = YPfalse;
  xF1001 = BOXFAB(xF1001);
  prop_initsF1002 = YPfalse;
  prop_initsF1002 = BOXFAB(prop_initsF1002);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F1000,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F1000,LITREF(lit_31),x_1088F999);
    x_1087F1003 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F1003,x_1088F999);
    BOXVAL(xF1001) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F1003);
    x_1087F1004 = T12;
    BOXVAL(prop_initsF1002) = x_1087F1004;
    x_1087F1005 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1087F1005,x_1088F999);
    x_1087F1006 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1006,x_1088F999);
    T17 = CALL1(1,VARREF(Ytail),x_1087F1005);
    x_1087F1007 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1007,x_1088F999);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1088F999,LITREF(lit_7),x_1087F1000);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF1008 = T21;
  T24 = FUNSHELL(1,fun_loop_11,2);
  loopF1009 = T24;
  FUNINIT(loopF1009, 2,varF1008,loopF1009);
  T26 = BOXVAL(prop_initsF1002);
  T25 = CALL2(0,loopF1009,Ynil,T26);
  T23 = T25;
  setsF1010 = T23;
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T33 = CALL1(1,VARREF(Ylst),varF1008);
  T35 = BOXVAL(xF1001);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T34,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T30 = CALL2(1,VARREF(YgooSmacrosYcat),T31,LITREF(lit_11));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),varF1008);
  T27 = CALL5(1,VARREF(YgooSmacrosYcat),T28,T29,setsF1010,T36,LITREF(lit_11));
  T22 = T27;
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_12,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_munch_14) {
  P subforms_;
  P gF1014;
  P g_argsF1013;
  P g_declsF1012;
  P tup3F1011;
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
    tup3F1011 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1011,YPint((P)0));
    g_declsF1012 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1011,YPint((P)1));
    g_argsF1013 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF1014 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF1014);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF1012);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF1014,g_argsF1013);
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
  P g_argsF1018;
  P g_declsF1017;
  P tup4F1016;
  P munchF1015;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_14,1);
  munchF1015 = T1;
  FUNINIT(munchF1015, 1,munchF1015);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF1015,T7);
    tup4F1016 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1016,YPint((P)0));
    g_declsF1017 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1016,YPint((P)1));
    g_argsF1018 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF1018);
    T12 = CALL2(1,VARREF(Ytup),g_declsF1017,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1094_16) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_43),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1096_17) {
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

FUNCODEDEF(fun_18) {
  P return_;
  P x_1095F1024;
  P x_1095F1023;
  P x_1095F1022;
  P amountF1021;
  P x_1095F1020;
  P x_1096F1019;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_17,1);
  x_1096F1019 = T1;
  FUNINIT(x_1096F1019, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1095F1020 = T3;
  amountF1021 = YPfalse;
  amountF1021 = BOXFAB(amountF1021);
  T6 = CALL2(1,VARREF(YisaQ),x_1095F1020,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F1020,x_1096F1019);
    BOXVAL(amountF1021) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1095F1020);
    x_1095F1022 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1095F1022,x_1096F1019);
    x_1095F1023 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1023,x_1096F1019);
    T13 = CALL1(1,VARREF(Ytail),x_1095F1022);
    x_1095F1024 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1024,x_1096F1019);
    T10 = T14;
    T7 = T10;
  } else {
    T15 = CALL2(1,x_1096F1019,LITREF(lit_7),x_1095F1020);
  }
  T16 = BOXVAL(amountF1021);
  T4 = T16;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P amountF1037;
  P g_placeF1036;
  P g_declsF1035;
  P tup6F1034;
  P x_1093F1033;
  P x_1093F1032;
  P x_1093F1031;
  P x_1093F1030;
  P x_1093F1029;
  P amountF1028;
  P placeF1027;
  P x_1093F1026;
  P x_1094F1025;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_16,2);
  x_1094F1025 = T1;
  FUNINIT(x_1094F1025, 2,FREEREF(0),return_);
  x_1093F1026 = FREEREF(0);
  placeF1027 = YPfalse;
  placeF1027 = BOXFAB(placeF1027);
  amountF1028 = YPfalse;
  amountF1028 = BOXFAB(amountF1028);
  T7 = CALL2(1,VARREF(YisaQ),x_1093F1026,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F1026,LITREF(lit_43),x_1094F1025);
    x_1093F1029 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F1029,x_1094F1025);
    BOXVAL(placeF1027) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1093F1029);
    x_1093F1030 = T12;
    BOXVAL(amountF1028) = x_1093F1030;
    x_1093F1031 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1093F1031,x_1094F1025);
    x_1093F1032 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1032,x_1094F1025);
    T17 = CALL1(1,VARREF(Ytail),x_1093F1031);
    x_1093F1033 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1033,x_1094F1025);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1094F1025,LITREF(lit_7),x_1093F1026);
  }
  T22 = BOXVAL(placeF1027);
  T21 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T22);
  tup6F1034 = T21;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1034,YPint((P)0));
  g_declsF1035 = T24;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1034,YPint((P)1));
  g_placeF1036 = T26;
  T29 = FUNFAB(fun_18,1,amountF1028);
  T28 = with_exit(T29);
  amountF1037 = T28;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1035,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1036);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T41 = CALL1(1,VARREF(Ylst),g_placeF1036);
  T42 = CALL1(1,VARREF(Ylst),amountF1037);
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

FUNCODEDEF(fun_20) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_19,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1102_21) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_52),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1104_22) {
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

FUNCODEDEF(fun_23) {
  P return_;
  P x_1103F1043;
  P x_1103F1042;
  P x_1103F1041;
  P amountF1040;
  P x_1103F1039;
  P x_1104F1038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_22,1);
  x_1104F1038 = T1;
  FUNINIT(x_1104F1038, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1103F1039 = T3;
  amountF1040 = YPfalse;
  amountF1040 = BOXFAB(amountF1040);
  T6 = CALL2(1,VARREF(YisaQ),x_1103F1039,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F1039,x_1104F1038);
    BOXVAL(amountF1040) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1103F1039);
    x_1103F1041 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1103F1041,x_1104F1038);
    x_1103F1042 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1042,x_1104F1038);
    T13 = CALL1(1,VARREF(Ytail),x_1103F1041);
    x_1103F1043 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1043,x_1104F1038);
    T10 = T14;
    T7 = T10;
  } else {
    T15 = CALL2(1,x_1104F1038,LITREF(lit_7),x_1103F1039);
  }
  T16 = BOXVAL(amountF1040);
  T4 = T16;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P return_;
  P amountF1056;
  P g_placeF1055;
  P g_declsF1054;
  P tup8F1053;
  P x_1101F1052;
  P x_1101F1051;
  P x_1101F1050;
  P x_1101F1049;
  P x_1101F1048;
  P amountF1047;
  P placeF1046;
  P x_1101F1045;
  P x_1102F1044;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_21,2);
  x_1102F1044 = T1;
  FUNINIT(x_1102F1044, 2,FREEREF(0),return_);
  x_1101F1045 = FREEREF(0);
  placeF1046 = YPfalse;
  placeF1046 = BOXFAB(placeF1046);
  amountF1047 = YPfalse;
  amountF1047 = BOXFAB(amountF1047);
  T7 = CALL2(1,VARREF(YisaQ),x_1101F1045,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F1045,LITREF(lit_52),x_1102F1044);
    x_1101F1048 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F1048,x_1102F1044);
    BOXVAL(placeF1046) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1101F1048);
    x_1101F1049 = T12;
    BOXVAL(amountF1047) = x_1101F1049;
    x_1101F1050 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1101F1050,x_1102F1044);
    x_1101F1051 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1051,x_1102F1044);
    T17 = CALL1(1,VARREF(Ytail),x_1101F1050);
    x_1101F1052 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1052,x_1102F1044);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1102F1044,LITREF(lit_7),x_1101F1045);
  }
  T22 = BOXVAL(placeF1046);
  T21 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T22);
  tup8F1053 = T21;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1053,YPint((P)0));
  g_declsF1054 = T24;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1053,YPint((P)1));
  g_placeF1055 = T26;
  T29 = FUNFAB(fun_23,1,amountF1047);
  T28 = with_exit(T29);
  amountF1056 = T28;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1054,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1055);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T41 = CALL1(1,VARREF(Ylst),g_placeF1055);
  T42 = CALL1(1,VARREF(Ylst),amountF1056);
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

FUNCODEDEF(fun_25) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_24,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1108_26) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_61),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P g_placeF1068;
  P g_declsF1067;
  P tup10F1066;
  P x_1107F1065;
  P x_1107F1064;
  P x_1107F1063;
  P x_1107F1062;
  P x_1107F1061;
  P valueF1060;
  P placeF1059;
  P x_1107F1058;
  P x_1108F1057;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_26,2);
  x_1108F1057 = T1;
  FUNINIT(x_1108F1057, 2,FREEREF(0),return_);
  x_1107F1058 = FREEREF(0);
  placeF1059 = YPfalse;
  placeF1059 = BOXFAB(placeF1059);
  valueF1060 = YPfalse;
  valueF1060 = BOXFAB(valueF1060);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F1058,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F1058,LITREF(lit_61),x_1108F1057);
    x_1107F1061 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1061,x_1108F1057);
    BOXVAL(placeF1059) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F1061);
    x_1107F1062 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1062,x_1108F1057);
    BOXVAL(valueF1060) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1107F1062);
    x_1107F1063 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1107F1063,x_1108F1057);
    x_1107F1064 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1064,x_1108F1057);
    T19 = CALL1(1,VARREF(Ytail),x_1107F1063);
    x_1107F1065 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1065,x_1108F1057);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1108F1057,LITREF(lit_7),x_1107F1058);
  }
  T24 = BOXVAL(placeF1059);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup10F1066 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1066,YPint((P)0));
  g_declsF1067 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1066,YPint((P)1));
  g_placeF1068 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1067,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1068);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T40 = CALL1(1,VARREF(Ylst),g_placeF1068);
  T42 = BOXVAL(valueF1060);
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

FUNCODEDEF(fun_28) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1112_29) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_67),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P return_;
  P tmpF1084;
  P yg_placeF1083;
  P yg_declsF1082;
  P tup14F1081;
  P xg_placeF1080;
  P xg_declsF1079;
  P tup13F1078;
  P x_1111F1077;
  P x_1111F1076;
  P x_1111F1075;
  P x_1111F1074;
  P x_1111F1073;
  P yF1072;
  P xF1071;
  P x_1111F1070;
  P x_1112F1069;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_29,2);
  x_1112F1069 = T1;
  FUNINIT(x_1112F1069, 2,FREEREF(0),return_);
  x_1111F1070 = FREEREF(0);
  xF1071 = YPfalse;
  xF1071 = BOXFAB(xF1071);
  yF1072 = YPfalse;
  yF1072 = BOXFAB(yF1072);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F1070,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F1070,LITREF(lit_67),x_1112F1069);
    x_1111F1073 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1073,x_1112F1069);
    BOXVAL(xF1071) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F1073);
    x_1111F1074 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1074,x_1112F1069);
    BOXVAL(yF1072) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F1074);
    x_1111F1075 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1111F1075,x_1112F1069);
    x_1111F1076 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1076,x_1112F1069);
    T19 = CALL1(1,VARREF(Ytail),x_1111F1075);
    x_1111F1077 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1077,x_1112F1069);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1112F1069,LITREF(lit_7),x_1111F1070);
  }
  T24 = BOXVAL(xF1071);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup13F1078 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1078,YPint((P)0));
  xg_declsF1079 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1078,YPint((P)1));
  xg_placeF1080 = T28;
  T31 = BOXVAL(yF1072);
  T30 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T31);
  tup14F1081 = T30;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1081,YPint((P)0));
  yg_declsF1082 = T33;
  T35 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1081,YPint((P)1));
  yg_placeF1083 = T35;
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF1084 = T37;
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T44 = CALL1(1,VARREF(Ylst),tmpF1084);
  T45 = CALL1(1,VARREF(Ylst),xg_placeF1080);
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF1079,yg_declsF1082,T42,LITREF(lit_11));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T49 = CALL1(1,VARREF(Ylst),xg_placeF1080);
  T50 = CALL1(1,VARREF(Ylst),yg_placeF1083);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_11));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T54 = CALL1(1,VARREF(Ylst),yg_placeF1083);
  T55 = CALL1(1,VARREF(Ylst),tmpF1084);
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

FUNCODEDEF(fun_31) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_30,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1116_32) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_72),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
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

FUNCODEDEF(fun_34) {
  P t_,p_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(p_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),t_);
  T2 = CALL1(1,VARREF(Ylst),p_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P p_,t_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T2 = CALL1(1,VARREF(Ylst),p_);
  T3 = CALL1(1,VARREF(Ylst),t_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P return_;
  P placesF1100;
  P declsF1099;
  P psF1098;
  P tmpsF1097;
  P placesF1096;
  P x_1115F1095;
  P x_1115F1094;
  P x_1115F1093;
  P x_1115F1092;
  P x_1115F1091;
  P x_1115F1090;
  P zsF1089;
  P yF1088;
  P xF1087;
  P x_1115F1086;
  P x_1116F1085;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_32,2);
  x_1116F1085 = T1;
  FUNINIT(x_1116F1085, 2,FREEREF(0),return_);
  x_1115F1086 = FREEREF(0);
  xF1087 = YPfalse;
  xF1087 = BOXFAB(xF1087);
  yF1088 = YPfalse;
  yF1088 = BOXFAB(yF1088);
  zsF1089 = YPfalse;
  zsF1089 = BOXFAB(zsF1089);
  T9 = CALL2(1,VARREF(YisaQ),x_1115F1086,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F1086,LITREF(lit_72),x_1116F1085);
    x_1115F1090 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1090,x_1116F1085);
    BOXVAL(xF1087) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1115F1090);
    x_1115F1091 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1091,x_1116F1085);
    BOXVAL(yF1088) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1115F1091);
    x_1115F1092 = T17;
    BOXVAL(zsF1089) = x_1115F1092;
    x_1115F1093 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1115F1093,x_1116F1085);
    x_1115F1094 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1094,x_1116F1085);
    T22 = CALL1(1,VARREF(Ytail),x_1115F1093);
    x_1115F1095 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1095,x_1116F1085);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1116F1085,LITREF(lit_7),x_1115F1086);
  }
  T28 = BOXVAL(xF1087);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = BOXVAL(yF1088);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T31 = BOXVAL(zsF1089);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T29,T31,LITREF(lit_11));
  placesF1096 = T26;
  T34 = fun_33;
  T33 = CALL2(1,VARREF(YgooSmacrosYmap),T34,placesF1096);
  tmpsF1097 = T33;
  T36 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF1096);
  psF1098 = T36;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF1098);
  declsF1099 = T38;
  T40 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF1098);
  placesF1100 = T40;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T45 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF1099);
  T47 = fun_34;
  T46 = CALL3(1,VARREF(YgooSmacrosYmap2),T47,tmpsF1097,placesF1100);
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T46,LITREF(lit_11));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T49 = fun_35;
  T50 = CALL1(1,VARREF(Ytail),tmpsF1097);
  T48 = CALL3(1,VARREF(YgooSmacrosYmap2),T49,placesF1100,T50);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T55 = CALL1(1,VARREF(YgooSmacrosYlast),placesF1100);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T57 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF1097);
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

FUNCODEDEF(fun_37) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_36,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1120_38) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_80),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P return_;
  P valF1112;
  P new_colF1111;
  P g_placeF1110;
  P g_declsF1109;
  P tup16F1108;
  P x_1119F1107;
  P x_1119F1106;
  P x_1119F1105;
  P x_1119F1104;
  P placeF1103;
  P x_1119F1102;
  P x_1120F1101;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_38,2);
  x_1120F1101 = T1;
  FUNINIT(x_1120F1101, 2,FREEREF(0),return_);
  x_1119F1102 = FREEREF(0);
  placeF1103 = YPfalse;
  placeF1103 = BOXFAB(placeF1103);
  T5 = CALL2(1,VARREF(YisaQ),x_1119F1102,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F1102,LITREF(lit_80),x_1120F1101);
    x_1119F1104 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F1104,x_1120F1101);
    BOXVAL(placeF1103) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1119F1104);
    x_1119F1105 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1119F1105,x_1120F1101);
    x_1119F1106 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1106,x_1120F1101);
    T14 = CALL1(1,VARREF(Ytail),x_1119F1105);
    x_1119F1107 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1107,x_1120F1101);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1120F1101,LITREF(lit_7),x_1119F1102);
  }
  T19 = BOXVAL(placeF1103);
  T18 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T19);
  tup16F1108 = T18;
  T21 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1108,YPint((P)0));
  g_declsF1109 = T21;
  T23 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1108,YPint((P)1));
  g_placeF1110 = T23;
  T25 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF1111 = T25;
  T27 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF1112 = T27;
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T37 = CALL1(1,VARREF(Ylst),new_colF1111);
  T38 = CALL1(1,VARREF(Ylst),valF1112);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_11));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T42 = CALL1(1,VARREF(Ylst),g_placeF1110);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T39,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1109,T32,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T46 = CALL1(1,VARREF(Ylst),g_placeF1110);
  T47 = CALL1(1,VARREF(Ylst),new_colF1111);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_11));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T48 = CALL1(1,VARREF(Ylst),valF1112);
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

FUNCODEDEF(fun_40) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_39,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1124_41) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_87),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P return_;
  P g_placeF1124;
  P g_declsF1123;
  P tup18F1122;
  P x_1123F1121;
  P x_1123F1120;
  P x_1123F1119;
  P x_1123F1118;
  P x_1123F1117;
  P callF1116;
  P placeF1115;
  P x_1123F1114;
  P x_1124F1113;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_41,2);
  x_1124F1113 = T1;
  FUNINIT(x_1124F1113, 2,FREEREF(0),return_);
  x_1123F1114 = FREEREF(0);
  placeF1115 = YPfalse;
  placeF1115 = BOXFAB(placeF1115);
  callF1116 = YPfalse;
  callF1116 = BOXFAB(callF1116);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F1114,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F1114,LITREF(lit_87),x_1124F1113);
    x_1123F1117 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1117,x_1124F1113);
    BOXVAL(placeF1115) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F1117);
    x_1123F1118 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1118,x_1124F1113);
    BOXVAL(callF1116) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1123F1118);
    x_1123F1119 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1123F1119,x_1124F1113);
    x_1123F1120 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1120,x_1124F1113);
    T19 = CALL1(1,VARREF(Ytail),x_1123F1119);
    x_1123F1121 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1121,x_1124F1113);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1124F1113,LITREF(lit_7),x_1123F1114);
  }
  T24 = BOXVAL(placeF1115);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup18F1122 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1122,YPint((P)0));
  g_declsF1123 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1122,YPint((P)1));
  g_placeF1124 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1124);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1123,T33,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T40 = CALL1(1,VARREF(Ylst),g_placeF1124);
  T42 = BOXVAL(callF1116);
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

FUNCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1128_44) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_93),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P return_;
  P x_1127F1133;
  P x_1127F1132;
  P x_1127F1131;
  P x_1127F1130;
  P x_1127F1129;
  P bodyF1128;
  P testF1127;
  P x_1127F1126;
  P x_1128F1125;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_44,2);
  x_1128F1125 = T1;
  FUNINIT(x_1128F1125, 2,FREEREF(0),return_);
  x_1127F1126 = FREEREF(0);
  testF1127 = YPfalse;
  testF1127 = BOXFAB(testF1127);
  bodyF1128 = YPfalse;
  bodyF1128 = BOXFAB(bodyF1128);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F1126,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F1126,LITREF(lit_93),x_1128F1125);
    x_1127F1129 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1129,x_1128F1125);
    BOXVAL(testF1127) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F1129);
    x_1127F1130 = T12;
    BOXVAL(bodyF1128) = x_1127F1130;
    x_1127F1131 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1127F1131,x_1128F1125);
    x_1127F1132 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1132,x_1128F1125);
    T17 = CALL1(1,VARREF(Ytail),x_1127F1131);
    x_1127F1133 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1133,x_1128F1125);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1128F1125,LITREF(lit_7),x_1127F1126);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T26 = BOXVAL(testF1127);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T30 = BOXVAL(bodyF1128);
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

FUNCODEDEF(fun_46) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_45,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1132_47) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_101),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P return_;
  P x_1131F1142;
  P x_1131F1141;
  P x_1131F1140;
  P x_1131F1139;
  P x_1131F1138;
  P bodyF1137;
  P testF1136;
  P x_1131F1135;
  P x_1132F1134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1132_47,2);
  x_1132F1134 = T1;
  FUNINIT(x_1132F1134, 2,FREEREF(0),return_);
  x_1131F1135 = FREEREF(0);
  testF1136 = YPfalse;
  testF1136 = BOXFAB(testF1136);
  bodyF1137 = YPfalse;
  bodyF1137 = BOXFAB(bodyF1137);
  T7 = CALL2(1,VARREF(YisaQ),x_1131F1135,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F1135,LITREF(lit_101),x_1132F1134);
    x_1131F1138 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F1138,x_1132F1134);
    BOXVAL(testF1136) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1131F1138);
    x_1131F1139 = T12;
    BOXVAL(bodyF1137) = x_1131F1139;
    x_1131F1140 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1131F1140,x_1132F1134);
    x_1131F1141 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1141,x_1132F1134);
    T17 = CALL1(1,VARREF(Ytail),x_1131F1140);
    x_1131F1142 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1142,x_1132F1134);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1132F1134,LITREF(lit_7),x_1131F1135);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T23 = BOXVAL(testF1136);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T27 = BOXVAL(bodyF1137);
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

FUNCODEDEF(fun_49) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_48,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1140_50) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_106),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1142_51) {
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

FUNCODEDEF(fun_x_1144_52) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_11));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_11));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
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

FUNCODEDEF(fun_53) {
  P return_;
  P x_1143F1144;
  P x_1144F1143;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1144_52,3);
  x_1144F1143 = T1;
  FUNINIT(x_1144F1143, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1143F1144 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1143F1144,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1144,x_1144F1143);
  } else {
    T6 = CALL2(1,x_1144F1143,LITREF(lit_7),x_1143F1144);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1141F1152;
  P x_1141F1151;
  P x_1141F1150;
  P x_1141F1149;
  P restF1148;
  P xF1147;
  P x_1141F1146;
  P x_1142F1145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1142_51,1);
  x_1142F1145 = T1;
  FUNINIT(x_1142F1145, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1141F1146 = T3;
  xF1147 = YPfalse;
  xF1147 = BOXFAB(xF1147);
  restF1148 = YPfalse;
  restF1148 = BOXFAB(restF1148);
  T8 = CALL2(1,VARREF(YisaQ),x_1141F1146,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1141F1146,x_1142F1145);
    BOXVAL(xF1147) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1141F1146);
    x_1141F1149 = T11;
    BOXVAL(restF1148) = x_1141F1149;
    x_1141F1150 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1141F1150,x_1142F1145);
    x_1141F1151 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1141F1151,x_1142F1145);
    T16 = CALL1(1,VARREF(Ytail),x_1141F1150);
    x_1141F1152 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1141F1152,x_1142F1145);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1142F1145,LITREF(lit_7),x_1141F1146);
  }
  T20 = FUNFAB(fun_53,2,xF1147,restF1148);
  T19 = with_exit(T20);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1139F1159;
  P x_1139F1158;
  P x_1139F1157;
  P x_1139F1156;
  P restF1155;
  P x_1139F1154;
  P x_1140F1153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_50,2);
  x_1140F1153 = T1;
  FUNINIT(x_1140F1153, 2,FREEREF(0),return_);
  x_1139F1154 = FREEREF(0);
  restF1155 = YPfalse;
  restF1155 = BOXFAB(restF1155);
  T5 = CALL2(1,VARREF(YisaQ),x_1139F1154,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1139F1154,LITREF(lit_106),x_1140F1153);
    x_1139F1156 = T7;
    BOXVAL(restF1155) = x_1139F1156;
    x_1139F1157 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1139F1157,x_1140F1153);
    x_1139F1158 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F1158,x_1140F1153);
    T12 = CALL1(1,VARREF(Ytail),x_1139F1157);
    x_1139F1159 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F1159,x_1140F1153);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1140F1153,LITREF(lit_7),x_1139F1154);
  }
  T16 = FUNFAB(fun_54,1,restF1155);
  T15 = with_exit(T16);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_55,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1152_57) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_118),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1154_58) {
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

FUNCODEDEF(fun_x_1156_59) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_11));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_11));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_118));
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

FUNCODEDEF(fun_60) {
  P return_;
  P x_1155F1161;
  P x_1156F1160;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1156_59,3);
  x_1156F1160 = T1;
  FUNINIT(x_1156F1160, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1155F1161 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1155F1161,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1161,x_1156F1160);
  } else {
    T6 = CALL2(1,x_1156F1160,LITREF(lit_7),x_1155F1161);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1153F1169;
  P x_1153F1168;
  P x_1153F1167;
  P x_1153F1166;
  P restF1165;
  P xF1164;
  P x_1153F1163;
  P x_1154F1162;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1154_58,1);
  x_1154F1162 = T1;
  FUNINIT(x_1154F1162, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1153F1163 = T3;
  xF1164 = YPfalse;
  xF1164 = BOXFAB(xF1164);
  restF1165 = YPfalse;
  restF1165 = BOXFAB(restF1165);
  T8 = CALL2(1,VARREF(YisaQ),x_1153F1163,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1153F1163,x_1154F1162);
    BOXVAL(xF1164) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1153F1163);
    x_1153F1166 = T11;
    BOXVAL(restF1165) = x_1153F1166;
    x_1153F1167 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1153F1167,x_1154F1162);
    x_1153F1168 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1153F1168,x_1154F1162);
    T16 = CALL1(1,VARREF(Ytail),x_1153F1167);
    x_1153F1169 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1153F1169,x_1154F1162);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1154F1162,LITREF(lit_7),x_1153F1163);
  }
  T20 = FUNFAB(fun_60,2,xF1164,restF1165);
  T19 = with_exit(T20);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1151F1176;
  P x_1151F1175;
  P x_1151F1174;
  P x_1151F1173;
  P restF1172;
  P x_1151F1171;
  P x_1152F1170;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_57,2);
  x_1152F1170 = T1;
  FUNINIT(x_1152F1170, 2,FREEREF(0),return_);
  x_1151F1171 = FREEREF(0);
  restF1172 = YPfalse;
  restF1172 = BOXFAB(restF1172);
  T5 = CALL2(1,VARREF(YisaQ),x_1151F1171,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1151F1171,LITREF(lit_118),x_1152F1170);
    x_1151F1173 = T7;
    BOXVAL(restF1172) = x_1151F1173;
    x_1151F1174 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1151F1174,x_1152F1170);
    x_1151F1175 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F1175,x_1152F1170);
    T12 = CALL1(1,VARREF(Ytail),x_1151F1174);
    x_1151F1176 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F1176,x_1152F1170);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1152F1170,LITREF(lit_7),x_1151F1171);
  }
  T16 = FUNFAB(fun_61,1,restF1172);
  T15 = with_exit(T16);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_62,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1162_64) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_129),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1164_65) {
  P msg_,args_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_133),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P x_1163F1184;
  P x_1163F1183;
  P x_1163F1182;
  P x_1163F1181;
  P bodyF1180;
  P condF1179;
  P x_1163F1178;
  P x_1164F1177;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1164_65,2);
  x_1164F1177 = T1;
  FUNINIT(x_1164F1177, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1163F1178 = T3;
  condF1179 = YPfalse;
  condF1179 = BOXFAB(condF1179);
  bodyF1180 = YPfalse;
  bodyF1180 = BOXFAB(bodyF1180);
  T9 = CALL2(1,VARREF(YisaQ),x_1163F1178,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F1178,x_1164F1177);
    BOXVAL(condF1179) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1163F1178);
    x_1163F1181 = T12;
    BOXVAL(bodyF1180) = x_1163F1181;
    x_1163F1182 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1163F1182,x_1164F1177);
    x_1163F1183 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1163F1183,x_1164F1177);
    T17 = CALL1(1,VARREF(Ytail),x_1163F1182);
    x_1163F1184 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1163F1184,x_1164F1177);
    T14 = T18;
    T13 = T14;
    T10 = T13;
  } else {
    T19 = CALL2(1,x_1164F1177,LITREF(lit_7),x_1163F1178);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T23 = BOXVAL(condF1179);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T27 = BOXVAL(bodyF1180);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_129));
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

FUNCODEDEF(fun_67) {
  P return_;
  P x_1161F1191;
  P x_1161F1190;
  P x_1161F1189;
  P x_1161F1188;
  P casesF1187;
  P x_1161F1186;
  P x_1162F1185;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1162_64,2);
  x_1162F1185 = T1;
  FUNINIT(x_1162F1185, 2,FREEREF(0),return_);
  x_1161F1186 = FREEREF(0);
  casesF1187 = YPfalse;
  casesF1187 = BOXFAB(casesF1187);
  T5 = CALL2(1,VARREF(YisaQ),x_1161F1186,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1161F1186,LITREF(lit_129),x_1162F1185);
    x_1161F1188 = T7;
    BOXVAL(casesF1187) = x_1161F1188;
    x_1161F1189 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1161F1189,x_1162F1185);
    x_1161F1190 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F1190,x_1162F1185);
    T12 = CALL1(1,VARREF(Ytail),x_1161F1189);
    x_1161F1191 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F1191,x_1162F1185);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1162F1185,LITREF(lit_7),x_1161F1186);
  }
  T17 = BOXVAL(casesF1187);
  T16 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T17);
  if (T16 != YPfalse) {
    T15 = YPfalse;
  } else {
    T19 = FUNFAB(fun_66,1,casesF1187);
    T18 = with_exit(T19);
    T15 = T18;
  }
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_67,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1170_69) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_139),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1172_70) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_143),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T3 = CALL1(1,VARREF(Ylst),x_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P return_;
  P x_1171F1197;
  P x_1171F1196;
  P x_1171F1195;
  P valuesF1194;
  P x_1171F1193;
  P x_1172F1192;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_70,2);
  x_1172F1192 = T1;
  FUNINIT(x_1172F1192, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1171F1193 = T3;
  valuesF1194 = YPfalse;
  valuesF1194 = BOXFAB(valuesF1194);
  T6 = CALL2(1,VARREF(YisaQ),x_1171F1193,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF1194) = x_1171F1193;
    x_1171F1195 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1171F1195,x_1172F1192);
    x_1171F1196 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F1196,x_1172F1192);
    T11 = CALL1(1,VARREF(Ytail),x_1171F1195);
    x_1171F1197 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F1197,x_1172F1192);
    T8 = T12;
    T7 = T8;
  } else {
    T13 = CALL2(1,x_1172F1192,LITREF(lit_7),x_1171F1193);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T20 = FUNFAB(fun_71,2,FREEREF(2),FREEREF(3));
  T21 = BOXVAL(valuesF1194);
  T19 = CALL2(1,VARREF(YgooSmacrosYmap),T20,T21);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
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

FUNCODEDEF(fun_73) {
  P return_;
  P x_1169F1205;
  P x_1169F1204;
  P x_1169F1203;
  P x_1169F1202;
  P bodyF1201;
  P condF1200;
  P x_1169F1199;
  P x_1170F1198;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_69,2);
  x_1170F1198 = T1;
  FUNINIT(x_1170F1198, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1169F1199 = T3;
  condF1200 = YPfalse;
  condF1200 = BOXFAB(condF1200);
  bodyF1201 = YPfalse;
  bodyF1201 = BOXFAB(bodyF1201);
  T8 = CALL2(1,VARREF(YisaQ),x_1169F1199,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1169F1199,x_1170F1198);
    BOXVAL(condF1200) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1169F1199);
    x_1169F1202 = T11;
    BOXVAL(bodyF1201) = x_1169F1202;
    x_1169F1203 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1169F1203,x_1170F1198);
    x_1169F1204 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F1204,x_1170F1198);
    T16 = CALL1(1,VARREF(Ytail),x_1169F1203);
    x_1169F1205 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F1205,x_1170F1198);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1170F1198,LITREF(lit_7),x_1169F1199);
  }
  T21 = BOXVAL(condF1200);
  T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,YPtrue);
  if (T20 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
    T24 = BOXVAL(bodyF1201);
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_11));
    T19 = T22;
  } else {
    T26 = FUNFAB(fun_72,5,FREEREF(0),condF1200,FREEREF(1),FREEREF(2),bodyF1201);
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
    T3 = FUNFAB(fun_73,3,cases_,tst_,val_);
    T2 = with_exit(T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1176_75) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_149),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P return_;
  P tst_varF1218;
  P val_varF1217;
  P x_1175F1216;
  P x_1175F1215;
  P x_1175F1214;
  P x_1175F1213;
  P x_1175F1212;
  P x_1175F1211;
  P casesF1210;
  P tstF1209;
  P valF1208;
  P x_1175F1207;
  P x_1176F1206;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_75,2);
  x_1176F1206 = T1;
  FUNINIT(x_1176F1206, 2,FREEREF(0),return_);
  x_1175F1207 = FREEREF(0);
  valF1208 = YPfalse;
  valF1208 = BOXFAB(valF1208);
  tstF1209 = YPfalse;
  tstF1209 = BOXFAB(tstF1209);
  casesF1210 = YPfalse;
  casesF1210 = BOXFAB(casesF1210);
  T9 = CALL2(1,VARREF(YisaQ),x_1175F1207,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1175F1207,LITREF(lit_149),x_1176F1206);
    x_1175F1211 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F1211,x_1176F1206);
    BOXVAL(valF1208) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1175F1211);
    x_1175F1212 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F1212,x_1176F1206);
    BOXVAL(tstF1209) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1175F1212);
    x_1175F1213 = T17;
    BOXVAL(casesF1210) = x_1175F1213;
    x_1175F1214 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1175F1214,x_1176F1206);
    x_1175F1215 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1215,x_1176F1206);
    T22 = CALL1(1,VARREF(Ytail),x_1175F1214);
    x_1175F1216 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1216,x_1176F1206);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1176F1206,LITREF(lit_7),x_1175F1207);
  }
  T26 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF1217 = T26;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF1218 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = CALL1(1,VARREF(Ylst),val_varF1217);
  T37 = BOXVAL(valF1208);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = CALL1(1,VARREF(Ylst),tst_varF1218);
  T42 = BOXVAL(tstF1209);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T38,LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T45 = BOXVAL(casesF1210);
  T44 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF1217,tst_varF1218,T45);
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

FUNCODEDEF(fun_77) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_76,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1180_78) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_154),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1179F1227;
  P x_1179F1226;
  P x_1179F1225;
  P x_1179F1224;
  P x_1179F1223;
  P casesF1222;
  P valF1221;
  P x_1179F1220;
  P x_1180F1219;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_78,2);
  x_1180F1219 = T1;
  FUNINIT(x_1180F1219, 2,FREEREF(0),return_);
  x_1179F1220 = FREEREF(0);
  valF1221 = YPfalse;
  valF1221 = BOXFAB(valF1221);
  casesF1222 = YPfalse;
  casesF1222 = BOXFAB(casesF1222);
  T7 = CALL2(1,VARREF(YisaQ),x_1179F1220,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F1220,LITREF(lit_154),x_1180F1219);
    x_1179F1223 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1223,x_1180F1219);
    BOXVAL(valF1221) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1179F1223);
    x_1179F1224 = T12;
    BOXVAL(casesF1222) = x_1179F1224;
    x_1179F1225 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1179F1225,x_1180F1219);
    x_1179F1226 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1226,x_1180F1219);
    T17 = CALL1(1,VARREF(Ytail),x_1179F1225);
    x_1179F1227 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1227,x_1180F1219);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1180F1219,LITREF(lit_7),x_1179F1220);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T23 = BOXVAL(valF1221);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T25 = BOXVAL(casesF1222);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T24,T25,LITREF(lit_11));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_79,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1188_81) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_160),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1192_82) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_167));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P return_;
  P varF1242;
  P x_1191F1241;
  P x_1191F1240;
  P x_1191F1239;
  P x_1191F1238;
  P x_1191F1237;
  P x_1191F1236;
  P x_1191F1235;
  P x_1191F1234;
  P x_1191F1233;
  P restF1232;
  P thenF1231;
  P patF1230;
  P x_1191F1229;
  P x_1192F1228;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_82,1);
  x_1192F1228 = T1;
  FUNINIT(x_1192F1228, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1191F1229 = T3;
  patF1230 = YPfalse;
  patF1230 = BOXFAB(patF1230);
  thenF1231 = YPfalse;
  thenF1231 = BOXFAB(thenF1231);
  restF1232 = YPfalse;
  restF1232 = BOXFAB(restF1232);
  T10 = CALL2(1,VARREF(YisaQ),x_1191F1229,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1229,x_1192F1228);
    x_1191F1233 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F1233,x_1192F1228);
    BOXVAL(patF1230) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1191F1233);
    x_1191F1234 = T15;
    BOXVAL(thenF1231) = x_1191F1234;
    x_1191F1235 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1235,x_1192F1228);
    x_1191F1236 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1236,x_1192F1228);
    T20 = CALL1(1,VARREF(Ytail),x_1191F1235);
    x_1191F1237 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1237,x_1192F1228);
    T17 = T21;
    T16 = T17;
    T13 = T16;
    T22 = CALL1(1,VARREF(Ytail),x_1191F1229);
    x_1191F1238 = T22;
    BOXVAL(restF1232) = x_1191F1238;
    x_1191F1239 = Ynil;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1239,x_1192F1228);
    x_1191F1240 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1240,x_1192F1228);
    T27 = CALL1(1,VARREF(Ytail),x_1191F1239);
    x_1191F1241 = T27;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1241,x_1192F1228);
    T24 = T28;
    T23 = T24;
    T11 = T23;
  } else {
    T29 = CALL2(1,x_1192F1228,LITREF(lit_7),x_1191F1229);
  }
  T32 = BOXVAL(patF1230);
  T31 = CALL2(1,VARREF(YgooSmacrosYEE),T32,YPtrue);
  if (T31 != YPfalse) {
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
    T35 = BOXVAL(thenF1231);
    T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_11));
    T30 = T33;
  } else {
    T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF1242 = T37;
    T39 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T44 = CALL1(1,VARREF(Ylst),varF1242);
    T46 = BOXVAL(FREEREF(1));
    T45 = CALL1(1,VARREF(Ylst),T46);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_11));
    T42 = CALL1(1,VARREF(Ylst),T43);
    T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,LITREF(lit_11));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
    T53 = BOXVAL(patF1230);
    T52 = CALL1(1,VARREF(Ylst),T53);
    T54 = CALL1(1,VARREF(Ylst),varF1242);
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,LITREF(lit_11));
    T50 = CALL1(1,VARREF(Ylst),T51);
    T57 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
    T58 = BOXVAL(thenF1231);
    T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,LITREF(lit_11));
    T55 = CALL1(1,VARREF(Ylst),T56);
    T61 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
    T62 = CALL1(1,VARREF(Ylst),varF1242);
    T63 = BOXVAL(restF1232);
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

FUNCODEDEF(fun_x_1190_84) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_83,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P return_;
  P x_1189F1244;
  P x_1190F1243;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1190_84,3);
  x_1190F1243 = T1;
  FUNINIT(x_1190F1243, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1189F1244 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1189F1244,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1189F1244,x_1190F1243);
  } else {
    T6 = CALL2(1,x_1190F1243,LITREF(lit_7),x_1189F1244);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_169));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_170));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_11));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P return_;
  P x_1187F1253;
  P x_1187F1252;
  P x_1187F1251;
  P x_1187F1250;
  P x_1187F1249;
  P casesF1248;
  P expF1247;
  P x_1187F1246;
  P x_1188F1245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_81,2);
  x_1188F1245 = T1;
  FUNINIT(x_1188F1245, 2,FREEREF(0),return_);
  x_1187F1246 = FREEREF(0);
  expF1247 = YPfalse;
  expF1247 = BOXFAB(expF1247);
  casesF1248 = YPfalse;
  casesF1248 = BOXFAB(casesF1248);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F1246,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F1246,LITREF(lit_160),x_1188F1245);
    x_1187F1249 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F1249,x_1188F1245);
    BOXVAL(expF1247) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F1249);
    x_1187F1250 = T12;
    BOXVAL(casesF1248) = x_1187F1250;
    x_1187F1251 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1187F1251,x_1188F1245);
    x_1187F1252 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F1252,x_1188F1245);
    T17 = CALL1(1,VARREF(Ytail),x_1187F1251);
    x_1187F1253 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F1253,x_1188F1245);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1188F1245,LITREF(lit_7),x_1187F1246);
  }
  T21 = FUNFAB(fun_85,2,casesF1248,expF1247);
  T20 = with_exit(T21);
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_86,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1196_88) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_175),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P return_;
  P x_1195F1264;
  P x_1195F1263;
  P x_1195F1262;
  P x_1195F1261;
  P x_1195F1260;
  P x_1195F1259;
  P argsF1258;
  P messageF1257;
  P condF1256;
  P x_1195F1255;
  P x_1196F1254;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_88,2);
  x_1196F1254 = T1;
  FUNINIT(x_1196F1254, 2,FREEREF(0),return_);
  x_1195F1255 = FREEREF(0);
  condF1256 = YPfalse;
  condF1256 = BOXFAB(condF1256);
  messageF1257 = YPfalse;
  messageF1257 = BOXFAB(messageF1257);
  argsF1258 = YPfalse;
  argsF1258 = BOXFAB(argsF1258);
  T9 = CALL2(1,VARREF(YisaQ),x_1195F1255,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1195F1255,LITREF(lit_175),x_1196F1254);
    x_1195F1259 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1259,x_1196F1254);
    BOXVAL(condF1256) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1195F1259);
    x_1195F1260 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1260,x_1196F1254);
    BOXVAL(messageF1257) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1195F1260);
    x_1195F1261 = T17;
    BOXVAL(argsF1258) = x_1195F1261;
    x_1195F1262 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1262,x_1196F1254);
    x_1195F1263 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1263,x_1196F1254);
    T22 = CALL1(1,VARREF(Ytail),x_1195F1262);
    x_1195F1264 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1264,x_1196F1254);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1196F1254,LITREF(lit_7),x_1195F1255);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T31 = BOXVAL(condF1256);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_176));
  T36 = BOXVAL(messageF1257);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T37 = BOXVAL(argsF1258);
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

FUNCODEDEF(fun_90) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_89,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1204_91) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_181),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1206_92) {
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

FUNCODEDEF(fun_x_1208_93) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_11));
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,LITREF(lit_11));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P x_1207F1273;
  P x_1207F1272;
  P x_1207F1271;
  P x_1207F1270;
  P x_1207F1269;
  P valF1268;
  P keyF1267;
  P x_1207F1266;
  P x_1208F1265;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_93,3);
  x_1208F1265 = T1;
  FUNINIT(x_1208F1265, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1207F1266 = T3;
  keyF1267 = YPfalse;
  keyF1267 = BOXFAB(keyF1267);
  valF1268 = YPfalse;
  valF1268 = BOXFAB(valF1268);
  T8 = CALL2(1,VARREF(YisaQ),x_1207F1266,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F1266,LITREF(lit_81),x_1208F1265);
    x_1207F1269 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F1269,x_1208F1265);
    BOXVAL(keyF1267) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1207F1269);
    x_1207F1270 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F1270,x_1208F1265);
    BOXVAL(valF1268) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1207F1270);
    x_1207F1271 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1271,x_1208F1265);
    x_1207F1272 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1272,x_1208F1265);
    T20 = CALL1(1,VARREF(Ytail),x_1207F1271);
    x_1207F1273 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1273,x_1208F1265);
    T17 = T21;
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T22 = CALL2(1,x_1208F1265,LITREF(lit_7),x_1207F1266);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T28 = BOXVAL(keyF1267);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = BOXVAL(valF1268);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T29,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T37 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_11));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
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

FUNCODEDEF(fun_95) {
  P return_;
  P stateF1282;
  P x_1205F1281;
  P x_1205F1280;
  P x_1205F1279;
  P x_1205F1278;
  P expF1277;
  P varF1276;
  P x_1205F1275;
  P x_1206F1274;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_92,1);
  x_1206F1274 = T1;
  FUNINIT(x_1206F1274, 1,return_);
  x_1205F1275 = FREEREF(0);
  varF1276 = YPfalse;
  varF1276 = BOXFAB(varF1276);
  expF1277 = YPfalse;
  expF1277 = BOXFAB(expF1277);
  T7 = CALL2(1,VARREF(YisaQ),x_1205F1275,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F1275,x_1206F1274);
    BOXVAL(varF1276) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1205F1275);
    x_1205F1278 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F1278,x_1206F1274);
    BOXVAL(expF1277) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1205F1278);
    x_1205F1279 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1205F1279,x_1206F1274);
    x_1205F1280 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1205F1280,x_1206F1274);
    T17 = CALL1(1,VARREF(Ytail),x_1205F1279);
    x_1205F1281 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1205F1281,x_1206F1274);
    T14 = T18;
    T11 = T14;
    T8 = T11;
  } else {
    T19 = CALL2(1,x_1206F1274,LITREF(lit_7),x_1205F1275);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF1282 = T21;
  T23 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T26 = CALL1(1,VARREF(Ylst),stateF1282);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T31 = BOXVAL(expF1277);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_11));
  T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,FREEREF(2));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_189));
  T35 = CALL1(1,VARREF(Ylst),stateF1282);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_11));
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(3));
  T38 = FUNFAB(fun_94,2,varF1276,stateF1282);
  T37 = with_exit(T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYpair),T37,FREEREF(4));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T42 = CALL1(1,VARREF(Ylst),stateF1282);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_11));
  T39 = CALL2(1,VARREF(YgooSmacrosYpair),T40,FREEREF(5));
  T22 = CALL5(0,FREEREF(6),T23,T24,T32,T36,T39);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grok_96) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF1284;
  P loopF1283;
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
    loopF1283 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
    T6 = CALL1(1,VARREF(Ylst),loopF1283);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,LITREF(lit_11));
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF1283);
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
    clauseF1284 = T23;
    T25 = FUNFAB(fun_95,7,clauseF1284,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P grokF1298;
  P x_1203F1297;
  P x_1203F1296;
  P x_1203F1295;
  P x_1203F1294;
  P x_1203F1293;
  P x_1203F1292;
  P x_1203F1291;
  P x_1203F1290;
  P x_1203F1289;
  P bodyF1288;
  P clausesF1287;
  P x_1203F1286;
  P x_1204F1285;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_91,2);
  x_1204F1285 = T1;
  FUNINIT(x_1204F1285, 2,FREEREF(0),return_);
  x_1203F1286 = FREEREF(0);
  clausesF1287 = YPfalse;
  clausesF1287 = BOXFAB(clausesF1287);
  bodyF1288 = YPfalse;
  bodyF1288 = BOXFAB(bodyF1288);
  T7 = CALL2(1,VARREF(YisaQ),x_1203F1286,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1203F1286,LITREF(lit_181),x_1204F1285);
    x_1203F1289 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F1289,x_1204F1285);
    x_1203F1290 = T11;
    BOXVAL(clausesF1287) = x_1203F1290;
    x_1203F1291 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F1291,x_1204F1285);
    x_1203F1292 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1292,x_1204F1285);
    T16 = CALL1(1,VARREF(Ytail),x_1203F1291);
    x_1203F1293 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1293,x_1204F1285);
    T13 = T17;
    T12 = T13;
    T18 = CALL1(1,VARREF(Ytail),x_1203F1289);
    x_1203F1294 = T18;
    BOXVAL(bodyF1288) = x_1203F1294;
    x_1203F1295 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F1295,x_1204F1285);
    x_1203F1296 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1296,x_1204F1285);
    T23 = CALL1(1,VARREF(Ytail),x_1203F1295);
    x_1203F1297 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1297,x_1204F1285);
    T20 = T24;
    T19 = T20;
    T10 = T19;
    T8 = T10;
  } else {
    T25 = CALL2(1,x_1204F1285,LITREF(lit_7),x_1203F1286);
  }
  T27 = FUNSHELL(1,fun_grok_96,2);
  grokF1298 = T27;
  FUNINIT(grokF1298, 2,bodyF1288,grokF1298);
  T29 = BOXVAL(clausesF1287);
  T28 = CALL5(0,grokF1298,T29,Ynil,Ynil,Ynil,Ynil);
  T26 = T28;
  T5 = T26;
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

FUNCODEDEF(fun_x_1212_99) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_200),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P return_;
  P x_1211F1307;
  P x_1211F1306;
  P x_1211F1305;
  P x_1211F1304;
  P x_1211F1303;
  P bodyF1302;
  P testF1301;
  P x_1211F1300;
  P x_1212F1299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_99,2);
  x_1212F1299 = T1;
  FUNINIT(x_1212F1299, 2,FREEREF(0),return_);
  x_1211F1300 = FREEREF(0);
  testF1301 = YPfalse;
  testF1301 = BOXFAB(testF1301);
  bodyF1302 = YPfalse;
  bodyF1302 = BOXFAB(bodyF1302);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F1300,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F1300,LITREF(lit_200),x_1212F1299);
    x_1211F1303 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1303,x_1212F1299);
    BOXVAL(testF1301) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1211F1303);
    x_1211F1304 = T12;
    BOXVAL(bodyF1302) = x_1211F1304;
    x_1211F1305 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F1305,x_1212F1299);
    x_1211F1306 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1306,x_1212F1299);
    T17 = CALL1(1,VARREF(Ytail),x_1211F1305);
    x_1211F1307 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1307,x_1212F1299);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1212F1299,LITREF(lit_7),x_1211F1300);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T23 = CALL1(1,VARREF(Ylst),Ynil);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
  T28 = BOXVAL(testF1301);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T29 = BOXVAL(bodyF1302);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
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

FUNCODEDEF(fun_101) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_100,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1216_102) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_206),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_103) {
  P return_;
  P x_1215F1316;
  P x_1215F1315;
  P x_1215F1314;
  P x_1215F1313;
  P x_1215F1312;
  P bodyF1311;
  P testF1310;
  P x_1215F1309;
  P x_1216F1308;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_102,2);
  x_1216F1308 = T1;
  FUNINIT(x_1216F1308, 2,FREEREF(0),return_);
  x_1215F1309 = FREEREF(0);
  testF1310 = YPfalse;
  testF1310 = BOXFAB(testF1310);
  bodyF1311 = YPfalse;
  bodyF1311 = BOXFAB(bodyF1311);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F1309,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F1309,LITREF(lit_206),x_1216F1308);
    x_1215F1312 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F1312,x_1216F1308);
    BOXVAL(testF1310) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1215F1312);
    x_1215F1313 = T12;
    BOXVAL(bodyF1311) = x_1215F1313;
    x_1215F1314 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F1314,x_1216F1308);
    x_1215F1315 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1315,x_1216F1308);
    T17 = CALL1(1,VARREF(Ytail),x_1215F1314);
    x_1215F1316 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1316,x_1216F1308);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1216F1308,LITREF(lit_7),x_1215F1309);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T23 = CALL1(1,VARREF(Ylst),Ynil);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T28 = BOXVAL(testF1310);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T29 = BOXVAL(bodyF1311);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
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

FUNCODEDEF(fun_104) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_103,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1224_105) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_211),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1228_106) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_218),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P return_;
  P old_valueF1332;
  P nameF1331;
  P x_1227F1330;
  P x_1227F1329;
  P x_1227F1328;
  P x_1227F1327;
  P x_1227F1326;
  P x_1227F1325;
  P x_1227F1324;
  P x_1227F1323;
  P x_1227F1322;
  P restF1321;
  P valueF1320;
  P varF1319;
  P x_1227F1318;
  P x_1228F1317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_106,2);
  x_1228F1317 = T1;
  FUNINIT(x_1228F1317, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1227F1318 = T3;
  varF1319 = YPfalse;
  varF1319 = BOXFAB(varF1319);
  valueF1320 = YPfalse;
  valueF1320 = BOXFAB(valueF1320);
  restF1321 = YPfalse;
  restF1321 = BOXFAB(restF1321);
  T10 = CALL2(1,VARREF(YisaQ),x_1227F1318,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1318,x_1228F1317);
    x_1227F1322 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F1322,x_1228F1317);
    BOXVAL(varF1319) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1227F1322);
    x_1227F1323 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F1323,x_1228F1317);
    BOXVAL(valueF1320) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1227F1323);
    x_1227F1324 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1324,x_1228F1317);
    x_1227F1325 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1325,x_1228F1317);
    T22 = CALL1(1,VARREF(Ytail),x_1227F1324);
    x_1227F1326 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1326,x_1228F1317);
    T19 = T23;
    T16 = T19;
    T13 = T16;
    T24 = CALL1(1,VARREF(Ytail),x_1227F1318);
    x_1227F1327 = T24;
    BOXVAL(restF1321) = x_1227F1327;
    x_1227F1328 = Ynil;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1328,x_1228F1317);
    x_1227F1329 = T27;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1329,x_1228F1317);
    T29 = CALL1(1,VARREF(Ytail),x_1227F1328);
    x_1227F1330 = T29;
    T30 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1330,x_1228F1317);
    T26 = T30;
    T25 = T26;
    T11 = T25;
  } else {
    T31 = CALL2(1,x_1228F1317,LITREF(lit_7),x_1227F1318);
  }
  T34 = BOXVAL(varF1319);
  T33 = CALL1(1,VARREF(YgooSmacrosYvar_name),T34);
  nameF1331 = T33;
  T36 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF1332 = T36;
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T43 = CALL1(1,VARREF(Ylst),old_valueF1332);
  T44 = CALL1(1,VARREF(Ylst),nameF1331);
  T42 = CALL3(1,VARREF(YgooSmacrosYcat),T43,T44,LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T40 = CALL2(1,VARREF(YgooSmacrosYcat),T41,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_219));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T54 = CALL1(1,VARREF(Ylst),nameF1331);
  T56 = BOXVAL(valueF1320);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_11));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T62 = BOXVAL(restF1321);
  T61 = CALL2(1,VARREF(YgooSmacrosYcat),T62,LITREF(lit_11));
  T60 = CALL1(1,VARREF(Ylst),T61);
  T63 = BOXVAL(FREEREF(1));
  T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T63,LITREF(lit_11));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T57,LITREF(lit_11));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T67 = CALL1(1,VARREF(Ylst),nameF1331);
  T68 = CALL1(1,VARREF(Ylst),old_valueF1332);
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

FUNCODEDEF(fun_x_1226_108) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_107,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P return_;
  P x_1225F1334;
  P x_1226F1333;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1226_108,3);
  x_1226F1333 = T1;
  FUNINIT(x_1226F1333, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1225F1334 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1225F1334,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1225F1334,x_1226F1333);
  } else {
    T6 = CALL2(1,x_1226F1333,LITREF(lit_7),x_1225F1334);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_11));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P return_;
  P x_1223F1343;
  P x_1223F1342;
  P x_1223F1341;
  P x_1223F1340;
  P x_1223F1339;
  P bodyF1338;
  P bindingsF1337;
  P x_1223F1336;
  P x_1224F1335;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1224_105,2);
  x_1224F1335 = T1;
  FUNINIT(x_1224F1335, 2,FREEREF(0),return_);
  x_1223F1336 = FREEREF(0);
  bindingsF1337 = YPfalse;
  bindingsF1337 = BOXFAB(bindingsF1337);
  bodyF1338 = YPfalse;
  bodyF1338 = BOXFAB(bodyF1338);
  T7 = CALL2(1,VARREF(YisaQ),x_1223F1336,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1223F1336,LITREF(lit_211),x_1224F1335);
    x_1223F1339 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1223F1339,x_1224F1335);
    BOXVAL(bindingsF1337) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1223F1339);
    x_1223F1340 = T12;
    BOXVAL(bodyF1338) = x_1223F1340;
    x_1223F1341 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1223F1341,x_1224F1335);
    x_1223F1342 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F1342,x_1224F1335);
    T17 = CALL1(1,VARREF(Ytail),x_1223F1341);
    x_1223F1343 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F1343,x_1224F1335);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1224F1335,LITREF(lit_7),x_1223F1336);
  }
  T21 = FUNFAB(fun_109,2,bindingsF1337,bodyF1338);
  T20 = with_exit(T21);
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_110,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1232_112) {
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

FUNCODEDEF(fun_113) {
  P return_;
  P vnamF1355;
  P typF1354;
  P namF1353;
  P x_1231F1352;
  P x_1231F1351;
  P x_1231F1350;
  P x_1231F1349;
  P x_1231F1348;
  P valueF1347;
  P varF1346;
  P x_1231F1345;
  P x_1232F1344;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_112,2);
  x_1232F1344 = T1;
  FUNINIT(x_1232F1344, 2,FREEREF(0),return_);
  x_1231F1345 = FREEREF(0);
  varF1346 = YPfalse;
  varF1346 = BOXFAB(varF1346);
  valueF1347 = YPfalse;
  valueF1347 = BOXFAB(valueF1347);
  T7 = CALL2(1,VARREF(YisaQ),x_1231F1345,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1231F1345,LITREF(lit_224),x_1232F1344);
    x_1231F1348 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1348,x_1232F1344);
    BOXVAL(varF1346) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1231F1348);
    x_1231F1349 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1349,x_1232F1344);
    BOXVAL(valueF1347) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F1349);
    x_1231F1350 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1350,x_1232F1344);
    x_1231F1351 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1351,x_1232F1344);
    T19 = CALL1(1,VARREF(Ytail),x_1231F1350);
    x_1231F1352 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1352,x_1232F1344);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1232F1344,LITREF(lit_7),x_1231F1345);
  }
  T24 = BOXVAL(varF1346);
  T23 = CALL1(1,VARREF(YgooSmacrosYvar_name),T24);
  namF1353 = T23;
  T27 = BOXVAL(varF1346);
  T26 = CALL1(1,VARREF(YgooSmacrosYvar_type),T27);
  typF1354 = T26;
  T29 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_225),namF1353,LITREF(lit_226));
  vnamF1355 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_227));
  T35 = CALL1(1,VARREF(Ylst),vnamF1355);
  T37 = BOXVAL(valueF1347);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_228));
  T41 = CALL1(1,VARREF(Ylst),namF1353);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_229));
  T45 = CALL1(1,VARREF(Ylst),typF1354);
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T46 = CALL1(1,VARREF(Ylst),vnamF1355);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T42,T46,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_228));
  T51 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF1353);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T57 = CALL1(1,VARREF(Ylst),typF1354);
  T55 = CALL3(1,VARREF(YgooSmacrosYcat),T56,T57,LITREF(lit_11));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,LITREF(lit_11));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T61 = CALL1(1,VARREF(Ylst),vnamF1355);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
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

FUNCODEDEF(fun_114) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_113,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_115) {
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

FUNCODEDEF(fun_116) {
  P return_;
  P x_1235F1362;
  P x_1235F1361;
  P x_1235F1360;
  P x_1235F1359;
  P bodyF1358;
  P x_1235F1357;
  P x_1236F1356;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_115,2);
  x_1236F1356 = T1;
  FUNINIT(x_1236F1356, 2,FREEREF(0),return_);
  x_1235F1357 = FREEREF(0);
  bodyF1358 = YPfalse;
  bodyF1358 = BOXFAB(bodyF1358);
  T5 = CALL2(1,VARREF(YisaQ),x_1235F1357,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F1357,LITREF(lit_235),x_1236F1356);
    x_1235F1359 = T7;
    BOXVAL(bodyF1358) = x_1235F1359;
    x_1235F1360 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1235F1360,x_1236F1356);
    x_1235F1361 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1361,x_1236F1356);
    T12 = CALL1(1,VARREF(Ytail),x_1235F1360);
    x_1235F1362 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1362,x_1236F1356);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1236F1356,LITREF(lit_7),x_1235F1357);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_236));
  T22 = CALL1(1,VARREF(Ylst),YPfalse);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T23 = BOXVAL(bodyF1358);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T23,LITREF(lit_11));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_117) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_116,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_118) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_241),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  P return_;
  P x_1239F1369;
  P x_1239F1368;
  P x_1239F1367;
  P x_1239F1366;
  P namesF1365;
  P x_1239F1364;
  P x_1240F1363;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_118,2);
  x_1240F1363 = T1;
  FUNINIT(x_1240F1363, 2,FREEREF(0),return_);
  x_1239F1364 = FREEREF(0);
  namesF1365 = YPfalse;
  namesF1365 = BOXFAB(namesF1365);
  T5 = CALL2(1,VARREF(YisaQ),x_1239F1364,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F1364,LITREF(lit_241),x_1240F1363);
    x_1239F1366 = T7;
    BOXVAL(namesF1365) = x_1239F1366;
    x_1239F1367 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1239F1367,x_1240F1363);
    x_1239F1368 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1368,x_1240F1363);
    T12 = CALL1(1,VARREF(Ytail),x_1239F1367);
    x_1239F1369 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1369,x_1240F1363);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1240F1363,LITREF(lit_7),x_1239F1364);
  }
  T17 = BOXVAL(namesF1365);
  T16 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T17);
  if (T16 != YPfalse) {
    T15 = YPfalse;
  } else {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_118));
    T23 = CALL1(1,VARREF(Ylst),YPfalse);
    T26 = BOXVAL(namesF1365);
    T25 = CALL1(1,VARREF(Yhead),T26);
    T24 = CALL1(1,VARREF(Ylst),T25);
    T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T24,LITREF(lit_11));
    T20 = CALL1(1,VARREF(Ylst),T21);
    T29 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
    T32 = BOXVAL(namesF1365);
    T31 = CALL1(1,VARREF(Yhead),T32);
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T35 = CALL1(1,VARREF(Ylst),LITREF(lit_241));
    T37 = BOXVAL(namesF1365);
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

FUNCODEDEF(fun_120) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_119,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1262_121) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_247),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1280_122) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_170));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_123) {
  P return_;
  P x_1279F1375;
  P x_1279F1374;
  P x_1279F1373;
  P nameF1372;
  P x_1279F1371;
  P x_1280F1370;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1280_122,1);
  x_1280F1370 = T1;
  FUNINIT(x_1280F1370, 1,return_);
  x_1279F1371 = FREEREF(0);
  nameF1372 = YPfalse;
  nameF1372 = BOXFAB(nameF1372);
  T5 = CALL2(1,VARREF(YisaQ),x_1279F1371,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1279F1371,x_1280F1370);
    BOXVAL(nameF1372) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1279F1371);
    x_1279F1373 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1279F1373,x_1280F1370);
    x_1279F1374 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1279F1374,x_1280F1370);
    T12 = CALL1(1,VARREF(Ytail),x_1279F1373);
    x_1279F1375 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1279F1375,x_1280F1370);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1280F1370,LITREF(lit_7),x_1279F1371);
  }
  T17 = BOXVAL(nameF1372);
  T16 = CALL2(1,VARREF(YisaQ),T17,VARREF(YLsymG));
  if (T16 != YPfalse) {
    T20 = BOXVAL(nameF1372);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T23 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
    T25 = BOXVAL(nameF1372);
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

FUNCODEDEF(fun_x_1277_124) {
  P msg_,args_;
  P x_1278F1376;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1278F1376 = FREEREF(0);
  T3 = FUNFAB(fun_123,1,x_1278F1376);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_125) {
  P return_;
  P x_1276F1385;
  P x_1276F1384;
  P x_1276F1383;
  P x_1276F1382;
  P x_1276F1381;
  P restF1380;
  P nameF1379;
  P x_1276F1378;
  P x_1277F1377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1277_124,2);
  x_1277F1377 = T1;
  FUNINIT(x_1277F1377, 2,FREEREF(0),return_);
  x_1276F1378 = FREEREF(0);
  nameF1379 = YPfalse;
  nameF1379 = BOXFAB(nameF1379);
  restF1380 = YPfalse;
  restF1380 = BOXFAB(restF1380);
  T7 = CALL2(1,VARREF(YisaQ),x_1276F1378,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1276F1378,LITREF(lit_266),x_1277F1377);
    x_1276F1381 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1276F1381,x_1277F1377);
    BOXVAL(nameF1379) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1276F1381);
    x_1276F1382 = T12;
    BOXVAL(restF1380) = x_1276F1382;
    x_1276F1383 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1276F1383,x_1277F1377);
    x_1276F1384 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1276F1384,x_1277F1377);
    T17 = CALL1(1,VARREF(Ytail),x_1276F1383);
    x_1276F1385 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1276F1385,x_1277F1377);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1277F1377,LITREF(lit_7),x_1276F1378);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T27 = BOXVAL(nameF1379);
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

FUNCODEDEF(fun_x_1274_126) {
  P msg_,args_;
  P x_1275F1386;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1275F1386 = FREEREF(0);
  T3 = FUNFAB(fun_125,2,x_1275F1386,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P return_;
  P x_1273F1395;
  P x_1273F1394;
  P x_1273F1393;
  P x_1273F1392;
  P x_1273F1391;
  P restF1390;
  P nameF1389;
  P x_1273F1388;
  P x_1274F1387;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1274_126,3);
  x_1274F1387 = T1;
  FUNINIT(x_1274F1387, 3,FREEREF(0),FREEREF(1),return_);
  x_1273F1388 = FREEREF(0);
  nameF1389 = YPfalse;
  nameF1389 = BOXFAB(nameF1389);
  restF1390 = YPfalse;
  restF1390 = BOXFAB(restF1390);
  T7 = CALL2(1,VARREF(YisaQ),x_1273F1388,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1273F1388,LITREF(lit_267),x_1274F1387);
    x_1273F1391 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1273F1391,x_1274F1387);
    BOXVAL(nameF1389) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1273F1391);
    x_1273F1392 = T12;
    BOXVAL(restF1390) = x_1273F1392;
    x_1273F1393 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1273F1393,x_1274F1387);
    x_1273F1394 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1273F1394,x_1274F1387);
    T17 = CALL1(1,VARREF(Ytail),x_1273F1393);
    x_1273F1395 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1273F1395,x_1274F1387);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1274F1387,LITREF(lit_7),x_1273F1388);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T27 = BOXVAL(nameF1389);
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

FUNCODEDEF(fun_x_1271_128) {
  P msg_,args_;
  P x_1272F1396;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1272F1396 = FREEREF(0);
  T3 = FUNFAB(fun_127,2,x_1272F1396,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  P return_;
  P x_1270F1405;
  P x_1270F1404;
  P x_1270F1403;
  P x_1270F1402;
  P x_1270F1401;
  P restF1400;
  P nameF1399;
  P x_1270F1398;
  P x_1271F1397;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1271_128,3);
  x_1271F1397 = T1;
  FUNINIT(x_1271F1397, 3,FREEREF(0),FREEREF(1),return_);
  x_1270F1398 = FREEREF(0);
  nameF1399 = YPfalse;
  nameF1399 = BOXFAB(nameF1399);
  restF1400 = YPfalse;
  restF1400 = BOXFAB(restF1400);
  T7 = CALL2(1,VARREF(YisaQ),x_1270F1398,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1270F1398,LITREF(lit_227),x_1271F1397);
    x_1270F1401 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1270F1401,x_1271F1397);
    BOXVAL(nameF1399) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1270F1401);
    x_1270F1402 = T12;
    BOXVAL(restF1400) = x_1270F1402;
    x_1270F1403 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1270F1403,x_1271F1397);
    x_1270F1404 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1270F1404,x_1271F1397);
    T17 = CALL1(1,VARREF(Ytail),x_1270F1403);
    x_1270F1405 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1270F1405,x_1271F1397);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1271F1397,LITREF(lit_7),x_1270F1398);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T27 = BOXVAL(nameF1399);
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

FUNCODEDEF(fun_x_1268_130) {
  P msg_,args_;
  P x_1269F1406;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1269F1406 = FREEREF(0);
  T3 = FUNFAB(fun_129,2,x_1269F1406,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P return_;
  P x_1267F1415;
  P x_1267F1414;
  P x_1267F1413;
  P x_1267F1412;
  P x_1267F1411;
  P restF1410;
  P nameF1409;
  P x_1267F1408;
  P x_1268F1407;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1268_130,3);
  x_1268F1407 = T1;
  FUNINIT(x_1268F1407, 3,FREEREF(0),FREEREF(1),return_);
  x_1267F1408 = FREEREF(0);
  nameF1409 = YPfalse;
  nameF1409 = BOXFAB(nameF1409);
  restF1410 = YPfalse;
  restF1410 = BOXFAB(restF1410);
  T7 = CALL2(1,VARREF(YisaQ),x_1267F1408,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1267F1408,LITREF(lit_268),x_1268F1407);
    x_1267F1411 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1267F1411,x_1268F1407);
    BOXVAL(nameF1409) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1267F1411);
    x_1267F1412 = T12;
    BOXVAL(restF1410) = x_1267F1412;
    x_1267F1413 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1267F1413,x_1268F1407);
    x_1267F1414 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1267F1414,x_1268F1407);
    T17 = CALL1(1,VARREF(Ytail),x_1267F1413);
    x_1267F1415 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1267F1415,x_1268F1407);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1268F1407,LITREF(lit_7),x_1267F1408);
  }
  T22 = BOXVAL(nameF1409);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T27 = BOXVAL(nameF1409);
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

FUNCODEDEF(fun_x_1265_132) {
  P msg_,args_;
  P x_1266F1416;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1266F1416 = FREEREF(0);
  T3 = FUNFAB(fun_131,2,x_1266F1416,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P x_1264F1425;
  P x_1264F1424;
  P x_1264F1423;
  P x_1264F1422;
  P x_1264F1421;
  P restF1420;
  P nameF1419;
  P x_1264F1418;
  P x_1265F1417;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1265_132,3);
  x_1265F1417 = T1;
  FUNINIT(x_1265F1417, 3,FREEREF(0),FREEREF(1),return_);
  x_1264F1418 = FREEREF(0);
  nameF1419 = YPfalse;
  nameF1419 = BOXFAB(nameF1419);
  restF1420 = YPfalse;
  restF1420 = BOXFAB(restF1420);
  T7 = CALL2(1,VARREF(YisaQ),x_1264F1418,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1264F1418,LITREF(lit_269),x_1265F1417);
    x_1264F1421 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1264F1421,x_1265F1417);
    BOXVAL(nameF1419) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1264F1421);
    x_1264F1422 = T12;
    BOXVAL(restF1420) = x_1264F1422;
    x_1264F1423 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1264F1423,x_1265F1417);
    x_1264F1424 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1264F1424,x_1265F1417);
    T17 = CALL1(1,VARREF(Ytail),x_1264F1423);
    x_1264F1425 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1264F1425,x_1265F1417);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1265F1417,LITREF(lit_7),x_1264F1418);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T27 = BOXVAL(nameF1419);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T33 = BOXVAL(nameF1419);
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

FUNCODEDEF(fun_134) {
  P return_;
  P defsF1434;
  P x_1263F1433;
  P x_1261F1432;
  P x_1261F1431;
  P x_1261F1430;
  P x_1261F1429;
  P defF1428;
  P x_1261F1427;
  P x_1262F1426;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1262_121,2);
  x_1262F1426 = T1;
  FUNINIT(x_1262F1426, 2,FREEREF(0),return_);
  x_1261F1427 = FREEREF(0);
  defF1428 = YPfalse;
  defF1428 = BOXFAB(defF1428);
  T5 = CALL2(1,VARREF(YisaQ),x_1261F1427,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1261F1427,LITREF(lit_247),x_1262F1426);
    x_1261F1429 = T7;
    BOXVAL(defF1428) = x_1261F1429;
    x_1261F1430 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1261F1430,x_1262F1426);
    x_1261F1431 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1261F1431,x_1262F1426);
    T12 = CALL1(1,VARREF(Ytail),x_1261F1430);
    x_1261F1432 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1261F1432,x_1262F1426);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1262F1426,LITREF(lit_7),x_1261F1427);
  }
  T17 = BOXVAL(defF1428);
  x_1263F1433 = T17;
  T19 = FUNFAB(fun_133,2,x_1263F1433,defF1428);
  T18 = with_exit(T19);
  T16 = T18;
  defsF1434 = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,defsF1434,LITREF(lit_11));
  T15 = T20;
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_134,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1284_136) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_274),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P x_;
  P xF1435;
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
  xF1435 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_247));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF1435,LITREF(lit_11));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P x_1283F1442;
  P x_1283F1441;
  P x_1283F1440;
  P x_1283F1439;
  P defsF1438;
  P x_1283F1437;
  P x_1284F1436;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_136,2);
  x_1284F1436 = T1;
  FUNINIT(x_1284F1436, 2,FREEREF(0),return_);
  x_1283F1437 = FREEREF(0);
  defsF1438 = YPfalse;
  defsF1438 = BOXFAB(defsF1438);
  T5 = CALL2(1,VARREF(YisaQ),x_1283F1437,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F1437,LITREF(lit_274),x_1284F1436);
    x_1283F1439 = T7;
    BOXVAL(defsF1438) = x_1283F1439;
    x_1283F1440 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1283F1440,x_1284F1436);
    x_1283F1441 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1441,x_1284F1436);
    T12 = CALL1(1,VARREF(Ytail),x_1283F1440);
    x_1283F1442 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1442,x_1284F1436);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1284F1436,LITREF(lit_7),x_1283F1437);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T18 = fun_137;
  T19 = BOXVAL(defsF1438);
  T17 = CALL2(1,VARREF(YgooSmacrosYmap),T18,T19);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_138,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
  P tmpF1458;
  P tmpF1457;
  P tmpF1456;
  P tmpF1455;
  P tmpF1454;
  P tmpF1453;
  P tmpF1452;
  P tmpF1451;
  P tmpF1450;
  P tmpF1449;
  P tmpF1448;
  P tmpF1447;
  P tmpF1446;
  P tmpF1445;
  P tmpF1444;
  P tmpF1443;
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
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"@checked-next-methods");
  lit_1 = YPPlist(3,YPPsym((P)"met"),YPPsym((P)"nxt-mets"),YPPsym((P)"args"));
  T0 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYOchecked_next_methods = YPmet(FUNCODEREF(YgooSmacrosYOchecked_next_methods),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(11));
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
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPlist(2,YPPsym((P)"sets"),YPPsym((P)"inits"));
  lit_34 = YPPsym((P)"set");
  T17 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1088_10 = YPmet(FUNCODEREF(fun_x_1088_10),LITREF(lit_29),T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_11 = YPmet(FUNCODEREF(fun_loop_11),LITREF(lit_32),T16,ENVNUL,PNUL,sloc(32));
  T15 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T18 = fun_13;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T18);
  lit_35 = YPPsym((P)"lift-place-subforms");
  lit_36 = YPPlist(1,YPPsym((P)"place"));
  lit_37 = YPPsym((P)"munch");
  lit_38 = YPPlist(1,YPPsym((P)"subforms"));
  T22 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T21 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T22,Ynil);
  fun_munch_14 = YPmet(FUNCODEREF(fun_munch_14),LITREF(lit_37),T21,ENVNUL,PNUL,sloc(50));
  T20 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T19 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T20,Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_35),T19,ENVNUL,PNUL,sloc(49));
  T23 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T23);
  lit_39 = YPPlist(1,YPPsym((P)"exp"));
  lit_40 = YPPlist(1,YPPsym((P)"return"));
  lit_41 = YPPsym((P)"x-1094");
  lit_42 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_43 = YPPsym((P)"incf");
  lit_44 = YPPlist(1,YPPsym((P)"return"));
  lit_45 = YPPsym((P)"x-1096");
  lit_46 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_47 = YPPsym((P)"+");
  T28 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_16 = YPmet(FUNCODEREF(fun_x_1094_16),LITREF(lit_41),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1096_17 = YPmet(FUNCODEREF(fun_x_1096_17),LITREF(lit_45),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T29 = fun_20;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T29);
  lit_48 = YPPlist(1,YPPsym((P)"exp"));
  lit_49 = YPPlist(1,YPPsym((P)"return"));
  lit_50 = YPPsym((P)"x-1102");
  lit_51 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_52 = YPPsym((P)"decf");
  lit_53 = YPPlist(1,YPPsym((P)"return"));
  lit_54 = YPPsym((P)"x-1104");
  lit_55 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_56 = YPPsym((P)"-");
  T34 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1102_21 = YPmet(FUNCODEREF(fun_x_1102_21),LITREF(lit_50),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1104_22 = YPmet(FUNCODEREF(fun_x_1104_22),LITREF(lit_54),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T35 = fun_25;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T35);
  lit_57 = YPPlist(1,YPPsym((P)"exp"));
  lit_58 = YPPlist(1,YPPsym((P)"return"));
  lit_59 = YPPsym((P)"x-1108");
  lit_60 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_61 = YPPsym((P)"pushf");
  lit_62 = YPPsym((P)"push!");
  T38 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_26 = YPmet(FUNCODEREF(fun_x_1108_26),LITREF(lit_59),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T39 = fun_28;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T39);
  lit_63 = YPPlist(1,YPPsym((P)"exp"));
  lit_64 = YPPlist(1,YPPsym((P)"return"));
  lit_65 = YPPsym((P)"x-1112");
  lit_66 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_67 = YPPsym((P)"swapf");
  T42 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_29 = YPmet(FUNCODEREF(fun_x_1112_29),LITREF(lit_65),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T43 = fun_31;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T43);
  lit_68 = YPPlist(1,YPPsym((P)"exp"));
  lit_69 = YPPlist(1,YPPsym((P)"return"));
  lit_70 = YPPsym((P)"x-1116");
  lit_71 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_72 = YPPsym((P)"rotf");
  lit_73 = YPPlist(1,YPPsym((P)"x"));
  lit_74 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  lit_75 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"t"));
  T49 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_32 = YPmet(FUNCODEREF(fun_x_1116_32),LITREF(lit_70),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T48,ENVNUL,PNUL,sloc(91));
  T47 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T50 = fun_37;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"rotf"),T50);
  lit_76 = YPPlist(1,YPPsym((P)"exp"));
  lit_77 = YPPlist(1,YPPsym((P)"return"));
  lit_78 = YPPsym((P)"x-1120");
  lit_79 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_80 = YPPsym((P)"popf");
  lit_81 = YPPsym((P)"tup");
  lit_82 = YPPsym((P)"pop!");
  T53 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_38 = YPmet(FUNCODEREF(fun_x_1120_38),LITREF(lit_78),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T54 = fun_40;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T54);
  lit_83 = YPPlist(1,YPPsym((P)"exp"));
  lit_84 = YPPlist(1,YPPsym((P)"return"));
  lit_85 = YPPsym((P)"x-1124");
  lit_86 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_87 = YPPsym((P)"opf");
  lit_88 = YPPsym((P)"_");
  T57 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_41 = YPmet(FUNCODEREF(fun_x_1124_41),LITREF(lit_85),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T58 = fun_43;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T58);
  lit_89 = YPPlist(1,YPPsym((P)"exp"));
  lit_90 = YPPlist(1,YPPsym((P)"return"));
  lit_91 = YPPsym((P)"x-1128");
  lit_92 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_93 = YPPsym((P)"unless");
  lit_94 = YPPsym((P)"if");
  lit_95 = YPPsym((P)"not");
  lit_96 = YPPsym((P)"seq");
  T61 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_44 = YPmet(FUNCODEREF(fun_x_1128_44),LITREF(lit_91),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T62 = fun_46;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T62);
  lit_97 = YPPlist(1,YPPsym((P)"exp"));
  lit_98 = YPPlist(1,YPPsym((P)"return"));
  lit_99 = YPPsym((P)"x-1132");
  lit_100 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_101 = YPPsym((P)"when");
  T65 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_47 = YPmet(FUNCODEREF(fun_x_1132_47),LITREF(lit_99),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T66 = fun_49;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T66);
  lit_102 = YPPlist(1,YPPsym((P)"exp"));
  lit_103 = YPPlist(1,YPPsym((P)"return"));
  lit_104 = YPPsym((P)"x-1140");
  lit_105 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_106 = YPPsym((P)"or");
  lit_107 = YPPlist(1,YPPsym((P)"return"));
  lit_108 = YPPsym((P)"x-1142");
  lit_109 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_110 = YPPlist(1,YPPsym((P)"return"));
  lit_111 = YPPsym((P)"x-1144");
  lit_112 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_113 = YPPsym((P)"tmp");
  T73 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_50 = YPmet(FUNCODEREF(fun_x_1140_50),LITREF(lit_104),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1142_51 = YPmet(FUNCODEREF(fun_x_1142_51),LITREF(lit_108),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_52 = YPmet(FUNCODEREF(fun_x_1144_52),LITREF(lit_111),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T74 = fun_56;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T74);
  lit_114 = YPPlist(1,YPPsym((P)"exp"));
  lit_115 = YPPlist(1,YPPsym((P)"return"));
  lit_116 = YPPsym((P)"x-1152");
  lit_117 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_118 = YPPsym((P)"and");
  lit_119 = YPPlist(1,YPPsym((P)"return"));
  lit_120 = YPPsym((P)"x-1154");
  lit_121 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_122 = YPPlist(1,YPPsym((P)"return"));
  lit_123 = YPPsym((P)"x-1156");
  lit_124 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T81 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1152_57 = YPmet(FUNCODEREF(fun_x_1152_57),LITREF(lit_116),T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1154_58 = YPmet(FUNCODEREF(fun_x_1154_58),LITREF(lit_120),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1156_59 = YPmet(FUNCODEREF(fun_x_1156_59),LITREF(lit_123),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T82 = fun_63;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T82);
  lit_125 = YPPlist(1,YPPsym((P)"exp"));
  lit_126 = YPPlist(1,YPPsym((P)"return"));
  lit_127 = YPPsym((P)"x-1162");
  lit_128 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_129 = YPPsym((P)"cond");
  lit_130 = YPPlist(1,YPPsym((P)"return"));
  lit_131 = YPPsym((P)"x-1164");
  lit_132 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_133 = YPsb((P)"bad case %=");
  T87 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1162_64 = YPmet(FUNCODEREF(fun_x_1162_64),LITREF(lit_127),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1164_65 = YPmet(FUNCODEREF(fun_x_1164_65),LITREF(lit_131),T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T88 = fun_68;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T88);
  lit_134 = YPPsym((P)"do-case-by");
  lit_135 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"tst"),YPPsym((P)"cases"));
  lit_136 = YPPlist(1,YPPsym((P)"return"));
  lit_137 = YPPsym((P)"x-1170");
  lit_138 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_139 = YPsb((P)"bad case %=");
  lit_140 = YPPlist(1,YPPsym((P)"return"));
  lit_141 = YPPsym((P)"x-1172");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPsb((P)"bad case %=");
  lit_144 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1170_69 = YPmet(FUNCODEREF(fun_x_1170_69),LITREF(lit_137),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_70 = YPmet(FUNCODEREF(fun_x_1172_70),LITREF(lit_141),T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_136),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_135),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_134),T89,ENVNUL,PNUL,sloc(145));
  T95 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T95);
  lit_145 = YPPlist(1,YPPsym((P)"exp"));
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1176");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPPsym((P)"case-by");
  T98 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_75 = YPmet(FUNCODEREF(fun_x_1176_75),LITREF(lit_147),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T99 = fun_77;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T99);
  lit_150 = YPPlist(1,YPPsym((P)"exp"));
  lit_151 = YPPlist(1,YPPsym((P)"return"));
  lit_152 = YPPsym((P)"x-1180");
  lit_153 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_154 = YPPsym((P)"case");
  lit_155 = YPPsym((P)"==");
  T102 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_78 = YPmet(FUNCODEREF(fun_x_1180_78),LITREF(lit_152),T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T103 = fun_80;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T103);
  lit_156 = YPPlist(1,YPPsym((P)"exp"));
  lit_157 = YPPlist(1,YPPsym((P)"return"));
  lit_158 = YPPsym((P)"x-1188");
  lit_159 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_160 = YPPsym((P)"match");
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-1190");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-1192");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPsb((P)"invalid match syntax.");
  lit_168 = YPPsym((P)"mif");
  lit_169 = YPPsym((P)"syntax-error");
  lit_170 = YPsb((P)"failed to match.");
  T110 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1188_81 = YPmet(FUNCODEREF(fun_x_1188_81),LITREF(lit_158),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_82 = YPmet(FUNCODEREF(fun_x_1192_82),LITREF(lit_165),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1190_84 = YPmet(FUNCODEREF(fun_x_1190_84),LITREF(lit_162),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T111 = fun_87;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T111);
  lit_171 = YPPlist(1,YPPsym((P)"exp"));
  lit_172 = YPPlist(1,YPPsym((P)"return"));
  lit_173 = YPPsym((P)"x-1196");
  lit_174 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_175 = YPPsym((P)"assert");
  lit_176 = YPPsym((P)"assert-error");
  T114 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_88 = YPmet(FUNCODEREF(fun_x_1196_88),LITREF(lit_173),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T115 = fun_90;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T115);
  lit_177 = YPPlist(1,YPPsym((P)"exp"));
  lit_178 = YPPlist(1,YPPsym((P)"return"));
  lit_179 = YPPsym((P)"x-1204");
  lit_180 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_181 = YPPsym((P)"for");
  lit_182 = YPPsym((P)"grok");
  lit_183 = YPPlist(5,YPPsym((P)"clauses"),YPPsym((P)"inits"),YPPsym((P)"preds"),YPPsym((P)"nows"),YPPsym((P)"nexts"));
  lit_184 = YPPsym((P)"rep");
  lit_185 = YPPlist(1,YPPsym((P)"return"));
  lit_186 = YPPsym((P)"x-1206");
  lit_187 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_188 = YPPsym((P)"enum");
  lit_189 = YPPsym((P)"fin?");
  lit_190 = YPPlist(1,YPPsym((P)"return"));
  lit_191 = YPPsym((P)"x-1208");
  lit_192 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_193 = YPPsym((P)"now");
  lit_194 = YPPsym((P)"now-key");
  lit_195 = YPPsym((P)"nxt");
  T123 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_91 = YPmet(FUNCODEREF(fun_x_1204_91),LITREF(lit_179),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1206_92 = YPmet(FUNCODEREF(fun_x_1206_92),LITREF(lit_186),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_93 = YPmet(FUNCODEREF(fun_x_1208_93),LITREF(lit_191),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(LITREF(lit_183),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_96 = YPmet(FUNCODEREF(fun_grok_96),LITREF(lit_182),T118,ENVNUL,PNUL,sloc(183));
  T117 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T124 = fun_98;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T124);
  lit_196 = YPPlist(1,YPPsym((P)"exp"));
  lit_197 = YPPlist(1,YPPsym((P)"return"));
  lit_198 = YPPsym((P)"x-1212");
  lit_199 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_200 = YPPsym((P)"while");
  lit_201 = YPPsym((P)"_loop");
  T127 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_99 = YPmet(FUNCODEREF(fun_x_1212_99),LITREF(lit_198),T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T128 = fun_101;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T128);
  lit_202 = YPPlist(1,YPPsym((P)"exp"));
  lit_203 = YPPlist(1,YPPsym((P)"return"));
  lit_204 = YPPsym((P)"x-1216");
  lit_205 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_206 = YPPsym((P)"until");
  T131 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_102 = YPmet(FUNCODEREF(fun_x_1216_102),LITREF(lit_204),T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T132 = fun_104;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T132);
  lit_207 = YPPlist(1,YPPsym((P)"exp"));
  lit_208 = YPPlist(1,YPPsym((P)"return"));
  lit_209 = YPPsym((P)"x-1224");
  lit_210 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_211 = YPPsym((P)"dlet");
  lit_212 = YPPlist(1,YPPsym((P)"return"));
  lit_213 = YPPsym((P)"x-1226");
  lit_214 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_215 = YPPlist(1,YPPsym((P)"return"));
  lit_216 = YPPsym((P)"x-1228");
  lit_217 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_218 = YPsb((P)"Bad dlet bindings %=");
  lit_219 = YPPsym((P)"fin");
  T139 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1224_105 = YPmet(FUNCODEREF(fun_x_1224_105),LITREF(lit_209),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_106 = YPmet(FUNCODEREF(fun_x_1228_106),LITREF(lit_216),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1226_108 = YPmet(FUNCODEREF(fun_x_1226_108),LITREF(lit_213),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_207),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T140 = fun_111;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T140);
  lit_220 = YPPlist(1,YPPsym((P)"exp"));
  lit_221 = YPPlist(1,YPPsym((P)"return"));
  lit_222 = YPPsym((P)"x-1232");
  lit_223 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_224 = YPPsym((P)"def-fun-var");
  lit_225 = YPsb((P)"*");
  lit_226 = YPsb((P)"*");
  lit_227 = YPPsym((P)"dv");
  lit_228 = YPPsym((P)"dm");
  lit_229 = YPPsym((P)"=>");
  lit_230 = YPPsym((P)"z");
  T143 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_112 = YPmet(FUNCODEREF(fun_x_1232_112),LITREF(lit_222),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T144 = fun_114;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T144);
  lit_231 = YPPlist(1,YPPsym((P)"exp"));
  lit_232 = YPPlist(1,YPPsym((P)"return"));
  lit_233 = YPPsym((P)"x-1236");
  lit_234 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_235 = YPPsym((P)"without-prop-unbound-errors");
  lit_236 = YPPsym((P)"*report-prop-unbound-errors?*");
  T147 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_115 = YPmet(FUNCODEREF(fun_x_1236_115),LITREF(lit_233),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T148 = fun_117;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T148);
  lit_237 = YPPlist(1,YPPsym((P)"exp"));
  lit_238 = YPPlist(1,YPPsym((P)"return"));
  lit_239 = YPPsym((P)"x-1240");
  lit_240 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_241 = YPPsym((P)"need-implementation");
  lit_242 = YPPsym((P)"export");
  T151 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_118 = YPmet(FUNCODEREF(fun_x_1240_118),LITREF(lit_239),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T152 = fun_120;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T152);
  lit_243 = YPPlist(1,YPPsym((P)"exp"));
  lit_244 = YPPlist(1,YPPsym((P)"return"));
  lit_245 = YPPsym((P)"x-1262");
  lit_246 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_247 = YPPsym((P)"pub");
  lit_248 = YPPlist(1,YPPsym((P)"return"));
  lit_249 = YPPsym((P)"x-1265");
  lit_250 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_251 = YPPlist(1,YPPsym((P)"return"));
  lit_252 = YPPsym((P)"x-1268");
  lit_253 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_254 = YPPlist(1,YPPsym((P)"return"));
  lit_255 = YPPsym((P)"x-1271");
  lit_256 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_257 = YPPlist(1,YPPsym((P)"return"));
  lit_258 = YPPsym((P)"x-1274");
  lit_259 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_260 = YPPlist(1,YPPsym((P)"return"));
  lit_261 = YPPsym((P)"x-1277");
  lit_262 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_263 = YPPlist(1,YPPsym((P)"return"));
  lit_264 = YPPsym((P)"x-1280");
  lit_265 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_266 = YPPsym((P)"dc");
  lit_267 = YPPsym((P)"dg");
  lit_268 = YPPsym((P)"df");
  lit_269 = YPPsym((P)"dp");
  T167 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1262_121 = YPmet(FUNCODEREF(fun_x_1262_121),LITREF(lit_245),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1280_122 = YPmet(FUNCODEREF(fun_x_1280_122),LITREF(lit_264),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1277_124 = YPmet(FUNCODEREF(fun_x_1277_124),LITREF(lit_261),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1274_126 = YPmet(FUNCODEREF(fun_x_1274_126),LITREF(lit_258),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1271_128 = YPmet(FUNCODEREF(fun_x_1271_128),LITREF(lit_255),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_254),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1268_130 = YPmet(FUNCODEREF(fun_x_1268_130),LITREF(lit_252),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1265_132 = YPmet(FUNCODEREF(fun_x_1265_132),LITREF(lit_249),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T168 = fun_135;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T168);
  lit_270 = YPPlist(1,YPPsym((P)"exp"));
  lit_271 = YPPlist(1,YPPsym((P)"return"));
  lit_272 = YPPsym((P)"x-1284");
  lit_273 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_274 = YPPsym((P)"exported");
  lit_275 = YPPlist(1,YPPsym((P)"x"));
  T172 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_136 = YPmet(FUNCODEREF(fun_x_1284_136),LITREF(lit_272),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T173 = fun_139;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T173);
  tmpF1443 = YPfalse;
  if (tmpF1443 != YPfalse) {
    T174 = VARREF(YgooSmacrosYEE);
  } else {
    T174 = YPfalse;
  }
  tmpF1444 = YPfalse;
  if (tmpF1444 != YPfalse) {
    T175 = VARREF(YgooSmacrosYdo);
  } else {
    T175 = YPfalse;
  }
  tmpF1445 = YPfalse;
  if (tmpF1445 != YPfalse) {
    T176 = VARREF(YgooSmacrosYrevX);
  } else {
    T176 = YPfalse;
  }
  tmpF1446 = YPfalse;
  if (tmpF1446 != YPfalse) {
    T177 = VARREF(YgooSmacrosYcat);
  } else {
    T177 = YPfalse;
  }
  tmpF1447 = YPfalse;
  if (tmpF1447 != YPfalse) {
    T178 = VARREF(YgooSmacrosYelt);
  } else {
    T178 = YPfalse;
  }
  tmpF1448 = YPfalse;
  if (tmpF1448 != YPfalse) {
    T179 = VARREF(YgooSmacrosY1st);
  } else {
    T179 = YPfalse;
  }
  tmpF1449 = YPfalse;
  if (tmpF1449 != YPfalse) {
    T180 = VARREF(YgooSmacrosY2nd);
  } else {
    T180 = YPfalse;
  }
  tmpF1450 = YPfalse;
  if (tmpF1450 != YPfalse) {
    T181 = VARREF(YgooSmacrosYlast);
  } else {
    T181 = YPfalse;
  }
  tmpF1451 = YPfalse;
  if (tmpF1451 != YPfalse) {
    T182 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T182 = YPfalse;
  }
  tmpF1452 = YPfalse;
  if (tmpF1452 != YPfalse) {
    T183 = VARREF(Yerror);
  } else {
    T183 = YPfalse;
  }
  tmpF1453 = YPfalse;
  if (tmpF1453 != YPfalse) {
    T184 = VARREF(YgooSmacrosYgensym);
  } else {
    T184 = YPfalse;
  }
  tmpF1454 = YPfalse;
  if (tmpF1454 != YPfalse) {
    T185 = VARREF(Ylst);
  } else {
    T185 = YPfalse;
  }
  tmpF1455 = YPfalse;
  if (tmpF1455 != YPfalse) {
    T186 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T186 = YPfalse;
  }
  tmpF1456 = YPfalse;
  if (tmpF1456 != YPfalse) {
    T187 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T187 = YPfalse;
  }
  tmpF1457 = YPfalse;
  if (tmpF1457 != YPfalse) {
    T188 = VARREF(YgooSmacrosYmap);
  } else {
    T188 = YPfalse;
  }
  tmpF1458 = YPfalse;
  if (tmpF1458 != YPfalse) {
    T191 = VARREF(YgooSmacrosYmap2);
  } else {
    T191 = YPfalse;
  }
  T190 = T191;
  T189 = T190;
  return T189;
}

P YgooSmacrosY___main_1___() {
  P tmpF1468;
  P tmpF1467;
  P tmpF1466;
  P tmpF1465;
  P tmpF1464;
  P tmpF1463;
  P tmpF1462;
  P tmpF1461;
  P tmpF1460;
  P tmpF1459;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
loop:
  tmpF1459 = YPfalse;
  if (tmpF1459 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T0 = YPfalse;
  }
  tmpF1460 = YPfalse;
  if (tmpF1460 != YPfalse) {
    T1 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T1 = YPfalse;
  }
  tmpF1461 = YPfalse;
  if (tmpF1461 != YPfalse) {
    T2 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T2 = YPfalse;
  }
  tmpF1462 = YPfalse;
  if (tmpF1462 != YPfalse) {
    T3 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T3 = YPfalse;
  }
  tmpF1463 = YPfalse;
  if (tmpF1463 != YPfalse) {
    T4 = VARREF(YgooSmacrosYpair);
  } else {
    T4 = YPfalse;
  }
  tmpF1464 = YPfalse;
  if (tmpF1464 != YPfalse) {
    T5 = VARREF(Ytup);
  } else {
    T5 = YPfalse;
  }
  tmpF1465 = YPfalse;
  if (tmpF1465 != YPfalse) {
    T6 = VARREF(YgooSmacrosYvar_name);
  } else {
    T6 = YPfalse;
  }
  tmpF1466 = YPfalse;
  if (tmpF1466 != YPfalse) {
    T7 = VARREF(YgooSmacrosYvar_type);
  } else {
    T7 = YPfalse;
  }
  tmpF1467 = YPfalse;
  if (tmpF1467 != YPfalse) {
    T8 = VARREF(YgooSmacrosYnapp);
  } else {
    T8 = YPfalse;
  }
  tmpF1468 = YPfalse;
  if (tmpF1468 != YPfalse) {
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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", PVAR, NULL},
  {"case-by", PVAR, NULL},
  {"assert", PVAR, NULL},
  {"@checked-next-methods", CVAR, &YgooSmacrosYOchecked_next_methods},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"exported", PVAR, NULL},
  {"pub", PVAR, NULL},
  {"app", PVAR, NULL},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"last", CVAR, &YgooSmacrosYlast},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"and", PVAR, NULL},
  {"map", CVAR, &YgooSmacrosYmap},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"incf", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"app-sup", PVAR, NULL},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"need-implementation", PVAR, NULL},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"dlet", PVAR, NULL},
  {"opf", PVAR, NULL},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"match", PVAR, NULL},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"pushf", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"until", PVAR, NULL},
  {"do", CVAR, &YgooSmacrosYdo},
  {"---main-0---", PVAR, NULL},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"or", PVAR, NULL},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"popf", PVAR, NULL},
  {"sup", PVAR, NULL},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"rotf", PVAR, NULL},
  {"==", CVAR, &YgooSmacrosYEE},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"for", PVAR, NULL},
  {"case", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"while", PVAR, NULL},
  {"when", PVAR, NULL},
  {"renew", PVAR, NULL},
  {"decf", PVAR, NULL},
  {"def-fun-var", PVAR, NULL},
  {"match-empty-list", CVAR, &YgooSmacrosYmatch_empty_list},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"case-by", NULL},
  {"lst", NULL},
  {"assert", NULL},
  {"@checked-next-methods", NULL},
  {"macro-error", NULL},
  {"exported", NULL},
  {"pub", NULL},
  {"app", NULL},
  {"cat", NULL},
  {"fab-setter-name", NULL},
  {"unless", NULL},
  {"last", NULL},
  {"gensym", NULL},
  {"and", NULL},
  {"map", NULL},
  {"elt", NULL},
  {"incf", NULL},
  {"2nd", NULL},
  {"swapf", NULL},
  {"app-sup", NULL},
  {"error", NULL},
  {"1st", NULL},
  {"need-implementation", NULL},
  {"cat-sym", NULL},
  {"dlet", NULL},
  {"opf", NULL},
  {"rotf", NULL},
  {"match-sublist", NULL},
  {"match", NULL},
  {"napp", NULL},
  {"pushf", NULL},
  {"map2", NULL},
  {"until", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"do", NULL},
  {"without-prop-unbound-errors", NULL},
  {"lift-place-subforms", NULL},
  {"match-atom", NULL},
  {"or", NULL},
  {"tup", NULL},
  {"empty?", NULL},
  {"var-type", NULL},
  {"popf", NULL},
  {"sup", NULL},
  {"rev!", NULL},
  {"==", NULL},
  {"match-unquote", NULL},
  {"for", NULL},
  {"case", NULL},
  {"cond", NULL},
  {"while", NULL},
  {"when", NULL},
  {"renew", NULL},
  {"decf", NULL},
  {"def-fun-var", NULL},
  {"match-empty-list", NULL},
  {"pair", NULL},
  {"var-name", NULL},
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
