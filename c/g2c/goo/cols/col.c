/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/col");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/col */

EXT(Ytype_object,"goo/boot","type-object");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ylst,"goo/boot","lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
DEF(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooScolsScolYDelt_default,"goo/cols/col","$elt-default");
DEF(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
DEF(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yhead,"goo/boot","head");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYK,"goo/math","|");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YPprop,"goo/boot","%prop");
DEF(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooScolsScolYLelt_defaultG,"goo/cols/col","<elt-default>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_of,"goo/boot","class-of");
DEF(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ynil,"goo/boot","nil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YgooScolsScolYDeq_nul,"goo/cols/col","$eq-nul");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_142);
DEFLIT(lit_139);
DEFLIT(lit_55);
DEFLIT(lit_61);
DEFLIT(lit_13);
DEFLIT(lit_122);
DEFLIT(lit_49);
DEFLIT(lit_15);
DEFLIT(lit_91);
DEFLIT(lit_4);
DEFLIT(lit_134);
DEFLIT(lit_6);
DEFLIT(lit_135);
DEFLIT(lit_87);
DEFLIT(lit_47);
DEFLIT(lit_72);
DEFLIT(lit_66);
DEFLIT(lit_82);
DEFLIT(lit_38);
DEFLIT(lit_48);
DEFLIT(lit_75);
DEFLIT(lit_94);
DEFLIT(lit_42);
DEFLIT(lit_101);
DEFLIT(lit_25);
DEFLIT(lit_59);
DEFLIT(lit_2);
DEFLIT(lit_129);
DEFLIT(lit_45);
DEFLIT(lit_145);
DEFLIT(lit_54);
DEFLIT(lit_106);
DEFLIT(lit_21);
DEFLIT(lit_12);
DEFLIT(lit_26);
DEFLIT(lit_102);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_53);
DEFLIT(lit_74);
DEFLIT(lit_51);
DEFLIT(lit_63);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_119);
DEFLIT(lit_19);
DEFLIT(lit_70);
DEFLIT(lit_5);
DEFLIT(lit_79);
DEFLIT(lit_27);
DEFLIT(lit_46);
DEFLIT(lit_117);
DEFLIT(lit_89);
DEFLIT(lit_33);
DEFLIT(lit_9);
DEFLIT(lit_121);
DEFLIT(lit_137);
DEFLIT(lit_131);
DEFLIT(lit_114);
DEFLIT(lit_29);
DEFLIT(lit_14);
DEFLIT(lit_100);
DEFLIT(lit_126);
DEFLIT(lit_78);
DEFLIT(lit_34);
DEFLIT(lit_69);
DEFLIT(lit_128);
DEFLIT(lit_28);
DEFLIT(lit_90);
DEFLIT(lit_0);
DEFLIT(lit_83);
DEFLIT(lit_22);
DEFLIT(lit_86);
DEFLIT(lit_62);
DEFLIT(lit_10);
DEFLIT(lit_80);
DEFLIT(lit_16);
DEFLIT(lit_99);
DEFLIT(lit_133);
DEFLIT(lit_95);
DEFLIT(lit_67);
DEFLIT(lit_65);
DEFLIT(lit_111);
DEFLIT(lit_107);
DEFLIT(lit_73);
DEFLIT(lit_124);
DEFLIT(lit_92);
DEFLIT(lit_37);
DEFLIT(lit_76);
DEFLIT(lit_32);
DEFLIT(lit_116);
DEFLIT(lit_39);
DEFLIT(lit_127);
DEFLIT(lit_118);
DEFLIT(lit_58);
DEFLIT(lit_17);
DEFLIT(lit_120);
DEFLIT(lit_60);
DEFLIT(lit_130);
DEFLIT(lit_43);
DEFLIT(lit_35);
DEFLIT(lit_144);
DEFLIT(lit_115);
DEFLIT(lit_136);
DEFLIT(lit_103);
DEFLIT(lit_77);
DEFLIT(lit_44);
DEFLIT(lit_109);
DEFLIT(lit_50);
DEFLIT(lit_57);
DEFLIT(lit_132);
DEFLIT(lit_8);
DEFLIT(lit_68);
DEFLIT(lit_138);
DEFLIT(lit_93);
DEFLIT(lit_141);
DEFLIT(lit_104);
DEFLIT(lit_113);
DEFLIT(lit_125);
DEFLIT(lit_41);
DEFLIT(lit_123);
DEFLIT(lit_110);
DEFLIT(lit_140);
DEFLIT(lit_31);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_64);
DEFLIT(lit_97);
DEFLIT(lit_81);
DEFLIT(lit_36);
DEFLIT(lit_20);
DEFLIT(lit_84);
DEFLIT(lit_98);
DEFLIT(lit_85);
DEFLIT(lit_40);
DEFLIT(lit_56);
DEFLIT(lit_88);
DEFLIT(lit_1);
DEFLIT(lit_96);
DEFLIT(lit_52);
DEFLIT(lit_108);
DEFLIT(lit_143);
DEFLIT(lit_105);
DEFLIT(lit_112);
DEFLIT(lit_71);
DEFLIT(lit_11);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_dup_1);
LOCFOR(fun_dup_2);
LOCFOR(fun_count_3);
LOCFOR(fun_len_4);
LOCFOR(fun_elt_type_5);
LOCFOR(fun_key_type_6);
LOCFOR(fun_key_test_7);
LOCFOR(fun_emptyQ_8);
LOCFOR(fun_empty_9);
LOCFOR(fun_elt_default_10);
LOCFOR(fun_in_11);
LOCFOR(fun_fab_into_12);
LOCFOR(fun_fabs_13);
LOCFOR(fun_in_14);
LOCFOR(fun_fab_fillX_15);
LOCFOR(fun_fill_16);
LOCFOR(fun_fnd_17);
LOCFOR(fun_anyQ_18);
LOCFOR(fun_fnd_19);
LOCFOR(fun_allQ_20);
LOCFOR(fun_red_21);
LOCFOR(fun_fold_22);
LOCFOR(fun_red_23);
LOCFOR(fun_foldA_24);
LOCFOR(fun_fnd_25);
LOCFOR(fun_find_or_26);
LOCFOR(fun_find_27);
LOCFOR(fun_zap_28);
LOCFOR(fun_lop_29);
LOCFOR(fun_do_30);
LOCFOR(fun_con_31);
LOCFOR(fun_map_32);
LOCFOR(fun_lop_33);
LOCFOR(fun_do_keyed_34);
LOCFOR(fun_con_35);
LOCFOR(fun_map_keyed_36);
LOCFOR(fun_con_37);
LOCFOR(fun_keys_38);
LOCFOR(fun_con_39);
LOCFOR(fun_items_40);
LOCFOR(fun_41);
LOCFOR(fun_memQ_42);
LOCFOR(fun_col_res_type_43);
LOCFOR(fun_col_res_44);
LOCFOR(fun_eq_45);
LOCFOR(fun_E_46);
LOCFOR(fun_elt_47);
extern P YgooScolsScolY___main_0___ ();
extern P YgooScolsScolY___main_1___ ();
extern P YgooScolsScolY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_0) {
  P t_,x_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL1(1,VARREF(Yclass_of),x_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,t_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T4 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T5);
    T3 = CALL2(1,VARREF(YgooScolsScolYfab_into),T4,x_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_dup_1) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(Yclass_of),x_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),T2,T3);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_dup_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_count_3) {
  P e_,i_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = i_;
  } else {
    T3 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T4;
    e_ = a1;
    i_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_4) {
  P x_;
  P countF1684;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_count_3,1);
  countF1684 = T1;
  FUNINIT(countF1684, 1,countF1684);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,countF1684,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_type_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_type_6) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_test_7) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

