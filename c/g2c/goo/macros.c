/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/macros */

EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOelt,"goo/boot","@elt");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YOdo,"goo/boot","@do");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YOpick,"goo/boot","@pick");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOOEE,"goo/boot","@@==");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YOmap,"goo/boot","@map");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YOtup,"goo/boot","@tup");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YOnew,"goo/boot","@new");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_88);
DEFLIT(lit_246);
DEFLIT(lit_230);
DEFLIT(lit_20);
DEFLIT(lit_261);
DEFLIT(lit_197);
DEFLIT(lit_25);
DEFLIT(lit_254);
DEFLIT(lit_189);
DEFLIT(lit_116);
DEFLIT(lit_235);
DEFLIT(lit_91);
DEFLIT(lit_206);
DEFLIT(lit_272);
DEFLIT(lit_217);
DEFLIT(lit_6);
DEFLIT(lit_275);
DEFLIT(lit_122);
DEFLIT(lit_225);
DEFLIT(lit_2);
DEFLIT(lit_163);
DEFLIT(lit_184);
DEFLIT(lit_187);
DEFLIT(lit_80);
DEFLIT(lit_99);
DEFLIT(lit_135);
DEFLIT(lit_24);
DEFLIT(lit_68);
DEFLIT(lit_22);
DEFLIT(lit_102);
DEFLIT(lit_152);
DEFLIT(lit_52);
DEFLIT(lit_226);
DEFLIT(lit_60);
DEFLIT(lit_32);
DEFLIT(lit_281);
DEFLIT(lit_29);
DEFLIT(lit_34);
DEFLIT(lit_157);
DEFLIT(lit_101);
DEFLIT(lit_168);
DEFLIT(lit_39);
DEFLIT(lit_70);
DEFLIT(lit_130);
DEFLIT(lit_179);
DEFLIT(lit_21);
DEFLIT(lit_253);
DEFLIT(lit_240);
DEFLIT(lit_76);
DEFLIT(lit_134);
DEFLIT(lit_151);
DEFLIT(lit_207);
DEFLIT(lit_59);
DEFLIT(lit_31);
DEFLIT(lit_138);
DEFLIT(lit_219);
DEFLIT(lit_159);
DEFLIT(lit_30);
DEFLIT(lit_196);
DEFLIT(lit_245);
DEFLIT(lit_113);
DEFLIT(lit_141);
DEFLIT(lit_78);
DEFLIT(lit_192);
DEFLIT(lit_43);
DEFLIT(lit_178);
DEFLIT(lit_83);
DEFLIT(lit_126);
DEFLIT(lit_1);
DEFLIT(lit_77);
DEFLIT(lit_74);
DEFLIT(lit_169);
DEFLIT(lit_229);
DEFLIT(lit_27);
DEFLIT(lit_156);
DEFLIT(lit_64);
DEFLIT(lit_282);
DEFLIT(lit_75);
DEFLIT(lit_140);
DEFLIT(lit_167);
DEFLIT(lit_57);
DEFLIT(lit_149);
DEFLIT(lit_264);
DEFLIT(lit_203);
DEFLIT(lit_89);
DEFLIT(lit_258);
DEFLIT(lit_244);
DEFLIT(lit_277);
DEFLIT(lit_137);
DEFLIT(lit_143);
DEFLIT(lit_216);
DEFLIT(lit_251);
DEFLIT(lit_124);
DEFLIT(lit_284);
DEFLIT(lit_260);
DEFLIT(lit_73);
DEFLIT(lit_256);
DEFLIT(lit_63);
DEFLIT(lit_58);
DEFLIT(lit_145);
DEFLIT(lit_186);
DEFLIT(lit_194);
DEFLIT(lit_35);
DEFLIT(lit_248);
DEFLIT(lit_136);
DEFLIT(lit_262);
DEFLIT(lit_160);
DEFLIT(lit_158);
DEFLIT(lit_82);
DEFLIT(lit_139);
DEFLIT(lit_56);
DEFLIT(lit_188);
DEFLIT(lit_267);
DEFLIT(lit_280);
DEFLIT(lit_19);
DEFLIT(lit_224);
DEFLIT(lit_202);
DEFLIT(lit_150);
DEFLIT(lit_85);
DEFLIT(lit_28);
DEFLIT(lit_38);
DEFLIT(lit_121);
DEFLIT(lit_195);
DEFLIT(lit_98);
DEFLIT(lit_11);
DEFLIT(lit_212);
DEFLIT(lit_259);
DEFLIT(lit_108);
DEFLIT(lit_222);
DEFLIT(lit_142);
DEFLIT(lit_46);
DEFLIT(lit_106);
DEFLIT(lit_90);
DEFLIT(lit_249);
DEFLIT(lit_265);
DEFLIT(lit_255);
DEFLIT(lit_17);
DEFLIT(lit_127);
DEFLIT(lit_95);
DEFLIT(lit_147);
DEFLIT(lit_144);
DEFLIT(lit_79);
DEFLIT(lit_268);
DEFLIT(lit_47);
DEFLIT(lit_117);
DEFLIT(lit_100);
DEFLIT(lit_236);
DEFLIT(lit_104);
DEFLIT(lit_285);
DEFLIT(lit_273);
DEFLIT(lit_86);
DEFLIT(lit_44);
DEFLIT(lit_97);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_49);
DEFLIT(lit_23);
DEFLIT(lit_67);
DEFLIT(lit_94);
DEFLIT(lit_7);
DEFLIT(lit_71);
DEFLIT(lit_239);
DEFLIT(lit_37);
DEFLIT(lit_252);
DEFLIT(lit_103);
DEFLIT(lit_154);
DEFLIT(lit_87);
DEFLIT(lit_133);
DEFLIT(lit_118);
DEFLIT(lit_172);
DEFLIT(lit_279);
DEFLIT(lit_114);
DEFLIT(lit_176);
DEFLIT(lit_218);
DEFLIT(lit_14);
DEFLIT(lit_243);
DEFLIT(lit_69);
DEFLIT(lit_274);
DEFLIT(lit_125);
DEFLIT(lit_257);
DEFLIT(lit_231);
DEFLIT(lit_65);
DEFLIT(lit_16);
DEFLIT(lit_119);
DEFLIT(lit_271);
DEFLIT(lit_148);
DEFLIT(lit_210);
DEFLIT(lit_174);
DEFLIT(lit_96);
DEFLIT(lit_171);
DEFLIT(lit_205);
DEFLIT(lit_193);
DEFLIT(lit_48);
DEFLIT(lit_232);
DEFLIT(lit_26);
DEFLIT(lit_211);
DEFLIT(lit_53);
DEFLIT(lit_250);
DEFLIT(lit_146);
DEFLIT(lit_221);
DEFLIT(lit_13);
DEFLIT(lit_162);
DEFLIT(lit_241);
DEFLIT(lit_204);
DEFLIT(lit_164);
DEFLIT(lit_161);
DEFLIT(lit_214);
DEFLIT(lit_123);
DEFLIT(lit_263);
DEFLIT(lit_55);
DEFLIT(lit_227);
DEFLIT(lit_54);
DEFLIT(lit_200);
DEFLIT(lit_182);
DEFLIT(lit_238);
DEFLIT(lit_228);
DEFLIT(lit_223);
DEFLIT(lit_170);
DEFLIT(lit_269);
DEFLIT(lit_41);
DEFLIT(lit_12);
DEFLIT(lit_180);
DEFLIT(lit_165);
DEFLIT(lit_51);
DEFLIT(lit_66);
DEFLIT(lit_72);
DEFLIT(lit_62);
DEFLIT(lit_115);
DEFLIT(lit_283);
DEFLIT(lit_233);
DEFLIT(lit_0);
DEFLIT(lit_266);
DEFLIT(lit_129);
DEFLIT(lit_120);
DEFLIT(lit_112);
DEFLIT(lit_132);
DEFLIT(lit_173);
DEFLIT(lit_185);
DEFLIT(lit_10);
DEFLIT(lit_109);
DEFLIT(lit_199);
DEFLIT(lit_131);
DEFLIT(lit_198);
DEFLIT(lit_286);
DEFLIT(lit_175);
DEFLIT(lit_237);
DEFLIT(lit_105);
DEFLIT(lit_278);
DEFLIT(lit_181);
DEFLIT(lit_93);
DEFLIT(lit_36);
DEFLIT(lit_209);
DEFLIT(lit_177);
DEFLIT(lit_270);
DEFLIT(lit_183);
DEFLIT(lit_61);
DEFLIT(lit_220);
DEFLIT(lit_9);
DEFLIT(lit_155);
DEFLIT(lit_3);
DEFLIT(lit_84);
DEFLIT(lit_111);
DEFLIT(lit_15);
DEFLIT(lit_215);
DEFLIT(lit_166);
DEFLIT(lit_242);
DEFLIT(lit_247);
DEFLIT(lit_208);
DEFLIT(lit_5);
DEFLIT(lit_110);
DEFLIT(lit_42);
DEFLIT(lit_4);
DEFLIT(lit_234);
DEFLIT(lit_107);
DEFLIT(lit_92);
DEFLIT(lit_128);
DEFLIT(lit_153);
DEFLIT(lit_50);
DEFLIT(lit_8);
DEFLIT(lit_18);
DEFLIT(lit_40);
DEFLIT(lit_213);
DEFLIT(lit_201);
DEFLIT(lit_81);
DEFLIT(lit_191);
DEFLIT(lit_190);
DEFLIT(lit_276);

/* FUNCTIONS: */

