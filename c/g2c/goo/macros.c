/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/macros */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Ynul,"goo/boot","nul");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yhead,"goo/boot","head");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yas_error,"goo/boot","as-error");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ynil,"goo/boot","nil");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytup,"goo/boot","tup");
EXT(Ynew,"goo/boot","new");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclone,"goo/boot","clone");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Ytail,"goo/boot","tail");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_240);
DEFLIT(lit_146);
DEFLIT(lit_59);
DEFLIT(lit_78);
DEFLIT(lit_238);
DEFLIT(lit_117);
DEFLIT(lit_132);
DEFLIT(lit_273);
DEFLIT(lit_6);
DEFLIT(lit_156);
DEFLIT(lit_142);
DEFLIT(lit_58);
DEFLIT(lit_159);
DEFLIT(lit_32);
DEFLIT(lit_212);
DEFLIT(lit_164);
DEFLIT(lit_44);
DEFLIT(lit_106);
DEFLIT(lit_205);
DEFLIT(lit_0);
DEFLIT(lit_45);
DEFLIT(lit_38);
DEFLIT(lit_124);
DEFLIT(lit_103);
DEFLIT(lit_237);
DEFLIT(lit_199);
DEFLIT(lit_277);
DEFLIT(lit_4);
DEFLIT(lit_62);
DEFLIT(lit_190);
DEFLIT(lit_43);
DEFLIT(lit_166);
DEFLIT(lit_247);
DEFLIT(lit_118);
DEFLIT(lit_193);
DEFLIT(lit_111);
DEFLIT(lit_197);
DEFLIT(lit_22);
DEFLIT(lit_176);
DEFLIT(lit_242);
DEFLIT(lit_260);
DEFLIT(lit_194);
DEFLIT(lit_3);
DEFLIT(lit_155);
DEFLIT(lit_173);
DEFLIT(lit_252);
DEFLIT(lit_174);
DEFLIT(lit_182);
DEFLIT(lit_168);
DEFLIT(lit_141);
DEFLIT(lit_263);
DEFLIT(lit_222);
DEFLIT(lit_17);
DEFLIT(lit_165);
DEFLIT(lit_99);
DEFLIT(lit_275);
DEFLIT(lit_196);
DEFLIT(lit_160);
DEFLIT(lit_27);
DEFLIT(lit_26);
DEFLIT(lit_235);
DEFLIT(lit_42);
DEFLIT(lit_276);
DEFLIT(lit_264);
DEFLIT(lit_94);
DEFLIT(lit_109);
DEFLIT(lit_203);
DEFLIT(lit_224);
DEFLIT(lit_200);
DEFLIT(lit_149);
DEFLIT(lit_25);
DEFLIT(lit_217);
DEFLIT(lit_274);
DEFLIT(lit_20);
DEFLIT(lit_201);
DEFLIT(lit_40);
DEFLIT(lit_161);
DEFLIT(lit_195);
DEFLIT(lit_66);
DEFLIT(lit_54);
DEFLIT(lit_145);
DEFLIT(lit_35);
DEFLIT(lit_37);
DEFLIT(lit_211);
DEFLIT(lit_93);
DEFLIT(lit_46);
DEFLIT(lit_2);
DEFLIT(lit_153);
DEFLIT(lit_86);
DEFLIT(lit_76);
DEFLIT(lit_184);
DEFLIT(lit_229);
DEFLIT(lit_136);
DEFLIT(lit_127);
DEFLIT(lit_151);
DEFLIT(lit_19);
DEFLIT(lit_178);
DEFLIT(lit_98);
DEFLIT(lit_65);
DEFLIT(lit_202);
DEFLIT(lit_138);
DEFLIT(lit_213);
DEFLIT(lit_57);
DEFLIT(lit_187);
DEFLIT(lit_108);
DEFLIT(lit_107);
DEFLIT(lit_85);
DEFLIT(lit_126);
DEFLIT(lit_158);
DEFLIT(lit_23);
DEFLIT(lit_255);
DEFLIT(lit_30);
DEFLIT(lit_221);
DEFLIT(lit_100);
DEFLIT(lit_18);
DEFLIT(lit_56);
DEFLIT(lit_95);
DEFLIT(lit_55);
DEFLIT(lit_183);
DEFLIT(lit_140);
DEFLIT(lit_33);
DEFLIT(lit_97);
DEFLIT(lit_185);
DEFLIT(lit_272);
DEFLIT(lit_204);
DEFLIT(lit_84);
DEFLIT(lit_74);
DEFLIT(lit_230);
DEFLIT(lit_244);
DEFLIT(lit_14);
DEFLIT(lit_253);
DEFLIT(lit_15);
DEFLIT(lit_115);
DEFLIT(lit_70);
DEFLIT(lit_63);
DEFLIT(lit_133);
DEFLIT(lit_232);
DEFLIT(lit_256);
DEFLIT(lit_10);
DEFLIT(lit_180);
DEFLIT(lit_79);
DEFLIT(lit_191);
DEFLIT(lit_41);
DEFLIT(lit_75);
DEFLIT(lit_257);
DEFLIT(lit_125);
DEFLIT(lit_218);
DEFLIT(lit_67);
DEFLIT(lit_223);
DEFLIT(lit_135);
DEFLIT(lit_208);
DEFLIT(lit_83);
DEFLIT(lit_234);
DEFLIT(lit_121);
DEFLIT(lit_181);
DEFLIT(lit_157);
DEFLIT(lit_189);
DEFLIT(lit_73);
DEFLIT(lit_175);
DEFLIT(lit_144);
DEFLIT(lit_80);
DEFLIT(lit_179);
DEFLIT(lit_82);
DEFLIT(lit_150);
DEFLIT(lit_81);
DEFLIT(lit_171);
DEFLIT(lit_162);
DEFLIT(lit_134);
DEFLIT(lit_13);
DEFLIT(lit_214);
DEFLIT(lit_231);
DEFLIT(lit_29);
DEFLIT(lit_251);
DEFLIT(lit_192);
DEFLIT(lit_120);
DEFLIT(lit_268);
DEFLIT(lit_209);
DEFLIT(lit_61);
DEFLIT(lit_152);
DEFLIT(lit_170);
DEFLIT(lit_271);
DEFLIT(lit_236);
DEFLIT(lit_110);
DEFLIT(lit_250);
DEFLIT(lit_96);
DEFLIT(lit_5);
DEFLIT(lit_12);
DEFLIT(lit_90);
DEFLIT(lit_105);
DEFLIT(lit_51);
DEFLIT(lit_39);
DEFLIT(lit_128);
DEFLIT(lit_254);
DEFLIT(lit_122);
DEFLIT(lit_64);
DEFLIT(lit_215);
DEFLIT(lit_269);
DEFLIT(lit_21);
DEFLIT(lit_104);
DEFLIT(lit_68);
DEFLIT(lit_87);
DEFLIT(lit_1);
DEFLIT(lit_270);
DEFLIT(lit_77);
DEFLIT(lit_163);
DEFLIT(lit_11);
DEFLIT(lit_31);
DEFLIT(lit_92);
DEFLIT(lit_154);
DEFLIT(lit_50);
DEFLIT(lit_226);
DEFLIT(lit_198);
DEFLIT(lit_9);
DEFLIT(lit_220);
DEFLIT(lit_71);
DEFLIT(lit_167);
DEFLIT(lit_249);
DEFLIT(lit_143);
DEFLIT(lit_245);
DEFLIT(lit_52);
DEFLIT(lit_116);
DEFLIT(lit_265);
DEFLIT(lit_91);
DEFLIT(lit_241);
DEFLIT(lit_186);
DEFLIT(lit_246);
DEFLIT(lit_49);
DEFLIT(lit_148);
DEFLIT(lit_131);
DEFLIT(lit_262);
DEFLIT(lit_210);
DEFLIT(lit_227);
DEFLIT(lit_228);
DEFLIT(lit_169);
DEFLIT(lit_24);
DEFLIT(lit_207);
DEFLIT(lit_53);
DEFLIT(lit_219);
DEFLIT(lit_225);
DEFLIT(lit_48);
DEFLIT(lit_112);
DEFLIT(lit_119);
DEFLIT(lit_89);
DEFLIT(lit_130);
DEFLIT(lit_8);
DEFLIT(lit_206);
DEFLIT(lit_36);
DEFLIT(lit_60);
DEFLIT(lit_88);
DEFLIT(lit_267);
DEFLIT(lit_28);
DEFLIT(lit_233);
DEFLIT(lit_34);
DEFLIT(lit_123);
DEFLIT(lit_216);
DEFLIT(lit_101);
DEFLIT(lit_147);
DEFLIT(lit_259);
DEFLIT(lit_16);
DEFLIT(lit_172);
DEFLIT(lit_69);
DEFLIT(lit_47);
DEFLIT(lit_258);
DEFLIT(lit_248);
DEFLIT(lit_137);
DEFLIT(lit_261);
DEFLIT(lit_7);
DEFLIT(lit_114);
DEFLIT(lit_188);
DEFLIT(lit_72);
DEFLIT(lit_243);
DEFLIT(lit_177);
DEFLIT(lit_113);
DEFLIT(lit_139);
DEFLIT(lit_129);
DEFLIT(lit_239);
DEFLIT(lit_102);
DEFLIT(lit_266);

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
LOCFOR(fun_x_1188_80);
LOCFOR(fun_x_1192_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1190_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_x_1196_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1204_90);
LOCFOR(fun_x_1206_91);
LOCFOR(fun_x_1208_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_grok_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_x_1212_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_1216_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_1224_104);
LOCFOR(fun_x_1228_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1226_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_110);
LOCFOR(fun_x_1232_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_x_1236_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_1240_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1262_120);
LOCFOR(fun_x_1280_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1277_123);
LOCFOR(fun_124);
LOCFOR(fun_x_1274_125);
LOCFOR(fun_126);
LOCFOR(fun_x_1271_127);
LOCFOR(fun_128);
LOCFOR(fun_x_1268_129);
LOCFOR(fun_130);
LOCFOR(fun_x_1265_131);
LOCFOR(fun_132);
LOCFOR(fun_133);
LOCFOR(fun_134);
LOCFOR(fun_x_1284_135);
LOCFOR(fun_136);
LOCFOR(fun_137);
LOCFOR(fun_138);
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
  P x_1075F979;
  P x_1075F978;
  P x_1075F977;
  P x_1075F976;
  P argsF975;
  P x_1075F974;
  P x_1076F973;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_0,2);
  x_1076F973 = T1;
  FUNINIT(x_1076F973, 2,FREEREF(0),return_);
  x_1075F974 = FREEREF(0);
  argsF975 = YPfalse;
  argsF975 = BOXFAB(argsF975);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F974,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F974,LITREF(lit_4),x_1076F973);
    x_1075F976 = T7;
    BOXVAL(argsF975) = x_1075F976;
    x_1075F977 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1075F977,x_1076F973);
    x_1075F978 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F978,x_1076F973);
    T12 = CALL1(1,VARREF(Ytail),x_1075F977);
    x_1075F979 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F979,x_1076F973);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1076F973,LITREF(lit_5),x_1075F974);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T42 = CALL1(1,VARREF(Ylst),Ynil);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T39,LITREF(lit_9));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,LITREF(lit_9));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_9));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T54 = BOXVAL(argsF975);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T58 = CALL1(1,VARREF(Ylst),Ynil);
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),6,T45,T46,T50,T54,T55,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_18));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T63 = CALL2(1,VARREF(YgooSmacrosYcat),T64,LITREF(lit_9));
  T62 = CALL1(1,VARREF(Ylst),T63);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_20));
  T68 = BOXVAL(argsF975);
  T66 = CALL3(1,VARREF(YgooSmacrosYcat),T67,T68,LITREF(lit_9));
  T65 = CALL1(1,VARREF(Ylst),T66);
  T60 = CALL4(1,VARREF(YgooSmacrosYcat),T61,T62,T65,LITREF(lit_9));
  T59 = CALL1(1,VARREF(Ylst),T60);
  T26 = CALL5(1,VARREF(YgooSmacrosYcat),T27,T28,T43,T59,LITREF(lit_9));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T25,LITREF(lit_9));
  T3 = T15;
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_25),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P return_;
  P x_1079F986;
  P x_1079F985;
  P x_1079F984;
  P x_1079F983;
  P argsF982;
  P x_1079F981;
  P x_1080F980;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_3,2);
  x_1080F980 = T1;
  FUNINIT(x_1080F980, 2,FREEREF(0),return_);
  x_1079F981 = FREEREF(0);
  argsF982 = YPfalse;
  argsF982 = BOXFAB(argsF982);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F981,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F981,LITREF(lit_25),x_1080F980);
    x_1079F983 = T7;
    BOXVAL(argsF982) = x_1079F983;
    x_1079F984 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1079F984,x_1080F980);
    x_1079F985 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F985,x_1080F980);
    T12 = CALL1(1,VARREF(Ytail),x_1079F984);
    x_1079F986 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F986,x_1080F980);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1080F980,LITREF(lit_5),x_1079F981);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T42 = CALL1(1,VARREF(Ylst),Ynil);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T39,LITREF(lit_9));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,LITREF(lit_9));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_9));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T54 = BOXVAL(argsF982);
  T44 = CALL5(1,VARREF(YgooSmacrosYcat),T45,T46,T50,T54,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_18));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T59 = CALL2(1,VARREF(YgooSmacrosYcat),T60,LITREF(lit_9));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_20));
  T64 = BOXVAL(argsF982);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,LITREF(lit_9));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T61,LITREF(lit_9));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T26 = CALL5(1,VARREF(YgooSmacrosYcat),T27,T28,T43,T55,LITREF(lit_9));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T25,LITREF(lit_9));
  T3 = T15;
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_30),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P return_;
  P x_1083F995;
  P x_1083F994;
  P x_1083F993;
  P x_1083F992;
  P x_1083F991;
  P argsF990;
  P fF989;
  P x_1083F988;
  P x_1084F987;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_6,2);
  x_1084F987 = T1;
  FUNINIT(x_1084F987, 2,FREEREF(0),return_);
  x_1083F988 = FREEREF(0);
  fF989 = YPfalse;
  fF989 = BOXFAB(fF989);
  argsF990 = YPfalse;
  argsF990 = BOXFAB(argsF990);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F988,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F988,LITREF(lit_30),x_1084F987);
    x_1083F991 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F991,x_1084F987);
    BOXVAL(fF989) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F991);
    x_1083F992 = T12;
    BOXVAL(argsF990) = x_1083F992;
    x_1083F993 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1083F993,x_1084F987);
    x_1083F994 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F994,x_1084F987);
    T17 = CALL1(1,VARREF(Ytail),x_1083F993);
    x_1083F995 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F995,x_1084F987);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1084F987,LITREF(lit_5),x_1083F988);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T23 = BOXVAL(fF989);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = BOXVAL(argsF990);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T24,T25,LITREF(lit_9));
  T5 = T20;
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_35),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_10) {
  P sets_,inits_;
  P valF996;
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
    valF996 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_9));
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF996);
    T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T15,LITREF(lit_9));
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
  P setsF1008;
  P loopF1007;
  P varF1006;
  P x_1087F1005;
  P x_1087F1004;
  P x_1087F1003;
  P x_1087F1002;
  P x_1087F1001;
  P prop_initsF1000;
  P xF999;
  P x_1087F998;
  P x_1088F997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_9,2);
  x_1088F997 = T1;
  FUNINIT(x_1088F997, 2,FREEREF(0),return_);
  x_1087F998 = FREEREF(0);
  xF999 = YPfalse;
  xF999 = BOXFAB(xF999);
  prop_initsF1000 = YPfalse;
  prop_initsF1000 = BOXFAB(prop_initsF1000);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F998,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F998,LITREF(lit_35),x_1088F997);
    x_1087F1001 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F1001,x_1088F997);
    BOXVAL(xF999) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F1001);
    x_1087F1002 = T12;
    BOXVAL(prop_initsF1000) = x_1087F1002;
    x_1087F1003 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1087F1003,x_1088F997);
    x_1087F1004 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1004,x_1088F997);
    T17 = CALL1(1,VARREF(Ytail),x_1087F1003);
    x_1087F1005 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F1005,x_1088F997);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1088F997,LITREF(lit_5),x_1087F998);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF1006 = T21;
  T24 = FUNSHELL(1,fun_loop_10,2);
  loopF1007 = T24;
  FUNINIT(loopF1007, 2,varF1006,loopF1007);
  T26 = BOXVAL(prop_initsF1000);
  T25 = CALL2(0,loopF1007,Ynil,T26);
  T23 = T25;
  setsF1008 = T23;
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T33 = CALL1(1,VARREF(Ylst),varF1006);
  T35 = BOXVAL(xF999);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T34,LITREF(lit_9));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T30 = CALL2(1,VARREF(YgooSmacrosYcat),T31,LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),varF1006);
  T27 = CALL5(1,VARREF(YgooSmacrosYcat),T28,T29,setsF1008,T36,LITREF(lit_9));
  T22 = T27;
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
  P gF1012;
  P g_argsF1011;
  P g_declsF1010;
  P tup3F1009;
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
    tup3F1009 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1009,YPint((P)0));
    g_declsF1010 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F1009,YPint((P)1));
    g_argsF1011 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF1012 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF1012);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_9));
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF1010);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF1012,g_argsF1011);
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
  P g_argsF1016;
  P g_declsF1015;
  P tup4F1014;
  P munchF1013;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF1013 = T1;
  FUNINIT(munchF1013, 1,munchF1013);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF1013,T7);
    tup4F1014 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1014,YPint((P)0));
    g_declsF1015 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F1014,YPint((P)1));
    g_argsF1016 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF1016);
    T12 = CALL2(1,VARREF(Ytup),g_declsF1015,T13);
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_47),FREEREF(0));
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
  P x_1095F1022;
  P x_1095F1021;
  P x_1095F1020;
  P amountF1019;
  P x_1095F1018;
  P x_1096F1017;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_16,1);
  x_1096F1017 = T1;
  FUNINIT(x_1096F1017, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1095F1018 = T3;
  amountF1019 = YPfalse;
  amountF1019 = BOXFAB(amountF1019);
  T6 = CALL2(1,VARREF(YisaQ),x_1095F1018,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F1018,x_1096F1017);
    BOXVAL(amountF1019) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1095F1018);
    x_1095F1020 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1095F1020,x_1096F1017);
    x_1095F1021 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1021,x_1096F1017);
    T13 = CALL1(1,VARREF(Ytail),x_1095F1020);
    x_1095F1022 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1022,x_1096F1017);
    T10 = T14;
    T7 = T10;
  } else {
    T15 = CALL2(1,x_1096F1017,LITREF(lit_5),x_1095F1018);
  }
  T16 = BOXVAL(amountF1019);
  T4 = T16;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF1035;
  P g_placeF1034;
  P g_declsF1033;
  P tup6F1032;
  P x_1093F1031;
  P x_1093F1030;
  P x_1093F1029;
  P x_1093F1028;
  P x_1093F1027;
  P amountF1026;
  P placeF1025;
  P x_1093F1024;
  P x_1094F1023;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,2);
  x_1094F1023 = T1;
  FUNINIT(x_1094F1023, 2,FREEREF(0),return_);
  x_1093F1024 = FREEREF(0);
  placeF1025 = YPfalse;
  placeF1025 = BOXFAB(placeF1025);
  amountF1026 = YPfalse;
  amountF1026 = BOXFAB(amountF1026);
  T7 = CALL2(1,VARREF(YisaQ),x_1093F1024,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F1024,LITREF(lit_47),x_1094F1023);
    x_1093F1027 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F1027,x_1094F1023);
    BOXVAL(placeF1025) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1093F1027);
    x_1093F1028 = T12;
    BOXVAL(amountF1026) = x_1093F1028;
    x_1093F1029 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1093F1029,x_1094F1023);
    x_1093F1030 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1030,x_1094F1023);
    T17 = CALL1(1,VARREF(Ytail),x_1093F1029);
    x_1093F1031 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1031,x_1094F1023);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1094F1023,LITREF(lit_5),x_1093F1024);
  }
  T22 = BOXVAL(placeF1025);
  T21 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T22);
  tup6F1032 = T21;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1032,YPint((P)0));
  g_declsF1033 = T24;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1032,YPint((P)1));
  g_placeF1034 = T26;
  T29 = FUNFAB(fun_17,1,amountF1026);
  T28 = with_exit(T29);
  amountF1035 = T28;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1033,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1034);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T41 = CALL1(1,VARREF(Ylst),g_placeF1034);
  T42 = CALL1(1,VARREF(Ylst),amountF1035);
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_9));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_9));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T34,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_56),FREEREF(0));
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
  P x_1103F1041;
  P x_1103F1040;
  P x_1103F1039;
  P amountF1038;
  P x_1103F1037;
  P x_1104F1036;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_21,1);
  x_1104F1036 = T1;
  FUNINIT(x_1104F1036, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1103F1037 = T3;
  amountF1038 = YPfalse;
  amountF1038 = BOXFAB(amountF1038);
  T6 = CALL2(1,VARREF(YisaQ),x_1103F1037,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F1037,x_1104F1036);
    BOXVAL(amountF1038) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1103F1037);
    x_1103F1039 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1103F1039,x_1104F1036);
    x_1103F1040 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1040,x_1104F1036);
    T13 = CALL1(1,VARREF(Ytail),x_1103F1039);
    x_1103F1041 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1041,x_1104F1036);
    T10 = T14;
    T7 = T10;
  } else {
    T15 = CALL2(1,x_1104F1036,LITREF(lit_5),x_1103F1037);
  }
  T16 = BOXVAL(amountF1038);
  T4 = T16;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF1054;
  P g_placeF1053;
  P g_declsF1052;
  P tup8F1051;
  P x_1101F1050;
  P x_1101F1049;
  P x_1101F1048;
  P x_1101F1047;
  P x_1101F1046;
  P amountF1045;
  P placeF1044;
  P x_1101F1043;
  P x_1102F1042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_20,2);
  x_1102F1042 = T1;
  FUNINIT(x_1102F1042, 2,FREEREF(0),return_);
  x_1101F1043 = FREEREF(0);
  placeF1044 = YPfalse;
  placeF1044 = BOXFAB(placeF1044);
  amountF1045 = YPfalse;
  amountF1045 = BOXFAB(amountF1045);
  T7 = CALL2(1,VARREF(YisaQ),x_1101F1043,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F1043,LITREF(lit_56),x_1102F1042);
    x_1101F1046 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F1046,x_1102F1042);
    BOXVAL(placeF1044) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1101F1046);
    x_1101F1047 = T12;
    BOXVAL(amountF1045) = x_1101F1047;
    x_1101F1048 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1101F1048,x_1102F1042);
    x_1101F1049 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1049,x_1102F1042);
    T17 = CALL1(1,VARREF(Ytail),x_1101F1048);
    x_1101F1050 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1050,x_1102F1042);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1102F1042,LITREF(lit_5),x_1101F1043);
  }
  T22 = BOXVAL(placeF1044);
  T21 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T22);
  tup8F1051 = T21;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1051,YPint((P)0));
  g_declsF1052 = T24;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1051,YPint((P)1));
  g_placeF1053 = T26;
  T29 = FUNFAB(fun_22,1,amountF1045);
  T28 = with_exit(T29);
  amountF1054 = T28;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1052,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1053);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T41 = CALL1(1,VARREF(Ylst),g_placeF1053);
  T42 = CALL1(1,VARREF(Ylst),amountF1054);
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_9));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_9));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T34,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_65),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P g_placeF1066;
  P g_declsF1065;
  P tup10F1064;
  P x_1107F1063;
  P x_1107F1062;
  P x_1107F1061;
  P x_1107F1060;
  P x_1107F1059;
  P valueF1058;
  P placeF1057;
  P x_1107F1056;
  P x_1108F1055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,2);
  x_1108F1055 = T1;
  FUNINIT(x_1108F1055, 2,FREEREF(0),return_);
  x_1107F1056 = FREEREF(0);
  placeF1057 = YPfalse;
  placeF1057 = BOXFAB(placeF1057);
  valueF1058 = YPfalse;
  valueF1058 = BOXFAB(valueF1058);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F1056,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F1056,LITREF(lit_65),x_1108F1055);
    x_1107F1059 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1059,x_1108F1055);
    BOXVAL(placeF1057) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F1059);
    x_1107F1060 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1060,x_1108F1055);
    BOXVAL(valueF1058) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1107F1060);
    x_1107F1061 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1107F1061,x_1108F1055);
    x_1107F1062 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1062,x_1108F1055);
    T19 = CALL1(1,VARREF(Ytail),x_1107F1061);
    x_1107F1063 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1063,x_1108F1055);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1108F1055,LITREF(lit_5),x_1107F1056);
  }
  T24 = BOXVAL(placeF1057);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup10F1064 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1064,YPint((P)0));
  g_declsF1065 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1064,YPint((P)1));
  g_placeF1066 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1065,LITREF(lit_9));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1066);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T40 = CALL1(1,VARREF(Ylst),g_placeF1066);
  T42 = BOXVAL(valueF1058);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,LITREF(lit_9));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_9));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T33,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_71),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P return_;
  P tmpF1082;
  P yg_placeF1081;
  P yg_declsF1080;
  P tup14F1079;
  P xg_placeF1078;
  P xg_declsF1077;
  P tup13F1076;
  P x_1111F1075;
  P x_1111F1074;
  P x_1111F1073;
  P x_1111F1072;
  P x_1111F1071;
  P yF1070;
  P xF1069;
  P x_1111F1068;
  P x_1112F1067;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_28,2);
  x_1112F1067 = T1;
  FUNINIT(x_1112F1067, 2,FREEREF(0),return_);
  x_1111F1068 = FREEREF(0);
  xF1069 = YPfalse;
  xF1069 = BOXFAB(xF1069);
  yF1070 = YPfalse;
  yF1070 = BOXFAB(yF1070);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F1068,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F1068,LITREF(lit_71),x_1112F1067);
    x_1111F1071 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1071,x_1112F1067);
    BOXVAL(xF1069) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F1071);
    x_1111F1072 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1072,x_1112F1067);
    BOXVAL(yF1070) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F1072);
    x_1111F1073 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1111F1073,x_1112F1067);
    x_1111F1074 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1074,x_1112F1067);
    T19 = CALL1(1,VARREF(Ytail),x_1111F1073);
    x_1111F1075 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1075,x_1112F1067);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1112F1067,LITREF(lit_5),x_1111F1068);
  }
  T24 = BOXVAL(xF1069);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup13F1076 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1076,YPint((P)0));
  xg_declsF1077 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1076,YPint((P)1));
  xg_placeF1078 = T28;
  T31 = BOXVAL(yF1070);
  T30 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T31);
  tup14F1079 = T30;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1079,YPint((P)0));
  yg_declsF1080 = T33;
  T35 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1079,YPint((P)1));
  yg_placeF1081 = T35;
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF1082 = T37;
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T44 = CALL1(1,VARREF(Ylst),tmpF1082);
  T45 = CALL1(1,VARREF(Ylst),xg_placeF1078);
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_9));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF1077,yg_declsF1080,T42,LITREF(lit_9));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T49 = CALL1(1,VARREF(Ylst),xg_placeF1078);
  T50 = CALL1(1,VARREF(Ylst),yg_placeF1081);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_9));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T54 = CALL1(1,VARREF(Ylst),yg_placeF1081);
  T55 = CALL1(1,VARREF(Ylst),tmpF1082);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_9));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T38 = CALL5(1,VARREF(YgooSmacrosYcat),T39,T40,T46,T51,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_76),FREEREF(0));
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
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,LITREF(lit_9));
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
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T2 = CALL1(1,VARREF(Ylst),p_);
  T3 = CALL1(1,VARREF(Ylst),t_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P return_;
  P placesF1098;
  P declsF1097;
  P psF1096;
  P tmpsF1095;
  P placesF1094;
  P x_1115F1093;
  P x_1115F1092;
  P x_1115F1091;
  P x_1115F1090;
  P x_1115F1089;
  P x_1115F1088;
  P zsF1087;
  P yF1086;
  P xF1085;
  P x_1115F1084;
  P x_1116F1083;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_31,2);
  x_1116F1083 = T1;
  FUNINIT(x_1116F1083, 2,FREEREF(0),return_);
  x_1115F1084 = FREEREF(0);
  xF1085 = YPfalse;
  xF1085 = BOXFAB(xF1085);
  yF1086 = YPfalse;
  yF1086 = BOXFAB(yF1086);
  zsF1087 = YPfalse;
  zsF1087 = BOXFAB(zsF1087);
  T9 = CALL2(1,VARREF(YisaQ),x_1115F1084,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F1084,LITREF(lit_76),x_1116F1083);
    x_1115F1088 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1088,x_1116F1083);
    BOXVAL(xF1085) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1115F1088);
    x_1115F1089 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1089,x_1116F1083);
    BOXVAL(yF1086) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1115F1089);
    x_1115F1090 = T17;
    BOXVAL(zsF1087) = x_1115F1090;
    x_1115F1091 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1115F1091,x_1116F1083);
    x_1115F1092 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1092,x_1116F1083);
    T22 = CALL1(1,VARREF(Ytail),x_1115F1091);
    x_1115F1093 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1093,x_1116F1083);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1116F1083,LITREF(lit_5),x_1115F1084);
  }
  T28 = BOXVAL(xF1085);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = BOXVAL(yF1086);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T31 = BOXVAL(zsF1087);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T29,T31,LITREF(lit_9));
  placesF1094 = T26;
  T34 = fun_32;
  T33 = CALL2(1,VARREF(YgooSmacrosYmap),T34,placesF1094);
  tmpsF1095 = T33;
  T36 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF1094);
  psF1096 = T36;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF1096);
  declsF1097 = T38;
  T40 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF1096);
  placesF1098 = T40;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T45 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF1097);
  T47 = fun_33;
  T46 = CALL3(1,VARREF(YgooSmacrosYmap2),T47,tmpsF1095,placesF1098);
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T46,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T49 = fun_34;
  T50 = CALL1(1,VARREF(Ytail),tmpsF1095);
  T48 = CALL3(1,VARREF(YgooSmacrosYmap2),T49,placesF1098,T50);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T55 = CALL1(1,VARREF(YgooSmacrosYlast),placesF1098);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T57 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF1095);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T56,LITREF(lit_9));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T41 = CALL5(1,VARREF(YgooSmacrosYcat),T42,T43,T48,T51,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_84),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P valF1110;
  P new_colF1109;
  P g_placeF1108;
  P g_declsF1107;
  P tup16F1106;
  P x_1119F1105;
  P x_1119F1104;
  P x_1119F1103;
  P x_1119F1102;
  P placeF1101;
  P x_1119F1100;
  P x_1120F1099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_37,2);
  x_1120F1099 = T1;
  FUNINIT(x_1120F1099, 2,FREEREF(0),return_);
  x_1119F1100 = FREEREF(0);
  placeF1101 = YPfalse;
  placeF1101 = BOXFAB(placeF1101);
  T5 = CALL2(1,VARREF(YisaQ),x_1119F1100,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F1100,LITREF(lit_84),x_1120F1099);
    x_1119F1102 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F1102,x_1120F1099);
    BOXVAL(placeF1101) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1119F1102);
    x_1119F1103 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1119F1103,x_1120F1099);
    x_1119F1104 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1104,x_1120F1099);
    T14 = CALL1(1,VARREF(Ytail),x_1119F1103);
    x_1119F1105 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1105,x_1120F1099);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1120F1099,LITREF(lit_5),x_1119F1100);
  }
  T19 = BOXVAL(placeF1101);
  T18 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T19);
  tup16F1106 = T18;
  T21 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1106,YPint((P)0));
  g_declsF1107 = T21;
  T23 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1106,YPint((P)1));
  g_placeF1108 = T23;
  T25 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF1109 = T25;
  T27 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF1110 = T27;
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T37 = CALL1(1,VARREF(Ylst),new_colF1109);
  T38 = CALL1(1,VARREF(Ylst),valF1110);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_9));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T42 = CALL1(1,VARREF(Ylst),g_placeF1108);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_9));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T39,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1107,T32,LITREF(lit_9));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T46 = CALL1(1,VARREF(Ylst),g_placeF1108);
  T47 = CALL1(1,VARREF(Ylst),new_colF1109);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T48 = CALL1(1,VARREF(Ylst),valF1110);
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T43,T48,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_91),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P return_;
  P g_placeF1122;
  P g_declsF1121;
  P tup18F1120;
  P x_1123F1119;
  P x_1123F1118;
  P x_1123F1117;
  P x_1123F1116;
  P x_1123F1115;
  P callF1114;
  P placeF1113;
  P x_1123F1112;
  P x_1124F1111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_40,2);
  x_1124F1111 = T1;
  FUNINIT(x_1124F1111, 2,FREEREF(0),return_);
  x_1123F1112 = FREEREF(0);
  placeF1113 = YPfalse;
  placeF1113 = BOXFAB(placeF1113);
  callF1114 = YPfalse;
  callF1114 = BOXFAB(callF1114);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F1112,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F1112,LITREF(lit_91),x_1124F1111);
    x_1123F1115 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1115,x_1124F1111);
    BOXVAL(placeF1113) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F1115);
    x_1123F1116 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1116,x_1124F1111);
    BOXVAL(callF1114) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1123F1116);
    x_1123F1117 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1123F1117,x_1124F1111);
    x_1123F1118 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1118,x_1124F1111);
    T19 = CALL1(1,VARREF(Ytail),x_1123F1117);
    x_1123F1119 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1119,x_1124F1111);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1124F1111,LITREF(lit_5),x_1123F1112);
  }
  T24 = BOXVAL(placeF1113);
  T23 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T24);
  tup18F1120 = T23;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1120,YPint((P)0));
  g_declsF1121 = T26;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1120,YPint((P)1));
  g_placeF1122 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1122);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_9));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1121,T33,LITREF(lit_9));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T40 = CALL1(1,VARREF(Ylst),g_placeF1122);
  T42 = BOXVAL(callF1114);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,LITREF(lit_9));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T37,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_97),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P return_;
  P x_1127F1131;
  P x_1127F1130;
  P x_1127F1129;
  P x_1127F1128;
  P x_1127F1127;
  P bodyF1126;
  P testF1125;
  P x_1127F1124;
  P x_1128F1123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_43,2);
  x_1128F1123 = T1;
  FUNINIT(x_1128F1123, 2,FREEREF(0),return_);
  x_1127F1124 = FREEREF(0);
  testF1125 = YPfalse;
  testF1125 = BOXFAB(testF1125);
  bodyF1126 = YPfalse;
  bodyF1126 = BOXFAB(bodyF1126);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F1124,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F1124,LITREF(lit_97),x_1128F1123);
    x_1127F1127 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1127,x_1128F1123);
    BOXVAL(testF1125) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F1127);
    x_1127F1128 = T12;
    BOXVAL(bodyF1126) = x_1127F1128;
    x_1127F1129 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1127F1129,x_1128F1123);
    x_1127F1130 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1130,x_1128F1123);
    T17 = CALL1(1,VARREF(Ytail),x_1127F1129);
    x_1127F1131 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1131,x_1128F1123);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1128F1123,LITREF(lit_5),x_1127F1124);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T26 = BOXVAL(testF1125);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T30 = BOXVAL(bodyF1126);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_9));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T27,LITREF(lit_9));
  T5 = T20;
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_104),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1131F1140;
  P x_1131F1139;
  P x_1131F1138;
  P x_1131F1137;
  P x_1131F1136;
  P bodyF1135;
  P testF1134;
  P x_1131F1133;
  P x_1132F1132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1132_46,2);
  x_1132F1132 = T1;
  FUNINIT(x_1132F1132, 2,FREEREF(0),return_);
  x_1131F1133 = FREEREF(0);
  testF1134 = YPfalse;
  testF1134 = BOXFAB(testF1134);
  bodyF1135 = YPfalse;
  bodyF1135 = BOXFAB(bodyF1135);
  T7 = CALL2(1,VARREF(YisaQ),x_1131F1133,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F1133,LITREF(lit_104),x_1132F1132);
    x_1131F1136 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F1136,x_1132F1132);
    BOXVAL(testF1134) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1131F1136);
    x_1131F1137 = T12;
    BOXVAL(bodyF1135) = x_1131F1137;
    x_1131F1138 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1131F1138,x_1132F1132);
    x_1131F1139 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1139,x_1132F1132);
    T17 = CALL1(1,VARREF(Ytail),x_1131F1138);
    x_1131F1140 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1140,x_1132F1132);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1132F1132,LITREF(lit_5),x_1131F1133);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T23 = BOXVAL(testF1134);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T27 = BOXVAL(bodyF1135);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T24,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_109),FREEREF(0));
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
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_9));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_9));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T18 = BOXVAL(FREEREF(1));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_9));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,LITREF(lit_9));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,LITREF(lit_9));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1143F1142;
  P x_1144F1141;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1144_51,3);
  x_1144F1141 = T1;
  FUNINIT(x_1144F1141, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1143F1142 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1143F1142,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1142,x_1144F1141);
  } else {
    T6 = CALL2(1,x_1144F1141,LITREF(lit_5),x_1143F1142);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1141F1150;
  P x_1141F1149;
  P x_1141F1148;
  P x_1141F1147;
  P restF1146;
  P xF1145;
  P x_1141F1144;
  P x_1142F1143;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1142_50,1);
  x_1142F1143 = T1;
  FUNINIT(x_1142F1143, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1141F1144 = T3;
  xF1145 = YPfalse;
  xF1145 = BOXFAB(xF1145);
  restF1146 = YPfalse;
  restF1146 = BOXFAB(restF1146);
  T8 = CALL2(1,VARREF(YisaQ),x_1141F1144,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1141F1144,x_1142F1143);
    BOXVAL(xF1145) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1141F1144);
    x_1141F1147 = T11;
    BOXVAL(restF1146) = x_1141F1147;
    x_1141F1148 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1141F1148,x_1142F1143);
    x_1141F1149 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1141F1149,x_1142F1143);
    T16 = CALL1(1,VARREF(Ytail),x_1141F1148);
    x_1141F1150 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1141F1150,x_1142F1143);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1142F1143,LITREF(lit_5),x_1141F1144);
  }
  T20 = FUNFAB(fun_52,2,xF1145,restF1146);
  T19 = with_exit(T20);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1139F1157;
  P x_1139F1156;
  P x_1139F1155;
  P x_1139F1154;
  P restF1153;
  P x_1139F1152;
  P x_1140F1151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_49,2);
  x_1140F1151 = T1;
  FUNINIT(x_1140F1151, 2,FREEREF(0),return_);
  x_1139F1152 = FREEREF(0);
  restF1153 = YPfalse;
  restF1153 = BOXFAB(restF1153);
  T5 = CALL2(1,VARREF(YisaQ),x_1139F1152,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1139F1152,LITREF(lit_109),x_1140F1151);
    x_1139F1154 = T7;
    BOXVAL(restF1153) = x_1139F1154;
    x_1139F1155 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1139F1155,x_1140F1151);
    x_1139F1156 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F1156,x_1140F1151);
    T12 = CALL1(1,VARREF(Ytail),x_1139F1155);
    x_1139F1157 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F1157,x_1140F1151);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1140F1151,LITREF(lit_5),x_1139F1152);
  }
  T16 = FUNFAB(fun_53,1,restF1153);
  T15 = with_exit(T16);
  T3 = T15;
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_11),FREEREF(0));
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
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_9));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_9));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T17 = BOXVAL(FREEREF(1));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_9));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T18,LITREF(lit_9));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,LITREF(lit_9));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1155F1159;
  P x_1156F1158;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1156_58,3);
  x_1156F1158 = T1;
  FUNINIT(x_1156F1158, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1155F1159 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1155F1159,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1159,x_1156F1158);
  } else {
    T6 = CALL2(1,x_1156F1158,LITREF(lit_5),x_1155F1159);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1153F1167;
  P x_1153F1166;
  P x_1153F1165;
  P x_1153F1164;
  P restF1163;
  P xF1162;
  P x_1153F1161;
  P x_1154F1160;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1154_57,1);
  x_1154F1160 = T1;
  FUNINIT(x_1154F1160, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1153F1161 = T3;
  xF1162 = YPfalse;
  xF1162 = BOXFAB(xF1162);
  restF1163 = YPfalse;
  restF1163 = BOXFAB(restF1163);
  T8 = CALL2(1,VARREF(YisaQ),x_1153F1161,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1153F1161,x_1154F1160);
    BOXVAL(xF1162) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1153F1161);
    x_1153F1164 = T11;
    BOXVAL(restF1163) = x_1153F1164;
    x_1153F1165 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1153F1165,x_1154F1160);
    x_1153F1166 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1153F1166,x_1154F1160);
    T16 = CALL1(1,VARREF(Ytail),x_1153F1165);
    x_1153F1167 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1153F1167,x_1154F1160);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1154F1160,LITREF(lit_5),x_1153F1161);
  }
  T20 = FUNFAB(fun_59,2,xF1162,restF1163);
  T19 = with_exit(T20);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1151F1174;
  P x_1151F1173;
  P x_1151F1172;
  P x_1151F1171;
  P restF1170;
  P x_1151F1169;
  P x_1152F1168;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_56,2);
  x_1152F1168 = T1;
  FUNINIT(x_1152F1168, 2,FREEREF(0),return_);
  x_1151F1169 = FREEREF(0);
  restF1170 = YPfalse;
  restF1170 = BOXFAB(restF1170);
  T5 = CALL2(1,VARREF(YisaQ),x_1151F1169,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1151F1169,LITREF(lit_11),x_1152F1168);
    x_1151F1171 = T7;
    BOXVAL(restF1170) = x_1151F1171;
    x_1151F1172 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1151F1172,x_1152F1168);
    x_1151F1173 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F1173,x_1152F1168);
    T12 = CALL1(1,VARREF(Ytail),x_1151F1172);
    x_1151F1174 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F1174,x_1152F1168);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1152F1168,LITREF(lit_5),x_1151F1169);
  }
  T16 = FUNFAB(fun_60,1,restF1170);
  T15 = with_exit(T16);
  T3 = T15;
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_131),FREEREF(0));
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
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_135),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1163F1182;
  P x_1163F1181;
  P x_1163F1180;
  P x_1163F1179;
  P bodyF1178;
  P condF1177;
  P x_1163F1176;
  P x_1164F1175;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1164_64,2);
  x_1164F1175 = T1;
  FUNINIT(x_1164F1175, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1163F1176 = T3;
  condF1177 = YPfalse;
  condF1177 = BOXFAB(condF1177);
  bodyF1178 = YPfalse;
  bodyF1178 = BOXFAB(bodyF1178);
  T9 = CALL2(1,VARREF(YisaQ),x_1163F1176,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F1176,x_1164F1175);
    BOXVAL(condF1177) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1163F1176);
    x_1163F1179 = T12;
    BOXVAL(bodyF1178) = x_1163F1179;
    x_1163F1180 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1163F1180,x_1164F1175);
    x_1163F1181 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1163F1181,x_1164F1175);
    T17 = CALL1(1,VARREF(Ytail),x_1163F1180);
    x_1163F1182 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1163F1182,x_1164F1175);
    T14 = T18;
    T13 = T14;
    T10 = T13;
  } else {
    T19 = CALL2(1,x_1164F1175,LITREF(lit_5),x_1163F1176);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T23 = BOXVAL(condF1177);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T27 = BOXVAL(bodyF1178);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T32 = BOXVAL(FREEREF(0));
  T31 = CALL1(1,VARREF(Ytail),T32);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T24,T28,LITREF(lit_9));
  T7 = T20;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P x_1161F1189;
  P x_1161F1188;
  P x_1161F1187;
  P x_1161F1186;
  P casesF1185;
  P x_1161F1184;
  P x_1162F1183;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1162_63,2);
  x_1162F1183 = T1;
  FUNINIT(x_1162F1183, 2,FREEREF(0),return_);
  x_1161F1184 = FREEREF(0);
  casesF1185 = YPfalse;
  casesF1185 = BOXFAB(casesF1185);
  T5 = CALL2(1,VARREF(YisaQ),x_1161F1184,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1161F1184,LITREF(lit_131),x_1162F1183);
    x_1161F1186 = T7;
    BOXVAL(casesF1185) = x_1161F1186;
    x_1161F1187 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1161F1187,x_1162F1183);
    x_1161F1188 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F1188,x_1162F1183);
    T12 = CALL1(1,VARREF(Ytail),x_1161F1187);
    x_1161F1189 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F1189,x_1162F1183);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1162F1183,LITREF(lit_5),x_1161F1184);
  }
  T17 = BOXVAL(casesF1185);
  T16 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T17);
  if (T16 != YPfalse) {
    T15 = YPfalse;
  } else {
    T19 = FUNFAB(fun_65,1,casesF1185);
    T18 = with_exit(T19);
    T15 = T18;
  }
  T3 = T15;
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
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_141),T2);
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
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_145),T2);
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
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1171F1195;
  P x_1171F1194;
  P x_1171F1193;
  P valuesF1192;
  P x_1171F1191;
  P x_1172F1190;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_69,2);
  x_1172F1190 = T1;
  FUNINIT(x_1172F1190, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1171F1191 = T3;
  valuesF1192 = YPfalse;
  valuesF1192 = BOXFAB(valuesF1192);
  T6 = CALL2(1,VARREF(YisaQ),x_1171F1191,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF1192) = x_1171F1191;
    x_1171F1193 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1171F1193,x_1172F1190);
    x_1171F1194 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F1194,x_1172F1190);
    T11 = CALL1(1,VARREF(Ytail),x_1171F1193);
    x_1171F1195 = T11;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F1195,x_1172F1190);
    T8 = T12;
    T7 = T8;
  } else {
    T13 = CALL2(1,x_1172F1190,LITREF(lit_5),x_1171F1191);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T20 = FUNFAB(fun_70,2,FREEREF(2),FREEREF(3));
  T21 = BOXVAL(valuesF1192);
  T19 = CALL2(1,VARREF(YgooSmacrosYmap),T20,T21);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_9));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T25 = BOXVAL(FREEREF(4));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T28 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T27 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),FREEREF(3),FREEREF(2),T28);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T14 = CALL5(1,VARREF(YgooSmacrosYcat),T15,T16,T22,T26,LITREF(lit_9));
  T4 = T14;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P return_;
  P x_1169F1203;
  P x_1169F1202;
  P x_1169F1201;
  P x_1169F1200;
  P bodyF1199;
  P condF1198;
  P x_1169F1197;
  P x_1170F1196;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_68,2);
  x_1170F1196 = T1;
  FUNINIT(x_1170F1196, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1169F1197 = T3;
  condF1198 = YPfalse;
  condF1198 = BOXFAB(condF1198);
  bodyF1199 = YPfalse;
  bodyF1199 = BOXFAB(bodyF1199);
  T8 = CALL2(1,VARREF(YisaQ),x_1169F1197,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1169F1197,x_1170F1196);
    BOXVAL(condF1198) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1169F1197);
    x_1169F1200 = T11;
    BOXVAL(bodyF1199) = x_1169F1200;
    x_1169F1201 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1169F1201,x_1170F1196);
    x_1169F1202 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F1202,x_1170F1196);
    T16 = CALL1(1,VARREF(Ytail),x_1169F1201);
    x_1169F1203 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F1203,x_1170F1196);
    T13 = T17;
    T12 = T13;
    T9 = T12;
  } else {
    T18 = CALL2(1,x_1170F1196,LITREF(lit_5),x_1169F1197);
  }
  T21 = BOXVAL(condF1198);
  T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,YPtrue);
  if (T20 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T24 = BOXVAL(bodyF1199);
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_9));
    T19 = T22;
  } else {
    T26 = FUNFAB(fun_71,5,FREEREF(0),condF1198,FREEREF(1),FREEREF(2),bodyF1199);
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_151),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P tst_varF1216;
  P val_varF1215;
  P x_1175F1214;
  P x_1175F1213;
  P x_1175F1212;
  P x_1175F1211;
  P x_1175F1210;
  P x_1175F1209;
  P casesF1208;
  P tstF1207;
  P valF1206;
  P x_1175F1205;
  P x_1176F1204;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_74,2);
  x_1176F1204 = T1;
  FUNINIT(x_1176F1204, 2,FREEREF(0),return_);
  x_1175F1205 = FREEREF(0);
  valF1206 = YPfalse;
  valF1206 = BOXFAB(valF1206);
  tstF1207 = YPfalse;
  tstF1207 = BOXFAB(tstF1207);
  casesF1208 = YPfalse;
  casesF1208 = BOXFAB(casesF1208);
  T9 = CALL2(1,VARREF(YisaQ),x_1175F1205,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1175F1205,LITREF(lit_151),x_1176F1204);
    x_1175F1209 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F1209,x_1176F1204);
    BOXVAL(valF1206) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1175F1209);
    x_1175F1210 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F1210,x_1176F1204);
    BOXVAL(tstF1207) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1175F1210);
    x_1175F1211 = T17;
    BOXVAL(casesF1208) = x_1175F1211;
    x_1175F1212 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1175F1212,x_1176F1204);
    x_1175F1213 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1213,x_1176F1204);
    T22 = CALL1(1,VARREF(Ytail),x_1175F1212);
    x_1175F1214 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1214,x_1176F1204);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1176F1204,LITREF(lit_5),x_1175F1205);
  }
  T26 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF1215 = T26;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF1216 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T35 = CALL1(1,VARREF(Ylst),val_varF1215);
  T37 = BOXVAL(valF1206);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_9));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = CALL1(1,VARREF(Ylst),tst_varF1216);
  T42 = BOXVAL(tstF1207);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,LITREF(lit_9));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T38,LITREF(lit_9));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T45 = BOXVAL(casesF1208);
  T44 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF1215,tst_varF1216,T45);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T43,LITREF(lit_9));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_156),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1179F1225;
  P x_1179F1224;
  P x_1179F1223;
  P x_1179F1222;
  P x_1179F1221;
  P casesF1220;
  P valF1219;
  P x_1179F1218;
  P x_1180F1217;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_77,2);
  x_1180F1217 = T1;
  FUNINIT(x_1180F1217, 2,FREEREF(0),return_);
  x_1179F1218 = FREEREF(0);
  valF1219 = YPfalse;
  valF1219 = BOXFAB(valF1219);
  casesF1220 = YPfalse;
  casesF1220 = BOXFAB(casesF1220);
  T7 = CALL2(1,VARREF(YisaQ),x_1179F1218,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F1218,LITREF(lit_156),x_1180F1217);
    x_1179F1221 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1221,x_1180F1217);
    BOXVAL(valF1219) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1179F1221);
    x_1179F1222 = T12;
    BOXVAL(casesF1220) = x_1179F1222;
    x_1179F1223 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1179F1223,x_1180F1217);
    x_1179F1224 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1224,x_1180F1217);
    T17 = CALL1(1,VARREF(Ytail),x_1179F1223);
    x_1179F1225 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1225,x_1180F1217);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1180F1217,LITREF(lit_5),x_1179F1218);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(valF1219);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T25 = BOXVAL(casesF1220);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T24,T25,LITREF(lit_9));
  T5 = T20;
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