FUNCODEDEF(fun_emptyQ_8) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_9) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_default_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_in_11) {
  P ss_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(ss_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ss_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),ss_);
    T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),ss_);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),ss_);
    a1 = T5;
    ss_ = a1;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_into_12) {
  P dst_,src_;
  P inF1685;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_11,2);
  inF1685 = T1;
  FUNINIT(inF1685, 2,dst_,inF1685);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL1(0,inF1685,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fabs_13) {
  P c_,objects_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),c_,T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,objects_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_14) {
  P ds_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(ds_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ds_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow_key),ds_);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),FREEREF(1),FREEREF(0),T2);
    T4 = CALL1(1,VARREF(YgooScolsScolYnxt),ds_);
    a1 = T4;
    ds_ = a1;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_fillX_15) {
  P dst_,src_;
  P inF1686;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_14,3);
  inF1686 = T1;
  FUNINIT(inF1686, 3,dst_,src_,inF1686);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T2 = CALL1(0,inF1686,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fill_16) {
  P dst_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),dst_);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_fillX),T1,val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_17) {
  P e_;
  P tmpF1687;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T4 = CALL1(1,FREEREF(0),T5);
    T3 = CALL1(1,VARREF(YgooSmathYas_log),T4);
    tmpF1687 = T3;
    if (tmpF1687 != YPfalse) {
      T6 = tmpF1687;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
      a1 = T8;
      e_ = a1;
      goto loop;
      T6 = T7;
    }
    T2 = T6;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_anyQ_18) {
  P test_,c_;
  P fndF1688;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_17,2);
  fndF1688 = T1;
  FUNINIT(fndF1688, 2,test_,fndF1688);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF1688,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_19) {
  P e_;
  P tmpF1690;
  P tmpF1689;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  tmpF1689 = T1;
  if (tmpF1689 != YPfalse) {
    T2 = tmpF1689;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T4 = CALL1(1,FREEREF(0),T5);
    tmpF1690 = T4;
    if (tmpF1690 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
      a1 = T8;
      e_ = a1;
      goto loop;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_allQ_20) {
  P test_,c_;
  P fndF1691;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_19,2);
  fndF1691 = T1;
  FUNINIT(fndF1691, 2,test_,fndF1691);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF1691,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_21) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T3 = CALL2(1,FREEREF(0),res_,T4);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T3;
    a2 = T5;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fold_22) {
  P combine_,init_,c_;
  P redF1692;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_21,2);
  redF1692 = T1;
  FUNINIT(redF1692, 2,combine_,redF1692);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,redF1692,init_,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_red_23) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T3 = CALL2(1,FREEREF(0),res_,T4);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T3;
    a2 = T5;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_foldA_24) {
  P combine_,c_;
  P redF1695;
  P initF1694;
  P eF1693;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1693 = T1;
  T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF1693);
  initF1694 = T3;
  T5 = FUNSHELL(1,fun_red_23,2);
  redF1695 = T5;
  FUNINIT(redF1695, 2,combine_,redF1695);
  T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1693);
  T6 = CALL2(0,redF1695,initF1694,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_25) {
  P e_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T3 = CALL1(1,FREEREF(1),T4);
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
      T2 = T5;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
      a1 = T7;
      e_ = a1;
      goto loop;
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_or_26) {
  P f_,c_,default_;
  P fndF1696;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_25,3);
  fndF1696 = T1;
  FUNINIT(fndF1696, 3,default_,f_,fndF1696);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF1696,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_27) {
  P f_,c_;
  P valF1697;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYfind_or),f_,c_,VARREF(YgooScolsScolYDelt_default));
  valF1697 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF1697,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,f_);
    T2 = T4;
  } else {
    T2 = valF1697;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zap_28) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yclass_of),x_);
  T0 = CALL1(1,VARREF(YgooScolsScolYempty),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_29) {
  P e_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    CALL1(1,FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T5;
    e_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_30) {
  P f_,c_;
  P lopF1698;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_29,2);
  lopF1698 = T1;
  FUNINIT(lopF1698, 2,f_,lopF1698);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,lopF1698,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_31) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T3 = CALL1(1,FREEREF(1),T4);
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T3,res_,T5);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = res_;
    a2 = T7;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_32) {
  P f_,c_;
  P conF1699;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_31,3);
  conF1699 = T1;
  FUNINIT(conF1699, 3,c_,f_,conF1699);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1699,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_33) {
  P e_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    CALL2(1,FREEREF(0),T3,T4);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T6;
    e_ = a1;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_keyed_34) {
  P f_,c_;
  P lopF1700;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_33,2);
  lopF1700 = T1;
  FUNINIT(lopF1700, 2,f_,lopF1700);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,lopF1700,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_35) {
  P res_,e_;
  P keyF1701;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
    keyF1701 = T4;
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T5 = CALL2(1,FREEREF(1),keyF1701,T6);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T5,res_,keyF1701);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = res_;
    a2 = T8;
    res_ = a1;
    e_ = a2;
    goto loop;
    T3 = T7;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_36) {
  P f_,c_;
  P conF1702;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_35,3);
  conF1702 = T1;
  FUNINIT(conF1702, 3,c_,f_,conF1702);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1702,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_37) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
    T4 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T5);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T4;
    a2 = T6;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_keys_38) {
  P c_;
  P conF1703;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_37,1);
  conF1703 = T1;
  FUNINIT(conF1703, 1,conF1703);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1703,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_39) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T5 = CALL2(1,VARREF(Ytup),T6,T7);
    T4 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T5);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T4;
    a2 = T8;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_items_40) {
  P c_;
  P conF1704;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_39,1);
  conF1704 = T1;
  FUNINIT(conF1704, 1,conF1704);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1704,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_41) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_memQ_42) {
  P c_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_41,1,x_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_res_type_43) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(Yclass_of),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_res_44) {
  P c_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYcol_res_type),c_);
  T0 = CALL2(1,VARREF(YgooStypesYas),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eq_45) {
  P e1_;
  P tmpF1705;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(e1_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1_);
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e1_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow_key),e1_);
    T5 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),T6,VARREF(YgooScolsScolYDeq_nul));
    T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
    tmpF1705 = T3;
    if (tmpF1705 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e1_);
      a1 = T9;
      e1_ = a1;
      goto loop;
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T2 = T7;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_E_46) {
  P c1_,c2_;
  P eqF1707;
  P tmpF1706;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c1_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),c2_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,T3);
  tmpF1706 = T1;
  if (tmpF1706 != YPfalse) {
    T6 = FUNSHELL(1,fun_eq_45,2);
    eqF1707 = T6;
    FUNINIT(eqF1707, 2,c2_,eqF1707);
    T8 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
    T7 = CALL1(0,eqF1707,T8);
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_47) {
  P c_,key_;
  P valF1708;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,key_,VARREF(YgooScolsScolYDelt_default));
  valF1708 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF1708,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,key_);
    T2 = T4;
  } else {
    T2 = valF1708;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsScolY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"len");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYlen,T0);
  lit_2 = YPPsym((P)"elt");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T3 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYelt,T2);
  lit_4 = YPPsym((P)"elt-or");
  lit_5 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"k"),YPPsym((P)"default"));
  T5 = YPsig(LITREF(lit_5),YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_or,T4);
  lit_6 = YPPsym((P)"elt-type");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_type,T6);
  lit_8 = YPPsym((P)"elt-default");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_default,T8);
  lit_10 = YPPsym((P)"key-type");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkey_type,T10);
  lit_12 = YPPsym((P)"key-test");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkey_test,T12);
  lit_14 = YPPsym((P)"elts");
  lit_15 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  T15 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelts,T14);
  lit_16 = YPPsym((P)"empty?");
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_16),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYemptyQ,T16);
  lit_18 = YPPsym((P)"empty");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T20 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T19 = YPsig(LITREF(lit_19),YPPlist(1,T20),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYempty,T18);
  lit_20 = YPPsym((P)"add");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T22 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYadd,T21);
  lit_22 = YPPsym((P)"dup");
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdup,T23);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T26 = YPsig(LITREF(lit_25),YPPlist(2,T27,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab,T25);
  lit_26 = YPPsym((P)"col");
  lit_27 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T29 = YPsig(LITREF(lit_27),YPPlist(1,T30),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol,T28);
  lit_28 = YPPsym((P)"fabs");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"elts"));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T32 = YPsig(LITREF(lit_29),YPPlist(1,T33),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_28),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYfabs,T31);
  lit_30 = YPPsym((P)"fill");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"val"));
  T35 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_30),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfill,T34);
  lit_32 = YPPsym((P)"any?");
  lit_33 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T36 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYanyQ,T36);
  lit_34 = YPPsym((P)"all?");
  lit_35 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T39 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T38 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_34),T39,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYallQ,T38);
  lit_36 = YPPsym((P)"fold");
  lit_37 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"x"));
  T41 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T40 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T41,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfold,T40);
  lit_38 = YPPsym((P)"fold+");
  lit_39 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"x"));
  T43 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T42 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfoldA,T42);
  lit_40 = YPPsym((P)"find-or");
  lit_41 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"default"));
  T45 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfind_or,T44);
  lit_42 = YPPsym((P)"find");
  lit_43 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T47 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T46 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_42),T47,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfind,T46);
  lit_44 = YPPsym((P)"del");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T49 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T48 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_44),T49,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdel,T48);
  lit_46 = YPPsym((P)"zap");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T50 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T51,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYzap,T50);
  lit_48 = YPPsym((P)"do");
  lit_49 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T53 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T52 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_48),T53,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYdo,T52);
  lit_50 = YPPsym((P)"mem?");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T55 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T54 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_50),T55,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYmemQ,T54);
  lit_52 = YPPsym((P)"keys");
  lit_53 = YPPlist(1,YPPsym((P)"c"));
  T57 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T56 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_52),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkeys,T56);
  lit_54 = YPPsym((P)"items");
  lit_55 = YPPlist(1,YPPsym((P)"c"));
  T59 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T58 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_54),T59,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYitems,T58);
  T60 = YPfalse;
  return T60;
}

