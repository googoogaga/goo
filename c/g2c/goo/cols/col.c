/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/col");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/col */

EXT(Yclone,"goo/boot","clone");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooScolsScolYDelt_default,"goo/cols/col","$elt-default");
DEF(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooScolsScolYDeq_nul,"goo/cols/col","$eq-nul");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynil,"goo/boot","nil");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YgooScolsScolYLelt_defaultG,"goo/cols/col","<elt-default>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_45);
DEFLIT(lit_49);
DEFLIT(lit_61);
DEFLIT(lit_117);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_77);
DEFLIT(lit_92);
DEFLIT(lit_50);
DEFLIT(lit_31);
DEFLIT(lit_120);
DEFLIT(lit_68);
DEFLIT(lit_60);
DEFLIT(lit_86);
DEFLIT(lit_36);
DEFLIT(lit_22);
DEFLIT(lit_11);
DEFLIT(lit_40);
DEFLIT(lit_99);
DEFLIT(lit_44);
DEFLIT(lit_16);
DEFLIT(lit_81);
DEFLIT(lit_64);
DEFLIT(lit_13);
DEFLIT(lit_43);
DEFLIT(lit_56);
DEFLIT(lit_101);
DEFLIT(lit_63);
DEFLIT(lit_91);
DEFLIT(lit_15);
DEFLIT(lit_107);
DEFLIT(lit_88);
DEFLIT(lit_62);
DEFLIT(lit_90);
DEFLIT(lit_71);
DEFLIT(lit_65);
DEFLIT(lit_10);
DEFLIT(lit_57);
DEFLIT(lit_2);
DEFLIT(lit_105);
DEFLIT(lit_110);
DEFLIT(lit_108);
DEFLIT(lit_69);
DEFLIT(lit_30);
DEFLIT(lit_25);
DEFLIT(lit_87);
DEFLIT(lit_97);
DEFLIT(lit_112);
DEFLIT(lit_17);
DEFLIT(lit_35);
DEFLIT(lit_59);
DEFLIT(lit_78);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_19);
DEFLIT(lit_37);
DEFLIT(lit_5);
DEFLIT(lit_66);
DEFLIT(lit_114);
DEFLIT(lit_48);
DEFLIT(lit_54);
DEFLIT(lit_4);
DEFLIT(lit_47);
DEFLIT(lit_111);
DEFLIT(lit_34);
DEFLIT(lit_20);
DEFLIT(lit_72);
DEFLIT(lit_123);
DEFLIT(lit_38);
DEFLIT(lit_8);
DEFLIT(lit_100);
DEFLIT(lit_42);
DEFLIT(lit_0);
DEFLIT(lit_52);
DEFLIT(lit_79);
DEFLIT(lit_106);
DEFLIT(lit_51);
DEFLIT(lit_116);
DEFLIT(lit_103);
DEFLIT(lit_109);
DEFLIT(lit_93);
DEFLIT(lit_122);
DEFLIT(lit_29);
DEFLIT(lit_118);
DEFLIT(lit_41);
DEFLIT(lit_104);
DEFLIT(lit_23);
DEFLIT(lit_94);
DEFLIT(lit_74);
DEFLIT(lit_95);
DEFLIT(lit_76);
DEFLIT(lit_55);
DEFLIT(lit_14);
DEFLIT(lit_27);
DEFLIT(lit_46);
DEFLIT(lit_82);
DEFLIT(lit_26);
DEFLIT(lit_83);
DEFLIT(lit_102);
DEFLIT(lit_84);
DEFLIT(lit_113);
DEFLIT(lit_121);
DEFLIT(lit_96);
DEFLIT(lit_28);
DEFLIT(lit_119);
DEFLIT(lit_67);
DEFLIT(lit_73);
DEFLIT(lit_80);
DEFLIT(lit_24);
DEFLIT(lit_6);
DEFLIT(lit_21);
DEFLIT(lit_85);
DEFLIT(lit_39);
DEFLIT(lit_1);
DEFLIT(lit_115);
DEFLIT(lit_33);
DEFLIT(lit_18);
DEFLIT(lit_98);
DEFLIT(lit_89);
DEFLIT(lit_7);
DEFLIT(lit_58);
DEFLIT(lit_70);
DEFLIT(lit_32);
DEFLIT(lit_53);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_dup_1);
LOCFOR(fun_dup_2);
LOCFOR(fun_len_3);
LOCFOR(fun_elt_type_4);
LOCFOR(fun_key_type_5);
LOCFOR(fun_key_test_6);
LOCFOR(fun_emptyQ_7);
LOCFOR(fun_empty_8);
LOCFOR(fun_elt_default_9);
LOCFOR(fun_fab_into_10);
LOCFOR(fun_fabs_11);
LOCFOR(fun_fab_fillX_12);
LOCFOR(fun_fill_13);
LOCFOR(fun_anyQ_14);
LOCFOR(fun_allQ_15);
LOCFOR(fun_fold_16);
LOCFOR(fun_foldA_17);
LOCFOR(fun_find_or_18);
LOCFOR(fun_find_19);
LOCFOR(fun_zap_20);
LOCFOR(fun_do_21);
LOCFOR(fun_map_22);
LOCFOR(fun_do_keyed_23);
LOCFOR(fun_map_keyed_24);
LOCFOR(fun_keys_25);
LOCFOR(fun_items_26);
LOCFOR(fun_27);
LOCFOR(fun_memQ_28);
LOCFOR(fun_col_res_type_29);
LOCFOR(fun_col_res_30);
LOCFOR(fun_E_31);
LOCFOR(fun_elt_32);
extern P YgooScolsScolY___main_0___ ();
extern P YgooScolsScolY___main_1___ ();
extern P YgooScolsScolY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_0) {
  P t_,x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
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
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(Yclass_of),x_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),T2,T3);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_dup_2) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_len_3) {
  P x_;
  P iF1729;
  P eF1728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF1728 = T2;
  iF1729 = YPint((P)0);
  for (;;) {
    P a48_0,a48_1;
  loop48:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1728);
    if (T5 != YPfalse) {
      T4 = iF1729;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1728);
      T8 = CALL2(1,VARREF(YgooSmathYA),iF1729,YPint((P)1));
      a48_0 = T7;
      a48_1 = T8;
      eF1728 = a48_0;
      iF1729 = a48_1;
      goto loop48;
      T4 = T6;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_type_4) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_type_5) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_test_6) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

