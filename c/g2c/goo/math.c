/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/math");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/math */

EXT(Ytype_object,"goo/boot","type-object");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSmathYNEE,"goo/math","~==");
DEF(YgooSmathYround_to,"goo/math","round-to");
DEF(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSmathYoddQ,"goo/math","odd?");
EXT(Ylst,"goo/boot","lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooSmathYlog,"goo/math","log");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YgooSmathYdiv,"goo/math","div");
DEF(YgooSmathYC,"goo/math","^");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YgooSmathYround,"goo/math","round");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooSmathYA,"goo/math","+");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yhead,"goo/boot","head");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooSmathYevenQ,"goo/math","even?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSmathYDe,"goo/math","$e");
DEF(YgooSmathYS,"goo/math","/");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooSmathYpow,"goo/math","pow");
DEF(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmathYabs,"goo/math","abs");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSmathYceil,"goo/math","ceil");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
DEF(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmathYK,"goo/math","|");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSmathYupperQ,"goo/math","upper?");
DEF(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooSmathYcos,"goo/math","cos");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YgooSmathYT,"goo/math","*");
DEF(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YgooSmathYcosh,"goo/math","cosh");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSmathYN,"goo/math","~");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(Ynew,"goo/boot","new");
DEF(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSmathY1_,"goo/math","1-");
EXT(Ynil,"goo/boot","nil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSmathYsin,"goo/math","sin");
DEF(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmathY_,"goo/math","-");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSmathYmod,"goo/math","mod");
DEF(YgooSmathYB,"goo/math","&");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSmathYasin,"goo/math","asin");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_44);
DEFLIT(lit_152);
DEFLIT(lit_200);
DEFLIT(lit_70);
DEFLIT(lit_239);
DEFLIT(lit_139);
DEFLIT(lit_232);
DEFLIT(lit_179);
DEFLIT(lit_167);
DEFLIT(lit_168);
DEFLIT(lit_214);
DEFLIT(lit_131);
DEFLIT(lit_130);
DEFLIT(lit_66);
DEFLIT(lit_119);
DEFLIT(lit_227);
DEFLIT(lit_123);
DEFLIT(lit_132);
DEFLIT(lit_51);
DEFLIT(lit_229);
DEFLIT(lit_156);
DEFLIT(lit_191);
DEFLIT(lit_34);
DEFLIT(lit_169);
DEFLIT(lit_184);
DEFLIT(lit_102);
DEFLIT(lit_63);
DEFLIT(lit_99);
DEFLIT(lit_16);
DEFLIT(lit_74);
DEFLIT(lit_138);
DEFLIT(lit_242);
DEFLIT(lit_148);
DEFLIT(lit_56);
DEFLIT(lit_175);
DEFLIT(lit_247);
DEFLIT(lit_75);
DEFLIT(lit_80);
DEFLIT(lit_90);
DEFLIT(lit_164);
DEFLIT(lit_160);
DEFLIT(lit_121);
DEFLIT(lit_3);
DEFLIT(lit_91);
DEFLIT(lit_101);
DEFLIT(lit_10);
DEFLIT(lit_113);
DEFLIT(lit_30);
DEFLIT(lit_202);
DEFLIT(lit_111);
DEFLIT(lit_82);
DEFLIT(lit_11);
DEFLIT(lit_165);
DEFLIT(lit_52);
DEFLIT(lit_147);
DEFLIT(lit_88);
DEFLIT(lit_163);
DEFLIT(lit_223);
DEFLIT(lit_77);
DEFLIT(lit_157);
DEFLIT(lit_189);
DEFLIT(lit_122);
DEFLIT(lit_104);
DEFLIT(lit_142);
DEFLIT(lit_97);
DEFLIT(lit_71);
DEFLIT(lit_252);
DEFLIT(lit_144);
DEFLIT(lit_41);
DEFLIT(lit_143);
DEFLIT(lit_108);
DEFLIT(lit_145);
DEFLIT(lit_153);
DEFLIT(lit_58);
DEFLIT(lit_86);
DEFLIT(lit_251);
DEFLIT(lit_211);
DEFLIT(lit_212);
DEFLIT(lit_60);
DEFLIT(lit_187);
DEFLIT(lit_245);
DEFLIT(lit_109);
DEFLIT(lit_103);
DEFLIT(lit_49);
DEFLIT(lit_209);
DEFLIT(lit_228);
DEFLIT(lit_129);
DEFLIT(lit_32);
DEFLIT(lit_180);
DEFLIT(lit_57);
DEFLIT(lit_20);
DEFLIT(lit_64);
DEFLIT(lit_33);
DEFLIT(lit_24);
DEFLIT(lit_240);
DEFLIT(lit_31);
DEFLIT(lit_231);
DEFLIT(lit_116);
DEFLIT(lit_181);
DEFLIT(lit_42);
DEFLIT(lit_149);
DEFLIT(lit_125);
DEFLIT(lit_53);
DEFLIT(lit_36);
DEFLIT(lit_39);
DEFLIT(lit_159);
DEFLIT(lit_196);
DEFLIT(lit_8);
DEFLIT(lit_155);
DEFLIT(lit_172);
DEFLIT(lit_194);
DEFLIT(lit_161);
DEFLIT(lit_96);
DEFLIT(lit_69);
DEFLIT(lit_92);
DEFLIT(lit_106);
DEFLIT(lit_137);
DEFLIT(lit_47);
DEFLIT(lit_154);
DEFLIT(lit_141);
DEFLIT(lit_83);
DEFLIT(lit_128);
DEFLIT(lit_124);
DEFLIT(lit_217);
DEFLIT(lit_61);
DEFLIT(lit_25);
DEFLIT(lit_246);
DEFLIT(lit_105);
DEFLIT(lit_146);
DEFLIT(lit_93);
DEFLIT(lit_173);
DEFLIT(lit_126);
DEFLIT(lit_230);
DEFLIT(lit_72);
DEFLIT(lit_115);
DEFLIT(lit_176);
DEFLIT(lit_0);
DEFLIT(lit_81);
DEFLIT(lit_100);
DEFLIT(lit_220);
DEFLIT(lit_65);
DEFLIT(lit_226);
DEFLIT(lit_1);
DEFLIT(lit_135);
DEFLIT(lit_12);
DEFLIT(lit_55);
DEFLIT(lit_79);
DEFLIT(lit_19);
DEFLIT(lit_204);
DEFLIT(lit_5);
DEFLIT(lit_193);
DEFLIT(lit_18);
DEFLIT(lit_59);
DEFLIT(lit_166);
DEFLIT(lit_37);
DEFLIT(lit_215);
DEFLIT(lit_171);
DEFLIT(lit_221);
DEFLIT(lit_233);
DEFLIT(lit_210);
DEFLIT(lit_222);
DEFLIT(lit_133);
DEFLIT(lit_198);
DEFLIT(lit_197);
DEFLIT(lit_54);
DEFLIT(lit_208);
DEFLIT(lit_46);
DEFLIT(lit_136);
DEFLIT(lit_238);
DEFLIT(lit_195);
DEFLIT(lit_199);
DEFLIT(lit_250);
DEFLIT(lit_89);
DEFLIT(lit_23);
DEFLIT(lit_186);
DEFLIT(lit_21);
DEFLIT(lit_185);
DEFLIT(lit_6);
DEFLIT(lit_235);
DEFLIT(lit_205);
DEFLIT(lit_85);
DEFLIT(lit_177);
DEFLIT(lit_22);
DEFLIT(lit_253);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_249);
DEFLIT(lit_234);
DEFLIT(lit_118);
DEFLIT(lit_78);
DEFLIT(lit_29);
DEFLIT(lit_27);
DEFLIT(lit_68);
DEFLIT(lit_62);
DEFLIT(lit_188);
DEFLIT(lit_9);
DEFLIT(lit_15);
DEFLIT(lit_48);
DEFLIT(lit_40);
DEFLIT(lit_162);
DEFLIT(lit_206);
DEFLIT(lit_14);
DEFLIT(lit_225);
DEFLIT(lit_140);
DEFLIT(lit_151);
DEFLIT(lit_13);
DEFLIT(lit_224);
DEFLIT(lit_243);
DEFLIT(lit_94);
DEFLIT(lit_134);
DEFLIT(lit_192);
DEFLIT(lit_127);
DEFLIT(lit_112);
DEFLIT(lit_26);
DEFLIT(lit_237);
DEFLIT(lit_4);
DEFLIT(lit_183);
DEFLIT(lit_17);
DEFLIT(lit_248);
DEFLIT(lit_45);
DEFLIT(lit_207);
DEFLIT(lit_84);
DEFLIT(lit_236);
DEFLIT(lit_38);
DEFLIT(lit_28);
DEFLIT(lit_182);
DEFLIT(lit_190);
DEFLIT(lit_213);
DEFLIT(lit_114);
DEFLIT(lit_117);
DEFLIT(lit_107);
DEFLIT(lit_216);
DEFLIT(lit_218);
DEFLIT(lit_87);
DEFLIT(lit_178);
DEFLIT(lit_174);
DEFLIT(lit_50);
DEFLIT(lit_170);
DEFLIT(lit_201);
DEFLIT(lit_244);
DEFLIT(lit_98);
DEFLIT(lit_120);
DEFLIT(lit_110);
DEFLIT(lit_95);
DEFLIT(lit_43);
DEFLIT(lit_76);
DEFLIT(lit_35);
DEFLIT(lit_73);
DEFLIT(lit_241);
DEFLIT(lit_203);
DEFLIT(lit_150);
DEFLIT(lit_67);
DEFLIT(lit_219);
DEFLIT(lit_158);

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
LOCFOR(fun_x_1288_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_x_1292_51);
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
LOCFOR(fun_x_1296_103);
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
  P tF1476;
  P xF1475;
  P xF1474;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF1474 = x_;
  xF1475 = xF1474;
  tF1476 = (P)1;
  T3 = (P)YPiLL(xF1475,(P)2);
  T2 = (P)YPiv(T3,tF1476);
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
  P tmpF1477;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  tmpF1477 = x_;
  if (tmpF1477 != YPfalse) {
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
  P tF1482;
  P xF1481;
  P xF1480;
  P xF1479;
  P xF1478;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(i_, 1);
loop:
  xF1478 = i_;
  xF1479 = xF1478;
  T3 = (P)YPiGG(xF1479,(P)2);
  T2 = T3;
  T1 = T2;
  xF1480 = T1;
  xF1481 = xF1480;
  tF1482 = (P)2;
  T6 = (P)YPiLL(xF1481,(P)2);
  T5 = (P)YPiv(T6,tF1482);
  T4 = T5;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_11) {
  P U_,c_;
  P tF1487;
  P xF1486;
  P xF1485;
  P xF1484;
  P xF1483;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(c_, 1);
loop:
  xF1483 = c_;
  xF1484 = xF1483;
  T3 = (P)YPiGG(xF1484,(P)2);
  T2 = T3;
  T1 = T2;
  xF1485 = T1;
  xF1486 = xF1485;
  tF1487 = (P)1;
  T6 = (P)YPiLL(xF1486,(P)2);
  T5 = (P)YPiv(T6,tF1487);
  T4 = T5;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_12) {
  P x_,y_;
  P xF1491;
  P xF1490;
  P xF1489;
  P xF1488;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1488 = x_;
  xF1489 = xF1488;
  T4 = (P)YPiGG(xF1489,(P)2);
  T3 = T4;
  T2 = T3;
  xF1490 = y_;
  xF1491 = xF1490;
  T7 = (P)YPiGG(xF1491,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPcL(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_13) {
  P x_,y_;
  P xF1495;
  P xF1494;
  P xF1493;
  P xF1492;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1492 = x_;
  xF1493 = xF1492;
  T4 = (P)YPiGG(xF1493,(P)2);
  T3 = T4;
  T2 = T3;
  xF1494 = y_;
  xF1495 = xF1494;
  T7 = (P)YPiGG(xF1495,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPcE(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lowerQ_14) {
  P x_;
  P codeF1496;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF1496 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
  T3 = CALL2(1,VARREF(YgooSmagYGE),codeF1496,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)122));
    T5 = CALL2(1,VARREF(YgooSmagYLE),codeF1496,T6);
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
  P codeF1497;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF1497 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
  T3 = CALL2(1,VARREF(YgooSmagYGE),codeF1497,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)90));
    T5 = CALL2(1,VARREF(YgooSmagYLE),codeF1497,T6);
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
  P tmpF1500;
  P tmpF1499;
  P tmpF1498;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)97),x_);
  tmpF1498 = T2;
  if (tmpF1498 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)122));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF1499 = T1;
  if (tmpF1499 != YPfalse) {
    T5 = tmpF1499;
  } else {
    T7 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)65),x_);
    tmpF1500 = T7;
    if (tmpF1500 != YPfalse) {
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
  P tmpF1501;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)48),x_);
  tmpF1501 = T1;
  if (tmpF1501 != YPfalse) {
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
  P xF1503;
  P xF1502;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF1502 = x_;
  xF1503 = xF1502;
  T4 = (P)YPiGG(xF1503,(P)2);
  T3 = T4;
  T2 = T3;
  T5 = (P)YPeof_object();
  T1 = (P)YPeqQ(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_object_24) {
  P tF1506;
  P xF1505;
  P xF1504;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = (P)YPeof_object();
  xF1504 = T1;
  xF1505 = xF1504;
  tF1506 = (P)2;
  T4 = (P)YPiLL(xF1505,(P)2);
  T3 = (P)YPiv(T4,tF1506);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_25) {
  P f_,x_,y_;
  P typeF1507;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF1507 = T1;
  T3 = CALL2(1,VARREF(YgooStypesYas),typeF1507,x_);
  T4 = CALL2(1,VARREF(YgooStypesYas),typeF1507,y_);
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
  P fF1508;
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
    fF1508 = T4;
    T8 = CALL2(1,VARREF(YgooSmathYT),x_,fF1508);
    T7 = CALL1(1,VARREF(YgooSmathYround),T8);
    T6 = CALL2(1,VARREF(YgooSmathYS),T7,fF1508);
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
  P tmpF1512;
  P remainderF1511;
  P integerF1510;
  P tup19F1509;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup19F1509 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup19F1509,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF1510 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup19F1509,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1511 = T5;
  T9 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF1511);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF1512 = T8;
  if (tmpF1512 != YPfalse) {
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
    T16 = CALL2(1,VARREF(YgooSmathY_),integerF1510,YPint((P)1));
    T17 = CALL2(1,VARREF(YgooSmathYA),remainderF1511,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF1510,remainderF1511);
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
  P tmpF1516;
  P remainderF1515;
  P integerF1514;
  P tup20F1513;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup20F1513 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1513,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF1514 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F1513,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1515 = T5;
  T9 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF1515);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF1516 = T8;
  if (tmpF1516 != YPfalse) {
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
    T16 = CALL2(1,VARREF(YgooSmathYA),integerF1514,YPint((P)1));
    T17 = CALL2(1,VARREF(YgooSmathY_),remainderF1515,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF1514,remainderF1515);
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
  P tmpF1525;
  P tmpF1524;
  P minus_thresholdF1523;
  P tmpF1522;
  P tmpF1521;
  P thresholdF1520;
  P remainderF1519;
  P integerF1518;
  P tup21F1517;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup21F1517 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F1517,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF1518 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F1517,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1519 = T5;
  T8 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T7 = CALL2(1,VARREF(YgooSmathYS),T8,LITREF(lit_88));
  check_type(T7,VARREF(YLnumG));
  thresholdF1520 = T7;
  T11 = CALL2(1,VARREF(YgooSmagYG),remainderF1519,thresholdF1520);
  tmpF1521 = T11;
  if (tmpF1521 != YPfalse) {
    T12 = tmpF1521;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYE),remainderF1519,thresholdF1520);
    tmpF1522 = T14;
    if (tmpF1522 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooSmathYoddQ),integerF1518);
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
      T20 = CALL2(1,VARREF(YgooSmathY_),integerF1518,YPint((P)1));
      T21 = CALL2(1,VARREF(YgooSmathYA),remainderF1519,divisor_);
      T19 = CALL2(1,VARREF(Ytup),T20,T21);
      T17 = T19;
    } else {
      T23 = CALL2(1,VARREF(YgooSmathYA),integerF1518,YPint((P)1));
      T24 = CALL2(1,VARREF(YgooSmathY_),remainderF1519,divisor_);
      T22 = CALL2(1,VARREF(Ytup),T23,T24);
      T17 = T22;
    }
    T9 = T17;
  } else {
    T27 = CALL1(1,VARREF(YgooSmathYneg),thresholdF1520);
    minus_thresholdF1523 = T27;
    T29 = CALL2(1,VARREF(YgooSmagYL),remainderF1519,minus_thresholdF1523);
    tmpF1524 = T29;
    if (tmpF1524 != YPfalse) {
      T30 = tmpF1524;
    } else {
      T32 = CALL2(1,VARREF(YgooSmathYE),remainderF1519,minus_thresholdF1523);
      tmpF1525 = T32;
      if (tmpF1525 != YPfalse) {
        T34 = CALL1(1,VARREF(YgooSmathYoddQ),integerF1518);
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
        T38 = CALL2(1,VARREF(YgooSmathYA),integerF1518,YPint((P)1));
        T39 = CALL2(1,VARREF(YgooSmathY_),remainderF1519,divisor_);
        T37 = CALL2(1,VARREF(Ytup),T38,T39);
        T35 = T37;
      } else {
        T41 = CALL2(1,VARREF(YgooSmathY_),integerF1518,YPint((P)1));
        T42 = CALL2(1,VARREF(YgooSmathYA),remainderF1519,divisor_);
        T40 = CALL2(1,VARREF(Ytup),T41,T42);
        T35 = T40;
      }
      T25 = T35;
    } else {
      T43 = CALL2(1,VARREF(Ytup),integerF1518,remainderF1519);
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
  P xF1527;
  P xF1526;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  xF1526 = YPint((P)0);
  xF1527 = xF1526;
  T4 = (P)YPiGG(xF1527,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_45) {
  P real_,divisor_;
  P remainderF1530;
  P UF1529;
  P tup22F1528;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup22F1528 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F1528,YPint((P)0));
  UF1529 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F1528,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1530 = T5;
  T4 = remainderF1530;
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

FUNCODEDEF(fun_x_1288_48) {
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
  P x_1287F1539;
  P x_1287F1538;
  P x_1287F1537;
  P x_1287F1536;
  P x_1287F1535;
  P maxF1534;
  P placeF1533;
  P x_1287F1532;
  P x_1288F1531;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1288_48,2);
  x_1288F1531 = T1;
  FUNINIT(x_1288F1531, 2,FREEREF(0),return_);
  x_1287F1532 = FREEREF(0);
  placeF1533 = YPfalse;
  placeF1533 = BOXFAB(placeF1533);
  maxF1534 = YPfalse;
  maxF1534 = BOXFAB(maxF1534);
  T7 = CALL2(1,VARREF(YisaQ),x_1287F1532,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1287F1532,LITREF(lit_103),x_1288F1531);
    x_1287F1535 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1287F1535,x_1288F1531);
    BOXVAL(placeF1533) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1287F1535);
    x_1287F1536 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1287F1536,x_1288F1531);
    BOXVAL(maxF1534) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1287F1536);
    x_1287F1537 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1287F1537,x_1288F1531);
    x_1287F1538 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1538,x_1288F1531);
    T19 = CALL1(1,VARREF(Ytail),x_1287F1537);
    x_1287F1539 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1539,x_1288F1531);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1288F1531,LITREF(lit_104),x_1287F1532);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T25 = BOXVAL(placeF1533);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T30 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T32 = BOXVAL(maxF1534);
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