P YgooScolsScolY___main_1___() {
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
DEFCREGS();
loop:
  lit_56 = YPPsym((P)"col-res-type");
  lit_57 = YPPlist(1,YPPsym((P)"c"));
  T1 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_56),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol_res_type,T0);
  lit_58 = YPPsym((P)"<enum>");
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_58),T3);
  VARSET(YgooScolsScolYLenumG,T2);
  lit_59 = YPPsym((P)"enum");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_59),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYenum,T4);
  lit_61 = YPPsym((P)"fin?");
  lit_62 = YPPlist(1,YPPsym((P)"e"));
  T7 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_61),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfinQ,T6);
  lit_63 = YPPsym((P)"nxt");
  lit_64 = YPPlist(1,YPPsym((P)"e"));
  T9 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_63),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnxt,T8);
  lit_65 = YPPsym((P)"now");
  lit_66 = YPPlist(1,YPPsym((P)"e"));
  T11 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_65),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow,T10);
  lit_67 = YPPsym((P)"now-setter");
  lit_68 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T13 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_67),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow_setter,T12);
  lit_69 = YPPsym((P)"now-key");
  lit_70 = YPPlist(1,YPPsym((P)"e"));
  T15 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_69),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow_key,T14);
  lit_71 = YPPsym((P)"do-keyed");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_71),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdo_keyed,T16);
  lit_73 = YPPsym((P)"map-keyed");
  lit_74 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T19 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_73),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYmap_keyed,T18);
  lit_75 = YPPsym((P)"map");
  lit_76 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_75),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYmap,T20);
  lit_77 = YPPsym((P)"fab-into");
  lit_78 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_77),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_into,T22);
  lit_79 = YPPsym((P)"fab-fill!");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T25 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_79),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_fillX,T24);
  lit_81 = YPPsym((P)"low-elt");
  lit_82 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T27 = YPsig(LITREF(lit_82),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_81),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYlow_elt,T26);
  lit_83 = YPPsym((P)"fab-elt-setter");
  lit_84 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"x"),YPPsym((P)"k"));
  T29 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_83),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_elt_setter,T28);
  lit_85 = YPPsym((P)"col-res");
  lit_86 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T31 = YPsig(LITREF(lit_86),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_85),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol_res,T30);
  lit_87 = YPPsym((P)"as");
  lit_88 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T32 = YPsig(LITREF(lit_88),YPPlist(2,T33,VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_87),T32,ENVNUL,PNUL,sloc(67));
  T35 = VARREF_OR(YgooStypesYas,YPfalse);
  T36 = fun_as_0;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YgooStypesYas,T34);
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_dup_1 = YPmet(FUNCODEREF(fun_dup_1),LITREF(lit_22),T37,ENVNUL,PNUL,sloc(72));
  T39 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T40 = fun_dup_1;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YgooScolsScolYdup,T38);
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T41 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLcolIG)),YPfalse,YPint((P)1),VARREF(YLcolIG),Ynil);
  fun_dup_2 = YPmet(FUNCODEREF(fun_dup_2),LITREF(lit_22),T41,ENVNUL,PNUL,sloc(76));
  T43 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T44 = fun_dup_2;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YgooScolsScolYdup,T42);
  lit_91 = YPPlist(1,YPPsym((P)"x"));
  lit_92 = YPPsym((P)"count");
  lit_93 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"i"));
  T46 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_count_3 = YPmet(FUNCODEREF(fun_count_3),LITREF(lit_92),T46,ENVNUL,PNUL,sloc(82));
  T45 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_4 = YPmet(FUNCODEREF(fun_len_4),LITREF(lit_0),T45,ENVNUL,PNUL,sloc(81));
  T48 = VARREF_OR(YgooStypesYlen,YPfalse);
  T49 = fun_len_4;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooStypesYlen,T47);
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_5 = YPmet(FUNCODEREF(fun_elt_type_5),LITREF(lit_6),T50,ENVNUL,PNUL,sloc(85));
  T52 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T53 = fun_elt_type_5;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooScolsScolYelt_type,T51);
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_6 = YPmet(FUNCODEREF(fun_key_type_6),LITREF(lit_10),T54,ENVNUL,PNUL,sloc(86));
  T56 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T57 = fun_key_type_6;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YgooScolsScolYkey_type,T55);
  lit_96 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_7 = YPmet(FUNCODEREF(fun_key_test_7),LITREF(lit_12),T58,ENVNUL,PNUL,sloc(87));
  T60 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T61 = fun_key_test_7;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YgooScolsScolYkey_test,T59);
  lit_97 = YPPlist(1,YPPsym((P)"c"));
  T62 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_8 = YPmet(FUNCODEREF(fun_emptyQ_8),LITREF(lit_16),T62,ENVNUL,PNUL,sloc(93));
  T64 = VARREF_OR(YgooSmacrosYemptyQ,YPfalse);
  T65 = fun_emptyQ_8;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YgooSmacrosYemptyQ,T63);
  lit_98 = YPPlist(1,YPPsym((P)"c"));
  T67 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T66 = YPsig(LITREF(lit_98),YPPlist(1,T67),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_18),T66,ENVNUL,PNUL,sloc(96));
  T69 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T70 = fun_empty_9;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T70);
  VARSET(YgooScolsScolYempty,T68);
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  T71 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_10 = YPmet(FUNCODEREF(fun_elt_default_10),LITREF(lit_8),T71,ENVNUL,PNUL,sloc(99));
  T73 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T74 = fun_elt_default_10;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YgooScolsScolYelt_default,T72);
  lit_100 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  lit_101 = YPPsym((P)"in");
  lit_102 = YPPlist(1,YPPsym((P)"ss"));
  T76 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_11 = YPmet(FUNCODEREF(fun_in_11),LITREF(lit_101),T76,ENVNUL,PNUL,sloc(105));
  T75 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_into_12 = YPmet(FUNCODEREF(fun_fab_into_12),LITREF(lit_77),T75,ENVNUL,PNUL,sloc(104));
  T78 = VARREF_OR(YgooScolsScolYfab_into,YPfalse);
  T79 = fun_fab_into_12;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YgooScolsScolYfab_into,T77);
  lit_103 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T81 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T80 = YPsig(LITREF(lit_103),YPPlist(1,T81),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_fabs_13 = YPmet(FUNCODEREF(fun_fabs_13),LITREF(lit_28),T80,ENVNUL,PNUL,sloc(111));
  T83 = VARREF_OR(YgooSmathYfabs,YPfalse);
  T84 = fun_fabs_13;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YgooSmathYfabs,T82);
  lit_104 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  lit_105 = YPPlist(1,YPPsym((P)"ds"));
  T86 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_14 = YPmet(FUNCODEREF(fun_in_14),LITREF(lit_101),T86,ENVNUL,PNUL,sloc(115));
  T85 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_fillX_15 = YPmet(FUNCODEREF(fun_fab_fillX_15),LITREF(lit_79),T85,ENVNUL,PNUL,sloc(114));
  T88 = VARREF_OR(YgooScolsScolYfab_fillX,YPfalse);
  T89 = fun_fab_fillX_15;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YgooScolsScolYfab_fillX,T87);
  lit_106 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"val"));
  T90 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_16 = YPmet(FUNCODEREF(fun_fill_16),LITREF(lit_30),T90,ENVNUL,PNUL,sloc(121));
  T92 = VARREF_OR(YgooScolsScolYfill,YPfalse);
  T93 = fun_fill_16;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YgooScolsScolYfill,T91);
  lit_107 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  lit_108 = YPPsym((P)"fnd");
  lit_109 = YPPlist(1,YPPsym((P)"e"));
  T95 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_17 = YPmet(FUNCODEREF(fun_fnd_17),LITREF(lit_108),T95,ENVNUL,PNUL,sloc(125));
  T94 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_18 = YPmet(FUNCODEREF(fun_anyQ_18),LITREF(lit_32),T94,ENVNUL,PNUL,sloc(124));
  T97 = VARREF_OR(YgooStypesYanyQ,YPfalse);
  T98 = fun_anyQ_18;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YgooStypesYanyQ,T96);
  lit_110 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  lit_111 = YPPlist(1,YPPsym((P)"e"));
  T100 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_19 = YPmet(FUNCODEREF(fun_fnd_19),LITREF(lit_108),T100,ENVNUL,PNUL,sloc(131));
  T99 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_20 = YPmet(FUNCODEREF(fun_allQ_20),LITREF(lit_34),T99,ENVNUL,PNUL,sloc(130));
  T102 = VARREF_OR(YgooScolsScolYallQ,YPfalse);
  T103 = fun_allQ_20;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooScolsScolYallQ,T101);
  lit_112 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  lit_113 = YPPsym((P)"red");
  lit_114 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T105 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_21 = YPmet(FUNCODEREF(fun_red_21),LITREF(lit_113),T105,ENVNUL,PNUL,sloc(136));
  T104 = YPsig(LITREF(lit_112),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_22 = YPmet(FUNCODEREF(fun_fold_22),LITREF(lit_36),T104,ENVNUL,PNUL,sloc(135));
  T107 = VARREF_OR(YgooScolsScolYfold,YPfalse);
  T108 = fun_fold_22;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T108);
  VARSET(YgooScolsScolYfold,T106);
  lit_115 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"c"));
  lit_116 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T110 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_23 = YPmet(FUNCODEREF(fun_red_23),LITREF(lit_113),T110,ENVNUL,PNUL,sloc(144));
  T109 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_24 = YPmet(FUNCODEREF(fun_foldA_24),LITREF(lit_38),T109,ENVNUL,PNUL,sloc(141));
  T112 = VARREF_OR(YgooScolsScolYfoldA,YPfalse);
  T113 = fun_foldA_24;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YgooScolsScolYfoldA,T111);
  lit_117 = YPPsym((P)"<elt-default>");
  T115 = (P)YPpair(VARREF(YLanyG),Ynil);
  T114 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_117),T115);
  VARSET(YgooScolsScolYLelt_defaultG,T114);
  T116 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsScolYLelt_defaultG));
  VARSET(YgooScolsScolYDelt_default,T116);
  lit_118 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"c"),YPPsym((P)"default"));
  lit_119 = YPPlist(1,YPPsym((P)"e"));
  T118 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_25 = YPmet(FUNCODEREF(fun_fnd_25),LITREF(lit_108),T118,ENVNUL,PNUL,sloc(153));
  T117 = YPsig(LITREF(lit_118),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_26 = YPmet(FUNCODEREF(fun_find_or_26),LITREF(lit_40),T117,ENVNUL,PNUL,sloc(152));
  T120 = VARREF_OR(YgooScolsScolYfind_or,YPfalse);
  T121 = fun_find_or_26;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YgooScolsScolYfind_or,T119);
  lit_120 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T122 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_27 = YPmet(FUNCODEREF(fun_find_27),LITREF(lit_42),T122,ENVNUL,PNUL,sloc(158));
  T124 = VARREF_OR(YgooScolsScolYfind,YPfalse);
  T125 = fun_find_27;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YgooScolsScolYfind,T123);
  lit_121 = YPPlist(1,YPPsym((P)"x"));
  T126 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_zap_28 = YPmet(FUNCODEREF(fun_zap_28),LITREF(lit_46),T126,ENVNUL,PNUL,sloc(164));
  T128 = VARREF_OR(YgooScolsScolYzap,YPfalse);
  T129 = fun_zap_28;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YgooScolsScolYzap,T127);
  lit_122 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_123 = YPPsym((P)"lop");
  lit_124 = YPPlist(1,YPPsym((P)"e"));
  T131 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_29 = YPmet(FUNCODEREF(fun_lop_29),LITREF(lit_123),T131,ENVNUL,PNUL,sloc(168));
  T130 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_30 = YPmet(FUNCODEREF(fun_do_30),LITREF(lit_48),T130,ENVNUL,PNUL,sloc(167));
  T133 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T134 = fun_do_30;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YgooSmacrosYdo,T132);
  lit_125 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_126 = YPPsym((P)"con");
  lit_127 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T136 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_31 = YPmet(FUNCODEREF(fun_con_31),LITREF(lit_126),T136,ENVNUL,PNUL,sloc(173));
  T135 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_32 = YPmet(FUNCODEREF(fun_map_32),LITREF(lit_75),T135,ENVNUL,PNUL,sloc(172));
  T138 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T139 = fun_map_32;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YgooSmacrosYmap,T137);
  lit_128 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_129 = YPPlist(1,YPPsym((P)"e"));
  T141 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_33 = YPmet(FUNCODEREF(fun_lop_33),LITREF(lit_123),T141,ENVNUL,PNUL,sloc(180));
  T140 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_34 = YPmet(FUNCODEREF(fun_do_keyed_34),LITREF(lit_71),T140,ENVNUL,PNUL,sloc(179));
  T143 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T144 = fun_do_keyed_34;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YgooScolsScolYdo_keyed,T142);
  lit_130 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_131 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T146 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_35 = YPmet(FUNCODEREF(fun_con_35),LITREF(lit_126),T146,ENVNUL,PNUL,sloc(185));
  T145 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_36 = YPmet(FUNCODEREF(fun_map_keyed_36),LITREF(lit_73),T145,ENVNUL,PNUL,sloc(184));
  T148 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T149 = fun_map_keyed_36;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YgooScolsScolYmap_keyed,T147);
  lit_132 = YPPlist(1,YPPsym((P)"c"));
  lit_133 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T151 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_37 = YPmet(FUNCODEREF(fun_con_37),LITREF(lit_126),T151,ENVNUL,PNUL,sloc(193));
  T150 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_38 = YPmet(FUNCODEREF(fun_keys_38),LITREF(lit_52),T150,ENVNUL,PNUL,sloc(192));
  T153 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T154 = fun_keys_38;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YgooScolsScolYkeys,T152);
  lit_134 = YPPlist(1,YPPsym((P)"c"));
  lit_135 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T156 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_39 = YPmet(FUNCODEREF(fun_con_39),LITREF(lit_126),T156,ENVNUL,PNUL,sloc(199));
  T155 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_items_40 = YPmet(FUNCODEREF(fun_items_40),LITREF(lit_54),T155,ENVNUL,PNUL,sloc(198));
  T158 = VARREF_OR(YgooScolsScolYitems,YPfalse);
  T159 = fun_items_40;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T159);
  VARSET(YgooScolsScolYitems,T157);
  lit_136 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_137 = YPPlist(1,YPPsym((P)"y"));
  T161 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T161,ENVNUL,PNUL,sloc(205));
  T160 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_42 = YPmet(FUNCODEREF(fun_memQ_42),LITREF(lit_50),T160,ENVNUL,PNUL,sloc(204));
  T163 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T164 = fun_memQ_42;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YgooScolsScolYmemQ,T162);
  lit_138 = YPPlist(1,YPPsym((P)"c"));
  T165 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_43 = YPmet(FUNCODEREF(fun_col_res_type_43),LITREF(lit_56),T165,ENVNUL,PNUL,sloc(207));
  T167 = VARREF_OR(YgooScolsScolYcol_res_type,YPfalse);
  T168 = fun_col_res_type_43;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YgooScolsScolYcol_res_type,T166);
  lit_139 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T171 = YPsig(LITREF(lit_139),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T170 = fun_col_res_44 = YPmet(FUNCODEREF(fun_col_res_44),LITREF(lit_85),T171,ENVNUL,PNUL,sloc(212));
  T174 = VARREF_OR(YgooScolsScolYcol_res,YPfalse);
  T175 = fun_col_res_44;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  T172 = VARSET(YgooScolsScolYcol_res,T173);
  T169 = T172;
  return T169;
}

