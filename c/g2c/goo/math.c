/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/math");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/math */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOelt,"goo/boot","@elt");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
DEF(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YgooSmathYE,"goo/math","=");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSmathYcosh,"goo/math","cosh");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
DEF(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSclassYPprop,"goo/class","%prop");
DEF(YgooSmathYacos,"goo/math","acos");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YgooSmathYmod,"goo/math","mod");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
DEF(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YgooSmathYB,"goo/math","&");
DEF(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
DEF(YgooSmathYsin,"goo/math","sin");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
DEF(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSmathYN,"goo/math","~");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSmathY_,"goo/math","-");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooSmathYsinh,"goo/math","sinh");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooSmathYasin,"goo/math","asin");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSmathYround,"goo/math","round");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
DEF(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSmathYC,"goo/math","^");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSmathYNE,"goo/math","~=");
DEF(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSmathYevenQ,"goo/math","even?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
DEF(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
DEF(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSmathYlog,"goo/math","log");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSmathYabs,"goo/math","abs");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YOtup,"goo/boot","@tup");
DEF(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YOnew,"goo/boot","@new");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
DEF(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSmathYneg,"goo/math","neg");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
DEF(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_127);
DEFLIT(lit_80);
DEFLIT(lit_60);
DEFLIT(lit_16);
DEFLIT(lit_196);
DEFLIT(lit_42);
DEFLIT(lit_94);
DEFLIT(lit_67);
DEFLIT(lit_203);
DEFLIT(lit_100);
DEFLIT(lit_50);
DEFLIT(lit_215);
DEFLIT(lit_242);
DEFLIT(lit_223);
DEFLIT(lit_10);
DEFLIT(lit_98);
DEFLIT(lit_190);
DEFLIT(lit_175);
DEFLIT(lit_17);
DEFLIT(lit_102);
DEFLIT(lit_173);
DEFLIT(lit_174);
DEFLIT(lit_62);
DEFLIT(lit_209);
DEFLIT(lit_180);
DEFLIT(lit_57);
DEFLIT(lit_187);
DEFLIT(lit_165);
DEFLIT(lit_89);
DEFLIT(lit_154);
DEFLIT(lit_115);
DEFLIT(lit_24);
DEFLIT(lit_166);
DEFLIT(lit_111);
DEFLIT(lit_85);
DEFLIT(lit_119);
DEFLIT(lit_179);
DEFLIT(lit_7);
DEFLIT(lit_136);
DEFLIT(lit_235);
DEFLIT(lit_123);
DEFLIT(lit_231);
DEFLIT(lit_167);
DEFLIT(lit_230);
DEFLIT(lit_228);
DEFLIT(lit_221);
DEFLIT(lit_177);
DEFLIT(lit_36);
DEFLIT(lit_73);
DEFLIT(lit_69);
DEFLIT(lit_134);
DEFLIT(lit_33);
DEFLIT(lit_34);
DEFLIT(lit_248);
DEFLIT(lit_13);
DEFLIT(lit_240);
DEFLIT(lit_171);
DEFLIT(lit_99);
DEFLIT(lit_137);
DEFLIT(lit_229);
DEFLIT(lit_95);
DEFLIT(lit_152);
DEFLIT(lit_129);
DEFLIT(lit_112);
DEFLIT(lit_184);
DEFLIT(lit_144);
DEFLIT(lit_160);
DEFLIT(lit_26);
DEFLIT(lit_11);
DEFLIT(lit_201);
DEFLIT(lit_183);
DEFLIT(lit_117);
DEFLIT(lit_109);
DEFLIT(lit_65);
DEFLIT(lit_207);
DEFLIT(lit_158);
DEFLIT(lit_110);
DEFLIT(lit_155);
DEFLIT(lit_84);
DEFLIT(lit_43);
DEFLIT(lit_70);
DEFLIT(lit_132);
DEFLIT(lit_149);
DEFLIT(lit_232);
DEFLIT(lit_148);
DEFLIT(lit_18);
DEFLIT(lit_246);
DEFLIT(lit_77);
DEFLIT(lit_164);
DEFLIT(lit_199);
DEFLIT(lit_202);
DEFLIT(lit_142);
DEFLIT(lit_198);
DEFLIT(lit_22);
DEFLIT(lit_2);
DEFLIT(lit_101);
DEFLIT(lit_45);
DEFLIT(lit_225);
DEFLIT(lit_40);
DEFLIT(lit_21);
DEFLIT(lit_122);
DEFLIT(lit_107);
DEFLIT(lit_205);
DEFLIT(lit_147);
DEFLIT(lit_27);
DEFLIT(lit_168);
DEFLIT(lit_130);
DEFLIT(lit_38);
DEFLIT(lit_28);
DEFLIT(lit_53);
DEFLIT(lit_195);
DEFLIT(lit_12);
DEFLIT(lit_237);
DEFLIT(lit_227);
DEFLIT(lit_212);
DEFLIT(lit_76);
DEFLIT(lit_106);
DEFLIT(lit_108);
DEFLIT(lit_19);
DEFLIT(lit_233);
DEFLIT(lit_189);
DEFLIT(lit_163);
DEFLIT(lit_143);
DEFLIT(lit_91);
DEFLIT(lit_139);
DEFLIT(lit_55);
DEFLIT(lit_51);
DEFLIT(lit_61);
DEFLIT(lit_52);
DEFLIT(lit_138);
DEFLIT(lit_44);
DEFLIT(lit_116);
DEFLIT(lit_30);
DEFLIT(lit_243);
DEFLIT(lit_113);
DEFLIT(lit_140);
DEFLIT(lit_131);
DEFLIT(lit_226);
DEFLIT(lit_79);
DEFLIT(lit_71);
DEFLIT(lit_241);
DEFLIT(lit_169);
DEFLIT(lit_238);
DEFLIT(lit_32);
DEFLIT(lit_249);
DEFLIT(lit_105);
DEFLIT(lit_239);
DEFLIT(lit_126);
DEFLIT(lit_135);
DEFLIT(lit_216);
DEFLIT(lit_161);
DEFLIT(lit_170);
DEFLIT(lit_211);
DEFLIT(lit_97);
DEFLIT(lit_1);
DEFLIT(lit_159);
DEFLIT(lit_82);
DEFLIT(lit_74);
DEFLIT(lit_39);
DEFLIT(lit_15);
DEFLIT(lit_208);
DEFLIT(lit_9);
DEFLIT(lit_31);
DEFLIT(lit_72);
DEFLIT(lit_188);
DEFLIT(lit_213);
DEFLIT(lit_247);
DEFLIT(lit_103);
DEFLIT(lit_181);
DEFLIT(lit_218);
DEFLIT(lit_114);
DEFLIT(lit_37);
DEFLIT(lit_87);
DEFLIT(lit_48);
DEFLIT(lit_141);
DEFLIT(lit_14);
DEFLIT(lit_86);
DEFLIT(lit_186);
DEFLIT(lit_59);
DEFLIT(lit_192);
DEFLIT(lit_121);
DEFLIT(lit_120);
DEFLIT(lit_220);
DEFLIT(lit_49);
DEFLIT(lit_145);
DEFLIT(lit_35);
DEFLIT(lit_210);
DEFLIT(lit_20);
DEFLIT(lit_3);
DEFLIT(lit_153);
DEFLIT(lit_222);
DEFLIT(lit_125);
DEFLIT(lit_151);
DEFLIT(lit_176);
DEFLIT(lit_4);
DEFLIT(lit_178);
DEFLIT(lit_157);
DEFLIT(lit_150);
DEFLIT(lit_5);
DEFLIT(lit_96);
DEFLIT(lit_104);
DEFLIT(lit_81);
DEFLIT(lit_92);
DEFLIT(lit_194);
DEFLIT(lit_75);
DEFLIT(lit_204);
DEFLIT(lit_29);
DEFLIT(lit_41);
DEFLIT(lit_206);
DEFLIT(lit_193);
DEFLIT(lit_46);
DEFLIT(lit_23);
DEFLIT(lit_78);
DEFLIT(lit_118);
DEFLIT(lit_63);
DEFLIT(lit_25);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_58);
DEFLIT(lit_191);
DEFLIT(lit_90);
DEFLIT(lit_64);
DEFLIT(lit_146);
DEFLIT(lit_182);
DEFLIT(lit_234);
DEFLIT(lit_133);
DEFLIT(lit_156);
DEFLIT(lit_162);
DEFLIT(lit_47);
DEFLIT(lit_83);
DEFLIT(lit_219);
DEFLIT(lit_200);
DEFLIT(lit_66);
DEFLIT(lit_236);
DEFLIT(lit_224);
DEFLIT(lit_54);
DEFLIT(lit_128);
DEFLIT(lit_197);
DEFLIT(lit_93);
DEFLIT(lit_8);
DEFLIT(lit_172);
DEFLIT(lit_217);
DEFLIT(lit_245);
DEFLIT(lit_214);
DEFLIT(lit_56);
DEFLIT(lit_68);
DEFLIT(lit_124);
DEFLIT(lit_185);
DEFLIT(lit_244);
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
LOCFOR(fun_x_2185_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_x_2189_51);
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
LOCFOR(fun_x_2193_101);
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
extern P YgooSmathY___main_3___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_to_str_0) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T2 = CALL1(1,VARREF(Yclass_name),T3);
  T1 = CALL1(1,VARREF(YgooSmathYto_str),T2);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_2),T1,LITREF(lit_3));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYaddress_of) {
  P x_;
  P tF7738;
  P xF7737;
  P xF7736;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF7736 = x_;
  xF7737 = xF7736;
  tF7738 = (P)1;
  T1 = (P)YPiLL(xF7737,(P)2);
  T0 = (P)YPiv(T1,tF7738);
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
  P tF7743;
  P xF7742;
  P xF7741;
  P xF7740;
  P xF7739;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(i_, 1);
  xF7739 = i_;
  xF7740 = xF7739;
  T2 = (P)YPiGG(xF7740,(P)2);
  xF7741 = T2;
  xF7742 = xF7741;
  tF7743 = (P)2;
  T1 = (P)YPiLL(xF7742,(P)2);
  T0 = (P)YPiv(T1,tF7743);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_11) {
  P U_,c_;
  P tF7748;
  P xF7747;
  P xF7746;
  P xF7745;
  P xF7744;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(c_, 1);
  xF7744 = c_;
  xF7745 = xF7744;
  T2 = (P)YPiGG(xF7745,(P)2);
  xF7746 = T2;
  xF7747 = xF7746;
  tF7748 = (P)1;
  T1 = (P)YPiLL(xF7747,(P)2);
  T0 = (P)YPiv(T1,tF7748);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_12) {
  P x_,y_;
  P xF7752;
  P xF7751;
  P xF7750;
  P xF7749;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7749 = x_;
  xF7750 = xF7749;
  T2 = (P)YPiGG(xF7750,(P)2);
  xF7751 = y_;
  xF7752 = xF7751;
  T3 = (P)YPiGG(xF7752,(P)2);
  T1 = (P)YPcL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_13) {
  P x_,y_;
  P xF7756;
  P xF7755;
  P xF7754;
  P xF7753;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7753 = x_;
  xF7754 = xF7753;
  T2 = (P)YPiGG(xF7754,(P)2);
  xF7755 = y_;
  xF7756 = xF7755;
  T3 = (P)YPiGG(xF7756,(P)2);
  T1 = (P)YPcE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lowerQ_14) {
  P x_;
  P codeF7757;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF7757 = T5;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
  T1 = CALL2(1,VARREF(YgooSmagYGE),codeF7757,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)122));
    T3 = CALL2(1,VARREF(YgooSmagYLE),codeF7757,T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_upperQ_15) {
  P x_;
  P codeF7758;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF7758 = T5;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
  T1 = CALL2(1,VARREF(YgooSmagYGE),codeF7758,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)90));
    T3 = CALL2(1,VARREF(YgooSmagYLE),codeF7758,T4);
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
  P tmpF7759;
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
  tmpF7759 = T4;
  if (tmpF7759 != YPfalse) {
    T0 = tmpF7759;
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
  P xF7761;
  P xF7760;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF7760 = x_;
  xF7761 = xF7760;
  T2 = (P)YPiGG(xF7761,(P)2);
  T3 = (P)YPeof_object();
  T1 = (P)YPeqQ(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_object_24) {
  P tF7764;
  P xF7763;
  P xF7762;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YPeof_object();
  xF7762 = T2;
  xF7763 = xF7762;
  tF7764 = (P)2;
  T1 = (P)YPiLL(xF7763,(P)2);
  T0 = (P)YPiv(T1,tF7764);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_25) {
  P f_,x_,y_;
  P typeF7765;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T3 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF7765 = T3;
  T1 = CALL2(1,VARREF(YgooStypesYas),typeF7765,x_);
  T2 = CALL2(1,VARREF(YgooStypesYas),typeF7765,y_);
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
  P fF7766;
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
    fF7766 = T7;
    T6 = CALL2(1,VARREF(YgooSmathYT),x_,fF7766);
    T5 = CALL1(1,VARREF(YgooSmathYround),T6);
    T4 = CALL2(1,VARREF(YgooSmathYS),T5,fF7766);
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
  P remainderF7769;
  P integerF7768;
  P tup56F7767;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup56F7767 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup56F7767,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF7768 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup56F7767,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF7769 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF7769);
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
    T9 = CALL2(1,VARREF(YgooSmathY_),integerF7768,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathYA),remainderF7769,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF7768,remainderF7769);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceilS_41) {
  P real_,divisor_;
  P remainderF7772;
  P integerF7771;
  P tup57F7770;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup57F7770 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup57F7770,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF7771 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup57F7770,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF7772 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF7772);
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
    T9 = CALL2(1,VARREF(YgooSmathYA),integerF7771,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathY_),remainderF7772,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF7771,remainderF7772);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_roundS_42) {
  P real_,divisor_;
  P tmpF7779;
  P minus_thresholdF7778;
  P tmpF7777;
  P thresholdF7776;
  P remainderF7775;
  P integerF7774;
  P tup58F7773;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T34 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup58F7773 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup58F7773,YPint((P)0));
  check_type(T33,VARREF(YLintG));
  integerF7774 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup58F7773,YPint((P)1));
  check_type(T32,VARREF(YLnumG));
  remainderF7775 = T32;
  T31 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T30 = CALL2(1,VARREF(YgooSmathYS),T31,LITREF(lit_88));
  check_type(T30,VARREF(YLnumG));
  thresholdF7776 = T30;
  T5 = CALL2(1,VARREF(YgooSmagYG),remainderF7775,thresholdF7776);
  tmpF7777 = T5;
  if (tmpF7777 != YPfalse) {
    T1 = tmpF7777;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),remainderF7775,thresholdF7776);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmathYoddQ),integerF7774);
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T7 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathY_),integerF7774,YPint((P)1));
      T10 = CALL2(1,VARREF(YgooSmathYA),remainderF7775,divisor_);
      T8 = CALL2(1,VARREF(Ytup),T9,T10);
      T6 = T8;
    } else {
      T12 = CALL2(1,VARREF(YgooSmathYA),integerF7774,YPint((P)1));
      T13 = CALL2(1,VARREF(YgooSmathY_),remainderF7775,divisor_);
      T11 = CALL2(1,VARREF(Ytup),T12,T13);
      T6 = T11;
    }
    T0 = T6;
  } else {
    T20 = CALL1(1,VARREF(YgooSmathYneg),thresholdF7776);
    minus_thresholdF7778 = T20;
    T19 = CALL2(1,VARREF(YgooSmagYL),remainderF7775,minus_thresholdF7778);
    tmpF7779 = T19;
    if (tmpF7779 != YPfalse) {
      T15 = tmpF7779;
    } else {
      T17 = CALL2(1,VARREF(YgooSmathYE),remainderF7775,minus_thresholdF7778);
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YgooSmathYoddQ),integerF7774);
        T16 = T18;
      } else {
        T16 = YPfalse;
      }
      T15 = T16;
    }
    if (T15 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
      if (T22 != YPfalse) {
        T24 = CALL2(1,VARREF(YgooSmathYA),integerF7774,YPint((P)1));
        T25 = CALL2(1,VARREF(YgooSmathY_),remainderF7775,divisor_);
        T23 = CALL2(1,VARREF(Ytup),T24,T25);
        T21 = T23;
      } else {
        T27 = CALL2(1,VARREF(YgooSmathY_),integerF7774,YPint((P)1));
        T28 = CALL2(1,VARREF(YgooSmathYA),remainderF7775,divisor_);
        T26 = CALL2(1,VARREF(Ytup),T27,T28);
        T21 = T26;
      }
      T14 = T21;
    } else {
      T29 = CALL2(1,VARREF(Ytup),integerF7774,remainderF7775);
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
  P xF7781;
  P xF7780;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  xF7780 = YPint((P)0);
  xF7781 = xF7780;
  T2 = (P)YPiGG(xF7781,(P)2);
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_45) {
  P real_,divisor_;
  P remainderF7784;
  P UF7783;
  P tup59F7782;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup59F7782 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup59F7782,YPint((P)0));
  UF7783 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup59F7782,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF7784 = T0;
