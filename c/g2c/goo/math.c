/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/math");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/math */

EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSmathYatan,"goo/math","atan");
DEF(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YgooSmathY1_,"goo/math","1-");
DEF(YgooSmathYabs,"goo/math","abs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmathY_,"goo/math","-");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ynul,"goo/boot","nul");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSmathYcosh,"goo/math","cosh");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooSmathYC,"goo/math","^");
DEF(YgooSmathYDe,"goo/math","$e");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSmathYrem,"goo/math","rem");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooSmathYNE,"goo/math","~=");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSmathYneg,"goo/math","neg");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSmathYroundS,"goo/math","round/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yerror,"goo/boot","error");
DEF(YgooSmathYsin,"goo/math","sin");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooSmathYacos,"goo/math","acos");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooSmathYfabs,"goo/math","fabs");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSmathYGG,"goo/math",">>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSmathYK,"goo/math","|");
DEF(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooSmathYlogn,"goo/math","logn");
DEF(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooSmathYA,"goo/math","+");
DEF(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooSmathYas_log,"goo/math","as-log");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSmathYmod,"goo/math","mod");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooSmathYround_to,"goo/math","round-to");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YgooSmathYasin,"goo/math","asin");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSmathYround,"goo/math","round");
DEF(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooSmathYN,"goo/math","~");
DEF(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSmathYGGG,"goo/math",">>>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ylst,"goo/boot","lst");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSmathYT,"goo/math","*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooSmathYmod_,"goo/math","mod-");
EXT(Yclone,"goo/boot","clone");
DEF(YgooSmathYB,"goo/math","&");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSmathYpow,"goo/math","pow");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_of,"goo/boot","class-of");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSmathYcos,"goo/math","cos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLsymG,"goo/boot","<sym>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_108);
DEFLIT(lit_247);
DEFLIT(lit_177);
DEFLIT(lit_137);
DEFLIT(lit_245);
DEFLIT(lit_58);
DEFLIT(lit_171);
DEFLIT(lit_225);
DEFLIT(lit_186);
DEFLIT(lit_43);
DEFLIT(lit_192);
DEFLIT(lit_60);
DEFLIT(lit_240);
DEFLIT(lit_78);
DEFLIT(lit_145);
DEFLIT(lit_105);
DEFLIT(lit_135);
DEFLIT(lit_205);
DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_111);
DEFLIT(lit_132);
DEFLIT(lit_123);
DEFLIT(lit_250);
DEFLIT(lit_59);
DEFLIT(lit_188);
DEFLIT(lit_139);
DEFLIT(lit_70);
DEFLIT(lit_95);
DEFLIT(lit_242);
DEFLIT(lit_249);
DEFLIT(lit_131);
DEFLIT(lit_170);
DEFLIT(lit_183);
DEFLIT(lit_117);
DEFLIT(lit_221);
DEFLIT(lit_90);
DEFLIT(lit_207);
DEFLIT(lit_253);
DEFLIT(lit_215);
DEFLIT(lit_219);
DEFLIT(lit_94);
DEFLIT(lit_227);
DEFLIT(lit_231);
DEFLIT(lit_197);
DEFLIT(lit_148);
DEFLIT(lit_40);
DEFLIT(lit_206);
DEFLIT(lit_236);
DEFLIT(lit_24);
DEFLIT(lit_3);
DEFLIT(lit_199);
DEFLIT(lit_17);
DEFLIT(lit_230);
DEFLIT(lit_190);
DEFLIT(lit_181);
DEFLIT(lit_189);
DEFLIT(lit_150);
DEFLIT(lit_157);
DEFLIT(lit_46);
DEFLIT(lit_158);
DEFLIT(lit_182);
DEFLIT(lit_161);
DEFLIT(lit_76);
DEFLIT(lit_61);
DEFLIT(lit_6);
DEFLIT(lit_113);
DEFLIT(lit_116);
DEFLIT(lit_100);
DEFLIT(lit_216);
DEFLIT(lit_146);
DEFLIT(lit_114);
DEFLIT(lit_193);
DEFLIT(lit_156);
DEFLIT(lit_211);
DEFLIT(lit_144);
DEFLIT(lit_35);
DEFLIT(lit_196);
DEFLIT(lit_248);
DEFLIT(lit_128);
DEFLIT(lit_134);
DEFLIT(lit_68);
DEFLIT(lit_222);
DEFLIT(lit_86);
DEFLIT(lit_104);
DEFLIT(lit_152);
DEFLIT(lit_102);
DEFLIT(lit_138);
DEFLIT(lit_29);
DEFLIT(lit_57);
DEFLIT(lit_127);
DEFLIT(lit_53);
DEFLIT(lit_140);
DEFLIT(lit_203);
DEFLIT(lit_66);
DEFLIT(lit_34);
DEFLIT(lit_67);
DEFLIT(lit_71);
DEFLIT(lit_176);
DEFLIT(lit_26);
DEFLIT(lit_107);
DEFLIT(lit_65);
DEFLIT(lit_4);
DEFLIT(lit_234);
DEFLIT(lit_153);
DEFLIT(lit_208);
DEFLIT(lit_246);
DEFLIT(lit_162);
DEFLIT(lit_195);
DEFLIT(lit_23);
DEFLIT(lit_160);
DEFLIT(lit_200);
DEFLIT(lit_97);
DEFLIT(lit_18);
DEFLIT(lit_168);
DEFLIT(lit_56);
DEFLIT(lit_75);
DEFLIT(lit_121);
DEFLIT(lit_233);
DEFLIT(lit_120);
DEFLIT(lit_151);
DEFLIT(lit_133);
DEFLIT(lit_25);
DEFLIT(lit_30);
DEFLIT(lit_8);
DEFLIT(lit_39);
DEFLIT(lit_80);
DEFLIT(lit_44);
DEFLIT(lit_185);
DEFLIT(lit_49);
DEFLIT(lit_19);
DEFLIT(lit_204);
DEFLIT(lit_38);
DEFLIT(lit_163);
DEFLIT(lit_251);
DEFLIT(lit_14);
DEFLIT(lit_27);
DEFLIT(lit_112);
DEFLIT(lit_214);
DEFLIT(lit_238);
DEFLIT(lit_103);
DEFLIT(lit_212);
DEFLIT(lit_220);
DEFLIT(lit_179);
DEFLIT(lit_224);
DEFLIT(lit_159);
DEFLIT(lit_241);
DEFLIT(lit_229);
DEFLIT(lit_130);
DEFLIT(lit_210);
DEFLIT(lit_79);
DEFLIT(lit_174);
DEFLIT(lit_141);
DEFLIT(lit_109);
DEFLIT(lit_20);
DEFLIT(lit_22);
DEFLIT(lit_217);
DEFLIT(lit_252);
DEFLIT(lit_213);
DEFLIT(lit_7);
DEFLIT(lit_52);
DEFLIT(lit_154);
DEFLIT(lit_33);
DEFLIT(lit_194);
DEFLIT(lit_237);
DEFLIT(lit_244);
DEFLIT(lit_77);
DEFLIT(lit_93);
DEFLIT(lit_64);
DEFLIT(lit_5);
DEFLIT(lit_223);
DEFLIT(lit_45);
DEFLIT(lit_51);
DEFLIT(lit_48);
DEFLIT(lit_149);
DEFLIT(lit_226);
DEFLIT(lit_136);
DEFLIT(lit_101);
DEFLIT(lit_129);
DEFLIT(lit_165);
DEFLIT(lit_147);
DEFLIT(lit_89);
DEFLIT(lit_69);
DEFLIT(lit_115);
DEFLIT(lit_87);
DEFLIT(lit_72);
DEFLIT(lit_124);
DEFLIT(lit_98);
DEFLIT(lit_232);
DEFLIT(lit_125);
DEFLIT(lit_92);
DEFLIT(lit_239);
DEFLIT(lit_235);
DEFLIT(lit_202);
DEFLIT(lit_184);
DEFLIT(lit_167);
DEFLIT(lit_166);
DEFLIT(lit_73);
DEFLIT(lit_119);
DEFLIT(lit_173);
DEFLIT(lit_201);
DEFLIT(lit_175);
DEFLIT(lit_21);
DEFLIT(lit_12);
DEFLIT(lit_81);
DEFLIT(lit_122);
DEFLIT(lit_42);
DEFLIT(lit_16);
DEFLIT(lit_178);
DEFLIT(lit_91);
DEFLIT(lit_41);
DEFLIT(lit_28);
DEFLIT(lit_84);
DEFLIT(lit_82);
DEFLIT(lit_13);
DEFLIT(lit_2);
DEFLIT(lit_83);
DEFLIT(lit_10);
DEFLIT(lit_243);
DEFLIT(lit_172);
DEFLIT(lit_36);
DEFLIT(lit_63);
DEFLIT(lit_198);
DEFLIT(lit_96);
DEFLIT(lit_55);
DEFLIT(lit_9);
DEFLIT(lit_110);
DEFLIT(lit_143);
DEFLIT(lit_180);
DEFLIT(lit_142);
DEFLIT(lit_218);
DEFLIT(lit_209);
DEFLIT(lit_228);
DEFLIT(lit_187);
DEFLIT(lit_74);
DEFLIT(lit_191);
DEFLIT(lit_37);
DEFLIT(lit_54);
DEFLIT(lit_85);
DEFLIT(lit_99);
DEFLIT(lit_0);
DEFLIT(lit_126);
DEFLIT(lit_31);
DEFLIT(lit_169);
DEFLIT(lit_118);
DEFLIT(lit_62);
DEFLIT(lit_164);
DEFLIT(lit_47);
DEFLIT(lit_32);
DEFLIT(lit_155);
DEFLIT(lit_106);
DEFLIT(lit_50);
DEFLIT(lit_88);

/* FUNCTIONS: */

LOCFOR(fun_to_str_0);
FUNFOR(YgooSmathYaddress_of);
LOCFOR(fun_to_str_2);
LOCFOR(fun_to_str_3);
LOCFOR(fun_as_4);
FUNFOR(YgooSmathYas_log);
LOCFOR(fun_EE_6);
LOCFOR(fun_E_7);
LOCFOR(fun_NE_8);
LOCFOR(fun_NEE_9);
LOCFOR(fun_as_10);
LOCFOR(fun_as_11);
LOCFOR(fun_L_12);
LOCFOR(fun_EE_13);
LOCFOR(fun_lowerQ_14);
LOCFOR(fun_upperQ_15);
LOCFOR(fun_to_lower_16);
LOCFOR(fun_to_upper_17);
LOCFOR(fun_to_digit_18);
LOCFOR(fun_to_str_19);
LOCFOR(fun_alphaQ_20);
LOCFOR(fun_digitQ_21);
LOCFOR(fun_eof_objectQ_22);
LOCFOR(fun_eof_objectQ_23);
LOCFOR(fun_eof_object_24);
LOCFOR(fun_contagious_call_25);
LOCFOR(fun_L_26);
LOCFOR(fun_A_27);
LOCFOR(fun_1A_28);
LOCFOR(fun___29);
LOCFOR(fun_1__30);
LOCFOR(fun_T_31);
LOCFOR(fun_S_32);
LOCFOR(fun_atan2_33);
LOCFOR(fun_logn_34);
LOCFOR(fun_floor_35);
LOCFOR(fun_ceil_36);
LOCFOR(fun_round_37);
LOCFOR(fun_round_to_38);
LOCFOR(fun_trunc_39);
LOCFOR(fun_floorS_40);
LOCFOR(fun_ceilS_41);
LOCFOR(fun_roundS_42);
LOCFOR(fun_truncS_43);
LOCFOR(fun_div_44);
LOCFOR(fun_mod_45);
LOCFOR(fun_modA_46);
LOCFOR(fun_mod__47);
LOCFOR(fun_x_1292_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_x_1296_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_rem_54);
LOCFOR(fun_pow_55);
LOCFOR(fun_posQ_56);
LOCFOR(fun_zeroQ_57);
LOCFOR(fun_negQ_58);
LOCFOR(fun_neg_59);
LOCFOR(fun_abs_60);
LOCFOR(fun_to_str_61);
LOCFOR(fun_contagious_type_62);
LOCFOR(fun_contagious_type_63);
LOCFOR(fun_contagious_type_64);
LOCFOR(fun_contagious_type_65);
LOCFOR(fun_EE_66);
LOCFOR(fun_L_67);
LOCFOR(fun_A_68);
LOCFOR(fun___69);
LOCFOR(fun_T_70);
LOCFOR(fun_S_71);
LOCFOR(fun_floor_72);
LOCFOR(fun_ceil_73);
LOCFOR(fun_round_74);
LOCFOR(fun_trunc_75);
LOCFOR(fun_truncS_76);
LOCFOR(fun_mod_77);
LOCFOR(fun_loop_78);
LOCFOR(fun_pow_79);
LOCFOR(fun_K_80);
LOCFOR(fun_C_81);
LOCFOR(fun_B_82);
LOCFOR(fun_N_83);
LOCFOR(fun_bitQ_84);
LOCFOR(fun_evenQ_85);
LOCFOR(fun_oddQ_86);
LOCFOR(fun_GG_87);
LOCFOR(fun_GGG_88);
LOCFOR(fun_LL_89);
LOCFOR(fun_search_90);
LOCFOR(fun_power_of_two_ceil_91);
FUNFOR(YgooSmathYflo_bits);
LOCFOR(fun_as_93);
LOCFOR(fun_EE_94);
LOCFOR(fun_L_95);
LOCFOR(fun_A_96);
LOCFOR(fun___97);
LOCFOR(fun_T_98);
LOCFOR(fun_S_99);
LOCFOR(fun_truncS_100);
LOCFOR(fun_pow_101);
LOCFOR(fun_isqrt_102);
LOCFOR(fun_x_1300_103);
LOCFOR(fun_104);
LOCFOR(fun_105);
LOCFOR(fun_sqrt_106);
LOCFOR(fun_sqrt_107);
LOCFOR(fun_log_108);
LOCFOR(fun_log_109);
LOCFOR(fun_sin_110);
LOCFOR(fun_sin_111);
LOCFOR(fun_cos_112);
LOCFOR(fun_cos_113);
LOCFOR(fun_tan_114);
LOCFOR(fun_tan_115);
LOCFOR(fun_sinh_116);
LOCFOR(fun_sinh_117);
LOCFOR(fun_cosh_118);
LOCFOR(fun_cosh_119);
LOCFOR(fun_tanh_120);
LOCFOR(fun_tanh_121);
LOCFOR(fun_asin_122);
LOCFOR(fun_asin_123);
LOCFOR(fun_acos_124);
LOCFOR(fun_acos_125);
LOCFOR(fun_atan_126);
LOCFOR(fun_atan_127);
LOCFOR(fun_atan2_128);
LOCFOR(fun_atan2_129);
LOCFOR(fun_logn_130);
extern P YgooSmathY___main_0___ ();
extern P YgooSmathY___main_1___ ();
extern P YgooSmathY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_to_str_0) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(Yclass_of),x_);
  T2 = CALL1(1,VARREF(Yclass_name),T3);
  T1 = CALL1(1,VARREF(YgooSmathYto_str),T2);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_2),T1,LITREF(lit_3));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYaddress_of) {
  P x_;
  P tF1494;
  P xF1493;
  P xF1492;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF1492 = x_;
  xF1493 = xF1492;
  tF1494 = (P)1;
  T3 = (P)YPiLL(xF1493,(P)2);
  T2 = (P)YPiv(T3,tF1494);
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_8));
}