FUNCODEDEF(fun_x_1292_51) {
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
  P x_1291F1548;
  P x_1291F1547;
  P x_1291F1546;
  P x_1291F1545;
  P x_1291F1544;
  P maxF1543;
  P placeF1542;
  P x_1291F1541;
  P x_1292F1540;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1292_51,2);
  x_1292F1540 = T1;
  FUNINIT(x_1292F1540, 2,FREEREF(0),return_);
  x_1291F1541 = FREEREF(0);
  placeF1542 = YPfalse;
  placeF1542 = BOXFAB(placeF1542);
  maxF1543 = YPfalse;
  maxF1543 = BOXFAB(maxF1543);
  T7 = CALL2(1,VARREF(YisaQ),x_1291F1541,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1291F1541,LITREF(lit_112),x_1292F1540);
    x_1291F1544 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F1544,x_1292F1540);
    BOXVAL(placeF1542) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1291F1544);
    x_1291F1545 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F1545,x_1292F1540);
    BOXVAL(maxF1543) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1291F1545);
    x_1291F1546 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1291F1546,x_1292F1540);
    x_1291F1547 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F1547,x_1292F1540);
    T19 = CALL1(1,VARREF(Ytail),x_1291F1546);
    x_1291F1548 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F1548,x_1292F1540);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1292F1540,LITREF(lit_104),x_1291F1541);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T25 = BOXVAL(placeF1542);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T30 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T32 = BOXVAL(maxF1543);
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
  P remainderF1551;
  P UF1550;
  P tup23F1549;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup23F1549 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F1549,YPint((P)0));
  UF1550 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F1549,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF1551 = T5;
  T4 = remainderF1551;
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
  P xF1555;
  P xF1554;
  P xF1553;
  P xF1552;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1552 = x_;
  xF1553 = xF1552;
  T4 = (P)YPiGG(xF1553,(P)2);
  T3 = T4;
  T2 = T3;
  xF1554 = y_;
  xF1555 = xF1554;
  T7 = (P)YPiGG(xF1555,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiE(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_67) {
  P x_,y_;
  P xF1559;
  P xF1558;
  P xF1557;
  P xF1556;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1556 = x_;
  xF1557 = xF1556;
  T4 = (P)YPiGG(xF1557,(P)2);
  T3 = T4;
  T2 = T3;
  xF1558 = y_;
  xF1559 = xF1558;
  T7 = (P)YPiGG(xF1559,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiL(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_68) {
  P x_,y_;
  P tF1566;
  P xF1565;
  P xF1564;
  P xF1563;
  P xF1562;
  P xF1561;
  P xF1560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1560 = x_;
  xF1561 = xF1560;
  T4 = (P)YPiGG(xF1561,(P)2);
  T3 = T4;
  T2 = T3;
  xF1562 = y_;
  xF1563 = xF1562;
  T7 = (P)YPiGG(xF1563,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiA(T2,T5);
  xF1564 = T1;
  xF1565 = xF1564;
  tF1566 = (P)1;
  T10 = (P)YPiLL(xF1565,(P)2);
  T9 = (P)YPiv(T10,tF1566);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___69) {
  P x_,y_;
  P tF1573;
  P xF1572;
  P xF1571;
  P xF1570;
  P xF1569;
  P xF1568;
  P xF1567;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1567 = x_;
  xF1568 = xF1567;
  T4 = (P)YPiGG(xF1568,(P)2);
  T3 = T4;
  T2 = T3;
  xF1569 = y_;
  xF1570 = xF1569;
  T7 = (P)YPiGG(xF1570,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPi_(T2,T5);
  xF1571 = T1;
  xF1572 = xF1571;
  tF1573 = (P)1;
  T10 = (P)YPiLL(xF1572,(P)2);
  T9 = (P)YPiv(T10,tF1573);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_70) {
  P x_,y_;
  P tF1580;
  P xF1579;
  P xF1578;
  P xF1577;
  P xF1576;
  P xF1575;
  P xF1574;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
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
  T1 = (P)YPiT(T2,T5);
  xF1578 = T1;
  xF1579 = xF1578;
  tF1580 = (P)1;
  T10 = (P)YPiLL(xF1579,(P)2);
  T9 = (P)YPiv(T10,tF1580);
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
  P resultF1588;
  P tF1587;
  P xF1586;
  P xF1585;
  P xF1584;
  P xF1583;
  P xF1582;
  P xF1581;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1581 = x_;
  xF1582 = xF1581;
  T5 = (P)YPiGG(xF1582,(P)2);
  T4 = T5;
  T3 = T4;
  xF1583 = y_;
  xF1584 = xF1583;
  T8 = (P)YPiGG(xF1584,(P)2);
  T7 = T8;
  T6 = T7;
  T2 = (P)YPitS(T3,T6);
  xF1585 = T2;
  xF1586 = xF1585;
  tF1587 = (P)1;
  T11 = (P)YPiLL(xF1586,(P)2);
  T10 = (P)YPiv(T11,tF1587);
  T9 = T10;
  T1 = T9;
  resultF1588 = T1;
  T14 = CALL2(1,VARREF(YgooSmathYT),resultF1588,y_);
  T13 = CALL2(1,VARREF(YgooSmathY_),x_,T14);
  T12 = CALL2(1,VARREF(Ytup),resultF1588,T13);
  T0 = T12;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_77) {
  P x_,y_;
  P resF1596;
  P tF1595;
  P xF1594;
  P xF1593;
  P xF1592;
  P xF1591;
  P xF1590;
  P xF1589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1589 = x_;
  xF1590 = xF1589;
  T5 = (P)YPiGG(xF1590,(P)2);
  T4 = T5;
  T3 = T4;
  xF1591 = y_;
  xF1592 = xF1591;
  T8 = (P)YPiGG(xF1592,(P)2);
  T7 = T8;
  T6 = T7;
  T2 = (P)YPim(T3,T6);
  xF1593 = T2;
  xF1594 = xF1593;
  tF1595 = (P)1;
  T11 = (P)YPiLL(xF1594,(P)2);
  T10 = (P)YPiv(T11,tF1595);
  T9 = T10;
  T1 = T9;
  resF1596 = T1;
  T13 = CALL2(1,VARREF(YgooSmagYL),resF1596,YPint((P)0));
  if (T13 != YPfalse) {
    T15 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYA),resF1596,y_);
      T14 = T16;
    } else {
      T17 = CALL2(1,VARREF(YgooSmathY_),resF1596,y_);
      T14 = T17;
    }
    T12 = T14;
  } else {
    T12 = resF1596;
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
  P loopF1597;
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
          loopF1597 = T19;
          FUNINIT(loopF1597, 1,loopF1597);
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
          T20 = CALL3(1,loopF1597,T21,T24,T25);
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
  P tF1604;
  P xF1603;
  P xF1602;
  P xF1601;
  P xF1600;
  P xF1599;
  P xF1598;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1598 = x_;
  xF1599 = xF1598;
  T4 = (P)YPiGG(xF1599,(P)2);
  T3 = T4;
  T2 = T3;
  xF1600 = y_;
  xF1601 = xF1600;
  T7 = (P)YPiGG(xF1601,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiv(T2,T5);
  xF1602 = T1;
  xF1603 = xF1602;
  tF1604 = (P)1;
  T10 = (P)YPiLL(xF1603,(P)2);
  T9 = (P)YPiv(T10,tF1604);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_C_81) {
  P x_,y_;
  P tF1611;
  P xF1610;
  P xF1609;
  P xF1608;
  P xF1607;
  P xF1606;
  P xF1605;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1605 = x_;
  xF1606 = xF1605;
  T4 = (P)YPiGG(xF1606,(P)2);
  T3 = T4;
  T2 = T3;
  xF1607 = y_;
  xF1608 = xF1607;
  T7 = (P)YPiGG(xF1608,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiC(T2,T5);
  xF1609 = T1;
  xF1610 = xF1609;
  tF1611 = (P)1;
  T10 = (P)YPiLL(xF1610,(P)2);
  T9 = (P)YPiv(T10,tF1611);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_B_82) {
  P x_,y_;
  P tF1618;
  P xF1617;
  P xF1616;
  P xF1615;
  P xF1614;
  P xF1613;
  P xF1612;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  xF1612 = x_;
  xF1613 = xF1612;
  T4 = (P)YPiGG(xF1613,(P)2);
  T3 = T4;
  T2 = T3;
  xF1614 = y_;
  xF1615 = xF1614;
  T7 = (P)YPiGG(xF1615,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiB(T2,T5);
  xF1616 = T1;
  xF1617 = xF1616;
  tF1618 = (P)1;
  T10 = (P)YPiLL(xF1617,(P)2);
  T9 = (P)YPiv(T10,tF1618);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_N_83) {
  P x_;
  P tF1623;
  P xF1622;
  P xF1621;
  P xF1620;
  P xF1619;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF1619 = x_;
  xF1620 = xF1619;
  T4 = (P)YPiGG(xF1620,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPiX(T2);
  xF1621 = T1;
  xF1622 = xF1621;
  tF1623 = (P)1;
  T7 = (P)YPiLL(xF1622,(P)2);
  T6 = (P)YPiv(T7,tF1623);
  T5 = T6;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bitQ_84) {
  P o_,x_;
  P tF1630;
  P xF1629;
  P xF1628;
  P xF1627;
  P xF1626;
  P xF1625;
  P xF1624;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
loop:
  xF1624 = o_;
  xF1625 = xF1624;
  T4 = (P)YPiGG(xF1625,(P)2);
  T3 = T4;
  T2 = T3;
  xF1626 = x_;
  xF1627 = xF1626;
  T7 = (P)YPiGG(xF1627,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiQ(T2,T5);
  xF1628 = T1;
  xF1629 = xF1628;
  tF1630 = (P)1;
  T10 = (P)YPiLL(xF1629,(P)2);
  T9 = (P)YPiv(T10,tF1630);
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
  P tF1637;
  P xF1636;
  P xF1635;
  P xF1634;
  P xF1633;
  P xF1632;
  P xF1631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  xF1631 = x_;
  xF1632 = xF1631;
  T4 = (P)YPiGG(xF1632,(P)2);
  T3 = T4;
  T2 = T3;
  xF1633 = a_;
  xF1634 = xF1633;
  T7 = (P)YPiGG(xF1634,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiGG(T2,T5);
  xF1635 = T1;
  xF1636 = xF1635;
  tF1637 = (P)1;
  T10 = (P)YPiLL(xF1636,(P)2);
  T9 = (P)YPiv(T10,tF1637);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GGG_88) {
  P x_,a_;
  P tF1644;
  P xF1643;
  P xF1642;
  P xF1641;
  P xF1640;
  P xF1639;
  P xF1638;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  xF1638 = x_;
  xF1639 = xF1638;
  T4 = (P)YPiGG(xF1639,(P)2);
  T3 = T4;
  T2 = T3;
  xF1640 = a_;
  xF1641 = xF1640;
  T7 = (P)YPiGG(xF1641,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiGGG(T2,T5);
  xF1642 = T1;
  xF1643 = xF1642;
  tF1644 = (P)1;
  T10 = (P)YPiLL(xF1643,(P)2);
  T9 = (P)YPiv(T10,tF1644);
  T8 = T9;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LL_89) {
  P x_,a_;
  P tF1651;
  P xF1650;
  P xF1649;
  P xF1648;
  P xF1647;
  P xF1646;
  P xF1645;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  xF1645 = x_;
  xF1646 = xF1645;
  T4 = (P)YPiGG(xF1646,(P)2);
  T3 = T4;
  T2 = T3;
  xF1647 = a_;
  xF1648 = xF1647;
  T7 = (P)YPiGG(xF1648,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiLL(T2,T5);
  xF1649 = T1;
  xF1650 = xF1649;
  tF1651 = (P)1;
  T10 = (P)YPiLL(xF1650,(P)2);
  T9 = (P)YPiv(T10,tF1651);
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
  P searchF1652;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_search_90,2);
  searchF1652 = T1;
  FUNINIT(searchF1652, 2,x_,searchF1652);
  T2 = CALL1(1,searchF1652,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P tF1655;
  P xF1654;
  P xF1653;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPflo_bits(T2);
  xF1653 = T1;
  xF1654 = xF1653;
  tF1655 = (P)1;
  T5 = (P)YPiLL(xF1654,(P)2);
  T4 = (P)YPiv(T5,tF1655);
  T3 = T4;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_93) {
  P U_,x_;
  P xF1657;
  P xF1656;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
loop:
  xF1656 = x_;
  xF1657 = xF1656;
  T4 = (P)YPiGG(xF1657,(P)2);
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
  P resultF1662;
  P tF1661;
  P xF1660;
  P xF1659;
  P dividedF1658;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF1658 = T1;
  T5 = (P)YPfu(dividedF1658);
  T4 = (P)YPft(T5);
  xF1659 = T4;
  xF1660 = xF1659;
  tF1661 = (P)1;
  T8 = (P)YPiLL(xF1660,(P)2);
  T7 = (P)YPiv(T8,tF1661);
  T6 = T7;
  T3 = T6;
  resultF1662 = T3;
  T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF1662);
  T11 = CALL2(1,VARREF(YgooSmathY_),dividedF1658,T12);
  T10 = CALL2(1,VARREF(YgooSmathYT),y_,T11);
  T9 = CALL2(1,VARREF(Ytup),resultF1662,T10);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_101) {
  P x_,n_;
  P tmpF1664;
  P resF1663;
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
  resF1663 = T1;
  T8 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  tmpF1664 = T8;
  if (tmpF1664 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T9 = T10;
  } else {
    T9 = YPfalse;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSmathYneg),resF1663);
    T6 = T11;
  } else {
    T6 = resF1663;
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

FUNCODEDEF(fun_x_1296_103) {
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
  P PfpF1680;
  P x_1295F1679;
  P x_1295F1678;
  P x_1295F1677;
  P x_1295F1676;
  P x_1295F1675;
  P x_1295F1674;
  P x_1295F1673;
  P x_1295F1672;
  P x_1295F1671;
  P x_1295F1670;
  P prefixF1669;
  P paramF1668;
  P nameF1667;
  P x_1295F1666;
  P x_1296F1665;
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
  T1 = FUNSHELL(0,fun_x_1296_103,2);
  x_1296F1665 = T1;
  FUNINIT(x_1296F1665, 2,FREEREF(0),return_);
  x_1295F1666 = FREEREF(0);
  nameF1667 = YPfalse;
  nameF1667 = BOXFAB(nameF1667);
  paramF1668 = YPfalse;
  paramF1668 = BOXFAB(paramF1668);
  prefixF1669 = YPfalse;
  prefixF1669 = BOXFAB(prefixF1669);
  T9 = CALL2(1,VARREF(YisaQ),x_1295F1666,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1295F1666,LITREF(lit_191),x_1296F1665);
    x_1295F1670 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F1670,x_1296F1665);
    BOXVAL(nameF1667) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1295F1670);
    x_1295F1671 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1295F1671,x_1296F1665);
    x_1295F1672 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F1672,x_1296F1665);
    BOXVAL(paramF1668) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1295F1672);
    x_1295F1673 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1295F1673,x_1296F1665);
    x_1295F1674 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1674,x_1296F1665);
    T23 = CALL1(1,VARREF(Ytail),x_1295F1673);
    x_1295F1675 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1675,x_1296F1665);
    T20 = T24;
    T17 = T20;
    T25 = CALL1(1,VARREF(Ytail),x_1295F1671);
    x_1295F1676 = T25;
    BOXVAL(prefixF1669) = x_1295F1676;
    x_1295F1677 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1295F1677,x_1296F1665);
    x_1295F1678 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1678,x_1296F1665);
    T30 = CALL1(1,VARREF(Ytail),x_1295F1677);
    x_1295F1679 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1679,x_1296F1665);
    T27 = T31;
    T26 = T27;
    T15 = T26;
    T12 = T15;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1296F1665,LITREF(lit_104),x_1295F1666);
  }
  T35 = BOXVAL(nameF1667);
  T34 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_192),T35);
  PfpF1680 = T34;
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T42 = BOXVAL(nameF1667);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T48 = BOXVAL(paramF1668);
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
  T56 = BOXVAL(nameF1667);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T62 = BOXVAL(paramF1668);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T60 = CALL3(1,VARREF(YgooSmacrosYcat),T61,T63,LITREF(lit_107));
  T59 = CALL1(1,VARREF(Ylst),T60);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T64,T65,LITREF(lit_107));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T66 = BOXVAL(prefixF1669);
  T70 = BOXVAL(nameF1667);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T76 = BOXVAL(paramF1668);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T72 = CALL4(1,VARREF(YgooSmacrosYcat),T73,T74,T75,LITREF(lit_107));
  T71 = CALL1(1,VARREF(Ylst),T72);
  T68 = CALL3(1,VARREF(YgooSmacrosYcat),T69,T71,LITREF(lit_107));
  T67 = CALL1(1,VARREF(Ylst),T68);
  T53 = CALLN(1,VARREF(YgooSmacrosYcat),6,T54,T55,T57,T66,T67,LITREF(lit_107));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T79 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T81 = BOXVAL(nameF1667);
  T80 = CALL1(1,VARREF(Ylst),T81);
  T87 = BOXVAL(paramF1668);
  T86 = CALL1(1,VARREF(Ylst),T87);
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T88,LITREF(lit_107));
  T84 = CALL1(1,VARREF(Ylst),T85);
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T83 = CALL4(1,VARREF(YgooSmacrosYcat),T84,T89,T90,LITREF(lit_107));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T91 = BOXVAL(prefixF1669);
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_200));
  T97 = CALL1(1,VARREF(Ylst),PfpF1680);
  T100 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T102 = BOXVAL(paramF1668);
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
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"to-str");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  lit_2 = YPsb((P)"{ obj(");
  lit_3 = YPsb((P)") }");
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_0 = YPmet(FUNCODEREF(fun_to_str_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(8));
  T2 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T3 = fun_to_str_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooSmathYto_str,T1);
  lit_4 = YPPsym((P)"address-of");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YgooSmathYaddress_of = YPmet(FUNCODEREF(YgooSmathYaddress_of),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(11));
  T5 = YgooSmathYaddress_of;
  VARSET(YgooSmathYaddress_of,T5);
  lit_6 = YPPsym((P)"<bot>");
  T7 = (P)YPpair(VARREF(YLanyG),Ynil);
  T6 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_6),T7);
  VARSET(YgooSmathYLbotG,T6);
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  lit_8 = YPsb((P)"#t");
  T9 = XCALL1(1,VARREF(YgooStypesYtE),YPtrue);
  T8 = YPsig(LITREF(lit_7),YPPlist(1,T9),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_2 = YPmet(FUNCODEREF(fun_to_str_2),LITREF(lit_0),T8,ENVNUL,PNUL,sloc(21));
  T11 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T12 = fun_to_str_2;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooSmathYto_str,T10);
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  lit_10 = YPsb((P)"#f");
  T14 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T13 = YPsig(LITREF(lit_9),YPPlist(1,T14),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_3 = YPmet(FUNCODEREF(fun_to_str_3),LITREF(lit_0),T13,ENVNUL,PNUL,sloc(22));
  T16 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T17 = fun_to_str_3;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YgooSmathYto_str,T15);
  lit_11 = YPPsym((P)"as");
  lit_12 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T19 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYas,T18);
  lit_13 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_4 = YPmet(FUNCODEREF(fun_as_4),LITREF(lit_11),T20,ENVNUL,PNUL,sloc(26));
  T22 = VARREF_OR(YgooStypesYas,YPfalse);
  T23 = fun_as_4;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YgooStypesYas,T21);
  lit_14 = YPPsym((P)"as-log");
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSmathYas_log = YPmet(FUNCODEREF(YgooSmathYas_log),LITREF(lit_14),T24,ENVNUL,PNUL,sloc(31));
  T25 = YgooSmathYas_log;
  VARSET(YgooSmathYas_log,T25);
  lit_16 = YPPsym((P)"==");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T26 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_6 = YPmet(FUNCODEREF(fun_EE_6),LITREF(lit_16),T26,ENVNUL,PNUL,sloc(33));
  T28 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T29 = fun_EE_6;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YgooSmacrosYEE,T27);
  lit_18 = YPPsym((P)"=");
  lit_19 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T30 = YPsig(LITREF(lit_19),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_7 = YPmet(FUNCODEREF(fun_E_7),LITREF(lit_18),T30,ENVNUL,PNUL,sloc(35));
  T32 = VARREF_OR(YgooSmathYE,YPfalse);
  T33 = fun_E_7;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooSmathYE,T31);
  lit_20 = YPPsym((P)"~=");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NE_8 = YPmet(FUNCODEREF(fun_NE_8),LITREF(lit_20),T34,ENVNUL,PNUL,sloc(37));
  T36 = VARREF_OR(YgooSmathYNE,YPfalse);
  T37 = fun_NE_8;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YgooSmathYNE,T35);
  lit_22 = YPPsym((P)"~==");
  lit_23 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T38 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NEE_9 = YPmet(FUNCODEREF(fun_NEE_9),LITREF(lit_22),T38,ENVNUL,PNUL,sloc(40));
  T40 = VARREF_OR(YgooSmathYNEE,YPfalse);
  T41 = fun_NEE_9;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YgooSmathYNEE,T39);
  lit_24 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"i"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLchrG));
  T42 = YPsig(LITREF(lit_24),YPPlist(2,T43,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_as_10 = YPmet(FUNCODEREF(fun_as_10),LITREF(lit_11),T42,ENVNUL,PNUL,sloc(45));
  T45 = VARREF_OR(YgooStypesYas,YPfalse);
  T46 = fun_as_10;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YgooStypesYas,T44);
  lit_25 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"c"));
  T48 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T47 = YPsig(LITREF(lit_25),YPPlist(2,T48,VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_as_11 = YPmet(FUNCODEREF(fun_as_11),LITREF(lit_11),T47,ENVNUL,PNUL,sloc(48));
  T50 = VARREF_OR(YgooStypesYas,YPfalse);
  T51 = fun_as_11;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YgooStypesYas,T49);
  lit_26 = YPPsym((P)"<");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T52 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_12 = YPmet(FUNCODEREF(fun_L_12),LITREF(lit_26),T52,ENVNUL,PNUL,sloc(51));
  T54 = VARREF_OR(YgooSmagYL,YPfalse);
  T55 = fun_L_12;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YgooSmagYL,T53);
  lit_28 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T56 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_13 = YPmet(FUNCODEREF(fun_EE_13),LITREF(lit_16),T56,ENVNUL,PNUL,sloc(54));
  T58 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T59 = fun_EE_13;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooSmacrosYEE,T57);
  lit_29 = YPPsym((P)"lower?");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_lowerQ_14 = YPmet(FUNCODEREF(fun_lowerQ_14),LITREF(lit_29),T60,ENVNUL,PNUL,sloc(57));
  T62 = VARREF_OR(YgooSmathYlowerQ,YPfalse);
  T63 = fun_lowerQ_14;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YgooSmathYlowerQ,T61);
  lit_31 = YPPsym((P)"upper?");
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_upperQ_15 = YPmet(FUNCODEREF(fun_upperQ_15),LITREF(lit_31),T64,ENVNUL,PNUL,sloc(63));
  T66 = VARREF_OR(YgooSmathYupperQ,YPfalse);
  T67 = fun_upperQ_15;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooSmathYupperQ,T65);
  lit_33 = YPPsym((P)"to-lower");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_lower_16 = YPmet(FUNCODEREF(fun_to_lower_16),LITREF(lit_33),T68,ENVNUL,PNUL,sloc(69));
  T70 = VARREF_OR(YgooSmathYto_lower,YPfalse);
  T71 = fun_to_lower_16;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YgooSmathYto_lower,T69);
  lit_35 = YPPsym((P)"to-upper");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_upper_17 = YPmet(FUNCODEREF(fun_to_upper_17),LITREF(lit_35),T72,ENVNUL,PNUL,sloc(74));
  T74 = VARREF_OR(YgooSmathYto_upper,YPfalse);
  T75 = fun_to_upper_17;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YgooSmathYto_upper,T73);
  lit_37 = YPPsym((P)"to-digit");
  lit_38 = YPPlist(1,YPPsym((P)"digit"));
  T76 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_to_digit_18 = YPmet(FUNCODEREF(fun_to_digit_18),LITREF(lit_37),T76,ENVNUL,PNUL,sloc(79));
  T78 = VARREF_OR(YgooSmathYto_digit,YPfalse);
  T79 = fun_to_digit_18;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YgooSmathYto_digit,T77);
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_19 = YPmet(FUNCODEREF(fun_to_str_19),LITREF(lit_0),T80,ENVNUL,PNUL,sloc(82));
  T82 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T83 = fun_to_str_19;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YgooSmathYto_str,T81);
  lit_40 = YPPsym((P)"alpha?");
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_alphaQ_20 = YPmet(FUNCODEREF(fun_alphaQ_20),LITREF(lit_40),T84,ENVNUL,PNUL,sloc(85));
  T86 = VARREF_OR(YgooSmathYalphaQ,YPfalse);
  T87 = fun_alphaQ_20;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YgooSmathYalphaQ,T85);
  lit_42 = YPPsym((P)"digit?");
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_digitQ_21 = YPmet(FUNCODEREF(fun_digitQ_21),LITREF(lit_42),T88,ENVNUL,PNUL,sloc(89));
  T90 = VARREF_OR(YgooSmathYdigitQ,YPfalse);
  T91 = fun_digitQ_21;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YgooSmathYdigitQ,T89);
  lit_44 = YPPsym((P)"eof-object?");
  lit_45 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_22 = YPmet(FUNCODEREF(fun_eof_objectQ_22),LITREF(lit_44),T92,ENVNUL,PNUL,sloc(92));
  T94 = VARREF_OR(YgooSmathYeof_objectQ,YPfalse);
  T95 = fun_eof_objectQ_22;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YgooSmathYeof_objectQ,T93);
  lit_46 = YPPlist(1,YPPsym((P)"x"));
  T96 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_23 = YPmet(FUNCODEREF(fun_eof_objectQ_23),LITREF(lit_44),T96,ENVNUL,PNUL,sloc(95));
  T98 = VARREF_OR(YgooSmathYeof_objectQ,YPfalse);
  T99 = fun_eof_objectQ_23;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YgooSmathYeof_objectQ,T97);
  lit_47 = YPPsym((P)"eof-object");
  lit_48 = Ynil;
  T100 = YPsig(LITREF(lit_48),Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  fun_eof_object_24 = YPmet(FUNCODEREF(fun_eof_object_24),LITREF(lit_47),T100,ENVNUL,PNUL,sloc(98));
  T102 = VARREF_OR(YgooSmathYeof_object,YPfalse);
  T103 = fun_eof_object_24;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooSmathYeof_object,T101);
  lit_49 = YPPsym((P)"contagious-type");
  lit_50 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T106 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLnumG));
  T105 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T106,Ynil);
  T104 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_49),T105,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcontagious_type,T104);
  lit_51 = YPPsym((P)"contagious-call");
  lit_52 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T108 = YPsig(LITREF(lit_52),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T107 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_51),T108,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcontagious_call,T107);
  lit_53 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T109 = YPsig(LITREF(lit_53),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_contagious_call_25 = YPmet(FUNCODEREF(fun_contagious_call_25),LITREF(lit_51),T109,ENVNUL,PNUL,sloc(107));
  T111 = VARREF_OR(YgooSmathYcontagious_call,YPfalse);
  T112 = fun_contagious_call_25;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YgooSmathYcontagious_call,T110);
  lit_54 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T113 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_26 = YPmet(FUNCODEREF(fun_L_26),LITREF(lit_26),T113,ENVNUL,PNUL,sloc(111));
  T115 = VARREF_OR(YgooSmagYL,YPfalse);
  T116 = fun_L_26;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YgooSmagYL,T114);
  lit_55 = YPPsym((P)"+");
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T117 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_27 = YPmet(FUNCODEREF(fun_A_27),LITREF(lit_55),T117,ENVNUL,PNUL,sloc(114));
  T119 = VARREF_OR(YgooSmathYA,YPfalse);
  T120 = fun_A_27;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YgooSmathYA,T118);
  lit_57 = YPPsym((P)"1+");
  lit_58 = YPPlist(1,YPPsym((P)"x"));
  T121 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1A_28 = YPmet(FUNCODEREF(fun_1A_28),LITREF(lit_57),T121,ENVNUL,PNUL,sloc(117));
  T123 = VARREF_OR(YgooSmathY1A,YPfalse);
  T124 = fun_1A_28;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YgooSmathY1A,T122);
  lit_59 = YPPsym((P)"-");
  lit_60 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T125 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___29 = YPmet(FUNCODEREF(fun___29),LITREF(lit_59),T125,ENVNUL,PNUL,sloc(120));
  T127 = VARREF_OR(YgooSmathY_,YPfalse);
  T128 = fun___29;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YgooSmathY_,T126);
  lit_61 = YPPsym((P)"1-");
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1__30 = YPmet(FUNCODEREF(fun_1__30),LITREF(lit_61),T129,ENVNUL,PNUL,sloc(123));
  T131 = VARREF_OR(YgooSmathY1_,YPfalse);
  T132 = fun_1__30;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YgooSmathY1_,T130);
  lit_63 = YPPsym((P)"*");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T133 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_31 = YPmet(FUNCODEREF(fun_T_31),LITREF(lit_63),T133,ENVNUL,PNUL,sloc(126));
  T135 = VARREF_OR(YgooSmathYT,YPfalse);
  T136 = fun_T_31;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T136);
  VARSET(YgooSmathYT,T134);
  lit_65 = YPPsym((P)"/");
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T137 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_S_32 = YPmet(FUNCODEREF(fun_S_32),LITREF(lit_65),T137,ENVNUL,PNUL,sloc(129));
  T139 = VARREF_OR(YgooSmathYS,YPfalse);
  T140 = fun_S_32;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T140);
  VARSET(YgooSmathYS,T138);
  lit_67 = YPPsym((P)"atan2");
  lit_68 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T141 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_33 = YPmet(FUNCODEREF(fun_atan2_33),LITREF(lit_67),T141,ENVNUL,PNUL,sloc(132));
  T143 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T144 = fun_atan2_33;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YgooSmathYatan2,T142);
  lit_69 = YPPsym((P)"logn");
  lit_70 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T145 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_34 = YPmet(FUNCODEREF(fun_logn_34),LITREF(lit_69),T145,ENVNUL,PNUL,sloc(135));
  T147 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T148 = fun_logn_34;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T148);
  VARSET(YgooSmathYlogn,T146);
  lit_71 = YPPsym((P)"floor");
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T149 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_35 = YPmet(FUNCODEREF(fun_floor_35),LITREF(lit_71),T149,ENVNUL,PNUL,sloc(138));
  T151 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T152 = fun_floor_35;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T152);
  VARSET(YgooSmathYfloor,T150);
  lit_73 = YPPsym((P)"ceil");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T153 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_36 = YPmet(FUNCODEREF(fun_ceil_36),LITREF(lit_73),T153,ENVNUL,PNUL,sloc(141));
  T155 = VARREF_OR(YgooSmathYceil,YPfalse);
  T156 = fun_ceil_36;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T156);
  VARSET(YgooSmathYceil,T154);
  lit_75 = YPPsym((P)"round");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T157 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_37 = YPmet(FUNCODEREF(fun_round_37),LITREF(lit_75),T157,ENVNUL,PNUL,sloc(144));
  T159 = VARREF_OR(YgooSmathYround,YPfalse);
  T160 = fun_round_37;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(YgooSmathYround,T158);
  lit_77 = YPPsym((P)"round-to");
  lit_78 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_79 = YPflo(FLOINT(10.0));
  T161 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_round_to_38 = YPmet(FUNCODEREF(fun_round_to_38),LITREF(lit_77),T161,ENVNUL,PNUL,sloc(147));
  T163 = VARREF_OR(YgooSmathYround_to,YPfalse);
  T164 = fun_round_to_38;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YgooSmathYround_to,T162);
  lit_80 = YPPsym((P)"trunc");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T165 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_39 = YPmet(FUNCODEREF(fun_trunc_39),LITREF(lit_80),T165,ENVNUL,PNUL,sloc(153));
  T167 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T168 = fun_trunc_39;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YgooSmathYtrunc,T166);
  lit_82 = YPPsym((P)"floor/");
  lit_83 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T170 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T169 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T170,Ynil);
  fun_floorS_40 = YPmet(FUNCODEREF(fun_floorS_40),LITREF(lit_82),T169,ENVNUL,PNUL,sloc(156));
  T172 = VARREF_OR(YgooSmathYfloorS,YPfalse);
  T173 = fun_floorS_40;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YgooSmathYfloorS,T171);
  lit_84 = YPPsym((P)"ceil/");
  lit_85 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T175 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T174 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T175,Ynil);
  fun_ceilS_41 = YPmet(FUNCODEREF(fun_ceilS_41),LITREF(lit_84),T174,ENVNUL,PNUL,sloc(165));
  T177 = VARREF_OR(YgooSmathYceilS,YPfalse);
  T178 = fun_ceilS_41;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YgooSmathYceilS,T176);
  lit_86 = YPPsym((P)"round/");
  lit_87 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  lit_88 = YPflo(FLOINT(2.0));
  T180 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T179 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T180,Ynil);
  fun_roundS_42 = YPmet(FUNCODEREF(fun_roundS_42),LITREF(lit_86),T179,ENVNUL,PNUL,sloc(174));
  T182 = VARREF_OR(YgooSmathYroundS,YPfalse);
  T183 = fun_roundS_42;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T183);
  VARSET(YgooSmathYroundS,T181);
  lit_89 = YPPsym((P)"trunc/");
  lit_90 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T185 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T184 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T185,Ynil);
  fun_truncS_43 = YPmet(FUNCODEREF(fun_truncS_43),LITREF(lit_89),T184,ENVNUL,PNUL,sloc(190));
  T187 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T188 = fun_truncS_43;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  VARSET(YgooSmathYtruncS,T186);
  lit_91 = YPPsym((P)"div");
  lit_92 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T189 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_div_44 = YPmet(FUNCODEREF(fun_div_44),LITREF(lit_91),T189,ENVNUL,PNUL,sloc(193));
  T191 = VARREF_OR(YgooSmathYdiv,YPfalse);
  T192 = fun_div_44;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T192);
  VARSET(YgooSmathYdiv,T190);
  lit_93 = YPPsym((P)"mod");
  lit_94 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T193 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_45 = YPmet(FUNCODEREF(fun_mod_45),LITREF(lit_93),T193,ENVNUL,PNUL,sloc(196));
  T195 = VARREF_OR(YgooSmathYmod,YPfalse);
  T196 = fun_mod_45;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T196);
  VARSET(YgooSmathYmod,T194);
  lit_95 = YPPsym((P)"mod+");
  lit_96 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T197 = YPsig(LITREF(lit_96),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_modA_46 = YPmet(FUNCODEREF(fun_modA_46),LITREF(lit_95),T197,ENVNUL,PNUL,sloc(200));
  T199 = VARREF_OR(YgooSmathYmodA,YPfalse);
  T200 = fun_modA_46;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T200);
  VARSET(YgooSmathYmodA,T198);
  lit_97 = YPPsym((P)"mod-");
  lit_98 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T201 = YPsig(LITREF(lit_98),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_mod__47 = YPmet(FUNCODEREF(fun_mod__47),LITREF(lit_97),T201,ENVNUL,PNUL,sloc(203));
  T203 = VARREF_OR(YgooSmathYmod_,YPfalse);
  T204 = fun_mod__47;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YgooSmathYmod_,T202);
  lit_99 = YPPlist(1,YPPsym((P)"exp"));
  lit_100 = YPPlist(1,YPPsym((P)"return"));
  lit_101 = YPPsym((P)"x-1288");
  lit_102 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_103 = YPPsym((P)"modincf");
  lit_104 = YPsb((P)"Match Pattern Failure");
  lit_105 = YPPsym((P)"opf");
  lit_106 = YPPsym((P)"_");
  lit_107 = Ynil;
  T207 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1288_48 = YPmet(FUNCODEREF(fun_x_1288_48),LITREF(lit_101),T207,ENVNUL,PNUL,YPfalse);
  T206 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T206,ENVNUL,PNUL,YPfalse);
  T205 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T205,ENVNUL,PNUL,YPfalse);
  T208 = fun_50;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T208);
  lit_108 = YPPlist(1,YPPsym((P)"exp"));
  lit_109 = YPPlist(1,YPPsym((P)"return"));
  lit_110 = YPPsym((P)"x-1292");
  lit_111 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_112 = YPPsym((P)"moddecf");
  T211 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1292_51 = YPmet(FUNCODEREF(fun_x_1292_51),LITREF(lit_110),T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T210,ENVNUL,PNUL,YPfalse);
  T209 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T209,ENVNUL,PNUL,YPfalse);
  T212 = fun_53;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"moddecf"),T212);
  lit_113 = YPPsym((P)"rem");
  lit_114 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T213 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_54 = YPmet(FUNCODEREF(fun_rem_54),LITREF(lit_113),T213,ENVNUL,PNUL,sloc(212));
  T215 = VARREF_OR(YgooSmathYrem,YPfalse);
  T216 = fun_rem_54;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T216);
  VARSET(YgooSmathYrem,T214);
  lit_115 = YPPsym((P)"pow");
  lit_116 = YPPlist(2,YPPsym((P)"base"),YPPsym((P)"n"));
  T217 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_55 = YPmet(FUNCODEREF(fun_pow_55),LITREF(lit_115),T217,ENVNUL,PNUL,sloc(216));
  T219 = VARREF_OR(YgooSmathYpow,YPfalse);
  T220 = fun_pow_55;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T220);
  VARSET(YgooSmathYpow,T218);
  lit_117 = YPPsym((P)"pos?");
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  T221 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_56 = YPmet(FUNCODEREF(fun_posQ_56),LITREF(lit_117),T221,ENVNUL,PNUL,sloc(219));
  T223 = VARREF_OR(YgooSmathYposQ,YPfalse);
  T224 = fun_posQ_56;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T224);
  VARSET(YgooSmathYposQ,T222);
  lit_119 = YPPsym((P)"zero?");
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  T225 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_57 = YPmet(FUNCODEREF(fun_zeroQ_57),LITREF(lit_119),T225,ENVNUL,PNUL,sloc(222));
  T227 = VARREF_OR(YgooSmathYzeroQ,YPfalse);
  T228 = fun_zeroQ_57;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T228);
  VARSET(YgooSmathYzeroQ,T226);
  lit_121 = YPPsym((P)"neg?");
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T229 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_58 = YPmet(FUNCODEREF(fun_negQ_58),LITREF(lit_121),T229,ENVNUL,PNUL,sloc(225));
  T231 = VARREF_OR(YgooSmathYnegQ,YPfalse);
  T232 = fun_negQ_58;
  T230 = XCALL2(1,VARREF(YPdefine_method),T231,T232);
  VARSET(YgooSmathYnegQ,T230);
  lit_123 = YPPsym((P)"neg");
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T235 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T234 = fun_neg_59 = YPmet(FUNCODEREF(fun_neg_59),LITREF(lit_123),T235,ENVNUL,PNUL,sloc(228));
  T238 = VARREF_OR(YgooSmathYneg,YPfalse);
  T239 = fun_neg_59;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T239);
  T236 = VARSET(YgooSmathYneg,T237);
  T233 = T236;
  return T233;
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
  P T240,T241,T242,T243;
