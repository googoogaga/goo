/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/math");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/math */

EXT(Yclone,"goo/boot","clone");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSmathYsin,"goo/math","sin");
DEF(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YgooSmathYatan2,"goo/math","atan2");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooSmathYasin,"goo/math","asin");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSmathYround,"goo/math","round");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YLcolG,"goo/boot","<col>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooSmathYC,"goo/math","^");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooSmathYpow,"goo/math","pow");
DEF(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooSmathYlog,"goo/math","log");
DEF(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSmathYabs,"goo/math","abs");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynil,"goo/boot","nil");
DEF(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSmathYceil,"goo/math","ceil");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLnumG,"goo/boot","<num>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ynot,"goo/boot","not");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooSmathYK,"goo/math","|");
DEF(YgooSmathYtanh,"goo/math","tanh");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooSmathYas_log,"goo/math","as-log");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSmathYupperQ,"goo/math","upper?");
DEF(YgooSmathYatan,"goo/math","atan");
DEF(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YtT,"goo/boot","t*");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YgooSmathYDe,"goo/math","$e");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSmathYroundS,"goo/math","round/");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YgooSmathYN,"goo/math","~");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPsnul,"goo/boot","%snul");
DEF(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSmathYlogn,"goo/math","logn");
DEF(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSmathYacos,"goo/math","acos");
DEF(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooSmathYGG,"goo/math",">>");
DEF(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSmathYround_to,"goo/math","round-to");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_227);
DEFLIT(lit_152);
DEFLIT(lit_224);
DEFLIT(lit_66);
DEFLIT(lit_176);
DEFLIT(lit_174);
DEFLIT(lit_76);
DEFLIT(lit_129);
DEFLIT(lit_240);
DEFLIT(lit_124);
DEFLIT(lit_70);
DEFLIT(lit_2);
DEFLIT(lit_117);
DEFLIT(lit_4);
DEFLIT(lit_81);
DEFLIT(lit_204);
DEFLIT(lit_162);
DEFLIT(lit_83);
DEFLIT(lit_194);
DEFLIT(lit_84);
DEFLIT(lit_180);
DEFLIT(lit_140);
DEFLIT(lit_177);
DEFLIT(lit_57);
DEFLIT(lit_143);
DEFLIT(lit_31);
DEFLIT(lit_41);
DEFLIT(lit_228);
DEFLIT(lit_184);
DEFLIT(lit_39);
DEFLIT(lit_172);
DEFLIT(lit_10);
DEFLIT(lit_130);
DEFLIT(lit_101);
DEFLIT(lit_40);
DEFLIT(lit_77);
DEFLIT(lit_186);
DEFLIT(lit_141);
DEFLIT(lit_165);
DEFLIT(lit_225);
DEFLIT(lit_242);
DEFLIT(lit_244);
DEFLIT(lit_246);
DEFLIT(lit_85);
DEFLIT(lit_88);
DEFLIT(lit_73);
DEFLIT(lit_69);
DEFLIT(lit_78);
DEFLIT(lit_232);
DEFLIT(lit_50);
DEFLIT(lit_100);
DEFLIT(lit_169);
DEFLIT(lit_149);
DEFLIT(lit_111);
DEFLIT(lit_113);
DEFLIT(lit_61);
DEFLIT(lit_22);
DEFLIT(lit_23);
DEFLIT(lit_5);
DEFLIT(lit_20);
DEFLIT(lit_161);
DEFLIT(lit_42);
DEFLIT(lit_93);
DEFLIT(lit_213);
DEFLIT(lit_21);
DEFLIT(lit_134);
DEFLIT(lit_96);
DEFLIT(lit_214);
DEFLIT(lit_121);
DEFLIT(lit_198);
DEFLIT(lit_65);
DEFLIT(lit_102);
DEFLIT(lit_231);
DEFLIT(lit_87);
DEFLIT(lit_215);
DEFLIT(lit_175);
DEFLIT(lit_192);
DEFLIT(lit_1);
DEFLIT(lit_72);
DEFLIT(lit_30);
DEFLIT(lit_35);
DEFLIT(lit_151);
DEFLIT(lit_11);
DEFLIT(lit_144);
DEFLIT(lit_222);
DEFLIT(lit_217);
DEFLIT(lit_201);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_44);
DEFLIT(lit_153);
DEFLIT(lit_173);
DEFLIT(lit_135);
DEFLIT(lit_139);
DEFLIT(lit_60);
DEFLIT(lit_82);
DEFLIT(lit_150);
DEFLIT(lit_193);
DEFLIT(lit_163);
DEFLIT(lit_98);
DEFLIT(lit_127);
DEFLIT(lit_243);
DEFLIT(lit_13);
DEFLIT(lit_8);
DEFLIT(lit_45);
DEFLIT(lit_51);
DEFLIT(lit_17);
DEFLIT(lit_212);
DEFLIT(lit_108);
DEFLIT(lit_207);
DEFLIT(lit_55);
DEFLIT(lit_94);
DEFLIT(lit_154);
DEFLIT(lit_234);
DEFLIT(lit_233);
DEFLIT(lit_38);
DEFLIT(lit_16);
DEFLIT(lit_29);
DEFLIT(lit_109);
DEFLIT(lit_86);
DEFLIT(lit_27);
DEFLIT(lit_128);
DEFLIT(lit_146);
DEFLIT(lit_112);
DEFLIT(lit_54);
DEFLIT(lit_164);
DEFLIT(lit_7);
DEFLIT(lit_239);
DEFLIT(lit_133);
DEFLIT(lit_92);
DEFLIT(lit_237);
DEFLIT(lit_125);
DEFLIT(lit_74);
DEFLIT(lit_218);
DEFLIT(lit_199);
DEFLIT(lit_145);
DEFLIT(lit_178);
DEFLIT(lit_79);
DEFLIT(lit_190);
DEFLIT(lit_235);
DEFLIT(lit_71);
DEFLIT(lit_197);
DEFLIT(lit_68);
DEFLIT(lit_43);
DEFLIT(lit_168);
DEFLIT(lit_226);
DEFLIT(lit_220);
DEFLIT(lit_210);
DEFLIT(lit_46);
DEFLIT(lit_203);
DEFLIT(lit_99);
DEFLIT(lit_205);
DEFLIT(lit_230);
DEFLIT(lit_64);
DEFLIT(lit_52);
DEFLIT(lit_15);
DEFLIT(lit_183);
DEFLIT(lit_196);
DEFLIT(lit_110);
DEFLIT(lit_28);
DEFLIT(lit_53);
DEFLIT(lit_157);
DEFLIT(lit_189);
DEFLIT(lit_59);
DEFLIT(lit_202);
DEFLIT(lit_170);
DEFLIT(lit_119);
DEFLIT(lit_115);
DEFLIT(lit_49);
DEFLIT(lit_223);
DEFLIT(lit_160);
DEFLIT(lit_34);
DEFLIT(lit_221);
DEFLIT(lit_179);
DEFLIT(lit_195);
DEFLIT(lit_187);
DEFLIT(lit_219);
DEFLIT(lit_95);
DEFLIT(lit_33);
DEFLIT(lit_107);
DEFLIT(lit_208);
DEFLIT(lit_238);
DEFLIT(lit_131);
DEFLIT(lit_122);
DEFLIT(lit_67);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_120);
DEFLIT(lit_229);
DEFLIT(lit_136);
DEFLIT(lit_211);
DEFLIT(lit_56);
DEFLIT(lit_80);
DEFLIT(lit_147);
DEFLIT(lit_167);
DEFLIT(lit_62);
DEFLIT(lit_248);
DEFLIT(lit_249);
DEFLIT(lit_32);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_75);
DEFLIT(lit_47);
DEFLIT(lit_191);
DEFLIT(lit_91);
DEFLIT(lit_155);
DEFLIT(lit_200);
DEFLIT(lit_171);
DEFLIT(lit_106);
DEFLIT(lit_216);
DEFLIT(lit_236);
DEFLIT(lit_116);
DEFLIT(lit_58);
DEFLIT(lit_185);
DEFLIT(lit_63);
DEFLIT(lit_159);
DEFLIT(lit_26);
DEFLIT(lit_137);
DEFLIT(lit_89);
DEFLIT(lit_114);
DEFLIT(lit_6);
DEFLIT(lit_158);
DEFLIT(lit_48);
DEFLIT(lit_247);
DEFLIT(lit_166);
DEFLIT(lit_126);
DEFLIT(lit_105);
DEFLIT(lit_156);
DEFLIT(lit_123);
DEFLIT(lit_206);
DEFLIT(lit_181);
DEFLIT(lit_97);
DEFLIT(lit_241);
DEFLIT(lit_138);
DEFLIT(lit_245);
DEFLIT(lit_18);
DEFLIT(lit_209);
DEFLIT(lit_182);
DEFLIT(lit_19);
DEFLIT(lit_90);
DEFLIT(lit_3);
DEFLIT(lit_148);
DEFLIT(lit_37);
DEFLIT(lit_118);
DEFLIT(lit_142);
DEFLIT(lit_132);
DEFLIT(lit_14);
DEFLIT(lit_104);
DEFLIT(lit_103);
DEFLIT(lit_188);

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
LOCFOR(fun_pow_78);
LOCFOR(fun_K_79);
LOCFOR(fun_C_80);
LOCFOR(fun_B_81);
LOCFOR(fun_N_82);
LOCFOR(fun_bitQ_83);
LOCFOR(fun_evenQ_84);
LOCFOR(fun_oddQ_85);
LOCFOR(fun_GG_86);
LOCFOR(fun_GGG_87);
LOCFOR(fun_LL_88);
LOCFOR(fun_power_of_two_ceil_89);
FUNFOR(YgooSmathYflo_bits);
LOCFOR(fun_as_91);
LOCFOR(fun_EE_92);
LOCFOR(fun_L_93);
LOCFOR(fun_A_94);
LOCFOR(fun___95);
LOCFOR(fun_T_96);
LOCFOR(fun_S_97);
LOCFOR(fun_truncS_98);
LOCFOR(fun_pow_99);
LOCFOR(fun_isqrt_100);
LOCFOR(fun_x_1300_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_sqrt_104);
LOCFOR(fun_sqrt_105);
LOCFOR(fun_log_106);
LOCFOR(fun_log_107);
LOCFOR(fun_sin_108);
LOCFOR(fun_sin_109);
LOCFOR(fun_cos_110);
LOCFOR(fun_cos_111);
LOCFOR(fun_tan_112);
LOCFOR(fun_tan_113);
LOCFOR(fun_sinh_114);
LOCFOR(fun_sinh_115);
LOCFOR(fun_cosh_116);
LOCFOR(fun_cosh_117);
LOCFOR(fun_tanh_118);
LOCFOR(fun_tanh_119);
LOCFOR(fun_asin_120);
LOCFOR(fun_asin_121);
LOCFOR(fun_acos_122);
LOCFOR(fun_acos_123);
LOCFOR(fun_atan_124);
LOCFOR(fun_atan_125);
LOCFOR(fun_atan2_126);
LOCFOR(fun_atan2_127);
LOCFOR(fun_logn_128);
extern P YgooSmathY___main_0___ ();
extern P YgooSmathY___main_1___ ();
extern P YgooSmathY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_to_str_0) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(Yclass_of),x_);
  T2 = CALL1(1,VARREF(Yclass_name),T3);
  T1 = CALL1(1,VARREF(YgooSmathYto_str),T2);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_2),T1,LITREF(lit_3));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYaddress_of) {
  P x_;
  P tF1526;
  P xF1525;
  P xF1524;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1524 = x_;
  xF1525 = xF1524;
  tF1526 = (P)1;
  T1 = (P)YPiLL(xF1525,(P)2);
  T0 = (P)YPiv(T1,tF1526);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_2) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(LITREF(lit_8));
}