UNLINK_STACK();
  RET(remainderF7784);
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

FUNCODEDEF(fun_x_2185_48) {
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
  P x_2184F7793;
  P x_2184F7792;
  P x_2184F7791;
  P x_2184F7790;
  P x_2184F7789;
  P maxF7788;
  P placeF7787;
  P x_2184F7786;
  P x_2185F7785;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_2185_48,2);
  x_2185F7785 = T24;
  FUNINIT(x_2185F7785, 2,FREEREF(0),return_);
  x_2184F7786 = FREEREF(0);
  placeF7787 = YPfalse;
  maxF7788 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2184F7786,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2184F7786,LITREF(lit_103),x_2185F7785);
    x_2184F7789 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2184F7789,x_2185F7785);
    placeF7787 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2184F7789);
    x_2184F7790 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2184F7790,x_2185F7785);
    maxF7788 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2184F7790);
    x_2184F7791 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2184F7791,x_2185F7785);
    x_2184F7792 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2184F7792,x_2185F7785);
    T6 = CALL1(1,VARREF(Ytail),x_2184F7791);
    x_2184F7793 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2184F7793,x_2185F7785);
  } else {
    T12 = CALL2(1,x_2185F7785,LITREF(lit_104),x_2184F7786);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = placeF7787;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = maxF7788;
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

FUNCODEDEF(fun_x_2189_51) {
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
  P x_2188F7802;
  P x_2188F7801;
  P x_2188F7800;
  P x_2188F7799;
  P x_2188F7798;
  P maxF7797;
  P placeF7796;
  P x_2188F7795;
  P x_2189F7794;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_2189_51,2);
  x_2189F7794 = T24;
  FUNINIT(x_2189F7794, 2,FREEREF(0),return_);
  x_2188F7795 = FREEREF(0);
  placeF7796 = YPfalse;
  maxF7797 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2188F7795,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2188F7795,LITREF(lit_112),x_2189F7794);
    x_2188F7798 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2188F7798,x_2189F7794);
    placeF7796 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2188F7798);
    x_2188F7799 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2188F7799,x_2189F7794);
    maxF7797 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2188F7799);
    x_2188F7800 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2188F7800,x_2189F7794);
    x_2188F7801 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2188F7801,x_2189F7794);
    T6 = CALL1(1,VARREF(Ytail),x_2188F7800);
    x_2188F7802 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2188F7802,x_2189F7794);
  } else {
    T12 = CALL2(1,x_2189F7794,LITREF(lit_104),x_2188F7795);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = placeF7796;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = maxF7797;
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
  P remainderF7805;
  P UF7804;
  P tup60F7803;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup60F7803 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup60F7803,YPint((P)0));
  UF7804 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup60F7803,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF7805 = T0;