DEFCREGS();
loop:
  lit_125 = YPPsym((P)"abs");
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_60 = YPmet(FUNCODEREF(fun_abs_60),LITREF(lit_125),T0,ENVNUL,PNUL,sloc(231));
  T2 = VARREF_OR(YgooSmathYabs,YPfalse);
  T3 = fun_abs_60;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooSmathYabs,T1);
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_61 = YPmet(FUNCODEREF(fun_to_str_61),LITREF(lit_0),T4,ENVNUL,PNUL,sloc(234));
  T6 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T7 = fun_to_str_61;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YgooSmathYto_str,T5);
  lit_128 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T9 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T8 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T9,Ynil);
  fun_contagious_type_62 = YPmet(FUNCODEREF(fun_contagious_type_62),LITREF(lit_49),T8,ENVNUL,PNUL,sloc(239));
  T11 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T12 = fun_contagious_type_62;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooSmathYcontagious_type,T10);
  lit_129 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T14 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T13 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T14,Ynil);
  fun_contagious_type_63 = YPmet(FUNCODEREF(fun_contagious_type_63),LITREF(lit_49),T13,ENVNUL,PNUL,sloc(242));
  T16 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T17 = fun_contagious_type_63;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YgooSmathYcontagious_type,T15);
  lit_130 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T19 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T18 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),T19,Ynil);
  fun_contagious_type_64 = YPmet(FUNCODEREF(fun_contagious_type_64),LITREF(lit_49),T18,ENVNUL,PNUL,sloc(245));
  T21 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T22 = fun_contagious_type_64;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T22);
  VARSET(YgooSmathYcontagious_type,T20);
  lit_131 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T24 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T23 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),T24,Ynil);
  fun_contagious_type_65 = YPmet(FUNCODEREF(fun_contagious_type_65),LITREF(lit_49),T23,ENVNUL,PNUL,sloc(248));
  T26 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T27 = fun_contagious_type_65;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YgooSmathYcontagious_type,T25);
  lit_132 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T28 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_66 = YPmet(FUNCODEREF(fun_EE_66),LITREF(lit_16),T28,ENVNUL,PNUL,sloc(251));
  T30 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T31 = fun_EE_66;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YgooSmacrosYEE,T29);
  lit_133 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_67 = YPmet(FUNCODEREF(fun_L_67),LITREF(lit_26),T32,ENVNUL,PNUL,sloc(254));
  T34 = VARREF_OR(YgooSmagYL,YPfalse);
  T35 = fun_L_67;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YgooSmagYL,T33);
  lit_134 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T36 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_A_68 = YPmet(FUNCODEREF(fun_A_68),LITREF(lit_55),T36,ENVNUL,PNUL,sloc(257));
  T38 = VARREF_OR(YgooSmathYA,YPfalse);
  T39 = fun_A_68;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YgooSmathYA,T37);
  lit_135 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T40 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun___69 = YPmet(FUNCODEREF(fun___69),LITREF(lit_59),T40,ENVNUL,PNUL,sloc(260));
  T42 = VARREF_OR(YgooSmathY_,YPfalse);
  T43 = fun___69;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YgooSmathY_,T41);
  lit_136 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T44 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_T_70 = YPmet(FUNCODEREF(fun_T_70),LITREF(lit_63),T44,ENVNUL,PNUL,sloc(263));
  T46 = VARREF_OR(YgooSmathYT,YPfalse);
  T47 = fun_T_70;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YgooSmathYT,T45);
  lit_137 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_138 = YPsb((P)"No int divide, consider trunc/");
  T48 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_S_71 = YPmet(FUNCODEREF(fun_S_71),LITREF(lit_65),T48,ENVNUL,PNUL,sloc(266));
  T50 = VARREF_OR(YgooSmathYS,YPfalse);
  T51 = fun_S_71;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YgooSmathYS,T49);
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  T52 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_72 = YPmet(FUNCODEREF(fun_floor_72),LITREF(lit_71),T52,ENVNUL,PNUL,sloc(269));
  T54 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T55 = fun_floor_72;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YgooSmathYfloor,T53);
  lit_140 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_73 = YPmet(FUNCODEREF(fun_ceil_73),LITREF(lit_73),T56,ENVNUL,PNUL,sloc(271));
  T58 = VARREF_OR(YgooSmathYceil,YPfalse);
  T59 = fun_ceil_73;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooSmathYceil,T57);
  lit_141 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_74 = YPmet(FUNCODEREF(fun_round_74),LITREF(lit_75),T60,ENVNUL,PNUL,sloc(273));
  T62 = VARREF_OR(YgooSmathYround,YPfalse);
  T63 = fun_round_74;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YgooSmathYround,T61);
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_75 = YPmet(FUNCODEREF(fun_trunc_75),LITREF(lit_80),T64,ENVNUL,PNUL,sloc(275));
  T66 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T67 = fun_trunc_75;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooSmathYtrunc,T65);
  lit_143 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T69 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfixnumG));
  T68 = YPsig(LITREF(lit_143),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),T69,Ynil);
  fun_truncS_76 = YPmet(FUNCODEREF(fun_truncS_76),LITREF(lit_89),T68,ENVNUL,PNUL,sloc(277));
  T71 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T72 = fun_truncS_76;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YgooSmathYtruncS,T70);
  lit_144 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T73 = YPsig(LITREF(lit_144),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_mod_77 = YPmet(FUNCODEREF(fun_mod_77),LITREF(lit_93),T73,ENVNUL,PNUL,sloc(281));
  T75 = VARREF_OR(YgooSmathYmod,YPfalse);
  T76 = fun_mod_77;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YgooSmathYmod,T74);
  lit_145 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_146 = YPPsym((P)"loop");
  lit_147 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"p"),YPPsym((P)"y"));
  T78 = YPsig(LITREF(lit_147),YPPlist(3,VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_78 = YPmet(FUNCODEREF(fun_loop_78),LITREF(lit_146),T78,ENVNUL,PNUL,sloc(295));
  T77 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_79 = YPmet(FUNCODEREF(fun_pow_79),LITREF(lit_115),T77,ENVNUL,PNUL,sloc(289));
  T80 = VARREF_OR(YgooSmathYpow,YPfalse);
  T81 = fun_pow_79;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YgooSmathYpow,T79);
  lit_148 = YPPsym((P)"|");
  lit_149 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T82 = YPsig(LITREF(lit_149),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_80 = YPmet(FUNCODEREF(fun_K_80),LITREF(lit_148),T82,ENVNUL,PNUL,sloc(304));
  T84 = VARREF_OR(YgooSmathYK,YPfalse);
  T85 = fun_K_80;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YgooSmathYK,T83);
  lit_150 = YPPsym((P)"^");
  lit_151 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T86 = YPsig(LITREF(lit_151),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_81 = YPmet(FUNCODEREF(fun_C_81),LITREF(lit_150),T86,ENVNUL,PNUL,sloc(307));
  T88 = VARREF_OR(YgooSmathYC,YPfalse);
  T89 = fun_C_81;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YgooSmathYC,T87);
  lit_152 = YPPsym((P)"&");
  lit_153 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T90 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_82 = YPmet(FUNCODEREF(fun_B_82),LITREF(lit_152),T90,ENVNUL,PNUL,sloc(310));
  T92 = VARREF_OR(YgooSmathYB,YPfalse);
  T93 = fun_B_82;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YgooSmathYB,T91);
  lit_154 = YPPsym((P)"~");
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_N_83 = YPmet(FUNCODEREF(fun_N_83),LITREF(lit_154),T94,ENVNUL,PNUL,sloc(313));
  T96 = VARREF_OR(YgooSmathYN,YPfalse);
  T97 = fun_N_83;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YgooSmathYN,T95);
  lit_156 = YPPsym((P)"bit?");
  lit_157 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"x"));
  T98 = YPsig(LITREF(lit_157),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_bitQ_84 = YPmet(FUNCODEREF(fun_bitQ_84),LITREF(lit_156),T98,ENVNUL,PNUL,sloc(316));
  T100 = VARREF_OR(YgooSmathYbitQ,YPfalse);
  T101 = fun_bitQ_84;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YgooSmathYbitQ,T99);
  lit_158 = YPPsym((P)"even?");
  lit_159 = YPPlist(1,YPPsym((P)"x"));
  T102 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_85 = YPmet(FUNCODEREF(fun_evenQ_85),LITREF(lit_158),T102,ENVNUL,PNUL,sloc(319));
  T104 = VARREF_OR(YgooSmathYevenQ,YPfalse);
  T105 = fun_evenQ_85;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YgooSmathYevenQ,T103);
  lit_160 = YPPsym((P)"odd?");
  lit_161 = YPPlist(1,YPPsym((P)"x"));
  T106 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_86 = YPmet(FUNCODEREF(fun_oddQ_86),LITREF(lit_160),T106,ENVNUL,PNUL,sloc(322));
  T108 = VARREF_OR(YgooSmathYoddQ,YPfalse);
  T109 = fun_oddQ_86;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YgooSmathYoddQ,T107);
  lit_162 = YPPsym((P)">>");
  lit_163 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T110 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GG_87 = YPmet(FUNCODEREF(fun_GG_87),LITREF(lit_162),T110,ENVNUL,PNUL,sloc(325));
  T112 = VARREF_OR(YgooSmathYGG,YPfalse);
  T113 = fun_GG_87;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YgooSmathYGG,T111);
  lit_164 = YPPsym((P)">>>");
  lit_165 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T114 = YPsig(LITREF(lit_165),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GGG_88 = YPmet(FUNCODEREF(fun_GGG_88),LITREF(lit_164),T114,ENVNUL,PNUL,sloc(328));
  T116 = VARREF_OR(YgooSmathYGGG,YPfalse);
  T117 = fun_GGG_88;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YgooSmathYGGG,T115);
  lit_166 = YPPsym((P)"<<");
  lit_167 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T118 = YPsig(LITREF(lit_167),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_LL_89 = YPmet(FUNCODEREF(fun_LL_89),LITREF(lit_166),T118,ENVNUL,PNUL,sloc(331));
  T120 = VARREF_OR(YgooSmathYLL,YPfalse);
  T121 = fun_LL_89;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YgooSmathYLL,T119);
  lit_168 = YPPsym((P)"power-of-two-ceil");
  lit_169 = YPPlist(1,YPPsym((P)"x"));
  lit_170 = YPPsym((P)"search");
  lit_171 = YPPlist(1,YPPsym((P)"po2"));
  T123 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_90 = YPmet(FUNCODEREF(fun_search_90),LITREF(lit_170),T123,ENVNUL,PNUL,sloc(335));
  T122 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_91 = YPmet(FUNCODEREF(fun_power_of_two_ceil_91),LITREF(lit_168),T122,ENVNUL,PNUL,sloc(334));
  T125 = VARREF_OR(YgooSmathYpower_of_two_ceil,YPfalse);
  T126 = fun_power_of_two_ceil_91;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YgooSmathYpower_of_two_ceil,T124);
  lit_172 = YPPsym((P)"flo-bits");
  lit_173 = YPPlist(1,YPPsym((P)"x"));
  T127 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPmet(FUNCODEREF(YgooSmathYflo_bits),LITREF(lit_172),T127,ENVNUL,PNUL,sloc(342));
  T128 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T128);
  lit_174 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"x"));
  T130 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T129 = YPsig(LITREF(lit_174),YPPlist(2,T130,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_93 = YPmet(FUNCODEREF(fun_as_93),LITREF(lit_11),T129,ENVNUL,PNUL,sloc(345));
  T132 = VARREF_OR(YgooStypesYas,YPfalse);
  T133 = fun_as_93;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YgooStypesYas,T131);
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T134 = YPsig(LITREF(lit_175),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_94 = YPmet(FUNCODEREF(fun_EE_94),LITREF(lit_16),T134,ENVNUL,PNUL,sloc(348));
  T136 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T137 = fun_EE_94;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YgooSmacrosYEE,T135);
  lit_176 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T138 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_95 = YPmet(FUNCODEREF(fun_L_95),LITREF(lit_26),T138,ENVNUL,PNUL,sloc(351));
  T140 = VARREF_OR(YgooSmagYL,YPfalse);
  T141 = fun_L_95;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YgooSmagYL,T139);
  lit_177 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T142 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_96 = YPmet(FUNCODEREF(fun_A_96),LITREF(lit_55),T142,ENVNUL,PNUL,sloc(354));
  T144 = VARREF_OR(YgooSmathYA,YPfalse);
  T145 = fun_A_96;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YgooSmathYA,T143);
  lit_178 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T146 = YPsig(LITREF(lit_178),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___97 = YPmet(FUNCODEREF(fun___97),LITREF(lit_59),T146,ENVNUL,PNUL,sloc(357));
  T148 = VARREF_OR(YgooSmathY_,YPfalse);
  T149 = fun___97;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YgooSmathY_,T147);
  lit_179 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T150 = YPsig(LITREF(lit_179),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_98 = YPmet(FUNCODEREF(fun_T_98),LITREF(lit_63),T150,ENVNUL,PNUL,sloc(360));
  T152 = VARREF_OR(YgooSmathYT,YPfalse);
  T153 = fun_T_98;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YgooSmathYT,T151);
  lit_180 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T154 = YPsig(LITREF(lit_180),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_99 = YPmet(FUNCODEREF(fun_S_99),LITREF(lit_65),T154,ENVNUL,PNUL,sloc(363));
  T156 = VARREF_OR(YgooSmathYS,YPfalse);
  T157 = fun_S_99;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YgooSmathYS,T155);
  lit_181 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T159 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfloG));
  T158 = YPsig(LITREF(lit_181),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T159,Ynil);
  fun_truncS_100 = YPmet(FUNCODEREF(fun_truncS_100),LITREF(lit_89),T158,ENVNUL,PNUL,sloc(366));
  T161 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T162 = fun_truncS_100;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  VARSET(YgooSmathYtruncS,T160);
  lit_182 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T163 = YPsig(LITREF(lit_182),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_101 = YPmet(FUNCODEREF(fun_pow_101),LITREF(lit_115),T163,ENVNUL,PNUL,sloc(371));
  T165 = VARREF_OR(YgooSmathYpow,YPfalse);
  T166 = fun_pow_101;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T166);
  VARSET(YgooSmathYpow,T164);
  lit_183 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_183));
  lit_184 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_184));
  lit_185 = YPPsym((P)"isqrt");
  lit_186 = YPPlist(1,YPPsym((P)"x"));
  T167 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_102 = YPmet(FUNCODEREF(fun_isqrt_102),LITREF(lit_185),T167,ENVNUL,PNUL,sloc(378));
  T169 = VARREF_OR(YgooSmathYisqrt,YPfalse);
  T170 = fun_isqrt_102;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YgooSmathYisqrt,T168);
  lit_187 = YPPlist(1,YPPsym((P)"exp"));
  lit_188 = YPPlist(1,YPPsym((P)"return"));
  lit_189 = YPPsym((P)"x-1296");
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
  T173 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1296_103 = YPmet(FUNCODEREF(fun_x_1296_103),LITREF(lit_189),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T174 = fun_105;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T174);
  lit_202 = YPPsym((P)"sqrt");
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  T176 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T175 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_202),T176,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsqrt,T175);
  lit_204 = YPPlist(1,YPPsym((P)"x"));
  lit_205 = YPsb((P)"SQRT would produce complex number");
  T177 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_106 = YPmet(FUNCODEREF(fun_sqrt_106),LITREF(lit_202),T177,ENVNUL,PNUL,sloc(391));
  T179 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T180 = fun_sqrt_106;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YgooSmathYsqrt,T178);
  lit_206 = YPPlist(1,YPPsym((P)"x"));
  T181 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_107 = YPmet(FUNCODEREF(fun_sqrt_107),LITREF(lit_202),T181,ENVNUL,PNUL,sloc(391));
  T183 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T184 = fun_sqrt_107;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T184);
  VARSET(YgooSmathYsqrt,T182);
  lit_207 = YPPsym((P)"log");
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  T186 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T185 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_207),T186,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlog,T185);
  lit_209 = YPPlist(1,YPPsym((P)"x"));
  T187 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_108 = YPmet(FUNCODEREF(fun_log_108),LITREF(lit_207),T187,ENVNUL,PNUL,sloc(394));
  T189 = VARREF_OR(YgooSmathYlog,YPfalse);
  T190 = fun_log_108;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  VARSET(YgooSmathYlog,T188);
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  T191 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_109 = YPmet(FUNCODEREF(fun_log_109),LITREF(lit_207),T191,ENVNUL,PNUL,sloc(394));
  T193 = VARREF_OR(YgooSmathYlog,YPfalse);
  T194 = fun_log_109;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T194);
  VARSET(YgooSmathYlog,T192);
  lit_211 = YPPsym((P)"sin");
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  T196 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T195 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_211),T196,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsin,T195);
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T197 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_110 = YPmet(FUNCODEREF(fun_sin_110),LITREF(lit_211),T197,ENVNUL,PNUL,sloc(395));
  T199 = VARREF_OR(YgooSmathYsin,YPfalse);
  T200 = fun_sin_110;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T200);
  VARSET(YgooSmathYsin,T198);
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T201 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_111 = YPmet(FUNCODEREF(fun_sin_111),LITREF(lit_211),T201,ENVNUL,PNUL,sloc(395));
  T203 = VARREF_OR(YgooSmathYsin,YPfalse);
  T204 = fun_sin_111;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YgooSmathYsin,T202);
  lit_215 = YPPsym((P)"cos");
  lit_216 = YPPlist(1,YPPsym((P)"x"));
  T206 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T205 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_215),T206,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcos,T205);
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  T207 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_112 = YPmet(FUNCODEREF(fun_cos_112),LITREF(lit_215),T207,ENVNUL,PNUL,sloc(396));
  T209 = VARREF_OR(YgooSmathYcos,YPfalse);
  T210 = fun_cos_112;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T210);
  VARSET(YgooSmathYcos,T208);
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T211 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_113 = YPmet(FUNCODEREF(fun_cos_113),LITREF(lit_215),T211,ENVNUL,PNUL,sloc(396));
  T213 = VARREF_OR(YgooSmathYcos,YPfalse);
  T214 = fun_cos_113;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T214);
  VARSET(YgooSmathYcos,T212);
  lit_219 = YPPsym((P)"tan");
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  T216 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T215 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_219),T216,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtan,T215);
  lit_221 = YPPlist(1,YPPsym((P)"x"));
  T217 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_114 = YPmet(FUNCODEREF(fun_tan_114),LITREF(lit_219),T217,ENVNUL,PNUL,sloc(397));
  T219 = VARREF_OR(YgooSmathYtan,YPfalse);
  T220 = fun_tan_114;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T220);
  VARSET(YgooSmathYtan,T218);
  lit_222 = YPPlist(1,YPPsym((P)"x"));
  T221 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_115 = YPmet(FUNCODEREF(fun_tan_115),LITREF(lit_219),T221,ENVNUL,PNUL,sloc(397));
  T223 = VARREF_OR(YgooSmathYtan,YPfalse);
  T224 = fun_tan_115;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T224);
  VARSET(YgooSmathYtan,T222);
  lit_223 = YPPsym((P)"sinh");
  lit_224 = YPPlist(1,YPPsym((P)"x"));
  T226 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T225 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_223),T226,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsinh,T225);
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  T227 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_116 = YPmet(FUNCODEREF(fun_sinh_116),LITREF(lit_223),T227,ENVNUL,PNUL,sloc(398));
  T229 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T230 = fun_sinh_116;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T230);
  VARSET(YgooSmathYsinh,T228);
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T231 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_117 = YPmet(FUNCODEREF(fun_sinh_117),LITREF(lit_223),T231,ENVNUL,PNUL,sloc(398));
  T233 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T234 = fun_sinh_117;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T234);
  VARSET(YgooSmathYsinh,T232);
  lit_227 = YPPsym((P)"cosh");
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T236 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T235 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_227),T236,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcosh,T235);
  lit_229 = YPPlist(1,YPPsym((P)"x"));
  T239 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  T238 = fun_cosh_118 = YPmet(FUNCODEREF(fun_cosh_118),LITREF(lit_227),T239,ENVNUL,PNUL,sloc(399));
  T242 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T243 = fun_cosh_118;
  T241 = XCALL2(1,VARREF(YPdefine_method),T242,T243);
  T240 = VARSET(YgooSmathYcosh,T241);
  T237 = T240;
  return T237;
}