FUNCODEDEF(fun_emptyQ_7) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_8) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_default_9) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_fab_into_10) {
  P dst_,src_;
  P ssF1730;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  ssF1730 = T2;
  for (;;) {
    P a49_0;
  loop49:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),ssF1730);
    if (T5 != YPfalse) {
      T4 = dst_;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),ssF1730);
      T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),ssF1730);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T6,dst_,T7);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),ssF1730);
      a49_0 = T9;
      ssF1730 = a49_0;
      goto loop49;
      T4 = T8;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fabs_11) {
  P c_,objects_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),c_,T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,objects_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_fillX_12) {
  P dst_,src_;
  P dsF1731;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  dsF1731 = T2;
  for (;;) {
    P a50_0;
  loop50:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),dsF1731);
    if (T5 != YPfalse) {
      T4 = dst_;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow_key),dsF1731);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),src_,dst_,T6);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),dsF1731);
      a50_0 = T8;
      dsF1731 = a50_0;
      goto loop50;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fill_13) {
  P dst_,val_;
  P T0,T1;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),dst_);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_fillX),T1,val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_anyQ_14) {
  P test_,c_;
  P tmpF1733;
  P eF1732;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1732 = T2;
  for (;;) {
    P a51_0;
  loop51:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1732);
    if (T5 != YPfalse) {
      T4 = YPfalse;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),eF1732);
      T8 = CALL1(0,test_,T9);
      T7 = CALL1(1,VARREF(YgooSmathYas_log),T8);
      tmpF1733 = T7;
      if (tmpF1733 != YPfalse) {
        T10 = tmpF1733;
      } else {
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1732);
        a51_0 = T12;
        eF1732 = a51_0;
        goto loop51;
        T10 = T11;
      }
      T6 = T10;
      T4 = T6;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_allQ_15) {
  P test_,c_;
  P tmpF1736;
  P tmpF1735;
  P eF1734;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1734 = T2;
  for (;;) {
    P a52_0;
  loop52:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1734);
    tmpF1735 = T5;
    if (tmpF1735 != YPfalse) {
      T6 = tmpF1735;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),eF1734);
      T8 = CALL1(0,test_,T9);
      tmpF1736 = T8;
      if (tmpF1736 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1734);
        a52_0 = T12;
        eF1734 = a52_0;
        goto loop52;
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T7 = T10;
      T6 = T7;
    }
    T4 = T6;
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fold_16) {
  P combine_,init_,c_;
  P eF1738;
  P resF1737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF1737 = init_;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1738 = T2;
  for (;;) {
    P a53_0,a53_1;
  loop53:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1738);
    if (T5 != YPfalse) {
      T4 = resF1737;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF1738);
      T7 = CALL2(0,combine_,resF1737,T8);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1738);
      a53_0 = T7;
      a53_1 = T9;
      resF1737 = a53_0;
      eF1738 = a53_1;
      goto loop53;
      T4 = T6;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_foldA_17) {
  P combine_,c_;
  P eF1742;
  P resF1741;
  P initF1740;
  P eF1739;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1739 = T1;
  T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF1739);
  initF1740 = T3;
  resF1741 = initF1740;
  T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1739);
  eF1742 = T5;
  for (;;) {
    P a54_0,a54_1;
  loop54:
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1742);
    if (T8 != YPfalse) {
      T7 = resF1741;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),eF1742);
      T10 = CALL2(0,combine_,resF1741,T11);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1742);
      a54_0 = T10;
      a54_1 = T12;
      resF1741 = a54_0;
      eF1742 = a54_1;
      goto loop54;
      T7 = T9;
    }
    break;
  }
  T6 = T7;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_or_18) {
  P f_,c_,default_;
  P eF1743;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1743 = T2;
  for (;;) {
    P a55_0;
  loop55:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1743);
    if (T5 != YPfalse) {
      T4 = default_;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF1743);
      T7 = CALL1(0,f_,T8);
      if (T7 != YPfalse) {
        T9 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF1743);
        T6 = T9;
      } else {
        T11 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1743);
        a55_0 = T11;
        eF1743 = a55_0;
        goto loop55;
        T6 = T10;
      }
      T4 = T6;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_19) {
  P f_,c_;
  P valF1744;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T1 = CALL3(1,VARREF(YgooScolsScolYfind_or),f_,c_,VARREF(YgooScolsScolYDelt_default));
  valF1744 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF1744,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,f_);
    T2 = T4;
  } else {
    T2 = valF1744;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zap_20) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yclass_of),x_);
  T0 = CALL1(1,VARREF(YgooScolsScolYempty),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_21) {
  P f_,c_;
  P eF1745;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1745 = T2;
  for (;;) {
    P a56_0;
  loop56:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1745);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF1745);
      CALL1(0,f_,T7);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1745);
      a56_0 = T9;
      eF1745 = a56_0;
      goto loop56;
      T4 = T8;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_22) {
  P f_,c_;
  P eF1747;
  P resF1746;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF1746 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1747 = T3;
  for (;;) {
    P a57_0,a57_1;
  loop57:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1747);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF1746);
      T5 = T7;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),eF1747);
      T8 = CALL1(1,f_,T9);
      T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF1747);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T8,resF1746,T10);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1747);
      a57_0 = resF1746;
      a57_1 = T12;
      resF1746 = a57_0;
      eF1747 = a57_1;
      goto loop57;
      T5 = T11;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_keyed_23) {
  P f_,c_;
  P eF1748;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1748 = T2;
  for (;;) {
    P a58_0;
  loop58:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1748);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF1748);
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF1748);
      CALL2(1,f_,T7,T8);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1748);
      a58_0 = T10;
      eF1748 = a58_0;
      goto loop58;
      T4 = T9;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_24) {
  P f_,c_;
  P keyF1751;
  P eF1750;
  P resF1749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF1749 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1750 = T3;
  for (;;) {
    P a59_0,a59_1;
  loop59:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1750);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF1749);
      T5 = T7;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF1750);
      keyF1751 = T9;
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),eF1750);
      T10 = CALL2(0,f_,keyF1751,T11);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T10,resF1749,keyF1751);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1750);
      a59_0 = resF1749;
      a59_1 = T13;
      resF1749 = a59_0;
      eF1750 = a59_1;
      goto loop59;
      T8 = T12;
      T5 = T8;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_25) {
  P c_;
  P eF1753;
  P resF1752;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  resF1752 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1753 = T2;
  for (;;) {
    P a60_0,a60_1;
  loop60:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1753);
    if (T5 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),resF1752);
      T4 = T6;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF1753);
      T8 = CALL2(1,VARREF(YgooScolsScolYadd),resF1752,T9);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1753);
      a60_0 = T8;
      a60_1 = T10;
      resF1752 = a60_0;
      eF1753 = a60_1;
      goto loop60;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_items_26) {
  P c_;
  P eF1755;
  P resF1754;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(c_, 0);
  resF1754 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1755 = T2;
  for (;;) {
    P a61_0,a61_1;
  loop61:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1755);
    if (T5 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),resF1754);
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF1755);
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),eF1755);
      T9 = CALL2(1,VARREF(Ytup),T10,T11);
      T8 = CALL2(1,VARREF(YgooScolsScolYadd),resF1754,T9);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1755);
      a61_0 = T8;
      a61_1 = T12;
      resF1754 = a61_0;
      eF1755 = a61_1;
      goto loop61;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_27) {
  P y_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_memQ_28) {
  P c_,x_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_27,1,x_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_res_type_29) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(Yclass_of),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_res_30) {
  P c_,x_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYcol_res_type),c_);
  T0 = CALL2(1,VARREF(YgooStypesYas),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_E_31) {
  P c1_,c2_;
  P tmpF1758;
  P e1F1757;
  P tmpF1756;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),c1_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),c2_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,T3);
  tmpF1756 = T1;
  if (tmpF1756 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
    e1F1757 = T6;
    for (;;) {
      P a62_0;
    loop62:
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1F1757);
      if (T9 != YPfalse) {
        T8 = YPtrue;
      } else {
        T12 = CALL1(1,VARREF(YgooScolsScolYnow),e1F1757);
        T14 = CALL1(1,VARREF(YgooScolsScolYnow_key),e1F1757);
        T13 = CALL3(1,VARREF(YgooScolsScolYelt_or),c2_,T14,VARREF(YgooScolsScolYDeq_nul));
        T11 = CALL2(1,VARREF(YgooSmathYE),T12,T13);
        tmpF1758 = T11;
        if (tmpF1758 != YPfalse) {
          T17 = CALL1(1,VARREF(YgooScolsScolYnxt),e1F1757);
          a62_0 = T17;
          e1F1757 = a62_0;
          goto loop62;
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T10 = T15;
        T8 = T10;
      }
      break;
    }
    T7 = T8;
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_32) {
  P c_,key_;
  P valF1759;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,key_,VARREF(YgooScolsScolYDelt_default));
  valF1759 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF1759,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,key_);
    T2 = T4;
  } else {
    T2 = valF1759;
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
  P T160,T161;
DEFCREGS();
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
  T45 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_3 = YPmet(FUNCODEREF(fun_len_3),LITREF(lit_0),T45,ENVNUL,PNUL,sloc(81));
  T47 = VARREF_OR(YgooStypesYlen,YPfalse);
  T48 = fun_len_3;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YgooStypesYlen,T46);
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_4 = YPmet(FUNCODEREF(fun_elt_type_4),LITREF(lit_6),T49,ENVNUL,PNUL,sloc(85));
  T51 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T52 = fun_elt_type_4;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T52);
  VARSET(YgooScolsScolYelt_type,T50);
  lit_93 = YPPlist(1,YPPsym((P)"x"));
  T53 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_5 = YPmet(FUNCODEREF(fun_key_type_5),LITREF(lit_10),T53,ENVNUL,PNUL,sloc(86));
  T55 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T56 = fun_key_type_5;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YgooScolsScolYkey_type,T54);
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T57 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_6 = YPmet(FUNCODEREF(fun_key_test_6),LITREF(lit_12),T57,ENVNUL,PNUL,sloc(87));
  T59 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T60 = fun_key_test_6;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T60);
  VARSET(YgooScolsScolYkey_test,T58);
  lit_95 = YPPlist(1,YPPsym((P)"c"));
  T61 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_7 = YPmet(FUNCODEREF(fun_emptyQ_7),LITREF(lit_16),T61,ENVNUL,PNUL,sloc(93));
  T63 = VARREF_OR(YgooSmacrosYemptyQ,YPfalse);
  T64 = fun_emptyQ_7;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T64);
  VARSET(YgooSmacrosYemptyQ,T62);
  lit_96 = YPPlist(1,YPPsym((P)"c"));
  T66 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T65 = YPsig(LITREF(lit_96),YPPlist(1,T66),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_empty_8 = YPmet(FUNCODEREF(fun_empty_8),LITREF(lit_18),T65,ENVNUL,PNUL,sloc(96));
  T68 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T69 = fun_empty_8;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YgooScolsScolYempty,T67);
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_9 = YPmet(FUNCODEREF(fun_elt_default_9),LITREF(lit_8),T70,ENVNUL,PNUL,sloc(99));
  T72 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T73 = fun_elt_default_9;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YgooScolsScolYelt_default,T71);
  lit_98 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T74 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_into_10 = YPmet(FUNCODEREF(fun_fab_into_10),LITREF(lit_77),T74,ENVNUL,PNUL,sloc(104));
  T76 = VARREF_OR(YgooScolsScolYfab_into,YPfalse);
  T77 = fun_fab_into_10;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YgooScolsScolYfab_into,T75);
  lit_99 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T79 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T78 = YPsig(LITREF(lit_99),YPPlist(1,T79),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_fabs_11 = YPmet(FUNCODEREF(fun_fabs_11),LITREF(lit_28),T78,ENVNUL,PNUL,sloc(111));
  T81 = VARREF_OR(YgooSmathYfabs,YPfalse);
  T82 = fun_fabs_11;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YgooSmathYfabs,T80);
  lit_100 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T83 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_fillX_12 = YPmet(FUNCODEREF(fun_fab_fillX_12),LITREF(lit_79),T83,ENVNUL,PNUL,sloc(114));
  T85 = VARREF_OR(YgooScolsScolYfab_fillX,YPfalse);
  T86 = fun_fab_fillX_12;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YgooScolsScolYfab_fillX,T84);
  lit_101 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"val"));
  T87 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_13 = YPmet(FUNCODEREF(fun_fill_13),LITREF(lit_30),T87,ENVNUL,PNUL,sloc(121));
  T89 = VARREF_OR(YgooScolsScolYfill,YPfalse);
  T90 = fun_fill_13;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YgooScolsScolYfill,T88);
  lit_102 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T91 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_14 = YPmet(FUNCODEREF(fun_anyQ_14),LITREF(lit_32),T91,ENVNUL,PNUL,sloc(124));
  T93 = VARREF_OR(YgooStypesYanyQ,YPfalse);
  T94 = fun_anyQ_14;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YgooStypesYanyQ,T92);
  lit_103 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T95 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_15 = YPmet(FUNCODEREF(fun_allQ_15),LITREF(lit_34),T95,ENVNUL,PNUL,sloc(130));
  T97 = VARREF_OR(YgooScolsScolYallQ,YPfalse);
  T98 = fun_allQ_15;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YgooScolsScolYallQ,T96);
  lit_104 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T99 = YPsig(LITREF(lit_104),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_16 = YPmet(FUNCODEREF(fun_fold_16),LITREF(lit_36),T99,ENVNUL,PNUL,sloc(135));
  T101 = VARREF_OR(YgooScolsScolYfold,YPfalse);
  T102 = fun_fold_16;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YgooScolsScolYfold,T100);
  lit_105 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"c"));
  T103 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_17 = YPmet(FUNCODEREF(fun_foldA_17),LITREF(lit_38),T103,ENVNUL,PNUL,sloc(141));
  T105 = VARREF_OR(YgooScolsScolYfoldA,YPfalse);
  T106 = fun_foldA_17;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YgooScolsScolYfoldA,T104);
  lit_106 = YPPsym((P)"<elt-default>");
  T108 = (P)YPpair(VARREF(YLanyG),Ynil);
  T107 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_106),T108);
  VARSET(YgooScolsScolYLelt_defaultG,T107);
  T109 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsScolYLelt_defaultG));
  VARSET(YgooScolsScolYDelt_default,T109);
  lit_107 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"c"),YPPsym((P)"default"));
  T110 = YPsig(LITREF(lit_107),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_18 = YPmet(FUNCODEREF(fun_find_or_18),LITREF(lit_40),T110,ENVNUL,PNUL,sloc(152));
  T112 = VARREF_OR(YgooScolsScolYfind_or,YPfalse);
  T113 = fun_find_or_18;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YgooScolsScolYfind_or,T111);
  lit_108 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T114 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_19 = YPmet(FUNCODEREF(fun_find_19),LITREF(lit_42),T114,ENVNUL,PNUL,sloc(158));
  T116 = VARREF_OR(YgooScolsScolYfind,YPfalse);
  T117 = fun_find_19;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YgooScolsScolYfind,T115);
  lit_109 = YPPlist(1,YPPsym((P)"x"));
  T118 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_zap_20 = YPmet(FUNCODEREF(fun_zap_20),LITREF(lit_46),T118,ENVNUL,PNUL,sloc(164));
  T120 = VARREF_OR(YgooScolsScolYzap,YPfalse);
  T121 = fun_zap_20;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YgooScolsScolYzap,T119);
  lit_110 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T122 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_21 = YPmet(FUNCODEREF(fun_do_21),LITREF(lit_48),T122,ENVNUL,PNUL,sloc(167));
  T124 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T125 = fun_do_21;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YgooSmacrosYdo,T123);
  lit_111 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T126 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_22 = YPmet(FUNCODEREF(fun_map_22),LITREF(lit_75),T126,ENVNUL,PNUL,sloc(172));
  T128 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T129 = fun_map_22;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YgooSmacrosYmap,T127);
  lit_112 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T130 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_23 = YPmet(FUNCODEREF(fun_do_keyed_23),LITREF(lit_71),T130,ENVNUL,PNUL,sloc(179));
  T132 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T133 = fun_do_keyed_23;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YgooScolsScolYdo_keyed,T131);
  lit_113 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T134 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_24 = YPmet(FUNCODEREF(fun_map_keyed_24),LITREF(lit_73),T134,ENVNUL,PNUL,sloc(184));
  T136 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T137 = fun_map_keyed_24;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YgooScolsScolYmap_keyed,T135);
  lit_114 = YPPlist(1,YPPsym((P)"c"));
  T138 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_25 = YPmet(FUNCODEREF(fun_keys_25),LITREF(lit_52),T138,ENVNUL,PNUL,sloc(192));
  T140 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T141 = fun_keys_25;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YgooScolsScolYkeys,T139);
  lit_115 = YPPlist(1,YPPsym((P)"c"));
  T142 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_items_26 = YPmet(FUNCODEREF(fun_items_26),LITREF(lit_54),T142,ENVNUL,PNUL,sloc(198));
  T144 = VARREF_OR(YgooScolsScolYitems,YPfalse);
  T145 = fun_items_26;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YgooScolsScolYitems,T143);
  lit_116 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"y"));
  T147 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T147,ENVNUL,PNUL,sloc(205));
  T146 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_28 = YPmet(FUNCODEREF(fun_memQ_28),LITREF(lit_50),T146,ENVNUL,PNUL,sloc(204));
  T149 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T150 = fun_memQ_28;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YgooScolsScolYmemQ,T148);
  lit_118 = YPPlist(1,YPPsym((P)"c"));
  T151 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_29 = YPmet(FUNCODEREF(fun_col_res_type_29),LITREF(lit_56),T151,ENVNUL,PNUL,sloc(207));
  T153 = VARREF_OR(YgooScolsScolYcol_res_type,YPfalse);
  T154 = fun_col_res_type_29;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YgooScolsScolYcol_res_type,T152);
  lit_119 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T157 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T156 = fun_col_res_30 = YPmet(FUNCODEREF(fun_col_res_30),LITREF(lit_85),T157,ENVNUL,PNUL,sloc(212));
  T160 = VARREF_OR(YgooScolsScolYcol_res,YPfalse);
  T161 = fun_col_res_30;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  T158 = VARSET(YgooScolsScolYcol_res,T159);
  T155 = T158;
  return T155;
}