FUNCODEDEF(fun_to_str_3) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_10));
}

FUNCODEDEF(fun_as_4) {
  P type_,x_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,type_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T2 = CALL2(1,VARREF(Yas_error),type_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmathYas_log) {
  P x_;
  P tmpF1495;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  tmpF1495 = x_;
  if (tmpF1495 != YPfalse) {
    T1 = YPtrue;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_6) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_E_7) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NE_8) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NEE_9) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_10) {
  P U_,i_;
  P tF1500;
  P xF1499;
  P xF1498;
  P xF1497;
  P xF1496;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(i_, 1);
loop:
  xF1496 = i_;
  xF1497 = xF1496;
  T3 = (P)YPiGG(xF1497,(P)2);
  T2 = T3;
  T1 = T2;
  xF1498 = T1;
  xF1499 = xF1498;
  tF1500 = (P)2;
  T6 = (P)YPiLL(xF1499,(P)2);
  T5 = (P)YPiv(T6,tF1500);
  T4 = T5;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_11) {
  P U_,c_;
  P tF1505;
  P xF1504;
  P xF1503;
  P xF1502;
  P xF1501;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(c_, 1);
loop:
  xF1501 = c_;
  xF1502 = xF1501;
  T3 = (P)YPiGG(xF1502,(P)2);
  T2 = T3;
  T1 = T2;
  xF1503 = T1;
  xF1504 = xF1503;
  tF1505 = (P)1;
  T6 = (P)YPiLL(xF1504,(P)2);
  T5 = (P)YPiv(T6,tF1505);
  T4 = T5;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_12) {
  P x_,y_;
  P xF1509;
  P xF1508;
  P xF1507;
  P xF1506;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1506 = x_;
  xF1507 = xF1506;
  T4 = (P)YPiGG(xF1507,(P)2);
  T3 = T4;
  T2 = T3;
  xF1508 = y_;
  xF1509 = xF1508;
  T7 = (P)YPiGG(xF1509,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPcL(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_13) {
  P x_,y_;
  P xF1513;
  P xF1512;
  P xF1511;
  P xF1510;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1510 = x_;
  xF1511 = xF1510;
  T4 = (P)YPiGG(xF1511,(P)2);
  T3 = T4;
  T2 = T3;
  xF1512 = y_;
  xF1513 = xF1512;
  T7 = (P)YPiGG(xF1513,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPcE(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lowerQ_14) {
  P x_;
  P codeF1514;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF1514 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
  T3 = CALL2(1,VARREF(YgooSmagYGE),codeF1514,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)122));
    T5 = CALL2(1,VARREF(YgooSmagYLE),codeF1514,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_upperQ_15) {
  P x_;
  P codeF1515;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF1515 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
  T3 = CALL2(1,VARREF(YgooSmagYGE),codeF1515,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)90));
    T5 = CALL2(1,VARREF(YgooSmagYLE),codeF1515,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_lower_16) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYupperQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YgooSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_upper_17) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYlowerQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YgooSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_digit_18) {
  P digit_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(digit_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),digit_);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  T0 = CALL2(1,VARREF(YgooSmathY_),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_19) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYfabs),VARREF(YLstrG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_alphaQ_20) {
  P x_;
  P tmpF1518;
  P tmpF1517;
  P tmpF1516;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)97),x_);
  tmpF1516 = T2;
  if (tmpF1516 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)122));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF1517 = T1;
  if (tmpF1517 != YPfalse) {
    T5 = tmpF1517;
  } else {
    T7 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)65),x_);
    tmpF1518 = T7;
    if (tmpF1518 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)90));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_digitQ_21) {
  P x_;
  P tmpF1519;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)48),x_);
  tmpF1519 = T1;
  if (tmpF1519 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)57));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_objectQ_22) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_eof_objectQ_23) {
  P x_;
  P xF1521;
  P xF1520;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF1520 = x_;
  xF1521 = xF1520;
  T4 = (P)YPiGG(xF1521,(P)2);
  T3 = T4;
  T2 = T3;
  T5 = (P)YPeof_object();
  T1 = (P)YPeqQ(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_object_24) {
  P tF1524;
  P xF1523;
  P xF1522;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = (P)YPeof_object();
  xF1522 = T1;
  xF1523 = xF1522;
  tF1524 = (P)2;
  T4 = (P)YPiLL(xF1523,(P)2);
  T3 = (P)YPiv(T4,tF1524);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_25) {
  P f_,x_,y_;
  P typeF1525;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF1525 = T1;
  T3 = CALL2(1,VARREF(YgooStypesYas),typeF1525,x_);
  T4 = CALL2(1,VARREF(YgooStypesYas),typeF1525,y_);
  T2 = CALL2(1,f_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_L_26) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmagYL),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_27) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYA),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1A_28) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___29) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathY_),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1__30) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathY_),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_31) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYT),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_32) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYS),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_33) {
  P y_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYatan2),y_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logn_34) {
  P x_,b_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYlogn),x_,b_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_35) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYfloorS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceil_36) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYceilS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_37) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYroundS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_to_38) {
  P x_,n_;
  P fF1526;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYround),x_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYpow),LITREF(lit_79),n_);
    fF1526 = T4;
    T8 = CALL2(1,VARREF(YgooSmathYT),x_,fF1526);
    T7 = CALL1(1,VARREF(YgooSmathYround),T8);
    T6 = CALL2(1,VARREF(YgooSmathYS),T7,fF1526);
    T5 = CALL1(1,x_,T6);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_trunc_39) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floorS_40) {
  P real_,divisor_;
  P tmpF1530;
  P remainderF1529;
  P integerF1528;
  P tup19F1527;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup19F1527 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup19F1527,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF1528 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup19F1527,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1529 = T5;
  T9 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF1529);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF1530 = T8;
  if (tmpF1530 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T12 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T11 = T13;
    } else {
      T14 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T11 = T14;
    }
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmathY_),integerF1528,YPint((P)1));
    T17 = CALL2(1,VARREF(YgooSmathYA),remainderF1529,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF1528,remainderF1529);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceilS_41) {
  P real_,divisor_;
  P tmpF1534;
  P remainderF1533;
  P integerF1532;
  P tup20F1531;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup20F1531 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1531,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF1532 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1531,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1533 = T5;
  T9 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF1533);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF1534 = T8;
  if (tmpF1534 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T12 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T11 = T13;
    } else {
      T14 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T11 = T14;
    }
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmathYA),integerF1532,YPint((P)1));
    T17 = CALL2(1,VARREF(YgooSmathY_),remainderF1533,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF1532,remainderF1533);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_roundS_42) {
  P real_,divisor_;
  P tmpF1543;
  P tmpF1542;
  P minus_thresholdF1541;
  P tmpF1540;
  P tmpF1539;
  P thresholdF1538;
  P remainderF1537;
  P integerF1536;
  P tup21F1535;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup21F1535 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F1535,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF1536 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F1535,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1537 = T5;
  T8 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T7 = CALL2(1,VARREF(YgooSmathYS),T8,LITREF(lit_88));
  check_type(T7,VARREF(YLnumG));
  thresholdF1538 = T7;
  T11 = CALL2(1,VARREF(YgooSmagYG),remainderF1537,thresholdF1538);
  tmpF1539 = T11;
  if (tmpF1539 != YPfalse) {
    T12 = tmpF1539;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYE),remainderF1537,thresholdF1538);
    tmpF1540 = T14;
    if (tmpF1540 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooSmathYoddQ),integerF1536);
      T15 = T16;
    } else {
      T15 = YPfalse;
    }
    T13 = T15;
    T12 = T13;
  }
  T10 = T12;
  if (T10 != YPfalse) {
    T18 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T18 != YPfalse) {
      T20 = CALL2(1,VARREF(YgooSmathY_),integerF1536,YPint((P)1));
      T21 = CALL2(1,VARREF(YgooSmathYA),remainderF1537,divisor_);
      T19 = CALL2(1,VARREF(Ytup),T20,T21);
      T17 = T19;
    } else {
      T23 = CALL2(1,VARREF(YgooSmathYA),integerF1536,YPint((P)1));
      T24 = CALL2(1,VARREF(YgooSmathY_),remainderF1537,divisor_);
      T22 = CALL2(1,VARREF(Ytup),T23,T24);
      T17 = T22;
    }
    T9 = T17;
  } else {
    T27 = CALL1(1,VARREF(YgooSmathYneg),thresholdF1538);
    minus_thresholdF1541 = T27;
    T29 = CALL2(1,VARREF(YgooSmagYL),remainderF1537,minus_thresholdF1541);
    tmpF1542 = T29;
    if (tmpF1542 != YPfalse) {
      T30 = tmpF1542;
    } else {
      T32 = CALL2(1,VARREF(YgooSmathYE),remainderF1537,minus_thresholdF1541);
      tmpF1543 = T32;
      if (tmpF1543 != YPfalse) {
        T34 = CALL1(1,VARREF(YgooSmathYoddQ),integerF1536);
        T33 = T34;
      } else {
        T33 = YPfalse;
      }
      T31 = T33;
      T30 = T31;
    }
    T28 = T30;
    T26 = T28;
    if (T26 != YPfalse) {
      T36 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
      if (T36 != YPfalse) {
        T38 = CALL2(1,VARREF(YgooSmathYA),integerF1536,YPint((P)1));
        T39 = CALL2(1,VARREF(YgooSmathY_),remainderF1537,divisor_);
        T37 = CALL2(1,VARREF(Ytup),T38,T39);
        T35 = T37;
      } else {
        T41 = CALL2(1,VARREF(YgooSmathY_),integerF1536,YPint((P)1));
        T42 = CALL2(1,VARREF(YgooSmathYA),remainderF1537,divisor_);
        T40 = CALL2(1,VARREF(Ytup),T41,T42);
        T35 = T40;
      }
      T25 = T35;
    } else {
      T43 = CALL2(1,VARREF(Ytup),integerF1536,remainderF1537);
      T25 = T43;
    }
    T9 = T25;
  }
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncS_43) {
  P real_,divisor_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_div_44) {
  P x_,y_;
  P xF1545;
  P xF1544;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  xF1544 = YPint((P)0);
  xF1545 = xF1544;
  T4 = (P)YPiGG(xF1545,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_45) {
  P real_,divisor_;
  P remainderF1548;
  P UF1547;
  P tup22F1546;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup22F1546 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F1546,YPint((P)0));
  UF1547 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F1546,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1548 = T5;
  T4 = remainderF1548;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_modA_46) {
  P i_,j_,n_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYA),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mod__47) {
  P i_,j_,n_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathY_),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1292_48) {
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

FUNCODEDEF(fun_49) {
  P return_;
  P x_1291F1557;
  P x_1291F1556;
  P x_1291F1555;
  P x_1291F1554;
  P x_1291F1553;
  P maxF1552;
  P placeF1551;
  P x_1291F1550;
  P x_1292F1549;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1292_48,2);
  x_1292F1549 = T1;
  FUNINIT(x_1292F1549, 2,FREEREF(0),return_);
  x_1291F1550 = FREEREF(0);
  placeF1551 = YPfalse;
  placeF1551 = BOXFAB(placeF1551);
  maxF1552 = YPfalse;
  maxF1552 = BOXFAB(maxF1552);
  T7 = CALL2(1,VARREF(YisaQ),x_1291F1550,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1291F1550,LITREF(lit_103),x_1292F1549);
    x_1291F1553 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F1553,x_1292F1549);
    BOXVAL(placeF1551) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1291F1553);
    x_1291F1554 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F1554,x_1292F1549);
    BOXVAL(maxF1552) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1291F1554);
    x_1291F1555 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1291F1555,x_1292F1549);
    x_1291F1556 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F1556,x_1292F1549);
    T19 = CALL1(1,VARREF(Ytail),x_1291F1555);
    x_1291F1557 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F1557,x_1292F1549);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1292F1549,LITREF(lit_104),x_1291F1550);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T25 = BOXVAL(placeF1551);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T30 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T32 = BOXVAL(maxF1552);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T27 = CALL5(1,VARREF(YgooSmacrosYcat),T28,T29,T30,T31,LITREF(lit_107));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_107));
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_49,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1296_51) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_112),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1295F1566;
  P x_1295F1565;
  P x_1295F1564;
  P x_1295F1563;
  P x_1295F1562;
  P maxF1561;
  P placeF1560;
  P x_1295F1559;
  P x_1296F1558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1296_51,2);
  x_1296F1558 = T1;
  FUNINIT(x_1296F1558, 2,FREEREF(0),return_);
  x_1295F1559 = FREEREF(0);
  placeF1560 = YPfalse;
  placeF1560 = BOXFAB(placeF1560);
  maxF1561 = YPfalse;
  maxF1561 = BOXFAB(maxF1561);
  T7 = CALL2(1,VARREF(YisaQ),x_1295F1559,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1295F1559,LITREF(lit_112),x_1296F1558);
    x_1295F1562 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F1562,x_1296F1558);
    BOXVAL(placeF1560) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1295F1562);
    x_1295F1563 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F1563,x_1296F1558);
    BOXVAL(maxF1561) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1295F1563);
    x_1295F1564 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1295F1564,x_1296F1558);
    x_1295F1565 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1565,x_1296F1558);
    T19 = CALL1(1,VARREF(Ytail),x_1295F1564);
    x_1295F1566 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1566,x_1296F1558);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1296F1558,LITREF(lit_104),x_1295F1559);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T25 = BOXVAL(placeF1560);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T30 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T32 = BOXVAL(maxF1561);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T27 = CALL5(1,VARREF(YgooSmacrosYcat),T28,T29,T30,T31,LITREF(lit_107));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_107));
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_52,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rem_54) {
  P real_,divisor_;
  P remainderF1569;
  P UF1568;
  P tup23F1567;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup23F1567 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F1567,YPint((P)0));
  UF1568 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F1567,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1569 = T5;
  T4 = remainderF1569;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_55) {
  P base_,n_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(base_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYpow),base_,n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_posQ_56) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zeroQ_57) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_negQ_58) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_neg_59) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_abs_60) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYneg),x_);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_61) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_type_62) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_contagious_type_63) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_64) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_65) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_EE_66) {
  P x_,y_;
  P xF1573;
  P xF1572;
  P xF1571;
  P xF1570;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1570 = x_;
  xF1571 = xF1570;
  T4 = (P)YPiGG(xF1571,(P)2);
  T3 = T4;
  T2 = T3;
  xF1572 = y_;
  xF1573 = xF1572;
  T7 = (P)YPiGG(xF1573,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiE(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_67) {
  P x_,y_;
  P xF1577;
  P xF1576;
  P xF1575;
  P xF1574;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1574 = x_;
  xF1575 = xF1574;
  T4 = (P)YPiGG(xF1575,(P)2);
  T3 = T4;
  T2 = T3;
  xF1576 = y_;
  xF1577 = xF1576;
  T7 = (P)YPiGG(xF1577,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiL(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_68) {
  P x_,y_;
  P tF1584;
  P xF1583;
  P xF1582;
  P xF1581;
  P xF1580;
  P xF1579;
  P xF1578;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1578 = x_;
  xF1579 = xF1578;
  T4 = (P)YPiGG(xF1579,(P)2);
  T3 = T4;
  T2 = T3;
  xF1580 = y_;
  xF1581 = xF1580;
  T7 = (P)YPiGG(xF1581,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiA(T2,T5);
  xF1582 = T1;
  xF1583 = xF1582;
  tF1584 = (P)1;
  T10 = (P)YPiLL(xF1583,(P)2);
  T9 = (P)YPiv(T10,tF1584);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___69) {
  P x_,y_;
  P tF1591;
  P xF1590;
  P xF1589;
  P xF1588;
  P xF1587;
  P xF1586;
  P xF1585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1585 = x_;
  xF1586 = xF1585;
  T4 = (P)YPiGG(xF1586,(P)2);
  T3 = T4;
  T2 = T3;
  xF1587 = y_;
  xF1588 = xF1587;
  T7 = (P)YPiGG(xF1588,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPi_(T2,T5);
  xF1589 = T1;
  xF1590 = xF1589;
  tF1591 = (P)1;
  T10 = (P)YPiLL(xF1590,(P)2);
  T9 = (P)YPiv(T10,tF1591);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_70) {
  P x_,y_;
  P tF1598;
  P xF1597;
  P xF1596;
  P xF1595;
  P xF1594;
  P xF1593;
  P xF1592;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1592 = x_;
  xF1593 = xF1592;
  T4 = (P)YPiGG(xF1593,(P)2);
  T3 = T4;
  T2 = T3;
  xF1594 = y_;
  xF1595 = xF1594;
  T7 = (P)YPiGG(xF1595,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiT(T2,T5);
  xF1596 = T1;
  xF1597 = xF1596;
  tF1598 = (P)1;
  T10 = (P)YPiLL(xF1597,(P)2);
  T9 = (P)YPiv(T10,tF1598);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_71) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_138));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_72) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_ceil_73) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_round_74) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_trunc_75) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_truncS_76) {
  P x_,y_;
  P resultF1606;
  P tF1605;
  P xF1604;
  P xF1603;
  P xF1602;
  P xF1601;
  P xF1600;
  P xF1599;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1599 = x_;
  xF1600 = xF1599;
  T5 = (P)YPiGG(xF1600,(P)2);
  T4 = T5;
  T3 = T4;
  xF1601 = y_;
  xF1602 = xF1601;
  T8 = (P)YPiGG(xF1602,(P)2);
  T7 = T8;
  T6 = T7;
  T2 = (P)YPitS(T3,T6);
  xF1603 = T2;
  xF1604 = xF1603;
  tF1605 = (P)1;
  T11 = (P)YPiLL(xF1604,(P)2);
  T10 = (P)YPiv(T11,tF1605);
  T9 = T10;
  T1 = T9;
  resultF1606 = T1;
  T14 = CALL2(1,VARREF(YgooSmathYT),resultF1606,y_);
  T13 = CALL2(1,VARREF(YgooSmathY_),x_,T14);
  T12 = CALL2(1,VARREF(Ytup),resultF1606,T13);
  T0 = T12;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_77) {
  P x_,y_;
  P resF1614;
  P tF1613;
  P xF1612;
  P xF1611;
  P xF1610;
  P xF1609;
  P xF1608;
  P xF1607;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1607 = x_;
  xF1608 = xF1607;
  T5 = (P)YPiGG(xF1608,(P)2);
  T4 = T5;
  T3 = T4;
  xF1609 = y_;
  xF1610 = xF1609;
  T8 = (P)YPiGG(xF1610,(P)2);
  T7 = T8;
  T6 = T7;
  T2 = (P)YPim(T3,T6);
  xF1611 = T2;
  xF1612 = xF1611;
  tF1613 = (P)1;
  T11 = (P)YPiLL(xF1612,(P)2);
  T10 = (P)YPiv(T11,tF1613);
  T9 = T10;
  T1 = T9;
  resF1614 = T1;
  T13 = CALL2(1,VARREF(YgooSmagYL),resF1614,YPint((P)0));
  if (T13 != YPfalse) {
    T15 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYA),resF1614,y_);
      T14 = T16;
    } else {
      T17 = CALL2(1,VARREF(YgooSmathY_),resF1614,y_);
      T14 = T17;
    }
    T12 = T14;
  } else {
    T12 = resF1614;
  }
  T0 = T12;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_78) {
  P x_,p_,y_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(p_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYzeroQ),p_);
  if (T1 != YPfalse) {
    T0 = y_;
  } else {
    T4 = CALL2(1,VARREF(YgooSmagYG),p_,YPint((P)1));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSmathYT),x_,x_);
      T3 = T5;
    } else {
      T3 = x_;
    }
    T6 = CALL2(1,VARREF(YgooSmathYGG),p_,YPint((P)1));
    T8 = CALL1(1,VARREF(YgooSmathYoddQ),p_);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathYT),x_,y_);
      T7 = T9;
    } else {
      T7 = y_;
    }
    a1 = T3;
    a2 = T6;
    a3 = T7;
    x_ = a1;
    p_ = a2;
    y_ = a3;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pow_79) {
  P x_,n_;
  P loopF1615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnegQ),n_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),n_);
    T3 = CALL2(1,VARREF(YgooSmathYpow),x_,T4);
    T2 = CALL2(1,VARREF(YgooSmathYS),YPint((P)1),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),x_,YPint((P)2));
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYLL),YPint((P)1),n_);
      T5 = T7;
    } else {
      T9 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
      if (T9 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
        if (T11 != YPfalse) {
          T14 = CALL1(1,VARREF(YgooSmathYneg),x_);
          T13 = CALL2(1,VARREF(YgooSmathYpow),T14,n_);
          T12 = CALL1(1,VARREF(YgooSmathYneg),T13);
          T10 = T12;
        } else {
          T16 = CALL1(1,VARREF(YgooSmathYneg),x_);
          T15 = CALL2(1,VARREF(YgooSmathYpow),T16,n_);
          T10 = T15;
        }
        T8 = T10;
      } else {
        if (YPtrue != YPfalse) {
          T19 = FUNSHELL(1,fun_loop_78,1);
          loopF1615 = T19;
          FUNINIT(loopF1615, 1,loopF1615);
          T22 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)1));
          if (T22 != YPfalse) {
            T23 = CALL2(1,VARREF(YgooSmathYT),x_,x_);
            T21 = T23;
          } else {
            T21 = x_;
          }
          T24 = CALL2(1,VARREF(YgooSmathYGG),n_,YPint((P)1));
          T26 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
          if (T26 != YPfalse) {
            T25 = x_;
          } else {
            T25 = YPint((P)1);
          }
          T20 = CALL3(1,loopF1615,T21,T24,T25);
          T18 = T20;
          T17 = T18;
        } else {
          T17 = YPfalse;
        }
        T8 = T17;
      }
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_K_80) {
  P x_,y_;
  P tF1622;
  P xF1621;
  P xF1620;
  P xF1619;
  P xF1618;
  P xF1617;
  P xF1616;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1616 = x_;
  xF1617 = xF1616;
  T4 = (P)YPiGG(xF1617,(P)2);
  T3 = T4;
  T2 = T3;
  xF1618 = y_;
  xF1619 = xF1618;
  T7 = (P)YPiGG(xF1619,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiv(T2,T5);
  xF1620 = T1;
  xF1621 = xF1620;
  tF1622 = (P)1;
  T10 = (P)YPiLL(xF1621,(P)2);
  T9 = (P)YPiv(T10,tF1622);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_C_81) {
  P x_,y_;
  P tF1629;
  P xF1628;
  P xF1627;
  P xF1626;
  P xF1625;
  P xF1624;
  P xF1623;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1623 = x_;
  xF1624 = xF1623;
  T4 = (P)YPiGG(xF1624,(P)2);
  T3 = T4;
  T2 = T3;
  xF1625 = y_;
  xF1626 = xF1625;
  T7 = (P)YPiGG(xF1626,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiC(T2,T5);
  xF1627 = T1;
  xF1628 = xF1627;
  tF1629 = (P)1;
  T10 = (P)YPiLL(xF1628,(P)2);
  T9 = (P)YPiv(T10,tF1629);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_B_82) {
  P x_,y_;
  P tF1636;
  P xF1635;
  P xF1634;
  P xF1633;
  P xF1632;
  P xF1631;
  P xF1630;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1630 = x_;
  xF1631 = xF1630;
  T4 = (P)YPiGG(xF1631,(P)2);
  T3 = T4;
  T2 = T3;
  xF1632 = y_;
  xF1633 = xF1632;
  T7 = (P)YPiGG(xF1633,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiB(T2,T5);
  xF1634 = T1;
  xF1635 = xF1634;
  tF1636 = (P)1;
  T10 = (P)YPiLL(xF1635,(P)2);
  T9 = (P)YPiv(T10,tF1636);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_N_83) {
  P x_;
  P tF1641;
  P xF1640;
  P xF1639;
  P xF1638;
  P xF1637;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF1637 = x_;
  xF1638 = xF1637;
  T4 = (P)YPiGG(xF1638,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPiX(T2);
  xF1639 = T1;
  xF1640 = xF1639;
  tF1641 = (P)1;
  T7 = (P)YPiLL(xF1640,(P)2);
  T6 = (P)YPiv(T7,tF1641);
  T5 = T6;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bitQ_84) {
  P o_,x_;
  P tF1648;
  P xF1647;
  P xF1646;
  P xF1645;
  P xF1644;
  P xF1643;
  P xF1642;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
loop:
  xF1642 = o_;
  xF1643 = xF1642;
  T4 = (P)YPiGG(xF1643,(P)2);
  T3 = T4;
  T2 = T3;
  xF1644 = x_;
  xF1645 = xF1644;
  T7 = (P)YPiGG(xF1645,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiQ(T2,T5);
  xF1646 = T1;
  xF1647 = xF1646;
  tF1648 = (P)1;
  T10 = (P)YPiLL(xF1647,(P)2);
  T9 = (P)YPiv(T10,tF1648);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_evenQ_85) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYB),x_,YPint((P)1));
  T0 = CALL1(1,VARREF(YgooSmathYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_oddQ_86) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYevenQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GG_87) {
  P x_,a_;
  P tF1655;
  P xF1654;
  P xF1653;
  P xF1652;
  P xF1651;
  P xF1650;
  P xF1649;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  xF1649 = x_;
  xF1650 = xF1649;
  T4 = (P)YPiGG(xF1650,(P)2);
  T3 = T4;
  T2 = T3;
  xF1651 = a_;
  xF1652 = xF1651;
  T7 = (P)YPiGG(xF1652,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiGG(T2,T5);
  xF1653 = T1;
  xF1654 = xF1653;
  tF1655 = (P)1;
  T10 = (P)YPiLL(xF1654,(P)2);
  T9 = (P)YPiv(T10,tF1655);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GGG_88) {
  P x_,a_;
  P tF1662;
  P xF1661;
  P xF1660;
  P xF1659;
  P xF1658;
  P xF1657;
  P xF1656;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  xF1656 = x_;
  xF1657 = xF1656;
  T4 = (P)YPiGG(xF1657,(P)2);
  T3 = T4;
  T2 = T3;
  xF1658 = a_;
  xF1659 = xF1658;
  T7 = (P)YPiGG(xF1659,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiGGG(T2,T5);
  xF1660 = T1;
  xF1661 = xF1660;
  tF1662 = (P)1;
  T10 = (P)YPiLL(xF1661,(P)2);
  T9 = (P)YPiv(T10,tF1662);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LL_89) {
  P x_,a_;
  P tF1669;
  P xF1668;
  P xF1667;
  P xF1666;
  P xF1665;
  P xF1664;
  P xF1663;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  xF1663 = x_;
  xF1664 = xF1663;
  T4 = (P)YPiGG(xF1664,(P)2);
  T3 = T4;
  T2 = T3;
  xF1665 = a_;
  xF1666 = xF1665;
  T7 = (P)YPiGG(xF1666,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiLL(T2,T5);
  xF1667 = T1;
  xF1668 = xF1667;
  tF1669 = (P)1;
  T10 = (P)YPiLL(xF1668,(P)2);
  T9 = (P)YPiv(T10,tF1669);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_search_90) {
  P po2_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(po2_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYG),po2_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = po2_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYA),po2_,po2_);
    a1 = T3;
    po2_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_power_of_two_ceil_91) {
  P x_;
  P searchF1670;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_search_90,2);
  searchF1670 = T1;
  FUNINIT(searchF1670, 2,x_,searchF1670);
  T2 = CALL1(1,searchF1670,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P tF1673;
  P xF1672;
  P xF1671;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPflo_bits(T2);
  xF1671 = T1;
  xF1672 = xF1671;
  tF1673 = (P)1;
  T5 = (P)YPiLL(xF1672,(P)2);
  T4 = (P)YPiv(T5,tF1673);
  T3 = T4;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_93) {
  P U_,x_;
  P xF1675;
  P xF1674;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
loop:
  xF1674 = x_;
  xF1675 = xF1674;
  T4 = (P)YPiGG(xF1675,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPfi2f(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_94) {
  P x_,y_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_95) {
  P x_,y_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_96) {
  P x_,y_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfA(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___97) {
  P x_,y_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPf_(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_98) {
  P x_,y_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfT(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_99) {
  P x_,y_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfS(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncS_100) {
  P x_,y_;
  P resultF1680;
  P tF1679;
  P xF1678;
  P xF1677;
  P dividedF1676;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF1676 = T1;
  T5 = (P)YPfu(dividedF1676);
  T4 = (P)YPft(T5);
  xF1677 = T4;
  xF1678 = xF1677;
  tF1679 = (P)1;
  T8 = (P)YPiLL(xF1678,(P)2);
  T7 = (P)YPiv(T8,tF1679);
  T6 = T7;
  T3 = T6;
  resultF1680 = T3;
  T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF1680);
  T11 = CALL2(1,VARREF(YgooSmathY_),dividedF1676,T12);
  T10 = CALL2(1,VARREF(YgooSmathYT),y_,T11);
  T9 = CALL2(1,VARREF(Ytup),resultF1680,T10);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_101) {
  P x_,n_;
  P tmpF1682;
  P resF1681;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T4 = CALL1(1,VARREF(YgooSmathYabs),x_);
  T3 = (P)YPfu(T4);
  T5 = (P)YPfu(n_);
  T2 = (P)YPfpow(T3,T5);
  T1 = (P)YPfb(T2);
  resF1681 = T1;
  T8 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  tmpF1682 = T8;
  if (tmpF1682 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T9 = T10;
  } else {
    T9 = YPfalse;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSmathYneg),resF1681);
    T6 = T11;
  } else {
    T6 = resF1681;
  }
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isqrt_102) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYsqrt),T2);
  T0 = CALL1(1,VARREF(YgooSmathYround),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1300_103) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_191),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  P return_;
  P PfpF1698;
  P x_1299F1697;
  P x_1299F1696;
  P x_1299F1695;
  P x_1299F1694;
  P x_1299F1693;
  P x_1299F1692;
  P x_1299F1691;
  P x_1299F1690;
  P x_1299F1689;
  P x_1299F1688;
  P prefixF1687;
  P paramF1686;
  P nameF1685;
  P x_1299F1684;
  P x_1300F1683;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1300_103,2);
  x_1300F1683 = T1;
  FUNINIT(x_1300F1683, 2,FREEREF(0),return_);
  x_1299F1684 = FREEREF(0);
  nameF1685 = YPfalse;
  nameF1685 = BOXFAB(nameF1685);
  paramF1686 = YPfalse;
  paramF1686 = BOXFAB(paramF1686);
  prefixF1687 = YPfalse;
  prefixF1687 = BOXFAB(prefixF1687);
  T9 = CALL2(1,VARREF(YisaQ),x_1299F1684,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1299F1684,LITREF(lit_191),x_1300F1683);
    x_1299F1688 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1299F1688,x_1300F1683);
    BOXVAL(nameF1685) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1299F1688);
    x_1299F1689 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1299F1689,x_1300F1683);
    x_1299F1690 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1299F1690,x_1300F1683);
    BOXVAL(paramF1686) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1299F1690);
    x_1299F1691 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1299F1691,x_1300F1683);
    x_1299F1692 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1692,x_1300F1683);
    T23 = CALL1(1,VARREF(Ytail),x_1299F1691);
    x_1299F1693 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1693,x_1300F1683);
    T20 = T24;
    T17 = T20;
    T25 = CALL1(1,VARREF(Ytail),x_1299F1689);
    x_1299F1694 = T25;
    BOXVAL(prefixF1687) = x_1299F1694;
    x_1299F1695 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1299F1695,x_1300F1683);
    x_1299F1696 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1696,x_1300F1683);
    T30 = CALL1(1,VARREF(Ytail),x_1299F1695);
    x_1299F1697 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1697,x_1300F1683);
    T27 = T31;
    T26 = T27;
    T15 = T26;
    T12 = T15;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1300F1683,LITREF(lit_104),x_1299F1684);
  }
  T35 = BOXVAL(nameF1685);
  T34 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_192),T35);
  PfpF1698 = T34;
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T42 = BOXVAL(nameF1685);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T48 = BOXVAL(paramF1686);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,LITREF(lit_107));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T50,T51,LITREF(lit_107));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T43,LITREF(lit_107));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T56 = BOXVAL(nameF1685);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T62 = BOXVAL(paramF1686);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T60 = CALL3(1,VARREF(YgooSmacrosYcat),T61,T63,LITREF(lit_107));
  T59 = CALL1(1,VARREF(Ylst),T60);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T64,T65,LITREF(lit_107));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T66 = BOXVAL(prefixF1687);
  T70 = BOXVAL(nameF1685);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T76 = BOXVAL(paramF1686);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T72 = CALL4(1,VARREF(YgooSmacrosYcat),T73,T74,T75,LITREF(lit_107));
  T71 = CALL1(1,VARREF(Ylst),T72);
  T68 = CALL3(1,VARREF(YgooSmacrosYcat),T69,T71,LITREF(lit_107));
  T67 = CALL1(1,VARREF(Ylst),T68);
  T53 = CALLN(1,VARREF(YgooSmacrosYcat),6,T54,T55,T57,T66,T67,LITREF(lit_107));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T79 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T81 = BOXVAL(nameF1685);
  T80 = CALL1(1,VARREF(Ylst),T81);
  T87 = BOXVAL(paramF1686);
  T86 = CALL1(1,VARREF(Ylst),T87);
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T88,LITREF(lit_107));
  T84 = CALL1(1,VARREF(Ylst),T85);
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T83 = CALL4(1,VARREF(YgooSmacrosYcat),T84,T89,T90,LITREF(lit_107));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T91 = BOXVAL(prefixF1687);
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_200));
  T97 = CALL1(1,VARREF(Ylst),PfpF1698);
  T100 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T102 = BOXVAL(paramF1686);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T99 = CALL3(1,VARREF(YgooSmacrosYcat),T100,T101,LITREF(lit_107));
  T98 = CALL1(1,VARREF(Ylst),T99);
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,LITREF(lit_107));
  T95 = CALL1(1,VARREF(Ylst),T96);
  T93 = CALL3(1,VARREF(YgooSmacrosYcat),T94,T95,LITREF(lit_107));
  T92 = CALL1(1,VARREF(Ylst),T93);
  T78 = CALLN(1,VARREF(YgooSmacrosYcat),6,T79,T80,T82,T91,T92,LITREF(lit_107));
  T77 = CALL1(1,VARREF(Ylst),T78);
  T36 = CALL5(1,VARREF(YgooSmacrosYcat),T37,T38,T52,T77,LITREF(lit_107));
  T33 = T36;
  T7 = T33;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_104,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sqrt_106) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_205));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYsqrt),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_sqrt_107) {
  P x_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_205));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfsqrt(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_log_108) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYlog),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_log_109) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPflog(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sin_110) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsin),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sin_111) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfsin(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cos_112) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcos),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cos_113) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfcos(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tan_114) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tan_115) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPftan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sinh_116) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsinh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sinh_117) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfsinh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cosh_118) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcosh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cosh_119) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfcosh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tanh_120) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtanh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tanh_121) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPftanh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_asin_122) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_238));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYasin),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_asin_123) {
  P x_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_238));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfasin(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_124) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_243));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYacos),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_125) {
  P x_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_243));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfacos(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_atan_126) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYatan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan_127) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfatan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_128) {
  P y_,x_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_129) {
  P y_,x_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logn_130) {
  P x_,b_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYlog),x_);
  T2 = CALL1(1,VARREF(YgooSmathYlog),b_);
  T0 = CALL2(1,VARREF(YgooSmathYS),T1,T2);