FUNCODEDEF(fun_x_1188_80) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_162),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1192_81) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_169));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P return_;
  P varF1240;
  P x_1191F1239;
  P x_1191F1238;
  P x_1191F1237;
  P x_1191F1236;
  P x_1191F1235;
  P x_1191F1234;
  P x_1191F1233;
  P x_1191F1232;
  P x_1191F1231;
  P restF1230;
  P thenF1229;
  P patF1228;
  P x_1191F1227;
  P x_1192F1226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_81,1);
  x_1192F1226 = T1;
  FUNINIT(x_1192F1226, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1191F1227 = T3;
  patF1228 = YPfalse;
  patF1228 = BOXFAB(patF1228);
  thenF1229 = YPfalse;
  thenF1229 = BOXFAB(thenF1229);
  restF1230 = YPfalse;
  restF1230 = BOXFAB(restF1230);
  T10 = CALL2(1,VARREF(YisaQ),x_1191F1227,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1227,x_1192F1226);
    x_1191F1231 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F1231,x_1192F1226);
    BOXVAL(patF1228) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1191F1231);
    x_1191F1232 = T15;
    BOXVAL(thenF1229) = x_1191F1232;
    x_1191F1233 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1233,x_1192F1226);
    x_1191F1234 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1234,x_1192F1226);
    T20 = CALL1(1,VARREF(Ytail),x_1191F1233);
    x_1191F1235 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1235,x_1192F1226);
    T17 = T21;
    T16 = T17;
    T13 = T16;
    T22 = CALL1(1,VARREF(Ytail),x_1191F1227);
    x_1191F1236 = T22;
    BOXVAL(restF1230) = x_1191F1236;
    x_1191F1237 = Ynil;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F1237,x_1192F1226);
    x_1191F1238 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1238,x_1192F1226);
    T27 = CALL1(1,VARREF(Ytail),x_1191F1237);
    x_1191F1239 = T27;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1239,x_1192F1226);
    T24 = T28;
    T23 = T24;
    T11 = T23;
  } else {
    T29 = CALL2(1,x_1192F1226,LITREF(lit_5),x_1191F1227);
  }
  T32 = BOXVAL(patF1228);
  T31 = CALL2(1,VARREF(YgooSmacrosYEE),T32,YPtrue);
  if (T31 != YPfalse) {
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T35 = BOXVAL(thenF1229);
    T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_9));
    T30 = T33;
  } else {
    T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF1240 = T37;
    T39 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
    T44 = CALL1(1,VARREF(Ylst),varF1240);
    T46 = BOXVAL(FREEREF(1));
    T45 = CALL1(1,VARREF(Ylst),T46);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_9));
    T42 = CALL1(1,VARREF(Ylst),T43);
    T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,LITREF(lit_9));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_170));
    T53 = BOXVAL(patF1228);
    T52 = CALL1(1,VARREF(Ylst),T53);
    T54 = CALL1(1,VARREF(Ylst),varF1240);
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,LITREF(lit_9));
    T50 = CALL1(1,VARREF(Ylst),T51);
    T57 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T58 = BOXVAL(thenF1229);
    T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,LITREF(lit_9));
    T55 = CALL1(1,VARREF(Ylst),T56);
    T61 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
    T62 = CALL1(1,VARREF(Ylst),varF1240);
    T63 = BOXVAL(restF1230);
    T60 = CALL4(1,VARREF(YgooSmacrosYcat),T61,T62,T63,LITREF(lit_9));
    T59 = CALL1(1,VARREF(Ylst),T60);
    T48 = CALL5(1,VARREF(YgooSmacrosYcat),T49,T50,T55,T59,LITREF(lit_9));
    T47 = CALL1(1,VARREF(Ylst),T48);
    T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T47,LITREF(lit_9));
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