FUNCODEDEF(fun_to_str_3) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(LITREF(lit_10));
}

FUNCODEDEF(fun_as_4) {
  P type_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(type_, 0);
  ARG(x_, 1);
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
  P T0;
LINK_STACK();
  ARG(x_, 0);
  if (x_ != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_6) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_E_7) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NE_8) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NEE_9) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_10) {
  P U_,i_;
  P tF1531;
  P xF1530;
  P xF1529;
  P xF1528;
  P xF1527;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(i_, 1);
  xF1527 = i_;
  xF1528 = xF1527;
  T2 = (P)YPiGG(xF1528,(P)2);
  xF1529 = T2;
  xF1530 = xF1529;
  tF1531 = (P)2;
  T1 = (P)YPiLL(xF1530,(P)2);
  T0 = (P)YPiv(T1,tF1531);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_11) {
  P U_,c_;
  P tF1536;
  P xF1535;
  P xF1534;
  P xF1533;
  P xF1532;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(c_, 1);
  xF1532 = c_;
  xF1533 = xF1532;
  T2 = (P)YPiGG(xF1533,(P)2);
  xF1534 = T2;
  xF1535 = xF1534;
  tF1536 = (P)1;
  T1 = (P)YPiLL(xF1535,(P)2);
  T0 = (P)YPiv(T1,tF1536);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_12) {
  P x_,y_;
  P xF1540;
  P xF1539;
  P xF1538;
  P xF1537;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1537 = x_;
  xF1538 = xF1537;
  T2 = (P)YPiGG(xF1538,(P)2);
  xF1539 = y_;
  xF1540 = xF1539;
  T3 = (P)YPiGG(xF1540,(P)2);
  T1 = (P)YPcL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_13) {
  P x_,y_;
  P xF1544;
  P xF1543;
  P xF1542;
  P xF1541;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1541 = x_;
  xF1542 = xF1541;
  T2 = (P)YPiGG(xF1542,(P)2);
  xF1543 = y_;
  xF1544 = xF1543;
  T3 = (P)YPiGG(xF1544,(P)2);
  T1 = (P)YPcE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lowerQ_14) {
  P x_;
  P codeF1545;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF1545 = T5;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
  T1 = CALL2(1,VARREF(YgooSmagYGE),codeF1545,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)122));
    T3 = CALL2(1,VARREF(YgooSmagYLE),codeF1545,T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_upperQ_15) {
  P x_;
  P codeF1546;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF1546 = T5;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
  T1 = CALL2(1,VARREF(YgooSmagYGE),codeF1546,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)90));
    T3 = CALL2(1,VARREF(YgooSmagYLE),codeF1546,T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_lower_16) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
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
LINK_STACK();
  ARG(x_, 0);
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
LINK_STACK();
  ARG(digit_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),digit_);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  T0 = CALL2(1,VARREF(YgooSmathY_),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_19) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYfabs),VARREF(YLstrG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_alphaQ_20) {
  P x_;
  P tmpF1547;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)97),x_);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)122));
    T4 = T6;
  } else {
    T4 = YPfalse;
  }
  tmpF1547 = T4;
  if (tmpF1547 != YPfalse) {
    T0 = tmpF1547;
  } else {
    T2 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)65),x_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)90));
      T1 = T3;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_digitQ_21) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)48),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)57));
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_objectQ_22) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_eof_objectQ_23) {
  P x_;
  P xF1549;
  P xF1548;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF1548 = x_;
  xF1549 = xF1548;
  T2 = (P)YPiGG(xF1549,(P)2);
  T3 = (P)YPeof_object();
  T1 = (P)YPeqQ(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_object_24) {
  P tF1552;
  P xF1551;
  P xF1550;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YPeof_object();
  xF1550 = T2;
  xF1551 = xF1550;
  tF1552 = (P)2;
  T1 = (P)YPiLL(xF1551,(P)2);
  T0 = (P)YPiv(T1,tF1552);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_25) {
  P f_,x_,y_;
  P typeF1553;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T3 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF1553 = T3;
  T1 = CALL2(1,VARREF(YgooStypesYas),typeF1553,x_);
  T2 = CALL2(1,VARREF(YgooStypesYas),typeF1553,y_);
  T0 = CALL2(1,f_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_L_26) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmagYL),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_27) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYA),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1A_28) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___29) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathY_),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1__30) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathY_),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_31) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYT),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_32) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYS),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_33) {
  P y_,x_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYatan2),y_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logn_34) {
  P x_,b_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYlogn),x_,b_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_35) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYfloorS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceil_36) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYceilS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_37) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYroundS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_to_38) {
  P x_,n_;
  P fF1554;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYround),x_);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYpow),LITREF(lit_79),n_);
    fF1554 = T7;
    T6 = CALL2(1,VARREF(YgooSmathYT),x_,fF1554);
    T5 = CALL1(1,VARREF(YgooSmathYround),T6);
    T4 = CALL2(1,VARREF(YgooSmathYS),T5,fF1554);
    T3 = CALL1(1,x_,T4);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_trunc_39) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floorS_40) {
  P real_,divisor_;
  P remainderF1557;
  P integerF1556;
  P tup21F1555;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup21F1555 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F1555,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF1556 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F1555,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF1557 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF1557);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T5 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T4 = T6;
    } else {
      T7 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T4 = T7;
    }
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmathY_),integerF1556,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathYA),remainderF1557,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF1556,remainderF1557);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceilS_41) {
  P real_,divisor_;
  P remainderF1560;
  P integerF1559;
  P tup22F1558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup22F1558 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F1558,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF1559 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F1558,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF1560 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF1560);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T5 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T4 = T6;
    } else {
      T7 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T4 = T7;
    }
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmathYA),integerF1559,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathY_),remainderF1560,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF1559,remainderF1560);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_roundS_42) {
  P real_,divisor_;
  P tmpF1567;
  P minus_thresholdF1566;
  P tmpF1565;
  P thresholdF1564;
  P remainderF1563;
  P integerF1562;
  P tup23F1561;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T34 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup23F1561 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F1561,YPint((P)0));
  check_type(T33,VARREF(YLintG));
  integerF1562 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F1561,YPint((P)1));
  check_type(T32,VARREF(YLnumG));
  remainderF1563 = T32;
  T31 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T30 = CALL2(1,VARREF(YgooSmathYS),T31,LITREF(lit_88));
  check_type(T30,VARREF(YLnumG));
  thresholdF1564 = T30;
  T5 = CALL2(1,VARREF(YgooSmagYG),remainderF1563,thresholdF1564);
  tmpF1565 = T5;
  if (tmpF1565 != YPfalse) {
    T1 = tmpF1565;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),remainderF1563,thresholdF1564);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmathYoddQ),integerF1562);
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T7 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathY_),integerF1562,YPint((P)1));
      T10 = CALL2(1,VARREF(YgooSmathYA),remainderF1563,divisor_);
      T8 = CALL2(1,VARREF(Ytup),T9,T10);
      T6 = T8;
    } else {
      T12 = CALL2(1,VARREF(YgooSmathYA),integerF1562,YPint((P)1));
      T13 = CALL2(1,VARREF(YgooSmathY_),remainderF1563,divisor_);
      T11 = CALL2(1,VARREF(Ytup),T12,T13);
      T6 = T11;
    }
    T0 = T6;
  } else {
    T20 = CALL1(1,VARREF(YgooSmathYneg),thresholdF1564);
    minus_thresholdF1566 = T20;
    T19 = CALL2(1,VARREF(YgooSmagYL),remainderF1563,minus_thresholdF1566);
    tmpF1567 = T19;
    if (tmpF1567 != YPfalse) {
      T15 = tmpF1567;
    } else {
      T17 = CALL2(1,VARREF(YgooSmathYE),remainderF1563,minus_thresholdF1566);
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YgooSmathYoddQ),integerF1562);
        T16 = T18;
      } else {
        T16 = YPfalse;
      }
      T15 = T16;
    }
    if (T15 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
      if (T22 != YPfalse) {
        T24 = CALL2(1,VARREF(YgooSmathYA),integerF1562,YPint((P)1));
        T25 = CALL2(1,VARREF(YgooSmathY_),remainderF1563,divisor_);
        T23 = CALL2(1,VARREF(Ytup),T24,T25);
        T21 = T23;
      } else {
        T27 = CALL2(1,VARREF(YgooSmathY_),integerF1562,YPint((P)1));
        T28 = CALL2(1,VARREF(YgooSmathYA),remainderF1563,divisor_);
        T26 = CALL2(1,VARREF(Ytup),T27,T28);
        T21 = T26;
      }
      T14 = T21;
    } else {
      T29 = CALL2(1,VARREF(Ytup),integerF1562,remainderF1563);
      T14 = T29;
    }
    T0 = T14;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncS_43) {
  P real_,divisor_;
  P T0;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_div_44) {
  P x_,y_;
  P xF1569;
  P xF1568;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  xF1568 = YPint((P)0);
  xF1569 = xF1568;
  T2 = (P)YPiGG(xF1569,(P)2);
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_45) {
  P real_,divisor_;
  P remainderF1572;
  P UF1571;
  P tup24F1570;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup24F1570 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F1570,YPint((P)0));
  UF1571 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F1570,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF1572 = T0;
