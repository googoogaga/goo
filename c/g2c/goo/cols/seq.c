/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/seq */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooScolsSseqYOtQ,"goo/cols/seq","@t?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
DEF(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooScolsSseqYadd_new,"goo/cols/seq","add-new");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Ynew,"goo/boot","new");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
DEF(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_38);
DEFLIT(lit_32);
DEFLIT(lit_40);
DEFLIT(lit_42);
DEFLIT(lit_54);
DEFLIT(lit_15);
DEFLIT(lit_60);
DEFLIT(lit_46);
DEFLIT(lit_26);
DEFLIT(lit_58);
DEFLIT(lit_65);
DEFLIT(lit_50);
DEFLIT(lit_23);
DEFLIT(lit_5);
DEFLIT(lit_61);
DEFLIT(lit_90);
DEFLIT(lit_36);
DEFLIT(lit_2);
DEFLIT(lit_72);
DEFLIT(lit_20);
DEFLIT(lit_75);
DEFLIT(lit_33);
DEFLIT(lit_43);
DEFLIT(lit_78);
DEFLIT(lit_10);
DEFLIT(lit_28);
DEFLIT(lit_77);
DEFLIT(lit_8);
DEFLIT(lit_22);
DEFLIT(lit_59);
DEFLIT(lit_11);
DEFLIT(lit_25);
DEFLIT(lit_64);
DEFLIT(lit_49);
DEFLIT(lit_89);
DEFLIT(lit_84);
DEFLIT(lit_31);
DEFLIT(lit_67);
DEFLIT(lit_91);
DEFLIT(lit_53);
DEFLIT(lit_93);
DEFLIT(lit_17);
DEFLIT(lit_71);
DEFLIT(lit_19);
DEFLIT(lit_47);
DEFLIT(lit_35);
DEFLIT(lit_39);
DEFLIT(lit_51);
DEFLIT(lit_4);
DEFLIT(lit_85);
DEFLIT(lit_80);
DEFLIT(lit_87);
DEFLIT(lit_95);
DEFLIT(lit_41);
DEFLIT(lit_55);
DEFLIT(lit_12);
DEFLIT(lit_66);
DEFLIT(lit_9);
DEFLIT(lit_45);
DEFLIT(lit_86);
DEFLIT(lit_0);
DEFLIT(lit_48);
DEFLIT(lit_52);
DEFLIT(lit_94);
DEFLIT(lit_56);
DEFLIT(lit_63);
DEFLIT(lit_92);
DEFLIT(lit_14);
DEFLIT(lit_24);
DEFLIT(lit_88);
DEFLIT(lit_81);
DEFLIT(lit_37);
DEFLIT(lit_18);
DEFLIT(lit_74);
DEFLIT(lit_68);
DEFLIT(lit_21);
DEFLIT(lit_6);
DEFLIT(lit_96);
DEFLIT(lit_44);
DEFLIT(lit_34);
DEFLIT(lit_73);
DEFLIT(lit_13);
DEFLIT(lit_3);
DEFLIT(lit_69);
DEFLIT(lit_76);
DEFLIT(lit_57);
DEFLIT(lit_62);
DEFLIT(lit_27);
DEFLIT(lit_82);
DEFLIT(lit_16);
DEFLIT(lit_79);
DEFLIT(lit_83);
DEFLIT(lit_29);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_70);

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
LOCFOR(fun_add_new_55);
LOCFOR(fun_56);
LOCFOR(fun_vals_to_str_57);
LOCFOR(fun_rep_58);
LOCFOR(fun_do_key_vals_59);
LOCFOR(fun_60);
LOCFOR(fun_col_61);
LOCFOR(fun_suffixQ_62);
LOCFOR(fun_prefixQ_63);
LOCFOR(fun_repeat_64);
LOCFOR(fun_split_65);
LOCFOR(fun_66);
LOCFOR(fun_join_67);
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
  P conF977;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_5,3);
  conF977 = T1;
  FUNINIT(conF977, 3,c_,f_,conF977);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF977,Ynil,T3);
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
  P conF978;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_7,3);
  conF978 = T1;
  FUNINIT(conF978, 3,c_,f_,conF978);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF978,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_9) {
  P ex_,ey_;
  P tmpF979;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF979 = T3;
  if (tmpF979 != YPfalse) {
    T4 = tmpF979;
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
  P lopF980;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_lop_9,2);
  lopF980 = T1;
  FUNINIT(lopF980, 2,f_,lopF980);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,lopF980,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_11) {
  P ex_,ey_,ez_;
  P tmpF982;
  P tmpF981;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
  ARG(ez_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF981 = T3;
  if (tmpF981 != YPfalse) {
    T4 = tmpF981;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    tmpF982 = T6;
    if (tmpF982 != YPfalse) {
      T7 = tmpF982;
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
  P lopF983;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
loop:
  T1 = FUNSHELL(1,fun_lop_11,2);
  lopF983 = T1;
  FUNINIT(lopF983, 2,f_,lopF983);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),z_);
  T2 = CALL3(0,lopF983,T3,T4,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_13) {
  P res_,ex_,ey_;
  P tmpF984;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(ex_, 1);
  ARG(ey_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF984 = T2;
  if (tmpF984 != YPfalse) {
    T3 = tmpF984;
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
  P conF985;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_13,3);
  conF985 = T1;
  FUNINIT(conF985, 3,x_,f_,conF985);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL3(0,conF985,Ynil,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_15) {
  P ex_,ey_;
  P tmpF987;
  P tmpF986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF986 = T2;
  if (tmpF986 != YPfalse) {
    T3 = tmpF986;
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
    tmpF987 = T6;
    if (tmpF987 != YPfalse) {
      T10 = tmpF987;
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
  P fndF988;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_15,2);
  fndF988 = T1;
  FUNINIT(fndF988, 2,test_,fndF988);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,fndF988,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_17) {
  P ex_,ey_;
  P tmpF991;
  P tmpF990;
  P tmpF989;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF989 = T1;
  if (tmpF989 != YPfalse) {
    T2 = tmpF989;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    tmpF990 = T4;
    if (tmpF990 != YPfalse) {
      T5 = tmpF990;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
      T7 = CALL2(1,FREEREF(0),T8,T9);
      tmpF991 = T7;
      if (tmpF991 != YPfalse) {
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
  P fndF992;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_17,2);
  fndF992 = T1;
  FUNINIT(fndF992, 2,test_,fndF992);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,fndF992,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eq_19) {
  P e1_,e2_;
  P tmpF993;
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
    tmpF993 = T4;
    if (tmpF993 != YPfalse) {
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
  P eqF994;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T1 = FUNSHELL(1,fun_eq_19,1);
  eqF994 = T1;
  FUNINIT(eqF994, 1,eqF994);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c2_);
  T2 = CALL2(0,eqF994,T3,T4);
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
  P tmpF995;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(xi_, 0);
  ARG(yi_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),xi_,T3);
  tmpF995 = T2;
  if (tmpF995 != YPfalse) {
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
  P innerF996;
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
    innerF996 = T7;
    FUNINIT(innerF996, 5,FREEREF(0),FREEREF(1),innerF996,xsi_,FREEREF(2));
    T8 = CALL2(0,innerF996,xsi_,YPint((P)0));
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
  P outerF997;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_outer_25,3);
  outerF997 = T1;
  FUNINIT(outerF997, 3,x_,y_,outerF997);
  T2 = CALL1(0,outerF997,YPint((P)0));
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
  P conF998;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_27,2);
  conF998 = T1;
  FUNINIT(conF998, 2,x_,conF998);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,conF998,Ynil,T3);
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
  P con_yF999;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(ex_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_con_y_30,2);
    con_yF999 = T3;
    FUNINIT(con_yF999, 2,FREEREF(0),con_yF999);
    T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
    T4 = CALL2(0,con_yF999,seq_,T5);
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
  P con_xF1000;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_x_31,3);
  con_xF1000 = T1;
  FUNINIT(con_xF1000, 3,x_,y_,con_xF1000);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,con_xF1000,Ynil,T3);
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
  P con_xF1001;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_x_33,4);
  con_xF1001 = T1;
  FUNINIT(con_xF1001, 4,x_,from_,below_,con_xF1001);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL3(1,con_xF1001,Ynil,YPint((P)0),T3);
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
  P vF1002;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
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
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    vF1002 = T4;
    T7 = CALL1(1,FREEREF(1),vF1002);
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,vF1002);
      T6 = T8;
    } else {
      T6 = seq_;
    }
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T6;
    a2 = T9;
    seq_ = a1;
    e_ = a2;
    goto loop;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pick_38) {
  P test_,x_;
  P conF1003;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_37,3);
  conF1003 = T1;
  FUNINIT(conF1003, 3,x_,test_,conF1003);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,conF1003,Ynil,T3);
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(r_, 0);
  ARG(i_, 1);
  ARG(e_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),r_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(1));
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(2),r_);
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T6;
      a2 = T7;
      a3 = e_;
      r_ = a1;
      i_ = a2;
      e_ = a3;
      goto loop;
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,r_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
      a1 = T9;
      a2 = T11;
      a3 = T12;
      r_ = a1;
      i_ = a2;
      e_ = a3;
      goto loop;
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ins_47) {
  P x_,v_,before_;
  P copyF1004;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
loop:
  T1 = FUNSHELL(1,fun_copy_46,4);
  copyF1004 = T1;
  FUNINIT(copyF1004, 4,x_,before_,v_,copyF1004);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL3(0,copyF1004,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_48) {
  P r_,e_,i_,keys_;
  P keyF1005;
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
        keyF1005 = T9;
        T11 = CALL2(1,VARREF(YgooSmathYE),i_,keyF1005);
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
          T19 = CALL2(1,VARREF(YisaQ),keyF1005,VARREF(YLintG));
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
              T24 = CALL2(1,VARREF(YgooScolsScolYrange_error),FREEREF(0),keyF1005);
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
  P copyF1006;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
loop:
  T1 = FUNSHELL(1,fun_copy_48,2);
  copyF1006 = T1;
  FUNINIT(copyF1006, 2,x_,copyF1006);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T5 = CALL1(1,VARREF(YgooScolsSseqYsort),keys_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T2 = CALL4(0,copyF1006,Ynil,T3,YPint((P)0),T4);
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
  P x_,test_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(test_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),x_);
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
  P tmpF1007;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  tmpF1007 = T2;
  if (tmpF1007 != YPfalse) {
    T3 = tmpF1007;
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
  P tmpF1008;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,YPint((P)0));
  tmpF1008 = T1;
  if (tmpF1008 != YPfalse) {
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

FUNCODEDEF(fun_add_new_55) {
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

FUNCODEDEF(fun_56) {
  P s_,e_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_89);
  } else {
    T1 = LITREF(lit_90);
  }
  T3 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_57) {
  P s_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = fun_56;
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),T1,LITREF(lit_89),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rep_58) {
  P e_;
  P valF1012;
  P tmpF1011;
  P nxtsF1010;
  P keyF1009;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    keyF1009 = T4;
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    nxtsF1010 = T6;
    T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
    T9 = CALL1(1,VARREF(Ynot),T10);
    tmpF1011 = T9;
    if (tmpF1011 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T8 = T11;
    valF1012 = T8;
    CALL2(1,FREEREF(0),keyF1009,valF1012);
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

FUNCODEDEF(fun_do_key_vals_59) {
  P fn_,key_vals_;
  P repF1013;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_rep_58,2);
  repF1013 = T1;
  FUNINIT(repF1013, 2,fn_,repF1013);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),key_vals_);
  T2 = CALL1(0,repF1013,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
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

FUNCODEDEF(fun_col_61) {
  P t_,key_vals_;
  P xF1014;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  NARGS(key_vals_, 1);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),key_vals_);
  T3 = CALL2(1,VARREF(YgooSmathYtruncS),T4,YPint((P)2));
  T2 = CALL1(1,VARREF(YgooScolsSseqY1st),T3);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T2);
  xF1014 = T1;
  T5 = FUNFAB(fun_60,1,xF1014);
  CALL2(1,VARREF(YgooScolsSseqYdo_key_vals),T5,key_vals_);
  T0 = xF1014;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_suffixQ_62) {
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

FUNCODEDEF(fun_prefixQ_63) {
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

FUNCODEDEF(fun_repeat_64) {
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

FUNCODEDEF(fun_split_65) {
  P s_,sep_;
  P matchF1015;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(sep_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),s_,sep_);
  matchF1015 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),matchF1015,YPfalse);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),s_);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),matchF1015);
    T9 = CALL2(1,VARREF(YgooSmathYA),matchF1015,YPint((P)1));
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