FUNCODEDEF(fun_x_1190_83) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_82,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P return_;
  P x_1189F1242;
  P x_1190F1241;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1190_83,3);
  x_1190F1241 = T1;
  FUNINIT(x_1190F1241, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1189F1242 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1189F1242,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1189F1242,x_1190F1241);
  } else {
    T6 = CALL2(1,x_1190F1241,LITREF(lit_5),x_1189F1242);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_9));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P return_;
  P x_1187F1251;
  P x_1187F1250;
  P x_1187F1249;
  P x_1187F1248;
  P x_1187F1247;
  P casesF1246;
  P expF1245;
  P x_1187F1244;
  P x_1188F1243;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_80,2);
  x_1188F1243 = T1;
  FUNINIT(x_1188F1243, 2,FREEREF(0),return_);
  x_1187F1244 = FREEREF(0);
  expF1245 = YPfalse;
  expF1245 = BOXFAB(expF1245);
  casesF1246 = YPfalse;
  casesF1246 = BOXFAB(casesF1246);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F1244,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F1244,LITREF(lit_162),x_1188F1243);
    x_1187F1247 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F1247,x_1188F1243);
    BOXVAL(expF1245) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F1247);
    x_1187F1248 = T12;
    BOXVAL(casesF1246) = x_1187F1248;
    x_1187F1249 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1187F1249,x_1188F1243);
    x_1187F1250 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F1250,x_1188F1243);
    T17 = CALL1(1,VARREF(Ytail),x_1187F1249);
    x_1187F1251 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F1251,x_1188F1243);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1188F1243,LITREF(lit_5),x_1187F1244);
  }
  T21 = FUNFAB(fun_84,2,casesF1246,expF1245);
  T20 = with_exit(T21);
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_85,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1196_87) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_177),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P return_;
  P x_1195F1262;
  P x_1195F1261;
  P x_1195F1260;
  P x_1195F1259;
  P x_1195F1258;
  P x_1195F1257;
  P argsF1256;
  P messageF1255;
  P condF1254;
  P x_1195F1253;
  P x_1196F1252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_87,2);
  x_1196F1252 = T1;
  FUNINIT(x_1196F1252, 2,FREEREF(0),return_);
  x_1195F1253 = FREEREF(0);
  condF1254 = YPfalse;
  condF1254 = BOXFAB(condF1254);
  messageF1255 = YPfalse;
  messageF1255 = BOXFAB(messageF1255);
  argsF1256 = YPfalse;
  argsF1256 = BOXFAB(argsF1256);
  T9 = CALL2(1,VARREF(YisaQ),x_1195F1253,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1195F1253,LITREF(lit_177),x_1196F1252);
    x_1195F1257 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1257,x_1196F1252);
    BOXVAL(condF1254) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1195F1257);
    x_1195F1258 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1258,x_1196F1252);
    BOXVAL(messageF1255) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1195F1258);
    x_1195F1259 = T17;
    BOXVAL(argsF1256) = x_1195F1259;
    x_1195F1260 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1260,x_1196F1252);
    x_1195F1261 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1261,x_1196F1252);
    T22 = CALL1(1,VARREF(Ytail),x_1195F1260);
    x_1195F1262 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1262,x_1196F1252);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1196F1252,LITREF(lit_5),x_1195F1253);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T31 = BOXVAL(condF1254);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_9));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_178));
  T36 = BOXVAL(messageF1255);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T37 = BOXVAL(argsF1256);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T37,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T32,LITREF(lit_9));
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_88,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1204_90) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_183),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1206_91) {
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

FUNCODEDEF(fun_x_1208_92) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_9));
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,LITREF(lit_9));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P return_;
  P x_1207F1271;
  P x_1207F1270;
  P x_1207F1269;
  P x_1207F1268;
  P x_1207F1267;
  P valF1266;
  P keyF1265;
  P x_1207F1264;
  P x_1208F1263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_92,3);
  x_1208F1263 = T1;
  FUNINIT(x_1208F1263, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1207F1264 = T3;
  keyF1265 = YPfalse;
  keyF1265 = BOXFAB(keyF1265);
  valF1266 = YPfalse;
  valF1266 = BOXFAB(valF1266);
  T8 = CALL2(1,VARREF(YisaQ),x_1207F1264,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F1264,LITREF(lit_85),x_1208F1263);
    x_1207F1267 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F1267,x_1208F1263);
    BOXVAL(keyF1265) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1207F1267);
    x_1207F1268 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F1268,x_1208F1263);
    BOXVAL(valF1266) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1207F1268);
    x_1207F1269 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1269,x_1208F1263);
    x_1207F1270 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1270,x_1208F1263);
    T20 = CALL1(1,VARREF(Ytail),x_1207F1269);
    x_1207F1271 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1271,x_1208F1263);
    T17 = T21;
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T22 = CALL2(1,x_1208F1263,LITREF(lit_5),x_1207F1264);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T28 = BOXVAL(keyF1265);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = BOXVAL(valF1266);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T29,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T37 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_9));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T41 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,LITREF(lit_9));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T38,LITREF(lit_9));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T31,LITREF(lit_9));
  T6 = T23;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P stateF1280;
  P x_1205F1279;
  P x_1205F1278;
  P x_1205F1277;
  P x_1205F1276;
  P expF1275;
  P varF1274;
  P x_1205F1273;
  P x_1206F1272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_91,1);
  x_1206F1272 = T1;
  FUNINIT(x_1206F1272, 1,return_);
  x_1205F1273 = FREEREF(0);
  varF1274 = YPfalse;
  varF1274 = BOXFAB(varF1274);
  expF1275 = YPfalse;
  expF1275 = BOXFAB(expF1275);
  T7 = CALL2(1,VARREF(YisaQ),x_1205F1273,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F1273,x_1206F1272);
    BOXVAL(varF1274) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1205F1273);
    x_1205F1276 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F1276,x_1206F1272);
    BOXVAL(expF1275) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1205F1276);
    x_1205F1277 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1205F1277,x_1206F1272);
    x_1205F1278 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1205F1278,x_1206F1272);
    T17 = CALL1(1,VARREF(Ytail),x_1205F1277);
    x_1205F1279 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1205F1279,x_1206F1272);
    T14 = T18;
    T11 = T14;
    T8 = T11;
  } else {
    T19 = CALL2(1,x_1206F1272,LITREF(lit_5),x_1205F1273);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF1280 = T21;
  T23 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T26 = CALL1(1,VARREF(Ylst),stateF1280);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T31 = BOXVAL(expF1275);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_9));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_9));
  T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,FREEREF(2));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T35 = CALL1(1,VARREF(Ylst),stateF1280);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_9));
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(3));
  T38 = FUNFAB(fun_93,2,varF1274,stateF1280);
  T37 = with_exit(T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYpair),T37,FREEREF(4));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T42 = CALL1(1,VARREF(Ylst),stateF1280);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_9));
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