UNLINK_STACK();
  RET(remainderF7805);
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
  P xF7809;
  P xF7808;
  P xF7807;
  P xF7806;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7806 = x_;
  xF7807 = xF7806;
  T2 = (P)YPiGG(xF7807,(P)2);
  xF7808 = y_;
  xF7809 = xF7808;
  T3 = (P)YPiGG(xF7809,(P)2);
  T1 = (P)YPiE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_67) {
  P x_,y_;
  P xF7813;
  P xF7812;
  P xF7811;
  P xF7810;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7810 = x_;
  xF7811 = xF7810;
  T2 = (P)YPiGG(xF7811,(P)2);
  xF7812 = y_;
  xF7813 = xF7812;
  T3 = (P)YPiGG(xF7813,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_68) {
  P x_,y_;
  P tF7820;
  P xF7819;
  P xF7818;
  P xF7817;
  P xF7816;
  P xF7815;
  P xF7814;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7814 = x_;
  xF7815 = xF7814;
  T3 = (P)YPiGG(xF7815,(P)2);
  xF7816 = y_;
  xF7817 = xF7816;
  T4 = (P)YPiGG(xF7817,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF7818 = T2;
  xF7819 = xF7818;
  tF7820 = (P)1;
  T1 = (P)YPiLL(xF7819,(P)2);
  T0 = (P)YPiv(T1,tF7820);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___69) {
  P x_,y_;
  P tF7827;
  P xF7826;
  P xF7825;
  P xF7824;
  P xF7823;
  P xF7822;
  P xF7821;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7821 = x_;
  xF7822 = xF7821;
  T3 = (P)YPiGG(xF7822,(P)2);
  xF7823 = y_;
  xF7824 = xF7823;
  T4 = (P)YPiGG(xF7824,(P)2);
  T2 = (P)YPi_(T3,T4);
  xF7825 = T2;
  xF7826 = xF7825;
  tF7827 = (P)1;
  T1 = (P)YPiLL(xF7826,(P)2);
  T0 = (P)YPiv(T1,tF7827);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_70) {
  P x_,y_;
  P tF7834;
  P xF7833;
  P xF7832;
  P xF7831;
  P xF7830;
  P xF7829;
  P xF7828;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7828 = x_;
  xF7829 = xF7828;
  T3 = (P)YPiGG(xF7829,(P)2);
  xF7830 = y_;
  xF7831 = xF7830;
  T4 = (P)YPiGG(xF7831,(P)2);
  T2 = (P)YPiT(T3,T4);
  xF7832 = T2;
  xF7833 = xF7832;
  tF7834 = (P)1;
  T1 = (P)YPiLL(xF7833,(P)2);
  T0 = (P)YPiv(T1,tF7834);
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
  P resultF7842;
  P tF7841;
  P xF7840;
  P xF7839;
  P xF7838;
  P xF7837;
  P xF7836;
  P xF7835;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7835 = x_;
  xF7836 = xF7835;
  T6 = (P)YPiGG(xF7836,(P)2);
  xF7837 = y_;
  xF7838 = xF7837;
  T7 = (P)YPiGG(xF7838,(P)2);
  T5 = (P)YPitS(T6,T7);
  xF7839 = T5;
  xF7840 = xF7839;
  tF7841 = (P)1;
  T4 = (P)YPiLL(xF7840,(P)2);
  T3 = (P)YPiv(T4,tF7841);
  resultF7842 = T3;
  T2 = CALL2(1,VARREF(YgooSmathYT),resultF7842,y_);
  T1 = CALL2(1,VARREF(YgooSmathY_),x_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF7842,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_77) {
  P x_,y_;
  P resF7850;
  P tF7849;
  P xF7848;
  P xF7847;
  P xF7846;
  P xF7845;
  P xF7844;
  P xF7843;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7843 = x_;
  xF7844 = xF7843;
  T9 = (P)YPiGG(xF7844,(P)2);
  xF7845 = y_;
  xF7846 = xF7845;
  T10 = (P)YPiGG(xF7846,(P)2);
  T8 = (P)YPim(T9,T10);
  xF7847 = T8;
  xF7848 = xF7847;
  tF7849 = (P)1;
  T7 = (P)YPiLL(xF7848,(P)2);
  T6 = (P)YPiv(T7,tF7849);
  resF7850 = T6;
  T1 = CALL2(1,VARREF(YgooSmagYL),resF7850,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T3 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmathYA),resF7850,y_);
      T2 = T4;
    } else {
      T5 = CALL2(1,VARREF(YgooSmathY_),resF7850,y_);
      T2 = T5;
    }
    T0 = T2;
  } else {
    T0 = resF7850;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_78) {
  P x_,n_;
  P yF7853;
  P pF7852;
  P xF7851;
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
          xF7851 = T28;
          T31 = CALL2(1,VARREF(YgooSmathYGG),n_,YPint((P)1));
          check_type(T31,VARREF(YLintG));
          pF7852 = T31;
          T33 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
          if (T33 != YPfalse) {
            T32 = x_;
          } else {
            T32 = YPint((P)1);
          }
          check_type(T32,VARREF(YLintG));
          yF7853 = T32;
          LOOP_301: {
            P a301_0,a301_1,a301_2;
            T19 = CALL1(1,VARREF(YgooSmathYzeroQ),pF7852);
            if (T19 != YPfalse) {
              T18 = yF7853;
            } else {
              T22 = CALL2(1,VARREF(YgooSmagYG),pF7852,YPint((P)1));
              if (T22 != YPfalse) {
                T23 = CALL2(1,VARREF(YgooSmathYT),xF7851,xF7851);
                T21 = T23;
              } else {
                T21 = xF7851;
              }
              T24 = CALL2(1,VARREF(YgooSmathYGG),pF7852,YPint((P)1));
              T26 = CALL1(1,VARREF(YgooSmathYoddQ),pF7852);
              if (T26 != YPfalse) {
                T27 = CALL2(1,VARREF(YgooSmathYT),xF7851,yF7853);
                T25 = T27;
              } else {
                T25 = yF7853;
              }
              a301_0 = T21;
              a301_1 = T24;
              a301_2 = T25;
              xF7851 = a301_0;
              pF7852 = a301_1;
              yF7853 = a301_2;
              goto LOOP_301;
              T18 = T20;
            }
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
  P tF7860;
  P xF7859;
  P xF7858;
  P xF7857;
  P xF7856;
  P xF7855;
  P xF7854;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7854 = x_;
  xF7855 = xF7854;
  T3 = (P)YPiGG(xF7855,(P)2);
  xF7856 = y_;
  xF7857 = xF7856;
  T4 = (P)YPiGG(xF7857,(P)2);
  T2 = (P)YPiv(T3,T4);
  xF7858 = T2;
  xF7859 = xF7858;
  tF7860 = (P)1;
  T1 = (P)YPiLL(xF7859,(P)2);
  T0 = (P)YPiv(T1,tF7860);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_C_80) {
  P x_,y_;
  P tF7867;
  P xF7866;
  P xF7865;
  P xF7864;
  P xF7863;
  P xF7862;
  P xF7861;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7861 = x_;
  xF7862 = xF7861;
  T3 = (P)YPiGG(xF7862,(P)2);
  xF7863 = y_;
  xF7864 = xF7863;
  T4 = (P)YPiGG(xF7864,(P)2);
  T2 = (P)YPiC(T3,T4);
  xF7865 = T2;
  xF7866 = xF7865;
  tF7867 = (P)1;
  T1 = (P)YPiLL(xF7866,(P)2);
  T0 = (P)YPiv(T1,tF7867);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_B_81) {
  P x_,y_;
  P tF7874;
  P xF7873;
  P xF7872;
  P xF7871;
  P xF7870;
  P xF7869;
  P xF7868;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF7868 = x_;
  xF7869 = xF7868;
  T3 = (P)YPiGG(xF7869,(P)2);
  xF7870 = y_;
  xF7871 = xF7870;
  T4 = (P)YPiGG(xF7871,(P)2);
  T2 = (P)YPiB(T3,T4);
  xF7872 = T2;
  xF7873 = xF7872;
  tF7874 = (P)1;
  T1 = (P)YPiLL(xF7873,(P)2);
  T0 = (P)YPiv(T1,tF7874);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_N_82) {
  P x_;
  P tF7879;
  P xF7878;
  P xF7877;
  P xF7876;
  P xF7875;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF7875 = x_;
  xF7876 = xF7875;
  T3 = (P)YPiGG(xF7876,(P)2);
  T2 = (P)YPiX(T3);
  xF7877 = T2;
  xF7878 = xF7877;
  tF7879 = (P)1;
  T1 = (P)YPiLL(xF7878,(P)2);
  T0 = (P)YPiv(T1,tF7879);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bitQ_83) {
  P o_,x_;
  P tF7886;
  P xF7885;
  P xF7884;
  P xF7883;
  P xF7882;
  P xF7881;
  P xF7880;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
  xF7880 = o_;
  xF7881 = xF7880;
  T3 = (P)YPiGG(xF7881,(P)2);
  xF7882 = x_;
  xF7883 = xF7882;
  T4 = (P)YPiGG(xF7883,(P)2);
  T2 = (P)YPiQ(T3,T4);
  xF7884 = T2;
  xF7885 = xF7884;
  tF7886 = (P)1;
  T1 = (P)YPiLL(xF7885,(P)2);
  T0 = (P)YPiv(T1,tF7886);
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
  P tF7893;
  P xF7892;
  P xF7891;
  P xF7890;
  P xF7889;
  P xF7888;
  P xF7887;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF7887 = x_;
  xF7888 = xF7887;
  T3 = (P)YPiGG(xF7888,(P)2);
  xF7889 = a_;
  xF7890 = xF7889;
  T4 = (P)YPiGG(xF7890,(P)2);
  T2 = (P)YPiGG(T3,T4);
  xF7891 = T2;
  xF7892 = xF7891;
  tF7893 = (P)1;
  T1 = (P)YPiLL(xF7892,(P)2);
  T0 = (P)YPiv(T1,tF7893);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GGG_87) {
  P x_,a_;
  P tF7900;
  P xF7899;
  P xF7898;
  P xF7897;
  P xF7896;
  P xF7895;
  P xF7894;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF7894 = x_;
  xF7895 = xF7894;
  T3 = (P)YPiGG(xF7895,(P)2);
  xF7896 = a_;
  xF7897 = xF7896;
  T4 = (P)YPiGG(xF7897,(P)2);
  T2 = (P)YPiGGG(T3,T4);
  xF7898 = T2;
  xF7899 = xF7898;
  tF7900 = (P)1;
  T1 = (P)YPiLL(xF7899,(P)2);
  T0 = (P)YPiv(T1,tF7900);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LL_88) {
  P x_,a_;
  P tF7907;
  P xF7906;
  P xF7905;
  P xF7904;
  P xF7903;
  P xF7902;
  P xF7901;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF7901 = x_;
  xF7902 = xF7901;
  T3 = (P)YPiGG(xF7902,(P)2);
  xF7903 = a_;
  xF7904 = xF7903;
  T4 = (P)YPiGG(xF7904,(P)2);
  T2 = (P)YPiLL(T3,T4);
  xF7905 = T2;
  xF7906 = xF7905;
  tF7907 = (P)1;
  T1 = (P)YPiLL(xF7906,(P)2);
  T0 = (P)YPiv(T1,tF7907);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_power_of_two_ceil_89) {
  P x_;
  P po2F7908;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)1),VARREF(YLintG));
  po2F7908 = YPint((P)1);
  LOOP_302: {
    P a302_0;
    T1 = CALL2(1,VARREF(YgooSmagYG),po2F7908,x_);
    if (T1 != YPfalse) {
      T0 = po2F7908;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),po2F7908,po2F7908);
      a302_0 = T3;
      po2F7908 = a302_0;
      goto LOOP_302;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P tF7911;
  P xF7910;
  P xF7909;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = (P)YPfu(x_);
  T2 = (P)YgooSmathYPflo_bits(T3);
  xF7909 = T2;
  xF7910 = xF7909;
  tF7911 = (P)1;
  T1 = (P)YPiLL(xF7910,(P)2);
  T0 = (P)YPiv(T1,tF7911);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_91) {
  P U_,x_;
  P xF7913;
  P xF7912;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
  xF7912 = x_;
  xF7913 = xF7912;
  T2 = (P)YPiGG(xF7913,(P)2);
  T1 = (P)YgooSmathYPfi2f(T2);
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
  T1 = (P)YgooSmathYPfE(T2,T3);
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
  T1 = (P)YgooSmathYPfL(T2,T3);
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
  T1 = (P)YgooSmathYPfA(T2,T3);
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
  T1 = (P)YgooSmathYPf_(T2,T3);
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
  T1 = (P)YgooSmathYPfT(T2,T3);
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
  T1 = (P)YgooSmathYPfS(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncS_98) {
  P x_,y_;
  P resultF7918;
  P tF7917;
  P xF7916;
  P xF7915;
  P dividedF7914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T8 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF7914 = T8;
  T7 = (P)YPfu(dividedF7914);
  T6 = (P)YgooSmathYPft(T7);
  xF7915 = T6;
  xF7916 = xF7915;
  tF7917 = (P)1;
  T5 = (P)YPiLL(xF7916,(P)2);
  T4 = (P)YPiv(T5,tF7917);
  resultF7918 = T4;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF7918);
  T2 = CALL2(1,VARREF(YgooSmathY_),dividedF7914,T3);
  T1 = CALL2(1,VARREF(YgooSmathYT),y_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF7918,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_99) {
  P x_,n_;
  P resF7919;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T8 = CALL1(1,VARREF(YgooSmathYabs),x_);
  T7 = (P)YPfu(T8);
  T9 = (P)YPfu(n_);
  T6 = (P)YgooSmathYPfpow(T7,T9);
  T5 = (P)YPfb(T6);
  resF7919 = T5;
  T2 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),resF7919);
    T0 = T4;
  } else {
    T0 = resF7919;
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

FUNCODEDEF(fun_x_2193_101) {
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
  P PfpF7935;
  P x_2192F7934;
  P x_2192F7933;
  P x_2192F7932;
  P x_2192F7931;
  P x_2192F7930;
  P x_2192F7929;
  P x_2192F7928;
  P x_2192F7927;
  P x_2192F7926;
  P x_2192F7925;
  P prefixF7924;
  P paramF7923;
  P nameF7922;
  P x_2192F7921;
  P x_2193F7920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89;
LINK_STACK();
  ARG(return_, 0);
  T89 = FUNSHELL(0,fun_x_2193_101,2);
  x_2193F7920 = T89;
  FUNINIT(x_2193F7920, 2,FREEREF(0),return_);
  x_2192F7921 = FREEREF(0);
  nameF7922 = YPfalse;
  paramF7923 = YPfalse;
  prefixF7924 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2192F7921,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2192F7921,LITREF(lit_187),x_2193F7920);
    x_2192F7925 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2192F7925,x_2193F7920);
    nameF7922 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_2192F7925);
    x_2192F7926 = T17;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2192F7926,x_2193F7920);
    x_2192F7927 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2192F7927,x_2193F7920);
    paramF7923 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2192F7927);
    x_2192F7928 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2192F7928,x_2193F7920);
    x_2192F7929 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2192F7929,x_2193F7920);
    T11 = CALL1(1,VARREF(Ytail),x_2192F7928);
    x_2192F7930 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2192F7930,x_2193F7920);
    T15 = CALL1(1,VARREF(Ytail),x_2192F7926);
    x_2192F7931 = T15;
    prefixF7924 = x_2192F7931;
    x_2192F7932 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2192F7932,x_2193F7920);
    x_2192F7933 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2192F7933,x_2193F7920);
    T7 = CALL1(1,VARREF(Ytail),x_2192F7932);
    x_2192F7934 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2192F7934,x_2193F7920);
  } else {
    T19 = CALL2(1,x_2193F7920,LITREF(lit_104),x_2192F7921);
  }
  T88 = nameF7922;
  T87 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_188),T88);
  PfpF7935 = T87;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_189));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T26 = nameF7922;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = paramF7923;
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
  T40 = nameF7922;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T46 = paramF7923;
  T45 = CALL1(1,VARREF(Ylst),T46);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T47,LITREF(lit_107));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T48,T49,LITREF(lit_107));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T50 = prefixF7924;
  T54 = nameF7922;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T60 = paramF7923;
  T59 = CALL1(1,VARREF(Ylst),T60);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_107));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T52 = CALL3(1,VARREF(YgooSmacrosYcat),T53,T55,LITREF(lit_107));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),6,T38,T39,T41,T50,T51,LITREF(lit_107));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T65 = nameF7922;
  T64 = CALL1(1,VARREF(Ylst),T65);
  T71 = paramF7923;
  T70 = CALL1(1,VARREF(Ylst),T71);
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T72,LITREF(lit_107));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_195));
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T73,T74,LITREF(lit_107));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T75 = prefixF7924;
  T78 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T81 = CALL1(1,VARREF(Ylst),PfpF7935);
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T86 = paramF7923;
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
  T3 = (P)YgooSmathYPfsqrt(T4);
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
  T1 = (P)YgooSmathYPflog(T2);
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
  T1 = (P)YgooSmathYPfsin(T2);
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
  T1 = (P)YgooSmathYPfcos(T2);
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
  T1 = (P)YgooSmathYPftan(T2);
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
  T1 = (P)YgooSmathYPfsinh(T2);
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
  T1 = (P)YgooSmathYPfcosh(T2);
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
  T1 = (P)YgooSmathYPftanh(T2);
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
  T3 = (P)YgooSmathYPfasin(T4);
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
  T3 = (P)YgooSmathYPfacos(T4);
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
  T1 = (P)YgooSmathYPfatan(T2);
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
  T1 = (P)YgooSmathYPfatan2(T2,T3);
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
  T1 = (P)YgooSmathYPfatan2(T2,T3);
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
  P T160,T161,T162,T163,T164,T165,T166,T167;