FUNCODEDEF(fun_66) {
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

FUNCODEDEF(fun_join_67) {
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
    T5 = FUNFAB(fun_66,1,sep_);
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
  VARSET(YgooScolsSseqY1st,T2);
  lit_3 = YPPsym((P)"2nd");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesY2nd,T4);
  lit_4 = YPPsym((P)"3rd");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqY3rd,T6);
  lit_5 = YPPsym((P)"last");
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYlast,T8);
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
  VARSET(YgooScolsSseqYmap2,T20);
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
  P tmpF1017;
  P tmpF1016;
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
  T16 = BOUNDP(YgooScolsSseqY1st);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooScolsSseqY1st);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_1st_2;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooScolsSseqY1st,T14);
  T18 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_3 = YPmet(FUNCODEREF(fun_2nd_3),LITREF(lit_3),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooStypesY2nd);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooStypesY2nd);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_2nd_3;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooStypesY2nd,T19);
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
  T56 = BOUNDP(YgooScolsSseqYmap2);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsSseqYmap2);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_map2_14;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsSseqYmap2,T54);
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
  T79 = BOUNDP(YgooScolsSseqYlast);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooScolsSseqYlast);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_last_21;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooScolsSseqYlast,T77);
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
  T177 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_16)),YPPlist(2,VARREF(YLseqG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
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
  lit_88 = YPPsym((P)"add-new");
  T191 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_55 = YPmet(FUNCODEREF(fun_add_new_55),LITREF(lit_88),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YgooScolsSseqYadd_new);
  if (T194 != YPfalse) {
    T193 = VARREF(YgooScolsSseqYadd_new);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_add_new_55;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YgooScolsSseqYadd_new,T192);
  lit_89 = YPsb((P)"");
  lit_90 = YPsb((P)" ");
  T197 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_57 = YPmet(FUNCODEREF(fun_vals_to_str_57),LITREF(lit_48),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YgooScolsSseqYvals_to_str);
  if (T200 != YPfalse) {
    T199 = VARREF(YgooScolsSseqYvals_to_str);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_vals_to_str_57;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YgooScolsSseqYvals_to_str,T198);
  lit_91 = YPPsym((P)"rep");
  T203 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_rep_58 = YPmet(FUNCODEREF(fun_rep_58),LITREF(lit_91),T203,ENVNUL,PNUL,YPfalse);
  T202 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_59 = YPmet(FUNCODEREF(fun_do_key_vals_59),LITREF(lit_49),T202,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YgooScolsSseqYdo_key_vals);
  if (T206 != YPfalse) {
    T205 = VARREF(YgooScolsSseqYdo_key_vals);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_do_key_vals_59;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YgooScolsSseqYdo_key_vals,T204);
  lit_92 = YPPsym((P)"col");
  lit_93 = YPPsym((P)"t");
  lit_94 = YPPsym((P)"val");
  T210 = YPsig(YPPlist(2,LITREF(lit_80),LITREF(lit_94)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T210,ENVNUL,PNUL,YPfalse);
  T209 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T208 = YPsig(YPPlist(2,LITREF(lit_93),LITREF(lit_51)),YPPlist(1,T209),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_61 = YPmet(FUNCODEREF(fun_col_61),LITREF(lit_92),T208,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YgooScolsScolYcol);
  if (T213 != YPfalse) {
    T212 = VARREF(YgooScolsScolYcol);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_col_61;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YgooScolsScolYcol,T211);
  lit_95 = YPPsym((P)"end");
  T215 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_95)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_suffixQ_62 = YPmet(FUNCODEREF(fun_suffixQ_62),LITREF(lit_37),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YgooScolsSseqYsuffixQ);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooScolsSseqYsuffixQ);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_suffixQ_62;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooScolsSseqYsuffixQ,T216);
  lit_96 = YPPsym((P)"begin");
  T220 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_96)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_prefixQ_63 = YPmet(FUNCODEREF(fun_prefixQ_63),LITREF(lit_40),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YgooScolsSseqYprefixQ);
  if (T223 != YPfalse) {
    T222 = VARREF(YgooScolsSseqYprefixQ);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_prefixQ_63;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YgooScolsSseqYprefixQ,T221);
  T225 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_43)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_repeat_64 = YPmet(FUNCODEREF(fun_repeat_64),LITREF(lit_42),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YgooScolsSseqYrepeat);
  if (T228 != YPfalse) {
    T227 = VARREF(YgooScolsSseqYrepeat);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_repeat_64;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YgooScolsSseqYrepeat,T226);
  T230 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_45)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_split_65 = YPmet(FUNCODEREF(fun_split_65),LITREF(lit_44),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YgooScolsSseqYsplit);
  if (T233 != YPfalse) {
    T232 = VARREF(YgooScolsSseqYsplit);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_split_65;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YgooScolsSseqYsplit,T231);
  T236 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_45)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_join_67 = YPmet(FUNCODEREF(fun_join_67),LITREF(lit_46),T235,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YgooScolsSseqYjoin);
  if (T239 != YPfalse) {
    T238 = VARREF(YgooScolsSseqYjoin);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_join_67;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YgooScolsSseqYjoin,T237);
  tmpF1016 = YPfalse;
  if (tmpF1016 != YPfalse) {
    T241 = VARREF(YgooScolsSseqYbelow);
  } else {
    T241 = YPfalse;
  }
  tmpF1017 = YPfalse;
  if (tmpF1017 != YPfalse) {
    T242 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T242 = YPfalse;
  }
  T243 = YPfalse;
  return T243;
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
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"if", &module_info_gooSboot, "if"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<=", &module_info_gooSmag, "<="},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"|", &module_info_gooSmath, "|"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"find", &module_info_gooScolsScol, "find"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"into", &module_info_gooScolsScol, "into"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"acos", &module_info_gooSmath, "acos"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"or", &module_info_gooSmacros, "or"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"+", &module_info_gooSmath, "+"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"abs", &module_info_gooSmath, "abs"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {">", &module_info_gooSmag, ">"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"any?", &module_info_gooStypes, "any?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"=", &module_info_gooSmath, "="},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"/", &module_info_gooSmath, "/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"not", &module_info_gooSboot, "not"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"t=", &module_info_gooStypes, "t="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"log", &module_info_gooSmath, "log"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rem", &module_info_gooSmath, "rem"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"even?", &module_info_gooSmath, "even?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"tan", &module_info_gooSmath, "tan"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"del", &module_info_gooScolsScol, "del"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"*", &module_info_gooSmath, "*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"nul", &module_info_gooSboot, "nul"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"any2?", CVAR, &YgooScolsSseqYany2Q},
  {"---main-1---", PVAR, NULL},
  {"prefix?", CVAR, &YgooScolsSseqYprefixQ},
  {"below", CVAR, &YgooScolsSseqYbelow},
  {"map2", CVAR, &YgooScolsSseqYmap2},
  {"1st", CVAR, &YgooScolsSseqY1st},
  {"sub", CVAR, &YgooScolsSseqYsub},
  {"suffix?", CVAR, &YgooScolsSseqYsuffixQ},
  {"range-check", CVAR, &YgooScolsSseqYrange_check},
  {"@t?", CVAR, &YgooScolsSseqYOtQ},
  {"pop", CVAR, &YgooScolsSseqYpop},
  {"sort-by", CVAR, &YgooScolsSseqYsort_by},
  {"do3", CVAR, &YgooScolsSseqYdo3},
  {"sort", CVAR, &YgooScolsSseqYsort},
  {"push", CVAR, &YgooScolsSseqYpush},
  {"do-key-vals", CVAR, &YgooScolsSseqYdo_key_vals},
  {"del-dups", CVAR, &YgooScolsSseqYdel_dups},
  {"cat2", CVAR, &YgooScolsSseqYcat2},
  {"do2", CVAR, &YgooScolsSseqYdo2},
  {"---main-0---", PVAR, NULL},
  {"vals-to-str", CVAR, &YgooScolsSseqYvals_to_str},
  {"del-vals", CVAR, &YgooScolsSseqYdel_vals},
  {"add-new", CVAR, &YgooScolsSseqYadd_new},
  {"join", CVAR, &YgooScolsSseqYjoin},
  {"reject", CVAR, &YgooScolsSseqYreject},
  {"range-check?", CVAR, &YgooScolsSseqYrange_checkQ},
  {"finds", CVAR, &YgooScolsSseqYfinds},
  {"rev", CVAR, &YgooScolsSseqYrev},
  {"pick", CVAR, &YgooScolsSseqYpick},
  {"sort-by!", CVAR, &YgooScolsSseqYsort_byX},
  {"split", CVAR, &YgooScolsSseqYsplit},
  {"pos", CVAR, &YgooScolsSseqYpos},
  {"repeat", CVAR, &YgooScolsSseqYrepeat},
  {"last", CVAR, &YgooScolsSseqYlast},
  {"ins", CVAR, &YgooScolsSseqYins},
  {"3rd", CVAR, &YgooScolsSseqY3rd},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"any2?", "any2?"},
  {"prefix?", "prefix?"},
  {"below", "below"},
  {"2nd", "2nd"},
  {"map2", "map2"},
  {"1st", "1st"},
  {"<seq.>", "<seq.>"},
  {"sub", "sub"},
  {"<seq>", "<seq>"},
  {"suffix?", "suffix?"},
  {"pop", "pop"},
  {"sort-by", "sort-by"},
  {"do3", "do3"},
  {"sort", "sort"},
  {"push", "push"},
  {"do-key-vals", "do-key-vals"},
  {"del-dups", "del-dups"},
  {"cat2", "cat2"},
  {"do2", "do2"},
  {"vals-to-str", "vals-to-str"},
  {"del-vals", "del-vals"},
  {"join", "join"},
  {"cat", "cat"},
  {"reject", "reject"},
  {"range-check?", "range-check?"},
  {"finds", "finds"},
  {"rev", "rev"},
  {"pick", "pick"},
  {"range-check", "range-check"},
  {"sort-by!", "sort-by!"},
  {"split", "split"},
  {"pos", "pos"},
  {"all2?", "all2?"},
  {"repeat", "repeat"},
  {"last", "last"},
  {"ins", "ins"},
  {"3rd", "3rd"},
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
