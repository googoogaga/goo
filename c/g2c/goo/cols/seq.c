/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/seq */

EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooScolsSseqYOtQ,"goo/cols/seq","@t?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Ytail,"goo/boot","tail");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YgooScolsSseqYadd_new,"goo/cols/seq","add-new");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ylst,"goo/boot","lst");
DEF(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
DEF(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYS,"goo/math","/");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYB,"goo/math","&");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYNE,"goo/math","~=");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_65);
DEFLIT(lit_20);
DEFLIT(lit_58);
DEFLIT(lit_7);
DEFLIT(lit_45);
DEFLIT(lit_66);
DEFLIT(lit_92);
DEFLIT(lit_72);
DEFLIT(lit_2);
DEFLIT(lit_62);
DEFLIT(lit_33);
DEFLIT(lit_47);
DEFLIT(lit_94);
DEFLIT(lit_36);
DEFLIT(lit_23);
DEFLIT(lit_80);
DEFLIT(lit_40);
DEFLIT(lit_64);
DEFLIT(lit_19);
DEFLIT(lit_11);
DEFLIT(lit_44);
DEFLIT(lit_84);
DEFLIT(lit_48);
DEFLIT(lit_71);
DEFLIT(lit_27);
DEFLIT(lit_93);
DEFLIT(lit_61);
DEFLIT(lit_57);
DEFLIT(lit_60);
DEFLIT(lit_54);
DEFLIT(lit_5);
DEFLIT(lit_95);
DEFLIT(lit_55);
DEFLIT(lit_91);
DEFLIT(lit_68);
DEFLIT(lit_17);
DEFLIT(lit_26);
DEFLIT(lit_75);
DEFLIT(lit_0);
DEFLIT(lit_59);
DEFLIT(lit_16);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_86);
DEFLIT(lit_79);
DEFLIT(lit_35);
DEFLIT(lit_8);
DEFLIT(lit_52);
DEFLIT(lit_90);
DEFLIT(lit_14);
DEFLIT(lit_96);
DEFLIT(lit_70);
DEFLIT(lit_88);
DEFLIT(lit_25);
DEFLIT(lit_63);
DEFLIT(lit_77);
DEFLIT(lit_97);
DEFLIT(lit_30);
DEFLIT(lit_32);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_15);
DEFLIT(lit_39);
DEFLIT(lit_42);
DEFLIT(lit_46);
DEFLIT(lit_51);
DEFLIT(lit_76);
DEFLIT(lit_69);
DEFLIT(lit_28);
DEFLIT(lit_38);
DEFLIT(lit_21);
DEFLIT(lit_34);
DEFLIT(lit_37);
DEFLIT(lit_74);
DEFLIT(lit_78);
DEFLIT(lit_56);
DEFLIT(lit_50);
DEFLIT(lit_18);
DEFLIT(lit_22);
DEFLIT(lit_83);
DEFLIT(lit_53);
DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_9);
DEFLIT(lit_13);
DEFLIT(lit_81);
DEFLIT(lit_67);
DEFLIT(lit_89);
DEFLIT(lit_49);
DEFLIT(lit_73);
DEFLIT(lit_12);
DEFLIT(lit_29);
DEFLIT(lit_31);
DEFLIT(lit_87);
DEFLIT(lit_82);
DEFLIT(lit_85);
DEFLIT(lit_41);

/* FUNCTIONS: */