DEFCREGS();
  lit_0 = YPPsym((P)"to-str");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  lit_2 = YPsb((P)"{ obj(");
  lit_3 = YPsb((P)") }");
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_0 = YPmet(FUNCODEREF(fun_to_str_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(11));
  T2 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T3 = fun_to_str_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmathYto_str,T1);
  lit_4 = YPPsym((P)"address-of");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YgooSmathYaddress_of = YPmet(FUNCODEREF(YgooSmathYaddress_of),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(14));
  T5 = YgooSmathYaddress_of;
  VARSET(YgooSmathYaddress_of,T5);
  lit_6 = YPPsym((P)"<bot>");
  T7 = (P)YPpair(VARREF(YLanyG),Ynil);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_6),T7);
  VARSET(YgooSmathYLbotG,T6);
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  lit_8 = YPsb((P)"#t");
  T9 = XCALL1(1,VARREF(YgooStypesYtE),YPtrue);
  T8 = YPsig(LITREF(lit_7),YPPlist(1,T9),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_2 = YPmet(FUNCODEREF(fun_to_str_2),LITREF(lit_0),T8,ENVNUL,PNUL,sloc(24));
  T11 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T12 = fun_to_str_2;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooSmathYto_str,T10);
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  lit_10 = YPsb((P)"#f");
  T14 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T13 = YPsig(LITREF(lit_9),YPPlist(1,T14),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_3 = YPmet(FUNCODEREF(fun_to_str_3),LITREF(lit_0),T13,ENVNUL,PNUL,sloc(25));
  T16 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T17 = fun_to_str_3;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSmathYto_str,T15);
  lit_11 = YPPsym((P)"as");
  lit_12 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T19 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYas,T18);
  lit_13 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_4 = YPmet(FUNCODEREF(fun_as_4),LITREF(lit_11),T20,ENVNUL,PNUL,sloc(29));
  T22 = VARREF_OR(YgooStypesYas,YPfalse);
  T23 = fun_as_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooStypesYas,T21);
  lit_14 = YPPsym((P)"as-log");
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSmathYas_log = YPmet(FUNCODEREF(YgooSmathYas_log),LITREF(lit_14),T24,ENVNUL,PNUL,sloc(34));
  T25 = YgooSmathYas_log;
  VARSET(YgooSmathYas_log,T25);
  lit_16 = YPPsym((P)"==");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T26 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_6 = YPmet(FUNCODEREF(fun_EE_6),LITREF(lit_16),T26,ENVNUL,PNUL,sloc(36));
  T28 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T29 = fun_EE_6;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSmacrosYEE,T27);
  lit_18 = YPPsym((P)"=");
  lit_19 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T30 = YPsig(LITREF(lit_19),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_7 = YPmet(FUNCODEREF(fun_E_7),LITREF(lit_18),T30,ENVNUL,PNUL,sloc(38));
  T32 = VARREF_OR(YgooSmathYE,YPfalse);
  T33 = fun_E_7;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSmathYE,T31);
  lit_20 = YPPsym((P)"~=");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NE_8 = YPmet(FUNCODEREF(fun_NE_8),LITREF(lit_20),T34,ENVNUL,PNUL,sloc(40));
  T36 = VARREF_OR(YgooSmathYNE,YPfalse);
  T37 = fun_NE_8;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSmathYNE,T35);
  lit_22 = YPPsym((P)"~==");
  lit_23 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T38 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NEE_9 = YPmet(FUNCODEREF(fun_NEE_9),LITREF(lit_22),T38,ENVNUL,PNUL,sloc(43));
  T40 = VARREF_OR(YgooSmathYNEE,YPfalse);
  T41 = fun_NEE_9;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmathYNEE,T39);
  lit_24 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"i"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLchrG));
  T42 = YPsig(LITREF(lit_24),YPPlist(2,T43,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_as_10 = YPmet(FUNCODEREF(fun_as_10),LITREF(lit_11),T42,ENVNUL,PNUL,sloc(48));
  T45 = VARREF_OR(YgooStypesYas,YPfalse);
  T46 = fun_as_10;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooStypesYas,T44);
  lit_25 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"c"));
  T48 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T47 = YPsig(LITREF(lit_25),YPPlist(2,T48,VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_as_11 = YPmet(FUNCODEREF(fun_as_11),LITREF(lit_11),T47,ENVNUL,PNUL,sloc(51));
  T50 = VARREF_OR(YgooStypesYas,YPfalse);
  T51 = fun_as_11;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooStypesYas,T49);
  lit_26 = YPPsym((P)"<");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T52 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_12 = YPmet(FUNCODEREF(fun_L_12),LITREF(lit_26),T52,ENVNUL,PNUL,sloc(54));
  T54 = VARREF_OR(YgooSmagYL,YPfalse);
  T55 = fun_L_12;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmagYL,T53);
  lit_28 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T56 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_13 = YPmet(FUNCODEREF(fun_EE_13),LITREF(lit_16),T56,ENVNUL,PNUL,sloc(57));
  T58 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T59 = fun_EE_13;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSmacrosYEE,T57);
  lit_29 = YPPsym((P)"lower?");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_lowerQ_14 = YPmet(FUNCODEREF(fun_lowerQ_14),LITREF(lit_29),T60,ENVNUL,PNUL,sloc(60));
  T62 = VARREF_OR(YgooSmathYlowerQ,YPfalse);
  T63 = fun_lowerQ_14;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYlowerQ,T61);
  lit_31 = YPPsym((P)"upper?");
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_upperQ_15 = YPmet(FUNCODEREF(fun_upperQ_15),LITREF(lit_31),T64,ENVNUL,PNUL,sloc(66));
  T66 = VARREF_OR(YgooSmathYupperQ,YPfalse);
  T67 = fun_upperQ_15;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYupperQ,T65);
  lit_33 = YPPsym((P)"to-lower");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_lower_16 = YPmet(FUNCODEREF(fun_to_lower_16),LITREF(lit_33),T68,ENVNUL,PNUL,sloc(72));
  T70 = VARREF_OR(YgooSmathYto_lower,YPfalse);
  T71 = fun_to_lower_16;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSmathYto_lower,T69);
  lit_35 = YPPsym((P)"to-upper");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_upper_17 = YPmet(FUNCODEREF(fun_to_upper_17),LITREF(lit_35),T72,ENVNUL,PNUL,sloc(77));
  T74 = VARREF_OR(YgooSmathYto_upper,YPfalse);
  T75 = fun_to_upper_17;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSmathYto_upper,T73);
  lit_37 = YPPsym((P)"to-digit");
  lit_38 = YPPlist(1,YPPsym((P)"digit"));
  T76 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_to_digit_18 = YPmet(FUNCODEREF(fun_to_digit_18),LITREF(lit_37),T76,ENVNUL,PNUL,sloc(82));
  T78 = VARREF_OR(YgooSmathYto_digit,YPfalse);
  T79 = fun_to_digit_18;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSmathYto_digit,T77);
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_19 = YPmet(FUNCODEREF(fun_to_str_19),LITREF(lit_0),T80,ENVNUL,PNUL,sloc(85));
  T82 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T83 = fun_to_str_19;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathYto_str,T81);
  lit_40 = YPPsym((P)"alpha?");
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_alphaQ_20 = YPmet(FUNCODEREF(fun_alphaQ_20),LITREF(lit_40),T84,ENVNUL,PNUL,sloc(88));
  T86 = VARREF_OR(YgooSmathYalphaQ,YPfalse);
  T87 = fun_alphaQ_20;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYalphaQ,T85);
  lit_42 = YPPsym((P)"digit?");
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_digitQ_21 = YPmet(FUNCODEREF(fun_digitQ_21),LITREF(lit_42),T88,ENVNUL,PNUL,sloc(92));
  T90 = VARREF_OR(YgooSmathYdigitQ,YPfalse);
  T91 = fun_digitQ_21;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSmathYdigitQ,T89);
  lit_44 = YPPsym((P)"eof-object?");
  lit_45 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_22 = YPmet(FUNCODEREF(fun_eof_objectQ_22),LITREF(lit_44),T92,ENVNUL,PNUL,sloc(95));
  T94 = VARREF_OR(YgooSmathYeof_objectQ,YPfalse);
  T95 = fun_eof_objectQ_22;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSmathYeof_objectQ,T93);
  lit_46 = YPPlist(1,YPPsym((P)"x"));
  T96 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_23 = YPmet(FUNCODEREF(fun_eof_objectQ_23),LITREF(lit_44),T96,ENVNUL,PNUL,sloc(98));
  T98 = VARREF_OR(YgooSmathYeof_objectQ,YPfalse);
  T99 = fun_eof_objectQ_23;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSmathYeof_objectQ,T97);
  lit_47 = YPPsym((P)"eof-object");
  lit_48 = Ynil;
  T100 = YPsig(LITREF(lit_48),Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  fun_eof_object_24 = YPmet(FUNCODEREF(fun_eof_object_24),LITREF(lit_47),T100,ENVNUL,PNUL,sloc(101));
  T102 = VARREF_OR(YgooSmathYeof_object,YPfalse);
  T103 = fun_eof_object_24;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
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
  fun_contagious_call_25 = YPmet(FUNCODEREF(fun_contagious_call_25),LITREF(lit_51),T109,ENVNUL,PNUL,sloc(110));
  T111 = VARREF_OR(YgooSmathYcontagious_call,YPfalse);
  T112 = fun_contagious_call_25;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YgooSmathYcontagious_call,T110);
  lit_54 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T113 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_26 = YPmet(FUNCODEREF(fun_L_26),LITREF(lit_26),T113,ENVNUL,PNUL,sloc(114));
  T115 = VARREF_OR(YgooSmagYL,YPfalse);
  T116 = fun_L_26;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YgooSmagYL,T114);
  lit_55 = YPPsym((P)"+");
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T117 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_27 = YPmet(FUNCODEREF(fun_A_27),LITREF(lit_55),T117,ENVNUL,PNUL,sloc(117));
  T119 = VARREF_OR(YgooSmathYA,YPfalse);
  T120 = fun_A_27;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooSmathYA,T118);
  lit_57 = YPPsym((P)"1+");
  lit_58 = YPPlist(1,YPPsym((P)"x"));
  T121 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1A_28 = YPmet(FUNCODEREF(fun_1A_28),LITREF(lit_57),T121,ENVNUL,PNUL,sloc(120));
  T123 = VARREF_OR(YgooSmathY1A,YPfalse);
  T124 = fun_1A_28;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooSmathY1A,T122);
  lit_59 = YPPsym((P)"-");
  lit_60 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T125 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___29 = YPmet(FUNCODEREF(fun___29),LITREF(lit_59),T125,ENVNUL,PNUL,sloc(123));
  T127 = VARREF_OR(YgooSmathY_,YPfalse);
  T128 = fun___29;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YgooSmathY_,T126);
  lit_61 = YPPsym((P)"1-");
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1__30 = YPmet(FUNCODEREF(fun_1__30),LITREF(lit_61),T129,ENVNUL,PNUL,sloc(126));
  T131 = VARREF_OR(YgooSmathY1_,YPfalse);
  T132 = fun_1__30;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YgooSmathY1_,T130);
  lit_63 = YPPsym((P)"*");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T133 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_31 = YPmet(FUNCODEREF(fun_T_31),LITREF(lit_63),T133,ENVNUL,PNUL,sloc(129));
  T135 = VARREF_OR(YgooSmathYT,YPfalse);
  T136 = fun_T_31;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YgooSmathYT,T134);
  lit_65 = YPPsym((P)"/");
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T137 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_S_32 = YPmet(FUNCODEREF(fun_S_32),LITREF(lit_65),T137,ENVNUL,PNUL,sloc(132));
  T139 = VARREF_OR(YgooSmathYS,YPfalse);
  T140 = fun_S_32;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YgooSmathYS,T138);
  lit_67 = YPPsym((P)"atan2");
  lit_68 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T141 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_33 = YPmet(FUNCODEREF(fun_atan2_33),LITREF(lit_67),T141,ENVNUL,PNUL,sloc(135));
  T143 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T144 = fun_atan2_33;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YgooSmathYatan2,T142);
  lit_69 = YPPsym((P)"logn");
  lit_70 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T145 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_34 = YPmet(FUNCODEREF(fun_logn_34),LITREF(lit_69),T145,ENVNUL,PNUL,sloc(138));
  T147 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T148 = fun_logn_34;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YgooSmathYlogn,T146);
  lit_71 = YPPsym((P)"floor");
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T149 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_35 = YPmet(FUNCODEREF(fun_floor_35),LITREF(lit_71),T149,ENVNUL,PNUL,sloc(141));
  T151 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T152 = fun_floor_35;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YgooSmathYfloor,T150);
  lit_73 = YPPsym((P)"ceil");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T153 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_36 = YPmet(FUNCODEREF(fun_ceil_36),LITREF(lit_73),T153,ENVNUL,PNUL,sloc(144));
  T155 = VARREF_OR(YgooSmathYceil,YPfalse);
  T156 = fun_ceil_36;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YgooSmathYceil,T154);
  lit_75 = YPPsym((P)"round");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T157 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_37 = YPmet(FUNCODEREF(fun_round_37),LITREF(lit_75),T157,ENVNUL,PNUL,sloc(147));
  T159 = VARREF_OR(YgooSmathYround,YPfalse);
  T160 = fun_round_37;
  T158 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T159,T160);
  VARSET(YgooSmathYround,T158);
  lit_77 = YPPsym((P)"round-to");
  lit_78 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_79 = YPflo(FLOINT(10.0));
  T163 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T162 = fun_round_to_38 = YPmet(FUNCODEREF(fun_round_to_38),LITREF(lit_77),T163,ENVNUL,PNUL,sloc(150));
  T166 = VARREF_OR(YgooSmathYround_to,YPfalse);
  T167 = fun_round_to_38;
  T165 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T166,T167);
  T164 = VARSET(YgooSmathYround_to,T165);
  T161 = T164;
  return T161;
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
  P T192,T193,T194,T195,T196,T197;