UNLINK_STACK();
  RET(T0);
}

P YgooSmathY___main_0___() {
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
  P T288,T289,T290,T291;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"to-str");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  lit_2 = YPsb((P)"{ obj(");
  lit_3 = YPsb((P)") }");
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_0 = YPmet(FUNCODEREF(fun_to_str_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(8));
  T3 = BOUNDP(YgooSmathYto_str);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSmathYto_str);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_to_str_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSmathYto_str,T1);
  lit_4 = YPPsym((P)"address-of");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YgooSmathYaddress_of = YPmet(FUNCODEREF(YgooSmathYaddress_of),LITREF(lit_4),T5,ENVNUL,PNUL,sloc(11));
  T6 = YgooSmathYaddress_of;
  VARSET(YgooSmathYaddress_of,T6);
  lit_6 = YPPsym((P)"<bot>");
  T8 = (P)YPpair(VARREF(YLanyG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_6),T8);
  VARSET(YgooSmathYLbotG,T7);
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  lit_8 = YPsb((P)"#t");
  T10 = XCALL1(1,VARREF(YgooStypesYtE),YPtrue);
  T9 = YPsig(LITREF(lit_7),YPPlist(1,T10),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_2 = YPmet(FUNCODEREF(fun_to_str_2),LITREF(lit_0),T9,ENVNUL,PNUL,sloc(21));
  T13 = BOUNDP(YgooSmathYto_str);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSmathYto_str);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_to_str_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSmathYto_str,T11);
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  lit_10 = YPsb((P)"#f");
  T16 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T15 = YPsig(LITREF(lit_9),YPPlist(1,T16),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_3 = YPmet(FUNCODEREF(fun_to_str_3),LITREF(lit_0),T15,ENVNUL,PNUL,sloc(22));
  T19 = BOUNDP(YgooSmathYto_str);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSmathYto_str);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_to_str_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSmathYto_str,T17);
  lit_11 = YPPsym((P)"as");
  lit_12 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T22 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYas,T21);
  lit_13 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"x"));
  T23 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_4 = YPmet(FUNCODEREF(fun_as_4),LITREF(lit_11),T23,ENVNUL,PNUL,sloc(26));
  T26 = BOUNDP(YgooStypesYas);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooStypesYas);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_as_4;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooStypesYas,T24);
  lit_14 = YPPsym((P)"as-log");
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSmathYas_log = YPmet(FUNCODEREF(YgooSmathYas_log),LITREF(lit_14),T28,ENVNUL,PNUL,sloc(31));
  T29 = YgooSmathYas_log;
  VARSET(YgooSmathYas_log,T29);
  lit_16 = YPPsym((P)"==");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T30 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_6 = YPmet(FUNCODEREF(fun_EE_6),LITREF(lit_16),T30,ENVNUL,PNUL,sloc(33));
  T33 = BOUNDP(YgooSmacrosYEE);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSmacrosYEE);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_EE_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSmacrosYEE,T31);
  lit_18 = YPPsym((P)"=");
  lit_19 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T35 = YPsig(LITREF(lit_19),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_7 = YPmet(FUNCODEREF(fun_E_7),LITREF(lit_18),T35,ENVNUL,PNUL,sloc(35));
  T38 = BOUNDP(YgooSmathYE);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSmathYE);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_E_7;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSmathYE,T36);
  lit_20 = YPPsym((P)"~=");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T40 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NE_8 = YPmet(FUNCODEREF(fun_NE_8),LITREF(lit_20),T40,ENVNUL,PNUL,sloc(37));
  T43 = BOUNDP(YgooSmathYNE);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooSmathYNE);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_NE_8;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooSmathYNE,T41);
  lit_22 = YPPsym((P)"~==");
  lit_23 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T45 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NEE_9 = YPmet(FUNCODEREF(fun_NEE_9),LITREF(lit_22),T45,ENVNUL,PNUL,sloc(40));
  T48 = BOUNDP(YgooSmathYNEE);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooSmathYNEE);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_NEE_9;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooSmathYNEE,T46);
  lit_24 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"i"));
  T51 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLchrG));
  T50 = YPsig(LITREF(lit_24),YPPlist(2,T51,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_as_10 = YPmet(FUNCODEREF(fun_as_10),LITREF(lit_11),T50,ENVNUL,PNUL,sloc(45));
  T54 = BOUNDP(YgooStypesYas);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooStypesYas);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_as_10;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooStypesYas,T52);
  lit_25 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"c"));
  T57 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T56 = YPsig(LITREF(lit_25),YPPlist(2,T57,VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_as_11 = YPmet(FUNCODEREF(fun_as_11),LITREF(lit_11),T56,ENVNUL,PNUL,sloc(48));
  T60 = BOUNDP(YgooStypesYas);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooStypesYas);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_as_11;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooStypesYas,T58);
  lit_26 = YPPsym((P)"<");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T62 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_12 = YPmet(FUNCODEREF(fun_L_12),LITREF(lit_26),T62,ENVNUL,PNUL,sloc(51));
  T65 = BOUNDP(YgooSmagYL);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSmagYL);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_L_12;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSmagYL,T63);
  lit_28 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T67 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_13 = YPmet(FUNCODEREF(fun_EE_13),LITREF(lit_16),T67,ENVNUL,PNUL,sloc(54));
  T70 = BOUNDP(YgooSmacrosYEE);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooSmacrosYEE);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_EE_13;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooSmacrosYEE,T68);
  lit_29 = YPPsym((P)"lower?");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_lowerQ_14 = YPmet(FUNCODEREF(fun_lowerQ_14),LITREF(lit_29),T72,ENVNUL,PNUL,sloc(57));
  T75 = BOUNDP(YgooSmathYlowerQ);
  if (T75 != YPfalse) {
    T74 = VARREF(YgooSmathYlowerQ);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_lowerQ_14;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YgooSmathYlowerQ,T73);
  lit_31 = YPPsym((P)"upper?");
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T77 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_upperQ_15 = YPmet(FUNCODEREF(fun_upperQ_15),LITREF(lit_31),T77,ENVNUL,PNUL,sloc(63));
  T80 = BOUNDP(YgooSmathYupperQ);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooSmathYupperQ);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_upperQ_15;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooSmathYupperQ,T78);
  lit_33 = YPPsym((P)"to-lower");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  T82 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_lower_16 = YPmet(FUNCODEREF(fun_to_lower_16),LITREF(lit_33),T82,ENVNUL,PNUL,sloc(69));
  T85 = BOUNDP(YgooSmathYto_lower);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooSmathYto_lower);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_to_lower_16;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooSmathYto_lower,T83);
  lit_35 = YPPsym((P)"to-upper");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T87 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_upper_17 = YPmet(FUNCODEREF(fun_to_upper_17),LITREF(lit_35),T87,ENVNUL,PNUL,sloc(74));
  T90 = BOUNDP(YgooSmathYto_upper);
  if (T90 != YPfalse) {
    T89 = VARREF(YgooSmathYto_upper);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_to_upper_17;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YgooSmathYto_upper,T88);
  lit_37 = YPPsym((P)"to-digit");
  lit_38 = YPPlist(1,YPPsym((P)"digit"));
  T92 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_to_digit_18 = YPmet(FUNCODEREF(fun_to_digit_18),LITREF(lit_37),T92,ENVNUL,PNUL,sloc(79));
  T95 = BOUNDP(YgooSmathYto_digit);
  if (T95 != YPfalse) {
    T94 = VARREF(YgooSmathYto_digit);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_to_digit_18;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YgooSmathYto_digit,T93);
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_19 = YPmet(FUNCODEREF(fun_to_str_19),LITREF(lit_0),T97,ENVNUL,PNUL,sloc(82));
  T100 = BOUNDP(YgooSmathYto_str);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooSmathYto_str);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_to_str_19;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooSmathYto_str,T98);
  lit_40 = YPPsym((P)"alpha?");
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T102 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_alphaQ_20 = YPmet(FUNCODEREF(fun_alphaQ_20),LITREF(lit_40),T102,ENVNUL,PNUL,sloc(85));
  T105 = BOUNDP(YgooSmathYalphaQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YgooSmathYalphaQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_alphaQ_20;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YgooSmathYalphaQ,T103);
  lit_42 = YPPsym((P)"digit?");
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_digitQ_21 = YPmet(FUNCODEREF(fun_digitQ_21),LITREF(lit_42),T107,ENVNUL,PNUL,sloc(89));
  T110 = BOUNDP(YgooSmathYdigitQ);
  if (T110 != YPfalse) {
    T109 = VARREF(YgooSmathYdigitQ);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_digitQ_21;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YgooSmathYdigitQ,T108);
  lit_44 = YPPsym((P)"eof-object?");
  lit_45 = YPPlist(1,YPPsym((P)"x"));
  T112 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_22 = YPmet(FUNCODEREF(fun_eof_objectQ_22),LITREF(lit_44),T112,ENVNUL,PNUL,sloc(92));
  T115 = BOUNDP(YgooSmathYeof_objectQ);
  if (T115 != YPfalse) {
    T114 = VARREF(YgooSmathYeof_objectQ);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_eof_objectQ_22;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YgooSmathYeof_objectQ,T113);
  lit_46 = YPPlist(1,YPPsym((P)"x"));
  T117 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_23 = YPmet(FUNCODEREF(fun_eof_objectQ_23),LITREF(lit_44),T117,ENVNUL,PNUL,sloc(95));
  T120 = BOUNDP(YgooSmathYeof_objectQ);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSmathYeof_objectQ);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_eof_objectQ_23;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSmathYeof_objectQ,T118);
  lit_47 = YPPsym((P)"eof-object");
  lit_48 = Ynil;
  T122 = YPsig(LITREF(lit_48),Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  fun_eof_object_24 = YPmet(FUNCODEREF(fun_eof_object_24),LITREF(lit_47),T122,ENVNUL,PNUL,sloc(98));
  T125 = BOUNDP(YgooSmathYeof_object);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooSmathYeof_object);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_eof_object_24;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooSmathYeof_object,T123);
  lit_49 = YPPsym((P)"contagious-type");
  lit_50 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T129 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLnumG));
  T128 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T129,Ynil);
  T127 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_49),T128,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcontagious_type,T127);
  lit_51 = YPPsym((P)"contagious-call");
  lit_52 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T131 = YPsig(LITREF(lit_52),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T130 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_51),T131,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcontagious_call,T130);
  lit_53 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T132 = YPsig(LITREF(lit_53),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_contagious_call_25 = YPmet(FUNCODEREF(fun_contagious_call_25),LITREF(lit_51),T132,ENVNUL,PNUL,sloc(107));
  T135 = BOUNDP(YgooSmathYcontagious_call);
  if (T135 != YPfalse) {
    T134 = VARREF(YgooSmathYcontagious_call);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_contagious_call_25;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YgooSmathYcontagious_call,T133);
  lit_54 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T137 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_26 = YPmet(FUNCODEREF(fun_L_26),LITREF(lit_26),T137,ENVNUL,PNUL,sloc(111));
  T140 = BOUNDP(YgooSmagYL);
  if (T140 != YPfalse) {
    T139 = VARREF(YgooSmagYL);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_L_26;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YgooSmagYL,T138);
  lit_55 = YPPsym((P)"+");
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T142 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_27 = YPmet(FUNCODEREF(fun_A_27),LITREF(lit_55),T142,ENVNUL,PNUL,sloc(114));
  T145 = BOUNDP(YgooSmathYA);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooSmathYA);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_A_27;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooSmathYA,T143);
  lit_57 = YPPsym((P)"1+");
  lit_58 = YPPlist(1,YPPsym((P)"x"));
  T147 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1A_28 = YPmet(FUNCODEREF(fun_1A_28),LITREF(lit_57),T147,ENVNUL,PNUL,sloc(117));
  T150 = BOUNDP(YgooSmathY1A);
  if (T150 != YPfalse) {
    T149 = VARREF(YgooSmathY1A);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_1A_28;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YgooSmathY1A,T148);
  lit_59 = YPPsym((P)"-");
  lit_60 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T152 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___29 = YPmet(FUNCODEREF(fun___29),LITREF(lit_59),T152,ENVNUL,PNUL,sloc(120));
  T155 = BOUNDP(YgooSmathY_);
  if (T155 != YPfalse) {
    T154 = VARREF(YgooSmathY_);
  } else {
    T154 = YPfalse;
  }
  T156 = fun___29;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YgooSmathY_,T153);
  lit_61 = YPPsym((P)"1-");
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T157 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1__30 = YPmet(FUNCODEREF(fun_1__30),LITREF(lit_61),T157,ENVNUL,PNUL,sloc(123));
  T160 = BOUNDP(YgooSmathY1_);
  if (T160 != YPfalse) {
    T159 = VARREF(YgooSmathY1_);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_1__30;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YgooSmathY1_,T158);
  lit_63 = YPPsym((P)"*");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T162 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_31 = YPmet(FUNCODEREF(fun_T_31),LITREF(lit_63),T162,ENVNUL,PNUL,sloc(126));
  T165 = BOUNDP(YgooSmathYT);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooSmathYT);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_T_31;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooSmathYT,T163);
  lit_65 = YPPsym((P)"/");
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T167 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_S_32 = YPmet(FUNCODEREF(fun_S_32),LITREF(lit_65),T167,ENVNUL,PNUL,sloc(129));
  T170 = BOUNDP(YgooSmathYS);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooSmathYS);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_S_32;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooSmathYS,T168);
  lit_67 = YPPsym((P)"atan2");
  lit_68 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T172 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_33 = YPmet(FUNCODEREF(fun_atan2_33),LITREF(lit_67),T172,ENVNUL,PNUL,sloc(132));
  T175 = BOUNDP(YgooSmathYatan2);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooSmathYatan2);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_atan2_33;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooSmathYatan2,T173);
  lit_69 = YPPsym((P)"logn");
  lit_70 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T177 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_34 = YPmet(FUNCODEREF(fun_logn_34),LITREF(lit_69),T177,ENVNUL,PNUL,sloc(135));
  T180 = BOUNDP(YgooSmathYlogn);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooSmathYlogn);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_logn_34;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooSmathYlogn,T178);
  lit_71 = YPPsym((P)"floor");
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T182 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_35 = YPmet(FUNCODEREF(fun_floor_35),LITREF(lit_71),T182,ENVNUL,PNUL,sloc(138));
  T185 = BOUNDP(YgooSmathYfloor);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSmathYfloor);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_floor_35;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSmathYfloor,T183);
  lit_73 = YPPsym((P)"ceil");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T187 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_36 = YPmet(FUNCODEREF(fun_ceil_36),LITREF(lit_73),T187,ENVNUL,PNUL,sloc(141));
  T190 = BOUNDP(YgooSmathYceil);
  if (T190 != YPfalse) {
    T189 = VARREF(YgooSmathYceil);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_ceil_36;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YgooSmathYceil,T188);
  lit_75 = YPPsym((P)"round");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T192 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_37 = YPmet(FUNCODEREF(fun_round_37),LITREF(lit_75),T192,ENVNUL,PNUL,sloc(144));
  T195 = BOUNDP(YgooSmathYround);
  if (T195 != YPfalse) {
    T194 = VARREF(YgooSmathYround);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_round_37;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YgooSmathYround,T193);
  lit_77 = YPPsym((P)"round-to");
  lit_78 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_79 = YPflo(FLOINT(10.0));
  T197 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_round_to_38 = YPmet(FUNCODEREF(fun_round_to_38),LITREF(lit_77),T197,ENVNUL,PNUL,sloc(147));
  T200 = BOUNDP(YgooSmathYround_to);
  if (T200 != YPfalse) {
    T199 = VARREF(YgooSmathYround_to);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_round_to_38;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YgooSmathYround_to,T198);
  lit_80 = YPPsym((P)"trunc");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T202 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_39 = YPmet(FUNCODEREF(fun_trunc_39),LITREF(lit_80),T202,ENVNUL,PNUL,sloc(153));
  T205 = BOUNDP(YgooSmathYtrunc);
  if (T205 != YPfalse) {
    T204 = VARREF(YgooSmathYtrunc);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_trunc_39;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YgooSmathYtrunc,T203);
  lit_82 = YPPsym((P)"floor/");
  lit_83 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T208 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T207 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T208,Ynil);
  fun_floorS_40 = YPmet(FUNCODEREF(fun_floorS_40),LITREF(lit_82),T207,ENVNUL,PNUL,sloc(156));
  T211 = BOUNDP(YgooSmathYfloorS);
  if (T211 != YPfalse) {
    T210 = VARREF(YgooSmathYfloorS);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_floorS_40;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YgooSmathYfloorS,T209);
  lit_84 = YPPsym((P)"ceil/");
  lit_85 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T214 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T213 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T214,Ynil);
  fun_ceilS_41 = YPmet(FUNCODEREF(fun_ceilS_41),LITREF(lit_84),T213,ENVNUL,PNUL,sloc(165));
  T217 = BOUNDP(YgooSmathYceilS);
  if (T217 != YPfalse) {
    T216 = VARREF(YgooSmathYceilS);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_ceilS_41;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YgooSmathYceilS,T215);
  lit_86 = YPPsym((P)"round/");
  lit_87 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  lit_88 = YPflo(FLOINT(2.0));
  T220 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T219 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T220,Ynil);
  fun_roundS_42 = YPmet(FUNCODEREF(fun_roundS_42),LITREF(lit_86),T219,ENVNUL,PNUL,sloc(174));
  T223 = BOUNDP(YgooSmathYroundS);
  if (T223 != YPfalse) {
    T222 = VARREF(YgooSmathYroundS);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_roundS_42;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YgooSmathYroundS,T221);
  lit_89 = YPPsym((P)"trunc/");
  lit_90 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T226 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T225 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T226,Ynil);
  fun_truncS_43 = YPmet(FUNCODEREF(fun_truncS_43),LITREF(lit_89),T225,ENVNUL,PNUL,sloc(190));
  T229 = BOUNDP(YgooSmathYtruncS);
  if (T229 != YPfalse) {
    T228 = VARREF(YgooSmathYtruncS);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_truncS_43;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YgooSmathYtruncS,T227);
  lit_91 = YPPsym((P)"div");
  lit_92 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T231 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_div_44 = YPmet(FUNCODEREF(fun_div_44),LITREF(lit_91),T231,ENVNUL,PNUL,sloc(193));
  T234 = BOUNDP(YgooSmathYdiv);
  if (T234 != YPfalse) {
    T233 = VARREF(YgooSmathYdiv);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_div_44;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YgooSmathYdiv,T232);
  lit_93 = YPPsym((P)"mod");
  lit_94 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T236 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_45 = YPmet(FUNCODEREF(fun_mod_45),LITREF(lit_93),T236,ENVNUL,PNUL,sloc(196));
  T239 = BOUNDP(YgooSmathYmod);
  if (T239 != YPfalse) {
    T238 = VARREF(YgooSmathYmod);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_mod_45;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YgooSmathYmod,T237);
  lit_95 = YPPsym((P)"mod+");
  lit_96 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T241 = YPsig(LITREF(lit_96),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_modA_46 = YPmet(FUNCODEREF(fun_modA_46),LITREF(lit_95),T241,ENVNUL,PNUL,sloc(200));
  T244 = BOUNDP(YgooSmathYmodA);
  if (T244 != YPfalse) {
    T243 = VARREF(YgooSmathYmodA);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_modA_46;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YgooSmathYmodA,T242);
  lit_97 = YPPsym((P)"mod-");
  lit_98 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T246 = YPsig(LITREF(lit_98),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_mod__47 = YPmet(FUNCODEREF(fun_mod__47),LITREF(lit_97),T246,ENVNUL,PNUL,sloc(203));
  T249 = BOUNDP(YgooSmathYmod_);
  if (T249 != YPfalse) {
    T248 = VARREF(YgooSmathYmod_);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_mod__47;
  T247 = XCALL2(1,VARREF(YPdefine_method),T248,T250);
  VARSET(YgooSmathYmod_,T247);
  lit_99 = YPPlist(1,YPPsym((P)"exp"));
  lit_100 = YPPlist(1,YPPsym((P)"return"));
  lit_101 = YPPsym((P)"x-1292");
  lit_102 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_103 = YPPsym((P)"modincf");
  lit_104 = YPsb((P)"Match Pattern Failure");
  lit_105 = YPPsym((P)"opf");
  lit_106 = YPPsym((P)"_");
  lit_107 = Ynil;
  T253 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1292_48 = YPmet(FUNCODEREF(fun_x_1292_48),LITREF(lit_101),T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T252,ENVNUL,PNUL,YPfalse);
  T251 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T251,ENVNUL,PNUL,YPfalse);
  T254 = fun_50;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T254);
  lit_108 = YPPlist(1,YPPsym((P)"exp"));
  lit_109 = YPPlist(1,YPPsym((P)"return"));
  lit_110 = YPPsym((P)"x-1296");
  lit_111 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_112 = YPPsym((P)"moddecf");
  T257 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1296_51 = YPmet(FUNCODEREF(fun_x_1296_51),LITREF(lit_110),T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T258 = fun_53;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"moddecf"),T258);
  lit_113 = YPPsym((P)"rem");
  lit_114 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T259 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_54 = YPmet(FUNCODEREF(fun_rem_54),LITREF(lit_113),T259,ENVNUL,PNUL,sloc(212));
  T262 = BOUNDP(YgooSmathYrem);
  if (T262 != YPfalse) {
    T261 = VARREF(YgooSmathYrem);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_rem_54;
  T260 = XCALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YgooSmathYrem,T260);
  lit_115 = YPPsym((P)"pow");
  lit_116 = YPPlist(2,YPPsym((P)"base"),YPPsym((P)"n"));
  T264 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_55 = YPmet(FUNCODEREF(fun_pow_55),LITREF(lit_115),T264,ENVNUL,PNUL,sloc(216));
  T267 = BOUNDP(YgooSmathYpow);
  if (T267 != YPfalse) {
    T266 = VARREF(YgooSmathYpow);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_pow_55;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YgooSmathYpow,T265);
  lit_117 = YPPsym((P)"pos?");
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  T269 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_56 = YPmet(FUNCODEREF(fun_posQ_56),LITREF(lit_117),T269,ENVNUL,PNUL,sloc(219));
  T272 = BOUNDP(YgooSmathYposQ);
  if (T272 != YPfalse) {
    T271 = VARREF(YgooSmathYposQ);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_posQ_56;
  T270 = XCALL2(1,VARREF(YPdefine_method),T271,T273);
  VARSET(YgooSmathYposQ,T270);
  lit_119 = YPPsym((P)"zero?");
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  T274 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_57 = YPmet(FUNCODEREF(fun_zeroQ_57),LITREF(lit_119),T274,ENVNUL,PNUL,sloc(222));
  T277 = BOUNDP(YgooSmathYzeroQ);
  if (T277 != YPfalse) {
    T276 = VARREF(YgooSmathYzeroQ);
  } else {
    T276 = YPfalse;
  }
  T278 = fun_zeroQ_57;
  T275 = XCALL2(1,VARREF(YPdefine_method),T276,T278);
  VARSET(YgooSmathYzeroQ,T275);
  lit_121 = YPPsym((P)"neg?");
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T279 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_58 = YPmet(FUNCODEREF(fun_negQ_58),LITREF(lit_121),T279,ENVNUL,PNUL,sloc(225));
  T282 = BOUNDP(YgooSmathYnegQ);
  if (T282 != YPfalse) {
    T281 = VARREF(YgooSmathYnegQ);
  } else {
    T281 = YPfalse;
  }
  T283 = fun_negQ_58;
  T280 = XCALL2(1,VARREF(YPdefine_method),T281,T283);
  VARSET(YgooSmathYnegQ,T280);
  lit_123 = YPPsym((P)"neg");
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T286 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T285 = fun_neg_59 = YPmet(FUNCODEREF(fun_neg_59),LITREF(lit_123),T286,ENVNUL,PNUL,sloc(228));
  T290 = BOUNDP(YgooSmathYneg);
  if (T290 != YPfalse) {
    T289 = VARREF(YgooSmathYneg);
  } else {
    T289 = YPfalse;
  }
  T291 = fun_neg_59;
  T288 = XCALL2(1,VARREF(YPdefine_method),T289,T291);
  T287 = VARSET(YgooSmathYneg,T288);
  T284 = T287;
  return T284;
}