FUNCODEDEF(fun_grok_95) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF1282;
  P loopF1281;
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
    loopF1281 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_186));
    T6 = CALL1(1,VARREF(Ylst),loopF1281);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,LITREF(lit_9));
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF1281);
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,nexts_,LITREF(lit_9));
    T19 = CALL1(1,VARREF(Ylst),T20);
    T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,LITREF(lit_9));
    T14 = CALL1(1,VARREF(Ylst),T15);
    T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T14,LITREF(lit_9));
    T8 = CALL1(1,VARREF(Ylst),T9);
    T4 = CALL5(1,VARREF(YgooSmacrosYcat),T5,T6,T7,T8,LITREF(lit_9));
    T2 = T4;
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF1282 = T23;
    T25 = FUNFAB(fun_94,7,clauseF1282,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  P return_;
  P grokF1296;
  P x_1203F1295;
  P x_1203F1294;
  P x_1203F1293;
  P x_1203F1292;
  P x_1203F1291;
  P x_1203F1290;
  P x_1203F1289;
  P x_1203F1288;
  P x_1203F1287;
  P bodyF1286;
  P clausesF1285;
  P x_1203F1284;
  P x_1204F1283;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_90,2);
  x_1204F1283 = T1;
  FUNINIT(x_1204F1283, 2,FREEREF(0),return_);
  x_1203F1284 = FREEREF(0);
  clausesF1285 = YPfalse;
  clausesF1285 = BOXFAB(clausesF1285);
  bodyF1286 = YPfalse;
  bodyF1286 = BOXFAB(bodyF1286);
  T7 = CALL2(1,VARREF(YisaQ),x_1203F1284,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1203F1284,LITREF(lit_183),x_1204F1283);
    x_1203F1287 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F1287,x_1204F1283);
    x_1203F1288 = T11;
    BOXVAL(clausesF1285) = x_1203F1288;
    x_1203F1289 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F1289,x_1204F1283);
    x_1203F1290 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1290,x_1204F1283);
    T16 = CALL1(1,VARREF(Ytail),x_1203F1289);
    x_1203F1291 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1291,x_1204F1283);
    T13 = T17;
    T12 = T13;
    T18 = CALL1(1,VARREF(Ytail),x_1203F1287);
    x_1203F1292 = T18;
    BOXVAL(bodyF1286) = x_1203F1292;
    x_1203F1293 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F1293,x_1204F1283);
    x_1203F1294 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1294,x_1204F1283);
    T23 = CALL1(1,VARREF(Ytail),x_1203F1293);
    x_1203F1295 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1295,x_1204F1283);
    T20 = T24;
    T19 = T20;
    T10 = T19;
    T8 = T10;
  } else {
    T25 = CALL2(1,x_1204F1283,LITREF(lit_5),x_1203F1284);
  }
  T27 = FUNSHELL(1,fun_grok_95,2);
  grokF1296 = T27;
  FUNINIT(grokF1296, 2,bodyF1286,grokF1296);
  T29 = BOXVAL(clausesF1285);
  T28 = CALL5(0,grokF1296,T29,Ynil,Ynil,Ynil,Ynil);
  T26 = T28;
  T5 = T26;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_96,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1212_98) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_202),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P x_1211F1305;
  P x_1211F1304;
  P x_1211F1303;
  P x_1211F1302;
  P x_1211F1301;
  P bodyF1300;
  P testF1299;
  P x_1211F1298;
  P x_1212F1297;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_98,2);
  x_1212F1297 = T1;
  FUNINIT(x_1212F1297, 2,FREEREF(0),return_);
  x_1211F1298 = FREEREF(0);
  testF1299 = YPfalse;
  testF1299 = BOXFAB(testF1299);
  bodyF1300 = YPfalse;
  bodyF1300 = BOXFAB(bodyF1300);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F1298,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F1298,LITREF(lit_202),x_1212F1297);
    x_1211F1301 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1301,x_1212F1297);
    BOXVAL(testF1299) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1211F1301);
    x_1211F1302 = T12;
    BOXVAL(bodyF1300) = x_1211F1302;
    x_1211F1303 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F1303,x_1212F1297);
    x_1211F1304 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1304,x_1212F1297);
    T17 = CALL1(1,VARREF(Ytail),x_1211F1303);
    x_1211F1305 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1305,x_1212F1297);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1212F1297,LITREF(lit_5),x_1211F1298);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_186));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T23 = CALL1(1,VARREF(Ylst),Ynil);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_104));
  T28 = BOXVAL(testF1299);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T29 = BOXVAL(bodyF1300);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,LITREF(lit_9));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T29,T30,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T23,T24,LITREF(lit_9));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_99,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1216_101) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_208),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  P return_;
  P x_1215F1314;
  P x_1215F1313;
  P x_1215F1312;
  P x_1215F1311;
  P x_1215F1310;
  P bodyF1309;
  P testF1308;
  P x_1215F1307;
  P x_1216F1306;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_101,2);
  x_1216F1306 = T1;
  FUNINIT(x_1216F1306, 2,FREEREF(0),return_);
  x_1215F1307 = FREEREF(0);
  testF1308 = YPfalse;
  testF1308 = BOXFAB(testF1308);
  bodyF1309 = YPfalse;
  bodyF1309 = BOXFAB(bodyF1309);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F1307,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F1307,LITREF(lit_208),x_1216F1306);
    x_1215F1310 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F1310,x_1216F1306);
    BOXVAL(testF1308) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1215F1310);
    x_1215F1311 = T12;
    BOXVAL(bodyF1309) = x_1215F1311;
    x_1215F1312 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F1312,x_1216F1306);
    x_1215F1313 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1313,x_1216F1306);
    T17 = CALL1(1,VARREF(Ytail),x_1215F1312);
    x_1215F1314 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1314,x_1216F1306);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1216F1306,LITREF(lit_5),x_1215F1307);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_186));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T23 = CALL1(1,VARREF(Ylst),Ynil);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T28 = BOXVAL(testF1308);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T29 = BOXVAL(bodyF1309);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,LITREF(lit_9));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T29,T30,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T23,T24,LITREF(lit_9));
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_102,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1224_104) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_213),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1228_105) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_220),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P return_;
  P old_valueF1330;
  P nameF1329;
  P x_1227F1328;
  P x_1227F1327;
  P x_1227F1326;
  P x_1227F1325;
  P x_1227F1324;
  P x_1227F1323;
  P x_1227F1322;
  P x_1227F1321;
  P x_1227F1320;
  P restF1319;
  P valueF1318;
  P varF1317;
  P x_1227F1316;
  P x_1228F1315;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_105,2);
  x_1228F1315 = T1;
  FUNINIT(x_1228F1315, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1227F1316 = T3;
  varF1317 = YPfalse;
  varF1317 = BOXFAB(varF1317);
  valueF1318 = YPfalse;
  valueF1318 = BOXFAB(valueF1318);
  restF1319 = YPfalse;
  restF1319 = BOXFAB(restF1319);
  T10 = CALL2(1,VARREF(YisaQ),x_1227F1316,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1316,x_1228F1315);
    x_1227F1320 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F1320,x_1228F1315);
    BOXVAL(varF1317) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1227F1320);
    x_1227F1321 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F1321,x_1228F1315);
    BOXVAL(valueF1318) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1227F1321);
    x_1227F1322 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1322,x_1228F1315);
    x_1227F1323 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1323,x_1228F1315);
    T22 = CALL1(1,VARREF(Ytail),x_1227F1322);
    x_1227F1324 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1324,x_1228F1315);
    T19 = T23;
    T16 = T19;
    T13 = T16;
    T24 = CALL1(1,VARREF(Ytail),x_1227F1316);
    x_1227F1325 = T24;
    BOXVAL(restF1319) = x_1227F1325;
    x_1227F1326 = Ynil;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F1326,x_1228F1315);
    x_1227F1327 = T27;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1327,x_1228F1315);
    T29 = CALL1(1,VARREF(Ytail),x_1227F1326);
    x_1227F1328 = T29;
    T30 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1328,x_1228F1315);
    T26 = T30;
    T25 = T26;
    T11 = T25;
  } else {
    T31 = CALL2(1,x_1228F1315,LITREF(lit_5),x_1227F1316);
  }
  T34 = BOXVAL(varF1317);
  T33 = CALL1(1,VARREF(YgooSmacrosYvar_name),T34);
  nameF1329 = T33;
  T36 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF1330 = T36;
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T43 = CALL1(1,VARREF(Ylst),old_valueF1330);
  T44 = CALL1(1,VARREF(Ylst),nameF1329);
  T42 = CALL3(1,VARREF(YgooSmacrosYcat),T43,T44,LITREF(lit_9));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T40 = CALL2(1,VARREF(YgooSmacrosYcat),T41,LITREF(lit_9));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_221));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T54 = CALL1(1,VARREF(Ylst),nameF1329);
  T56 = BOXVAL(valueF1318);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_9));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T62 = BOXVAL(restF1319);
  T61 = CALL2(1,VARREF(YgooSmacrosYcat),T62,LITREF(lit_9));
  T60 = CALL1(1,VARREF(Ylst),T61);
  T63 = BOXVAL(FREEREF(1));
  T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T63,LITREF(lit_9));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T57,LITREF(lit_9));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T67 = CALL1(1,VARREF(Ylst),nameF1329);
  T68 = CALL1(1,VARREF(Ylst),old_valueF1330);
  T65 = CALL4(1,VARREF(YgooSmacrosYcat),T66,T67,T68,LITREF(lit_9));
  T64 = CALL1(1,VARREF(Ylst),T65);
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T64,LITREF(lit_9));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T45,LITREF(lit_9));
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

