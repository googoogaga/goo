/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/col */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooScolsScolYDelt_default,"goo/cols/col","$elt-default");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYT,"goo/math","*");
DEF(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
DEF(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooScolsScolYLelt_defaultG,"goo/cols/col","<elt-default>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
DEF(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
DEF(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooScolsScolYDeq_nul,"goo/cols/col","$eq-nul");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYtan,"goo/math","tan");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_77);
DEFLIT(lit_113);
DEFLIT(lit_42);
DEFLIT(lit_143);
DEFLIT(lit_131);
DEFLIT(lit_144);
DEFLIT(lit_126);
DEFLIT(lit_46);
DEFLIT(lit_6);
DEFLIT(lit_72);
DEFLIT(lit_118);
DEFLIT(lit_12);
DEFLIT(lit_5);
DEFLIT(lit_81);
DEFLIT(lit_141);
DEFLIT(lit_23);
DEFLIT(lit_29);
DEFLIT(lit_116);
DEFLIT(lit_142);
DEFLIT(lit_65);
DEFLIT(lit_55);
DEFLIT(lit_100);
DEFLIT(lit_84);
DEFLIT(lit_106);
DEFLIT(lit_51);
DEFLIT(lit_49);
DEFLIT(lit_22);
DEFLIT(lit_123);
DEFLIT(lit_4);
DEFLIT(lit_112);
DEFLIT(lit_107);
DEFLIT(lit_119);
DEFLIT(lit_134);
DEFLIT(lit_140);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_70);
DEFLIT(lit_104);
DEFLIT(lit_45);
DEFLIT(lit_73);
DEFLIT(lit_86);
DEFLIT(lit_13);
DEFLIT(lit_130);
DEFLIT(lit_14);
DEFLIT(lit_33);
DEFLIT(lit_145);
DEFLIT(lit_95);
DEFLIT(lit_97);
DEFLIT(lit_67);
DEFLIT(lit_56);
DEFLIT(lit_16);
DEFLIT(lit_103);
DEFLIT(lit_78);
DEFLIT(lit_87);
DEFLIT(lit_96);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_68);
DEFLIT(lit_98);
DEFLIT(lit_64);
DEFLIT(lit_83);
DEFLIT(lit_91);
DEFLIT(lit_61);
DEFLIT(lit_105);
DEFLIT(lit_47);
DEFLIT(lit_34);
DEFLIT(lit_50);
DEFLIT(lit_10);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_17);
DEFLIT(lit_138);
DEFLIT(lit_75);
DEFLIT(lit_89);
DEFLIT(lit_48);
DEFLIT(lit_133);
DEFLIT(lit_79);
DEFLIT(lit_25);
DEFLIT(lit_137);
DEFLIT(lit_110);
DEFLIT(lit_125);
DEFLIT(lit_20);
DEFLIT(lit_80);
DEFLIT(lit_102);
DEFLIT(lit_90);
DEFLIT(lit_114);
DEFLIT(lit_124);
DEFLIT(lit_27);
DEFLIT(lit_74);
DEFLIT(lit_35);
DEFLIT(lit_139);
DEFLIT(lit_60);
DEFLIT(lit_54);
DEFLIT(lit_57);
DEFLIT(lit_66);
DEFLIT(lit_111);
DEFLIT(lit_94);
DEFLIT(lit_121);
DEFLIT(lit_31);
DEFLIT(lit_127);
DEFLIT(lit_39);
DEFLIT(lit_15);
DEFLIT(lit_135);
DEFLIT(lit_8);
DEFLIT(lit_28);
DEFLIT(lit_7);
DEFLIT(lit_71);
DEFLIT(lit_32);
DEFLIT(lit_122);
DEFLIT(lit_132);
DEFLIT(lit_85);
DEFLIT(lit_19);
DEFLIT(lit_21);
DEFLIT(lit_88);
DEFLIT(lit_11);
DEFLIT(lit_128);
DEFLIT(lit_52);
DEFLIT(lit_53);
DEFLIT(lit_26);
DEFLIT(lit_76);
DEFLIT(lit_62);
DEFLIT(lit_82);
DEFLIT(lit_63);
DEFLIT(lit_41);
DEFLIT(lit_129);
DEFLIT(lit_40);
DEFLIT(lit_24);
DEFLIT(lit_93);
DEFLIT(lit_9);
DEFLIT(lit_115);
DEFLIT(lit_58);
DEFLIT(lit_120);
DEFLIT(lit_136);
DEFLIT(lit_1);
DEFLIT(lit_108);
DEFLIT(lit_117);
DEFLIT(lit_109);
DEFLIT(lit_92);
DEFLIT(lit_43);
DEFLIT(lit_44);
DEFLIT(lit_99);
DEFLIT(lit_18);
DEFLIT(lit_101);
DEFLIT(lit_36);
DEFLIT(lit_69);
DEFLIT(lit_59);

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
  T2 = CALL1(1,VARREF(Yobject_class),x_);
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
  T2 = CALL1(1,VARREF(Yobject_class),x_);
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
  P countF1583;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_count_3,1);
  countF1583 = T1;
  FUNINIT(countF1583, 1,countF1583);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,countF1583,T3,YPint((P)0));
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
  P inF1584;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_11,2);
  inF1584 = T1;
  FUNINIT(inF1584, 2,dst_,inF1584);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL1(0,inF1584,T3);
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
  P inF1585;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_14,3);
  inF1585 = T1;
  FUNINIT(inF1585, 3,dst_,src_,inF1585);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T2 = CALL1(0,inF1585,T3);
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
  P tmpF1586;
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
    tmpF1586 = T3;
    if (tmpF1586 != YPfalse) {
      T6 = tmpF1586;
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
  P fndF1587;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_17,2);
  fndF1587 = T1;
  FUNINIT(fndF1587, 2,test_,fndF1587);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF1587,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_19) {
  P e_;
  P tmpF1589;
  P tmpF1588;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  tmpF1588 = T1;
  if (tmpF1588 != YPfalse) {
    T2 = tmpF1588;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T4 = CALL1(1,FREEREF(0),T5);
    tmpF1589 = T4;
    if (tmpF1589 != YPfalse) {
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
  P fndF1590;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_19,2);
  fndF1590 = T1;
  FUNINIT(fndF1590, 2,test_,fndF1590);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF1590,T3);
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
  P redF1591;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_21,2);
  redF1591 = T1;
  FUNINIT(redF1591, 2,combine_,redF1591);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,redF1591,init_,T3);
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
  P redF1594;
  P initF1593;
  P eF1592;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1592 = T1;
  T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF1592);
  initF1593 = T3;
  T5 = FUNSHELL(1,fun_red_23,2);
  redF1594 = T5;
  FUNINIT(redF1594, 2,combine_,redF1594);
  T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1592);
  T6 = CALL2(0,redF1594,initF1593,T7);
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
  P fndF1595;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_25,3);
  fndF1595 = T1;
  FUNINIT(fndF1595, 3,default_,f_,fndF1595);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF1595,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_27) {
  P f_,c_;
  P valF1596;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYfind_or),f_,c_,VARREF(YgooScolsScolYDelt_default));
  valF1596 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF1596,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,f_);
    T2 = T4;
  } else {
    T2 = valF1596;
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
  T1 = CALL1(1,VARREF(Yobject_class),x_);
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
  P lopF1597;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_29,2);
  lopF1597 = T1;
  FUNINIT(lopF1597, 2,f_,lopF1597);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,lopF1597,T3);
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
  P conF1598;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_31,3);
  conF1598 = T1;
  FUNINIT(conF1598, 3,c_,f_,conF1598);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1598,T3,T4);
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
  P lopF1599;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_33,2);
  lopF1599 = T1;
  FUNINIT(lopF1599, 2,f_,lopF1599);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,lopF1599,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_35) {
  P res_,e_;
  P keyF1600;
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
    keyF1600 = T4;
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T5 = CALL2(1,FREEREF(1),keyF1600,T6);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T5,res_,keyF1600);
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
  P conF1601;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_35,3);
  conF1601 = T1;
  FUNINIT(conF1601, 3,c_,f_,conF1601);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1601,T3,T4);
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
  P conF1602;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_37,1);
  conF1602 = T1;
  FUNINIT(conF1602, 1,conF1602);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1602,Ynil,T3);
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
  P conF1603;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_39,1);
  conF1603 = T1;
  FUNINIT(conF1603, 1,conF1603);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1603,Ynil,T3);
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
  T0 = CALL1(1,VARREF(Yobject_class),c_);
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
  P tmpF1604;
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
    tmpF1604 = T3;
    if (tmpF1604 != YPfalse) {
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
  P eqF1606;
  P tmpF1605;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c1_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),c2_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,T3);
  tmpF1605 = T1;
  if (tmpF1605 != YPfalse) {
    T6 = FUNSHELL(1,fun_eq_45,2);
    eqF1606 = T6;
    FUNINIT(eqF1606, 2,c2_,eqF1606);
    T8 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
    T7 = CALL1(0,eqF1606,T8);
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
  P valF1607;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,key_,VARREF(YgooScolsScolYDelt_default));
  valF1607 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF1607,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,key_);
    T2 = T4;
  } else {
    T2 = valF1607;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205;
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
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_87),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooStypesYas);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooStypesYas);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_as_0;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooStypesYas,T34);
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_dup_1 = YPmet(FUNCODEREF(fun_dup_1),LITREF(lit_22),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooScolsScolYdup);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooScolsScolYdup);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_dup_1;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooScolsScolYdup,T39);
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T43 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLcolIG)),YPfalse,YPint((P)1),VARREF(YLcolIG),Ynil);
  fun_dup_2 = YPmet(FUNCODEREF(fun_dup_2),LITREF(lit_22),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScolsScolYdup);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScolYdup);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_dup_2;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsScolYdup,T44);
  lit_91 = YPPlist(1,YPPsym((P)"x"));
  lit_92 = YPPsym((P)"count");
  lit_93 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"i"));
  T49 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_count_3 = YPmet(FUNCODEREF(fun_count_3),LITREF(lit_92),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_4 = YPmet(FUNCODEREF(fun_len_4),LITREF(lit_0),T48,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooStypesYlen);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooStypesYlen);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_len_4;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooStypesYlen,T50);
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_5 = YPmet(FUNCODEREF(fun_elt_type_5),LITREF(lit_6),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooScolsScolYelt_type);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooScolsScolYelt_type);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_elt_type_5;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooScolsScolYelt_type,T55);
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_6 = YPmet(FUNCODEREF(fun_key_type_6),LITREF(lit_10),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooScolsScolYkey_type);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooScolsScolYkey_type);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_key_type_6;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooScolsScolYkey_type,T60);
  lit_96 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_7 = YPmet(FUNCODEREF(fun_key_test_7),LITREF(lit_12),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooScolsScolYkey_test);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooScolsScolYkey_test);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_key_test_7;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooScolsScolYkey_test,T65);
  lit_97 = YPPlist(1,YPPsym((P)"c"));
  T69 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_8 = YPmet(FUNCODEREF(fun_emptyQ_8),LITREF(lit_16),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSmacrosYemptyQ);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_emptyQ_8;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSmacrosYemptyQ,T70);
  lit_98 = YPPlist(1,YPPsym((P)"c"));
  T75 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T74 = YPsig(LITREF(lit_98),YPPlist(1,T75),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_18),T74,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScolsScolYempty);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsScolYempty);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_empty_9;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsScolYempty,T76);
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_10 = YPmet(FUNCODEREF(fun_elt_default_10),LITREF(lit_8),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsScolYelt_default);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsScolYelt_default);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_elt_default_10;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsScolYelt_default,T81);
  lit_100 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  lit_101 = YPPsym((P)"in");
  lit_102 = YPPlist(1,YPPsym((P)"ss"));
  T86 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_11 = YPmet(FUNCODEREF(fun_in_11),LITREF(lit_101),T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_into_12 = YPmet(FUNCODEREF(fun_fab_into_12),LITREF(lit_77),T85,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooScolsScolYfab_into);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooScolsScolYfab_into);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_fab_into_12;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooScolsScolYfab_into,T87);
  lit_103 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T92 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T91 = YPsig(LITREF(lit_103),YPPlist(1,T92),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_fabs_13 = YPmet(FUNCODEREF(fun_fabs_13),LITREF(lit_28),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YgooSmathYfabs);
  if (T95 != YPfalse) {
    T94 = VARREF(YgooSmathYfabs);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_fabs_13;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YgooSmathYfabs,T93);
  lit_104 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  lit_105 = YPPlist(1,YPPsym((P)"ds"));
  T98 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_14 = YPmet(FUNCODEREF(fun_in_14),LITREF(lit_101),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_fillX_15 = YPmet(FUNCODEREF(fun_fab_fillX_15),LITREF(lit_79),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YgooScolsScolYfab_fillX);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooScolsScolYfab_fillX);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_fab_fillX_15;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooScolsScolYfab_fillX,T99);
  lit_106 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"val"));
  T103 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_16 = YPmet(FUNCODEREF(fun_fill_16),LITREF(lit_30),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooScolsScolYfill);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooScolsScolYfill);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_fill_16;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooScolsScolYfill,T104);
  lit_107 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  lit_108 = YPPsym((P)"fnd");
  lit_109 = YPPlist(1,YPPsym((P)"e"));
  T109 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_17 = YPmet(FUNCODEREF(fun_fnd_17),LITREF(lit_108),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_18 = YPmet(FUNCODEREF(fun_anyQ_18),LITREF(lit_32),T108,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YgooStypesYanyQ);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooStypesYanyQ);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_anyQ_18;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooStypesYanyQ,T110);
  lit_110 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  lit_111 = YPPlist(1,YPPsym((P)"e"));
  T115 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_19 = YPmet(FUNCODEREF(fun_fnd_19),LITREF(lit_108),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_20 = YPmet(FUNCODEREF(fun_allQ_20),LITREF(lit_34),T114,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YgooScolsScolYallQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YgooScolsScolYallQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_allQ_20;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YgooScolsScolYallQ,T116);
  lit_112 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  lit_113 = YPPsym((P)"red");
  lit_114 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T121 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_21 = YPmet(FUNCODEREF(fun_red_21),LITREF(lit_113),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(LITREF(lit_112),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_22 = YPmet(FUNCODEREF(fun_fold_22),LITREF(lit_36),T120,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooScolsScolYfold);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooScolsScolYfold);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_fold_22;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooScolsScolYfold,T122);
  lit_115 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"c"));
  lit_116 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T127 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_23 = YPmet(FUNCODEREF(fun_red_23),LITREF(lit_113),T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_24 = YPmet(FUNCODEREF(fun_foldA_24),LITREF(lit_38),T126,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YgooScolsScolYfoldA);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooScolsScolYfoldA);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_foldA_24;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooScolsScolYfoldA,T128);
  lit_117 = YPPsym((P)"<elt-default>");
  T133 = (P)YPpair(VARREF(YLanyG),Ynil);
  T132 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_117),T133);
  VARSET(YgooScolsScolYLelt_defaultG,T132);
  T134 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsScolYLelt_defaultG));
  VARSET(YgooScolsScolYDelt_default,T134);
  lit_118 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"c"),YPPsym((P)"default"));
  lit_119 = YPPlist(1,YPPsym((P)"e"));
  T136 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_25 = YPmet(FUNCODEREF(fun_fnd_25),LITREF(lit_108),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_118),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_26 = YPmet(FUNCODEREF(fun_find_or_26),LITREF(lit_40),T135,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YgooScolsScolYfind_or);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooScolsScolYfind_or);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_find_or_26;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooScolsScolYfind_or,T137);
  lit_120 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T141 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_27 = YPmet(FUNCODEREF(fun_find_27),LITREF(lit_42),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YgooScolsScolYfind);
  if (T144 != YPfalse) {
    T143 = VARREF(YgooScolsScolYfind);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_find_27;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YgooScolsScolYfind,T142);
  lit_121 = YPPlist(1,YPPsym((P)"x"));
  T146 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_zap_28 = YPmet(FUNCODEREF(fun_zap_28),LITREF(lit_46),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YgooScolsScolYzap);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooScolsScolYzap);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_zap_28;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooScolsScolYzap,T147);
  lit_122 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_123 = YPPsym((P)"lop");
  lit_124 = YPPlist(1,YPPsym((P)"e"));
  T152 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_29 = YPmet(FUNCODEREF(fun_lop_29),LITREF(lit_123),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_30 = YPmet(FUNCODEREF(fun_do_30),LITREF(lit_48),T151,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YgooSmacrosYdo);
  if (T155 != YPfalse) {
    T154 = VARREF(YgooSmacrosYdo);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_do_30;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YgooSmacrosYdo,T153);
  lit_125 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_126 = YPPsym((P)"con");
  lit_127 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T158 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_31 = YPmet(FUNCODEREF(fun_con_31),LITREF(lit_126),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_32 = YPmet(FUNCODEREF(fun_map_32),LITREF(lit_75),T157,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YgooSmacrosYmap);
  if (T161 != YPfalse) {
    T160 = VARREF(YgooSmacrosYmap);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_map_32;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YgooSmacrosYmap,T159);
  lit_128 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_129 = YPPlist(1,YPPsym((P)"e"));
  T164 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_33 = YPmet(FUNCODEREF(fun_lop_33),LITREF(lit_123),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_34 = YPmet(FUNCODEREF(fun_do_keyed_34),LITREF(lit_71),T163,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YgooScolsScolYdo_keyed);
  if (T167 != YPfalse) {
    T166 = VARREF(YgooScolsScolYdo_keyed);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_do_keyed_34;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YgooScolsScolYdo_keyed,T165);
  lit_130 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_131 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T170 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_35 = YPmet(FUNCODEREF(fun_con_35),LITREF(lit_126),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_36 = YPmet(FUNCODEREF(fun_map_keyed_36),LITREF(lit_73),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YgooScolsScolYmap_keyed);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooScolsScolYmap_keyed);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_map_keyed_36;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooScolsScolYmap_keyed,T171);
  lit_132 = YPPlist(1,YPPsym((P)"c"));
  lit_133 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T176 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_37 = YPmet(FUNCODEREF(fun_con_37),LITREF(lit_126),T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_38 = YPmet(FUNCODEREF(fun_keys_38),LITREF(lit_52),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YgooScolsScolYkeys);
  if (T179 != YPfalse) {
    T178 = VARREF(YgooScolsScolYkeys);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_keys_38;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YgooScolsScolYkeys,T177);
  lit_134 = YPPlist(1,YPPsym((P)"c"));
  lit_135 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T182 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_39 = YPmet(FUNCODEREF(fun_con_39),LITREF(lit_126),T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_items_40 = YPmet(FUNCODEREF(fun_items_40),LITREF(lit_54),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooScolsScolYitems);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooScolsScolYitems);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_items_40;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooScolsScolYitems,T183);
  lit_136 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_137 = YPPlist(1,YPPsym((P)"y"));
  T188 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T188,ENVNUL,PNUL,YPfalse);
  T187 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_42 = YPmet(FUNCODEREF(fun_memQ_42),LITREF(lit_50),T187,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YgooScolsScolYmemQ);
  if (T191 != YPfalse) {
    T190 = VARREF(YgooScolsScolYmemQ);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_memQ_42;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YgooScolsScolYmemQ,T189);
  lit_138 = YPPlist(1,YPPsym((P)"c"));
  T193 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_43 = YPmet(FUNCODEREF(fun_col_res_type_43),LITREF(lit_56),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YgooScolsScolYcol_res_type);
  if (T196 != YPfalse) {
    T195 = VARREF(YgooScolsScolYcol_res_type);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_col_res_type_43;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YgooScolsScolYcol_res_type,T194);
  lit_139 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T200 = YPsig(LITREF(lit_139),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T199 = fun_col_res_44 = YPmet(FUNCODEREF(fun_col_res_44),LITREF(lit_85),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YgooScolsScolYcol_res);
  if (T204 != YPfalse) {
    T203 = VARREF(YgooScolsScolYcol_res);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_col_res_44;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  T201 = VARSET(YgooScolsScolYcol_res,T202);
  T198 = T201;
  return T198;
}

P YgooScolsScolY___main_2___() {
  P tmpF1610;
  P tmpF1609;
  P tmpF1608;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
loop:
  lit_140 = YPPlist(1,YPPsym((P)"eq-nul"));
  VARSET(YgooScolsScolYDeq_nul,LITREF(lit_140));
  lit_141 = YPPsym((P)"=");
  lit_142 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  lit_143 = YPPsym((P)"eq");
  lit_144 = YPPlist(1,YPPsym((P)"e1"));
  T1 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eq_45 = YPmet(FUNCODEREF(fun_eq_45),LITREF(lit_143),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_46 = YPmet(FUNCODEREF(fun_E_46),LITREF(lit_141),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YgooSmathYE);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooSmathYE);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_E_46;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooSmathYE,T2);
  lit_145 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"key"));
  T6 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_47 = YPmet(FUNCODEREF(fun_elt_47),LITREF(lit_2),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YgooSmacrosYelt);
  if (T9 != YPfalse) {
    T8 = VARREF(YgooSmacrosYelt);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_elt_47;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YgooSmacrosYelt,T7);
  tmpF1608 = YPfalse;
  if (tmpF1608 != YPfalse) {
    T11 = VARREF(YgooScolsScolYadd);
  } else {
    T11 = YPfalse;
  }
  tmpF1609 = YPfalse;
  if (tmpF1609 != YPfalse) {
    T12 = VARREF(YgooScolsScolYLtabG);
  } else {
    T12 = YPfalse;
  }
  tmpF1610 = YPfalse;
  if (tmpF1610 != YPfalse) {
    T13 = VARREF(YgooScolsScolYinto);
  } else {
    T13 = YPfalse;
  }
  T14 = YPfalse;
  return T14;
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
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"mod", &module_info_gooSmath, "mod"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"*", &module_info_gooSmath, "*"},
  {"op", &module_info_gooSmacros, "op"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ct", &module_info_gooSboot, "ct"},
  {"t<", &module_info_gooStypes, "t<"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"t=", &module_info_gooStypes, "t="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"max", &module_info_gooSmag, "max"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"~=", &module_info_gooSmath, "~="},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%met", &module_info_gooSboot, "%met"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%time", &module_info_gooSboot, "%time"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"for", &module_info_gooSmacros, "for"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<", &module_info_gooSmag, "<"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"df", &module_info_gooSboot, "df"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"=", &module_info_gooSmath, "="},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"&", &module_info_gooSmath, "&"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"round", &module_info_gooSmath, "round"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"/", &module_info_gooSmath, "/"},
  {"pow", &module_info_gooSmath, "pow"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"tan", &module_info_gooSmath, "tan"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"dup", CVAR, &YgooScolsScolYdup},
  {"---main-1---", PVAR, NULL},
  {"find-or", CVAR, &YgooScolsScolYfind_or},
  {"fab-fill!", CVAR, &YgooScolsScolYfab_fillX},
  {"add", CVAR, &YgooScolsScolYadd},
  {"$elt-default", CVAR, &YgooScolsScolYDelt_default},
  {"col", CVAR, &YgooScolsScolYcol},
  {"fold+", CVAR, &YgooScolsScolYfoldA},
  {"fab-into", CVAR, &YgooScolsScolYfab_into},
  {"---main-2---", PVAR, NULL},
  {"empty", CVAR, &YgooScolsScolYempty},
  {"elts", CVAR, &YgooScolsScolYelts},
  {"all?", CVAR, &YgooScolsScolYallQ},
  {"<enum>", CVAR, &YgooScolsScolYLenumG},
  {"<elt-default>", CVAR, &YgooScolsScolYLelt_defaultG},
  {"into", CVAR, &YgooScolsScolYinto},
  {"fold", CVAR, &YgooScolsScolYfold},
  {"nxt", CVAR, &YgooScolsScolYnxt},
  {"keys", CVAR, &YgooScolsScolYkeys},
  {"now-key", CVAR, &YgooScolsScolYnow_key},
  {"now", CVAR, &YgooScolsScolYnow},
  {"key-test", CVAR, &YgooScolsScolYkey_test},
  {"map-keyed", CVAR, &YgooScolsScolYmap_keyed},
  {"fin?", CVAR, &YgooScolsScolYfinQ},
  {"items", CVAR, &YgooScolsScolYitems},
  {"find", CVAR, &YgooScolsScolYfind},
  {"enum", CVAR, &YgooScolsScolYenum},
  {"key-type", CVAR, &YgooScolsScolYkey_type},
  {"do-keyed", CVAR, &YgooScolsScolYdo_keyed},
  {"fill", CVAR, &YgooScolsScolYfill},
  {"elt-default", CVAR, &YgooScolsScolYelt_default},
  {"mem?", CVAR, &YgooScolsScolYmemQ},
  {"elt-type", CVAR, &YgooScolsScolYelt_type},
  {"col-res", CVAR, &YgooScolsScolYcol_res},
  {"now-setter", CVAR, &YgooScolsScolYnow_setter},
  {"zap", CVAR, &YgooScolsScolYzap},
  {"col-res-type", CVAR, &YgooScolsScolYcol_res_type},
  {"fab-elt-setter", CVAR, &YgooScolsScolYfab_elt_setter},
  {"<tab>", CVAR, &YgooScolsScolYLtabG},
  {"---main-0---", PVAR, NULL},
  {"del", CVAR, &YgooScolsScolYdel},
  {"$eq-nul", CVAR, &YgooScolsScolYDeq_nul},
  {"elt-or", CVAR, &YgooScolsScolYelt_or},
  {"fab", CVAR, &YgooScolsScolYfab},
  {"low-elt", CVAR, &YgooScolsScolYlow_elt},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"dup", "dup"},
  {"find-or", "find-or"},
  {"fab-fill!", "fab-fill!"},
  {"<col.>", "<col.>"},
  {"<col>", "<col>"},
  {"add", "add"},
  {"elt", "elt"},
  {"col", "col"},
  {"fold+", "fold+"},
  {"fab-into", "fab-into"},
  {"empty", "empty"},
  {"len", "len"},
  {"elts", "elts"},
  {"all?", "all?"},
  {"<enum>", "<enum>"},
  {"empty?", "empty?"},
  {"into", "into"},
  {"map", "map"},
  {"fold", "fold"},
  {"nxt", "nxt"},
  {"col-res-type", "col-res-type"},
  {"keys", "keys"},
  {"now-key", "now-key"},
  {"now", "now"},
  {"key-test", "key-test"},
  {"map-keyed", "map-keyed"},
  {"any?", "any?"},
  {"fin?", "fin?"},
  {"items", "items"},
  {"find", "find"},
  {"enum", "enum"},
  {"key-type", "key-type"},
  {"do-keyed", "do-keyed"},
  {"fill", "fill"},
  {"elt-default", "elt-default"},
  {"mem?", "mem?"},
  {"elt-type", "elt-type"},
  {"col-res", "col-res"},
  {"now-setter", "now-setter"},
  {"fabs", "fabs"},
  {"zap", "zap"},
  {"do", "do"},
  {"fab-elt-setter", "fab-elt-setter"},
  {"<tab>", "<tab>"},
  {"del", "del"},
  {"elt-or", "elt-or"},
  {"fab", "fab"},
  {"low-elt", "low-elt"},
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