P YgooSmathY___main_1___() {
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
  P T288,T289,T290,T291,T292,T293,T294,T295,T296;
DEFCREGS();
loop:
  lit_125 = YPPsym((P)"abs");
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_60 = YPmet(FUNCODEREF(fun_abs_60),LITREF(lit_125),T0,ENVNUL,PNUL,sloc(231));
  T3 = BOUNDP(YgooSmathYabs);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSmathYabs);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_abs_60;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSmathYabs,T1);
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_61 = YPmet(FUNCODEREF(fun_to_str_61),LITREF(lit_0),T5,ENVNUL,PNUL,sloc(234));
  T8 = BOUNDP(YgooSmathYto_str);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSmathYto_str);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_to_str_61;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSmathYto_str,T6);
  lit_128 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T11 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T10 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T11,Ynil);
  fun_contagious_type_62 = YPmet(FUNCODEREF(fun_contagious_type_62),LITREF(lit_49),T10,ENVNUL,PNUL,sloc(239));
  T14 = BOUNDP(YgooSmathYcontagious_type);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooSmathYcontagious_type);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_contagious_type_62;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooSmathYcontagious_type,T12);
  lit_129 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T17 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T16 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T17,Ynil);
  fun_contagious_type_63 = YPmet(FUNCODEREF(fun_contagious_type_63),LITREF(lit_49),T16,ENVNUL,PNUL,sloc(242));
  T20 = BOUNDP(YgooSmathYcontagious_type);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSmathYcontagious_type);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_contagious_type_63;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSmathYcontagious_type,T18);
  lit_130 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T22 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),T23,Ynil);
  fun_contagious_type_64 = YPmet(FUNCODEREF(fun_contagious_type_64),LITREF(lit_49),T22,ENVNUL,PNUL,sloc(245));
  T26 = BOUNDP(YgooSmathYcontagious_type);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooSmathYcontagious_type);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_contagious_type_64;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooSmathYcontagious_type,T24);
  lit_131 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T29 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T28 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),T29,Ynil);
  fun_contagious_type_65 = YPmet(FUNCODEREF(fun_contagious_type_65),LITREF(lit_49),T28,ENVNUL,PNUL,sloc(248));
  T32 = BOUNDP(YgooSmathYcontagious_type);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooSmathYcontagious_type);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_contagious_type_65;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooSmathYcontagious_type,T30);
  lit_132 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_66 = YPmet(FUNCODEREF(fun_EE_66),LITREF(lit_16),T34,ENVNUL,PNUL,sloc(251));
  T37 = BOUNDP(YgooSmacrosYEE);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSmacrosYEE);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_EE_66;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSmacrosYEE,T35);
  lit_133 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T39 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_67 = YPmet(FUNCODEREF(fun_L_67),LITREF(lit_26),T39,ENVNUL,PNUL,sloc(254));
  T42 = BOUNDP(YgooSmagYL);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSmagYL);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_L_67;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSmagYL,T40);
  lit_134 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T44 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_A_68 = YPmet(FUNCODEREF(fun_A_68),LITREF(lit_55),T44,ENVNUL,PNUL,sloc(257));
  T47 = BOUNDP(YgooSmathYA);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSmathYA);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_A_68;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSmathYA,T45);
  lit_135 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T49 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun___69 = YPmet(FUNCODEREF(fun___69),LITREF(lit_59),T49,ENVNUL,PNUL,sloc(260));
  T52 = BOUNDP(YgooSmathY_);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooSmathY_);
  } else {
    T51 = YPfalse;
  }
  T53 = fun___69;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooSmathY_,T50);
  lit_136 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T54 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_T_70 = YPmet(FUNCODEREF(fun_T_70),LITREF(lit_63),T54,ENVNUL,PNUL,sloc(263));
  T57 = BOUNDP(YgooSmathYT);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSmathYT);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_T_70;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSmathYT,T55);
  lit_137 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_138 = YPsb((P)"No int divide, consider trunc/");
  T59 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_S_71 = YPmet(FUNCODEREF(fun_S_71),LITREF(lit_65),T59,ENVNUL,PNUL,sloc(266));
  T62 = BOUNDP(YgooSmathYS);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSmathYS);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_S_71;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSmathYS,T60);
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_72 = YPmet(FUNCODEREF(fun_floor_72),LITREF(lit_71),T64,ENVNUL,PNUL,sloc(269));
  T67 = BOUNDP(YgooSmathYfloor);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSmathYfloor);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_floor_72;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSmathYfloor,T65);
  lit_140 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_73 = YPmet(FUNCODEREF(fun_ceil_73),LITREF(lit_73),T69,ENVNUL,PNUL,sloc(271));
  T72 = BOUNDP(YgooSmathYceil);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSmathYceil);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_ceil_73;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSmathYceil,T70);
  lit_141 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_74 = YPmet(FUNCODEREF(fun_round_74),LITREF(lit_75),T74,ENVNUL,PNUL,sloc(273));
  T77 = BOUNDP(YgooSmathYround);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSmathYround);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_round_74;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSmathYround,T75);
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_75 = YPmet(FUNCODEREF(fun_trunc_75),LITREF(lit_80),T79,ENVNUL,PNUL,sloc(275));
  T82 = BOUNDP(YgooSmathYtrunc);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSmathYtrunc);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_trunc_75;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSmathYtrunc,T80);
  lit_143 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T85 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfixnumG));
  T84 = YPsig(LITREF(lit_143),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),T85,Ynil);
  fun_truncS_76 = YPmet(FUNCODEREF(fun_truncS_76),LITREF(lit_89),T84,ENVNUL,PNUL,sloc(277));
  T88 = BOUNDP(YgooSmathYtruncS);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooSmathYtruncS);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_truncS_76;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooSmathYtruncS,T86);
  lit_144 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T90 = YPsig(LITREF(lit_144),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_mod_77 = YPmet(FUNCODEREF(fun_mod_77),LITREF(lit_93),T90,ENVNUL,PNUL,sloc(281));
  T93 = BOUNDP(YgooSmathYmod);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooSmathYmod);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_mod_77;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooSmathYmod,T91);
  lit_145 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_146 = YPPsym((P)"loop");
  lit_147 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"p"),YPPsym((P)"y"));
  T96 = YPsig(LITREF(lit_147),YPPlist(3,VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_78 = YPmet(FUNCODEREF(fun_loop_78),LITREF(lit_146),T96,ENVNUL,PNUL,sloc(295));
  T95 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_79 = YPmet(FUNCODEREF(fun_pow_79),LITREF(lit_115),T95,ENVNUL,PNUL,sloc(289));
  T99 = BOUNDP(YgooSmathYpow);
  if (T99 != YPfalse) {
    T98 = VARREF(YgooSmathYpow);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_pow_79;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YgooSmathYpow,T97);
  lit_148 = YPPsym((P)"|");
  lit_149 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T101 = YPsig(LITREF(lit_149),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_80 = YPmet(FUNCODEREF(fun_K_80),LITREF(lit_148),T101,ENVNUL,PNUL,sloc(304));
  T104 = BOUNDP(YgooSmathYK);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooSmathYK);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_K_80;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YgooSmathYK,T102);
  lit_150 = YPPsym((P)"^");
  lit_151 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T106 = YPsig(LITREF(lit_151),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_81 = YPmet(FUNCODEREF(fun_C_81),LITREF(lit_150),T106,ENVNUL,PNUL,sloc(307));
  T109 = BOUNDP(YgooSmathYC);
  if (T109 != YPfalse) {
    T108 = VARREF(YgooSmathYC);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_C_81;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YgooSmathYC,T107);
  lit_152 = YPPsym((P)"&");
  lit_153 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T111 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_82 = YPmet(FUNCODEREF(fun_B_82),LITREF(lit_152),T111,ENVNUL,PNUL,sloc(310));
  T114 = BOUNDP(YgooSmathYB);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSmathYB);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_B_82;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSmathYB,T112);
  lit_154 = YPPsym((P)"~");
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  T116 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_N_83 = YPmet(FUNCODEREF(fun_N_83),LITREF(lit_154),T116,ENVNUL,PNUL,sloc(313));
  T119 = BOUNDP(YgooSmathYN);
  if (T119 != YPfalse) {
    T118 = VARREF(YgooSmathYN);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_N_83;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YgooSmathYN,T117);
  lit_156 = YPPsym((P)"bit?");
  lit_157 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"x"));
  T121 = YPsig(LITREF(lit_157),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_bitQ_84 = YPmet(FUNCODEREF(fun_bitQ_84),LITREF(lit_156),T121,ENVNUL,PNUL,sloc(316));
  T124 = BOUNDP(YgooSmathYbitQ);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSmathYbitQ);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_bitQ_84;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSmathYbitQ,T122);
  lit_158 = YPPsym((P)"even?");
  lit_159 = YPPlist(1,YPPsym((P)"x"));
  T126 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_85 = YPmet(FUNCODEREF(fun_evenQ_85),LITREF(lit_158),T126,ENVNUL,PNUL,sloc(319));
  T129 = BOUNDP(YgooSmathYevenQ);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSmathYevenQ);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_evenQ_85;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSmathYevenQ,T127);
  lit_160 = YPPsym((P)"odd?");
  lit_161 = YPPlist(1,YPPsym((P)"x"));
  T131 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_86 = YPmet(FUNCODEREF(fun_oddQ_86),LITREF(lit_160),T131,ENVNUL,PNUL,sloc(322));
  T134 = BOUNDP(YgooSmathYoddQ);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooSmathYoddQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_oddQ_86;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooSmathYoddQ,T132);
  lit_162 = YPPsym((P)">>");
  lit_163 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T136 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GG_87 = YPmet(FUNCODEREF(fun_GG_87),LITREF(lit_162),T136,ENVNUL,PNUL,sloc(325));
  T139 = BOUNDP(YgooSmathYGG);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooSmathYGG);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_GG_87;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooSmathYGG,T137);
  lit_164 = YPPsym((P)">>>");
  lit_165 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T141 = YPsig(LITREF(lit_165),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GGG_88 = YPmet(FUNCODEREF(fun_GGG_88),LITREF(lit_164),T141,ENVNUL,PNUL,sloc(328));
  T144 = BOUNDP(YgooSmathYGGG);
  if (T144 != YPfalse) {
    T143 = VARREF(YgooSmathYGGG);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_GGG_88;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YgooSmathYGGG,T142);
  lit_166 = YPPsym((P)"<<");
  lit_167 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T146 = YPsig(LITREF(lit_167),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_LL_89 = YPmet(FUNCODEREF(fun_LL_89),LITREF(lit_166),T146,ENVNUL,PNUL,sloc(331));
  T149 = BOUNDP(YgooSmathYLL);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooSmathYLL);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_LL_89;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooSmathYLL,T147);
  lit_168 = YPPsym((P)"power-of-two-ceil");
  lit_169 = YPPlist(1,YPPsym((P)"x"));
  lit_170 = YPPsym((P)"search");
  lit_171 = YPPlist(1,YPPsym((P)"po2"));
  T152 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_90 = YPmet(FUNCODEREF(fun_search_90),LITREF(lit_170),T152,ENVNUL,PNUL,sloc(335));
  T151 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_91 = YPmet(FUNCODEREF(fun_power_of_two_ceil_91),LITREF(lit_168),T151,ENVNUL,PNUL,sloc(334));
  T155 = BOUNDP(YgooSmathYpower_of_two_ceil);
  if (T155 != YPfalse) {
    T154 = VARREF(YgooSmathYpower_of_two_ceil);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_power_of_two_ceil_91;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YgooSmathYpower_of_two_ceil,T153);
  lit_172 = YPPsym((P)"flo-bits");
  lit_173 = YPPlist(1,YPPsym((P)"x"));
  T157 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPmet(FUNCODEREF(YgooSmathYflo_bits),LITREF(lit_172),T157,ENVNUL,PNUL,sloc(342));
  T158 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T158);
  lit_174 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"x"));
  T160 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T159 = YPsig(LITREF(lit_174),YPPlist(2,T160,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_93 = YPmet(FUNCODEREF(fun_as_93),LITREF(lit_11),T159,ENVNUL,PNUL,sloc(345));
  T163 = BOUNDP(YgooStypesYas);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooStypesYas);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_as_93;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooStypesYas,T161);
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T165 = YPsig(LITREF(lit_175),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_94 = YPmet(FUNCODEREF(fun_EE_94),LITREF(lit_16),T165,ENVNUL,PNUL,sloc(348));
  T168 = BOUNDP(YgooSmacrosYEE);
  if (T168 != YPfalse) {
    T167 = VARREF(YgooSmacrosYEE);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_EE_94;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YgooSmacrosYEE,T166);
  lit_176 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T170 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_95 = YPmet(FUNCODEREF(fun_L_95),LITREF(lit_26),T170,ENVNUL,PNUL,sloc(351));
  T173 = BOUNDP(YgooSmagYL);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooSmagYL);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_L_95;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooSmagYL,T171);
  lit_177 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T175 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_96 = YPmet(FUNCODEREF(fun_A_96),LITREF(lit_55),T175,ENVNUL,PNUL,sloc(354));
  T178 = BOUNDP(YgooSmathYA);
  if (T178 != YPfalse) {
    T177 = VARREF(YgooSmathYA);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_A_96;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YgooSmathYA,T176);
  lit_178 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T180 = YPsig(LITREF(lit_178),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___97 = YPmet(FUNCODEREF(fun___97),LITREF(lit_59),T180,ENVNUL,PNUL,sloc(357));
  T183 = BOUNDP(YgooSmathY_);
  if (T183 != YPfalse) {
    T182 = VARREF(YgooSmathY_);
  } else {
    T182 = YPfalse;
  }
  T184 = fun___97;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YgooSmathY_,T181);
  lit_179 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T185 = YPsig(LITREF(lit_179),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_98 = YPmet(FUNCODEREF(fun_T_98),LITREF(lit_63),T185,ENVNUL,PNUL,sloc(360));
  T188 = BOUNDP(YgooSmathYT);
  if (T188 != YPfalse) {
    T187 = VARREF(YgooSmathYT);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_T_98;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YgooSmathYT,T186);
  lit_180 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T190 = YPsig(LITREF(lit_180),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_99 = YPmet(FUNCODEREF(fun_S_99),LITREF(lit_65),T190,ENVNUL,PNUL,sloc(363));
  T193 = BOUNDP(YgooSmathYS);
  if (T193 != YPfalse) {
    T192 = VARREF(YgooSmathYS);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_S_99;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YgooSmathYS,T191);
  lit_181 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T196 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfloG));
  T195 = YPsig(LITREF(lit_181),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T196,Ynil);
  fun_truncS_100 = YPmet(FUNCODEREF(fun_truncS_100),LITREF(lit_89),T195,ENVNUL,PNUL,sloc(366));
  T199 = BOUNDP(YgooSmathYtruncS);
  if (T199 != YPfalse) {
    T198 = VARREF(YgooSmathYtruncS);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_truncS_100;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YgooSmathYtruncS,T197);
  lit_182 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T201 = YPsig(LITREF(lit_182),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_101 = YPmet(FUNCODEREF(fun_pow_101),LITREF(lit_115),T201,ENVNUL,PNUL,sloc(371));
  T204 = BOUNDP(YgooSmathYpow);
  if (T204 != YPfalse) {
    T203 = VARREF(YgooSmathYpow);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_pow_101;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YgooSmathYpow,T202);
  lit_183 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_183));
  lit_184 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_184));
  lit_185 = YPPsym((P)"isqrt");
  lit_186 = YPPlist(1,YPPsym((P)"x"));
  T206 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_102 = YPmet(FUNCODEREF(fun_isqrt_102),LITREF(lit_185),T206,ENVNUL,PNUL,sloc(378));
  T209 = BOUNDP(YgooSmathYisqrt);
  if (T209 != YPfalse) {
    T208 = VARREF(YgooSmathYisqrt);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_isqrt_102;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YgooSmathYisqrt,T207);
  lit_187 = YPPlist(1,YPPsym((P)"exp"));
  lit_188 = YPPlist(1,YPPsym((P)"return"));
  lit_189 = YPPsym((P)"x-1300");
  lit_190 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_191 = YPPsym((P)"def-unary-trans");
  lit_192 = YPsb((P)"%f");
  lit_193 = YPPsym((P)"seq");
  lit_194 = YPPsym((P)"dg");
  lit_195 = YPPsym((P)"<num>");
  lit_196 = YPPsym((P)"=>");
  lit_197 = YPPsym((P)"dm");
  lit_198 = YPPsym((P)"<int>");
  lit_199 = YPPsym((P)"<flo>");
  lit_200 = YPPsym((P)"%fb");
  lit_201 = YPPsym((P)"%fu");
  T213 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_103 = YPmet(FUNCODEREF(fun_x_1300_103),LITREF(lit_189),T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T214 = fun_105;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T214);
  lit_202 = YPPsym((P)"sqrt");
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  T216 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T215 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_202),T216,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsqrt,T215);
  lit_204 = YPPlist(1,YPPsym((P)"x"));
  lit_205 = YPsb((P)"SQRT would produce complex number");
  T217 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_106 = YPmet(FUNCODEREF(fun_sqrt_106),LITREF(lit_202),T217,ENVNUL,PNUL,sloc(391));
  T220 = BOUNDP(YgooSmathYsqrt);
  if (T220 != YPfalse) {
    T219 = VARREF(YgooSmathYsqrt);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sqrt_106;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YgooSmathYsqrt,T218);
  lit_206 = YPPlist(1,YPPsym((P)"x"));
  T222 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_107 = YPmet(FUNCODEREF(fun_sqrt_107),LITREF(lit_202),T222,ENVNUL,PNUL,sloc(391));
  T225 = BOUNDP(YgooSmathYsqrt);
  if (T225 != YPfalse) {
    T224 = VARREF(YgooSmathYsqrt);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sqrt_107;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YgooSmathYsqrt,T223);
  lit_207 = YPPsym((P)"log");
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  T228 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T227 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_207),T228,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlog,T227);
  lit_209 = YPPlist(1,YPPsym((P)"x"));
  T229 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_108 = YPmet(FUNCODEREF(fun_log_108),LITREF(lit_207),T229,ENVNUL,PNUL,sloc(394));
  T232 = BOUNDP(YgooSmathYlog);
  if (T232 != YPfalse) {
    T231 = VARREF(YgooSmathYlog);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_log_108;
  T230 = XCALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YgooSmathYlog,T230);
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  T234 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_109 = YPmet(FUNCODEREF(fun_log_109),LITREF(lit_207),T234,ENVNUL,PNUL,sloc(394));
  T237 = BOUNDP(YgooSmathYlog);
  if (T237 != YPfalse) {
    T236 = VARREF(YgooSmathYlog);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_log_109;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YgooSmathYlog,T235);
  lit_211 = YPPsym((P)"sin");
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  T240 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T239 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_211),T240,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsin,T239);
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T241 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_110 = YPmet(FUNCODEREF(fun_sin_110),LITREF(lit_211),T241,ENVNUL,PNUL,sloc(395));
  T244 = BOUNDP(YgooSmathYsin);
  if (T244 != YPfalse) {
    T243 = VARREF(YgooSmathYsin);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_sin_110;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YgooSmathYsin,T242);
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T246 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_111 = YPmet(FUNCODEREF(fun_sin_111),LITREF(lit_211),T246,ENVNUL,PNUL,sloc(395));
  T249 = BOUNDP(YgooSmathYsin);
  if (T249 != YPfalse) {
    T248 = VARREF(YgooSmathYsin);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_sin_111;
  T247 = XCALL2(1,VARREF(YPdefine_method),T248,T250);
  VARSET(YgooSmathYsin,T247);
  lit_215 = YPPsym((P)"cos");
  lit_216 = YPPlist(1,YPPsym((P)"x"));
  T252 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T251 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_215),T252,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcos,T251);
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  T253 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_112 = YPmet(FUNCODEREF(fun_cos_112),LITREF(lit_215),T253,ENVNUL,PNUL,sloc(396));
  T256 = BOUNDP(YgooSmathYcos);
  if (T256 != YPfalse) {
    T255 = VARREF(YgooSmathYcos);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_cos_112;
  T254 = XCALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YgooSmathYcos,T254);
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T258 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_113 = YPmet(FUNCODEREF(fun_cos_113),LITREF(lit_215),T258,ENVNUL,PNUL,sloc(396));
  T261 = BOUNDP(YgooSmathYcos);
  if (T261 != YPfalse) {
    T260 = VARREF(YgooSmathYcos);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_cos_113;
  T259 = XCALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YgooSmathYcos,T259);
  lit_219 = YPPsym((P)"tan");
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  T264 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T263 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_219),T264,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtan,T263);
  lit_221 = YPPlist(1,YPPsym((P)"x"));
  T265 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_114 = YPmet(FUNCODEREF(fun_tan_114),LITREF(lit_219),T265,ENVNUL,PNUL,sloc(397));
  T268 = BOUNDP(YgooSmathYtan);
  if (T268 != YPfalse) {
    T267 = VARREF(YgooSmathYtan);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_tan_114;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YgooSmathYtan,T266);
  lit_222 = YPPlist(1,YPPsym((P)"x"));
  T270 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_115 = YPmet(FUNCODEREF(fun_tan_115),LITREF(lit_219),T270,ENVNUL,PNUL,sloc(397));
  T273 = BOUNDP(YgooSmathYtan);
  if (T273 != YPfalse) {
    T272 = VARREF(YgooSmathYtan);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_tan_115;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YgooSmathYtan,T271);
  lit_223 = YPPsym((P)"sinh");
  lit_224 = YPPlist(1,YPPsym((P)"x"));
  T276 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T275 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_223),T276,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsinh,T275);
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  T277 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_116 = YPmet(FUNCODEREF(fun_sinh_116),LITREF(lit_223),T277,ENVNUL,PNUL,sloc(398));
  T280 = BOUNDP(YgooSmathYsinh);
  if (T280 != YPfalse) {
    T279 = VARREF(YgooSmathYsinh);
  } else {
    T279 = YPfalse;
  }
  T281 = fun_sinh_116;
  T278 = XCALL2(1,VARREF(YPdefine_method),T279,T281);
  VARSET(YgooSmathYsinh,T278);
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T282 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_117 = YPmet(FUNCODEREF(fun_sinh_117),LITREF(lit_223),T282,ENVNUL,PNUL,sloc(398));
  T285 = BOUNDP(YgooSmathYsinh);
  if (T285 != YPfalse) {
    T284 = VARREF(YgooSmathYsinh);
  } else {
    T284 = YPfalse;
  }
  T286 = fun_sinh_117;
  T283 = XCALL2(1,VARREF(YPdefine_method),T284,T286);
  VARSET(YgooSmathYsinh,T283);
  lit_227 = YPPsym((P)"cosh");
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T288 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T287 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_227),T288,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcosh,T287);
  lit_229 = YPPlist(1,YPPsym((P)"x"));
  T291 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  T290 = fun_cosh_118 = YPmet(FUNCODEREF(fun_cosh_118),LITREF(lit_227),T291,ENVNUL,PNUL,sloc(399));
  T295 = BOUNDP(YgooSmathYcosh);
  if (T295 != YPfalse) {
    T294 = VARREF(YgooSmathYcosh);
  } else {
    T294 = YPfalse;
  }
  T296 = fun_cosh_118;
  T293 = XCALL2(1,VARREF(YPdefine_method),T294,T296);
  T292 = VARSET(YgooSmathYcosh,T293);
  T289 = T292;
  return T289;
}