FUNCODEDEF(fun_x_1226_107) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_106,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P return_;
  P x_1225F1332;
  P x_1226F1331;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1226_107,3);
  x_1226F1331 = T1;
  FUNINIT(x_1226F1331, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1225F1332 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1225F1332,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1225F1332,x_1226F1331);
  } else {
    T6 = CALL2(1,x_1226F1331,LITREF(lit_5),x_1225F1332);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_9));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P return_;
  P x_1223F1341;
  P x_1223F1340;
  P x_1223F1339;
  P x_1223F1338;
  P x_1223F1337;
  P bodyF1336;
  P bindingsF1335;
  P x_1223F1334;
  P x_1224F1333;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1224_104,2);
  x_1224F1333 = T1;
  FUNINIT(x_1224F1333, 2,FREEREF(0),return_);
  x_1223F1334 = FREEREF(0);
  bindingsF1335 = YPfalse;
  bindingsF1335 = BOXFAB(bindingsF1335);
  bodyF1336 = YPfalse;
  bodyF1336 = BOXFAB(bodyF1336);
  T7 = CALL2(1,VARREF(YisaQ),x_1223F1334,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1223F1334,LITREF(lit_213),x_1224F1333);
    x_1223F1337 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1223F1337,x_1224F1333);
    BOXVAL(bindingsF1335) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1223F1337);
    x_1223F1338 = T12;
    BOXVAL(bodyF1336) = x_1223F1338;
    x_1223F1339 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1223F1339,x_1224F1333);
    x_1223F1340 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F1340,x_1224F1333);
    T17 = CALL1(1,VARREF(Ytail),x_1223F1339);
    x_1223F1341 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F1341,x_1224F1333);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1224F1333,LITREF(lit_5),x_1223F1334);
  }
  T21 = FUNFAB(fun_108,2,bindingsF1335,bodyF1336);
  T20 = with_exit(T21);
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_109,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1232_111) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_226),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P return_;
  P vnamF1353;
  P typF1352;
  P namF1351;
  P x_1231F1350;
  P x_1231F1349;
  P x_1231F1348;
  P x_1231F1347;
  P x_1231F1346;
  P valueF1345;
  P varF1344;
  P x_1231F1343;
  P x_1232F1342;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_111,2);
  x_1232F1342 = T1;
  FUNINIT(x_1232F1342, 2,FREEREF(0),return_);
  x_1231F1343 = FREEREF(0);
  varF1344 = YPfalse;
  varF1344 = BOXFAB(varF1344);
  valueF1345 = YPfalse;
  valueF1345 = BOXFAB(valueF1345);
  T7 = CALL2(1,VARREF(YisaQ),x_1231F1343,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1231F1343,LITREF(lit_226),x_1232F1342);
    x_1231F1346 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1346,x_1232F1342);
    BOXVAL(varF1344) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1231F1346);
    x_1231F1347 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1347,x_1232F1342);
    BOXVAL(valueF1345) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F1347);
    x_1231F1348 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1348,x_1232F1342);
    x_1231F1349 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1349,x_1232F1342);
    T19 = CALL1(1,VARREF(Ytail),x_1231F1348);
    x_1231F1350 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1350,x_1232F1342);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1232F1342,LITREF(lit_5),x_1231F1343);
  }
  T24 = BOXVAL(varF1344);
  T23 = CALL1(1,VARREF(YgooSmacrosYvar_name),T24);
  namF1351 = T23;
  T27 = BOXVAL(varF1344);
  T26 = CALL1(1,VARREF(YgooSmacrosYvar_type),T27);
  typF1352 = T26;
  T29 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_227),namF1351,LITREF(lit_228));
  vnamF1353 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_229));
  T35 = CALL1(1,VARREF(Ylst),vnamF1353);
  T37 = BOXVAL(valueF1345);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T41 = CALL1(1,VARREF(Ylst),namF1351);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T45 = CALL1(1,VARREF(Ylst),typF1352);
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,LITREF(lit_9));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T46 = CALL1(1,VARREF(Ylst),vnamF1353);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T42,T46,LITREF(lit_9));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T51 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF1351);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T57 = CALL1(1,VARREF(Ylst),typF1352);
  T55 = CALL3(1,VARREF(YgooSmacrosYcat),T56,T57,LITREF(lit_9));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,LITREF(lit_9));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T61 = CALL1(1,VARREF(Ylst),vnamF1353);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,LITREF(lit_9));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T48 = CALL5(1,VARREF(YgooSmacrosYcat),T49,T50,T52,T58,LITREF(lit_9));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T30 = CALL5(1,VARREF(YgooSmacrosYcat),T31,T32,T38,T47,LITREF(lit_9));
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