UNLINK_STACK();
  RET(remainderF1572);
}

FUNCODEDEF(fun_modA_46) {
  P i_,j_,n_;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
  T1 = CALL2(1,VARREF(YgooSmathYA),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mod__47) {
  P i_,j_,n_;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
  T1 = CALL2(1,VARREF(YgooSmathY_),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1292_48) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_103),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P return_;
  P x_1291F1581;
  P x_1291F1580;
  P x_1291F1579;
  P x_1291F1578;
  P x_1291F1577;
  P maxF1576;
  P placeF1575;
  P x_1291F1574;
  P x_1292F1573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1292_48,2);
  x_1292F1573 = T24;
  FUNINIT(x_1292F1573, 2,FREEREF(0),return_);
  x_1291F1574 = FREEREF(0);
  placeF1575 = YPfalse;
  placeF1575 = BOXFAB(placeF1575);
  maxF1576 = YPfalse;
  maxF1576 = BOXFAB(maxF1576);
  T2 = CALL2(1,VARREF(YisaQ),x_1291F1574,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1291F1574,LITREF(lit_103),x_1292F1573);
    x_1291F1577 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F1577,x_1292F1573);
    BOXVAL(placeF1575) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1291F1577);
    x_1291F1578 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F1578,x_1292F1573);
    BOXVAL(maxF1576) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1291F1578);
    x_1291F1579 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1291F1579,x_1292F1573);
    x_1291F1580 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F1580,x_1292F1573);
    T6 = CALL1(1,VARREF(Ytail),x_1291F1579);
    x_1291F1581 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F1581,x_1292F1573);
  } else {
    T12 = CALL2(1,x_1292F1573,LITREF(lit_104),x_1291F1574);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = BOXVAL(placeF1575);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = BOXVAL(maxF1576);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T21,T22,LITREF(lit_107));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_107));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_50) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_49,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1296_51) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_112),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1295F1590;
  P x_1295F1589;
  P x_1295F1588;
  P x_1295F1587;
  P x_1295F1586;
  P maxF1585;
  P placeF1584;
  P x_1295F1583;
  P x_1296F1582;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1296_51,2);
  x_1296F1582 = T24;
  FUNINIT(x_1296F1582, 2,FREEREF(0),return_);
  x_1295F1583 = FREEREF(0);
  placeF1584 = YPfalse;
  placeF1584 = BOXFAB(placeF1584);
  maxF1585 = YPfalse;
  maxF1585 = BOXFAB(maxF1585);
  T2 = CALL2(1,VARREF(YisaQ),x_1295F1583,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1295F1583,LITREF(lit_112),x_1296F1582);
    x_1295F1586 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F1586,x_1296F1582);
    BOXVAL(placeF1584) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1295F1586);
    x_1295F1587 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F1587,x_1296F1582);
    BOXVAL(maxF1585) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1295F1587);
    x_1295F1588 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1295F1588,x_1296F1582);
    x_1295F1589 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1589,x_1296F1582);
    T6 = CALL1(1,VARREF(Ytail),x_1295F1588);
    x_1295F1590 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F1590,x_1296F1582);
  } else {
    T12 = CALL2(1,x_1296F1582,LITREF(lit_104),x_1295F1583);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = BOXVAL(placeF1584);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = BOXVAL(maxF1585);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T21,T22,LITREF(lit_107));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_107));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_53) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_52,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rem_54) {
  P real_,divisor_;
  P remainderF1593;
  P UF1592;
  P tup25F1591;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup25F1591 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F1591,YPint((P)0));
  UF1592 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F1591,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF1593 = T0;
UNLINK_STACK();
  RET(remainderF1593);
}