DEFCREGS();
  lit_80 = YPPsym((P)"trunc");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_39 = YPmet(FUNCODEREF(fun_trunc_39),LITREF(lit_80),T0,ENVNUL,PNUL,sloc(156));
  T2 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T3 = fun_trunc_39;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmathYtrunc,T1);
  lit_82 = YPPsym((P)"floor/");
  lit_83 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T5 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T4 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T5,Ynil);
  fun_floorS_40 = YPmet(FUNCODEREF(fun_floorS_40),LITREF(lit_82),T4,ENVNUL,PNUL,sloc(159));
  T7 = VARREF_OR(YgooSmathYfloorS,YPfalse);
  T8 = fun_floorS_40;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooSmathYfloorS,T6);
  lit_84 = YPPsym((P)"ceil/");
  lit_85 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T10 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T9 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T10,Ynil);
  fun_ceilS_41 = YPmet(FUNCODEREF(fun_ceilS_41),LITREF(lit_84),T9,ENVNUL,PNUL,sloc(168));
  T12 = VARREF_OR(YgooSmathYceilS,YPfalse);
  T13 = fun_ceilS_41;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSmathYceilS,T11);
  lit_86 = YPPsym((P)"round/");
  lit_87 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  lit_88 = YPflo(FLOINT(2.0));
  T15 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T14 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T15,Ynil);
  fun_roundS_42 = YPmet(FUNCODEREF(fun_roundS_42),LITREF(lit_86),T14,ENVNUL,PNUL,sloc(177));
  T17 = VARREF_OR(YgooSmathYroundS,YPfalse);
  T18 = fun_roundS_42;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooSmathYroundS,T16);
  lit_89 = YPPsym((P)"trunc/");
  lit_90 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T20 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T19 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T20,Ynil);
  fun_truncS_43 = YPmet(FUNCODEREF(fun_truncS_43),LITREF(lit_89),T19,ENVNUL,PNUL,sloc(193));
  T22 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T23 = fun_truncS_43;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYtruncS,T21);
  lit_91 = YPPsym((P)"div");
  lit_92 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T24 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_div_44 = YPmet(FUNCODEREF(fun_div_44),LITREF(lit_91),T24,ENVNUL,PNUL,sloc(196));
  T26 = VARREF_OR(YgooSmathYdiv,YPfalse);
  T27 = fun_div_44;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSmathYdiv,T25);
  lit_93 = YPPsym((P)"mod");
  lit_94 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T28 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_45 = YPmet(FUNCODEREF(fun_mod_45),LITREF(lit_93),T28,ENVNUL,PNUL,sloc(199));
  T30 = VARREF_OR(YgooSmathYmod,YPfalse);
  T31 = fun_mod_45;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSmathYmod,T29);
  lit_95 = YPPsym((P)"mod+");
  lit_96 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T32 = YPsig(LITREF(lit_96),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_modA_46 = YPmet(FUNCODEREF(fun_modA_46),LITREF(lit_95),T32,ENVNUL,PNUL,sloc(203));
  T34 = VARREF_OR(YgooSmathYmodA,YPfalse);
  T35 = fun_modA_46;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYmodA,T33);
  lit_97 = YPPsym((P)"mod-");
  lit_98 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T36 = YPsig(LITREF(lit_98),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_mod__47 = YPmet(FUNCODEREF(fun_mod__47),LITREF(lit_97),T36,ENVNUL,PNUL,sloc(206));
  T38 = VARREF_OR(YgooSmathYmod_,YPfalse);
  T39 = fun_mod__47;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYmod_,T37);
  lit_99 = YPPlist(1,YPPsym((P)"exp"));
  lit_100 = YPPlist(1,YPPsym((P)"return"));
  lit_101 = YPPsym((P)"x-2185");
  lit_102 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_103 = YPPsym((P)"modincf");
  lit_104 = YPsb((P)"Match Pattern Failure");
  lit_105 = YPPsym((P)"opf");
  lit_106 = YPPsym((P)"_");
  lit_107 = Ynil;
  T42 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2185_48 = YPmet(FUNCODEREF(fun_x_2185_48),LITREF(lit_101),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T43 = fun_50;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T43);
  lit_108 = YPPlist(1,YPPsym((P)"exp"));
  lit_109 = YPPlist(1,YPPsym((P)"return"));
  lit_110 = YPPsym((P)"x-2189");
  lit_111 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_112 = YPPsym((P)"moddecf");
  T46 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2189_51 = YPmet(FUNCODEREF(fun_x_2189_51),LITREF(lit_110),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T47 = fun_53;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"moddecf"),T47);
  lit_113 = YPPsym((P)"rem");
  lit_114 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T48 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_54 = YPmet(FUNCODEREF(fun_rem_54),LITREF(lit_113),T48,ENVNUL,PNUL,sloc(215));
  T50 = VARREF_OR(YgooSmathYrem,YPfalse);
  T51 = fun_rem_54;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSmathYrem,T49);
  lit_115 = YPPsym((P)"pow");
  lit_116 = YPPlist(2,YPPsym((P)"base"),YPPsym((P)"n"));
  T52 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_55 = YPmet(FUNCODEREF(fun_pow_55),LITREF(lit_115),T52,ENVNUL,PNUL,sloc(219));
  T54 = VARREF_OR(YgooSmathYpow,YPfalse);
  T55 = fun_pow_55;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmathYpow,T53);
  lit_117 = YPPsym((P)"pos?");
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_56 = YPmet(FUNCODEREF(fun_posQ_56),LITREF(lit_117),T56,ENVNUL,PNUL,sloc(222));
  T58 = VARREF_OR(YgooSmathYposQ,YPfalse);
  T59 = fun_posQ_56;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSmathYposQ,T57);
  lit_119 = YPPsym((P)"zero?");
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_57 = YPmet(FUNCODEREF(fun_zeroQ_57),LITREF(lit_119),T60,ENVNUL,PNUL,sloc(225));
  T62 = VARREF_OR(YgooSmathYzeroQ,YPfalse);
  T63 = fun_zeroQ_57;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYzeroQ,T61);
  lit_121 = YPPsym((P)"neg?");
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_58 = YPmet(FUNCODEREF(fun_negQ_58),LITREF(lit_121),T64,ENVNUL,PNUL,sloc(228));
  T66 = VARREF_OR(YgooSmathYnegQ,YPfalse);
  T67 = fun_negQ_58;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYnegQ,T65);
  lit_123 = YPPsym((P)"neg");
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_neg_59 = YPmet(FUNCODEREF(fun_neg_59),LITREF(lit_123),T68,ENVNUL,PNUL,sloc(231));
  T70 = VARREF_OR(YgooSmathYneg,YPfalse);
  T71 = fun_neg_59;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSmathYneg,T69);
  lit_125 = YPPsym((P)"abs");
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_60 = YPmet(FUNCODEREF(fun_abs_60),LITREF(lit_125),T72,ENVNUL,PNUL,sloc(234));
  T74 = VARREF_OR(YgooSmathYabs,YPfalse);
  T75 = fun_abs_60;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSmathYabs,T73);
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T76 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_61 = YPmet(FUNCODEREF(fun_to_str_61),LITREF(lit_0),T76,ENVNUL,PNUL,sloc(237));
  T78 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T79 = fun_to_str_61;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSmathYto_str,T77);
  lit_128 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T81 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T80 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T81,Ynil);
  fun_contagious_type_62 = YPmet(FUNCODEREF(fun_contagious_type_62),LITREF(lit_49),T80,ENVNUL,PNUL,sloc(242));
  T83 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T84 = fun_contagious_type_62;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSmathYcontagious_type,T82);
  lit_129 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T86 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T85 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T86,Ynil);
  fun_contagious_type_63 = YPmet(FUNCODEREF(fun_contagious_type_63),LITREF(lit_49),T85,ENVNUL,PNUL,sloc(245));
  T88 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T89 = fun_contagious_type_63;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooSmathYcontagious_type,T87);
  lit_130 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T91 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T90 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),T91,Ynil);
  fun_contagious_type_64 = YPmet(FUNCODEREF(fun_contagious_type_64),LITREF(lit_49),T90,ENVNUL,PNUL,sloc(248));
  T93 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T94 = fun_contagious_type_64;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YgooSmathYcontagious_type,T92);
  lit_131 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T96 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T95 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),T96,Ynil);
  fun_contagious_type_65 = YPmet(FUNCODEREF(fun_contagious_type_65),LITREF(lit_49),T95,ENVNUL,PNUL,sloc(251));
  T98 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T99 = fun_contagious_type_65;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSmathYcontagious_type,T97);
  lit_132 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T100 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_66 = YPmet(FUNCODEREF(fun_EE_66),LITREF(lit_16),T100,ENVNUL,PNUL,sloc(254));
  T102 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T103 = fun_EE_66;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmacrosYEE,T101);
  lit_133 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T104 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_67 = YPmet(FUNCODEREF(fun_L_67),LITREF(lit_26),T104,ENVNUL,PNUL,sloc(257));
  T106 = VARREF_OR(YgooSmagYL,YPfalse);
  T107 = fun_L_67;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmagYL,T105);
  lit_134 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T108 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_A_68 = YPmet(FUNCODEREF(fun_A_68),LITREF(lit_55),T108,ENVNUL,PNUL,sloc(260));
  T110 = VARREF_OR(YgooSmathYA,YPfalse);
  T111 = fun_A_68;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooSmathYA,T109);
  lit_135 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T112 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun___69 = YPmet(FUNCODEREF(fun___69),LITREF(lit_59),T112,ENVNUL,PNUL,sloc(263));
  T114 = VARREF_OR(YgooSmathY_,YPfalse);
  T115 = fun___69;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YgooSmathY_,T113);
  lit_136 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T116 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_T_70 = YPmet(FUNCODEREF(fun_T_70),LITREF(lit_63),T116,ENVNUL,PNUL,sloc(266));
  T118 = VARREF_OR(YgooSmathYT,YPfalse);
  T119 = fun_T_70;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YgooSmathYT,T117);
  lit_137 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_138 = YPsb((P)"No int divide, consider trunc/");
  T120 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_S_71 = YPmet(FUNCODEREF(fun_S_71),LITREF(lit_65),T120,ENVNUL,PNUL,sloc(269));
  T122 = VARREF_OR(YgooSmathYS,YPfalse);
  T123 = fun_S_71;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YgooSmathYS,T121);
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  T124 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_72 = YPmet(FUNCODEREF(fun_floor_72),LITREF(lit_71),T124,ENVNUL,PNUL,sloc(272));
  T126 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T127 = fun_floor_72;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YgooSmathYfloor,T125);
  lit_140 = YPPlist(1,YPPsym((P)"x"));
  T128 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_73 = YPmet(FUNCODEREF(fun_ceil_73),LITREF(lit_73),T128,ENVNUL,PNUL,sloc(274));
  T130 = VARREF_OR(YgooSmathYceil,YPfalse);
  T131 = fun_ceil_73;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YgooSmathYceil,T129);
  lit_141 = YPPlist(1,YPPsym((P)"x"));
  T132 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_74 = YPmet(FUNCODEREF(fun_round_74),LITREF(lit_75),T132,ENVNUL,PNUL,sloc(276));
  T134 = VARREF_OR(YgooSmathYround,YPfalse);
  T135 = fun_round_74;
  T133 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T134,T135);
  VARSET(YgooSmathYround,T133);
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  T136 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_75 = YPmet(FUNCODEREF(fun_trunc_75),LITREF(lit_80),T136,ENVNUL,PNUL,sloc(278));
  T138 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T139 = fun_trunc_75;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YgooSmathYtrunc,T137);
  lit_143 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T141 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfixnumG));
  T140 = YPsig(LITREF(lit_143),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),T141,Ynil);
  fun_truncS_76 = YPmet(FUNCODEREF(fun_truncS_76),LITREF(lit_89),T140,ENVNUL,PNUL,sloc(280));
  T143 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T144 = fun_truncS_76;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YgooSmathYtruncS,T142);
  lit_144 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T145 = YPsig(LITREF(lit_144),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_mod_77 = YPmet(FUNCODEREF(fun_mod_77),LITREF(lit_93),T145,ENVNUL,PNUL,sloc(284));
  T147 = VARREF_OR(YgooSmathYmod,YPfalse);
  T148 = fun_mod_77;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YgooSmathYmod,T146);
  lit_145 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T149 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_78 = YPmet(FUNCODEREF(fun_pow_78),LITREF(lit_115),T149,ENVNUL,PNUL,sloc(292));
  T151 = VARREF_OR(YgooSmathYpow,YPfalse);
  T152 = fun_pow_78;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YgooSmathYpow,T150);
  lit_146 = YPPsym((P)"|");
  lit_147 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T153 = YPsig(LITREF(lit_147),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_79 = YPmet(FUNCODEREF(fun_K_79),LITREF(lit_146),T153,ENVNUL,PNUL,sloc(307));
  T155 = VARREF_OR(YgooSmathYK,YPfalse);
  T156 = fun_K_79;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YgooSmathYK,T154);
  lit_148 = YPPsym((P)"^");
  lit_149 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T157 = YPsig(LITREF(lit_149),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_80 = YPmet(FUNCODEREF(fun_C_80),LITREF(lit_148),T157,ENVNUL,PNUL,sloc(310));
  T159 = VARREF_OR(YgooSmathYC,YPfalse);
  T160 = fun_C_80;
  T158 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T159,T160);
  VARSET(YgooSmathYC,T158);
  lit_150 = YPPsym((P)"&");
  lit_151 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T161 = YPsig(LITREF(lit_151),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_81 = YPmet(FUNCODEREF(fun_B_81),LITREF(lit_150),T161,ENVNUL,PNUL,sloc(313));
  T163 = VARREF_OR(YgooSmathYB,YPfalse);
  T164 = fun_B_81;
  T162 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T163,T164);
  VARSET(YgooSmathYB,T162);
  lit_152 = YPPsym((P)"~");
  lit_153 = YPPlist(1,YPPsym((P)"x"));
  T165 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_N_82 = YPmet(FUNCODEREF(fun_N_82),LITREF(lit_152),T165,ENVNUL,PNUL,sloc(316));
  T167 = VARREF_OR(YgooSmathYN,YPfalse);
  T168 = fun_N_82;
  T166 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T167,T168);
  VARSET(YgooSmathYN,T166);
  lit_154 = YPPsym((P)"bit?");
  lit_155 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"x"));
  T169 = YPsig(LITREF(lit_155),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_bitQ_83 = YPmet(FUNCODEREF(fun_bitQ_83),LITREF(lit_154),T169,ENVNUL,PNUL,sloc(319));
  T171 = VARREF_OR(YgooSmathYbitQ,YPfalse);
  T172 = fun_bitQ_83;
  T170 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T171,T172);
  VARSET(YgooSmathYbitQ,T170);
  lit_156 = YPPsym((P)"even?");
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  T173 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_84 = YPmet(FUNCODEREF(fun_evenQ_84),LITREF(lit_156),T173,ENVNUL,PNUL,sloc(322));
  T175 = VARREF_OR(YgooSmathYevenQ,YPfalse);
  T176 = fun_evenQ_84;
  T174 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T175,T176);
  VARSET(YgooSmathYevenQ,T174);
  lit_158 = YPPsym((P)"odd?");
  lit_159 = YPPlist(1,YPPsym((P)"x"));
  T177 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_85 = YPmet(FUNCODEREF(fun_oddQ_85),LITREF(lit_158),T177,ENVNUL,PNUL,sloc(325));
  T179 = VARREF_OR(YgooSmathYoddQ,YPfalse);
  T180 = fun_oddQ_85;
  T178 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T179,T180);
  VARSET(YgooSmathYoddQ,T178);
  lit_160 = YPPsym((P)">>");
  lit_161 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T181 = YPsig(LITREF(lit_161),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GG_86 = YPmet(FUNCODEREF(fun_GG_86),LITREF(lit_160),T181,ENVNUL,PNUL,sloc(328));
  T183 = VARREF_OR(YgooSmathYGG,YPfalse);
  T184 = fun_GG_86;
  T182 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T183,T184);
  VARSET(YgooSmathYGG,T182);
  lit_162 = YPPsym((P)">>>");
  lit_163 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T185 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GGG_87 = YPmet(FUNCODEREF(fun_GGG_87),LITREF(lit_162),T185,ENVNUL,PNUL,sloc(331));
  T187 = VARREF_OR(YgooSmathYGGG,YPfalse);
  T188 = fun_GGG_87;
  T186 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T187,T188);
  VARSET(YgooSmathYGGG,T186);
  lit_164 = YPPsym((P)"<<");
  lit_165 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T189 = YPsig(LITREF(lit_165),YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_LL_88 = YPmet(FUNCODEREF(fun_LL_88),LITREF(lit_164),T189,ENVNUL,PNUL,sloc(334));
  T191 = VARREF_OR(YgooSmathYLL,YPfalse);
  T192 = fun_LL_88;
  T190 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T191,T192);
  VARSET(YgooSmathYLL,T190);
  lit_166 = YPPsym((P)"power-of-two-ceil");
  lit_167 = YPPlist(1,YPPsym((P)"x"));
  T193 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_89 = YPmet(FUNCODEREF(fun_power_of_two_ceil_89),LITREF(lit_166),T193,ENVNUL,PNUL,sloc(337));
  T195 = VARREF_OR(YgooSmathYpower_of_two_ceil,YPfalse);
  T196 = fun_power_of_two_ceil_89;
  T194 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T195,T196);
  VARSET(YgooSmathYpower_of_two_ceil,T194);
  T197 = YPfalse;
  return T197;
}