FUNFOR(YgooSmacrosYOchecked_next_methods);
LOCFOR(fun_x_1957_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_x_1961_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_x_1965_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_x_1969_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_munch_13);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1975_15);
LOCFOR(fun_x_1977_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1983_20);
LOCFOR(fun_x_1985_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1989_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1993_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1997_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_2001_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_2005_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_2009_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_2013_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_x_2017_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_2025_52);
LOCFOR(fun_x_2027_53);
LOCFOR(fun_x_2029_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_2037_59);
LOCFOR(fun_x_2039_60);
LOCFOR(fun_x_2041_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_2047_66);
LOCFOR(fun_x_2049_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_2055_71);
LOCFOR(fun_x_2057_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_2061_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_2065_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_2073_83);
LOCFOR(fun_x_2077_84);
LOCFOR(fun_85);
LOCFOR(fun_x_2075_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_2081_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_2089_93);
LOCFOR(fun_x_2091_94);
LOCFOR(fun_x_2093_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_2097_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_2101_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_2109_107);
LOCFOR(fun_x_2113_108);
LOCFOR(fun_109);
LOCFOR(fun_x_2111_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_x_2117_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_2121_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_2125_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_2153_123);
LOCFOR(fun_x_2177_124);
LOCFOR(fun_125);
LOCFOR(fun_x_2174_126);
LOCFOR(fun_127);
LOCFOR(fun_x_2171_128);
LOCFOR(fun_129);
LOCFOR(fun_x_2168_130);
LOCFOR(fun_131);
LOCFOR(fun_x_2165_132);
LOCFOR(fun_133);
LOCFOR(fun_x_2162_134);
LOCFOR(fun_135);
LOCFOR(fun_x_2159_136);
LOCFOR(fun_137);
LOCFOR(fun_x_2156_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_141);
LOCFOR(fun_x_2181_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
LOCFOR(fun_145);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYOchecked_next_methods) {
  P met_,nxt_mets_,args_;
  P yF7000;
  P xF6999;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(met_, 0);
  ARG(nxt_mets_, 1);
  NARGS(args_, 2);
  if (nxt_mets_ != YPfalse) {
    xF6999 = nxt_mets_;
    yF7000 = Ynil;
    T3 = (P)YPeqQ(xF6999,yF7000);
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

FUNCODEDEF(fun_x_1957_1) {
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
  P x_1956F7007;
  P x_1956F7006;
  P x_1956F7005;
  P x_1956F7004;
  P argsF7003;
  P x_1956F7002;
  P x_1957F7001;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_1957_1,2);
  x_1957F7001 = T41;
  FUNINIT(x_1957F7001, 2,FREEREF(0),return_);
  x_1956F7002 = FREEREF(0);
  argsF7003 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1956F7002,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1956F7002,LITREF(lit_6),x_1957F7001);
    x_1956F7004 = T6;
    argsF7003 = x_1956F7004;
    x_1956F7005 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1956F7005,x_1957F7001);
    x_1956F7006 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1956F7006,x_1957F7001);
    T5 = CALL1(1,VARREF(Ytail),x_1956F7005);
    x_1956F7007 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1956F7007,x_1957F7001);
  } else {
    T7 = CALL2(1,x_1957F7001,LITREF(lit_7),x_1956F7002);
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
  T24 = argsF7003;
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
  T36 = argsF7003;
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

FUNCODEDEF(fun_x_1961_4) {
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
  P x_1960F7014;
  P x_1960F7013;
  P x_1960F7012;
  P x_1960F7011;
  P argsF7010;
  P x_1960F7009;
  P x_1961F7008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1961_4,2);
  x_1961F7008 = T37;
  FUNINIT(x_1961F7008, 2,FREEREF(0),return_);
  x_1960F7009 = FREEREF(0);
  argsF7010 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1960F7009,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1960F7009,LITREF(lit_21),x_1961F7008);
    x_1960F7011 = T6;
    argsF7010 = x_1960F7011;
    x_1960F7012 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1960F7012,x_1961F7008);
    x_1960F7013 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1960F7013,x_1961F7008);
    T5 = CALL1(1,VARREF(Ytail),x_1960F7012);
    x_1960F7014 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1960F7014,x_1961F7008);
  } else {
    T7 = CALL2(1,x_1961F7008,LITREF(lit_7),x_1960F7009);
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
  T24 = argsF7010;
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
  T36 = argsF7010;
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

FUNCODEDEF(fun_x_1965_7) {
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
  P x_1964F7023;
  P x_1964F7022;
  P x_1964F7021;
  P x_1964F7020;
  P x_1964F7019;
  P argsF7018;
  P fF7017;
  P x_1964F7016;
  P x_1965F7015;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1965_7,2);
  x_1965F7015 = T17;
  FUNINIT(x_1965F7015, 2,FREEREF(0),return_);
  x_1964F7016 = FREEREF(0);
  fF7017 = YPfalse;
  argsF7018 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1964F7016,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1964F7016,LITREF(lit_26),x_1965F7015);
    x_1964F7019 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1964F7019,x_1965F7015);
    fF7017 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1964F7019);
    x_1964F7020 = T8;
    argsF7018 = x_1964F7020;
    x_1964F7021 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1964F7021,x_1965F7015);
    x_1964F7022 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1964F7022,x_1965F7015);
    T6 = CALL1(1,VARREF(Ytail),x_1964F7021);
    x_1964F7023 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1964F7023,x_1965F7015);
  } else {
    T10 = CALL2(1,x_1965F7015,LITREF(lit_7),x_1964F7016);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T14 = fF7017;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = argsF7018;
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

FUNCODEDEF(fun_x_1969_10) {
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
  P setsF7037;
  P valF7036;
  P initsF7035;
  P setsF7034;
  P varF7033;
  P x_1968F7032;
  P x_1968F7031;
  P x_1968F7030;
  P x_1968F7029;
  P x_1968F7028;
  P prop_initsF7027;
  P xF7026;
  P x_1968F7025;
  P x_1969F7024;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1969_10,2);
  x_1969F7024 = T40;
  FUNINIT(x_1969F7024, 2,FREEREF(0),return_);
  x_1968F7025 = FREEREF(0);
  xF7026 = YPfalse;
  prop_initsF7027 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1968F7025,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1968F7025,LITREF(lit_31),x_1969F7024);
    x_1968F7028 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1968F7028,x_1969F7024);
    xF7026 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1968F7028);
    x_1968F7029 = T8;
    prop_initsF7027 = x_1968F7029;
    x_1968F7030 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1968F7030,x_1969F7024);
    x_1968F7031 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1968F7031,x_1969F7024);
    T6 = CALL1(1,VARREF(Ytail),x_1968F7030);
    x_1968F7032 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1968F7032,x_1969F7024);
  } else {
    T10 = CALL2(1,x_1969F7024,LITREF(lit_7),x_1968F7025);
  }
  T39 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF7033 = T39;
  setsF7034 = Ynil;
  T38 = prop_initsF7027;
  initsF7035 = T38;
  LOOP_299: {
    P a299_0,a299_1;
    T22 = CALL1(1,VARREF(YgooSmacrosYemptyQ),initsF7035);
    if (T22 != YPfalse) {
      T23 = CALL1(1,VARREF(YgooSmacrosYrevX),setsF7034);
      T21 = T23;
    } else {
      T37 = CALL1(1,VARREF(Ytail),initsF7035);
      T36 = CALL1(1,VARREF(Yhead),T37);
      valF7036 = T36;
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
      T31 = CALL1(1,VARREF(Yhead),initsF7035);
      T30 = CALL1(1,VARREF(Ylst),T31);
      T32 = CALL1(1,VARREF(Ylst),varF7033);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T32,LITREF(lit_11));
      T28 = CALL1(1,VARREF(Ylst),T29);
      T33 = CALL1(1,VARREF(Ylst),valF7036);
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T33,LITREF(lit_11));
      T25 = CALL2(1,VARREF(YgooSmacrosYpair),T26,setsF7034);
      T35 = CALL1(1,VARREF(Ytail),initsF7035);
      T34 = CALL1(1,VARREF(Ytail),T35);
      a299_0 = T25;
      a299_1 = T34;
      setsF7034 = a299_0;
      initsF7035 = a299_1;
      goto LOOP_299;
      T21 = T24;
    }
  }
  setsF7037 = T21;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),varF7033);
  T19 = xF7026;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),varF7033);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,setsF7037,T20,LITREF(lit_11));
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
  P gF7041;
  P g_argsF7040;
  P g_declsF7039;
  P tup38F7038;
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
    tup38F7038 = T13;
    T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F7038,YPint((P)0));
    g_declsF7039 = T12;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F7038,YPint((P)1));
    g_argsF7040 = T11;
    T10 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF7041 = T10;
    T6 = CALL1(1,VARREF(Ylst),gF7041);
    T8 = CALL1(1,VARREF(Yhead),subforms_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_11));
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,g_declsF7039);
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),gF7041,g_argsF7040);
    T3 = CALL2(1,VARREF(Ytup),T4,T9);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF7045;
  P g_declsF7044;
  P tup39F7043;
  P munchF7042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(place_, 0);
  T10 = FUNSHELL(1,fun_munch_13,1);
  munchF7042 = T10;
  FUNINIT(munchF7042, 1,munchF7042);
  T1 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T0 = T2;
  } else {
    T9 = CALL1(1,VARREF(Ytail),place_);
    T8 = CALL1(1,munchF7042,T9);
    tup39F7043 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F7043,YPint((P)0));
    g_declsF7044 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F7043,YPint((P)1));
    g_argsF7045 = T6;
    T5 = CALL1(1,VARREF(Yhead),place_);
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,g_argsF7045);
    T3 = CALL2(1,VARREF(Ytup),g_declsF7044,T4);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1975_15) {
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

FUNCODEDEF(fun_x_1977_16) {
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
  P x_1976F7051;
  P x_1976F7050;
  P x_1976F7049;
  P amountF7048;
  P x_1976F7047;
  P x_1977F7046;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1977_16,1);
  x_1977F7046 = T11;
  FUNINIT(x_1977F7046, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1976F7047 = T10;
  amountF7048 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1976F7047,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1976F7047,x_1977F7046);
    amountF7048 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1976F7047);
    x_1976F7049 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1976F7049,x_1977F7046);
    x_1976F7050 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1976F7050,x_1977F7046);
    T5 = CALL1(1,VARREF(Ytail),x_1976F7049);
    x_1976F7051 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1976F7051,x_1977F7046);
  } else {
    T8 = CALL2(1,x_1977F7046,LITREF(lit_7),x_1976F7047);
  }
  T9 = amountF7048;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF7064;
  P g_placeF7063;
  P g_declsF7062;
  P tup41F7061;
  P x_1974F7060;
  P x_1974F7059;
  P x_1974F7058;
  P x_1974F7057;
  P x_1974F7056;
  P amountF7055;
  P placeF7054;
  P x_1974F7053;
  P x_1975F7052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1975_15,2);
  x_1975F7052 = T30;
  FUNINIT(x_1975F7052, 2,FREEREF(0),return_);
  x_1974F7053 = FREEREF(0);
  placeF7054 = YPfalse;
  amountF7055 = YPfalse;
  amountF7055 = BOXFAB(amountF7055);
  T2 = CALL2(1,VARREF(YisaQ),x_1974F7053,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1974F7053,LITREF(lit_41),x_1975F7052);
    x_1974F7056 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1974F7056,x_1975F7052);
    placeF7054 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1974F7056);
    x_1974F7057 = T8;
    BOXPUT(x_1974F7057,amountF7055);
    x_1974F7058 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1974F7058,x_1975F7052);
    x_1974F7059 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1974F7059,x_1975F7052);
    T6 = CALL1(1,VARREF(Ytail),x_1974F7058);
    x_1974F7060 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1974F7060,x_1975F7052);
  } else {
    T10 = CALL2(1,x_1975F7052,LITREF(lit_7),x_1974F7053);
  }
  T29 = placeF7054;
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup41F7061 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F7061,YPint((P)0));
  g_declsF7062 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F7061,YPint((P)1));
  g_placeF7063 = T26;
  T25 = FUNFAB(fun_17,1,amountF7055);
  T24 = with_exit(T25);
  amountF7064 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF7062,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF7063);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T22 = CALL1(1,VARREF(Ylst),g_placeF7063);
  T23 = CALL1(1,VARREF(Ylst),amountF7064);
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

FUNCODEDEF(fun_x_1983_20) {
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

FUNCODEDEF(fun_x_1985_21) {
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
  P x_1984F7070;
  P x_1984F7069;
  P x_1984F7068;
  P amountF7067;
  P x_1984F7066;
  P x_1985F7065;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1985_21,1);
  x_1985F7065 = T11;
  FUNINIT(x_1985F7065, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1984F7066 = T10;
  amountF7067 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1984F7066,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1984F7066,x_1985F7065);
    amountF7067 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1984F7066);
    x_1984F7068 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1984F7068,x_1985F7065);
    x_1984F7069 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1984F7069,x_1985F7065);
    T5 = CALL1(1,VARREF(Ytail),x_1984F7068);
    x_1984F7070 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1984F7070,x_1985F7065);
  } else {
    T8 = CALL2(1,x_1985F7065,LITREF(lit_7),x_1984F7066);
  }
  T9 = amountF7067;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF7083;
  P g_placeF7082;
  P g_declsF7081;
  P tup43F7080;
  P x_1982F7079;
  P x_1982F7078;
  P x_1982F7077;
  P x_1982F7076;
  P x_1982F7075;
  P amountF7074;
  P placeF7073;
  P x_1982F7072;
  P x_1983F7071;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1983_20,2);
  x_1983F7071 = T30;
  FUNINIT(x_1983F7071, 2,FREEREF(0),return_);
  x_1982F7072 = FREEREF(0);
  placeF7073 = YPfalse;
  amountF7074 = YPfalse;
  amountF7074 = BOXFAB(amountF7074);
  T2 = CALL2(1,VARREF(YisaQ),x_1982F7072,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1982F7072,LITREF(lit_50),x_1983F7071);
    x_1982F7075 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1982F7075,x_1983F7071);
    placeF7073 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1982F7075);
    x_1982F7076 = T8;
    BOXPUT(x_1982F7076,amountF7074);
    x_1982F7077 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1982F7077,x_1983F7071);
    x_1982F7078 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1982F7078,x_1983F7071);
    T6 = CALL1(1,VARREF(Ytail),x_1982F7077);
    x_1982F7079 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1982F7079,x_1983F7071);
  } else {
    T10 = CALL2(1,x_1983F7071,LITREF(lit_7),x_1982F7072);
  }
  T29 = placeF7073;
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup43F7080 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup43F7080,YPint((P)0));
  g_declsF7081 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup43F7080,YPint((P)1));
  g_placeF7082 = T26;
  T25 = FUNFAB(fun_22,1,amountF7074);
  T24 = with_exit(T25);
  amountF7083 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF7081,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF7082);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = CALL1(1,VARREF(Ylst),g_placeF7082);
  T23 = CALL1(1,VARREF(Ylst),amountF7083);
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

FUNCODEDEF(fun_x_1989_25) {
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
  P g_placeF7095;
  P g_declsF7094;
  P tup45F7093;
  P x_1988F7092;
  P x_1988F7091;
  P x_1988F7090;
  P x_1988F7089;
  P x_1988F7088;
  P valueF7087;
  P placeF7086;
  P x_1988F7085;
  P x_1989F7084;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1989_25,2);
  x_1989F7084 = T31;
  FUNINIT(x_1989F7084, 2,FREEREF(0),return_);
  x_1988F7085 = FREEREF(0);
  placeF7086 = YPfalse;
  valueF7087 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1988F7085,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1988F7085,LITREF(lit_59),x_1989F7084);
    x_1988F7088 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1988F7088,x_1989F7084);
    placeF7086 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1988F7088);
    x_1988F7089 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1988F7089,x_1989F7084);
    valueF7087 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1988F7089);
    x_1988F7090 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1988F7090,x_1989F7084);
    x_1988F7091 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1988F7091,x_1989F7084);
    T6 = CALL1(1,VARREF(Ytail),x_1988F7090);
    x_1988F7092 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1988F7092,x_1989F7084);
  } else {
    T12 = CALL2(1,x_1989F7084,LITREF(lit_7),x_1988F7085);
  }
  T30 = placeF7086;
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup45F7093 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup45F7093,YPint((P)0));
  g_declsF7094 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup45F7093,YPint((P)1));
  g_placeF7095 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF7094,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T20 = CALL1(1,VARREF(Ylst),g_placeF7095);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T24 = CALL1(1,VARREF(Ylst),g_placeF7095);
  T26 = valueF7087;
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

FUNCODEDEF(fun_x_1993_28) {
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
  P tmpF7111;
  P yg_placeF7110;
  P yg_declsF7109;
  P tup49F7108;
  P xg_placeF7107;
  P xg_declsF7106;
  P tup48F7105;
  P x_1992F7104;
  P x_1992F7103;
  P x_1992F7102;
  P x_1992F7101;
  P x_1992F7100;
  P yF7099;
  P xF7098;
  P x_1992F7097;
  P x_1993F7096;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1993_28,2);
  x_1993F7096 = T40;
  FUNINIT(x_1993F7096, 2,FREEREF(0),return_);
  x_1992F7097 = FREEREF(0);
  xF7098 = YPfalse;
  yF7099 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1992F7097,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1992F7097,LITREF(lit_65),x_1993F7096);
    x_1992F7100 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1992F7100,x_1993F7096);
    xF7098 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1992F7100);
    x_1992F7101 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1992F7101,x_1993F7096);
    yF7099 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1992F7101);
    x_1992F7102 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1992F7102,x_1993F7096);
    x_1992F7103 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1992F7103,x_1993F7096);
    T6 = CALL1(1,VARREF(Ytail),x_1992F7102);
    x_1992F7104 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1992F7104,x_1993F7096);
  } else {
    T12 = CALL2(1,x_1993F7096,LITREF(lit_7),x_1992F7097);
  }
  T39 = xF7098;
  T38 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T39);
  tup48F7105 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYelt),tup48F7105,YPint((P)0));
  xg_declsF7106 = T37;
  T36 = CALL2(1,VARREF(YgooSmacrosYelt),tup48F7105,YPint((P)1));
  xg_placeF7107 = T36;
  T35 = yF7099;
  T34 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T35);
  tup49F7108 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup49F7108,YPint((P)0));
  yg_declsF7109 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup49F7108,YPint((P)1));
  yg_placeF7110 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF7111 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),tmpF7111);
  T20 = CALL1(1,VARREF(Ylst),xg_placeF7107);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF7106,yg_declsF7109,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),xg_placeF7107);
  T25 = CALL1(1,VARREF(Ylst),yg_placeF7110);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T29 = CALL1(1,VARREF(Ylst),yg_placeF7110);
  T30 = CALL1(1,VARREF(Ylst),tmpF7111);
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