FUNCODEDEF(fun_pow_55) {
  P base_,n_;
  P T0;
LINK_STACK();
  ARG(base_, 0);
  ARG(n_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYpow),base_,n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_posQ_56) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zeroQ_57) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_negQ_58) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_neg_59) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_abs_60) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
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
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_type_62) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_contagious_type_63) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_64) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_65) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_EE_66) {
  P x_,y_;
  P xF1597;
  P xF1596;
  P xF1595;
  P xF1594;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1594 = x_;
  xF1595 = xF1594;
  T2 = (P)YPiGG(xF1595,(P)2);
  xF1596 = y_;
  xF1597 = xF1596;
  T3 = (P)YPiGG(xF1597,(P)2);
  T1 = (P)YPiE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_67) {
  P x_,y_;
  P xF1601;
  P xF1600;
  P xF1599;
  P xF1598;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1598 = x_;
  xF1599 = xF1598;
  T2 = (P)YPiGG(xF1599,(P)2);
  xF1600 = y_;
  xF1601 = xF1600;
  T3 = (P)YPiGG(xF1601,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_68) {
  P x_,y_;
  P tF1608;
  P xF1607;
  P xF1606;
  P xF1605;
  P xF1604;
  P xF1603;
  P xF1602;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1602 = x_;
  xF1603 = xF1602;
  T3 = (P)YPiGG(xF1603,(P)2);
  xF1604 = y_;
  xF1605 = xF1604;
  T4 = (P)YPiGG(xF1605,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF1606 = T2;
  xF1607 = xF1606;
  tF1608 = (P)1;
  T1 = (P)YPiLL(xF1607,(P)2);
  T0 = (P)YPiv(T1,tF1608);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___69) {
  P x_,y_;
  P tF1615;
  P xF1614;
  P xF1613;
  P xF1612;
  P xF1611;
  P xF1610;
  P xF1609;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1609 = x_;
  xF1610 = xF1609;
  T3 = (P)YPiGG(xF1610,(P)2);
  xF1611 = y_;
  xF1612 = xF1611;
  T4 = (P)YPiGG(xF1612,(P)2);
  T2 = (P)YPi_(T3,T4);
  xF1613 = T2;
  xF1614 = xF1613;
  tF1615 = (P)1;
  T1 = (P)YPiLL(xF1614,(P)2);
  T0 = (P)YPiv(T1,tF1615);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_70) {
  P x_,y_;
  P tF1622;
  P xF1621;
  P xF1620;
  P xF1619;
  P xF1618;
  P xF1617;
  P xF1616;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1616 = x_;
  xF1617 = xF1616;
  T3 = (P)YPiGG(xF1617,(P)2);
  xF1618 = y_;
  xF1619 = xF1618;
  T4 = (P)YPiGG(xF1619,(P)2);
  T2 = (P)YPiT(T3,T4);
  xF1620 = T2;
  xF1621 = xF1620;
  tF1622 = (P)1;
  T1 = (P)YPiLL(xF1621,(P)2);
  T0 = (P)YPiv(T1,tF1622);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_71) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_138));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_72) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_ceil_73) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_round_74) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_trunc_75) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_truncS_76) {
  P x_,y_;
  P resultF1630;
  P tF1629;
  P xF1628;
  P xF1627;
  P xF1626;
  P xF1625;
  P xF1624;
  P xF1623;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1623 = x_;
  xF1624 = xF1623;
  T6 = (P)YPiGG(xF1624,(P)2);
  xF1625 = y_;
  xF1626 = xF1625;
  T7 = (P)YPiGG(xF1626,(P)2);
  T5 = (P)YPitS(T6,T7);
  xF1627 = T5;
  xF1628 = xF1627;
  tF1629 = (P)1;
  T4 = (P)YPiLL(xF1628,(P)2);
  T3 = (P)YPiv(T4,tF1629);
  resultF1630 = T3;
  T2 = CALL2(1,VARREF(YgooSmathYT),resultF1630,y_);
  T1 = CALL2(1,VARREF(YgooSmathY_),x_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF1630,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_77) {
  P x_,y_;
  P resF1638;
  P tF1637;
  P xF1636;
  P xF1635;
  P xF1634;
  P xF1633;
  P xF1632;
  P xF1631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1631 = x_;
  xF1632 = xF1631;
  T9 = (P)YPiGG(xF1632,(P)2);
  xF1633 = y_;
  xF1634 = xF1633;
  T10 = (P)YPiGG(xF1634,(P)2);
  T8 = (P)YPim(T9,T10);
  xF1635 = T8;
  xF1636 = xF1635;
  tF1637 = (P)1;
  T7 = (P)YPiLL(xF1636,(P)2);
  T6 = (P)YPiv(T7,tF1637);
  resF1638 = T6;
  T1 = CALL2(1,VARREF(YgooSmagYL),resF1638,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T3 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmathYA),resF1638,y_);
      T2 = T4;
    } else {
      T5 = CALL2(1,VARREF(YgooSmathY_),resF1638,y_);
      T2 = T5;
    }
    T0 = T2;
  } else {
    T0 = resF1638;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_78) {
  P x_,n_;
  P yF1641;
  P pF1640;
  P xF1639;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
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
          T29 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)1));
          if (T29 != YPfalse) {
            T30 = CALL2(1,VARREF(YgooSmathYT),x_,x_);
            T28 = T30;
          } else {
            T28 = x_;
          }
          check_type(T28,VARREF(YLintG));
          xF1639 = T28;
          T31 = CALL2(1,VARREF(YgooSmathYGG),n_,YPint((P)1));
          check_type(T31,VARREF(YLintG));
          pF1640 = T31;
          T33 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
          if (T33 != YPfalse) {
            T32 = x_;
          } else {
            T32 = YPint((P)1);
          }
          check_type(T32,VARREF(YLintG));
          yF1641 = T32;
          for (;;) {
            P a46_0,a46_1,a46_2;
          loop46:
            T19 = CALL1(1,VARREF(YgooSmathYzeroQ),pF1640);
            if (T19 != YPfalse) {
              T18 = yF1641;
            } else {
              T22 = CALL2(1,VARREF(YgooSmagYG),pF1640,YPint((P)1));
              if (T22 != YPfalse) {
                T23 = CALL2(1,VARREF(YgooSmathYT),xF1639,xF1639);
                T21 = T23;
              } else {
                T21 = xF1639;
              }
              T24 = CALL2(1,VARREF(YgooSmathYGG),pF1640,YPint((P)1));
              T26 = CALL1(1,VARREF(YgooSmathYoddQ),pF1640);
              if (T26 != YPfalse) {
                T27 = CALL2(1,VARREF(YgooSmathYT),xF1639,yF1641);
                T25 = T27;
              } else {
                T25 = yF1641;
              }
              a46_0 = T21;
              a46_1 = T24;
              a46_2 = T25;
              xF1639 = a46_0;
              pF1640 = a46_1;
              yF1641 = a46_2;
              goto loop46;
              T18 = T20;
            }
            break;
          }
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