P YgooScolsScolY___main_2___() {
  P tmpF1762;
  P tmpF1761;
  P tmpF1760;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
DEFCREGS();
  lit_120 = YPPlist(1,YPPsym((P)"eq-nul"));
  VARSET(YgooScolsScolYDeq_nul,LITREF(lit_120));
  lit_121 = YPPsym((P)"=");
  lit_122 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  T0 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_31 = YPmet(FUNCODEREF(fun_E_31),LITREF(lit_121),T0,ENVNUL,PNUL,sloc(217));
  T2 = VARREF_OR(YgooSmathYE,YPfalse);
  T3 = fun_E_31;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooSmathYE,T1);
  lit_123 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"key"));
  T4 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_32 = YPmet(FUNCODEREF(fun_elt_32),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(225));
  T6 = VARREF_OR(YgooSmacrosYelt,YPfalse);
  T7 = fun_elt_32;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YgooSmacrosYelt,T5);
  tmpF1760 = YPfalse;
  if (tmpF1760 != YPfalse) {
    T8 = VARREF(YgooScolsScolYadd);
  } else {
    T8 = YPfalse;
  }
  tmpF1761 = YPfalse;
  if (tmpF1761 != YPfalse) {
    T9 = VARREF(YgooScolsScolYLtabG);
  } else {
    T9 = YPfalse;
  }
  tmpF1762 = YPfalse;
  if (tmpF1762 != YPfalse) {
    T10 = VARREF(YgooScolsScolYinto);
  } else {
    T10 = YPfalse;
  }
  T11 = YPfalse;
  return T11;
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
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
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
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
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
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
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
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
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
  {"upper?", &module_info_gooSmath, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
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
  {"==", &module_info_gooSmacros, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<tab>", CVAR, &YgooScolsScolYLtabG},
  {"<enum>", CVAR, &YgooScolsScolYLenumG},
  {"fab-fill!", CVAR, &YgooScolsScolYfab_fillX},
  {"all?", CVAR, &YgooScolsScolYallQ},
  {"key-test", CVAR, &YgooScolsScolYkey_test},
  {"col-res-type", CVAR, &YgooScolsScolYcol_res_type},
  {"key-type", CVAR, &YgooScolsScolYkey_type},
  {"$elt-default", CVAR, &YgooScolsScolYDelt_default},
  {"fab-into", CVAR, &YgooScolsScolYfab_into},
  {"items", CVAR, &YgooScolsScolYitems},
  {"elt-default", CVAR, &YgooScolsScolYelt_default},
  {"fill", CVAR, &YgooScolsScolYfill},
  {"elt-type", CVAR, &YgooScolsScolYelt_type},
  {"nxt", CVAR, &YgooScolsScolYnxt},
  {"mem?", CVAR, &YgooScolsScolYmemQ},
  {"now-key", CVAR, &YgooScolsScolYnow_key},
  {"now", CVAR, &YgooScolsScolYnow},
  {"map-keyed", CVAR, &YgooScolsScolYmap_keyed},
  {"---main-0---", PVAR, NULL},
  {"elt-or", CVAR, &YgooScolsScolYelt_or},
  {"---main-1---", PVAR, NULL},
  {"fin?", CVAR, &YgooScolsScolYfinQ},
  {"do-keyed", CVAR, &YgooScolsScolYdo_keyed},
  {"zap", CVAR, &YgooScolsScolYzap},
  {"$eq-nul", CVAR, &YgooScolsScolYDeq_nul},
  {"enum", CVAR, &YgooScolsScolYenum},
  {"col", CVAR, &YgooScolsScolYcol},
  {"dup", CVAR, &YgooScolsScolYdup},
  {"del", CVAR, &YgooScolsScolYdel},
  {"---main-2---", PVAR, NULL},
  {"now-setter", CVAR, &YgooScolsScolYnow_setter},
  {"fab", CVAR, &YgooScolsScolYfab},
  {"find", CVAR, &YgooScolsScolYfind},
  {"add", CVAR, &YgooScolsScolYadd},
  {"col-res", CVAR, &YgooScolsScolYcol_res},
  {"find-or", CVAR, &YgooScolsScolYfind_or},
  {"into", CVAR, &YgooScolsScolYinto},
  {"empty", CVAR, &YgooScolsScolYempty},
  {"fold+", CVAR, &YgooScolsScolYfoldA},
  {"<elt-default>", CVAR, &YgooScolsScolYLelt_defaultG},
  {"fab-elt-setter", CVAR, &YgooScolsScolYfab_elt_setter},
  {"low-elt", CVAR, &YgooScolsScolYlow_elt},
  {"fold", CVAR, &YgooScolsScolYfold},
  {"keys", CVAR, &YgooScolsScolYkeys},
  {"elts", CVAR, &YgooScolsScolYelts},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<tab>", NULL},
  {"<enum>", NULL},
  {"fab-fill!", NULL},
  {"all?", NULL},
  {"key-test", NULL},
  {"col-res-type", NULL},
  {"key-type", NULL},
  {"fab-into", NULL},
  {"items", NULL},
  {"any?", NULL},
  {"<col.>", NULL},
  {"elt-default", NULL},
  {"<col>", NULL},
  {"map", NULL},
  {"fill", NULL},
  {"elt-type", NULL},
  {"nxt", NULL},
  {"mem?", NULL},
  {"now-key", NULL},
  {"now", NULL},
  {"map-keyed", NULL},
  {"fabs", NULL},
  {"do", NULL},
  {"elt-or", NULL},
  {"fin?", NULL},
  {"do-keyed", NULL},
  {"zap", NULL},
  {"enum", NULL},
  {"elt", NULL},
  {"col", NULL},
  {"del", NULL},
  {"len", NULL},
  {"now-setter", NULL},
  {"fab", NULL},
  {"find", NULL},
  {"dup", NULL},
  {"add", NULL},
  {"col-res", NULL},
  {"find-or", NULL},
  {"into", NULL},
  {"empty", NULL},
  {"fold+", NULL},
  {"fab-elt-setter", NULL},
  {"empty?", NULL},
  {"low-elt", NULL},
  {"fold", NULL},
  {"keys", NULL},
  {"elts", NULL},
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