FUNCODEDEF(fun_x_1997_31) {
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
  P placesF7127;
  P declsF7126;
  P psF7125;
  P tmpsF7124;
  P placesF7123;
  P x_1996F7122;
  P x_1996F7121;
  P x_1996F7120;
  P x_1996F7119;
  P x_1996F7118;
  P x_1996F7117;
  P zsF7116;
  P yF7115;
  P xF7114;
  P x_1996F7113;
  P x_1997F7112;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_1997_31,2);
  x_1997F7112 = T42;
  FUNINIT(x_1997F7112, 2,FREEREF(0),return_);
  x_1996F7113 = FREEREF(0);
  xF7114 = YPfalse;
  yF7115 = YPfalse;
  zsF7116 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1996F7113,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1996F7113,LITREF(lit_70),x_1997F7112);
    x_1996F7117 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1996F7117,x_1997F7112);
    xF7114 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1996F7117);
    x_1996F7118 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1996F7118,x_1997F7112);
    yF7115 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1996F7118);
    x_1996F7119 = T9;
    zsF7116 = x_1996F7119;
    x_1996F7120 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1996F7120,x_1997F7112);
    x_1996F7121 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1996F7121,x_1997F7112);
    T7 = CALL1(1,VARREF(Ytail),x_1996F7120);
    x_1996F7122 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1996F7122,x_1997F7112);
  } else {
    T13 = CALL2(1,x_1997F7112,LITREF(lit_7),x_1996F7113);
  }
  T38 = xF7114;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = yF7115;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = zsF7116;
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T39,T41,LITREF(lit_11));
  placesF7123 = T36;
  T35 = fun_32;
  T34 = CALL2(1,VARREF(YgooSmacrosYmap),T35,placesF7123);
  tmpsF7124 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF7123);
  psF7125 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF7125);
  declsF7126 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF7125);
  placesF7127 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF7126);
  T20 = fun_33;
  T19 = CALL3(1,VARREF(YgooSmacrosYmap2),T20,tmpsF7124,placesF7127);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T22 = fun_34;
  T23 = CALL1(1,VARREF(Ytail),tmpsF7124);
  T21 = CALL3(1,VARREF(YgooSmacrosYmap2),T22,placesF7127,T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(YgooSmacrosYlast),placesF7127);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF7124);
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

FUNCODEDEF(fun_x_2001_37) {
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
  P valF7139;
  P new_colF7138;
  P g_placeF7137;
  P g_declsF7136;
  P tup51F7135;
  P x_2000F7134;
  P x_2000F7133;
  P x_2000F7132;
  P x_2000F7131;
  P placeF7130;
  P x_2000F7129;
  P x_2001F7128;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_2001_37,2);
  x_2001F7128 = T37;
  FUNINIT(x_2001F7128, 2,FREEREF(0),return_);
  x_2000F7129 = FREEREF(0);
  placeF7130 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2000F7129,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2000F7129,LITREF(lit_78),x_2001F7128);
    x_2000F7131 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2000F7131,x_2001F7128);
    placeF7130 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2000F7131);
    x_2000F7132 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2000F7132,x_2001F7128);
    x_2000F7133 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2000F7133,x_2001F7128);
    T5 = CALL1(1,VARREF(Ytail),x_2000F7132);
    x_2000F7134 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2000F7134,x_2001F7128);
  } else {
    T9 = CALL2(1,x_2001F7128,LITREF(lit_7),x_2000F7129);
  }
  T36 = placeF7130;
  T35 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T36);
  tup51F7135 = T35;
  T34 = CALL2(1,VARREF(YgooSmacrosYelt),tup51F7135,YPint((P)0));
  g_declsF7136 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup51F7135,YPint((P)1));
  g_placeF7137 = T33;
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF7138 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF7139 = T31;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T19 = CALL1(1,VARREF(Ylst),new_colF7138);
  T20 = CALL1(1,VARREF(Ylst),valF7139);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T24 = CALL1(1,VARREF(Ylst),g_placeF7137);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T21,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF7136,T14,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF7137);
  T29 = CALL1(1,VARREF(Ylst),new_colF7138);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T29,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T30 = CALL1(1,VARREF(Ylst),valF7139);
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

FUNCODEDEF(fun_x_2005_40) {
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
  P g_placeF7151;
  P g_declsF7150;
  P tup53F7149;
  P x_2004F7148;
  P x_2004F7147;
  P x_2004F7146;
  P x_2004F7145;
  P x_2004F7144;
  P callF7143;
  P placeF7142;
  P x_2004F7141;
  P x_2005F7140;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_2005_40,2);
  x_2005F7140 = T31;
  FUNINIT(x_2005F7140, 2,FREEREF(0),return_);
  x_2004F7141 = FREEREF(0);
  placeF7142 = YPfalse;
  callF7143 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2004F7141,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2004F7141,LITREF(lit_85),x_2005F7140);
    x_2004F7144 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2004F7144,x_2005F7140);
    placeF7142 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2004F7144);
    x_2004F7145 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2004F7145,x_2005F7140);
    callF7143 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2004F7145);
    x_2004F7146 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2004F7146,x_2005F7140);
    x_2004F7147 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2004F7147,x_2005F7140);
    T6 = CALL1(1,VARREF(Ytail),x_2004F7146);
    x_2004F7148 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2004F7148,x_2005F7140);
  } else {
    T12 = CALL2(1,x_2005F7140,LITREF(lit_7),x_2004F7141);
  }
  T30 = placeF7142;
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup53F7149 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup53F7149,YPint((P)0));
  g_declsF7150 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup53F7149,YPint((P)1));
  g_placeF7151 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF7151);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF7150,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),g_placeF7151);
  T26 = callF7143;
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

FUNCODEDEF(fun_x_2009_43) {
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
  P g_placeF7163;
  P g_declsF7162;
  P tup55F7161;
  P x_2008F7160;
  P x_2008F7159;
  P x_2008F7158;
  P x_2008F7157;
  P x_2008F7156;
  P valueF7155;
  P placeF7154;
  P x_2008F7153;
  P x_2009F7152;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_2009_43,2);
  x_2009F7152 = T35;
  FUNINIT(x_2009F7152, 2,FREEREF(0),return_);
  x_2008F7153 = FREEREF(0);
  placeF7154 = YPfalse;
  valueF7155 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2008F7153,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2008F7153,LITREF(lit_91),x_2009F7152);
    x_2008F7156 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2008F7156,x_2009F7152);
    placeF7154 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2008F7156);
    x_2008F7157 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2008F7157,x_2009F7152);
    valueF7155 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2008F7157);
    x_2008F7158 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2008F7158,x_2009F7152);
    x_2008F7159 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2008F7159,x_2009F7152);
    T6 = CALL1(1,VARREF(Ytail),x_2008F7158);
    x_2008F7160 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2008F7160,x_2009F7152);
  } else {
    T12 = CALL2(1,x_2009F7152,LITREF(lit_7),x_2008F7153);
  }
  T34 = placeF7154;
  T33 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T34);
  tup55F7161 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup55F7161,YPint((P)0));
  g_declsF7162 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup55F7161,YPint((P)1));
  g_placeF7163 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF7163);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF7162,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T24 = CALL1(1,VARREF(Ylst),g_placeF7163);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF7163);
  T30 = valueF7155;
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

FUNCODEDEF(fun_x_2013_46) {
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
  P x_2012F7172;
  P x_2012F7171;
  P x_2012F7170;
  P x_2012F7169;
  P x_2012F7168;
  P bodyF7167;
  P testF7166;
  P x_2012F7165;
  P x_2013F7164;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(return_, 0);
  T22 = FUNSHELL(0,fun_x_2013_46,2);
  x_2013F7164 = T22;
  FUNINIT(x_2013F7164, 2,FREEREF(0),return_);
  x_2012F7165 = FREEREF(0);
  testF7166 = YPfalse;
  bodyF7167 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2012F7165,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2012F7165,LITREF(lit_97),x_2013F7164);
    x_2012F7168 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2012F7168,x_2013F7164);
    testF7166 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2012F7168);
    x_2012F7169 = T8;
    bodyF7167 = x_2012F7169;
    x_2012F7170 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2012F7170,x_2013F7164);
    x_2012F7171 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2012F7171,x_2013F7164);
    T6 = CALL1(1,VARREF(Ytail),x_2012F7170);
    x_2012F7172 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2012F7172,x_2013F7164);
  } else {
    T10 = CALL2(1,x_2013F7164,LITREF(lit_7),x_2012F7165);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T17 = testF7166;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T21 = bodyF7167;
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

FUNCODEDEF(fun_x_2017_49) {
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
  P x_2016F7181;
  P x_2016F7180;
  P x_2016F7179;
  P x_2016F7178;
  P x_2016F7177;
  P bodyF7176;
  P testF7175;
  P x_2016F7174;
  P x_2017F7173;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2017_49,2);
  x_2017F7173 = T19;
  FUNINIT(x_2017F7173, 2,FREEREF(0),return_);
  x_2016F7174 = FREEREF(0);
  testF7175 = YPfalse;
  bodyF7176 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2016F7174,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2016F7174,LITREF(lit_105),x_2017F7173);
    x_2016F7177 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2016F7177,x_2017F7173);
    testF7175 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2016F7177);
    x_2016F7178 = T8;
    bodyF7176 = x_2016F7178;
    x_2016F7179 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2016F7179,x_2017F7173);
    x_2016F7180 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2016F7180,x_2017F7173);
    T6 = CALL1(1,VARREF(Ytail),x_2016F7179);
    x_2016F7181 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2016F7181,x_2017F7173);
  } else {
    T10 = CALL2(1,x_2017F7173,LITREF(lit_7),x_2016F7174);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T14 = testF7175;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = bodyF7176;
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

FUNCODEDEF(fun_x_2025_52) {
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

FUNCODEDEF(fun_x_2027_53) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2029_54) {
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

FUNCODEDEF(fun_55) {
  P return_;
  P x_2028F7183;
  P x_2029F7182;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_2029_54,3);
  x_2029F7182 = T5;
  FUNINIT(x_2029F7182, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_2028F7183 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_2028F7183,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2028F7183,x_2029F7182);
  } else {
    T2 = CALL2(1,x_2029F7182,LITREF(lit_7),x_2028F7183);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_2026F7191;
  P x_2026F7190;
  P x_2026F7189;
  P x_2026F7188;
  P restF7187;
  P xF7186;
  P x_2026F7185;
  P x_2027F7184;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2027_53,1);
  x_2027F7184 = T13;
  FUNINIT(x_2027F7184, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_2026F7185 = T12;
  xF7186 = YPfalse;
  xF7186 = BOXFAB(xF7186);
  restF7187 = YPfalse;
  restF7187 = BOXFAB(restF7187);
  T2 = CALL2(1,VARREF(YisaQ),x_2026F7185,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2026F7185,x_2027F7184);
    BOXPUT(T7,xF7186);
    T8 = CALL1(1,VARREF(Ytail),x_2026F7185);
    x_2026F7188 = T8;
    BOXPUT(x_2026F7188,restF7187);
    x_2026F7189 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2026F7189,x_2027F7184);
    x_2026F7190 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2026F7190,x_2027F7184);
    T6 = CALL1(1,VARREF(Ytail),x_2026F7189);
    x_2026F7191 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2026F7191,x_2027F7184);
  } else {
    T9 = CALL2(1,x_2027F7184,LITREF(lit_7),x_2026F7185);
  }
  T11 = FUNFAB(fun_55,2,xF7186,restF7187);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_2024F7198;
  P x_2024F7197;
  P x_2024F7196;
  P x_2024F7195;
  P restF7194;
  P x_2024F7193;
  P x_2025F7192;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_2025_52,2);
  x_2025F7192 = T10;
  FUNINIT(x_2025F7192, 2,FREEREF(0),return_);
  x_2024F7193 = FREEREF(0);
  restF7194 = YPfalse;
  restF7194 = BOXFAB(restF7194);
  T1 = CALL2(1,VARREF(YisaQ),x_2024F7193,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2024F7193,LITREF(lit_92),x_2025F7192);
    x_2024F7195 = T6;
    BOXPUT(x_2024F7195,restF7194);
    x_2024F7196 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2024F7196,x_2025F7192);
    x_2024F7197 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2024F7197,x_2025F7192);
    T5 = CALL1(1,VARREF(Ytail),x_2024F7196);
    x_2024F7198 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2024F7198,x_2025F7192);
  } else {
    T7 = CALL2(1,x_2025F7192,LITREF(lit_7),x_2024F7193);
  }
  T9 = FUNFAB(fun_56,1,restF7194);
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