P YgooSmathY___main_2___() {
  P tmpF1683;
  P tmpF1682;
  P tmpF1681;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
DEFCREGS();
loop:
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_119 = YPmet(FUNCODEREF(fun_cosh_119),LITREF(lit_227),T0,ENVNUL,PNUL,sloc(399));
  T2 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T3 = fun_cosh_119;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooSmathYcosh,T1);
  lit_231 = YPPsym((P)"tanh");
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_231),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtanh,T4);
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_120 = YPmet(FUNCODEREF(fun_tanh_120),LITREF(lit_231),T6,ENVNUL,PNUL,sloc(400));
  T8 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T9 = fun_tanh_120;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YgooSmathYtanh,T7);
  lit_234 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_121 = YPmet(FUNCODEREF(fun_tanh_121),LITREF(lit_231),T10,ENVNUL,PNUL,sloc(400));
  T12 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T13 = fun_tanh_121;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YgooSmathYtanh,T11);
  lit_235 = YPPsym((P)"asin");
  lit_236 = YPPlist(1,YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_235),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYasin,T14);
  lit_237 = YPPlist(1,YPPsym((P)"x"));
  lit_238 = YPsb((P)"SQRT would produce complex number");
  T16 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_122 = YPmet(FUNCODEREF(fun_asin_122),LITREF(lit_235),T16,ENVNUL,PNUL,sloc(401));
  T18 = VARREF_OR(YgooSmathYasin,YPfalse);
  T19 = fun_asin_122;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSmathYasin,T17);
  lit_239 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_123 = YPmet(FUNCODEREF(fun_asin_123),LITREF(lit_235),T20,ENVNUL,PNUL,sloc(401));
  T22 = VARREF_OR(YgooSmathYasin,YPfalse);
  T23 = fun_asin_123;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YgooSmathYasin,T21);
  lit_240 = YPPsym((P)"acos");
  lit_241 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_241),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_240),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYacos,T24);
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  lit_243 = YPsb((P)"SQRT would produce complex number");
  T26 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_124 = YPmet(FUNCODEREF(fun_acos_124),LITREF(lit_240),T26,ENVNUL,PNUL,sloc(403));
  T28 = VARREF_OR(YgooSmathYacos,YPfalse);
  T29 = fun_acos_124;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YgooSmathYacos,T27);
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_125 = YPmet(FUNCODEREF(fun_acos_125),LITREF(lit_240),T30,ENVNUL,PNUL,sloc(403));
  T32 = VARREF_OR(YgooSmathYacos,YPfalse);
  T33 = fun_acos_125;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooSmathYacos,T31);
  lit_245 = YPPsym((P)"atan");
  lit_246 = YPPlist(1,YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_245),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan,T34);
  lit_247 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_126 = YPmet(FUNCODEREF(fun_atan_126),LITREF(lit_245),T36,ENVNUL,PNUL,sloc(405));
  T38 = VARREF_OR(YgooSmathYatan,YPfalse);
  T39 = fun_atan_126;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YgooSmathYatan,T37);
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_127 = YPmet(FUNCODEREF(fun_atan_127),LITREF(lit_245),T40,ENVNUL,PNUL,sloc(405));
  T42 = VARREF_OR(YgooSmathYatan,YPfalse);
  T43 = fun_atan_127;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YgooSmathYatan,T41);
  lit_249 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T45 = YPsig(LITREF(lit_249),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_67),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan2,T44);
  lit_250 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T46 = YPsig(LITREF(lit_250),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_128 = YPmet(FUNCODEREF(fun_atan2_128),LITREF(lit_67),T46,ENVNUL,PNUL,sloc(408));
  T48 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T49 = fun_atan2_128;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooSmathYatan2,T47);
  lit_251 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_251),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_129 = YPmet(FUNCODEREF(fun_atan2_129),LITREF(lit_67),T50,ENVNUL,PNUL,sloc(410));
  T52 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T53 = fun_atan2_129;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooSmathYatan2,T51);
  lit_252 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T55 = YPsig(LITREF(lit_252),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T54 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_69),T55,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlogn,T54);
  lit_253 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T56 = YPsig(LITREF(lit_253),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_130 = YPmet(FUNCODEREF(fun_logn_130),LITREF(lit_69),T56,ENVNUL,PNUL,sloc(414));
  T58 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T59 = fun_logn_130;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooSmathYlogn,T57);
  tmpF1681 = YPfalse;
  if (tmpF1681 != YPfalse) {
    T60 = VARREF(YgooSmathYnum_to_str);
  } else {
    T60 = YPfalse;
  }
  tmpF1682 = YPfalse;
  if (tmpF1682 != YPfalse) {
    T61 = VARREF(YgooSmathYchar_Gascii);
  } else {
    T61 = YPfalse;
  }
  tmpF1683 = YPfalse;
  if (tmpF1683 != YPfalse) {
    T62 = VARREF(YgooSmathYfabs);
  } else {
    T62 = YPfalse;
  }
  T63 = YPfalse;
  return T63;
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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
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
  {"assert", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
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
  {"2nd", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
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
  {"gensym", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
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
  {"dlet", &module_info_gooSmacros, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
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
  {"t+", &module_info_gooStypes, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
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
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
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
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
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
  {"<=", &module_info_gooSmag, NULL},
  {"while", &module_info_gooSmacros, NULL},
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
  {"when", &module_info_gooSmacros, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
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
  {"pair", &module_info_gooSmacros, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"~==", CVAR, &YgooSmathYNEE},
  {"---main-1---", PVAR, NULL},
  {"round-to", CVAR, &YgooSmathYround_to},
  {"to-digit", CVAR, &YgooSmathYto_digit},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"eof-object", CVAR, &YgooSmathYeof_object},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"1+", CVAR, &YgooSmathY1A},
  {"log", CVAR, &YgooSmathYlog},
  {"div", CVAR, &YgooSmathYdiv},
  {"^", CVAR, &YgooSmathYC},
  {"~=", CVAR, &YgooSmathYNE},
  {"tan", CVAR, &YgooSmathYtan},
  {"round", CVAR, &YgooSmathYround},
  {"to-upper", CVAR, &YgooSmathYto_upper},
  {"+", CVAR, &YgooSmathYA},
  {"to-str", CVAR, &YgooSmathYto_str},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"fabs", CVAR, &YgooSmathYfabs},
  {"char->ascii", CVAR, &YgooSmathYchar_Gascii},
  {"$e", CVAR, &YgooSmathYDe},
  {"/", CVAR, &YgooSmathYS},
  {"tanh", CVAR, &YgooSmathYtanh},
  {"eof-object?", CVAR, &YgooSmathYeof_objectQ},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"pow", CVAR, &YgooSmathYpow},
  {"<<", CVAR, &YgooSmathYLL},
  {"atan", CVAR, &YgooSmathYatan},
  {"abs", CVAR, &YgooSmathYabs},
  {"ceil", CVAR, &YgooSmathYceil},
  {"to-lower", CVAR, &YgooSmathYto_lower},
  {"digit?", CVAR, &YgooSmathYdigitQ},
  {"|", CVAR, &YgooSmathYK},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {"upper?", CVAR, &YgooSmathYupperQ},
  {"floor", CVAR, &YgooSmathYfloor},
  {"as-log", CVAR, &YgooSmathYas_log},
  {"cos", CVAR, &YgooSmathYcos},
  {"---main-2---", PVAR, NULL},
  {"neg", CVAR, &YgooSmathYneg},
  {"*", CVAR, &YgooSmathYT},
  {"rem", CVAR, &YgooSmathYrem},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {">>>", CVAR, &YgooSmathYGGG},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"def-unary-trans", PVAR, NULL},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"~", CVAR, &YgooSmathYN},
  {"---main-0---", PVAR, NULL},
  {"alpha?", CVAR, &YgooSmathYalphaQ},
  {"acos", CVAR, &YgooSmathYacos},
  {"moddecf", PVAR, NULL},
  {"lower?", CVAR, &YgooSmathYlowerQ},
  {"round/", CVAR, &YgooSmathYroundS},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"1-", CVAR, &YgooSmathY1_},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"logn", CVAR, &YgooSmathYlogn},
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {"sin", CVAR, &YgooSmathYsin},
  {"<bot>", CVAR, &YgooSmathYLbotG},
  {"=", CVAR, &YgooSmathYE},
  {"-", CVAR, &YgooSmathY_},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {">>", CVAR, &YgooSmathYGG},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"modincf", PVAR, NULL},
  {"mod", CVAR, &YgooSmathYmod},
  {"&", CVAR, &YgooSmathYB},
  {"address-of", CVAR, &YgooSmathYaddress_of},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"asin", CVAR, &YgooSmathYasin},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"~==", NULL},
  {"to-digit", NULL},
  {"atan2", NULL},
  {"pos?", NULL},
  {"odd?", NULL},
  {"eof-object", NULL},
  {"power-of-two-ceil", NULL},
  {"1+", NULL},
  {"log", NULL},
  {"div", NULL},
  {"^", NULL},
  {"~=", NULL},
  {"tan", NULL},
  {"round", NULL},
  {"to-upper", NULL},
  {"+", NULL},
  {"to-str", NULL},
  {"even?", NULL},
  {"fabs", NULL},
  {"char->ascii", NULL},
  {"$e", NULL},
  {"/", NULL},
  {"tanh", NULL},
  {"eof-object?", NULL},
  {"mod-", NULL},
  {"pow", NULL},
  {"<<", NULL},
  {"atan", NULL},
  {"abs", NULL},
  {"ceil", NULL},
  {"to-lower", NULL},
  {"|", NULL},
  {"trunc/", NULL},
  {"$pi", NULL},
  {"sqrt", NULL},
  {"-", NULL},
  {"bit?", NULL},
  {"digit?", NULL},
  {"upper?", NULL},
  {"floor", NULL},
  {"as-log", NULL},
  {"cos", NULL},
  {"neg", NULL},
  {"*", NULL},
  {"rem", NULL},
  {"floor/", NULL},
  {"max", NULL},
  {">>>", NULL},
  {"cosh", NULL},
  {"mod+", NULL},
  {"~", NULL},
  {"alpha?", NULL},
  {"acos", NULL},
  {"min", NULL},
  {"moddecf", NULL},
  {"lower?", NULL},
  {"round/", NULL},
  {"as", NULL},
  {"neg?", NULL},
  {"1-", NULL},
  {"trunc", NULL},
  {">=", NULL},
  {">", NULL},
  {"logn", NULL},
  {"==", NULL},
  {"<", NULL},
  {"flo-bits", NULL},
  {"sin", NULL},
  {"<bot>", NULL},
  {"=", NULL},
  {"num-to-str", NULL},
  {"<=", NULL},
  {"zero?", NULL},
  {">>", NULL},
  {"sinh", NULL},
  {"contagious-call", NULL},
  {"modincf", NULL},
  {"mod", NULL},
  {"&", NULL},
  {"address-of", NULL},
  {"isqrt", NULL},
  {"ceil/", NULL},
  {"asin", NULL},
  {"contagious-type", NULL},
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