P YgooSmathY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96;
DEFCREGS();
  lit_168 = YPPsym((P)"flo-bits");
  lit_169 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPmet(FUNCODEREF(YgooSmathYflo_bits),LITREF(lit_168),T0,ENVNUL,PNUL,sloc(371));
  T1 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T1);
  lit_170 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"x"));
  T3 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T2 = YPsig(LITREF(lit_170),YPPlist(2,T3,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_91 = YPmet(FUNCODEREF(fun_as_91),LITREF(lit_11),T2,ENVNUL,PNUL,sloc(374));
  T5 = VARREF_OR(YgooStypesYas,YPfalse);
  T6 = fun_as_91;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YgooStypesYas,T4);
  lit_171 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T7 = YPsig(LITREF(lit_171),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_92 = YPmet(FUNCODEREF(fun_EE_92),LITREF(lit_16),T7,ENVNUL,PNUL,sloc(377));
  T9 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T10 = fun_EE_92;
  T8 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T9,T10);
  VARSET(YgooSmacrosYEE,T8);
  lit_172 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T11 = YPsig(LITREF(lit_172),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_93 = YPmet(FUNCODEREF(fun_L_93),LITREF(lit_26),T11,ENVNUL,PNUL,sloc(380));
  T13 = VARREF_OR(YgooSmagYL,YPfalse);
  T14 = fun_L_93;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooSmagYL,T12);
  lit_173 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T15 = YPsig(LITREF(lit_173),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_94 = YPmet(FUNCODEREF(fun_A_94),LITREF(lit_55),T15,ENVNUL,PNUL,sloc(383));
  T17 = VARREF_OR(YgooSmathYA,YPfalse);
  T18 = fun_A_94;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooSmathYA,T16);
  lit_174 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T19 = YPsig(LITREF(lit_174),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___95 = YPmet(FUNCODEREF(fun___95),LITREF(lit_59),T19,ENVNUL,PNUL,sloc(386));
  T21 = VARREF_OR(YgooSmathY_,YPfalse);
  T22 = fun___95;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooSmathY_,T20);
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPsig(LITREF(lit_175),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_96 = YPmet(FUNCODEREF(fun_T_96),LITREF(lit_63),T23,ENVNUL,PNUL,sloc(389));
  T25 = VARREF_OR(YgooSmathYT,YPfalse);
  T26 = fun_T_96;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSmathYT,T24);
  lit_176 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T27 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_97 = YPmet(FUNCODEREF(fun_S_97),LITREF(lit_65),T27,ENVNUL,PNUL,sloc(392));
  T29 = VARREF_OR(YgooSmathYS,YPfalse);
  T30 = fun_S_97;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooSmathYS,T28);
  lit_177 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfloG));
  T31 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T32,Ynil);
  fun_truncS_98 = YPmet(FUNCODEREF(fun_truncS_98),LITREF(lit_89),T31,ENVNUL,PNUL,sloc(395));
  T34 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T35 = fun_truncS_98;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYtruncS,T33);
  lit_178 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T36 = YPsig(LITREF(lit_178),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_99 = YPmet(FUNCODEREF(fun_pow_99),LITREF(lit_115),T36,ENVNUL,PNUL,sloc(400));
  T38 = VARREF_OR(YgooSmathYpow,YPfalse);
  T39 = fun_pow_99;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYpow,T37);
  lit_179 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_179));
  lit_180 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_180));
  lit_181 = YPPsym((P)"isqrt");
  lit_182 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_100 = YPmet(FUNCODEREF(fun_isqrt_100),LITREF(lit_181),T40,ENVNUL,PNUL,sloc(407));
  T42 = VARREF_OR(YgooSmathYisqrt,YPfalse);
  T43 = fun_isqrt_100;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYisqrt,T41);
  lit_183 = YPPlist(1,YPPsym((P)"exp"));
  lit_184 = YPPlist(1,YPPsym((P)"return"));
  lit_185 = YPPsym((P)"x-2193");
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
  T46 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2193_101 = YPmet(FUNCODEREF(fun_x_2193_101),LITREF(lit_185),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T47 = fun_103;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T47);
  lit_198 = YPPsym((P)"sqrt");
  lit_199 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T48 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_198),T49,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsqrt,T48);
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  lit_201 = YPsb((P)"SQRT would produce complex number");
  T50 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_104 = YPmet(FUNCODEREF(fun_sqrt_104),LITREF(lit_198),T50,ENVNUL,PNUL,sloc(420));
  T52 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T53 = fun_sqrt_104;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYsqrt,T51);
  lit_202 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_105 = YPmet(FUNCODEREF(fun_sqrt_105),LITREF(lit_198),T54,ENVNUL,PNUL,sloc(420));
  T56 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T57 = fun_sqrt_105;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSmathYsqrt,T55);
  lit_203 = YPPsym((P)"log");
  lit_204 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T58 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_203),T59,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlog,T58);
  lit_205 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_106 = YPmet(FUNCODEREF(fun_log_106),LITREF(lit_203),T60,ENVNUL,PNUL,sloc(423));
  T62 = VARREF_OR(YgooSmathYlog,YPfalse);
  T63 = fun_log_106;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYlog,T61);
  lit_206 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_107 = YPmet(FUNCODEREF(fun_log_107),LITREF(lit_203),T64,ENVNUL,PNUL,sloc(423));
  T66 = VARREF_OR(YgooSmathYlog,YPfalse);
  T67 = fun_log_107;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYlog,T65);
  lit_207 = YPPsym((P)"sin");
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T68 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_207),T69,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsin,T68);
  lit_209 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_108 = YPmet(FUNCODEREF(fun_sin_108),LITREF(lit_207),T70,ENVNUL,PNUL,sloc(424));
  T72 = VARREF_OR(YgooSmathYsin,YPfalse);
  T73 = fun_sin_108;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYsin,T71);
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_109 = YPmet(FUNCODEREF(fun_sin_109),LITREF(lit_207),T74,ENVNUL,PNUL,sloc(424));
  T76 = VARREF_OR(YgooSmathYsin,YPfalse);
  T77 = fun_sin_109;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSmathYsin,T75);
  lit_211 = YPPsym((P)"cos");
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T78 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_211),T79,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcos,T78);
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_110 = YPmet(FUNCODEREF(fun_cos_110),LITREF(lit_211),T80,ENVNUL,PNUL,sloc(425));
  T82 = VARREF_OR(YgooSmathYcos,YPfalse);
  T83 = fun_cos_110;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathYcos,T81);
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_111 = YPmet(FUNCODEREF(fun_cos_111),LITREF(lit_211),T84,ENVNUL,PNUL,sloc(425));
  T86 = VARREF_OR(YgooSmathYcos,YPfalse);
  T87 = fun_cos_111;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYcos,T85);
  lit_215 = YPPsym((P)"tan");
  lit_216 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T88 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_215),T89,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtan,T88);
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  T91 = fun_tan_112 = YPmet(FUNCODEREF(fun_tan_112),LITREF(lit_215),T92,ENVNUL,PNUL,sloc(426));
  T95 = VARREF_OR(YgooSmathYtan,YPfalse);
  T96 = fun_tan_112;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  T93 = VARSET(YgooSmathYtan,T94);
  T90 = T93;
  return T90;
}