FUNFOR(YgooScolsSseqYOtQ);
LOCFOR(fun_key_type_1);
LOCFOR(fun_1st_2);
LOCFOR(fun_2nd_3);
LOCFOR(fun_3rd_4);
LOCFOR(fun_con_5);
LOCFOR(fun_map_6);
LOCFOR(fun_con_7);
LOCFOR(fun_map_keyed_8);
LOCFOR(fun_lop_9);
LOCFOR(fun_do2_10);
LOCFOR(fun_lop_11);
LOCFOR(fun_do3_12);
LOCFOR(fun_con_13);
LOCFOR(fun_map2_14);
LOCFOR(fun_fnd_15);
LOCFOR(fun_any2Q_16);
LOCFOR(fun_fnd_17);
LOCFOR(fun_all2Q_18);
LOCFOR(fun_eq_19);
LOCFOR(fun_E_20);
LOCFOR(fun_last_21);
LOCFOR(fun_22);
LOCFOR(fun_pos_23);
LOCFOR(fun_inner_24);
LOCFOR(fun_outer_25);
LOCFOR(fun_finds_26);
LOCFOR(fun_con_27);
LOCFOR(fun_rev_28);
LOCFOR(fun_cat_29);
LOCFOR(fun_con_y_30);
LOCFOR(fun_con_x_31);
LOCFOR(fun_cat2_32);
LOCFOR(fun_con_x_33);
LOCFOR(fun_sub_34);
LOCFOR(fun_push_35);
LOCFOR(fun_pop_36);
LOCFOR(fun_con_37);
LOCFOR(fun_pick_38);
LOCFOR(fun_39);
LOCFOR(fun_reject_40);
LOCFOR(fun_del_41);
LOCFOR(fun_42);
LOCFOR(fun_del_vals_43);
LOCFOR(fun_44);
LOCFOR(fun_del_dups_45);
LOCFOR(fun_copy_46);
LOCFOR(fun_ins_47);
LOCFOR(fun_copy_48);
LOCFOR(fun_elts_49);
LOCFOR(fun_sort_50);
LOCFOR(fun_sort_by_51);
LOCFOR(fun_keys_52);
FUNFOR(YgooScolsSseqYrange_check);
FUNFOR(YgooScolsSseqYrange_checkQ);
LOCFOR(fun_add_55);
LOCFOR(fun_add_new_56);
LOCFOR(fun_57);
LOCFOR(fun_vals_to_str_58);
LOCFOR(fun_rep_59);
LOCFOR(fun_do_key_vals_60);
LOCFOR(fun_61);
LOCFOR(fun_col_62);
LOCFOR(fun_suffixQ_63);
LOCFOR(fun_prefixQ_64);
LOCFOR(fun_repeat_65);
LOCFOR(fun_split_66);
LOCFOR(fun_67);
LOCFOR(fun_join_68);
extern P YgooScolsSseqY___main_0___ ();
extern P YgooScolsSseqY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScolsSseqYOtQ) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse);
  T1 = CALL2(1,VARREF(YOlst),x_,T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_key_type_1) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_1st_2) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2nd_3) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3rd_4) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_5) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T6 = CALL1(1,FREEREF(1),T7);
    T5 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T6);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T5;
    a2 = T8;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_6) {
  P f_,c_;
  P conF1656;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_5,3);
  conF1656 = T1;
  FUNINIT(conF1656, 3,c_,f_,conF1656);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1656,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_7) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T6 = CALL2(1,FREEREF(1),T7,T8);
    T5 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T5;
    a2 = T9;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_8) {
  P f_,c_;
  P conF1657;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_7,3);
  conF1657 = T1;
  FUNINIT(conF1657, 3,c_,f_,conF1657);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1657,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_9) {
  P ex_,ey_;
  P tmpF1658;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1658 = T3;
  if (tmpF1658 != YPfalse) {
    T4 = tmpF1658;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    CALL2(1,FREEREF(0),T6,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    T10 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    a1 = T9;
    a2 = T10;
    ex_ = a1;
    ey_ = a2;
    goto loop;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do2_10) {
  P f_,x_,y_;
  P lopF1659;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_lop_9,2);
  lopF1659 = T1;
  FUNINIT(lopF1659, 2,f_,lopF1659);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,lopF1659,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_11) {
  P ex_,ey_,ez_;
  P tmpF1661;
  P tmpF1660;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
  ARG(ez_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1660 = T3;
  if (tmpF1660 != YPfalse) {
    T4 = tmpF1660;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    tmpF1661 = T6;
    if (tmpF1661 != YPfalse) {
      T7 = tmpF1661;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),ez_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),ez_);
    CALL3(1,FREEREF(0),T9,T10,T11);
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    T15 = CALL1(1,VARREF(YgooScolsScolYnxt),ez_);
    a1 = T13;
    a2 = T14;
    a3 = T15;
    ex_ = a1;
    ey_ = a2;
    ez_ = a3;
    goto loop;
    T0 = T12;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do3_12) {
  P f_,x_,y_,z_;
  P lopF1662;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
loop:
  T1 = FUNSHELL(1,fun_lop_11,2);
  lopF1662 = T1;
  FUNINIT(lopF1662, 2,f_,lopF1662);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),z_);
  T2 = CALL3(0,lopF1662,T3,T4,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_13) {
  P res_,ex_,ey_;
  P tmpF1663;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(ex_, 1);
  ARG(ey_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1663 = T2;
  if (tmpF1663 != YPfalse) {
    T3 = tmpF1663;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T5 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T6);
    T0 = T5;
  } else {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T9 = CALL2(1,FREEREF(1),T10,T11);
    T8 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T9);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    a1 = T8;
    a2 = T12;
    a3 = T13;
    res_ = a1;
    ex_ = a2;
    ey_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map2_14) {
  P f_,x_,y_;
  P conF1664;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_13,3);
  conF1664 = T1;
  FUNINIT(conF1664, 3,x_,f_,conF1664);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL3(0,conF1664,Ynil,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_15) {
  P ex_,ey_;
  P tmpF1666;
  P tmpF1665;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1665 = T2;
  if (tmpF1665 != YPfalse) {
    T3 = tmpF1665;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T7 = CALL2(1,FREEREF(0),T8,T9);
    T6 = CALL1(1,VARREF(YgooSmathYas_log),T7);
    tmpF1666 = T6;
    if (tmpF1666 != YPfalse) {
      T10 = tmpF1666;
    } else {
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
      a1 = T12;
      a2 = T13;
      ex_ = a1;
      ey_ = a2;
      goto loop;
      T10 = T11;
    }
    T5 = T10;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_any2Q_16) {
  P test_,x_,y_;
  P fndF1667;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_15,2);
  fndF1667 = T1;
  FUNINIT(fndF1667, 2,test_,fndF1667);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,fndF1667,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_17) {
  P ex_,ey_;
  P tmpF1670;
  P tmpF1669;
  P tmpF1668;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1668 = T1;
  if (tmpF1668 != YPfalse) {
    T2 = tmpF1668;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    tmpF1669 = T4;
    if (tmpF1669 != YPfalse) {
      T5 = tmpF1669;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
      T7 = CALL2(1,FREEREF(0),T8,T9);
      tmpF1670 = T7;
      if (tmpF1670 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
        a1 = T12;
        a2 = T13;
        ex_ = a1;
        ey_ = a2;
        goto loop;
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T6 = T10;
      T5 = T6;
    }
    T3 = T5;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_all2Q_18) {
  P test_,x_,y_;
  P fndF1671;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_17,2);
  fndF1671 = T1;
  FUNINIT(fndF1671, 2,test_,fndF1671);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,fndF1671,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eq_19) {
  P e1_,e2_;
  P tmpF1672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e1_, 0);
  ARG(e2_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e2_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e1_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),e2_);
    T4 = CALL2(1,VARREF(YgooSmathYE),T5,T6);
    tmpF1672 = T4;
    if (tmpF1672 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e1_);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),e2_);
      a1 = T9;
      a2 = T10;
      e1_ = a1;
      e2_ = a2;
      goto loop;
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T3 = T7;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_E_20) {
  P c1_,c2_;
  P eqF1673;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T1 = FUNSHELL(1,fun_eq_19,1);
  eqF1673 = T1;
  FUNINIT(eqF1673, 1,eqF1673);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c2_);
  T2 = CALL2(0,eqF1673,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_last_21) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P a_;
  P T0;
  P a1;