FUNCODEDEF(fun_113) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_112,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_114) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_237),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P return_;
  P x_1235F1360;
  P x_1235F1359;
  P x_1235F1358;
  P x_1235F1357;
  P bodyF1356;
  P x_1235F1355;
  P x_1236F1354;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_114,2);
  x_1236F1354 = T1;
  FUNINIT(x_1236F1354, 2,FREEREF(0),return_);
  x_1235F1355 = FREEREF(0);
  bodyF1356 = YPfalse;
  bodyF1356 = BOXFAB(bodyF1356);
  T5 = CALL2(1,VARREF(YisaQ),x_1235F1355,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F1355,LITREF(lit_237),x_1236F1354);
    x_1235F1357 = T7;
    BOXVAL(bodyF1356) = x_1235F1357;
    x_1235F1358 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1235F1358,x_1236F1354);
    x_1235F1359 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1359,x_1236F1354);
    T12 = CALL1(1,VARREF(Ytail),x_1235F1358);
    x_1235F1360 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1360,x_1236F1354);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1236F1354,LITREF(lit_5),x_1235F1355);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T22 = CALL1(1,VARREF(Ylst),YPfalse);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T23 = BOXVAL(bodyF1356);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T23,LITREF(lit_9));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_116) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_115,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_117) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_243),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  P return_;
  P x_1239F1367;
  P x_1239F1366;
  P x_1239F1365;
  P x_1239F1364;
  P namesF1363;
  P x_1239F1362;
  P x_1240F1361;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_117,2);
  x_1240F1361 = T1;
  FUNINIT(x_1240F1361, 2,FREEREF(0),return_);
  x_1239F1362 = FREEREF(0);
  namesF1363 = YPfalse;
  namesF1363 = BOXFAB(namesF1363);
  T5 = CALL2(1,VARREF(YisaQ),x_1239F1362,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F1362,LITREF(lit_243),x_1240F1361);
    x_1239F1364 = T7;
    BOXVAL(namesF1363) = x_1239F1364;
    x_1239F1365 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1239F1365,x_1240F1361);
    x_1239F1366 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1366,x_1240F1361);
    T12 = CALL1(1,VARREF(Ytail),x_1239F1365);
    x_1239F1367 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1367,x_1240F1361);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1240F1361,LITREF(lit_5),x_1239F1362);
  }
  T17 = BOXVAL(namesF1363);
  T16 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T17);
  if (T16 != YPfalse) {
    T15 = YPfalse;
  } else {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
    T23 = CALL1(1,VARREF(Ylst),YPfalse);
    T26 = BOXVAL(namesF1363);
    T25 = CALL1(1,VARREF(Yhead),T26);
    T24 = CALL1(1,VARREF(Ylst),T25);
    T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T24,LITREF(lit_9));
    T20 = CALL1(1,VARREF(Ylst),T21);
    T29 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T32 = BOXVAL(namesF1363);
    T31 = CALL1(1,VARREF(Yhead),T32);
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_9));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T35 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
    T37 = BOXVAL(namesF1363);
    T36 = CALL1(1,VARREF(Ytail),T37);
    T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_9));
    T33 = CALL1(1,VARREF(Ylst),T34);
    T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T27,T33,LITREF(lit_9));
    T15 = T18;
  }
  T3 = T15;
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

FUNCODEDEF(fun_x_1262_120) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_249),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1280_121) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_172));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P return_;
  P x_1279F1373;
  P x_1279F1372;
  P x_1279F1371;
  P nameF1370;
  P x_1279F1369;
  P x_1280F1368;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1280_121,1);
  x_1280F1368 = T1;
  FUNINIT(x_1280F1368, 1,return_);
  x_1279F1369 = FREEREF(0);
  nameF1370 = YPfalse;
  nameF1370 = BOXFAB(nameF1370);
  T5 = CALL2(1,VARREF(YisaQ),x_1279F1369,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1279F1369,x_1280F1368);
    BOXVAL(nameF1370) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1279F1369);
    x_1279F1371 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1279F1371,x_1280F1368);
    x_1279F1372 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1279F1372,x_1280F1368);
    T12 = CALL1(1,VARREF(Ytail),x_1279F1371);
    x_1279F1373 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1279F1373,x_1280F1368);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1280F1368,LITREF(lit_5),x_1279F1369);
  }
  T17 = BOXVAL(nameF1370);
  T16 = CALL2(1,VARREF(YisaQ),T17,VARREF(YLsymG));
  if (T16 != YPfalse) {
    T20 = BOXVAL(nameF1370);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T23 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T25 = BOXVAL(nameF1370);
    T24 = CALL1(1,VARREF(Ylst),T25);
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_9));
    T21 = CALL1(1,VARREF(Ylst),T22);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T21,LITREF(lit_9));
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