P YgooSmathY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80;
DEFCREGS();
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_113 = YPmet(FUNCODEREF(fun_tan_113),LITREF(lit_215),T0,ENVNUL,PNUL,sloc(426));
  T2 = VARREF_OR(YgooSmathYtan,YPfalse);
  T3 = fun_tan_113;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmathYtan,T1);
  lit_219 = YPPsym((P)"sinh");
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_219),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsinh,T4);
  lit_221 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_114 = YPmet(FUNCODEREF(fun_sinh_114),LITREF(lit_219),T6,ENVNUL,PNUL,sloc(427));
  T8 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T9 = fun_sinh_114;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSmathYsinh,T7);
  lit_222 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_115 = YPmet(FUNCODEREF(fun_sinh_115),LITREF(lit_219),T10,ENVNUL,PNUL,sloc(427));
  T12 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T13 = fun_sinh_115;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSmathYsinh,T11);
  lit_223 = YPPsym((P)"cosh");
  lit_224 = YPPlist(1,YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_223),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcosh,T14);
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_116 = YPmet(FUNCODEREF(fun_cosh_116),LITREF(lit_223),T16,ENVNUL,PNUL,sloc(428));
  T18 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T19 = fun_cosh_116;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSmathYcosh,T17);
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_117 = YPmet(FUNCODEREF(fun_cosh_117),LITREF(lit_223),T20,ENVNUL,PNUL,sloc(428));
  T22 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T23 = fun_cosh_117;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYcosh,T21);
  lit_227 = YPPsym((P)"tanh");
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_227),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtanh,T24);
  lit_229 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_118 = YPmet(FUNCODEREF(fun_tanh_118),LITREF(lit_227),T26,ENVNUL,PNUL,sloc(429));
  T28 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T29 = fun_tanh_118;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSmathYtanh,T27);
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_119 = YPmet(FUNCODEREF(fun_tanh_119),LITREF(lit_227),T30,ENVNUL,PNUL,sloc(429));
  T32 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T33 = fun_tanh_119;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSmathYtanh,T31);
  lit_231 = YPPsym((P)"asin");
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_231),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYasin,T34);
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  lit_234 = YPsb((P)"SQRT would produce complex number");
  T36 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_120 = YPmet(FUNCODEREF(fun_asin_120),LITREF(lit_231),T36,ENVNUL,PNUL,sloc(430));
  T38 = VARREF_OR(YgooSmathYasin,YPfalse);
  T39 = fun_asin_120;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYasin,T37);
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_121 = YPmet(FUNCODEREF(fun_asin_121),LITREF(lit_231),T40,ENVNUL,PNUL,sloc(430));
  T42 = VARREF_OR(YgooSmathYasin,YPfalse);
  T43 = fun_asin_121;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYasin,T41);
  lit_236 = YPPsym((P)"acos");
  lit_237 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_236),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYacos,T44);
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  lit_239 = YPsb((P)"SQRT would produce complex number");
  T46 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_122 = YPmet(FUNCODEREF(fun_acos_122),LITREF(lit_236),T46,ENVNUL,PNUL,sloc(432));
  T48 = VARREF_OR(YgooSmathYacos,YPfalse);
  T49 = fun_acos_122;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSmathYacos,T47);
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_123 = YPmet(FUNCODEREF(fun_acos_123),LITREF(lit_236),T50,ENVNUL,PNUL,sloc(432));
  T52 = VARREF_OR(YgooSmathYacos,YPfalse);
  T53 = fun_acos_123;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYacos,T51);
  lit_241 = YPPsym((P)"atan");
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T54 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_241),T55,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan,T54);
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_124 = YPmet(FUNCODEREF(fun_atan_124),LITREF(lit_241),T56,ENVNUL,PNUL,sloc(434));
  T58 = VARREF_OR(YgooSmathYatan,YPfalse);
  T59 = fun_atan_124;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSmathYatan,T57);
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_125 = YPmet(FUNCODEREF(fun_atan_125),LITREF(lit_241),T60,ENVNUL,PNUL,sloc(434));
  T62 = VARREF_OR(YgooSmathYatan,YPfalse);
  T63 = fun_atan_125;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYatan,T61);
  lit_245 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T65 = YPsig(LITREF(lit_245),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T64 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_67),T65,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan2,T64);
  lit_246 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T66 = YPsig(LITREF(lit_246),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_126 = YPmet(FUNCODEREF(fun_atan2_126),LITREF(lit_67),T66,ENVNUL,PNUL,sloc(437));
  T68 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T69 = fun_atan2_126;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSmathYatan2,T67);
  lit_247 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_127 = YPmet(FUNCODEREF(fun_atan2_127),LITREF(lit_67),T70,ENVNUL,PNUL,sloc(439));
  T72 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T73 = fun_atan2_127;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYatan2,T71);
  lit_248 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T75 = YPsig(LITREF(lit_248),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T74 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_69),T75,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlogn,T74);
  lit_249 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T76 = YPsig(LITREF(lit_249),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_128 = YPmet(FUNCODEREF(fun_logn_128),LITREF(lit_69),T76,ENVNUL,PNUL,sloc(443));
  T78 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T79 = fun_logn_128;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSmathYlogn,T77);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T80 = YPfalse;
  return T80;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooStypes;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSmag},
  {&module_info_gooStypes},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
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
  {"dlet", &module_info_gooSmacros, NULL},
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
  {"opf", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
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
  {"when", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
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
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
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
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
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
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
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
  {"and", &module_info_gooSmacros, NULL},
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
  {"until", &module_info_gooSmacros, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
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
  {"last", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
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
  {"gensym", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSclass, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
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
  {"app-sup", &module_info_gooSmacros, NULL},
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
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
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
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
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
  {"atan", CVAR, &YgooSmathYatan},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {"eof-object", CVAR, &YgooSmathYeof_object},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"moddecf", PVAR, NULL},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"%facos", PVAR, NULL},
  {">>>", CVAR, &YgooSmathYGGG},
  {"%f/", PVAR, NULL},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"to-digit", CVAR, &YgooSmathYto_digit},
  {"cos", CVAR, &YgooSmathYcos},
  {"1-", CVAR, &YgooSmathY1_},
  {"round/", CVAR, &YgooSmathYroundS},
  {"as-log", CVAR, &YgooSmathYas_log},
  {"to-str", CVAR, &YgooSmathYto_str},
  {"=", CVAR, &YgooSmathYE},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"%f+", PVAR, NULL},
  {"logn", CVAR, &YgooSmathYlogn},
  {"def-unary-trans", PVAR, NULL},
  {"acos", CVAR, &YgooSmathYacos},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {"%fsinh", PVAR, NULL},
  {"modincf", PVAR, NULL},
  {"to-upper", CVAR, &YgooSmathYto_upper},
  {"mod", CVAR, &YgooSmathYmod},
  {"%flo-bits", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"%ftan", PVAR, NULL},
  {">>", CVAR, &YgooSmathYGG},
  {"eof-object?", CVAR, &YgooSmathYeof_objectQ},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"&", CVAR, &YgooSmathYB},
  {"round-to", CVAR, &YgooSmathYround_to},
  {"lower?", CVAR, &YgooSmathYlowerQ},
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {"char->ascii", CVAR, &YgooSmathYchar_Gascii},
  {"sin", CVAR, &YgooSmathYsin},
  {"<bot>", CVAR, &YgooSmathYLbotG},
  {"to-lower", CVAR, &YgooSmathYto_lower},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"~", CVAR, &YgooSmathYN},
  {"-", CVAR, &YgooSmathY_},
  {"%fi2f", PVAR, NULL},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"1+", CVAR, &YgooSmathY1A},
  {"digit?", CVAR, &YgooSmathYdigitQ},
  {"~==", CVAR, &YgooSmathYNEE},
  {"%fatan2", PVAR, NULL},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"asin", CVAR, &YgooSmathYasin},
  {"%fsqrt", PVAR, NULL},
  {"round", CVAR, &YgooSmathYround},
  {"div", CVAR, &YgooSmathYdiv},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {"upper?", CVAR, &YgooSmathYupperQ},
  {"%flog", PVAR, NULL},
  {"%ft/", PVAR, NULL},
  {"^", CVAR, &YgooSmathYC},
  {"---main-3---", PVAR, NULL},
  {"alpha?", CVAR, &YgooSmathYalphaQ},
  {"pow", CVAR, &YgooSmathYpow},
  {"~=", CVAR, &YgooSmathYNE},
  {"/", CVAR, &YgooSmathYS},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"%fcosh", PVAR, NULL},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"%f=", PVAR, NULL},
  {"%fatan", PVAR, NULL},
  {"%f-", PVAR, NULL},
  {"$e", CVAR, &YgooSmathYDe},
  {"ceil", CVAR, &YgooSmathYceil},
  {"log", CVAR, &YgooSmathYlog},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"fabs", CVAR, &YgooSmathYfabs},
  {"abs", CVAR, &YgooSmathYabs},
  {"---main-1---", PVAR, NULL},
  {"%ft", PVAR, NULL},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"address-of", CVAR, &YgooSmathYaddress_of},
  {"%fsin", PVAR, NULL},
  {"tan", CVAR, &YgooSmathYtan},
  {"%ff", PVAR, NULL},
  {"+", CVAR, &YgooSmathYA},
  {"%fc", PVAR, NULL},
  {"%f<", PVAR, NULL},
  {"%ftanh", PVAR, NULL},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"---main-2---", PVAR, NULL},
  {"<<", CVAR, &YgooSmathYLL},
  {"tanh", CVAR, &YgooSmathYtanh},
  {"%fcos", PVAR, NULL},
  {"%fpow", PVAR, NULL},
  {"|", CVAR, &YgooSmathYK},
  {"%fasin", PVAR, NULL},
  {"floor", CVAR, &YgooSmathYfloor},
  {"%f*", PVAR, NULL},
  {"neg", CVAR, &YgooSmathYneg},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {"rem", CVAR, &YgooSmathYrem},
  {"*", CVAR, &YgooSmathYT},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"atan", NULL},
  {"bit?", NULL},
  {"floor/", NULL},
  {"eof-object", NULL},
  {"num-to-str", NULL},
  {"sqrt", NULL},
  {"moddecf", NULL},
  {"mod+", NULL},
  {">", NULL},
  {">>>", NULL},
  {"neg?", NULL},
  {"to-digit", NULL},
  {"cos", NULL},
  {"<", NULL},
  {"1-", NULL},
  {"round/", NULL},
  {"as-log", NULL},
  {"to-str", NULL},
  {"~", NULL},
  {"=", NULL},
  {"trunc", NULL},
  {"==", NULL},
  {"cosh", NULL},
  {"logn", NULL},
  {"acos", NULL},
  {"zero?", NULL},
  {"modincf", NULL},
  {"eof-object?", NULL},
  {"to-upper", NULL},
  {"mod", NULL},
  {">>", NULL},
  {"as", NULL},
  {"ceil/", NULL},
  {"&", NULL},
  {"max", NULL},
  {"flo-bits", NULL},
  {"char->ascii", NULL},
  {"sin", NULL},
  {"to-lower", NULL},
  {"atan2", NULL},
  {"pos?", NULL},
  {"-", NULL},
  {"sinh", NULL},
  {"isqrt", NULL},
  {"1+", NULL},
  {"digit?", NULL},
  {"min", NULL},
  {"~==", NULL},
  {"odd?", NULL},
  {"asin", NULL},
  {"round", NULL},
  {"div", NULL},
  {"power-of-two-ceil", NULL},
  {"upper?", NULL},
  {">=", NULL},
  {"^", NULL},
  {"<bot>", NULL},
  {"alpha?", NULL},
  {"pow", NULL},
  {"~=", NULL},
  {"/", NULL},
  {"mod-", NULL},
  {"even?", NULL},
  {"<=", NULL},
  {"$e", NULL},
  {"ceil", NULL},
  {"log", NULL},
  {"contagious-call", NULL},
  {"fabs", NULL},
  {"abs", NULL},
  {"$pi", NULL},
  {"address-of", NULL},
  {"tan", NULL},
  {"+", NULL},
  {"trunc/", NULL},
  {"<<", NULL},
  {"tanh", NULL},
  {"|", NULL},
  {"lower?", NULL},
  {"floor", NULL},
  {"neg", NULL},
  {"contagious-type", NULL},
  {"rem", NULL},
  {"*", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSmag();
  load_module_gooStypes();

  (P)YgooSmathY___main_0___();
  (P)YgooSmathY___main_1___();
  (P)YgooSmathY___main_2___();
  (P)YgooSmathY___main_3___();

}

/* END OF GENERATED CODE. */