FUNCODEDEF(fun_K_79) {
  P x_,y_;
  P tF1648;
  P xF1647;
  P xF1646;
  P xF1645;
  P xF1644;
  P xF1643;
  P xF1642;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1642 = x_;
  xF1643 = xF1642;
  T3 = (P)YPiGG(xF1643,(P)2);
  xF1644 = y_;
  xF1645 = xF1644;
  T4 = (P)YPiGG(xF1645,(P)2);
  T2 = (P)YPiv(T3,T4);
  xF1646 = T2;
  xF1647 = xF1646;
  tF1648 = (P)1;
  T1 = (P)YPiLL(xF1647,(P)2);
  T0 = (P)YPiv(T1,tF1648);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_C_80) {
  P x_,y_;
  P tF1655;
  P xF1654;
  P xF1653;
  P xF1652;
  P xF1651;
  P xF1650;
  P xF1649;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1649 = x_;
  xF1650 = xF1649;
  T3 = (P)YPiGG(xF1650,(P)2);
  xF1651 = y_;
  xF1652 = xF1651;
  T4 = (P)YPiGG(xF1652,(P)2);
  T2 = (P)YPiC(T3,T4);
  xF1653 = T2;
  xF1654 = xF1653;
  tF1655 = (P)1;
  T1 = (P)YPiLL(xF1654,(P)2);
  T0 = (P)YPiv(T1,tF1655);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_B_81) {
  P x_,y_;
  P tF1662;
  P xF1661;
  P xF1660;
  P xF1659;
  P xF1658;
  P xF1657;
  P xF1656;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF1656 = x_;
  xF1657 = xF1656;
  T3 = (P)YPiGG(xF1657,(P)2);
  xF1658 = y_;
  xF1659 = xF1658;
  T4 = (P)YPiGG(xF1659,(P)2);
  T2 = (P)YPiB(T3,T4);
  xF1660 = T2;
  xF1661 = xF1660;
  tF1662 = (P)1;
  T1 = (P)YPiLL(xF1661,(P)2);
  T0 = (P)YPiv(T1,tF1662);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_N_82) {
  P x_;
  P tF1667;
  P xF1666;
  P xF1665;
  P xF1664;
  P xF1663;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF1663 = x_;
  xF1664 = xF1663;
  T3 = (P)YPiGG(xF1664,(P)2);
  T2 = (P)YPiX(T3);
  xF1665 = T2;
  xF1666 = xF1665;
  tF1667 = (P)1;
  T1 = (P)YPiLL(xF1666,(P)2);
  T0 = (P)YPiv(T1,tF1667);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bitQ_83) {
  P o_,x_;
  P tF1674;
  P xF1673;
  P xF1672;
  P xF1671;
  P xF1670;
  P xF1669;
  P xF1668;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
  xF1668 = o_;
  xF1669 = xF1668;
  T3 = (P)YPiGG(xF1669,(P)2);
  xF1670 = x_;
  xF1671 = xF1670;
  T4 = (P)YPiGG(xF1671,(P)2);
  T2 = (P)YPiQ(T3,T4);
  xF1672 = T2;
  xF1673 = xF1672;
  tF1674 = (P)1;
  T1 = (P)YPiLL(xF1673,(P)2);
  T0 = (P)YPiv(T1,tF1674);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_evenQ_84) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmathYB),x_,YPint((P)1));
  T0 = CALL1(1,VARREF(YgooSmathYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_oddQ_85) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYevenQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GG_86) {
  P x_,a_;
  P tF1681;
  P xF1680;
  P xF1679;
  P xF1678;
  P xF1677;
  P xF1676;
  P xF1675;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF1675 = x_;
  xF1676 = xF1675;
  T3 = (P)YPiGG(xF1676,(P)2);
  xF1677 = a_;
  xF1678 = xF1677;
  T4 = (P)YPiGG(xF1678,(P)2);
  T2 = (P)YPiGG(T3,T4);
  xF1679 = T2;
  xF1680 = xF1679;
  tF1681 = (P)1;
  T1 = (P)YPiLL(xF1680,(P)2);
  T0 = (P)YPiv(T1,tF1681);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GGG_87) {
  P x_,a_;
  P tF1688;
  P xF1687;
  P xF1686;
  P xF1685;
  P xF1684;
  P xF1683;
  P xF1682;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF1682 = x_;
  xF1683 = xF1682;
  T3 = (P)YPiGG(xF1683,(P)2);
  xF1684 = a_;
  xF1685 = xF1684;
  T4 = (P)YPiGG(xF1685,(P)2);
  T2 = (P)YPiGGG(T3,T4);
  xF1686 = T2;
  xF1687 = xF1686;
  tF1688 = (P)1;
  T1 = (P)YPiLL(xF1687,(P)2);
  T0 = (P)YPiv(T1,tF1688);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LL_88) {
  P x_,a_;
  P tF1695;
  P xF1694;
  P xF1693;
  P xF1692;
  P xF1691;
  P xF1690;
  P xF1689;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF1689 = x_;
  xF1690 = xF1689;
  T3 = (P)YPiGG(xF1690,(P)2);
  xF1691 = a_;
  xF1692 = xF1691;
  T4 = (P)YPiGG(xF1692,(P)2);
  T2 = (P)YPiLL(T3,T4);
  xF1693 = T2;
  xF1694 = xF1693;
  tF1695 = (P)1;
  T1 = (P)YPiLL(xF1694,(P)2);
  T0 = (P)YPiv(T1,tF1695);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_power_of_two_ceil_89) {
  P x_;
  P po2F1696;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)1),VARREF(YLintG));
  po2F1696 = YPint((P)1);
  for (;;) {
    P a47_0;
  loop47:
    T1 = CALL2(1,VARREF(YgooSmagYG),po2F1696,x_);
    if (T1 != YPfalse) {
      T0 = po2F1696;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),po2F1696,po2F1696);
      a47_0 = T3;
      po2F1696 = a47_0;
      goto loop47;
      T0 = T2;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P tF1699;
  P xF1698;
  P xF1697;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = (P)YPfu(x_);
  T2 = (P)YPflo_bits(T3);
  xF1697 = T2;
  xF1698 = xF1697;
  tF1699 = (P)1;
  T1 = (P)YPiLL(xF1698,(P)2);
  T0 = (P)YPiv(T1,tF1699);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_91) {
  P U_,x_;
  P xF1701;
  P xF1700;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
  xF1700 = x_;
  xF1701 = xF1700;
  T2 = (P)YPiGG(xF1701,(P)2);
  T1 = (P)YPfi2f(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_92) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_93) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_94) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfA(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___95) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPf_(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_96) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfT(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_97) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfS(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncS_98) {
  P x_,y_;
  P resultF1706;
  P tF1705;
  P xF1704;
  P xF1703;
  P dividedF1702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T8 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF1702 = T8;
  T7 = (P)YPfu(dividedF1702);
  T6 = (P)YPft(T7);
  xF1703 = T6;
  xF1704 = xF1703;
  tF1705 = (P)1;
  T5 = (P)YPiLL(xF1704,(P)2);
  T4 = (P)YPiv(T5,tF1705);
  resultF1706 = T4;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF1706);
  T2 = CALL2(1,VARREF(YgooSmathY_),dividedF1702,T3);
  T1 = CALL2(1,VARREF(YgooSmathYT),y_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF1706,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_99) {
  P x_,n_;
  P resF1707;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T8 = CALL1(1,VARREF(YgooSmathYabs),x_);
  T7 = (P)YPfu(T8);
  T9 = (P)YPfu(n_);
  T6 = (P)YPfpow(T7,T9);
  T5 = (P)YPfb(T6);
  resF1707 = T5;
  T2 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),resF1707);
    T0 = T4;
  } else {
    T0 = resF1707;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isqrt_100) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYsqrt),T2);
  T0 = CALL1(1,VARREF(YgooSmathYround),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1300_101) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_187),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  P return_;
  P PfpF1723;
  P x_1299F1722;
  P x_1299F1721;
  P x_1299F1720;
  P x_1299F1719;
  P x_1299F1718;
  P x_1299F1717;
  P x_1299F1716;
  P x_1299F1715;
  P x_1299F1714;
  P x_1299F1713;
  P prefixF1712;
  P paramF1711;
  P nameF1710;
  P x_1299F1709;
  P x_1300F1708;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89;
LINK_STACK();
  ARG(return_, 0);
  T89 = FUNSHELL(0,fun_x_1300_101,2);
  x_1300F1708 = T89;
  FUNINIT(x_1300F1708, 2,FREEREF(0),return_);
  x_1299F1709 = FREEREF(0);
  nameF1710 = YPfalse;
  nameF1710 = BOXFAB(nameF1710);
  paramF1711 = YPfalse;
  paramF1711 = BOXFAB(paramF1711);
  prefixF1712 = YPfalse;
  prefixF1712 = BOXFAB(prefixF1712);
  T3 = CALL2(1,VARREF(YisaQ),x_1299F1709,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1299F1709,LITREF(lit_187),x_1300F1708);
    x_1299F1713 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1299F1713,x_1300F1708);
    BOXVAL(nameF1710) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1299F1713);
    x_1299F1714 = T17;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1299F1714,x_1300F1708);
    x_1299F1715 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1299F1715,x_1300F1708);
    BOXVAL(paramF1711) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1299F1715);
    x_1299F1716 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1299F1716,x_1300F1708);
    x_1299F1717 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1717,x_1300F1708);
    T11 = CALL1(1,VARREF(Ytail),x_1299F1716);
    x_1299F1718 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1718,x_1300F1708);
    T15 = CALL1(1,VARREF(Ytail),x_1299F1714);
    x_1299F1719 = T15;
    BOXVAL(prefixF1712) = x_1299F1719;
    x_1299F1720 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1299F1720,x_1300F1708);
    x_1299F1721 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1721,x_1300F1708);
    T7 = CALL1(1,VARREF(Ytail),x_1299F1720);
    x_1299F1722 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F1722,x_1300F1708);
  } else {
    T19 = CALL2(1,x_1300F1708,LITREF(lit_104),x_1299F1709);
  }
  T88 = BOXVAL(nameF1710);
  T87 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_188),T88);
  PfpF1723 = T87;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_189));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T26 = BOXVAL(nameF1710);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = BOXVAL(paramF1711);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T33,LITREF(lit_107));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T34,T35,LITREF(lit_107));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_107));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T40 = BOXVAL(nameF1710);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T46 = BOXVAL(paramF1711);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T47,LITREF(lit_107));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T48,T49,LITREF(lit_107));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T50 = BOXVAL(prefixF1712);
  T54 = BOXVAL(nameF1710);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T60 = BOXVAL(paramF1711);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_107));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T52 = CALL3(1,VARREF(YgooSmacrosYcat),T53,T55,LITREF(lit_107));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),6,T38,T39,T41,T50,T51,LITREF(lit_107));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T65 = BOXVAL(nameF1710);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T71 = BOXVAL(paramF1711);
  T70 = CALL1(1,VARREF(Ylst),T71);
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T72,LITREF(lit_107));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T73,T74,LITREF(lit_107));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T75 = BOXVAL(prefixF1712);
  T78 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T81 = CALL1(1,VARREF(Ylst),PfpF1723);
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T86 = BOXVAL(paramF1711);
  T85 = CALL1(1,VARREF(Ylst),T86);
  T83 = CALL3(1,VARREF(YgooSmacrosYcat),T84,T85,LITREF(lit_107));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T80 = CALL3(1,VARREF(YgooSmacrosYcat),T81,T82,LITREF(lit_107));
  T79 = CALL1(1,VARREF(Ylst),T80);
  T77 = CALL3(1,VARREF(YgooSmacrosYcat),T78,T79,LITREF(lit_107));
  T76 = CALL1(1,VARREF(Ylst),T77);
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),6,T63,T64,T66,T75,T76,LITREF(lit_107));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T36,T61,LITREF(lit_107));
UNLINK_STACK();
  QRET(T20);
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