FUNCODEDEF(fun_x_2037_59) {
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

FUNCODEDEF(fun_x_2039_60) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2041_61) {
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

FUNCODEDEF(fun_62) {
  P return_;
  P x_2040F7200;
  P x_2041F7199;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_2041_61,3);
  x_2041F7199 = T5;
  FUNINIT(x_2041F7199, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_2040F7200 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_2040F7200,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2040F7200,x_2041F7199);
  } else {
    T2 = CALL2(1,x_2041F7199,LITREF(lit_7),x_2040F7200);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_2038F7208;
  P x_2038F7207;
  P x_2038F7206;
  P x_2038F7205;
  P restF7204;
  P xF7203;
  P x_2038F7202;
  P x_2039F7201;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2039_60,1);
  x_2039F7201 = T13;
  FUNINIT(x_2039F7201, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_2038F7202 = T12;
  xF7203 = YPfalse;
  xF7203 = BOXFAB(xF7203);
  restF7204 = YPfalse;
  restF7204 = BOXFAB(restF7204);
  T2 = CALL2(1,VARREF(YisaQ),x_2038F7202,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2038F7202,x_2039F7201);
    BOXPUT(T7,xF7203);
    T8 = CALL1(1,VARREF(Ytail),x_2038F7202);
    x_2038F7205 = T8;
    BOXPUT(x_2038F7205,restF7204);
    x_2038F7206 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2038F7206,x_2039F7201);
    x_2038F7207 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2038F7207,x_2039F7201);
    T6 = CALL1(1,VARREF(Ytail),x_2038F7206);
    x_2038F7208 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2038F7208,x_2039F7201);
  } else {
    T9 = CALL2(1,x_2039F7201,LITREF(lit_7),x_2038F7202);
  }
  T11 = FUNFAB(fun_62,2,xF7203,restF7204);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_2036F7215;
  P x_2036F7214;
  P x_2036F7213;
  P x_2036F7212;
  P restF7211;
  P x_2036F7210;
  P x_2037F7209;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_2037_59,2);
  x_2037F7209 = T10;
  FUNINIT(x_2037F7209, 2,FREEREF(0),return_);
  x_2036F7210 = FREEREF(0);
  restF7211 = YPfalse;
  restF7211 = BOXFAB(restF7211);
  T1 = CALL2(1,VARREF(YisaQ),x_2036F7210,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2036F7210,LITREF(lit_121),x_2037F7209);
    x_2036F7212 = T6;
    BOXPUT(x_2036F7212,restF7211);
    x_2036F7213 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2036F7213,x_2037F7209);
    x_2036F7214 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2036F7214,x_2037F7209);
    T5 = CALL1(1,VARREF(Ytail),x_2036F7213);
    x_2036F7215 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2036F7215,x_2037F7209);
  } else {
    T7 = CALL2(1,x_2037F7209,LITREF(lit_7),x_2036F7210);
  }
  T9 = FUNFAB(fun_63,1,restF7211);
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

FUNCODEDEF(fun_x_2047_66) {
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

FUNCODEDEF(fun_x_2049_67) {
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

FUNCODEDEF(fun_68) {
  P return_;
  P x_2048F7223;
  P x_2048F7222;
  P x_2048F7221;
  P x_2048F7220;
  P bodyF7219;
  P condF7218;
  P x_2048F7217;
  P x_2049F7216;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_2049_67,2);
  x_2049F7216 = T25;
  FUNINIT(x_2049F7216, 2,FREEREF(0),return_);
  T24 = BOXGET(FREEREF(0));
  T23 = CALL1(1,VARREF(Yhead),T24);
  x_2048F7217 = T23;
  condF7218 = YPfalse;
  bodyF7219 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2048F7217,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2048F7217,x_2049F7216);
    condF7218 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2048F7217);
    x_2048F7220 = T8;
    bodyF7219 = x_2048F7220;
    x_2048F7221 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2048F7221,x_2049F7216);
    x_2048F7222 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2048F7222,x_2049F7216);
    T6 = CALL1(1,VARREF(Ytail),x_2048F7221);
    x_2048F7223 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2048F7223,x_2049F7216);
  } else {
    T9 = CALL2(1,x_2049F7216,LITREF(lit_7),x_2048F7217);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = condF7218;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = bodyF7219;
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

FUNCODEDEF(fun_69) {
  P return_;
  P x_2046F7230;
  P x_2046F7229;
  P x_2046F7228;
  P x_2046F7227;
  P casesF7226;
  P x_2046F7225;
  P x_2047F7224;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2047_66,2);
  x_2047F7224 = T13;
  FUNINIT(x_2047F7224, 2,FREEREF(0),return_);
  x_2046F7225 = FREEREF(0);
  casesF7226 = YPfalse;
  casesF7226 = BOXFAB(casesF7226);
  T1 = CALL2(1,VARREF(YisaQ),x_2046F7225,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2046F7225,LITREF(lit_132),x_2047F7224);
    x_2046F7227 = T6;
    BOXPUT(x_2046F7227,casesF7226);
    x_2046F7228 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2046F7228,x_2047F7224);
    x_2046F7229 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2046F7229,x_2047F7224);
    T5 = CALL1(1,VARREF(Ytail),x_2046F7228);
    x_2046F7230 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2046F7230,x_2047F7224);
  } else {
    T7 = CALL2(1,x_2047F7224,LITREF(lit_7),x_2046F7225);
  }
  T10 = BOXGET(casesF7226);
  T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = FUNFAB(fun_68,1,casesF7226);
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

FUNCODEDEF(fun_x_2055_71) {
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

FUNCODEDEF(fun_x_2057_72) {
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
  P x_2056F7236;
  P x_2056F7235;
  P x_2056F7234;
  P valuesF7233;
  P x_2056F7232;
  P x_2057F7231;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_2057_72,2);
  x_2057F7231 = T23;
  FUNINIT(x_2057F7231, 2,FREEREF(0),return_);
  T22 = BOXGET(FREEREF(1));
  x_2056F7232 = T22;
  valuesF7233 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2056F7232,VARREF(YLlstG));
  if (T1 != YPfalse) {
    valuesF7233 = x_2056F7232;
    x_2056F7234 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2056F7234,x_2057F7231);
    x_2056F7235 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2056F7235,x_2057F7231);
    T5 = CALL1(1,VARREF(Ytail),x_2056F7234);
    x_2056F7236 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2056F7236,x_2057F7231);
  } else {
    T6 = CALL2(1,x_2057F7231,LITREF(lit_7),x_2056F7232);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T13 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T14 = valuesF7233;
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

FUNCODEDEF(fun_75) {
  P return_;
  P x_2054F7244;
  P x_2054F7243;
  P x_2054F7242;
  P x_2054F7241;
  P bodyF7240;
  P condF7239;
  P x_2054F7238;
  P x_2055F7237;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2055_71,2);
  x_2055F7237 = T19;
  FUNINIT(x_2055F7237, 2,FREEREF(0),return_);
  T18 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_2054F7238 = T18;
  condF7239 = YPfalse;
  condF7239 = BOXFAB(condF7239);
  bodyF7240 = YPfalse;
  bodyF7240 = BOXFAB(bodyF7240);
  T2 = CALL2(1,VARREF(YisaQ),x_2054F7238,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2054F7238,x_2055F7237);
    BOXPUT(T7,condF7239);
    T8 = CALL1(1,VARREF(Ytail),x_2054F7238);
    x_2054F7241 = T8;
    BOXPUT(x_2054F7241,bodyF7240);
    x_2054F7242 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2054F7242,x_2055F7237);
    x_2054F7243 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2054F7243,x_2055F7237);
    T6 = CALL1(1,VARREF(Ytail),x_2054F7242);
    x_2054F7244 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2054F7244,x_2055F7237);
  } else {
    T9 = CALL2(1,x_2055F7237,LITREF(lit_7),x_2054F7238);
  }
  T12 = BOXGET(condF7239);
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,YPtrue);
  if (T11 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = BOXGET(bodyF7240);
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
    T10 = T13;
  } else {
    T17 = FUNFAB(fun_74,5,FREEREF(0),condF7239,FREEREF(1),FREEREF(2),bodyF7240);
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

FUNCODEDEF(fun_x_2061_77) {
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
  P tst_varF7257;
  P val_varF7256;
  P x_2060F7255;
  P x_2060F7254;
  P x_2060F7253;
  P x_2060F7252;
  P x_2060F7251;
  P x_2060F7250;
  P casesF7249;
  P tstF7248;
  P valF7247;
  P x_2060F7246;
  P x_2061F7245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_2061_77,2);
  x_2061F7245 = T33;
  FUNINIT(x_2061F7245, 2,FREEREF(0),return_);
  x_2060F7246 = FREEREF(0);
  valF7247 = YPfalse;
  tstF7248 = YPfalse;
  casesF7249 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2060F7246,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2060F7246,LITREF(lit_152),x_2061F7245);
    x_2060F7250 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2060F7250,x_2061F7245);
    valF7247 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2060F7250);
    x_2060F7251 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2060F7251,x_2061F7245);
    tstF7248 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_2060F7251);
    x_2060F7252 = T9;
    casesF7249 = x_2060F7252;
    x_2060F7253 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2060F7253,x_2061F7245);
    x_2060F7254 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2060F7254,x_2061F7245);
    T7 = CALL1(1,VARREF(Ytail),x_2060F7253);
    x_2060F7255 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2060F7255,x_2061F7245);
  } else {
    T13 = CALL2(1,x_2061F7245,LITREF(lit_7),x_2060F7246);
  }
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF7256 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF7257 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T20 = CALL1(1,VARREF(Ylst),val_varF7256);
  T22 = valF7247;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),tst_varF7257);
  T27 = tstF7248;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T23,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T30 = casesF7249;
  T29 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF7256,tst_varF7257,T30);
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

FUNCODEDEF(fun_x_2065_80) {
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
  P x_2064F7266;
  P x_2064F7265;
  P x_2064F7264;
  P x_2064F7263;
  P x_2064F7262;
  P casesF7261;
  P valF7260;
  P x_2064F7259;
  P x_2065F7258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_2065_80,2);
  x_2065F7258 = T17;
  FUNINIT(x_2065F7258, 2,FREEREF(0),return_);
  x_2064F7259 = FREEREF(0);
  valF7260 = YPfalse;
  casesF7261 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2064F7259,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2064F7259,LITREF(lit_157),x_2065F7258);
    x_2064F7262 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2064F7262,x_2065F7258);
    valF7260 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2064F7262);
    x_2064F7263 = T8;
    casesF7261 = x_2064F7263;
    x_2064F7264 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2064F7264,x_2065F7258);
    x_2064F7265 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2064F7265,x_2065F7258);
    T6 = CALL1(1,VARREF(Ytail),x_2064F7264);
    x_2064F7266 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2064F7266,x_2065F7258);
  } else {
    T10 = CALL2(1,x_2065F7258,LITREF(lit_7),x_2064F7259);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T14 = valF7260;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T16 = casesF7261;
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

FUNCODEDEF(fun_x_2073_83) {
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

FUNCODEDEF(fun_x_2077_84) {
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
  P varF7281;
  P x_2076F7280;
  P x_2076F7279;
  P x_2076F7278;
  P x_2076F7277;
  P x_2076F7276;
  P x_2076F7275;
  P x_2076F7274;
  P x_2076F7273;
  P x_2076F7272;
  P restF7271;
  P thenF7270;
  P patF7269;
  P x_2076F7268;
  P x_2077F7267;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_2077_84,1);
  x_2077F7267 = T51;
  FUNINIT(x_2077F7267, 1,return_);
  T50 = BOXGET(FREEREF(0));
  x_2076F7268 = T50;
  patF7269 = YPfalse;
  thenF7270 = YPfalse;
  restF7271 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2076F7268,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2076F7268,x_2077F7267);
    x_2076F7272 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2076F7272,x_2077F7267);
    patF7269 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2076F7272);
    x_2076F7273 = T13;
    thenF7270 = x_2076F7273;
    x_2076F7274 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2076F7274,x_2077F7267);
    x_2076F7275 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2076F7275,x_2077F7267);
    T11 = CALL1(1,VARREF(Ytail),x_2076F7274);
    x_2076F7276 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2076F7276,x_2077F7267);
    T15 = CALL1(1,VARREF(Ytail),x_2076F7268);
    x_2076F7277 = T15;
    restF7271 = x_2076F7277;
    x_2076F7278 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2076F7278,x_2077F7267);
    x_2076F7279 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2076F7279,x_2077F7267);
    T7 = CALL1(1,VARREF(Ytail),x_2076F7278);
    x_2076F7280 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2076F7280,x_2077F7267);
  } else {
    T16 = CALL2(1,x_2077F7267,LITREF(lit_7),x_2076F7268);
  }
  T19 = patF7269;
  T18 = CALL2(1,VARREF(YgooSmacrosYEE),T19,YPtrue);
  if (T18 != YPfalse) {
    T21 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T22 = thenF7270;
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
    T17 = T20;
  } else {
    T49 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF7281 = T49;
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T29 = CALL1(1,VARREF(Ylst),varF7281);
    T31 = BOXGET(FREEREF(1));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_11));
    T25 = CALL1(1,VARREF(Ylst),T26);
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
    T38 = patF7269;
    T37 = CALL1(1,VARREF(Ylst),T38);
    T39 = CALL1(1,VARREF(Ylst),varF7281);
    T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_11));
    T35 = CALL1(1,VARREF(Ylst),T36);
    T42 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T43 = thenF7270;
    T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_11));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T46 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
    T47 = CALL1(1,VARREF(Ylst),varF7281);
    T48 = restF7271;
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