P YgooScolsScolY___main_2___() {
  P tmpF1711;
  P tmpF1710;
  P tmpF1709;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
loop:
  lit_140 = YPPlist(1,YPPsym((P)"eq-nul"));
  VARSET(YgooScolsScolYDeq_nul,LITREF(lit_140));
  lit_141 = YPPsym((P)"=");
  lit_142 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  lit_143 = YPPsym((P)"eq");
  lit_144 = YPPlist(1,YPPsym((P)"e1"));
  T1 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eq_45 = YPmet(FUNCODEREF(fun_eq_45),LITREF(lit_143),T1,ENVNUL,PNUL,sloc(218));
  T0 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_46 = YPmet(FUNCODEREF(fun_E_46),LITREF(lit_141),T0,ENVNUL,PNUL,sloc(217));
  T3 = VARREF_OR(YgooSmathYE,YPfalse);
  T4 = fun_E_46;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T4);
  VARSET(YgooSmathYE,T2);
  lit_145 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"key"));
  T5 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_47 = YPmet(FUNCODEREF(fun_elt_47),LITREF(lit_2),T5,ENVNUL,PNUL,sloc(225));
  T7 = VARREF_OR(YgooSmacrosYelt,YPfalse);
  T8 = fun_elt_47;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T8);
  VARSET(YgooSmacrosYelt,T6);
  tmpF1709 = YPfalse;
  if (tmpF1709 != YPfalse) {
    T9 = VARREF(YgooScolsScolYadd);
  } else {
    T9 = YPfalse;
  }
  tmpF1710 = YPfalse;
  if (tmpF1710 != YPfalse) {
    T10 = VARREF(YgooScolsScolYLtabG);
  } else {
    T10 = YPfalse;
  }
  tmpF1711 = YPfalse;
  if (tmpF1711 != YPfalse) {
    T11 = VARREF(YgooScolsScolYinto);
  } else {
    T11 = YPfalse;
  }
  T12 = YPfalse;
  return T12;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"odd?", &module_info_gooSmath, NULL},
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
  {"eof-object", &module_info_gooSmath, NULL},
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
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
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
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
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
  {"~=", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
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
  {"char->ascii", &module_info_gooSmath, NULL},
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
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
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
  {"$pi", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
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
  {"bit?", &module_info_gooSmath, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
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
  {">>>", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
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
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
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
  {"logn", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
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
  {"ceil/", &module_info_gooSmath, NULL},
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
  {"asin", &module_info_gooSmath, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
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
  {"---main-1---", PVAR, NULL},
  {"<enum>", CVAR, &YgooScolsScolYLenumG},
  {"elt-type", CVAR, &YgooScolsScolYelt_type},
  {"fab-fill!", CVAR, &YgooScolsScolYfab_fillX},
  {"col-res-type", CVAR, &YgooScolsScolYcol_res_type},
  {"fill", CVAR, &YgooScolsScolYfill},
  {"$elt-default", CVAR, &YgooScolsScolYDelt_default},
  {"fab-into", CVAR, &YgooScolsScolYfab_into},
  {"items", CVAR, &YgooScolsScolYitems},
  {"elt-or", CVAR, &YgooScolsScolYelt_or},
  {"nxt", CVAR, &YgooScolsScolYnxt},
  {"now-key", CVAR, &YgooScolsScolYnow_key},
  {"col", CVAR, &YgooScolsScolYcol},
  {"mem?", CVAR, &YgooScolsScolYmemQ},
  {"now", CVAR, &YgooScolsScolYnow},
  {"find-or", CVAR, &YgooScolsScolYfind_or},
  {"map-keyed", CVAR, &YgooScolsScolYmap_keyed},
  {"fin?", CVAR, &YgooScolsScolYfinQ},
  {"zap", CVAR, &YgooScolsScolYzap},
  {"enum", CVAR, &YgooScolsScolYenum},
  {"do-keyed", CVAR, &YgooScolsScolYdo_keyed},
  {"<elt-default>", CVAR, &YgooScolsScolYLelt_defaultG},
  {"dup", CVAR, &YgooScolsScolYdup},
  {"del", CVAR, &YgooScolsScolYdel},
  {"---main-2---", PVAR, NULL},
  {"add", CVAR, &YgooScolsScolYadd},
  {"now-setter", CVAR, &YgooScolsScolYnow_setter},
  {"find", CVAR, &YgooScolsScolYfind},
  {"empty", CVAR, &YgooScolsScolYempty},
  {"---main-0---", PVAR, NULL},
  {"fab", CVAR, &YgooScolsScolYfab},
  {"into", CVAR, &YgooScolsScolYinto},
  {"all?", CVAR, &YgooScolsScolYallQ},
  {"col-res", CVAR, &YgooScolsScolYcol_res},
  {"fold+", CVAR, &YgooScolsScolYfoldA},
  {"elts", CVAR, &YgooScolsScolYelts},
  {"keys", CVAR, &YgooScolsScolYkeys},
  {"<tab>", CVAR, &YgooScolsScolYLtabG},
  {"key-test", CVAR, &YgooScolsScolYkey_test},
  {"$eq-nul", CVAR, &YgooScolsScolYDeq_nul},
  {"fab-elt-setter", CVAR, &YgooScolsScolYfab_elt_setter},
  {"fold", CVAR, &YgooScolsScolYfold},
  {"key-type", CVAR, &YgooScolsScolYkey_type},
  {"low-elt", CVAR, &YgooScolsScolYlow_elt},
  {"elt-default", CVAR, &YgooScolsScolYelt_default},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"any?", NULL},
  {"<enum>", NULL},
  {"elt-type", NULL},
  {"fab-fill!", NULL},
  {"col-res-type", NULL},
  {"fill", NULL},
  {"fab-into", NULL},
  {"items", NULL},
  {"elt-or", NULL},
  {"fabs", NULL},
  {"nxt", NULL},
  {"map", NULL},
  {"now-key", NULL},
  {"col", NULL},
  {"mem?", NULL},
  {"elt", NULL},
  {"now", NULL},
  {"map-keyed", NULL},
  {"len", NULL},
  {"fin?", NULL},
  {"zap", NULL},
  {"enum", NULL},
  {"do-keyed", NULL},
  {"dup", NULL},
  {"del", NULL},
  {"add", NULL},
  {"now-setter", NULL},
  {"find", NULL},
  {"do", NULL},
  {"empty", NULL},
  {"find-or", NULL},
  {"fab", NULL},
  {"empty?", NULL},
  {"into", NULL},
  {"all?", NULL},
  {"col-res", NULL},
  {"fold+", NULL},
  {"<tab>", NULL},
  {"<col.>", NULL},
  {"elts", NULL},
  {"keys", NULL},
  {"<col>", NULL},
  {"key-test", NULL},
  {"fab-elt-setter", NULL},
  {"fold", NULL},
  {"key-type", NULL},
  {"low-elt", NULL},
  {"elt-default", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsScol;
MODULE_INFO module_info_gooScolsScol = {
  "goo/cols/col",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);

/* EXPRESSION: */

extern void load_module_gooScolsScol (void);

void load_module_gooScolsScol (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();

  (P)YgooScolsScolY___main_0___();
  (P)YgooScolsScolY___main_1___();
  (P)YgooScolsScolY___main_2___();

}

/* END OF GENERATED CODE. */