FUNCODEDEF(fun_sqrt_104) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_201));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYsqrt),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_sqrt_105) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_201));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfsqrt(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_log_106) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYlog),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_log_107) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPflog(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sin_108) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsin),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sin_109) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPfsin(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cos_110) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcos),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cos_111) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPfcos(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tan_112) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tan_113) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPftan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sinh_114) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsinh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sinh_115) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPfsinh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cosh_116) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcosh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cosh_117) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPfcosh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tanh_118) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtanh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tanh_119) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPftanh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_asin_120) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_234));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYasin),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_asin_121) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_234));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfasin(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_122) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_239));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYacos),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_123) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_239));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfacos(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_atan_124) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYatan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan_125) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YPfatan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_126) {
  P y_,x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_127) {
  P y_,x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logn_128) {
  P x_,b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
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
  lit_101 = YPPsym((P)"x-1292");
  lit_102 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_103 = YPPsym((P)"modincf");
  lit_104 = YPsb((P)"Match Pattern Failure");
  lit_105 = YPPsym((P)"opf");
  lit_106 = YPPsym((P)"_");
  lit_107 = Ynil;
  T207 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1292_48 = YPmet(FUNCODEREF(fun_x_1292_48),LITREF(lit_101),T207,ENVNUL,PNUL,YPfalse);
  T206 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T206,ENVNUL,PNUL,YPfalse);
  T205 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T205,ENVNUL,PNUL,YPfalse);
  T208 = fun_50;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T208);
  lit_108 = YPPlist(1,YPPsym((P)"exp"));
  lit_109 = YPPlist(1,YPPsym((P)"return"));
  lit_110 = YPPsym((P)"x-1296");
  lit_111 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_112 = YPPsym((P)"moddecf");
  T211 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1296_51 = YPmet(FUNCODEREF(fun_x_1296_51),LITREF(lit_110),T211,ENVNUL,PNUL,YPfalse);
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
  P T240,T241;
DEFCREGS();
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
  T77 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_78 = YPmet(FUNCODEREF(fun_pow_78),LITREF(lit_115),T77,ENVNUL,PNUL,sloc(289));
  T79 = VARREF_OR(YgooSmathYpow,YPfalse);
  T80 = fun_pow_78;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YgooSmathYpow,T78);
  lit_146 = YPPsym((P)"|");
  lit_147 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T81 = YPsig(LITREF(lit_147),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_79 = YPmet(FUNCODEREF(fun_K_79),LITREF(lit_146),T81,ENVNUL,PNUL,sloc(304));
  T83 = VARREF_OR(YgooSmathYK,YPfalse);
  T84 = fun_K_79;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YgooSmathYK,T82);
  lit_148 = YPPsym((P)"^");
  lit_149 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T85 = YPsig(LITREF(lit_149),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_80 = YPmet(FUNCODEREF(fun_C_80),LITREF(lit_148),T85,ENVNUL,PNUL,sloc(307));
  T87 = VARREF_OR(YgooSmathYC,YPfalse);
  T88 = fun_C_80;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YgooSmathYC,T86);
  lit_150 = YPPsym((P)"&");
  lit_151 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T89 = YPsig(LITREF(lit_151),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_81 = YPmet(FUNCODEREF(fun_B_81),LITREF(lit_150),T89,ENVNUL,PNUL,sloc(310));
  T91 = VARREF_OR(YgooSmathYB,YPfalse);
  T92 = fun_B_81;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YgooSmathYB,T90);
  lit_152 = YPPsym((P)"~");
  lit_153 = YPPlist(1,YPPsym((P)"x"));
  T93 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_N_82 = YPmet(FUNCODEREF(fun_N_82),LITREF(lit_152),T93,ENVNUL,PNUL,sloc(313));
  T95 = VARREF_OR(YgooSmathYN,YPfalse);
  T96 = fun_N_82;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YgooSmathYN,T94);
  lit_154 = YPPsym((P)"bit?");
  lit_155 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"x"));
  T97 = YPsig(LITREF(lit_155),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_bitQ_83 = YPmet(FUNCODEREF(fun_bitQ_83),LITREF(lit_154),T97,ENVNUL,PNUL,sloc(316));
  T99 = VARREF_OR(YgooSmathYbitQ,YPfalse);
  T100 = fun_bitQ_83;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YgooSmathYbitQ,T98);
  lit_156 = YPPsym((P)"even?");
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  T101 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_84 = YPmet(FUNCODEREF(fun_evenQ_84),LITREF(lit_156),T101,ENVNUL,PNUL,sloc(319));
  T103 = VARREF_OR(YgooSmathYevenQ,YPfalse);
  T104 = fun_evenQ_84;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YgooSmathYevenQ,T102);
  lit_158 = YPPsym((P)"odd?");
  lit_159 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_85 = YPmet(FUNCODEREF(fun_oddQ_85),LITREF(lit_158),T105,ENVNUL,PNUL,sloc(322));
  T107 = VARREF_OR(YgooSmathYoddQ,YPfalse);
  T108 = fun_oddQ_85;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T108);
  VARSET(YgooSmathYoddQ,T106);
  lit_160 = YPPsym((P)">>");
  lit_161 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T109 = YPsig(LITREF(lit_161),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GG_86 = YPmet(FUNCODEREF(fun_GG_86),LITREF(lit_160),T109,ENVNUL,PNUL,sloc(325));
  T111 = VARREF_OR(YgooSmathYGG,YPfalse);
  T112 = fun_GG_86;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YgooSmathYGG,T110);
  lit_162 = YPPsym((P)">>>");
  lit_163 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T113 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GGG_87 = YPmet(FUNCODEREF(fun_GGG_87),LITREF(lit_162),T113,ENVNUL,PNUL,sloc(328));
  T115 = VARREF_OR(YgooSmathYGGG,YPfalse);
  T116 = fun_GGG_87;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YgooSmathYGGG,T114);
  lit_164 = YPPsym((P)"<<");
  lit_165 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T117 = YPsig(LITREF(lit_165),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_LL_88 = YPmet(FUNCODEREF(fun_LL_88),LITREF(lit_164),T117,ENVNUL,PNUL,sloc(331));
  T119 = VARREF_OR(YgooSmathYLL,YPfalse);
  T120 = fun_LL_88;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YgooSmathYLL,T118);
  lit_166 = YPPsym((P)"power-of-two-ceil");
  lit_167 = YPPlist(1,YPPsym((P)"x"));
  T121 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_89 = YPmet(FUNCODEREF(fun_power_of_two_ceil_89),LITREF(lit_166),T121,ENVNUL,PNUL,sloc(334));
  T123 = VARREF_OR(YgooSmathYpower_of_two_ceil,YPfalse);
  T124 = fun_power_of_two_ceil_89;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YgooSmathYpower_of_two_ceil,T122);
  lit_168 = YPPsym((P)"flo-bits");
  lit_169 = YPPlist(1,YPPsym((P)"x"));
  T125 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPmet(FUNCODEREF(YgooSmathYflo_bits),LITREF(lit_168),T125,ENVNUL,PNUL,sloc(342));
  T126 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T126);
  lit_170 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"x"));
  T128 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T127 = YPsig(LITREF(lit_170),YPPlist(2,T128,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_91 = YPmet(FUNCODEREF(fun_as_91),LITREF(lit_11),T127,ENVNUL,PNUL,sloc(345));
  T130 = VARREF_OR(YgooStypesYas,YPfalse);
  T131 = fun_as_91;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YgooStypesYas,T129);
  lit_171 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T132 = YPsig(LITREF(lit_171),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_92 = YPmet(FUNCODEREF(fun_EE_92),LITREF(lit_16),T132,ENVNUL,PNUL,sloc(348));
  T134 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T135 = fun_EE_92;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YgooSmacrosYEE,T133);
  lit_172 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T136 = YPsig(LITREF(lit_172),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_93 = YPmet(FUNCODEREF(fun_L_93),LITREF(lit_26),T136,ENVNUL,PNUL,sloc(351));
  T138 = VARREF_OR(YgooSmagYL,YPfalse);
  T139 = fun_L_93;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YgooSmagYL,T137);
  lit_173 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T140 = YPsig(LITREF(lit_173),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_94 = YPmet(FUNCODEREF(fun_A_94),LITREF(lit_55),T140,ENVNUL,PNUL,sloc(354));
  T142 = VARREF_OR(YgooSmathYA,YPfalse);
  T143 = fun_A_94;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YgooSmathYA,T141);
  lit_174 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T144 = YPsig(LITREF(lit_174),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___95 = YPmet(FUNCODEREF(fun___95),LITREF(lit_59),T144,ENVNUL,PNUL,sloc(357));
  T146 = VARREF_OR(YgooSmathY_,YPfalse);
  T147 = fun___95;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YgooSmathY_,T145);
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T148 = YPsig(LITREF(lit_175),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_96 = YPmet(FUNCODEREF(fun_T_96),LITREF(lit_63),T148,ENVNUL,PNUL,sloc(360));
  T150 = VARREF_OR(YgooSmathYT,YPfalse);
  T151 = fun_T_96;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YgooSmathYT,T149);
  lit_176 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T152 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_97 = YPmet(FUNCODEREF(fun_S_97),LITREF(lit_65),T152,ENVNUL,PNUL,sloc(363));
  T154 = VARREF_OR(YgooSmathYS,YPfalse);
  T155 = fun_S_97;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YgooSmathYS,T153);
  lit_177 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T157 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfloG));
  T156 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T157,Ynil);
  fun_truncS_98 = YPmet(FUNCODEREF(fun_truncS_98),LITREF(lit_89),T156,ENVNUL,PNUL,sloc(366));
  T159 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T160 = fun_truncS_98;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(YgooSmathYtruncS,T158);
  lit_178 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T161 = YPsig(LITREF(lit_178),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_99 = YPmet(FUNCODEREF(fun_pow_99),LITREF(lit_115),T161,ENVNUL,PNUL,sloc(371));
  T163 = VARREF_OR(YgooSmathYpow,YPfalse);
  T164 = fun_pow_99;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YgooSmathYpow,T162);
  lit_179 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_179));
  lit_180 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_180));
  lit_181 = YPPsym((P)"isqrt");
  lit_182 = YPPlist(1,YPPsym((P)"x"));
  T165 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_100 = YPmet(FUNCODEREF(fun_isqrt_100),LITREF(lit_181),T165,ENVNUL,PNUL,sloc(378));
  T167 = VARREF_OR(YgooSmathYisqrt,YPfalse);
  T168 = fun_isqrt_100;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YgooSmathYisqrt,T166);
  lit_183 = YPPlist(1,YPPsym((P)"exp"));
  lit_184 = YPPlist(1,YPPsym((P)"return"));
  lit_185 = YPPsym((P)"x-1300");
  lit_186 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_187 = YPPsym((P)"def-unary-trans");
  lit_188 = YPsb((P)"%f");
  lit_189 = YPPsym((P)"seq");
  lit_190 = YPPsym((P)"dg");
  lit_191 = YPPsym((P)"<num>");
  lit_192 = YPPsym((P)"=>");
  lit_193 = YPPsym((P)"dm");
  lit_194 = YPPsym((P)"<int>");
  lit_195 = YPPsym((P)"<flo>");
  lit_196 = YPPsym((P)"%fb");
  lit_197 = YPPsym((P)"%fu");
  T171 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_101 = YPmet(FUNCODEREF(fun_x_1300_101),LITREF(lit_185),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T172 = fun_103;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T172);
  lit_198 = YPPsym((P)"sqrt");
  lit_199 = YPPlist(1,YPPsym((P)"x"));
  T174 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T173 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_198),T174,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsqrt,T173);
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  lit_201 = YPsb((P)"SQRT would produce complex number");
  T175 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_104 = YPmet(FUNCODEREF(fun_sqrt_104),LITREF(lit_198),T175,ENVNUL,PNUL,sloc(391));
  T177 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T178 = fun_sqrt_104;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YgooSmathYsqrt,T176);
  lit_202 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_105 = YPmet(FUNCODEREF(fun_sqrt_105),LITREF(lit_198),T179,ENVNUL,PNUL,sloc(391));
  T181 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T182 = fun_sqrt_105;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T182);
  VARSET(YgooSmathYsqrt,T180);
  lit_203 = YPPsym((P)"log");
  lit_204 = YPPlist(1,YPPsym((P)"x"));
  T184 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T183 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_203),T184,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlog,T183);
  lit_205 = YPPlist(1,YPPsym((P)"x"));
  T185 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_106 = YPmet(FUNCODEREF(fun_log_106),LITREF(lit_203),T185,ENVNUL,PNUL,sloc(394));
  T187 = VARREF_OR(YgooSmathYlog,YPfalse);
  T188 = fun_log_106;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  VARSET(YgooSmathYlog,T186);
  lit_206 = YPPlist(1,YPPsym((P)"x"));
  T189 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_107 = YPmet(FUNCODEREF(fun_log_107),LITREF(lit_203),T189,ENVNUL,PNUL,sloc(394));
  T191 = VARREF_OR(YgooSmathYlog,YPfalse);
  T192 = fun_log_107;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T192);
  VARSET(YgooSmathYlog,T190);
  lit_207 = YPPsym((P)"sin");
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  T194 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T193 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_207),T194,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsin,T193);
  lit_209 = YPPlist(1,YPPsym((P)"x"));
  T195 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_108 = YPmet(FUNCODEREF(fun_sin_108),LITREF(lit_207),T195,ENVNUL,PNUL,sloc(395));
  T197 = VARREF_OR(YgooSmathYsin,YPfalse);
  T198 = fun_sin_108;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T198);
  VARSET(YgooSmathYsin,T196);
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  T199 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_109 = YPmet(FUNCODEREF(fun_sin_109),LITREF(lit_207),T199,ENVNUL,PNUL,sloc(395));
  T201 = VARREF_OR(YgooSmathYsin,YPfalse);
  T202 = fun_sin_109;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T202);
  VARSET(YgooSmathYsin,T200);
  lit_211 = YPPsym((P)"cos");
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  T204 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T203 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_211),T204,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcos,T203);
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T205 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_110 = YPmet(FUNCODEREF(fun_cos_110),LITREF(lit_211),T205,ENVNUL,PNUL,sloc(396));
  T207 = VARREF_OR(YgooSmathYcos,YPfalse);
  T208 = fun_cos_110;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T208);
  VARSET(YgooSmathYcos,T206);
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T209 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_111 = YPmet(FUNCODEREF(fun_cos_111),LITREF(lit_211),T209,ENVNUL,PNUL,sloc(396));
  T211 = VARREF_OR(YgooSmathYcos,YPfalse);
  T212 = fun_cos_111;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T212);
  VARSET(YgooSmathYcos,T210);
  lit_215 = YPPsym((P)"tan");
  lit_216 = YPPlist(1,YPPsym((P)"x"));
  T214 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T213 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_215),T214,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtan,T213);
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  T215 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_112 = YPmet(FUNCODEREF(fun_tan_112),LITREF(lit_215),T215,ENVNUL,PNUL,sloc(397));
  T217 = VARREF_OR(YgooSmathYtan,YPfalse);
  T218 = fun_tan_112;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T218);
  VARSET(YgooSmathYtan,T216);
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T219 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_113 = YPmet(FUNCODEREF(fun_tan_113),LITREF(lit_215),T219,ENVNUL,PNUL,sloc(397));
  T221 = VARREF_OR(YgooSmathYtan,YPfalse);
  T222 = fun_tan_113;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T222);
  VARSET(YgooSmathYtan,T220);
  lit_219 = YPPsym((P)"sinh");
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  T224 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T223 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_219),T224,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsinh,T223);
  lit_221 = YPPlist(1,YPPsym((P)"x"));
  T225 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_114 = YPmet(FUNCODEREF(fun_sinh_114),LITREF(lit_219),T225,ENVNUL,PNUL,sloc(398));
  T227 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T228 = fun_sinh_114;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T228);
  VARSET(YgooSmathYsinh,T226);
  lit_222 = YPPlist(1,YPPsym((P)"x"));
  T229 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_115 = YPmet(FUNCODEREF(fun_sinh_115),LITREF(lit_219),T229,ENVNUL,PNUL,sloc(398));
  T231 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T232 = fun_sinh_115;
  T230 = XCALL2(1,VARREF(YPdefine_method),T231,T232);
  VARSET(YgooSmathYsinh,T230);
  lit_223 = YPPsym((P)"cosh");
  lit_224 = YPPlist(1,YPPsym((P)"x"));
  T234 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T233 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_223),T234,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcosh,T233);
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  T237 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  T236 = fun_cosh_116 = YPmet(FUNCODEREF(fun_cosh_116),LITREF(lit_223),T237,ENVNUL,PNUL,sloc(399));
  T240 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T241 = fun_cosh_116;
  T239 = XCALL2(1,VARREF(YPdefine_method),T240,T241);
  T238 = VARSET(YgooSmathYcosh,T239);
  T235 = T238;
  return T235;
}