FUNCODEDEF(fun_x_2075_86) {
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
  P x_2074F7283;
  P x_2075F7282;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_2075_86,3);
  x_2075F7282 = T7;
  FUNINIT(x_2075F7282, 3,FREEREF(0),FREEREF(1),return_);
  T6 = BOXGET(FREEREF(0));
  x_2074F7283 = T6;
  T0 = CALL2(1,VARREF(YisaQ),x_2074F7283,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2074F7283,x_2075F7282);
  } else {
    T2 = CALL2(1,x_2075F7282,LITREF(lit_7),x_2074F7283);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_88) {
  P return_;
  P x_2072F7292;
  P x_2072F7291;
  P x_2072F7290;
  P x_2072F7289;
  P x_2072F7288;
  P casesF7287;
  P expF7286;
  P x_2072F7285;
  P x_2073F7284;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2073_83,2);
  x_2073F7284 = T13;
  FUNINIT(x_2073F7284, 2,FREEREF(0),return_);
  x_2072F7285 = FREEREF(0);
  expF7286 = YPfalse;
  expF7286 = BOXFAB(expF7286);
  casesF7287 = YPfalse;
  casesF7287 = BOXFAB(casesF7287);
  T2 = CALL2(1,VARREF(YisaQ),x_2072F7285,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2072F7285,LITREF(lit_163),x_2073F7284);
    x_2072F7288 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2072F7288,x_2073F7284);
    BOXPUT(T7,expF7286);
    T8 = CALL1(1,VARREF(Ytail),x_2072F7288);
    x_2072F7289 = T8;
    BOXPUT(x_2072F7289,casesF7287);
    x_2072F7290 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2072F7290,x_2073F7284);
    x_2072F7291 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2072F7291,x_2073F7284);
    T6 = CALL1(1,VARREF(Ytail),x_2072F7290);
    x_2072F7292 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2072F7292,x_2073F7284);
  } else {
    T10 = CALL2(1,x_2073F7284,LITREF(lit_7),x_2072F7285);
  }
  T12 = FUNFAB(fun_87,2,casesF7287,expF7286);
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

FUNCODEDEF(fun_x_2081_90) {
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
  P x_2080F7303;
  P x_2080F7302;
  P x_2080F7301;
  P x_2080F7300;
  P x_2080F7299;
  P x_2080F7298;
  P argsF7297;
  P messageF7296;
  P condF7295;
  P x_2080F7294;
  P x_2081F7293;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T27 = FUNSHELL(0,fun_x_2081_90,2);
  x_2081F7293 = T27;
  FUNINIT(x_2081F7293, 2,FREEREF(0),return_);
  x_2080F7294 = FREEREF(0);
  condF7295 = YPfalse;
  messageF7296 = YPfalse;
  argsF7297 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2080F7294,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2080F7294,LITREF(lit_178),x_2081F7293);
    x_2080F7298 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2080F7298,x_2081F7293);
    condF7295 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2080F7298);
    x_2080F7299 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2080F7299,x_2081F7293);
    messageF7296 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_2080F7299);
    x_2080F7300 = T9;
    argsF7297 = x_2080F7300;
    x_2080F7301 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2080F7301,x_2081F7293);
    x_2080F7302 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2080F7302,x_2081F7293);
    T7 = CALL1(1,VARREF(Ytail),x_2080F7301);
    x_2080F7303 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2080F7303,x_2081F7293);
  } else {
    T13 = CALL2(1,x_2081F7293,LITREF(lit_7),x_2080F7294);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T20 = condF7295;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_179));
  T25 = messageF7296;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T26 = argsF7297;
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

FUNCODEDEF(fun_x_2089_93) {
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

FUNCODEDEF(fun_x_2091_94) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2093_95) {
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

FUNCODEDEF(fun_96) {
  P return_;
  P x_2092F7312;
  P x_2092F7311;
  P x_2092F7310;
  P x_2092F7309;
  P x_2092F7308;
  P valF7307;
  P keyF7306;
  P x_2092F7305;
  P x_2093F7304;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_2093_95,3);
  x_2093F7304 = T33;
  FUNINIT(x_2093F7304, 3,FREEREF(0),FREEREF(1),return_);
  T32 = BOXGET(FREEREF(0));
  x_2092F7305 = T32;
  keyF7306 = YPfalse;
  valF7307 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2092F7305,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2092F7305,LITREF(lit_79),x_2093F7304);
    x_2092F7308 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2092F7308,x_2093F7304);
    keyF7306 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2092F7308);
    x_2092F7309 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2092F7309,x_2093F7304);
    valF7307 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2092F7309);
    x_2092F7310 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2092F7310,x_2093F7304);
    x_2092F7311 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2092F7311,x_2093F7304);
    T6 = CALL1(1,VARREF(Ytail),x_2092F7310);
    x_2092F7312 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2092F7312,x_2093F7304);
  } else {
    T12 = CALL2(1,x_2093F7304,LITREF(lit_7),x_2092F7305);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T18 = keyF7306;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T20 = valF7307;
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
  P stateF7321;
  P x_2090F7320;
  P x_2090F7319;
  P x_2090F7318;
  P x_2090F7317;
  P expF7316;
  P varF7315;
  P x_2090F7314;
  P x_2091F7313;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_2091_94,1);
  x_2091F7313 = T34;
  FUNINIT(x_2091F7313, 1,return_);
  x_2090F7314 = FREEREF(0);
  varF7315 = YPfalse;
  varF7315 = BOXFAB(varF7315);
  expF7316 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2090F7314,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2090F7314,x_2091F7313);
    BOXPUT(T9,varF7315);
    T10 = CALL1(1,VARREF(Ytail),x_2090F7314);
    x_2090F7317 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2090F7317,x_2091F7313);
    expF7316 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2090F7317);
    x_2090F7318 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2090F7318,x_2091F7313);
    x_2090F7319 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2090F7319,x_2091F7313);
    T6 = CALL1(1,VARREF(Ytail),x_2090F7318);
    x_2090F7320 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2090F7320,x_2091F7313);
  } else {
    T11 = CALL2(1,x_2091F7313,LITREF(lit_7),x_2090F7314);
  }
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF7321 = T33;
  T13 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T16 = CALL1(1,VARREF(Ylst),stateF7321);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T21 = expF7316;
  T20 = CALL1(1,VARREF(Ylst),T21);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,FREEREF(2));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T25 = CALL1(1,VARREF(Ylst),stateF7321);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL2(1,VARREF(YgooSmacrosYpair),T23,FREEREF(3));
  T28 = FUNFAB(fun_96,2,varF7315,stateF7321);
  T27 = with_exit(T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYpair),T27,FREEREF(4));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T32 = CALL1(1,VARREF(Ylst),stateF7321);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_11));
  T29 = CALL2(1,VARREF(YgooSmacrosYpair),T30,FREEREF(5));
  T12 = CALL5(1,FREEREF(6),T13,T14,T22,T26,T29);
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF7323;
  P loopF7322;
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
    loopF7322 = T20;
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
    T4 = CALL1(1,VARREF(Ylst),loopF7322);
    T5 = CALL1(1,VARREF(Ylst),inits_);
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
    T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,preds_,LITREF(lit_11));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T15 = CALL1(1,VARREF(Ylst),nows_);
    T16 = BOXGET(FREEREF(0));
    T19 = CALL1(1,VARREF(Ylst),loopF7322);
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
    clauseF7323 = T23;
    T22 = FUNFAB(fun_97,7,clauseF7323,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T21 = with_exit(T22);
    T0 = T21;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF7337;
  P x_2088F7336;
  P x_2088F7335;
  P x_2088F7334;
  P x_2088F7333;
  P x_2088F7332;
  P x_2088F7331;
  P x_2088F7330;
  P x_2088F7329;
  P x_2088F7328;
  P bodyF7327;
  P clausesF7326;
  P x_2088F7325;
  P x_2089F7324;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_2089_93,2);
  x_2089F7324 = T18;
  FUNINIT(x_2089F7324, 2,FREEREF(0),return_);
  x_2088F7325 = FREEREF(0);
  clausesF7326 = YPfalse;
  bodyF7327 = YPfalse;
  bodyF7327 = BOXFAB(bodyF7327);
  T2 = CALL2(1,VARREF(YisaQ),x_2088F7325,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2088F7325,LITREF(lit_184),x_2089F7324);
    x_2088F7328 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2088F7328,x_2089F7324);
    x_2088F7329 = T11;
    clausesF7326 = x_2088F7329;
    x_2088F7330 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2088F7330,x_2089F7324);
    x_2088F7331 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2088F7331,x_2089F7324);
    T10 = CALL1(1,VARREF(Ytail),x_2088F7330);
    x_2088F7332 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2088F7332,x_2089F7324);
    T12 = CALL1(1,VARREF(Ytail),x_2088F7328);
    x_2088F7333 = T12;
    BOXPUT(x_2088F7333,bodyF7327);
    x_2088F7334 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2088F7334,x_2089F7324);
    x_2088F7335 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2088F7335,x_2089F7324);
    T6 = CALL1(1,VARREF(Ytail),x_2088F7334);
    x_2088F7336 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2088F7336,x_2089F7324);
  } else {
    T14 = CALL2(1,x_2089F7324,LITREF(lit_7),x_2088F7325);
  }
  T17 = FUNSHELL(1,fun_grok_98,2);
  grokF7337 = T17;
  FUNINIT(grokF7337, 2,bodyF7327,grokF7337);
  T16 = clausesF7326;
  T15 = CALL5(1,grokF7337,T16,Ynil,Ynil,Ynil,Ynil);
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

FUNCODEDEF(fun_x_2097_101) {
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
  P x_2096F7346;
  P x_2096F7345;
  P x_2096F7344;
  P x_2096F7343;
  P x_2096F7342;
  P bodyF7341;
  P testF7340;
  P x_2096F7339;
  P x_2097F7338;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_2097_101,2);
  x_2097F7338 = T24;
  FUNINIT(x_2097F7338, 2,FREEREF(0),return_);
  x_2096F7339 = FREEREF(0);
  testF7340 = YPfalse;
  bodyF7341 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2096F7339,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2096F7339,LITREF(lit_203),x_2097F7338);
    x_2096F7342 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2096F7342,x_2097F7338);
    testF7340 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2096F7342);
    x_2096F7343 = T8;
    bodyF7341 = x_2096F7343;
    x_2096F7344 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2096F7344,x_2097F7338);
    x_2096F7345 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2096F7345,x_2097F7338);
    T6 = CALL1(1,VARREF(Ytail),x_2096F7344);
    x_2096F7346 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2096F7346,x_2097F7338);
  } else {
    T10 = CALL2(1,x_2097F7338,LITREF(lit_7),x_2096F7339);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T19 = testF7340;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = bodyF7341;
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

FUNCODEDEF(fun_x_2101_104) {
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
  P x_2100F7355;
  P x_2100F7354;
  P x_2100F7353;
  P x_2100F7352;
  P x_2100F7351;
  P bodyF7350;
  P testF7349;
  P x_2100F7348;
  P x_2101F7347;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_2101_104,2);
  x_2101F7347 = T24;
  FUNINIT(x_2101F7347, 2,FREEREF(0),return_);
  x_2100F7348 = FREEREF(0);
  testF7349 = YPfalse;
  bodyF7350 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2100F7348,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2100F7348,LITREF(lit_209),x_2101F7347);
    x_2100F7351 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2100F7351,x_2101F7347);
    testF7349 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2100F7351);
    x_2100F7352 = T8;
    bodyF7350 = x_2100F7352;
    x_2100F7353 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2100F7353,x_2101F7347);
    x_2100F7354 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2100F7354,x_2101F7347);
    T6 = CALL1(1,VARREF(Ytail),x_2100F7353);
    x_2100F7355 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2100F7355,x_2101F7347);
  } else {
    T10 = CALL2(1,x_2101F7347,LITREF(lit_7),x_2100F7348);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T19 = testF7349;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = bodyF7350;
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

FUNCODEDEF(fun_x_2109_107) {
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

FUNCODEDEF(fun_x_2113_108) {
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

FUNCODEDEF(fun_109) {
  P return_;
  P old_valueF7371;
  P nameF7370;
  P x_2112F7369;
  P x_2112F7368;
  P x_2112F7367;
  P x_2112F7366;
  P x_2112F7365;
  P x_2112F7364;
  P x_2112F7363;
  P x_2112F7362;
  P x_2112F7361;
  P restF7360;
  P valueF7359;
  P varF7358;
  P x_2112F7357;
  P x_2113F7356;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T55 = FUNSHELL(0,fun_x_2113_108,2);
  x_2113F7356 = T55;
  FUNINIT(x_2113F7356, 2,FREEREF(0),return_);
  T54 = BOXGET(FREEREF(0));
  x_2112F7357 = T54;
  varF7358 = YPfalse;
  valueF7359 = YPfalse;
  restF7360 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2112F7357,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2112F7357,x_2113F7356);
    x_2112F7361 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2112F7361,x_2113F7356);
    varF7358 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2112F7361);
    x_2112F7362 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2112F7362,x_2113F7356);
    valueF7359 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2112F7362);
    x_2112F7363 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2112F7363,x_2113F7356);
    x_2112F7364 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2112F7364,x_2113F7356);
    T11 = CALL1(1,VARREF(Ytail),x_2112F7363);
    x_2112F7365 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2112F7365,x_2113F7356);
    T17 = CALL1(1,VARREF(Ytail),x_2112F7357);
    x_2112F7366 = T17;
    restF7360 = x_2112F7366;
    x_2112F7367 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2112F7367,x_2113F7356);
    x_2112F7368 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2112F7368,x_2113F7356);
    T7 = CALL1(1,VARREF(Ytail),x_2112F7367);
    x_2112F7369 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2112F7369,x_2113F7356);
  } else {
    T18 = CALL2(1,x_2113F7356,LITREF(lit_7),x_2112F7357);
  }
  T53 = varF7358;
  T52 = CALL1(1,VARREF(YgooSmacrosYvar_name),T53);
  nameF7370 = T52;
  T51 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF7371 = T51;
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),old_valueF7371);
  T26 = CALL1(1,VARREF(Ylst),nameF7370);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_222));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T36 = CALL1(1,VARREF(Ylst),nameF7370);
  T38 = valueF7359;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T44 = restF7360;
  T43 = CALL2(1,VARREF(YgooSmacrosYcat),T44,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXGET(FREEREF(1));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T45,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T39,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T49 = CALL1(1,VARREF(Ylst),nameF7370);
  T50 = CALL1(1,VARREF(Ylst),old_valueF7371);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_11));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T46,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T27,LITREF(lit_11));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_x_2111_110) {
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
  P x_2110F7373;
  P x_2111F7372;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_2111_110,3);
  x_2111F7372 = T7;
  FUNINIT(x_2111F7372, 3,FREEREF(0),FREEREF(1),return_);
  T6 = BOXGET(FREEREF(0));
  x_2110F7373 = T6;
  T0 = CALL2(1,VARREF(YisaQ),x_2110F7373,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2110F7373,x_2111F7372);
  } else {
    T2 = CALL2(1,x_2111F7372,LITREF(lit_7),x_2110F7373);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T5 = BOXGET(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_112) {
  P return_;
  P x_2108F7382;
  P x_2108F7381;
  P x_2108F7380;
  P x_2108F7379;
  P x_2108F7378;
  P bodyF7377;
  P bindingsF7376;
  P x_2108F7375;
  P x_2109F7374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2109_107,2);
  x_2109F7374 = T13;
  FUNINIT(x_2109F7374, 2,FREEREF(0),return_);
  x_2108F7375 = FREEREF(0);
  bindingsF7376 = YPfalse;
  bindingsF7376 = BOXFAB(bindingsF7376);
  bodyF7377 = YPfalse;
  bodyF7377 = BOXFAB(bodyF7377);
  T2 = CALL2(1,VARREF(YisaQ),x_2108F7375,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2108F7375,LITREF(lit_214),x_2109F7374);
    x_2108F7378 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2108F7378,x_2109F7374);
    BOXPUT(T7,bindingsF7376);
    T8 = CALL1(1,VARREF(Ytail),x_2108F7378);
    x_2108F7379 = T8;
    BOXPUT(x_2108F7379,bodyF7377);
    x_2108F7380 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2108F7380,x_2109F7374);
    x_2108F7381 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2108F7381,x_2109F7374);
    T6 = CALL1(1,VARREF(Ytail),x_2108F7380);
    x_2108F7382 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2108F7382,x_2109F7374);
  } else {
    T10 = CALL2(1,x_2109F7374,LITREF(lit_7),x_2108F7375);
  }
  T12 = FUNFAB(fun_111,2,bindingsF7376,bodyF7377);
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