LINK_STACK();
  ARG(a_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),a_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pos_23) {
  P x_,v_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
loop:
  T1 = FUNFAB(fun_22,1,v_);
  T0 = CALL3(1,VARREF(YgooScolsScolYfind_or),T1,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_24) {
  P xi_,yi_;
  P tmpF1674;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(xi_, 0);
  ARG(yi_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),xi_,T3);
  tmpF1674 = T2;
  if (tmpF1674 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(1));
    T5 = CALL2(1,VARREF(YgooSmagYL),yi_,T6);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),xi_);
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),yi_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,T10);
    if (T8 != YPfalse) {
      T12 = CALL2(1,VARREF(YgooSmathYA),xi_,YPint((P)1));
      T13 = CALL2(1,VARREF(YgooSmathYA),yi_,YPint((P)1));
      a1 = T12;
      a2 = T13;
      xi_ = a1;
      yi_ = a2;
      goto loop;
      T7 = T11;
    } else {
      T15 = CALL2(1,VARREF(YgooSmathYA),FREEREF(3),YPint((P)1));
      T14 = CALL1(0,FREEREF(4),T15);
      T7 = T14;
    }
    T0 = T7;
  } else {
    T0 = FREEREF(3);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_25) {
  P xsi_;
  P innerF1675;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(xsi_, 0);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T5 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(1));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,T5);
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagYL),xsi_,T2);
  if (T1 != YPfalse) {
    T7 = FUNSHELL(1,fun_inner_24,5);
    innerF1675 = T7;
    FUNINIT(innerF1675, 5,FREEREF(0),FREEREF(1),innerF1675,xsi_,FREEREF(2));
    T8 = CALL2(0,innerF1675,xsi_,YPint((P)0));
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_finds_26) {
  P x_,y_;
  P outerF1676;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_outer_25,3);
  outerF1676 = T1;
  FUNINIT(outerF1676, 3,x_,y_,outerF1676);
  T2 = CALL1(0,outerF1676,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_27) {
  P seq_,e_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T4 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T5);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T4;
    a2 = T6;
    seq_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rev_28) {
  P x_;
  P conF1677;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_27,2);
  conF1677 = T1;
  FUNINIT(conF1677, 2,x_,conF1677);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,conF1677,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat_29) {
  P x_,ss_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),VARREF(YgooScolsSseqYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_y_30) {
  P seq_,ey_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(ey_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T5 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T6);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    a1 = T5;
    a2 = T7;
    seq_ = a1;
    ey_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_x_31) {
  P seq_,ex_;
  P con_yF1678;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(ex_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_con_y_30,2);
    con_yF1678 = T3;
    FUNINIT(con_yF1678, 2,FREEREF(0),con_yF1678);
    T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
    T4 = CALL2(0,con_yF1678,seq_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T7 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T8);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    a1 = T7;
    a2 = T9;
    seq_ = a1;
    ex_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cat2_32) {
  P x_,y_;
  P con_xF1679;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_x_31,3);
  con_xF1679 = T1;
  FUNINIT(con_xF1679, 3,x_,y_,con_xF1679);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,con_xF1679,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_x_33) {
  P seq_,i_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(seq_, 0);
  ARG(i_, 1);
  ARG(e_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmagYGE),i_,FREEREF(1));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(2));
      T6 = T8;
    } else {
      T6 = YPfalse;
    }
    if (T6 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T9 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T10);
      T5 = T9;
    } else {
      T5 = seq_;
    }
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T5;
    a2 = T11;
    a3 = T12;
    seq_ = a1;
    i_ = a2;
    e_ = a3;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_34) {
  P x_,from_,below_;
  P con_xF1680;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_x_33,4);
  con_xF1680 = T1;
  FUNINIT(con_xF1680, 4,x_,from_,below_,con_xF1680);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL3(1,con_xF1680,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_push_35) {
  P l_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),l_,x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_36) {
  P l_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),l_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),l_,YPint((P)1),T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),l_,YPint((P)0));
  T0 = CALL2(1,VARREF(Ytup),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_37) {
  P seq_,e_;
  P vF1681;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    vF1681 = T5;
    T8 = CALL1(1,FREEREF(1),vF1681);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,vF1681);
      T7 = T9;
    } else {
      T7 = seq_;
    }
    T10 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T7;
    a2 = T10;
    seq_ = a1;
    e_ = a2;
    goto loop;
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pick_38) {
  P test_,x_;
  P conF1682;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_37,3);
  conF1682 = T1;
  FUNINIT(conF1682, 3,x_,test_,conF1682);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,conF1682,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_39) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,FREEREF(0),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reject_40) {
  P test_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_39,1,test_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpick),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_41) {
  P x_,key_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,YPint((P)0),key_);
  T3 = CALL2(1,VARREF(YgooSmathYA),key_,YPint((P)1));
  T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,T3,T4);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_42) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_vals_43) {
  P s_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_42,1,x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYreject),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_44) {
  P s_,e_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_dups_45) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = fun_44;
  T2 = CALL3(1,VARREF(YgooScolsScolYfold),T3,Ynil,x_);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_46) {
  P r_,i_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(r_, 0);
  ARG(i_, 1);
  ARG(e_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(1),r_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T4;
    a3 = e_;
    r_ = a1;
    i_ = a2;
    e_ = a3;
    goto loop;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
      T7 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(3),T8);
      T5 = T7;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,r_);
      T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
      a1 = T10;
      a2 = T12;
      a3 = T13;
      r_ = a1;
      i_ = a2;
      e_ = a3;
      goto loop;
      T5 = T9;
    }
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ins_47) {
  P x_,v_,before_;
  P copyF1683;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
loop:
  T1 = FUNSHELL(1,fun_copy_46,4);
  copyF1683 = T1;
  FUNINIT(copyF1683, 4,before_,v_,copyF1683,x_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL3(0,copyF1683,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_48) {
  P r_,e_,i_,keys_;
  P keyF1684;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(i_, 2);
  ARG(keys_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),keys_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooScolsScolYrange_error),FREEREF(0),i_);
      T4 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL1(1,VARREF(YgooScolsScolYnow),keys_);
        keyF1684 = T9;
        T11 = CALL2(1,VARREF(YgooSmathYE),i_,keyF1684);
        if (T11 != YPfalse) {
          T14 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
          T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,r_);
          T15 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
          T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          T17 = CALL1(1,VARREF(YgooScolsScolYnxt),keys_);
          a1 = T13;
          a2 = T15;
          a3 = T16;
          a4 = T17;
          r_ = a1;
          e_ = a2;
          i_ = a3;
          keys_ = a4;
          goto loop;
          T10 = T12;
        } else {
          T19 = CALL2(1,VARREF(YisaQ),keyF1684,VARREF(YLintG));
          if (T19 != YPfalse) {
            T21 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
            T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            a1 = r_;
            a2 = T21;
            a3 = T22;
            a4 = keys_;
            r_ = a1;
            e_ = a2;
            i_ = a3;
            keys_ = a4;
            goto loop;
            T18 = T20;
          } else {
            if (YPtrue != YPfalse) {
              T24 = CALL2(1,VARREF(YgooScolsScolYrange_error),FREEREF(0),keyF1684);
              T23 = T24;
            } else {
              T23 = YPfalse;
            }
            T18 = T23;
          }
          T10 = T18;
        }
        T8 = T10;
        T7 = T8;
      } else {
        T7 = YPfalse;
      }
      T4 = T7;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elts_49) {
  P x_,keys_;
  P copyF1685;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
loop:
  T1 = FUNSHELL(1,fun_copy_48,2);
  copyF1685 = T1;
  FUNINIT(copyF1685, 2,x_,copyF1685);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T5 = CALL1(1,VARREF(YgooScolsSseqYsort),keys_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T2 = CALL4(0,copyF1685,Ynil,T3,YPint((P)0),T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_50) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_by),x_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_by_51) {
  P a_,test_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),a_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T1,test_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_52) {
  P d_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),d_);
  T0 = CALL1(1,VARREF(YgooScolsSseqYbelow),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_check) {
  P x_,i_;
  P tmpF1686;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  tmpF1686 = T2;
  if (tmpF1686 != YPfalse) {
    T3 = tmpF1686;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T4 = CALL2(1,VARREF(YgooSmagYGE),i_,T5);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooScolsScolYrange_error),x_,i_);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_checkQ) {
  P x_,i_;
  P tmpF1687;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,YPint((P)0));
  tmpF1687 = T1;
  if (tmpF1687 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T3 = CALL2(1,VARREF(YgooSmagYL),i_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_55) {
  P x_,e_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(e_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,e_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_new_56) {
  P c_,x_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),c_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_57) {
  P s_,e_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_90);
  } else {
    T1 = LITREF(lit_91);
  }
  T3 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_58) {
  P s_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = fun_57;
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),T1,LITREF(lit_90),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rep_59) {
  P e_;
  P valF1691;
  P tmpF1690;
  P nxtsF1689;
  P keyF1688;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    keyF1688 = T4;
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    nxtsF1689 = T6;
    T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
    T9 = CALL1(1,VARREF(Ynot),T10);
    tmpF1690 = T9;
    if (tmpF1690 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T8 = T11;
    valF1691 = T8;
    CALL2(1,FREEREF(0),keyF1688,valF1691);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T14;
    e_ = a1;
    goto loop;
    T7 = T13;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_key_vals_60) {
  P fn_,key_vals_;
  P repF1692;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_rep_59,2);
  repF1692 = T1;
  FUNINIT(repF1692, 2,fn_,repF1692);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),key_vals_);
  T2 = CALL1(0,repF1692,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P key_,val_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(key_, 0);
  ARG(val_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),val_,FREEREF(0),key_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_62) {
  P t_,key_vals_;
  P xF1693;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  NARGS(key_vals_, 1);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),key_vals_);
  T3 = CALL2(1,VARREF(YgooSmathYtruncS),T4,YPint((P)2));
  T2 = CALL1(1,VARREF(YgooSmacrosY1st),T3);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T2);
  xF1693 = T1;
  T5 = FUNFAB(fun_61,1,xF1693);
  CALL2(1,VARREF(YgooScolsSseqYdo_key_vals),T5,key_vals_);
  T0 = xF1693;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_suffixQ_63) {
  P s_,end_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(end_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),end_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,T4);
  T5 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T2,T5);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,end_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_prefixQ_64) {
  P s_,begin_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(begin_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),begin_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),T2);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,begin_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_repeat_65) {
  P s_,n_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYLE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yobject_class),s_);
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),s_,T6);
    T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),s_,T5);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_split_66) {
  P s_,sep_;
  P matchF1694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(sep_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),s_,sep_);
  matchF1694 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),matchF1694,YPfalse);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),s_);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),matchF1694);
    T9 = CALL2(1,VARREF(YgooSmathYA),matchF1694,YPint((P)1));
    T10 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T8 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T9,T10);
    T7 = CALL2(1,VARREF(YgooScolsSseqYsplit),T8,sep_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),T6,T7);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_67) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),x_,FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_join_68) {
  P ss_,sep_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(sep_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yobject_class),sep_);
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_67,1,sep_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),ss_,YPint((P)0));
    T8 = CALL1(1,VARREF(YgooStypesYlen),ss_);
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),ss_,YPint((P)1),T8);
    T4 = CALL3(1,VARREF(YgooScolsScolYfold),T5,T6,T7);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"@t?");
  lit_1 = YPPsym((P)"x");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YLunionG),Ynil);
  YgooScolsSseqYOtQ = YPmet(FUNCODEREF(YgooScolsSseqYOtQ),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YgooScolsSseqYOtQ;
  VARSET(YgooScolsSseqYOtQ,T1);
  lit_2 = YPPsym((P)"1st");
  T3 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosY1st,T2);
  lit_3 = YPPsym((P)"2nd");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosY2nd,T4);
  lit_4 = YPPsym((P)"3rd");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqY3rd,T6);
  lit_5 = YPPsym((P)"last");
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYlast,T8);
  lit_6 = YPPsym((P)"pos");
  lit_7 = YPPsym((P)"v");
  T12 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T11 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_7)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T12,Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpos,T10);
  lit_8 = YPPsym((P)"finds");
  lit_9 = YPPsym((P)"y");
  T15 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T14 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T15,Ynil);
  T13 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T14,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYfinds,T13);
  lit_10 = YPPsym((P)"do2");
  lit_11 = YPPsym((P)"f");
  T17 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo2,T16);
  lit_12 = YPPsym((P)"do3");
  lit_13 = YPPsym((P)"z");
  T19 = YPsig(YPPlist(4,LITREF(lit_11),LITREF(lit_1),LITREF(lit_9),LITREF(lit_13)),YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo3,T18);
  lit_14 = YPPsym((P)"map2");
  T21 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYmap2,T20);
  lit_15 = YPPsym((P)"any2?");
  lit_16 = YPPsym((P)"test");
  T23 = YPsig(YPPlist(3,LITREF(lit_16),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYany2Q,T22);
  lit_17 = YPPsym((P)"all2?");
  T25 = YPsig(YPPlist(3,LITREF(lit_16),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYall2Q,T24);
  lit_18 = YPPsym((P)"rev");
  T27 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYrev,T26);
  lit_19 = YPPsym((P)"cat");
  lit_20 = YPPsym((P)"more");
  T29 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_20)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_19),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYcat,T28);
  lit_21 = YPPsym((P)"cat2");
  T31 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_21),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYcat2,T30);
  lit_22 = YPPsym((P)"push");
  lit_23 = YPPsym((P)"l");
  T33 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T32 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpush,T32);
  lit_24 = YPPsym((P)"pop");
  T36 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T35 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T36,Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpop,T34);
  lit_25 = YPPsym((P)"sub");
  lit_26 = YPPsym((P)"from");
  lit_27 = YPPsym((P)"below");
  T38 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_26),LITREF(lit_27)),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_25),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsub,T37);
  lit_28 = YPPsym((P)"ins");
  lit_29 = YPPsym((P)"e");
  lit_30 = YPPsym((P)"before");
  T40 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_29),LITREF(lit_30)),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T39 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_28),T40,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYins,T39);
  lit_31 = YPPsym((P)"pick");
  T42 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T41 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_31),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpick,T41);
  lit_32 = YPPsym((P)"reject");
  T44 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T43 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T44,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYreject,T43);
  lit_33 = YPPsym((P)"del-vals");
  T46 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_7)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T45 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_33),T46,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdel_vals,T45);
  lit_34 = YPPsym((P)"del-dups");
  T48 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T47 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_34),T48,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdel_dups,T47);
  lit_35 = YPPsym((P)"sort");
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T49 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_35),T50,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort,T49);
  lit_36 = YPPsym((P)"sort-by");
  T52 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_16)),YPPlist(2,VARREF(YLseqG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T51 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T52,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort_by,T51);
  lit_37 = YPPsym((P)"suffix?");
  lit_38 = YPPsym((P)"s");
  lit_39 = YPPsym((P)"suffix");
  T54 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_39)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T53 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_37),T54,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsuffixQ,T53);
  lit_40 = YPPsym((P)"prefix?");
  lit_41 = YPPsym((P)"prefix");
  T56 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_41)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T55 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T56,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYprefixQ,T55);
  lit_42 = YPPsym((P)"repeat");
  lit_43 = YPPsym((P)"n");
  T58 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_43)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T57 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_42),T58,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYrepeat,T57);
  T59 = YPfalse;
  return T59;
}