P YgooSmathY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
DEFCREGS();
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_117 = YPmet(FUNCODEREF(fun_cosh_117),LITREF(lit_223),T0,ENVNUL,PNUL,sloc(399));
  T2 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T3 = fun_cosh_117;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooSmathYcosh,T1);
  lit_227 = YPPsym((P)"tanh");
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_227),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtanh,T4);
  lit_229 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_118 = YPmet(FUNCODEREF(fun_tanh_118),LITREF(lit_227),T6,ENVNUL,PNUL,sloc(400));
  T8 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T9 = fun_tanh_118;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YgooSmathYtanh,T7);
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_119 = YPmet(FUNCODEREF(fun_tanh_119),LITREF(lit_227),T10,ENVNUL,PNUL,sloc(400));
  T12 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T13 = fun_tanh_119;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YgooSmathYtanh,T11);
  lit_231 = YPPsym((P)"asin");
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_231),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYasin,T14);
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  lit_234 = YPsb((P)"SQRT would produce complex number");
  T16 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_120 = YPmet(FUNCODEREF(fun_asin_120),LITREF(lit_231),T16,ENVNUL,PNUL,sloc(401));
  T18 = VARREF_OR(YgooSmathYasin,YPfalse);
  T19 = fun_asin_120;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSmathYasin,T17);
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_121 = YPmet(FUNCODEREF(fun_asin_121),LITREF(lit_231),T20,ENVNUL,PNUL,sloc(401));
  T22 = VARREF_OR(YgooSmathYasin,YPfalse);
  T23 = fun_asin_121;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YgooSmathYasin,T21);
  lit_236 = YPPsym((P)"acos");
  lit_237 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_236),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYacos,T24);
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  lit_239 = YPsb((P)"SQRT would produce complex number");
  T26 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_122 = YPmet(FUNCODEREF(fun_acos_122),LITREF(lit_236),T26,ENVNUL,PNUL,sloc(403));
  T28 = VARREF_OR(YgooSmathYacos,YPfalse);
  T29 = fun_acos_122;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YgooSmathYacos,T27);
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_123 = YPmet(FUNCODEREF(fun_acos_123),LITREF(lit_236),T30,ENVNUL,PNUL,sloc(403));
  T32 = VARREF_OR(YgooSmathYacos,YPfalse);
  T33 = fun_acos_123;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooSmathYacos,T31);
  lit_241 = YPPsym((P)"atan");
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_241),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan,T34);
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_124 = YPmet(FUNCODEREF(fun_atan_124),LITREF(lit_241),T36,ENVNUL,PNUL,sloc(405));
  T38 = VARREF_OR(YgooSmathYatan,YPfalse);
  T39 = fun_atan_124;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YgooSmathYatan,T37);
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_125 = YPmet(FUNCODEREF(fun_atan_125),LITREF(lit_241),T40,ENVNUL,PNUL,sloc(405));
  T42 = VARREF_OR(YgooSmathYatan,YPfalse);
  T43 = fun_atan_125;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YgooSmathYatan,T41);
  lit_245 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T45 = YPsig(LITREF(lit_245),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_67),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan2,T44);
  lit_246 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T46 = YPsig(LITREF(lit_246),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_126 = YPmet(FUNCODEREF(fun_atan2_126),LITREF(lit_67),T46,ENVNUL,PNUL,sloc(408));
  T48 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T49 = fun_atan2_126;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooSmathYatan2,T47);
  lit_247 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_127 = YPmet(FUNCODEREF(fun_atan2_127),LITREF(lit_67),T50,ENVNUL,PNUL,sloc(410));
  T52 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T53 = fun_atan2_127;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooSmathYatan2,T51);
  lit_248 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T55 = YPsig(LITREF(lit_248),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T54 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_69),T55,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlogn,T54);
  lit_249 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T56 = YPsig(LITREF(lit_249),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_128 = YPmet(FUNCODEREF(fun_logn_128),LITREF(lit_69),T56,ENVNUL,PNUL,sloc(414));
  T58 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T59 = fun_logn_128;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooSmathYlogn,T57);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T60 = YPfalse;
  return T60;
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
  {"%vpc", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
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
  {"assert", &module_info_gooSmacros, NULL},
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
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
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
  {"exported", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
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
  {"unless", &module_info_gooSmacros, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
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
  {"rotf", &module_info_gooSmacros, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
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
  {"dlet", &module_info_gooSmacros, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
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
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
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
  {"max", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
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
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
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
  {"for", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
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
  {">", &module_info_gooSmag, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
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
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {"sin", CVAR, &YgooSmathYsin},
  {"eof-object", CVAR, &YgooSmathYeof_object},
  {"~==", CVAR, &YgooSmathYNEE},
  {"-", CVAR, &YgooSmathY_},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"---main-2---", PVAR, NULL},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {"1+", CVAR, &YgooSmathY1A},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"asin", CVAR, &YgooSmathYasin},
  {"to-upper", CVAR, &YgooSmathYto_upper},
  {"round", CVAR, &YgooSmathYround},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"to-str", CVAR, &YgooSmathYto_str},
  {"^", CVAR, &YgooSmathYC},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"pow", CVAR, &YgooSmathYpow},
  {"eof-object?", CVAR, &YgooSmathYeof_objectQ},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"log", CVAR, &YgooSmathYlog},
  {"/", CVAR, &YgooSmathYS},
  {"abs", CVAR, &YgooSmathYabs},
  {"fabs", CVAR, &YgooSmathYfabs},
  {"to-lower", CVAR, &YgooSmathYto_lower},
  {"ceil", CVAR, &YgooSmathYceil},
  {"tan", CVAR, &YgooSmathYtan},
  {"+", CVAR, &YgooSmathYA},
  {"<<", CVAR, &YgooSmathYLL},
  {"digit?", CVAR, &YgooSmathYdigitQ},
  {"|", CVAR, &YgooSmathYK},
  {"tanh", CVAR, &YgooSmathYtanh},
  {"---main-0---", PVAR, NULL},
  {"neg", CVAR, &YgooSmathYneg},
  {"as-log", CVAR, &YgooSmathYas_log},
  {"upper?", CVAR, &YgooSmathYupperQ},
  {"atan", CVAR, &YgooSmathYatan},
  {"floor", CVAR, &YgooSmathYfloor},
  {"rem", CVAR, &YgooSmathYrem},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {"div", CVAR, &YgooSmathYdiv},
  {"*", CVAR, &YgooSmathYT},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"~=", CVAR, &YgooSmathYNE},
  {"$e", CVAR, &YgooSmathYDe},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"alpha?", CVAR, &YgooSmathYalphaQ},
  {"---main-1---", PVAR, NULL},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"moddecf", PVAR, NULL},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"round/", CVAR, &YgooSmathYroundS},
  {">>>", CVAR, &YgooSmathYGGG},
  {"lower?", CVAR, &YgooSmathYlowerQ},
  {"~", CVAR, &YgooSmathYN},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"cos", CVAR, &YgooSmathYcos},
  {"1-", CVAR, &YgooSmathY1_},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"logn", CVAR, &YgooSmathYlogn},
  {"<bot>", CVAR, &YgooSmathYLbotG},
  {"def-unary-trans", PVAR, NULL},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {"acos", CVAR, &YgooSmathYacos},
  {"char->ascii", CVAR, &YgooSmathYchar_Gascii},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"modincf", PVAR, NULL},
  {"address-of", CVAR, &YgooSmathYaddress_of},
  {"mod", CVAR, &YgooSmathYmod},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"&", CVAR, &YgooSmathYB},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {">>", CVAR, &YgooSmathYGG},
  {"=", CVAR, &YgooSmathYE},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"to-digit", CVAR, &YgooSmathYto_digit},
  {"round-to", CVAR, &YgooSmathYround_to},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"flo-bits", NULL},
  {"sin", NULL},
  {"eof-object", NULL},
  {"~==", NULL},
  {"-", NULL},
  {"atan2", NULL},
  {"isqrt", NULL},
  {"sinh", NULL},
  {"1+", NULL},
  {"odd?", NULL},
  {"asin", NULL},
  {"~=", NULL},
  {"to-upper", NULL},
  {"round", NULL},
  {"power-of-two-ceil", NULL},
  {"to-str", NULL},
  {"^", NULL},
  {"$pi", NULL},
  {"pow", NULL},
  {"eof-object?", NULL},
  {"even?", NULL},
  {"mod-", NULL},
  {"log", NULL},
  {"/", NULL},
  {"abs", NULL},
  {"fabs", NULL},
  {"to-lower", NULL},
  {"ceil", NULL},
  {"trunc/", NULL},
  {"tan", NULL},
  {"+", NULL},
  {"num-to-str", NULL},
  {"<<", NULL},
  {"digit?", NULL},
  {"|", NULL},
  {"tanh", NULL},
  {"neg", NULL},
  {"as-log", NULL},
  {"upper?", NULL},
  {"atan", NULL},
  {"floor", NULL},
  {"rem", NULL},
  {"bit?", NULL},
  {"floor/", NULL},
  {"div", NULL},
  {"*", NULL},
  {"max", NULL},
  {"$e", NULL},
  {"sqrt", NULL},
  {"alpha?", NULL},
  {"neg?", NULL},
  {"moddecf", NULL},
  {"mod+", NULL},
  {"round/", NULL},
  {"as", NULL},
  {"min", NULL},
  {">>>", NULL},
  {"lower?", NULL},
  {"~", NULL},
  {"trunc", NULL},
  {"cos", NULL},
  {"1-", NULL},
  {"==", NULL},
  {"cosh", NULL},
  {">=", NULL},
  {"logn", NULL},
  {"<bot>", NULL},
  {"zero?", NULL},
  {"acos", NULL},
  {"char->ascii", NULL},
  {"contagious-call", NULL},
  {"<=", NULL},
  {"modincf", NULL},
  {"address-of", NULL},
  {"mod", NULL},
  {">", NULL},
  {"ceil/", NULL},
  {"<", NULL},
  {"&", NULL},
  {"contagious-type", NULL},
  {">>", NULL},
  {"=", NULL},
  {"pos?", NULL},
  {"to-digit", NULL},
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