FUNCODEDEF(fun_x_2117_114) {
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
  P vnamF7394;
  P typF7393;
  P namF7392;
  P x_2116F7391;
  P x_2116F7390;
  P x_2116F7389;
  P x_2116F7388;
  P x_2116F7387;
  P valueF7386;
  P varF7385;
  P x_2116F7384;
  P x_2117F7383;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_2117_114,2);
  x_2117F7383 = T51;
  FUNINIT(x_2117F7383, 2,FREEREF(0),return_);
  x_2116F7384 = FREEREF(0);
  varF7385 = YPfalse;
  valueF7386 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2116F7384,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2116F7384,LITREF(lit_227),x_2117F7383);
    x_2116F7387 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2116F7387,x_2117F7383);
    varF7385 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2116F7387);
    x_2116F7388 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2116F7388,x_2117F7383);
    valueF7386 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2116F7388);
    x_2116F7389 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2116F7389,x_2117F7383);
    x_2116F7390 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2116F7390,x_2117F7383);
    T6 = CALL1(1,VARREF(Ytail),x_2116F7389);
    x_2116F7391 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2116F7391,x_2117F7383);
  } else {
    T12 = CALL2(1,x_2117F7383,LITREF(lit_7),x_2116F7384);
  }
  T50 = varF7385;
  T49 = CALL1(1,VARREF(YgooSmacrosYvar_name),T50);
  namF7392 = T49;
  T48 = varF7385;
  T47 = CALL1(1,VARREF(YgooSmacrosYvar_type),T48);
  typF7393 = T47;
  T46 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_228),namF7392,LITREF(lit_229));
  vnamF7394 = T46;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T18 = CALL1(1,VARREF(Ylst),vnamF7394);
  T20 = valueF7386;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T24 = CALL1(1,VARREF(Ylst),namF7392);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T28 = CALL1(1,VARREF(Ylst),typF7393);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = CALL1(1,VARREF(Ylst),vnamF7394);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T25,T29,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T34 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF7392);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T40 = CALL1(1,VARREF(Ylst),typF7393);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_11));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T44 = CALL1(1,VARREF(Ylst),vnamF7394);
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

FUNCODEDEF(fun_x_2121_117) {
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
  P x_2120F7401;
  P x_2120F7400;
  P x_2120F7399;
  P x_2120F7398;
  P bodyF7397;
  P x_2120F7396;
  P x_2121F7395;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_2121_117,2);
  x_2121F7395 = T17;
  FUNINIT(x_2121F7395, 2,FREEREF(0),return_);
  x_2120F7396 = FREEREF(0);
  bodyF7397 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2120F7396,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2120F7396,LITREF(lit_238),x_2121F7395);
    x_2120F7398 = T6;
    bodyF7397 = x_2120F7398;
    x_2120F7399 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2120F7399,x_2121F7395);
    x_2120F7400 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2120F7400,x_2121F7395);
    T5 = CALL1(1,VARREF(Ytail),x_2120F7399);
    x_2120F7401 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2120F7401,x_2121F7395);
  } else {
    T7 = CALL2(1,x_2121F7395,LITREF(lit_7),x_2120F7396);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T16 = bodyF7397;
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

FUNCODEDEF(fun_x_2125_120) {
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
  P x_2124F7408;
  P x_2124F7407;
  P x_2124F7406;
  P x_2124F7405;
  P namesF7404;
  P x_2124F7403;
  P x_2125F7402;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_2125_120,2);
  x_2125F7402 = T31;
  FUNINIT(x_2125F7402, 2,FREEREF(0),return_);
  x_2124F7403 = FREEREF(0);
  namesF7404 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2124F7403,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2124F7403,LITREF(lit_244),x_2125F7402);
    x_2124F7405 = T6;
    namesF7404 = x_2124F7405;
    x_2124F7406 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2124F7406,x_2125F7402);
    x_2124F7407 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2124F7407,x_2125F7402);
    T5 = CALL1(1,VARREF(Ytail),x_2124F7406);
    x_2124F7408 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2124F7408,x_2125F7402);
  } else {
    T7 = CALL2(1,x_2125F7402,LITREF(lit_7),x_2124F7403);
  }
  T10 = namesF7404;
  T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
    T16 = CALL1(1,VARREF(Ylst),YPfalse);
    T19 = namesF7404;
    T18 = CALL1(1,VARREF(Yhead),T19);
    T17 = CALL1(1,VARREF(Ylst),T18);
    T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T17,LITREF(lit_11));
    T13 = CALL1(1,VARREF(Ylst),T14);
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T25 = namesF7404;
    T24 = CALL1(1,VARREF(Yhead),T25);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_11));
    T20 = CALL1(1,VARREF(Ylst),T21);
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T30 = namesF7404;
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

FUNCODEDEF(fun_x_2153_123) {
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

FUNCODEDEF(fun_x_2177_124) {
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
  P x_2176F7414;
  P x_2176F7413;
  P x_2176F7412;
  P nameF7411;
  P x_2176F7410;
  P x_2177F7409;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T20 = FUNSHELL(0,fun_x_2177_124,1);
  x_2177F7409 = T20;
  FUNINIT(x_2177F7409, 1,return_);
  x_2176F7410 = FREEREF(0);
  nameF7411 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2176F7410,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2176F7410,x_2177F7409);
    nameF7411 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2176F7410);
    x_2176F7412 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2176F7412,x_2177F7409);
    x_2176F7413 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2176F7413,x_2177F7409);
    T5 = CALL1(1,VARREF(Ytail),x_2176F7412);
    x_2176F7414 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2176F7414,x_2177F7409);
  } else {
    T8 = CALL2(1,x_2177F7409,LITREF(lit_7),x_2176F7410);
  }
  T11 = nameF7411;
  T10 = CALL2(1,VARREF(YisaQ),T11,VARREF(YLsymG));
  if (T10 != YPfalse) {
    T14 = nameF7411;
    T13 = CALL1(1,VARREF(Ylst),T14);
    T17 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T19 = nameF7411;
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

FUNCODEDEF(fun_x_2174_126) {
  P msg_,args_;
  P x_2175F7415;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2175F7415 = FREEREF(0);
  T2 = FUNFAB(fun_125,1,x_2175F7415);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P return_;
  P x_2173F7424;
  P x_2173F7423;
  P x_2173F7422;
  P x_2173F7421;
  P x_2173F7420;
  P restF7419;
  P nameF7418;
  P x_2173F7417;
  P x_2174F7416;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2174_126,2);
  x_2174F7416 = T19;
  FUNINIT(x_2174F7416, 2,FREEREF(0),return_);
  x_2173F7417 = FREEREF(0);
  nameF7418 = YPfalse;
  restF7419 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2173F7417,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2173F7417,LITREF(lit_275),x_2174F7416);
    x_2173F7420 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2173F7420,x_2174F7416);
    nameF7418 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2173F7420);
    x_2173F7421 = T8;
    restF7419 = x_2173F7421;
    x_2173F7422 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2173F7422,x_2174F7416);
    x_2173F7423 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2173F7423,x_2174F7416);
    T6 = CALL1(1,VARREF(Ytail),x_2173F7422);
    x_2173F7424 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2173F7424,x_2174F7416);
  } else {
    T10 = CALL2(1,x_2174F7416,LITREF(lit_7),x_2173F7417);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF7418;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_2171_128) {
  P msg_,args_;
  P x_2172F7425;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2172F7425 = FREEREF(0);
  T2 = FUNFAB(fun_127,2,x_2172F7425,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  P return_;
  P x_2170F7434;
  P x_2170F7433;
  P x_2170F7432;
  P x_2170F7431;
  P x_2170F7430;
  P restF7429;
  P nameF7428;
  P x_2170F7427;
  P x_2171F7426;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2171_128,3);
  x_2171F7426 = T19;
  FUNINIT(x_2171F7426, 3,FREEREF(0),FREEREF(1),return_);
  x_2170F7427 = FREEREF(0);
  nameF7428 = YPfalse;
  restF7429 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2170F7427,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2170F7427,LITREF(lit_276),x_2171F7426);
    x_2170F7430 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2170F7430,x_2171F7426);
    nameF7428 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2170F7430);
    x_2170F7431 = T8;
    restF7429 = x_2170F7431;
    x_2170F7432 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2170F7432,x_2171F7426);
    x_2170F7433 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2170F7433,x_2171F7426);
    T6 = CALL1(1,VARREF(Ytail),x_2170F7432);
    x_2170F7434 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2170F7434,x_2171F7426);
  } else {
    T10 = CALL2(1,x_2171F7426,LITREF(lit_7),x_2170F7427);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF7428;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_2168_130) {
  P msg_,args_;
  P x_2169F7435;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2169F7435 = FREEREF(0);
  T2 = FUNFAB(fun_129,2,x_2169F7435,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P return_;
  P x_2167F7444;
  P x_2167F7443;
  P x_2167F7442;
  P x_2167F7441;
  P x_2167F7440;
  P restF7439;
  P nameF7438;
  P x_2167F7437;
  P x_2168F7436;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2168_130,3);
  x_2168F7436 = T19;
  FUNINIT(x_2168F7436, 3,FREEREF(0),FREEREF(1),return_);
  x_2167F7437 = FREEREF(0);
  nameF7438 = YPfalse;
  restF7439 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2167F7437,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2167F7437,LITREF(lit_277),x_2168F7436);
    x_2167F7440 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2167F7440,x_2168F7436);
    nameF7438 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2167F7440);
    x_2167F7441 = T8;
    restF7439 = x_2167F7441;
    x_2167F7442 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2167F7442,x_2168F7436);
    x_2167F7443 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2167F7443,x_2168F7436);
    T6 = CALL1(1,VARREF(Ytail),x_2167F7442);
    x_2167F7444 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2167F7444,x_2168F7436);
  } else {
    T10 = CALL2(1,x_2168F7436,LITREF(lit_7),x_2167F7437);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF7438;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_2165_132) {
  P msg_,args_;
  P x_2166F7445;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2166F7445 = FREEREF(0);
  T2 = FUNFAB(fun_131,2,x_2166F7445,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P x_2164F7454;
  P x_2164F7453;
  P x_2164F7452;
  P x_2164F7451;
  P x_2164F7450;
  P restF7449;
  P nameF7448;
  P x_2164F7447;
  P x_2165F7446;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2165_132,3);
  x_2165F7446 = T19;
  FUNINIT(x_2165F7446, 3,FREEREF(0),FREEREF(1),return_);
  x_2164F7447 = FREEREF(0);
  nameF7448 = YPfalse;
  restF7449 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2164F7447,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2164F7447,LITREF(lit_230),x_2165F7446);
    x_2164F7450 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2164F7450,x_2165F7446);
    nameF7448 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2164F7450);
    x_2164F7451 = T8;
    restF7449 = x_2164F7451;
    x_2164F7452 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2164F7452,x_2165F7446);
    x_2164F7453 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2164F7453,x_2165F7446);
    T6 = CALL1(1,VARREF(Ytail),x_2164F7452);
    x_2164F7454 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2164F7454,x_2165F7446);
  } else {
    T10 = CALL2(1,x_2165F7446,LITREF(lit_7),x_2164F7447);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF7448;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_2162_134) {
  P msg_,args_;
  P x_2163F7455;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2163F7455 = FREEREF(0);
  T2 = FUNFAB(fun_133,2,x_2163F7455,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P return_;
  P x_2161F7464;
  P x_2161F7463;
  P x_2161F7462;
  P x_2161F7461;
  P x_2161F7460;
  P restF7459;
  P nameF7458;
  P x_2161F7457;
  P x_2162F7456;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2162_134,3);
  x_2162F7456 = T19;
  FUNINIT(x_2162F7456, 3,FREEREF(0),FREEREF(1),return_);
  x_2161F7457 = FREEREF(0);
  nameF7458 = YPfalse;
  restF7459 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2161F7457,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2161F7457,LITREF(lit_278),x_2162F7456);
    x_2161F7460 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2161F7460,x_2162F7456);
    nameF7458 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2161F7460);
    x_2161F7461 = T8;
    restF7459 = x_2161F7461;
    x_2161F7462 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2161F7462,x_2162F7456);
    x_2161F7463 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2161F7463,x_2162F7456);
    T6 = CALL1(1,VARREF(Ytail),x_2161F7462);
    x_2161F7464 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2161F7464,x_2162F7456);
  } else {
    T10 = CALL2(1,x_2162F7456,LITREF(lit_7),x_2161F7457);
  }
  T13 = nameF7458;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF7458;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_2159_136) {
  P msg_,args_;
  P x_2160F7465;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2160F7465 = FREEREF(0);
  T2 = FUNFAB(fun_135,2,x_2160F7465,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P return_;
  P x_2158F7474;
  P x_2158F7473;
  P x_2158F7472;
  P x_2158F7471;
  P x_2158F7470;
  P restF7469;
  P nameF7468;
  P x_2158F7467;
  P x_2159F7466;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_2159_136,3);
  x_2159F7466 = T25;
  FUNINIT(x_2159F7466, 3,FREEREF(0),FREEREF(1),return_);
  x_2158F7467 = FREEREF(0);
  nameF7468 = YPfalse;
  restF7469 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2158F7467,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2158F7467,LITREF(lit_279),x_2159F7466);
    x_2158F7470 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2158F7470,x_2159F7466);
    nameF7468 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2158F7470);
    x_2158F7471 = T8;
    restF7469 = x_2158F7471;
    x_2158F7472 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2158F7472,x_2159F7466);
    x_2158F7473 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2158F7473,x_2159F7466);
    T6 = CALL1(1,VARREF(Ytail),x_2158F7472);
    x_2158F7474 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2158F7474,x_2159F7466);
  } else {
    T10 = CALL2(1,x_2159F7466,LITREF(lit_7),x_2158F7467);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF7468;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T24 = nameF7468;
  T23 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T24);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T14,T19,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_x_2156_138) {
  P msg_,args_;
  P x_2157F7475;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2157F7475 = FREEREF(0);
  T2 = FUNFAB(fun_137,2,x_2157F7475,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P return_;
  P x_2155F7484;
  P x_2155F7483;
  P x_2155F7482;
  P x_2155F7481;
  P x_2155F7480;
  P restF7479;
  P nameF7478;
  P x_2155F7477;
  P x_2156F7476;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_2156_138,3);
  x_2156F7476 = T19;
  FUNINIT(x_2156F7476, 3,FREEREF(0),FREEREF(1),return_);
  x_2155F7477 = FREEREF(0);
  nameF7478 = YPfalse;
  restF7479 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2155F7477,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2155F7477,LITREF(lit_280),x_2156F7476);
    x_2155F7480 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2155F7480,x_2156F7476);
    nameF7478 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2155F7480);
    x_2155F7481 = T8;
    restF7479 = x_2155F7481;
    x_2155F7482 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2155F7482,x_2156F7476);
    x_2155F7483 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2155F7483,x_2156F7476);
    T6 = CALL1(1,VARREF(Ytail),x_2155F7482);
    x_2155F7484 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2155F7484,x_2156F7476);
  } else {
    T10 = CALL2(1,x_2156F7476,LITREF(lit_7),x_2155F7477);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF7478;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_140) {
  P return_;
  P defsF7493;
  P x_2154F7492;
  P x_2152F7491;
  P x_2152F7490;
  P x_2152F7489;
  P x_2152F7488;
  P defF7487;
  P x_2152F7486;
  P x_2153F7485;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2153_123,2);
  x_2153F7485 = T13;
  FUNINIT(x_2153F7485, 2,FREEREF(0),return_);
  x_2152F7486 = FREEREF(0);
  defF7487 = YPfalse;
  defF7487 = BOXFAB(defF7487);
  T1 = CALL2(1,VARREF(YisaQ),x_2152F7486,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2152F7486,LITREF(lit_250),x_2153F7485);
    x_2152F7488 = T6;
    BOXPUT(x_2152F7488,defF7487);
    x_2152F7489 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2152F7489,x_2153F7485);
    x_2152F7490 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2152F7490,x_2153F7485);
    T5 = CALL1(1,VARREF(Ytail),x_2152F7489);
    x_2152F7491 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2152F7491,x_2153F7485);
  } else {
    T7 = CALL2(1,x_2153F7485,LITREF(lit_7),x_2152F7486);
  }
  T12 = BOXGET(defF7487);
  x_2154F7492 = T12;
  T11 = FUNFAB(fun_139,2,x_2154F7492,defF7487);
  T10 = with_exit(T11);
  defsF7493 = T10;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,defsF7493,LITREF(lit_11));
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