FUNCODEDEF(fun_x_1277_123) {
  P msg_,args_;
  P x_1278F1374;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1278F1374 = FREEREF(0);
  T3 = FUNFAB(fun_122,1,x_1278F1374);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P return_;
  P x_1276F1383;
  P x_1276F1382;
  P x_1276F1381;
  P x_1276F1380;
  P x_1276F1379;
  P restF1378;
  P nameF1377;
  P x_1276F1376;
  P x_1277F1375;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1277_123,2);
  x_1277F1375 = T1;
  FUNINIT(x_1277F1375, 2,FREEREF(0),return_);
  x_1276F1376 = FREEREF(0);
  nameF1377 = YPfalse;
  nameF1377 = BOXFAB(nameF1377);
  restF1378 = YPfalse;
  restF1378 = BOXFAB(restF1378);
  T7 = CALL2(1,VARREF(YisaQ),x_1276F1376,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1276F1376,LITREF(lit_268),x_1277F1375);
    x_1276F1379 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1276F1379,x_1277F1375);
    BOXVAL(nameF1377) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1276F1379);
    x_1276F1380 = T12;
    BOXVAL(restF1378) = x_1276F1380;
    x_1276F1381 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1276F1381,x_1277F1375);
    x_1276F1382 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1276F1382,x_1277F1375);
    T17 = CALL1(1,VARREF(Ytail),x_1276F1381);
    x_1276F1383 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1276F1383,x_1277F1375);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1277F1375,LITREF(lit_5),x_1276F1376);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
  T27 = BOXVAL(nameF1377);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_9));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1274_125) {
  P msg_,args_;
  P x_1275F1384;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1275F1384 = FREEREF(0);
  T3 = FUNFAB(fun_124,2,x_1275F1384,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_126) {
  P return_;
  P x_1273F1393;
  P x_1273F1392;
  P x_1273F1391;
  P x_1273F1390;
  P x_1273F1389;
  P restF1388;
  P nameF1387;
  P x_1273F1386;
  P x_1274F1385;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1274_125,3);
  x_1274F1385 = T1;
  FUNINIT(x_1274F1385, 3,FREEREF(0),FREEREF(1),return_);
  x_1273F1386 = FREEREF(0);
  nameF1387 = YPfalse;
  nameF1387 = BOXFAB(nameF1387);
  restF1388 = YPfalse;
  restF1388 = BOXFAB(restF1388);
  T7 = CALL2(1,VARREF(YisaQ),x_1273F1386,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1273F1386,LITREF(lit_269),x_1274F1385);
    x_1273F1389 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1273F1389,x_1274F1385);
    BOXVAL(nameF1387) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1273F1389);
    x_1273F1390 = T12;
    BOXVAL(restF1388) = x_1273F1390;
    x_1273F1391 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1273F1391,x_1274F1385);
    x_1273F1392 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1273F1392,x_1274F1385);
    T17 = CALL1(1,VARREF(Ytail),x_1273F1391);
    x_1273F1393 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1273F1393,x_1274F1385);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1274F1385,LITREF(lit_5),x_1273F1386);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
  T27 = BOXVAL(nameF1387);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_9));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1271_127) {
  P msg_,args_;
  P x_1272F1394;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1272F1394 = FREEREF(0);
  T3 = FUNFAB(fun_126,2,x_1272F1394,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_128) {
  P return_;
  P x_1270F1403;
  P x_1270F1402;
  P x_1270F1401;
  P x_1270F1400;
  P x_1270F1399;
  P restF1398;
  P nameF1397;
  P x_1270F1396;
  P x_1271F1395;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1271_127,3);
  x_1271F1395 = T1;
  FUNINIT(x_1271F1395, 3,FREEREF(0),FREEREF(1),return_);
  x_1270F1396 = FREEREF(0);
  nameF1397 = YPfalse;
  nameF1397 = BOXFAB(nameF1397);
  restF1398 = YPfalse;
  restF1398 = BOXFAB(restF1398);
  T7 = CALL2(1,VARREF(YisaQ),x_1270F1396,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1270F1396,LITREF(lit_229),x_1271F1395);
    x_1270F1399 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1270F1399,x_1271F1395);
    BOXVAL(nameF1397) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1270F1399);
    x_1270F1400 = T12;
    BOXVAL(restF1398) = x_1270F1400;
    x_1270F1401 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1270F1401,x_1271F1395);
    x_1270F1402 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1270F1402,x_1271F1395);
    T17 = CALL1(1,VARREF(Ytail),x_1270F1401);
    x_1270F1403 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1270F1403,x_1271F1395);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1271F1395,LITREF(lit_5),x_1270F1396);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
  T27 = BOXVAL(nameF1397);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_9));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1268_129) {
  P msg_,args_;
  P x_1269F1404;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1269F1404 = FREEREF(0);
  T3 = FUNFAB(fun_128,2,x_1269F1404,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  P return_;
  P x_1267F1413;
  P x_1267F1412;
  P x_1267F1411;
  P x_1267F1410;
  P x_1267F1409;
  P restF1408;
  P nameF1407;
  P x_1267F1406;
  P x_1268F1405;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1268_129,3);
  x_1268F1405 = T1;
  FUNINIT(x_1268F1405, 3,FREEREF(0),FREEREF(1),return_);
  x_1267F1406 = FREEREF(0);
  nameF1407 = YPfalse;
  nameF1407 = BOXFAB(nameF1407);
  restF1408 = YPfalse;
  restF1408 = BOXFAB(restF1408);
  T7 = CALL2(1,VARREF(YisaQ),x_1267F1406,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1267F1406,LITREF(lit_270),x_1268F1405);
    x_1267F1409 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1267F1409,x_1268F1405);
    BOXVAL(nameF1407) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1267F1409);
    x_1267F1410 = T12;
    BOXVAL(restF1408) = x_1267F1410;
    x_1267F1411 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1267F1411,x_1268F1405);
    x_1267F1412 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1267F1412,x_1268F1405);
    T17 = CALL1(1,VARREF(Ytail),x_1267F1411);
    x_1267F1413 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1267F1413,x_1268F1405);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1268F1405,LITREF(lit_5),x_1267F1406);
  }
  T22 = BOXVAL(nameF1407);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
  T27 = BOXVAL(nameF1407);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T23,LITREF(lit_9));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1265_131) {
  P msg_,args_;
  P x_1266F1414;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1266F1414 = FREEREF(0);
  T3 = FUNFAB(fun_130,2,x_1266F1414,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_132) {
  P return_;
  P x_1264F1423;
  P x_1264F1422;
  P x_1264F1421;
  P x_1264F1420;
  P x_1264F1419;
  P restF1418;
  P nameF1417;
  P x_1264F1416;
  P x_1265F1415;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1265_131,3);
  x_1265F1415 = T1;
  FUNINIT(x_1265F1415, 3,FREEREF(0),FREEREF(1),return_);
  x_1264F1416 = FREEREF(0);
  nameF1417 = YPfalse;
  nameF1417 = BOXFAB(nameF1417);
  restF1418 = YPfalse;
  restF1418 = BOXFAB(restF1418);
  T7 = CALL2(1,VARREF(YisaQ),x_1264F1416,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1264F1416,LITREF(lit_271),x_1265F1415);
    x_1264F1419 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1264F1419,x_1265F1415);
    BOXVAL(nameF1417) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1264F1419);
    x_1264F1420 = T12;
    BOXVAL(restF1418) = x_1264F1420;
    x_1264F1421 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1264F1421,x_1265F1415);
    x_1264F1422 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1264F1422,x_1265F1415);
    T17 = CALL1(1,VARREF(Ytail),x_1264F1421);
    x_1264F1423 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1264F1423,x_1265F1415);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1265F1415,LITREF(lit_5),x_1264F1416);
  }
  T22 = BOXVAL(FREEREF(1));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
  T27 = BOXVAL(nameF1417);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
  T33 = BOXVAL(nameF1417);
  T32 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T33);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T23,T28,LITREF(lit_9));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P defsF1432;
  P x_1263F1431;
  P x_1261F1430;
  P x_1261F1429;
  P x_1261F1428;
  P x_1261F1427;
  P defF1426;
  P x_1261F1425;
  P x_1262F1424;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1262_120,2);
  x_1262F1424 = T1;
  FUNINIT(x_1262F1424, 2,FREEREF(0),return_);
  x_1261F1425 = FREEREF(0);
  defF1426 = YPfalse;
  defF1426 = BOXFAB(defF1426);
  T5 = CALL2(1,VARREF(YisaQ),x_1261F1425,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1261F1425,LITREF(lit_249),x_1262F1424);
    x_1261F1427 = T7;
    BOXVAL(defF1426) = x_1261F1427;
    x_1261F1428 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1261F1428,x_1262F1424);
    x_1261F1429 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1261F1429,x_1262F1424);
    T12 = CALL1(1,VARREF(Ytail),x_1261F1428);
    x_1261F1430 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1261F1430,x_1262F1424);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1262F1424,LITREF(lit_5),x_1261F1425);
  }
  T17 = BOXVAL(defF1426);
  x_1263F1431 = T17;
  T19 = FUNFAB(fun_132,2,x_1263F1431,defF1426);
  T18 = with_exit(T19);
  T16 = T18;
  defsF1432 = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,defsF1432,LITREF(lit_9));
  T15 = T20;
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_133,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1284_135) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_276),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  P x_;
  P xF1433;
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
  xF1433 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_249));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF1433,LITREF(lit_9));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P return_;
  P x_1283F1440;
  P x_1283F1439;
  P x_1283F1438;
  P x_1283F1437;
  P defsF1436;
  P x_1283F1435;
  P x_1284F1434;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_135,2);
  x_1284F1434 = T1;
  FUNINIT(x_1284F1434, 2,FREEREF(0),return_);
  x_1283F1435 = FREEREF(0);
  defsF1436 = YPfalse;
  defsF1436 = BOXFAB(defsF1436);
  T5 = CALL2(1,VARREF(YisaQ),x_1283F1435,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F1435,LITREF(lit_276),x_1284F1434);
    x_1283F1437 = T7;
    BOXVAL(defsF1436) = x_1283F1437;
    x_1283F1438 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1283F1438,x_1284F1434);
    x_1283F1439 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1439,x_1284F1434);
    T12 = CALL1(1,VARREF(Ytail),x_1283F1438);
    x_1283F1440 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1440,x_1284F1434);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1284F1434,LITREF(lit_5),x_1283F1435);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T18 = fun_136;
  T19 = BOXVAL(defsF1436);
  T17 = CALL2(1,VARREF(YgooSmacrosYmap),T18,T19);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_9));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_137,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
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
  P tmpF1442;
  P tmpF1441;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188;
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
  lit_9 = Ynil;
  lit_10 = YPPsym((P)"if");
  lit_11 = YPPsym((P)"and");
  lit_12 = YPPsym((P)"@not");
  lit_13 = YPPsym((P)"@==");
  lit_14 = YPPsym((P)"quote");
  lit_15 = YPPsym((P)"napp");
  lit_16 = YPPsym((P)"head");
  lit_17 = YPPsym((P)"tail");
  lit_18 = YPPsym((P)"no-next-methods-error");
  lit_19 = YPPsym((P)"%fun-reg");
  lit_20 = YPPsym((P)"lst");
  T2 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1076_0 = YPmet(FUNCODEREF(fun_x_1076_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_0),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T3);
  lit_21 = YPPlist(1,YPPsym((P)"exp"));
  lit_22 = YPPlist(1,YPPsym((P)"return"));
  lit_23 = YPPsym((P)"x-1080");
  lit_24 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_25 = YPPsym((P)"app-sup");
  T6 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1080_3 = YPmet(FUNCODEREF(fun_x_1080_3),LITREF(lit_23),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T7);
  lit_26 = YPPlist(1,YPPsym((P)"exp"));
  lit_27 = YPPlist(1,YPPsym((P)"return"));
  lit_28 = YPPsym((P)"x-1084");
  lit_29 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_30 = YPPsym((P)"app");
  T10 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1084_6 = YPmet(FUNCODEREF(fun_x_1084_6),LITREF(lit_28),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T11);
  lit_31 = YPPlist(1,YPPsym((P)"exp"));
  lit_32 = YPPlist(1,YPPsym((P)"return"));
  lit_33 = YPPsym((P)"x-1088");
  lit_34 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_35 = YPPsym((P)"renew");
  lit_36 = YPPsym((P)"loop");
  lit_37 = YPPlist(2,YPPsym((P)"sets"),YPPsym((P)"inits"));
  lit_38 = YPPsym((P)"set");
  T15 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1088_9 = YPmet(FUNCODEREF(fun_x_1088_9),LITREF(lit_33),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_10 = YPmet(FUNCODEREF(fun_loop_10),LITREF(lit_36),T14,ENVNUL,PNUL,sloc(26));
  T13 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T16 = fun_12;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T16);
  lit_39 = YPPsym((P)"lift-place-subforms");
  lit_40 = YPPlist(1,YPPsym((P)"place"));
  lit_41 = YPPsym((P)"munch");
  lit_42 = YPPlist(1,YPPsym((P)"subforms"));
  T20 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T19 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T20,Ynil);
  fun_munch_13 = YPmet(FUNCODEREF(fun_munch_13),LITREF(lit_41),T19,ENVNUL,PNUL,sloc(44));
  T18 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T17 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T18,Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_39),T17,ENVNUL,PNUL,sloc(43));
  T21 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T21);
  lit_43 = YPPlist(1,YPPsym((P)"exp"));
  lit_44 = YPPlist(1,YPPsym((P)"return"));
  lit_45 = YPPsym((P)"x-1094");
  lit_46 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_47 = YPPsym((P)"incf");
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-1096");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPsym((P)"+");
  T26 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),LITREF(lit_45),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1096_16 = YPmet(FUNCODEREF(fun_x_1096_16),LITREF(lit_49),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T27 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T27);
  lit_52 = YPPlist(1,YPPsym((P)"exp"));
  lit_53 = YPPlist(1,YPPsym((P)"return"));
  lit_54 = YPPsym((P)"x-1102");
  lit_55 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_56 = YPPsym((P)"decf");
  lit_57 = YPPlist(1,YPPsym((P)"return"));
  lit_58 = YPPsym((P)"x-1104");
  lit_59 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_60 = YPPsym((P)"-");
  T32 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1102_20 = YPmet(FUNCODEREF(fun_x_1102_20),LITREF(lit_54),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1104_21 = YPmet(FUNCODEREF(fun_x_1104_21),LITREF(lit_58),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T33 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T33);
  lit_61 = YPPlist(1,YPPsym((P)"exp"));
  lit_62 = YPPlist(1,YPPsym((P)"return"));
  lit_63 = YPPsym((P)"x-1108");
  lit_64 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_65 = YPPsym((P)"pushf");
  lit_66 = YPPsym((P)"push!");
  T36 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),LITREF(lit_63),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T37 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T37);
  lit_67 = YPPlist(1,YPPsym((P)"exp"));
  lit_68 = YPPlist(1,YPPsym((P)"return"));
  lit_69 = YPPsym((P)"x-1112");
  lit_70 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_71 = YPPsym((P)"swapf");
  T40 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_28 = YPmet(FUNCODEREF(fun_x_1112_28),LITREF(lit_69),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T41 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T41);
  lit_72 = YPPlist(1,YPPsym((P)"exp"));
  lit_73 = YPPlist(1,YPPsym((P)"return"));
  lit_74 = YPPsym((P)"x-1116");
  lit_75 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_76 = YPPsym((P)"rotf");
  lit_77 = YPPlist(1,YPPsym((P)"x"));
  lit_78 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  lit_79 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"t"));
  T47 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_31 = YPmet(FUNCODEREF(fun_x_1116_31),LITREF(lit_74),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T46,ENVNUL,PNUL,sloc(85));
  T45 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(LITREF(lit_79),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T48 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"rotf"),T48);
  lit_80 = YPPlist(1,YPPsym((P)"exp"));
  lit_81 = YPPlist(1,YPPsym((P)"return"));
  lit_82 = YPPsym((P)"x-1120");
  lit_83 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_84 = YPPsym((P)"popf");
  lit_85 = YPPsym((P)"tup");
  lit_86 = YPPsym((P)"pop!");
  T51 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_37 = YPmet(FUNCODEREF(fun_x_1120_37),LITREF(lit_82),T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T52 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T52);
  lit_87 = YPPlist(1,YPPsym((P)"exp"));
  lit_88 = YPPlist(1,YPPsym((P)"return"));
  lit_89 = YPPsym((P)"x-1124");
  lit_90 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_91 = YPPsym((P)"opf");
  lit_92 = YPPsym((P)"_");
  T55 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_40 = YPmet(FUNCODEREF(fun_x_1124_40),LITREF(lit_89),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(LITREF(lit_88),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T56 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T56);
  lit_93 = YPPlist(1,YPPsym((P)"exp"));
  lit_94 = YPPlist(1,YPPsym((P)"return"));
  lit_95 = YPPsym((P)"x-1128");
  lit_96 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_97 = YPPsym((P)"unless");
  lit_98 = YPPsym((P)"not");
  lit_99 = YPPsym((P)"seq");
  T59 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_43 = YPmet(FUNCODEREF(fun_x_1128_43),LITREF(lit_95),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T60 = fun_45;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T60);
  lit_100 = YPPlist(1,YPPsym((P)"exp"));
  lit_101 = YPPlist(1,YPPsym((P)"return"));
  lit_102 = YPPsym((P)"x-1132");
  lit_103 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_104 = YPPsym((P)"when");
  T63 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_46 = YPmet(FUNCODEREF(fun_x_1132_46),LITREF(lit_102),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T64 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T64);
  lit_105 = YPPlist(1,YPPsym((P)"exp"));
  lit_106 = YPPlist(1,YPPsym((P)"return"));
  lit_107 = YPPsym((P)"x-1140");
  lit_108 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_109 = YPPsym((P)"or");
  lit_110 = YPPlist(1,YPPsym((P)"return"));
  lit_111 = YPPsym((P)"x-1142");
  lit_112 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_113 = YPPlist(1,YPPsym((P)"return"));
  lit_114 = YPPsym((P)"x-1144");
  lit_115 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_116 = YPPsym((P)"tmp");
  T71 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_49 = YPmet(FUNCODEREF(fun_x_1140_49),LITREF(lit_107),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1142_50 = YPmet(FUNCODEREF(fun_x_1142_50),LITREF(lit_111),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_51 = YPmet(FUNCODEREF(fun_x_1144_51),LITREF(lit_114),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T72 = fun_55;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T72);
  lit_117 = YPPlist(1,YPPsym((P)"exp"));
  lit_118 = YPPlist(1,YPPsym((P)"return"));
  lit_119 = YPPsym((P)"x-1152");
  lit_120 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_121 = YPPlist(1,YPPsym((P)"return"));
  lit_122 = YPPsym((P)"x-1154");
  lit_123 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_124 = YPPlist(1,YPPsym((P)"return"));
  lit_125 = YPPsym((P)"x-1156");
  lit_126 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T79 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1152_56 = YPmet(FUNCODEREF(fun_x_1152_56),LITREF(lit_119),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1154_57 = YPmet(FUNCODEREF(fun_x_1154_57),LITREF(lit_122),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1156_58 = YPmet(FUNCODEREF(fun_x_1156_58),LITREF(lit_125),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T80 = fun_62;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T80);
  lit_127 = YPPlist(1,YPPsym((P)"exp"));
  lit_128 = YPPlist(1,YPPsym((P)"return"));
  lit_129 = YPPsym((P)"x-1162");
  lit_130 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_131 = YPPsym((P)"cond");
  lit_132 = YPPlist(1,YPPsym((P)"return"));
  lit_133 = YPPsym((P)"x-1164");
  lit_134 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_135 = YPsb((P)"bad case %=");
  T85 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1162_63 = YPmet(FUNCODEREF(fun_x_1162_63),LITREF(lit_129),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1164_64 = YPmet(FUNCODEREF(fun_x_1164_64),LITREF(lit_133),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T86 = fun_67;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T86);
  lit_136 = YPPsym((P)"do-case-by");
  lit_137 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"tst"),YPPsym((P)"cases"));
  lit_138 = YPPlist(1,YPPsym((P)"return"));
  lit_139 = YPPsym((P)"x-1170");
  lit_140 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_141 = YPsb((P)"bad case %=");
  lit_142 = YPPlist(1,YPPsym((P)"return"));
  lit_143 = YPPsym((P)"x-1172");
  lit_144 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_145 = YPsb((P)"bad case %=");
  lit_146 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1170_68 = YPmet(FUNCODEREF(fun_x_1170_68),LITREF(lit_139),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_69 = YPmet(FUNCODEREF(fun_x_1172_69),LITREF(lit_143),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(LITREF(lit_137),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_136),T87,ENVNUL,PNUL,sloc(139));
  T93 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T93);
  lit_147 = YPPlist(1,YPPsym((P)"exp"));
  lit_148 = YPPlist(1,YPPsym((P)"return"));
  lit_149 = YPPsym((P)"x-1176");
  lit_150 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_151 = YPPsym((P)"case-by");
  T96 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_74 = YPmet(FUNCODEREF(fun_x_1176_74),LITREF(lit_149),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T97 = fun_76;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T97);
  lit_152 = YPPlist(1,YPPsym((P)"exp"));
  lit_153 = YPPlist(1,YPPsym((P)"return"));
  lit_154 = YPPsym((P)"x-1180");
  lit_155 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_156 = YPPsym((P)"case");
  lit_157 = YPPsym((P)"==");
  T100 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_77 = YPmet(FUNCODEREF(fun_x_1180_77),LITREF(lit_154),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T101 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T101);
  lit_158 = YPPlist(1,YPPsym((P)"exp"));
  lit_159 = YPPlist(1,YPPsym((P)"return"));
  lit_160 = YPPsym((P)"x-1188");
  lit_161 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_162 = YPPsym((P)"match");
  lit_163 = YPPlist(1,YPPsym((P)"return"));
  lit_164 = YPPsym((P)"x-1190");
  lit_165 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_166 = YPPlist(1,YPPsym((P)"return"));
  lit_167 = YPPsym((P)"x-1192");
  lit_168 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_169 = YPsb((P)"invalid match syntax.");
  lit_170 = YPPsym((P)"mif");
  lit_171 = YPPsym((P)"syntax-error");
  lit_172 = YPsb((P)"failed to match.");
  T108 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1188_80 = YPmet(FUNCODEREF(fun_x_1188_80),LITREF(lit_160),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_81 = YPmet(FUNCODEREF(fun_x_1192_81),LITREF(lit_167),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1190_83 = YPmet(FUNCODEREF(fun_x_1190_83),LITREF(lit_164),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T109 = fun_86;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T109);
  lit_173 = YPPlist(1,YPPsym((P)"exp"));
  lit_174 = YPPlist(1,YPPsym((P)"return"));
  lit_175 = YPPsym((P)"x-1196");
  lit_176 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_177 = YPPsym((P)"assert");
  lit_178 = YPPsym((P)"assert-error");
  T112 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_87 = YPmet(FUNCODEREF(fun_x_1196_87),LITREF(lit_175),T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T113 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T113);
  lit_179 = YPPlist(1,YPPsym((P)"exp"));
  lit_180 = YPPlist(1,YPPsym((P)"return"));
  lit_181 = YPPsym((P)"x-1204");
  lit_182 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_183 = YPPsym((P)"for");
  lit_184 = YPPsym((P)"grok");
  lit_185 = YPPlist(5,YPPsym((P)"clauses"),YPPsym((P)"inits"),YPPsym((P)"preds"),YPPsym((P)"nows"),YPPsym((P)"nexts"));
  lit_186 = YPPsym((P)"rep");
  lit_187 = YPPlist(1,YPPsym((P)"return"));
  lit_188 = YPPsym((P)"x-1206");
  lit_189 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_190 = YPPsym((P)"enum");
  lit_191 = YPPsym((P)"fin?");
  lit_192 = YPPlist(1,YPPsym((P)"return"));
  lit_193 = YPPsym((P)"x-1208");
  lit_194 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_195 = YPPsym((P)"now");
  lit_196 = YPPsym((P)"now-key");
  lit_197 = YPPsym((P)"nxt");
  T121 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_90 = YPmet(FUNCODEREF(fun_x_1204_90),LITREF(lit_181),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(LITREF(lit_189),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1206_91 = YPmet(FUNCODEREF(fun_x_1206_91),LITREF(lit_188),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(LITREF(lit_194),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_92 = YPmet(FUNCODEREF(fun_x_1208_92),LITREF(lit_193),T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_185),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_95 = YPmet(FUNCODEREF(fun_grok_95),LITREF(lit_184),T116,ENVNUL,PNUL,sloc(177));
  T115 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(LITREF(lit_179),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T122 = fun_97;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T122);
  lit_198 = YPPlist(1,YPPsym((P)"exp"));
  lit_199 = YPPlist(1,YPPsym((P)"return"));
  lit_200 = YPPsym((P)"x-1212");
  lit_201 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_202 = YPPsym((P)"while");
  lit_203 = YPPsym((P)"_loop");
  T125 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_98 = YPmet(FUNCODEREF(fun_x_1212_98),LITREF(lit_200),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T126 = fun_100;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T126);
  lit_204 = YPPlist(1,YPPsym((P)"exp"));
  lit_205 = YPPlist(1,YPPsym((P)"return"));
  lit_206 = YPPsym((P)"x-1216");
  lit_207 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_208 = YPPsym((P)"until");
  T129 = YPsig(LITREF(lit_207),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_101 = YPmet(FUNCODEREF(fun_x_1216_101),LITREF(lit_206),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T130 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T130);
  lit_209 = YPPlist(1,YPPsym((P)"exp"));
  lit_210 = YPPlist(1,YPPsym((P)"return"));
  lit_211 = YPPsym((P)"x-1224");
  lit_212 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_213 = YPPsym((P)"dlet");
  lit_214 = YPPlist(1,YPPsym((P)"return"));
  lit_215 = YPPsym((P)"x-1226");
  lit_216 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_217 = YPPlist(1,YPPsym((P)"return"));
  lit_218 = YPPsym((P)"x-1228");
  lit_219 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_220 = YPsb((P)"Bad dlet bindings %=");
  lit_221 = YPPsym((P)"fin");
  T137 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1224_104 = YPmet(FUNCODEREF(fun_x_1224_104),LITREF(lit_211),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_105 = YPmet(FUNCODEREF(fun_x_1228_105),LITREF(lit_218),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1226_107 = YPmet(FUNCODEREF(fun_x_1226_107),LITREF(lit_215),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T138 = fun_110;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T138);
  lit_222 = YPPlist(1,YPPsym((P)"exp"));
  lit_223 = YPPlist(1,YPPsym((P)"return"));
  lit_224 = YPPsym((P)"x-1232");
  lit_225 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_226 = YPPsym((P)"def-fun-var");
  lit_227 = YPsb((P)"*");
  lit_228 = YPsb((P)"*");
  lit_229 = YPPsym((P)"dv");
  lit_230 = YPPsym((P)"dm");
  lit_231 = YPPsym((P)"=>");
  lit_232 = YPPsym((P)"z");
  T141 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_111 = YPmet(FUNCODEREF(fun_x_1232_111),LITREF(lit_224),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T142 = fun_113;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T142);
  lit_233 = YPPlist(1,YPPsym((P)"exp"));
  lit_234 = YPPlist(1,YPPsym((P)"return"));
  lit_235 = YPPsym((P)"x-1236");
  lit_236 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_237 = YPPsym((P)"without-prop-unbound-errors");
  lit_238 = YPPsym((P)"*report-prop-unbound-errors?*");
  T145 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_114 = YPmet(FUNCODEREF(fun_x_1236_114),LITREF(lit_235),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T146 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T146);
  lit_239 = YPPlist(1,YPPsym((P)"exp"));
  lit_240 = YPPlist(1,YPPsym((P)"return"));
  lit_241 = YPPsym((P)"x-1240");
  lit_242 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_243 = YPPsym((P)"need-implementation");
  lit_244 = YPPsym((P)"export");
  T149 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_117 = YPmet(FUNCODEREF(fun_x_1240_117),LITREF(lit_241),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T150 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T150);
  lit_245 = YPPlist(1,YPPsym((P)"exp"));
  lit_246 = YPPlist(1,YPPsym((P)"return"));
  lit_247 = YPPsym((P)"x-1262");
  lit_248 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_249 = YPPsym((P)"pub");
  lit_250 = YPPlist(1,YPPsym((P)"return"));
  lit_251 = YPPsym((P)"x-1265");
  lit_252 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_253 = YPPlist(1,YPPsym((P)"return"));
  lit_254 = YPPsym((P)"x-1268");
  lit_255 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_256 = YPPlist(1,YPPsym((P)"return"));
  lit_257 = YPPsym((P)"x-1271");
  lit_258 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_259 = YPPlist(1,YPPsym((P)"return"));
  lit_260 = YPPsym((P)"x-1274");
  lit_261 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_262 = YPPlist(1,YPPsym((P)"return"));
  lit_263 = YPPsym((P)"x-1277");
  lit_264 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_265 = YPPlist(1,YPPsym((P)"return"));
  lit_266 = YPPsym((P)"x-1280");
  lit_267 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_268 = YPPsym((P)"dc");
  lit_269 = YPPsym((P)"dg");
  lit_270 = YPPsym((P)"df");
  lit_271 = YPPsym((P)"dp");
  T165 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1262_120 = YPmet(FUNCODEREF(fun_x_1262_120),LITREF(lit_247),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_267),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1280_121 = YPmet(FUNCODEREF(fun_x_1280_121),LITREF(lit_266),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1277_123 = YPmet(FUNCODEREF(fun_x_1277_123),LITREF(lit_263),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1274_125 = YPmet(FUNCODEREF(fun_x_1274_125),LITREF(lit_260),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1271_127 = YPmet(FUNCODEREF(fun_x_1271_127),LITREF(lit_257),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_255),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1268_129 = YPmet(FUNCODEREF(fun_x_1268_129),LITREF(lit_254),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_252),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1265_131 = YPmet(FUNCODEREF(fun_x_1265_131),LITREF(lit_251),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T166 = fun_134;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T166);
  lit_272 = YPPlist(1,YPPsym((P)"exp"));
  lit_273 = YPPlist(1,YPPsym((P)"return"));
  lit_274 = YPPsym((P)"x-1284");
  lit_275 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_276 = YPPsym((P)"exported");
  lit_277 = YPPlist(1,YPPsym((P)"x"));
  T170 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_135 = YPmet(FUNCODEREF(fun_x_1284_135),LITREF(lit_274),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_277),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T171 = fun_138;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T171);
  tmpF1441 = YPfalse;
  if (tmpF1441 != YPfalse) {
    T172 = VARREF(YgooSmacrosYEE);
  } else {
    T172 = YPfalse;
  }
  tmpF1442 = YPfalse;
  if (tmpF1442 != YPfalse) {
    T173 = VARREF(YgooSmacrosYdo);
  } else {
    T173 = YPfalse;
  }
  tmpF1443 = YPfalse;
  if (tmpF1443 != YPfalse) {
    T174 = VARREF(YgooSmacrosYrevX);
  } else {
    T174 = YPfalse;
  }
  tmpF1444 = YPfalse;
  if (tmpF1444 != YPfalse) {
    T175 = VARREF(YgooSmacrosYcat);
  } else {
    T175 = YPfalse;
  }
  tmpF1445 = YPfalse;
  if (tmpF1445 != YPfalse) {
    T176 = VARREF(YgooSmacrosYelt);
  } else {
    T176 = YPfalse;
  }
  tmpF1446 = YPfalse;
  if (tmpF1446 != YPfalse) {
    T177 = VARREF(YgooSmacrosY1st);
  } else {
    T177 = YPfalse;
  }
  tmpF1447 = YPfalse;
  if (tmpF1447 != YPfalse) {
    T178 = VARREF(YgooSmacrosY2nd);
  } else {
    T178 = YPfalse;
  }
  tmpF1448 = YPfalse;
  if (tmpF1448 != YPfalse) {
    T179 = VARREF(YgooSmacrosYlast);
  } else {
    T179 = YPfalse;
  }
  tmpF1449 = YPfalse;
  if (tmpF1449 != YPfalse) {
    T180 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T180 = YPfalse;
  }
  tmpF1450 = YPfalse;
  if (tmpF1450 != YPfalse) {
    T181 = VARREF(Yerror);
  } else {
    T181 = YPfalse;
  }
  tmpF1451 = YPfalse;
  if (tmpF1451 != YPfalse) {
    T182 = VARREF(YgooSmacrosYgensym);
  } else {
    T182 = YPfalse;
  }
  tmpF1452 = YPfalse;
  if (tmpF1452 != YPfalse) {
    T183 = VARREF(Ylst);
  } else {
    T183 = YPfalse;
  }
  tmpF1453 = YPfalse;
  if (tmpF1453 != YPfalse) {
    T184 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T184 = YPfalse;
  }
  tmpF1454 = YPfalse;
  if (tmpF1454 != YPfalse) {
    T185 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T185 = YPfalse;
  }
  tmpF1455 = YPfalse;
  if (tmpF1455 != YPfalse) {
    T186 = VARREF(YgooSmacrosYmap);
  } else {
    T186 = YPfalse;
  }
  tmpF1456 = YPfalse;
  if (tmpF1456 != YPfalse) {
    T187 = VARREF(YgooSmacrosYmap2);
  } else {
    T187 = YPfalse;
  }
  T188 = YPfalse;
  return T188;
}

P YgooSmacrosY___main_1___() {
  P tmpF1466;
  P tmpF1465;
  P tmpF1464;
  P tmpF1463;
  P tmpF1462;
  P tmpF1461;
  P tmpF1460;
  P tmpF1459;
  P tmpF1458;
  P tmpF1457;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
loop:
  tmpF1457 = YPfalse;
  if (tmpF1457 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T0 = YPfalse;
  }
  tmpF1458 = YPfalse;
  if (tmpF1458 != YPfalse) {
    T1 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T1 = YPfalse;
  }
  tmpF1459 = YPfalse;
  if (tmpF1459 != YPfalse) {
    T2 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T2 = YPfalse;
  }
  tmpF1460 = YPfalse;
  if (tmpF1460 != YPfalse) {
    T3 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T3 = YPfalse;
  }
  tmpF1461 = YPfalse;
  if (tmpF1461 != YPfalse) {
    T4 = VARREF(YgooSmacrosYpair);
  } else {
    T4 = YPfalse;
  }
  tmpF1462 = YPfalse;
  if (tmpF1462 != YPfalse) {
    T5 = VARREF(Ytup);
  } else {
    T5 = YPfalse;
  }
  tmpF1463 = YPfalse;
  if (tmpF1463 != YPfalse) {
    T6 = VARREF(YgooSmacrosYvar_name);
  } else {
    T6 = YPfalse;
  }
  tmpF1464 = YPfalse;
  if (tmpF1464 != YPfalse) {
    T7 = VARREF(YgooSmacrosYvar_type);
  } else {
    T7 = YPfalse;
  }
  tmpF1465 = YPfalse;
  if (tmpF1465 != YPfalse) {
    T8 = VARREF(YgooSmacrosYnapp);
  } else {
    T8 = YPfalse;
  }
  tmpF1466 = YPfalse;
  if (tmpF1466 != YPfalse) {
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
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"def-fun-var", PVAR, NULL},
  {"match-empty-list", CVAR, &YgooSmacrosYmatch_empty_list},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"case-by", PVAR, NULL},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"assert", PVAR, NULL},
  {"app", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"pub", PVAR, NULL},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"map", CVAR, &YgooSmacrosYmap},
  {"last", CVAR, &YgooSmacrosYlast},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"incf", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"swapf", PVAR, NULL},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"app-sup", PVAR, NULL},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"until", PVAR, NULL},
  {"pushf", PVAR, NULL},
  {"rotf", PVAR, NULL},
  {"opf", PVAR, NULL},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"dlet", PVAR, NULL},
  {"need-implementation", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"match", PVAR, NULL},
  {"do", CVAR, &YgooSmacrosYdo},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"or", PVAR, NULL},
  {"popf", PVAR, NULL},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"and", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"==", CVAR, &YgooSmacrosYEE},
  {"for", PVAR, NULL},
  {"case", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"while", PVAR, NULL},
  {"renew", PVAR, NULL},
  {"when", PVAR, NULL},
  {"decf", PVAR, NULL},
  {"sup", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"def-fun-var", NULL},
  {"match-empty-list", NULL},
  {"pair", NULL},
  {"case-by", NULL},
  {"var-name", NULL},
  {"rotf", NULL},
  {"assert", NULL},
  {"app", NULL},
  {"unless", NULL},
  {"exported", NULL},
  {"pub", NULL},
  {"cat", NULL},
  {"last", NULL},
  {"macro-error", NULL},
  {"fab-setter-name", NULL},
  {"incf", NULL},
  {"map", NULL},
  {"gensym", NULL},
  {"swapf", NULL},
  {"elt", NULL},
  {"app-sup", NULL},
  {"2nd", NULL},
  {"until", NULL},
  {"error", NULL},
  {"opf", NULL},
  {"1st", NULL},
  {"dlet", NULL},
  {"need-implementation", NULL},
  {"cat-sym", NULL},
  {"lst", NULL},
  {"pushf", NULL},
  {"match-sublist", NULL},
  {"match", NULL},
  {"do", NULL},
  {"lift-place-subforms", NULL},
  {"map2", NULL},
  {"napp", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"tup", NULL},
  {"without-prop-unbound-errors", NULL},
  {"or", NULL},
  {"popf", NULL},
  {"empty?", NULL},
  {"match-atom", NULL},
  {"and", NULL},
  {"var-type", NULL},
  {"rev!", NULL},
  {"==", NULL},
  {"for", NULL},
  {"case", NULL},
  {"cond", NULL},
  {"match-unquote", NULL},
  {"while", NULL},
  {"renew", NULL},
  {"when", NULL},
  {"decf", NULL},
  {"sup", NULL},
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