P YgooSmathY___main_2___() {
  P tmpF1701;
  P tmpF1700;
  P tmpF1699;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75;
DEFCREGS();
loop:
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_119 = YPmet(FUNCODEREF(fun_cosh_119),LITREF(lit_227),T0,ENVNUL,PNUL,sloc(399));
  T3 = BOUNDP(YgooSmathYcosh);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSmathYcosh);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_cosh_119;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSmathYcosh,T1);
  lit_231 = YPPsym((P)"tanh");
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_231),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtanh,T5);
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_120 = YPmet(FUNCODEREF(fun_tanh_120),LITREF(lit_231),T7,ENVNUL,PNUL,sloc(400));
  T10 = BOUNDP(YgooSmathYtanh);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSmathYtanh);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_tanh_120;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSmathYtanh,T8);
  lit_234 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_121 = YPmet(FUNCODEREF(fun_tanh_121),LITREF(lit_231),T12,ENVNUL,PNUL,sloc(400));
  T15 = BOUNDP(YgooSmathYtanh);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSmathYtanh);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_tanh_121;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSmathYtanh,T13);
  lit_235 = YPPsym((P)"asin");
  lit_236 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T17 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_235),T18,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYasin,T17);
  lit_237 = YPPlist(1,YPPsym((P)"x"));
  lit_238 = YPsb((P)"SQRT would produce complex number");
  T19 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_122 = YPmet(FUNCODEREF(fun_asin_122),LITREF(lit_235),T19,ENVNUL,PNUL,sloc(401));
  T22 = BOUNDP(YgooSmathYasin);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSmathYasin);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_asin_122;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSmathYasin,T20);
  lit_239 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_123 = YPmet(FUNCODEREF(fun_asin_123),LITREF(lit_235),T24,ENVNUL,PNUL,sloc(401));
  T27 = BOUNDP(YgooSmathYasin);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooSmathYasin);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_asin_123;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooSmathYasin,T25);
  lit_240 = YPPsym((P)"acos");
  lit_241 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_241),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T29 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_240),T30,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYacos,T29);
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  lit_243 = YPsb((P)"SQRT would produce complex number");
  T31 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_124 = YPmet(FUNCODEREF(fun_acos_124),LITREF(lit_240),T31,ENVNUL,PNUL,sloc(403));
  T34 = BOUNDP(YgooSmathYacos);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooSmathYacos);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_acos_124;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooSmathYacos,T32);
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_125 = YPmet(FUNCODEREF(fun_acos_125),LITREF(lit_240),T36,ENVNUL,PNUL,sloc(403));
  T39 = BOUNDP(YgooSmathYacos);
  if (T39 != YPfalse) {
    T38 = VARREF(YgooSmathYacos);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_acos_125;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YgooSmathYacos,T37);
  lit_245 = YPPsym((P)"atan");
  lit_246 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T41 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_245),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan,T41);
  lit_247 = YPPlist(1,YPPsym((P)"x"));
  T43 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_126 = YPmet(FUNCODEREF(fun_atan_126),LITREF(lit_245),T43,ENVNUL,PNUL,sloc(405));
  T46 = BOUNDP(YgooSmathYatan);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooSmathYatan);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_atan_126;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSmathYatan,T44);
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_127 = YPmet(FUNCODEREF(fun_atan_127),LITREF(lit_245),T48,ENVNUL,PNUL,sloc(405));
  T51 = BOUNDP(YgooSmathYatan);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooSmathYatan);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_atan_127;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooSmathYatan,T49);
  lit_249 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_249),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T53 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_67),T54,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan2,T53);
  lit_250 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_250),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_128 = YPmet(FUNCODEREF(fun_atan2_128),LITREF(lit_67),T55,ENVNUL,PNUL,sloc(408));
  T58 = BOUNDP(YgooSmathYatan2);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooSmathYatan2);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_atan2_128;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooSmathYatan2,T56);
  lit_251 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_251),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_129 = YPmet(FUNCODEREF(fun_atan2_129),LITREF(lit_67),T60,ENVNUL,PNUL,sloc(410));
  T63 = BOUNDP(YgooSmathYatan2);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooSmathYatan2);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_atan2_129;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooSmathYatan2,T61);
  lit_252 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T66 = YPsig(LITREF(lit_252),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T65 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_69),T66,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlogn,T65);
  lit_253 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T67 = YPsig(LITREF(lit_253),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_130 = YPmet(FUNCODEREF(fun_logn_130),LITREF(lit_69),T67,ENVNUL,PNUL,sloc(414));
  T70 = BOUNDP(YgooSmathYlogn);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooSmathYlogn);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_logn_130;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooSmathYlogn,T68);
  tmpF1699 = YPfalse;
  if (tmpF1699 != YPfalse) {
    T72 = VARREF(YgooSmathYnum_to_str);
  } else {
    T72 = YPfalse;
  }
  tmpF1700 = YPfalse;
  if (tmpF1700 != YPfalse) {
    T73 = VARREF(YgooSmathYchar_Gascii);
  } else {
    T73 = YPfalse;
  }
  tmpF1701 = YPfalse;
  if (tmpF1701 != YPfalse) {
    T74 = VARREF(YgooSmathYfabs);
  } else {
    T74 = YPfalse;
  }
  T75 = YPfalse;
  return T75;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooStypes;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmag},
  {&module_info_gooStypes},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"map", &module_info_gooSmacros, "map"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"if", &module_info_gooSboot, "if"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"len", &module_info_gooStypes, "len"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"dl", &module_info_gooSboot, "dl"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"case", &module_info_gooSmacros, "case"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%met", &module_info_gooSboot, "%met"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match", &module_info_gooSmacros, "match"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%im", &module_info_gooSboot, "%im"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"t=", &module_info_gooStypes, "t="},
  {"dg", &module_info_gooSboot, "dg"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"max", &module_info_gooSmag, "max"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"loc", &module_info_gooSboot, "loc"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"min", &module_info_gooSmag, "min"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"do", &module_info_gooSmacros, "do"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {">", &module_info_gooSmag, ">"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"<=", &module_info_gooSmag, "<="},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dm", &module_info_gooSboot, "dm"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"while", &module_info_gooSmacros, "while"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"def", &module_info_gooSboot, "def"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"new", &module_info_gooSboot, "new"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"ds", &module_info_gooSboot, "ds"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"as", &module_info_gooStypes, "as"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%get", &module_info_gooSboot, "%get"},
  {"@<", &module_info_gooSboot, "@<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"op", &module_info_gooSmacros, "op"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"atan", CVAR, &YgooSmathYatan},
  {"to-str", CVAR, &YgooSmathYto_str},
  {"~==", CVAR, &YgooSmathYNEE},
  {"1-", CVAR, &YgooSmathY1_},
  {"abs", CVAR, &YgooSmathYabs},
  {"-", CVAR, &YgooSmathY_},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"^", CVAR, &YgooSmathYC},
  {"$e", CVAR, &YgooSmathYDe},
  {"rem", CVAR, &YgooSmathYrem},
  {"to-digit", CVAR, &YgooSmathYto_digit},
  {"~=", CVAR, &YgooSmathYNE},
  {"neg", CVAR, &YgooSmathYneg},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"round/", CVAR, &YgooSmathYroundS},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"sin", CVAR, &YgooSmathYsin},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"eof-object", CVAR, &YgooSmathYeof_object},
  {"moddecf", PVAR, NULL},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"acos", CVAR, &YgooSmathYacos},
  {"to-upper", CVAR, &YgooSmathYto_upper},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"fabs", CVAR, &YgooSmathYfabs},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {">>", CVAR, &YgooSmathYGG},
  {"|", CVAR, &YgooSmathYK},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"1+", CVAR, &YgooSmathY1A},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {"logn", CVAR, &YgooSmathYlogn},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {"+", CVAR, &YgooSmathYA},
  {"=", CVAR, &YgooSmathYE},
  {"lower?", CVAR, &YgooSmathYlowerQ},
  {"to-lower", CVAR, &YgooSmathYto_lower},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"as-log", CVAR, &YgooSmathYas_log},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"mod", CVAR, &YgooSmathYmod},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"<<", CVAR, &YgooSmathYLL},
  {"round-to", CVAR, &YgooSmathYround_to},
  {"---main-2---", PVAR, NULL},
  {"modincf", PVAR, NULL},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {"eof-object?", CVAR, &YgooSmathYeof_objectQ},
  {"log", CVAR, &YgooSmathYlog},
  {"asin", CVAR, &YgooSmathYasin},
  {"upper?", CVAR, &YgooSmathYupperQ},
  {"round", CVAR, &YgooSmathYround},
  {"/", CVAR, &YgooSmathYS},
  {"---main-1---", PVAR, NULL},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"digit?", CVAR, &YgooSmathYdigitQ},
  {"tan", CVAR, &YgooSmathYtan},
  {"~", CVAR, &YgooSmathYN},
  {"<bot>", CVAR, &YgooSmathYLbotG},
  {"div", CVAR, &YgooSmathYdiv},
  {">>>", CVAR, &YgooSmathYGGG},
  {"address-of", CVAR, &YgooSmathYaddress_of},
  {"---main-0---", PVAR, NULL},
  {"ceil", CVAR, &YgooSmathYceil},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"char->ascii", CVAR, &YgooSmathYchar_Gascii},
  {"alpha?", CVAR, &YgooSmathYalphaQ},
  {"tanh", CVAR, &YgooSmathYtanh},
  {"*", CVAR, &YgooSmathYT},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"&", CVAR, &YgooSmathYB},
  {"pow", CVAR, &YgooSmathYpow},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"floor", CVAR, &YgooSmathYfloor},
  {"cos", CVAR, &YgooSmathYcos},
  {"def-unary-trans", PVAR, NULL},
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"atan", "atan"},
  {"to-str", "to-str"},
  {"~==", "~=="},
  {"1-", "1-"},
  {"abs", "abs"},
  {"floor/", "floor/"},
  {"-", "-"},
  {"$pi", "$pi"},
  {"==", "=="},
  {"cosh", "cosh"},
  {"contagious-call", "contagious-call"},
  {"odd?", "odd?"},
  {"^", "^"},
  {"rem", "rem"},
  {"to-digit", "to-digit"},
  {"~=", "~="},
  {"neg", "neg"},
  {"trunc", "trunc"},
  {"max", "max"},
  {"round/", "round/"},
  {"logn", "logn"},
  {"mod+", "mod+"},
  {"sin", "sin"},
  {"isqrt", "isqrt"},
  {"contagious-type", "contagious-type"},
  {"power-of-two-ceil", "power-of-two-ceil"},
  {"eof-object", "eof-object"},
  {"moddecf", "moddecf"},
  {"even?", "even?"},
  {"acos", "acos"},
  {"min", "min"},
  {"to-upper", "to-upper"},
  {"neg?", "neg?"},
  {">", ">"},
  {">>", ">>"},
  {"<", "<"},
  {"|", "|"},
  {"sinh", "sinh"},
  {"1+", "1+"},
  {">=", ">="},
  {"num-to-str", "num-to-str"},
  {"atan2", "atan2"},
  {"+", "+"},
  {"=", "="},
  {"as-log", "as-log"},
  {"<=", "<="},
  {"$e", "$e"},
  {"mod", "mod"},
  {"ceil/", "ceil/"},
  {"<<", "<<"},
  {"to-lower", "to-lower"},
  {"modincf", "modincf"},
  {"zero?", "zero?"},
  {"eof-object?", "eof-object?"},
  {"log", "log"},
  {"bit?", "bit?"},
  {"asin", "asin"},
  {"upper?", "upper?"},
  {"round", "round"},
  {"/", "/"},
  {"pos?", "pos?"},
  {"digit?", "digit?"},
  {"tan", "tan"},
  {"~", "~"},
  {"<bot>", "<bot>"},
  {"div", "div"},
  {">>>", ">>>"},
  {"address-of", "address-of"},
  {"as", "as"},
  {"lower?", "lower?"},
  {"ceil", "ceil"},
  {"sqrt", "sqrt"},
  {"char->ascii", "char->ascii"},
  {"alpha?", "alpha?"},
  {"tanh", "tanh"},
  {"*", "*"},
  {"mod-", "mod-"},
  {"&", "&"},
  {"pow", "pow"},
  {"trunc/", "trunc/"},
  {"floor", "floor"},
  {"cos", "cos"},
  {"fabs", "fabs"},
  {"flo-bits", "flo-bits"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSmath;
MODULE_INFO module_info_gooSmath = {
  "goo/math",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmag (void);
extern void load_module_gooStypes (void);

/* EXPRESSION: */

extern void load_module_gooSmath (void);

void load_module_gooSmath (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmag();
  load_module_gooStypes();

  (P)YgooSmathY___main_0___();
  (P)YgooSmathY___main_1___();
  (P)YgooSmathY___main_2___();

}

/* END OF GENERATED CODE. */