FUNCODEDEF(fun_x_2181_142) {
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

FUNCODEDEF(fun_143) {
  P x_;
  P xF7494;
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
  xF7494 = T2;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_250));
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,xF7494,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_144) {
  P return_;
  P x_2180F7501;
  P x_2180F7500;
  P x_2180F7499;
  P x_2180F7498;
  P defsF7497;
  P x_2180F7496;
  P x_2181F7495;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2181_142,2);
  x_2181F7495 = T13;
  FUNINIT(x_2181F7495, 2,FREEREF(0),return_);
  x_2180F7496 = FREEREF(0);
  defsF7497 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2180F7496,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2180F7496,LITREF(lit_285),x_2181F7495);
    x_2180F7498 = T6;
    defsF7497 = x_2180F7498;
    x_2180F7499 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2180F7499,x_2181F7495);
    x_2180F7500 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2180F7500,x_2181F7495);
    T5 = CALL1(1,VARREF(Ytail),x_2180F7499);
    x_2180F7501 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2180F7501,x_2181F7495);
  } else {
    T7 = CALL2(1,x_2181F7495,LITREF(lit_7),x_2180F7496);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T11 = fun_143;
  T12 = defsF7497;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),T11,T12);
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,T10,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_145) {
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
  T0 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYOchecked_next_methods = YPmet(FUNCODEREF(YgooSmacrosYOchecked_next_methods),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(10));
  T1 = YgooSmacrosYOchecked_next_methods;
  VARSET(YgooSmacrosYOchecked_next_methods,T1);
  lit_2 = YPPlist(1,YPPsym((P)"exp"));
  lit_3 = YPPlist(1,YPPsym((P)"return"));
  lit_4 = YPPsym((P)"x-1957");
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
  fun_x_1957_1 = YPmet(FUNCODEREF(fun_x_1957_1),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T3 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T5 = fun_3;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T5);
  lit_17 = YPPlist(1,YPPsym((P)"exp"));
  lit_18 = YPPlist(1,YPPsym((P)"return"));
  lit_19 = YPPsym((P)"x-1961");
  lit_20 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_21 = YPPsym((P)"app-sup");
  T8 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1961_4 = YPmet(FUNCODEREF(fun_x_1961_4),LITREF(lit_19),T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T9 = fun_6;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T9);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  lit_23 = YPPlist(1,YPPsym((P)"return"));
  lit_24 = YPPsym((P)"x-1965");
  lit_25 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_26 = YPPsym((P)"app");
  T12 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1965_7 = YPmet(FUNCODEREF(fun_x_1965_7),LITREF(lit_24),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T13 = fun_9;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T13);
  lit_27 = YPPlist(1,YPPsym((P)"exp"));
  lit_28 = YPPlist(1,YPPsym((P)"return"));
  lit_29 = YPPsym((P)"x-1969");
  lit_30 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_31 = YPPsym((P)"renew");
  lit_32 = YPPsym((P)"set");
  T16 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1969_10 = YPmet(FUNCODEREF(fun_x_1969_10),LITREF(lit_29),T16,ENVNUL,PNUL,YPfalse);
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
  lit_39 = YPPsym((P)"x-1975");
  lit_40 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_41 = YPPsym((P)"incf");
  lit_42 = YPPlist(1,YPPsym((P)"return"));
  lit_43 = YPPsym((P)"x-1977");
  lit_44 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_45 = YPPsym((P)"+");
  T27 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1975_15 = YPmet(FUNCODEREF(fun_x_1975_15),LITREF(lit_39),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1977_16 = YPmet(FUNCODEREF(fun_x_1977_16),LITREF(lit_43),T26,ENVNUL,PNUL,YPfalse);
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
  lit_48 = YPPsym((P)"x-1983");
  lit_49 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_50 = YPPsym((P)"decf");
  lit_51 = YPPlist(1,YPPsym((P)"return"));
  lit_52 = YPPsym((P)"x-1985");
  lit_53 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_54 = YPPsym((P)"-");
  T33 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1983_20 = YPmet(FUNCODEREF(fun_x_1983_20),LITREF(lit_48),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1985_21 = YPmet(FUNCODEREF(fun_x_1985_21),LITREF(lit_52),T32,ENVNUL,PNUL,YPfalse);
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
  lit_57 = YPPsym((P)"x-1989");
  lit_58 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_59 = YPPsym((P)"pushf");
  lit_60 = YPPsym((P)"push!");
  T37 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1989_25 = YPmet(FUNCODEREF(fun_x_1989_25),LITREF(lit_57),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T38 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T38);
  lit_61 = YPPlist(1,YPPsym((P)"exp"));
  lit_62 = YPPlist(1,YPPsym((P)"return"));
  lit_63 = YPPsym((P)"x-1993");
  lit_64 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_65 = YPPsym((P)"swapf");
  T41 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1993_28 = YPmet(FUNCODEREF(fun_x_1993_28),LITREF(lit_63),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T42 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T42);
  lit_66 = YPPlist(1,YPPsym((P)"exp"));
  lit_67 = YPPlist(1,YPPsym((P)"return"));
  lit_68 = YPPsym((P)"x-1997");
  lit_69 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_70 = YPPsym((P)"rotf");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  lit_72 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  lit_73 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"t"));
  T48 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1997_31 = YPmet(FUNCODEREF(fun_x_1997_31),LITREF(lit_68),T48,ENVNUL,PNUL,YPfalse);
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
  lit_76 = YPPsym((P)"x-2001");
  lit_77 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_78 = YPPsym((P)"popf");
  lit_79 = YPPsym((P)"tup");
  lit_80 = YPPsym((P)"pop!");
  T52 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2001_37 = YPmet(FUNCODEREF(fun_x_2001_37),LITREF(lit_76),T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T53 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T53);
  lit_81 = YPPlist(1,YPPsym((P)"exp"));
  lit_82 = YPPlist(1,YPPsym((P)"return"));
  lit_83 = YPPsym((P)"x-2005");
  lit_84 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_85 = YPPsym((P)"opf");
  lit_86 = YPPsym((P)"_");
  T56 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2005_40 = YPmet(FUNCODEREF(fun_x_2005_40),LITREF(lit_83),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T57 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T57);
  lit_87 = YPPlist(1,YPPsym((P)"exp"));
  lit_88 = YPPlist(1,YPPsym((P)"return"));
  lit_89 = YPPsym((P)"x-2009");
  lit_90 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_91 = YPPsym((P)"or/set");
  lit_92 = YPPsym((P)"or");
  T60 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2009_43 = YPmet(FUNCODEREF(fun_x_2009_43),LITREF(lit_89),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(LITREF(lit_88),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T61 = fun_45;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or/set"),T61);
  lit_93 = YPPlist(1,YPPsym((P)"exp"));
  lit_94 = YPPlist(1,YPPsym((P)"return"));
  lit_95 = YPPsym((P)"x-2013");
  lit_96 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_97 = YPPsym((P)"unless");
  lit_98 = YPPsym((P)"if");
  lit_99 = YPPsym((P)"not");
  lit_100 = YPPsym((P)"seq");
  T64 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2013_46 = YPmet(FUNCODEREF(fun_x_2013_46),LITREF(lit_95),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T65 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T65);
  lit_101 = YPPlist(1,YPPsym((P)"exp"));
  lit_102 = YPPlist(1,YPPsym((P)"return"));
  lit_103 = YPPsym((P)"x-2017");
  lit_104 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_105 = YPPsym((P)"when");
  T68 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2017_49 = YPmet(FUNCODEREF(fun_x_2017_49),LITREF(lit_103),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T69 = fun_51;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T69);
  lit_106 = YPPlist(1,YPPsym((P)"exp"));
  lit_107 = YPPlist(1,YPPsym((P)"return"));
  lit_108 = YPPsym((P)"x-2025");
  lit_109 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_110 = YPPlist(1,YPPsym((P)"return"));
  lit_111 = YPPsym((P)"x-2027");
  lit_112 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_113 = YPPlist(1,YPPsym((P)"return"));
  lit_114 = YPPsym((P)"x-2029");
  lit_115 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_116 = YPPsym((P)"tmp");
  T76 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2025_52 = YPmet(FUNCODEREF(fun_x_2025_52),LITREF(lit_108),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2027_53 = YPmet(FUNCODEREF(fun_x_2027_53),LITREF(lit_111),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2029_54 = YPmet(FUNCODEREF(fun_x_2029_54),LITREF(lit_114),T74,ENVNUL,PNUL,YPfalse);
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
  lit_119 = YPPsym((P)"x-2037");
  lit_120 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_121 = YPPsym((P)"and");
  lit_122 = YPPlist(1,YPPsym((P)"return"));
  lit_123 = YPPsym((P)"x-2039");
  lit_124 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_125 = YPPlist(1,YPPsym((P)"return"));
  lit_126 = YPPsym((P)"x-2041");
  lit_127 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T84 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2037_59 = YPmet(FUNCODEREF(fun_x_2037_59),LITREF(lit_119),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2039_60 = YPmet(FUNCODEREF(fun_x_2039_60),LITREF(lit_123),T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2041_61 = YPmet(FUNCODEREF(fun_x_2041_61),LITREF(lit_126),T82,ENVNUL,PNUL,YPfalse);
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
  lit_130 = YPPsym((P)"x-2047");
  lit_131 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_132 = YPPsym((P)"cond");
  lit_133 = YPPlist(1,YPPsym((P)"return"));
  lit_134 = YPPsym((P)"x-2049");
  lit_135 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_136 = YPsb((P)"bad case %=");
  T90 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2047_66 = YPmet(FUNCODEREF(fun_x_2047_66),LITREF(lit_130),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2049_67 = YPmet(FUNCODEREF(fun_x_2049_67),LITREF(lit_134),T89,ENVNUL,PNUL,YPfalse);
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
  lit_140 = YPPsym((P)"x-2055");
  lit_141 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_142 = YPsb((P)"bad case %=");
  lit_143 = YPPlist(1,YPPsym((P)"return"));
  lit_144 = YPPsym((P)"x-2057");
  lit_145 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_146 = YPsb((P)"bad case %=");
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2055_71 = YPmet(FUNCODEREF(fun_x_2055_71),LITREF(lit_140),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2057_72 = YPmet(FUNCODEREF(fun_x_2057_72),LITREF(lit_144),T96,ENVNUL,PNUL,YPfalse);
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
  lit_150 = YPPsym((P)"x-2061");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPsym((P)"case-by");
  T101 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2061_77 = YPmet(FUNCODEREF(fun_x_2061_77),LITREF(lit_150),T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T102 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T102);
  lit_153 = YPPlist(1,YPPsym((P)"exp"));
  lit_154 = YPPlist(1,YPPsym((P)"return"));
  lit_155 = YPPsym((P)"x-2065");
  lit_156 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_157 = YPPsym((P)"case");
  lit_158 = YPPsym((P)"==");
  T105 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2065_80 = YPmet(FUNCODEREF(fun_x_2065_80),LITREF(lit_155),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T106 = fun_82;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T106);
  lit_159 = YPPlist(1,YPPsym((P)"exp"));
  lit_160 = YPPlist(1,YPPsym((P)"return"));
  lit_161 = YPPsym((P)"x-2073");
  lit_162 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_163 = YPPsym((P)"match");
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-2075");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-2077");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPsb((P)"invalid match syntax.");
  lit_171 = YPPsym((P)"mif");
  lit_172 = YPPsym((P)"syntax-error");
  lit_173 = YPsb((P)"failed to match.");
  T113 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2073_83 = YPmet(FUNCODEREF(fun_x_2073_83),LITREF(lit_161),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2077_84 = YPmet(FUNCODEREF(fun_x_2077_84),LITREF(lit_168),T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2075_86 = YPmet(FUNCODEREF(fun_x_2075_86),LITREF(lit_165),T110,ENVNUL,PNUL,YPfalse);
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
  lit_176 = YPPsym((P)"x-2081");
  lit_177 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_178 = YPPsym((P)"assert");
  lit_179 = YPPsym((P)"assert-error");
  T117 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2081_90 = YPmet(FUNCODEREF(fun_x_2081_90),LITREF(lit_176),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T118 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T118);
  lit_180 = YPPlist(1,YPPsym((P)"exp"));
  lit_181 = YPPlist(1,YPPsym((P)"return"));
  lit_182 = YPPsym((P)"x-2089");
  lit_183 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_184 = YPPsym((P)"for");
  lit_185 = YPPsym((P)"grok");
  lit_186 = YPPlist(5,YPPsym((P)"clauses"),YPPsym((P)"inits"),YPPsym((P)"preds"),YPPsym((P)"nows"),YPPsym((P)"nexts"));
  lit_187 = YPPsym((P)"rep");
  lit_188 = YPPlist(1,YPPsym((P)"return"));
  lit_189 = YPPsym((P)"x-2091");
  lit_190 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_191 = YPPsym((P)"enum");
  lit_192 = YPPsym((P)"fin?");
  lit_193 = YPPlist(1,YPPsym((P)"return"));
  lit_194 = YPPsym((P)"x-2093");
  lit_195 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_196 = YPPsym((P)"now");
  lit_197 = YPPsym((P)"now-key");
  lit_198 = YPPsym((P)"nxt");
  T126 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2089_93 = YPmet(FUNCODEREF(fun_x_2089_93),LITREF(lit_182),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2091_94 = YPmet(FUNCODEREF(fun_x_2091_94),LITREF(lit_189),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2093_95 = YPmet(FUNCODEREF(fun_x_2093_95),LITREF(lit_194),T124,ENVNUL,PNUL,YPfalse);
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
  lit_201 = YPPsym((P)"x-2097");
  lit_202 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_203 = YPPsym((P)"while");
  lit_204 = YPPsym((P)"_loop");
  T130 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2097_101 = YPmet(FUNCODEREF(fun_x_2097_101),LITREF(lit_201),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T131 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T131);
  lit_205 = YPPlist(1,YPPsym((P)"exp"));
  lit_206 = YPPlist(1,YPPsym((P)"return"));
  lit_207 = YPPsym((P)"x-2101");
  lit_208 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_209 = YPPsym((P)"until");
  T134 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2101_104 = YPmet(FUNCODEREF(fun_x_2101_104),LITREF(lit_207),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T135);
  lit_210 = YPPlist(1,YPPsym((P)"exp"));
  lit_211 = YPPlist(1,YPPsym((P)"return"));
  lit_212 = YPPsym((P)"x-2109");
  lit_213 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_214 = YPPsym((P)"dlet");
  lit_215 = YPPlist(1,YPPsym((P)"return"));
  lit_216 = YPPsym((P)"x-2111");
  lit_217 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_218 = YPPlist(1,YPPsym((P)"return"));
  lit_219 = YPPsym((P)"x-2113");
  lit_220 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_221 = YPsb((P)"Bad dlet bindings %=");
  lit_222 = YPPsym((P)"fin");
  T142 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2109_107 = YPmet(FUNCODEREF(fun_x_2109_107),LITREF(lit_212),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2113_108 = YPmet(FUNCODEREF(fun_x_2113_108),LITREF(lit_219),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2111_110 = YPmet(FUNCODEREF(fun_x_2111_110),LITREF(lit_216),T139,ENVNUL,PNUL,YPfalse);
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
  lit_225 = YPPsym((P)"x-2117");
  lit_226 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_227 = YPPsym((P)"def-fun-var");
  lit_228 = YPsb((P)"*");
  lit_229 = YPsb((P)"*");
  lit_230 = YPPsym((P)"dv");
  lit_231 = YPPsym((P)"dm");
  lit_232 = YPPsym((P)"=>");
  lit_233 = YPPsym((P)"z");
  T146 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2117_114 = YPmet(FUNCODEREF(fun_x_2117_114),LITREF(lit_225),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T147 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T147);
  lit_234 = YPPlist(1,YPPsym((P)"exp"));
  lit_235 = YPPlist(1,YPPsym((P)"return"));
  lit_236 = YPPsym((P)"x-2121");
  lit_237 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_238 = YPPsym((P)"without-prop-unbound-errors");
  lit_239 = YPPsym((P)"*report-prop-unbound-errors?*");
  T150 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2121_117 = YPmet(FUNCODEREF(fun_x_2121_117),LITREF(lit_236),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T151 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T151);
  lit_240 = YPPlist(1,YPPsym((P)"exp"));
  lit_241 = YPPlist(1,YPPsym((P)"return"));
  lit_242 = YPPsym((P)"x-2125");
  lit_243 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_244 = YPPsym((P)"need-implementation");
  lit_245 = YPPsym((P)"export");
  T154 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2125_120 = YPmet(FUNCODEREF(fun_x_2125_120),LITREF(lit_242),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_241),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T155 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T155);
  lit_246 = YPPlist(1,YPPsym((P)"exp"));
  lit_247 = YPPlist(1,YPPsym((P)"return"));
  lit_248 = YPPsym((P)"x-2153");
  lit_249 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_250 = YPPsym((P)"pub");
  lit_251 = YPPlist(1,YPPsym((P)"return"));
  lit_252 = YPPsym((P)"x-2156");
  lit_253 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_254 = YPPlist(1,YPPsym((P)"return"));
  lit_255 = YPPsym((P)"x-2159");
  lit_256 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_257 = YPPlist(1,YPPsym((P)"return"));
  lit_258 = YPPsym((P)"x-2162");
  lit_259 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_260 = YPPlist(1,YPPsym((P)"return"));
  lit_261 = YPPsym((P)"x-2165");
  lit_262 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_263 = YPPlist(1,YPPsym((P)"return"));
  lit_264 = YPPsym((P)"x-2168");
  lit_265 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_266 = YPPlist(1,YPPsym((P)"return"));
  lit_267 = YPPsym((P)"x-2171");
  lit_268 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_269 = YPPlist(1,YPPsym((P)"return"));
  lit_270 = YPPsym((P)"x-2174");
  lit_271 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_272 = YPPlist(1,YPPsym((P)"return"));
  lit_273 = YPPsym((P)"x-2177");
  lit_274 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_275 = YPPsym((P)"dc");
  lit_276 = YPPsym((P)"dg");
  lit_277 = YPPsym((P)"d.");
  lit_278 = YPPsym((P)"df");
  lit_279 = YPPsym((P)"dp!");
  lit_280 = YPPsym((P)"dp");
  T174 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2153_123 = YPmet(FUNCODEREF(fun_x_2153_123),LITREF(lit_248),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(LITREF(lit_274),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2177_124 = YPmet(FUNCODEREF(fun_x_2177_124),LITREF(lit_273),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2174_126 = YPmet(FUNCODEREF(fun_x_2174_126),LITREF(lit_270),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(LITREF(lit_269),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2171_128 = YPmet(FUNCODEREF(fun_x_2171_128),LITREF(lit_267),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2168_130 = YPmet(FUNCODEREF(fun_x_2168_130),LITREF(lit_264),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2165_132 = YPmet(FUNCODEREF(fun_x_2165_132),LITREF(lit_261),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2162_134 = YPmet(FUNCODEREF(fun_x_2162_134),LITREF(lit_258),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2159_136 = YPmet(FUNCODEREF(fun_x_2159_136),LITREF(lit_255),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_254),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2156_138 = YPmet(FUNCODEREF(fun_x_2156_138),LITREF(lit_252),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T175 = fun_141;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T175);
  lit_281 = YPPlist(1,YPPsym((P)"exp"));
  lit_282 = YPPlist(1,YPPsym((P)"return"));
  lit_283 = YPPsym((P)"x-2181");
  lit_284 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_285 = YPPsym((P)"exported");
  lit_286 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPsig(LITREF(lit_284),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2181_142 = YPmet(FUNCODEREF(fun_x_2181_142),LITREF(lit_283),T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(LITREF(lit_286),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(LITREF(lit_282),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(LITREF(lit_281),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPmet(FUNCODEREF(fun_145),YPfalse,T176,ENVNUL,PNUL,YPfalse);
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
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"match", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"dlet", PVAR, NULL},
  {"opf", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"def-fun-var", PVAR, NULL},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"until", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"==", CVAR, &YgooSmacrosYEE},
  {"case", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"pushf", PVAR, NULL},
  {"when", PVAR, NULL},
  {"sup", PVAR, NULL},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"popf", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"decf", PVAR, NULL},
  {"for", PVAR, NULL},
  {"or/set", PVAR, NULL},
  {"@checked-next-methods", CVAR, &YgooSmacrosYOchecked_next_methods},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"renew", PVAR, NULL},
  {"case-by", PVAR, NULL},
  {"match-empty-list", CVAR, &YgooSmacrosYmatch_empty_list},
  {"pub", PVAR, NULL},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"unless", PVAR, NULL},
  {"and", PVAR, NULL},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"app", PVAR, NULL},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"last", CVAR, &YgooSmacrosYlast},
  {"map", CVAR, &YgooSmacrosYmap},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"need-implementation", PVAR, NULL},
  {"rotf", PVAR, NULL},
  {"or", PVAR, NULL},
  {"do", CVAR, &YgooSmacrosYdo},
  {"---main-1---", PVAR, NULL},
  {"assert", PVAR, NULL},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"app-sup", PVAR, NULL},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"while", PVAR, NULL},
  {"incf", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"match", NULL},
  {"swapf", NULL},
  {"match-sublist", NULL},
  {"dlet", NULL},
  {"opf", NULL},
  {"exported", NULL},
  {"map2", NULL},
  {"def-fun-var", NULL},
  {"rev!", NULL},
  {"napp", NULL},
  {"match-atom", NULL},
  {"==", NULL},
  {"case", NULL},
  {"cond", NULL},
  {"var-type", NULL},
  {"pushf", NULL},
  {"macro-error", NULL},
  {"when", NULL},
  {"sup", NULL},
  {"match-unquote", NULL},
  {"lift-place-subforms", NULL},
  {"empty?", NULL},
  {"tup", NULL},
  {"popf", NULL},
  {"without-prop-unbound-errors", NULL},
  {"for", NULL},
  {"until", NULL},
  {"pair", NULL},
  {"renew", NULL},
  {"case-by", NULL},
  {"match-empty-list", NULL},
  {"pub", NULL},
  {"var-name", NULL},
  {"unless", NULL},
  {"decf", NULL},
  {"and", NULL},
  {"@checked-next-methods", NULL},
  {"cat", NULL},
  {"app", NULL},
  {"fab-setter-name", NULL},
  {"last", NULL},
  {"map", NULL},
  {"gensym", NULL},
  {"need-implementation", NULL},
  {"rotf", NULL},
  {"or", NULL},
  {"do", NULL},
  {"or/set", NULL},
  {"error", NULL},
  {"assert", NULL},
  {"2nd", NULL},
  {"app-sup", NULL},
  {"cat-sym", NULL},
  {"1st", NULL},
  {"elt", NULL},
  {"while", NULL},
  {"incf", NULL},
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