P YgooScolsSseqY___main_1___() {
  P tmpF1696;
  P tmpF1695;
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
  P T240,T241,T242,T243,T244,T245,T246,T247,T248;
DEFCREGS();
loop:
  lit_44 = YPPsym((P)"split");
  lit_45 = YPPsym((P)"sep");
  T1 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_45)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_44),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsplit,T0);
  lit_46 = YPPsym((P)"join");
  lit_47 = YPPsym((P)"ss");
  T3 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_45)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYjoin,T2);
  lit_48 = YPPsym((P)"vals-to-str");
  T5 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_48),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYvals_to_str,T4);
  lit_49 = YPPsym((P)"do-key-vals");
  lit_50 = YPPsym((P)"fn");
  lit_51 = YPPsym((P)"key-vals");
  T7 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_49),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo_key_vals,T6);
  lit_52 = YPPsym((P)"key-type");
  T8 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_1 = YPmet(FUNCODEREF(fun_key_type_1),LITREF(lit_52),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooScolsScolYkey_type);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooScolsScolYkey_type);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_key_type_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooScolsScolYkey_type,T9);
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1st_2 = YPmet(FUNCODEREF(fun_1st_2),LITREF(lit_2),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooSmacrosY1st);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooSmacrosY1st);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_1st_2;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooSmacrosY1st,T14);
  T18 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_3 = YPmet(FUNCODEREF(fun_2nd_3),LITREF(lit_3),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooSmacrosY2nd);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooSmacrosY2nd);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_2nd_3;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooSmacrosY2nd,T19);
  T23 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3rd_4 = YPmet(FUNCODEREF(fun_3rd_4),LITREF(lit_4),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooScolsSseqY3rd);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooScolsSseqY3rd);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_3rd_4;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooScolsSseqY3rd,T24);
  lit_53 = YPPsym((P)"map");
  lit_54 = YPPsym((P)"c");
  lit_55 = YPPsym((P)"con");
  lit_56 = YPPsym((P)"res");
  T29 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_5 = YPmet(FUNCODEREF(fun_con_5),LITREF(lit_55),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_54)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_6 = YPmet(FUNCODEREF(fun_map_6),LITREF(lit_53),T28,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooSmacrosYmap);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooSmacrosYmap);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_map_6;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooSmacrosYmap,T30);
  lit_57 = YPPsym((P)"map-keyed");
  T35 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_7 = YPmet(FUNCODEREF(fun_con_7),LITREF(lit_55),T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_54)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_keyed_8 = YPmet(FUNCODEREF(fun_map_keyed_8),LITREF(lit_57),T34,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsScolYmap_keyed);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsScolYmap_keyed);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_map_keyed_8;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsScolYmap_keyed,T36);
  lit_58 = YPPsym((P)"lop");
  lit_59 = YPPsym((P)"ex");
  lit_60 = YPPsym((P)"ey");
  T41 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_lop_9 = YPmet(FUNCODEREF(fun_lop_9),LITREF(lit_58),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do2_10 = YPmet(FUNCODEREF(fun_do2_10),LITREF(lit_10),T40,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YgooScolsSseqYdo2);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooScolsSseqYdo2);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_do2_10;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooScolsSseqYdo2,T42);
  lit_61 = YPPsym((P)"ez");
  T47 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_60),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lop_11 = YPmet(FUNCODEREF(fun_lop_11),LITREF(lit_58),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(4,LITREF(lit_11),LITREF(lit_1),LITREF(lit_9),LITREF(lit_13)),YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do3_12 = YPmet(FUNCODEREF(fun_do3_12),LITREF(lit_12),T46,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YgooScolsSseqYdo3);
  if (T50 != YPfalse) {
    T49 = VARREF(YgooScolsSseqYdo3);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_do3_12;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YgooScolsSseqYdo3,T48);
  T53 = YPsig(YPPlist(3,LITREF(lit_56),LITREF(lit_59),LITREF(lit_60)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_13 = YPmet(FUNCODEREF(fun_con_13),LITREF(lit_55),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_map2_14 = YPmet(FUNCODEREF(fun_map2_14),LITREF(lit_14),T52,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooSmacrosYmap2);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooSmacrosYmap2);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_map2_14;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooSmacrosYmap2,T54);
  lit_62 = YPPsym((P)"fnd");
  T59 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_15 = YPmet(FUNCODEREF(fun_fnd_15),LITREF(lit_62),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(3,LITREF(lit_16),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_any2Q_16 = YPmet(FUNCODEREF(fun_any2Q_16),LITREF(lit_15),T58,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooScolsSseqYany2Q);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooScolsSseqYany2Q);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_any2Q_16;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooScolsSseqYany2Q,T60);
  T65 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_17 = YPmet(FUNCODEREF(fun_fnd_17),LITREF(lit_62),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(3,LITREF(lit_16),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_all2Q_18 = YPmet(FUNCODEREF(fun_all2Q_18),LITREF(lit_17),T64,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YgooStypesYall2Q);
  if (T68 != YPfalse) {
    T67 = VARREF(YgooStypesYall2Q);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_all2Q_18;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YgooStypesYall2Q,T66);
  lit_63 = YPPsym((P)"=");
  lit_64 = YPPsym((P)"c1");
  lit_65 = YPPsym((P)"c2");
  lit_66 = YPPsym((P)"eq");
  lit_67 = YPPsym((P)"e1");
  lit_68 = YPPsym((P)"e2");
  T71 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eq_19 = YPmet(FUNCODEREF(fun_eq_19),LITREF(lit_66),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_65)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_20 = YPmet(FUNCODEREF(fun_E_20),LITREF(lit_63),T70,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooSmathYE);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSmathYE);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_E_20;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooSmathYE,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_21 = YPmet(FUNCODEREF(fun_last_21),LITREF(lit_5),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooSmacrosYlast);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSmacrosYlast);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_last_21;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSmacrosYlast,T77);
  lit_69 = YPPsym((P)"a");
  T83 = YPsig(YPPlist(1,LITREF(lit_69)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T81 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_7)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T82,Ynil);
  fun_pos_23 = YPmet(FUNCODEREF(fun_pos_23),LITREF(lit_6),T81,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YgooScolsSseqYpos);
  if (T86 != YPfalse) {
    T85 = VARREF(YgooScolsSseqYpos);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_pos_23;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YgooScolsSseqYpos,T84);
  lit_70 = YPPsym((P)"outer");
  lit_71 = YPPsym((P)"xsi");
  lit_72 = YPPsym((P)"inner");
  lit_73 = YPPsym((P)"xi");
  lit_74 = YPPsym((P)"yi");
  T91 = YPsig(YPPlist(2,LITREF(lit_73),LITREF(lit_74)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_24 = YPmet(FUNCODEREF(fun_inner_24),LITREF(lit_72),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_71)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_25 = YPmet(FUNCODEREF(fun_outer_25),LITREF(lit_70),T90,ENVNUL,PNUL,YPfalse);
  T89 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T88 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T89,Ynil);
  fun_finds_26 = YPmet(FUNCODEREF(fun_finds_26),LITREF(lit_8),T88,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YgooScolsSseqYfinds);
  if (T94 != YPfalse) {
    T93 = VARREF(YgooScolsSseqYfinds);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_finds_26;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YgooScolsSseqYfinds,T92);
  lit_75 = YPPsym((P)"seq");
  T97 = YPsig(YPPlist(2,LITREF(lit_75),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_27 = YPmet(FUNCODEREF(fun_con_27),LITREF(lit_55),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_rev_28 = YPmet(FUNCODEREF(fun_rev_28),LITREF(lit_18),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YgooScolsSseqYrev);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooScolsSseqYrev);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_rev_28;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooScolsSseqYrev,T98);
  T102 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_47)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_cat_29 = YPmet(FUNCODEREF(fun_cat_29),LITREF(lit_19),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YgooSmacrosYcat);
  if (T105 != YPfalse) {
    T104 = VARREF(YgooSmacrosYcat);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_cat_29;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YgooSmacrosYcat,T103);
  lit_76 = YPPsym((P)"con-x");
  lit_77 = YPPsym((P)"con-y");
  T109 = YPsig(YPPlist(2,LITREF(lit_75),LITREF(lit_60)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_y_30 = YPmet(FUNCODEREF(fun_con_y_30),LITREF(lit_77),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_75),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_x_31 = YPmet(FUNCODEREF(fun_con_x_31),LITREF(lit_76),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_cat2_32 = YPmet(FUNCODEREF(fun_cat2_32),LITREF(lit_21),T107,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YgooScolsSseqYcat2);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooScolsSseqYcat2);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_cat2_32;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooScolsSseqYcat2,T110);
  lit_78 = YPPsym((P)"i");
  T115 = YPsig(YPPlist(3,LITREF(lit_75),LITREF(lit_78),LITREF(lit_29)),YPPlist(3,VARREF(YLanyG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_x_33 = YPmet(FUNCODEREF(fun_con_x_33),LITREF(lit_76),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_26),LITREF(lit_27)),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_sub_34 = YPmet(FUNCODEREF(fun_sub_34),LITREF(lit_25),T114,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YgooScolsSseqYsub);
  if (T118 != YPfalse) {
    T117 = VARREF(YgooScolsSseqYsub);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sub_34;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YgooScolsSseqYsub,T116);
  T120 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_push_35 = YPmet(FUNCODEREF(fun_push_35),LITREF(lit_22),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YgooScolsSseqYpush);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooScolsSseqYpush);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_push_35;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooScolsSseqYpush,T121);
  T126 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T125 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T126,Ynil);
  fun_pop_36 = YPmet(FUNCODEREF(fun_pop_36),LITREF(lit_24),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooScolsSseqYpop);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooScolsSseqYpop);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_pop_36;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooScolsSseqYpop,T127);
  T132 = YPsig(YPPlist(2,LITREF(lit_75),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_37 = YPmet(FUNCODEREF(fun_con_37),LITREF(lit_55),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_pick_38 = YPmet(FUNCODEREF(fun_pick_38),LITREF(lit_31),T131,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YgooScolsSseqYpick);
  if (T135 != YPfalse) {
    T134 = VARREF(YgooScolsSseqYpick);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_pick_38;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YgooScolsSseqYpick,T133);
  T138 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_reject_40 = YPmet(FUNCODEREF(fun_reject_40),LITREF(lit_32),T137,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YgooScolsSseqYreject);
  if (T141 != YPfalse) {
    T140 = VARREF(YgooScolsSseqYreject);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_reject_40;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YgooScolsSseqYreject,T139);
  lit_79 = YPPsym((P)"del");
  lit_80 = YPPsym((P)"key");
  T143 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_80)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_41 = YPmet(FUNCODEREF(fun_del_41),LITREF(lit_79),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YgooScolsScolYdel);
  if (T146 != YPfalse) {
    T145 = VARREF(YgooScolsScolYdel);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_del_41;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YgooScolsScolYdel,T144);
  T149 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_vals_43 = YPmet(FUNCODEREF(fun_del_vals_43),LITREF(lit_33),T148,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YgooScolsSseqYdel_vals);
  if (T152 != YPfalse) {
    T151 = VARREF(YgooScolsSseqYdel_vals);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_del_vals_43;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YgooScolsSseqYdel_vals,T150);
  T155 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_del_dups_45 = YPmet(FUNCODEREF(fun_del_dups_45),LITREF(lit_34),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YgooScolsSseqYdel_dups);
  if (T158 != YPfalse) {
    T157 = VARREF(YgooScolsSseqYdel_dups);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_del_dups_45;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YgooScolsSseqYdel_dups,T156);
  lit_81 = YPPsym((P)"copy");
  lit_82 = YPPsym((P)"r");
  T161 = YPsig(YPPlist(3,LITREF(lit_82),LITREF(lit_78),LITREF(lit_29)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_copy_46 = YPmet(FUNCODEREF(fun_copy_46),LITREF(lit_81),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_7),LITREF(lit_30)),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_ins_47 = YPmet(FUNCODEREF(fun_ins_47),LITREF(lit_28),T160,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YgooScolsSseqYins);
  if (T164 != YPfalse) {
    T163 = VARREF(YgooScolsSseqYins);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_ins_47;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YgooScolsSseqYins,T162);
  lit_83 = YPPsym((P)"elts");
  lit_84 = YPPsym((P)"keys");
  T167 = YPsig(YPPlist(4,LITREF(lit_82),LITREF(lit_29),LITREF(lit_78),LITREF(lit_84)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_copy_48 = YPmet(FUNCODEREF(fun_copy_48),LITREF(lit_81),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_84)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_elts_49 = YPmet(FUNCODEREF(fun_elts_49),LITREF(lit_83),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YgooScolsScolYelts);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooScolsScolYelts);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_elts_49;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooScolsScolYelts,T168);
  T172 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_sort_50 = YPmet(FUNCODEREF(fun_sort_50),LITREF(lit_35),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YgooScolsSseqYsort);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooScolsSseqYsort);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sort_50;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooScolsSseqYsort,T173);
  T177 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_16)),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_by_51 = YPmet(FUNCODEREF(fun_sort_by_51),LITREF(lit_36),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YgooScolsSseqYsort_by);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooScolsSseqYsort_by);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sort_by_51;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooScolsSseqYsort_by,T178);
  lit_85 = YPPsym((P)"d");
  T182 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_52 = YPmet(FUNCODEREF(fun_keys_52),LITREF(lit_84),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooScolsScolYkeys);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooScolsScolYkeys);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_keys_52;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooScolsScolYkeys,T183);
  lit_86 = YPPsym((P)"range-check");
  T187 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_78)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_check = YPmet(FUNCODEREF(YgooScolsSseqYrange_check),LITREF(lit_86),T187,ENVNUL,PNUL,YPfalse);
  T188 = YgooScolsSseqYrange_check;
  VARSET(YgooScolsSseqYrange_check,T188);
  lit_87 = YPPsym((P)"range-check?");
  T189 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_78)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_checkQ = YPmet(FUNCODEREF(YgooScolsSseqYrange_checkQ),LITREF(lit_87),T189,ENVNUL,PNUL,YPfalse);
  T190 = YgooScolsSseqYrange_checkQ;
  VARSET(YgooScolsSseqYrange_checkQ,T190);
  lit_88 = YPPsym((P)"add");
  T191 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_29)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_55 = YPmet(FUNCODEREF(fun_add_55),LITREF(lit_88),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YgooScolsScolYadd);
  if (T194 != YPfalse) {
    T193 = VARREF(YgooScolsScolYadd);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_add_55;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YgooScolsScolYadd,T192);
  lit_89 = YPPsym((P)"add-new");
  T196 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_56 = YPmet(FUNCODEREF(fun_add_new_56),LITREF(lit_89),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YgooScolsSseqYadd_new);
  if (T199 != YPfalse) {
    T198 = VARREF(YgooScolsSseqYadd_new);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_add_new_56;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YgooScolsSseqYadd_new,T197);
  lit_90 = YPsb((P)"");
  lit_91 = YPsb((P)" ");
  T202 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T202,ENVNUL,PNUL,YPfalse);
  T201 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_58 = YPmet(FUNCODEREF(fun_vals_to_str_58),LITREF(lit_48),T201,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YgooScolsSseqYvals_to_str);
  if (T205 != YPfalse) {
    T204 = VARREF(YgooScolsSseqYvals_to_str);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_vals_to_str_58;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YgooScolsSseqYvals_to_str,T203);
  lit_92 = YPPsym((P)"rep");
  T208 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_rep_59 = YPmet(FUNCODEREF(fun_rep_59),LITREF(lit_92),T208,ENVNUL,PNUL,YPfalse);
  T207 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_60 = YPmet(FUNCODEREF(fun_do_key_vals_60),LITREF(lit_49),T207,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YgooScolsSseqYdo_key_vals);
  if (T211 != YPfalse) {
    T210 = VARREF(YgooScolsSseqYdo_key_vals);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_do_key_vals_60;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YgooScolsSseqYdo_key_vals,T209);
  lit_93 = YPPsym((P)"col");
  lit_94 = YPPsym((P)"t");
  lit_95 = YPPsym((P)"val");
  T215 = YPsig(YPPlist(2,LITREF(lit_80),LITREF(lit_95)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T214 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T213 = YPsig(YPPlist(2,LITREF(lit_94),LITREF(lit_51)),YPPlist(1,T214),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_62 = YPmet(FUNCODEREF(fun_col_62),LITREF(lit_93),T213,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YgooScolsScolYcol);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooScolsScolYcol);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_col_62;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooScolsScolYcol,T216);
  lit_96 = YPPsym((P)"end");
  T220 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_96)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_suffixQ_63 = YPmet(FUNCODEREF(fun_suffixQ_63),LITREF(lit_37),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YgooScolsSseqYsuffixQ);
  if (T223 != YPfalse) {
    T222 = VARREF(YgooScolsSseqYsuffixQ);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_suffixQ_63;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YgooScolsSseqYsuffixQ,T221);
  lit_97 = YPPsym((P)"begin");
  T225 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_97)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_prefixQ_64 = YPmet(FUNCODEREF(fun_prefixQ_64),LITREF(lit_40),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YgooScolsSseqYprefixQ);
  if (T228 != YPfalse) {
    T227 = VARREF(YgooScolsSseqYprefixQ);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_prefixQ_64;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YgooScolsSseqYprefixQ,T226);
  T230 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_43)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_repeat_65 = YPmet(FUNCODEREF(fun_repeat_65),LITREF(lit_42),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YgooScolsSseqYrepeat);
  if (T233 != YPfalse) {
    T232 = VARREF(YgooScolsSseqYrepeat);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_repeat_65;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YgooScolsSseqYrepeat,T231);
  T235 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_45)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_split_66 = YPmet(FUNCODEREF(fun_split_66),LITREF(lit_44),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YgooScolsSseqYsplit);
  if (T238 != YPfalse) {
    T237 = VARREF(YgooScolsSseqYsplit);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_split_66;
  T236 = XCALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YgooScolsSseqYsplit,T236);
  T241 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T241,ENVNUL,PNUL,YPfalse);
  T240 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_45)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_join_68 = YPmet(FUNCODEREF(fun_join_68),LITREF(lit_46),T240,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YgooScolsSseqYjoin);
  if (T244 != YPfalse) {
    T243 = VARREF(YgooScolsSseqYjoin);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_join_68;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YgooScolsSseqYjoin,T242);
  tmpF1695 = YPfalse;
  if (tmpF1695 != YPfalse) {
    T246 = VARREF(YgooScolsSseqYbelow);
  } else {
    T246 = YPfalse;
  }
  tmpF1696 = YPfalse;
  if (tmpF1696 != YPfalse) {
    T247 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T247 = YPfalse;
  }
  T248 = YPfalse;
  return T248;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"tail", &module_info_gooSboot, "tail"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<<", &module_info_gooSmath, "<<"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"as", &module_info_gooStypes, "as"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"/", &module_info_gooSmath, "/"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%get", &module_info_gooSboot, "%get"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"last", &module_info_gooSmacros, "last"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"&", &module_info_gooSmath, "&"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"loc", &module_info_gooSboot, "loc"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"case", &module_info_gooSmacros, "case"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"-", &module_info_gooSmath, "-"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {"~=", &module_info_gooSmath, "~="},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"any2?", CVAR, &YgooScolsSseqYany2Q},
  {"pick", CVAR, &YgooScolsSseqYpick},
  {"@t?", CVAR, &YgooScolsSseqYOtQ},
  {"join", CVAR, &YgooScolsSseqYjoin},
  {"range-check", CVAR, &YgooScolsSseqYrange_check},
  {"split", CVAR, &YgooScolsSseqYsplit},
  {"ins", CVAR, &YgooScolsSseqYins},
  {"below", CVAR, &YgooScolsSseqYbelow},
  {"reject", CVAR, &YgooScolsSseqYreject},
  {"---main-1---", PVAR, NULL},
  {"repeat", CVAR, &YgooScolsSseqYrepeat},
  {"do3", CVAR, &YgooScolsSseqYdo3},
  {"sub", CVAR, &YgooScolsSseqYsub},
  {"prefix?", CVAR, &YgooScolsSseqYprefixQ},
  {"add-new", CVAR, &YgooScolsSseqYadd_new},
  {"do2", CVAR, &YgooScolsSseqYdo2},
  {"pop", CVAR, &YgooScolsSseqYpop},
  {"pos", CVAR, &YgooScolsSseqYpos},
  {"suffix?", CVAR, &YgooScolsSseqYsuffixQ},
  {"push", CVAR, &YgooScolsSseqYpush},
  {"finds", CVAR, &YgooScolsSseqYfinds},
  {"sort-by", CVAR, &YgooScolsSseqYsort_by},
  {"cat2", CVAR, &YgooScolsSseqYcat2},
  {"range-check?", CVAR, &YgooScolsSseqYrange_checkQ},
  {"sort", CVAR, &YgooScolsSseqYsort},
  {"del-dups", CVAR, &YgooScolsSseqYdel_dups},
  {"---main-0---", PVAR, NULL},
  {"rev", CVAR, &YgooScolsSseqYrev},
  {"del-vals", CVAR, &YgooScolsSseqYdel_vals},
  {"3rd", CVAR, &YgooScolsSseqY3rd},
  {"do-key-vals", CVAR, &YgooScolsSseqYdo_key_vals},
  {"vals-to-str", CVAR, &YgooScolsSseqYvals_to_str},
  {"sort-by!", CVAR, &YgooScolsSseqYsort_byX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"any2?", "any2?"},
  {"pick", "pick"},
  {"join", "join"},
  {"map2", "map2"},
  {"split", "split"},
  {"ins", "ins"},
  {"repeat", "repeat"},
  {"do3", "do3"},
  {"below", "below"},
  {"sub", "sub"},
  {"prefix?", "prefix?"},
  {"do2", "do2"},
  {"pop", "pop"},
  {"<seq.>", "<seq.>"},
  {"<seq>", "<seq>"},
  {"pos", "pos"},
  {"suffix?", "suffix?"},
  {"push", "push"},
  {"finds", "finds"},
  {"sort-by", "sort-by"},
  {"cat2", "cat2"},
  {"range-check?", "range-check?"},
  {"sort", "sort"},
  {"range-check", "range-check"},
  {"del-dups", "del-dups"},
  {"cat", "cat"},
  {"rev", "rev"},
  {"last", "last"},
  {"del-vals", "del-vals"},
  {"3rd", "3rd"},
  {"do-key-vals", "do-key-vals"},
  {"all2?", "all2?"},
  {"2nd", "2nd"},
  {"reject", "reject"},
  {"vals-to-str", "vals-to-str"},
  {"1st", "1st"},
  {"sort-by!", "sort-by!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSseq;
MODULE_INFO module_info_gooScolsSseq = {
  "goo/cols/seq",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);

/* EXPRESSION: */

extern void load_module_gooScolsSseq (void);

void load_module_gooScolsSseq (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();

  (P)YgooScolsSseqY___main_0___();
  (P)YgooScolsSseqY___main_1___();

}

/* END OF GENERATED CODE. */
