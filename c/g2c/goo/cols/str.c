/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/collections/string */

EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
DEF(YgooScollectionsSstringYnative_chars,"goo/collections/string","native-chars");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
DEF(YgooScollectionsSstringYepsilon,"goo/collections/string","epsilon");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
DEF(YgooScollectionsSstringYinteger_Gchar,"goo/collections/string","integer->char");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
DEF(YgooScollectionsSstringYchar_Ginteger,"goo/collections/string","char->integer");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(Ynul,"runtime/boot","nul");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
DEF(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YLanyG,"runtime/boot","<any>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yfind_setter,"runtime/boot","find-setter");
DEF(YgooScollectionsSstringYDdigit_to_char,"goo/collections/string","$digit-to-char");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynil,"runtime/boot","nil");
EXT(YLcolG,"runtime/boot","<col>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YLclassG,"runtime/boot","<class>");
DEF(YgooScollectionsSstringYascii_chars,"goo/collections/string","ascii-chars");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
DEF(YgooScollectionsSstringYascii_Gchar,"goo/collections/string","ascii->char");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YLmagG,"runtime/boot","<mag>");
DEF(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_14);
DEFLIT(lit_21);
DEFLIT(lit_3);
DEFLIT(lit_59);
DEFLIT(lit_18);
DEFLIT(lit_1);
DEFLIT(lit_45);
DEFLIT(lit_42);
DEFLIT(lit_63);
DEFLIT(lit_47);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_46);
DEFLIT(lit_65);
DEFLIT(lit_55);
DEFLIT(lit_12);
DEFLIT(lit_40);
DEFLIT(lit_9);
DEFLIT(lit_10);
DEFLIT(lit_29);
DEFLIT(lit_30);
DEFLIT(lit_13);
DEFLIT(lit_33);
DEFLIT(lit_6);
DEFLIT(lit_39);
DEFLIT(lit_54);
DEFLIT(lit_8);
DEFLIT(lit_27);
DEFLIT(lit_34);
DEFLIT(lit_48);
DEFLIT(lit_23);
DEFLIT(lit_66);
DEFLIT(lit_35);
DEFLIT(lit_57);
DEFLIT(lit_43);
DEFLIT(lit_16);
DEFLIT(lit_52);
DEFLIT(lit_41);
DEFLIT(lit_22);
DEFLIT(lit_58);
DEFLIT(lit_50);
DEFLIT(lit_38);
DEFLIT(lit_24);
DEFLIT(lit_51);
DEFLIT(lit_64);
DEFLIT(lit_5);
DEFLIT(lit_60);
DEFLIT(lit_31);
DEFLIT(lit_44);
DEFLIT(lit_17);
DEFLIT(lit_32);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_49);
DEFLIT(lit_37);
DEFLIT(lit_19);
DEFLIT(lit_0);
DEFLIT(lit_62);
DEFLIT(lit_56);
DEFLIT(lit_11);
DEFLIT(lit_36);
DEFLIT(lit_53);
DEFLIT(lit_20);
DEFLIT(lit_28);
DEFLIT(lit_25);
DEFLIT(lit_4);
DEFLIT(lit_61);

/* FUNCTIONS: */

LOCFOR(fun_empty_0);
LOCFOR(fun_elt_default_1);
LOCFOR(fun_elt_type_2);
LOCFOR(fun_fab_3);
LOCFOR(fun_str_4);
LOCFOR(fun_len_5);
LOCFOR(fun_low_elt_6);
LOCFOR(fun_low_elt_setter_7);
LOCFOR(fun_elt_or_8);
LOCFOR(fun_elt_setter_9);
LOCFOR(fun_to_str_10);
LOCFOR(fun_add_11);
LOCFOR(fun_loop_12);
LOCFOR(fun_13);
LOCFOR(fun_ascii_Gchar_14);
LOCFOR(fun_char_Ginteger_15);
LOCFOR(fun_integer_Gchar_16);
LOCFOR(fun_loop_17);
LOCFOR(fun_loop_18);
LOCFOR(fun_char_Gascii_19);
LOCFOR(fun_match_20);
LOCFOR(fun_failXX_21);
LOCFOR(fun_22);
LOCFOR(fun_match_digitX_23);
LOCFOR(fun_looking_at_alphaQ_24);
LOCFOR(fun_loop_25);
LOCFOR(fun_str_to_num_26);
LOCFOR(fun_loop_27);
LOCFOR(fun_num_to_str_base_28);
LOCFOR(fun_num_to_str_29);
LOCFOR(fun_loop_30);
LOCFOR(fun_num_to_str_base_31);
LOCFOR(fun_num_to_str_32);
LOCFOR(fun_as_33);
LOCFOR(fun_as_34);
LOCFOR(fun_L_35);
LOCFOR(fun_to_str_36);
extern P YgooScollectionsSstringY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_empty_0) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YPsnul));
}

FUNCODEDEF(fun_elt_default_1) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPchr((P)32));
}

FUNCODEDEF(fun_elt_type_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLchrG));
}

FUNCODEDEF(fun_fab_3) {
  P x_,s_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPstr(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_str_4) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYfabs),VARREF(YLstrG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_5) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPslen(x_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = (P)YPiu(i_);
  T1 = (P)YPselt(x_,T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_setter_7) {
  P z_,x_,i_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPcu(z_);
  T2 = (P)YPiu(i_);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScollectionsSsequenceYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    T4 = (P)YPiu(i_);
    T3 = (P)YPselt(x_,T4);
    T2 = (P)YPcb(T3);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_9) {
  P z_,x_,i_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  CALL2(1,VARREF(YgooScollectionsSsequenceYrange_check),x_,i_);
  T1 = (P)YPcu(z_);
  T2 = (P)YPiu(i_);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_add_11) {
  P s_,c_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYto_str),c_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),s_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_12) {
  P i_,j_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYE),j_,T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),j_);
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T4,FREEREF(1),i_);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    i_ = a1;
    j_ = a2;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P i_,s_;
  P loopF1014;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_12,3);
  loopF1014 = T1;
  FUNINIT(loopF1014, 3,s_,FREEREF(0),loopF1014);
  T2 = CALL2(0,loopF1014,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_14) {
  P n_;
  P tmpF1015;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScollectionsSstringYascii_chars),n_);
  tmpF1015 = T1;
  if (tmpF1015 != YPfalse) {
    T2 = tmpF1015;
  } else {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_38),n_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_Ginteger_15) {
  P char_;
  P T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),char_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_integer_Gchar_16) {
  P n_;
  P T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P i_;
  P cF1016;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScollectionsSstringYascii_chars),i_);
    cF1016 = T4;
    if (cF1016 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScollectionsSstringYchar_Ginteger),cF1016);
      T6 = CALL2(1,VARREF(YgooSmathY_),T7,FREEREF(1));
      T5 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),i_,FREEREF(2),T6);
    } else {
    }
    T9 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_18) {
  P i_,least_,greatest_;
  P nF1020;
  P cF1019;
  P loopF1018;
  P vF1017;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(least_, 1);
  ARG(greatest_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathY_),greatest_,least_);
    T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
    T4 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLvecG),T5);
    T3 = CALL2(1,VARREF(YgooScollectionsScollectionYfill),T4,YPfalse);
    vF1017 = T3;
    T8 = FUNSHELL(1,fun_loop_17,4);
    loopF1018 = T8;
    FUNINIT(loopF1018, 4,FREEREF(0),least_,vF1017,loopF1018);
    T9 = CALL1(0,loopF1018,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScollectionsSstringYascii_chars),i_);
    cF1019 = T11;
    if (cF1019 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScollectionsSstringYchar_Ginteger),cF1019);
      nF1020 = T14;
      T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSmagnitudeYmin),least_,nF1020);
        T17 = T18;
      } else {
        T17 = nF1020;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,VARREF(YgooSmagnitudeYmax),greatest_,nF1020);
        T19 = T20;
      } else {
        T19 = nF1020;
      }
      a1 = T16;
      a2 = T17;
      a3 = T19;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T13 = T15;
      T12 = T13;
    } else {
      T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T22;
      a2 = least_;
      a3 = greatest_;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T12 = T21;
    }
    T10 = T12;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_char_Gascii_19) {
  P char_;
  P tmpF1021;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = CALL1(1,VARREF(Ytail),VARREF(YgooScollectionsSstringYnative_chars));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T5 = CALL1(1,VARREF(YgooScollectionsSstringYchar_Ginteger),char_);
  T6 = CALL1(1,VARREF(Yhead),VARREF(YgooScollectionsSstringYnative_chars));
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,T6);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,T4);
  tmpF1021 = T1;
  if (tmpF1021 != YPfalse) {
    T7 = tmpF1021;
  } else {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_43),char_);
    T7 = T8;
  }
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_match_20) {
  P char_;
  P tmpF1022;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagnitudeYL),T3,FREEREF(1));
  tmpF1022 = T2;
  if (tmpF1022 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
    T5 = CALL2(1,VARREF(YgooSmathYE),T6,char_);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T9 = BOXVAL(FREEREF(0));
    T8 = CALL2(1,VARREF(YgooSmathYA),T9,YPint((P)1));
    BOXVAL(FREEREF(0)) = T8;
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_failXX_21) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P return_;
  P charF1024;
  P failXXF1023;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_21,1);
  failXXF1023 = T1;
  FUNINIT(failXXF1023, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagnitudeYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF1023);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF1024 = T6;
  charF1024 = BOXFAB(charF1024);
  T10 = BOXVAL(charF1024);
  T9 = CALL2(1,VARREF(YgooSmathYE),T10,YPchr((P)46));
  if (T9 != YPfalse) {
    T12 = BOXVAL(FREEREF(3));
    if (T12 != YPfalse) {
      T13 = CALL2(1,VARREF(Yerror),LITREF(lit_50),FREEREF(2));
      T11 = T13;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T15 = BOXVAL(FREEREF(0));
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
      BOXVAL(FREEREF(0)) = T14;
      T17 = BOXVAL(FREEREF(0));
      T16 = CALL2(1,VARREF(YgooSmagnitudeYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(0,failXXF1023);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF1024) = T20;
      T11 = T19;
    }
  } else {
  }
  T24 = BOXVAL(charF1024);
  T23 = CALL1(1,VARREF(YgooSmathYdigitQ),T24);
  T22 = CALL1(1,VARREF(Ynot),T23);
  if (T22 != YPfalse) {
    T25 = CALL0(0,failXXF1023);
  } else {
  }
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T28);
  T26 = CALL1(1,VARREF(YgooSmathYto_digit),T27);
  BOXVAL(FREEREF(4)) = T26;
  T30 = BOXVAL(FREEREF(0));
  T29 = CALL2(1,VARREF(YgooSmathYA),T30,YPint((P)1));
  BOXVAL(FREEREF(0)) = T29;
  T31 = BOXVAL(FREEREF(3));
  if (T31 != YPfalse) {
    T34 = BOXVAL(FREEREF(5));
    T33 = CALL2(1,VARREF(YgooSmathYT),T34,FREEREF(6));
    T32 = BOXVAL(FREEREF(5)) = T33;
  } else {
  }
  T5 = YPtrue;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_match_digitX_23) {
  P U_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
  T1 = FUNFAB(fun_22,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_looking_at_alphaQ_24) {
  P tmpF1025;
  P T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagnitudeYL),T3,FREEREF(1));
  tmpF1025 = T2;
  if (tmpF1025 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
    T5 = CALL1(1,VARREF(YgooSmathYalphaQ),T6);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P tmpF1026;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(0,FREEREF(0),T3);
  tmpF1026 = T2;
  if (tmpF1026 != YPfalse) {
    T8 = BOXVAL(FREEREF(2));
    T7 = CALL2(1,VARREF(YgooSmathYT),T8,FREEREF(3));
    T9 = BOXVAL(FREEREF(1));
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T9);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    goto loop;
    T0 = T10;
  } else {
    T0 = YPtrue;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_to_num_26) {
  P string_;
  P fF1047;
  P tmpF1046;
  P tmpF1045;
  P loopF1044;
  P tmpF1043;
  P tmpF1042;
  P tmpF1041;
  P tmpF1040;
  P tmpF1039;
  P tmpF1038;
  P looking_at_alphaQF1037;
  P match_digitXF1036;
  P matchF1035;
  P radixF1034;
  P seen_decimal_pointQF1033;
  P lengthF1032;
  P scaleF1031;
  P iF1030;
  P nF1029;
  P dF1028;
  P sF1027;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(string_, 0);
loop:
  sF1027 = YPint((P)1);
  sF1027 = BOXFAB(sF1027);
  dF1028 = YPint((P)0);
  dF1028 = BOXFAB(dF1028);
  nF1029 = YPint((P)0);
  nF1029 = BOXFAB(nF1029);
  iF1030 = YPint((P)0);
  iF1030 = BOXFAB(iF1030);
  scaleF1031 = YPint((P)1);
  scaleF1031 = BOXFAB(scaleF1031);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF1032 = T11;
  seen_decimal_pointQF1033 = YPfalse;
  seen_decimal_pointQF1033 = BOXFAB(seen_decimal_pointQF1033);
  radixF1034 = YPint((P)10);
  T16 = FUNSHELL(1,fun_match_20,3);
  matchF1035 = T16;
  T17 = FUNSHELL(1,fun_match_digitX_23,7);
  match_digitXF1036 = T17;
  T18 = FUNSHELL(1,fun_looking_at_alphaQ_24,3);
  looking_at_alphaQF1037 = T18;
  FUNINIT(matchF1035, 3,iF1030,lengthF1032,string_);
  FUNINIT(match_digitXF1036, 7,iF1030,lengthF1032,string_,seen_decimal_pointQF1033,dF1028,scaleF1031,radixF1034);
  FUNINIT(looking_at_alphaQF1037, 3,iF1030,lengthF1032,string_);
  T21 = CALL1(0,matchF1035,YPchr((P)43));
  tmpF1038 = T21;
  if (tmpF1038 != YPfalse) {
    T22 = tmpF1038;
  } else {
    T25 = CALL1(0,matchF1035,YPchr((P)45));
    tmpF1039 = T25;
    if (tmpF1039 != YPfalse) {
      T27 = BOXVAL(sF1027) = YPint((P)-1);
      T26 = T27;
    } else {
      T26 = YPfalse;
    }
    T24 = T26;
    tmpF1040 = T24;
    if (tmpF1040 != YPfalse) {
      T28 = tmpF1040;
    } else {
      T28 = YPtrue;
    }
    T23 = T28;
    T22 = T23;
  }
  T20 = T22;
  tmpF1041 = T20;
  if (tmpF1041 != YPfalse) {
    T33 = BOXVAL(dF1028);
    T32 = CALL1(0,match_digitXF1036,T33);
    tmpF1042 = T32;
    if (tmpF1042 != YPfalse) {
      T36 = BOXVAL(dF1028);
      T35 = BOXVAL(nF1029) = T36;
      T34 = T35;
    } else {
      T34 = YPfalse;
    }
    T31 = T34;
    tmpF1043 = T31;
    if (tmpF1043 != YPfalse) {
      T40 = FUNSHELL(1,fun_loop_25,5);
      loopF1044 = T40;
      FUNINIT(loopF1044, 5,match_digitXF1036,dF1028,nF1029,radixF1034,loopF1044);
      T41 = CALL0(0,loopF1044);
      T39 = T41;
      tmpF1045 = T39;
      if (tmpF1045 != YPfalse) {
        T45 = BOXVAL(iF1030);
        T44 = CALL2(1,VARREF(YgooSmathYE),T45,lengthF1032);
        tmpF1046 = T44;
        if (tmpF1046 != YPfalse) {
          T50 = BOXVAL(sF1027);
          T49 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T50);
          T53 = BOXVAL(nF1029);
          T52 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T53);
          T55 = BOXVAL(scaleF1031);
          T54 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T55);
          T51 = CALL2(1,VARREF(YgooSmathYS),T52,T54);
          T48 = CALL2(1,VARREF(YgooSmathYT),T49,T51);
          fF1047 = T48;
          T57 = BOXVAL(seen_decimal_pointQF1033);
          if (T57 != YPfalse) {
            T56 = fF1047;
          } else {
            T58 = CALL1(1,VARREF(YgooSmathYtrunc),fF1047);
            T56 = T58;
          }
          T47 = T56;
          T46 = T47;
        } else {
          T46 = YPfalse;
        }
        T43 = T46;
        T42 = T43;
      } else {
        T42 = YPfalse;
      }
      T38 = T42;
      T37 = T38;
    } else {
      T37 = YPfalse;
    }
    T30 = T37;
    T29 = T30;
  } else {
    T29 = YPfalse;
  }
  T19 = T29;
  T15 = T19;
  T14 = T15;
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P digit_list_,num_;
  P digitF1048;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(digit_list_, 0);
  ARG(num_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = digit_list_;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYrem),num_,FREEREF(0));
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScollectionsSstringYDdigit_to_char),T4);
    digitF1048 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),digitF1048,digit_list_);
    T8 = CALL2(1,VARREF(YgooSmathYtruncS),num_,FREEREF(0));
    T7 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),T8);
    a1 = T6;
    a2 = T7;
    digit_list_ = a1;
    num_ = a2;
    goto loop;
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_base_28) {
  P num_,radix_;
  P digit_listF1051;
  P loopF1050;
  P sF1049;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagnitudeYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF1049 = T1;
  T5 = FUNSHELL(1,fun_loop_27,2);
  loopF1050 = T5;
  FUNINIT(loopF1050, 2,radix_,loopF1050);
  T7 = CALL2(1,VARREF(YgooSmathYT),num_,sF1049);
  T6 = CALL2(0,loopF1050,Ynil,T7);
  T4 = T6;
  digit_listF1051 = T4;
  T10 = CALL2(1,VARREF(YgooSmagnitudeYL),sF1049,YPint((P)0));
  if (T10 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF1051);
    T9 = T11;
  } else {
    T13 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T13 != YPfalse) {
      T12 = LITREF(lit_55);
    } else {
      T12 = digit_listF1051;
    }
    T9 = T12;
  }
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
  T3 = T8;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_29) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsSstringYnum_to_str_base),num_,VARREF(YgooScollectionsSstringYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_30) {
  P p_,e_;
  P iF1052;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYtrunc),p_);
  iF1052 = T1;
  T4 = CALL2(1,VARREF(YgooSmathY_),p_,iF1052);
  T3 = CALL2(1,VARREF(YgooSmagnitudeYL),T4,VARREF(YgooScollectionsSstringYepsilon));
  if (T3 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScollectionsSstringYnum_to_str_base),iF1052,FREEREF(1));
    BOXVAL(FREEREF(0)) = T5;
    T2 = e_;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYT),p_,FREEREF(1));
    T8 = CALL2(1,VARREF(YgooSmathYA),e_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    p_ = a1;
    e_ = a2;
    goto loop;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_base_31) {
  P num_,radix_;
  P lengthF1058;
  P eF1057;
  P loopF1056;
  P stringF1055;
  P pF1054;
  P sF1053;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagnitudeYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF1053 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF1053);
  pF1054 = T4;
  stringF1055 = LITREF(lit_56);
  stringF1055 = BOXFAB(stringF1055);
  T9 = FUNSHELL(1,fun_loop_30,3);
  loopF1056 = T9;
  FUNINIT(loopF1056, 3,stringF1055,radix_,loopF1056);
  T10 = CALL2(0,loopF1056,pF1054,YPint((P)0));
  T8 = T10;
  eF1057 = T8;
  T13 = BOXVAL(stringF1055);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  lengthF1058 = T12;
  T15 = CALL2(1,VARREF(YgooSmathYE),eF1057,YPint((P)0));
  if (T15 != YPfalse) {
    T17 = BOXVAL(stringF1055);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_59));
    T14 = T16;
  } else {
    T19 = CALL2(1,VARREF(YgooSmathYE),eF1057,lengthF1058);
    if (T19 != YPfalse) {
      T21 = BOXVAL(stringF1055);
      T20 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_60),T21);
      T18 = T20;
    } else {
      T23 = CALL2(1,VARREF(YgooSmagnitudeYL),eF1057,lengthF1058);
      if (T23 != YPfalse) {
        T26 = BOXVAL(stringF1055);
        T27 = CALL2(1,VARREF(YgooSmathY_),lengthF1058,eF1057);
        T25 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),T26,YPint((P)0),T27);
        T29 = BOXVAL(stringF1055);
        T30 = CALL2(1,VARREF(YgooSmathY_),lengthF1058,eF1057);
        T28 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),T29,T30,lengthF1058);
        T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_61),T28);
        T22 = T24;
      } else {
        T34 = CALL2(1,VARREF(YgooSmathY_),eF1057,lengthF1058);
        T33 = CALL2(1,VARREF(YgooSmathYA),T34,YPint((P)2));
        T32 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),LITREF(lit_62),YPint((P)0),T33);
        T35 = BOXVAL(stringF1055);
        T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,T35);
        T22 = T31;
      }
      T18 = T22;
    }
    T14 = T18;
  }
  BOXVAL(stringF1055) = T14;
  T37 = CALL2(1,VARREF(YgooSmagnitudeYL),sF1053,YPint((P)0));
  if (T37 != YPfalse) {
    T39 = BOXVAL(stringF1055);
    T38 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_63),T39);
    T36 = T38;
  } else {
    T40 = BOXVAL(stringF1055);
    T36 = T40;
  }
  T11 = T36;
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_32) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsSstringYnum_to_str_base),num_,VARREF(YgooScollectionsSstringYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_33) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,VARREF(Ysym_name),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_34) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,VARREF(Yfab_sym),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_35) {
  P x_,y_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),x_);
  T2 = CALL1(1,VARREF(Ysym_name),y_);
  T0 = CALL2(1,VARREF(YgooSmagnitudeYL),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_36) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Ysym_name),x_);
UNLINK_STACK();
  RET(T0);
}

P YgooScollectionsSstringY___main_0___() {
  P loopF1062;
  P end259F1061;
  P initF1060;
  P ascii_charsF1059;
  P T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150;
  P T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134;
  P T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118;
  P T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102;
  P T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"str");
  lit_1 = YPPsym((P)"objects");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSstringYstr,T0);
  lit_2 = YPPsym((P)"char->ascii");
  lit_3 = YPPsym((P)"char");
  T3 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYchar_Gascii,T2);
  VARSET(YgooScollectionsSstringYascii_whitespaces,YPfalse);
  VARSET(YgooScollectionsSstringYascii_limit,YPfalse);
  lit_4 = YPPsym((P)"str-to-num");
  lit_5 = YPPsym((P)"string");
  T6 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T5 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T6,Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSstringYstr_to_num,T4);
  lit_6 = YPPsym((P)"num-to-str-base");
  lit_7 = YPPsym((P)"num");
  lit_8 = YPPsym((P)"radix");
  T8 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T7 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T8,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSstringYnum_to_str_base,T7);
  lit_9 = YPPsym((P)"num-to-str");
  T10 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYnum_to_str,T9);
  VARSET(YgooScollectionsSstringYTprint_baseT,YPint((P)10));
  lit_10 = YPPsym((P)"empty");
  lit_11 = YPPsym((P)"c");
  T12 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T11 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,T12),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_empty_0 = YPmet(FUNCODEREF(fun_empty_0),LITREF(lit_10),T11,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooScollectionsScollectionYempty);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScollectionsScollectionYempty);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_empty_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooScollectionsScollectionYempty,T13);
  lit_12 = YPPsym((P)"elt-default");
  lit_13 = YPPsym((P)"x");
  T17 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_1 = YPmet(FUNCODEREF(fun_elt_default_1),LITREF(lit_12),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScollectionsScollectionYelt_default);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScollectionsScollectionYelt_default);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_elt_default_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScollectionsScollectionYelt_default,T18);
  lit_14 = YPPsym((P)"elt-type");
  T22 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_2 = YPmet(FUNCODEREF(fun_elt_type_2),LITREF(lit_14),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScollectionsScollectionYelt_type);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScollectionsScollectionYelt_type);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_elt_type_2;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScollectionsScollectionYelt_type,T23);
  lit_15 = YPPsym((P)"fab");
  lit_16 = YPPsym((P)"s");
  T28 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T27 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_16)),YPPlist(2,T28,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_15),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScollectionsScollectionYfab);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScollectionsScollectionYfab);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_fab_3;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScollectionsScollectionYfab,T29);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_str_4 = YPmet(FUNCODEREF(fun_str_4),LITREF(lit_0),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooScollectionsSstringYstr);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooScollectionsSstringYstr);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_str_4;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScollectionsSstringYstr,T34);
  lit_17 = YPPsym((P)"len");
  T38 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_5 = YPmet(FUNCODEREF(fun_len_5),LITREF(lit_17),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooStypesYlen);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooStypesYlen);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_len_5;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooStypesYlen,T39);
  lit_18 = YPPsym((P)"low-elt");
  lit_19 = YPPsym((P)"i");
  T43 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_19)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPmet(FUNCODEREF(fun_low_elt_6),LITREF(lit_18),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScollectionsScollectionYlow_elt);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScollectionsScollectionYlow_elt);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_low_elt_6;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScollectionsScollectionYlow_elt,T44);
  lit_20 = YPPsym((P)"low-elt-setter");
  lit_21 = YPPsym((P)"z");
  T48 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_13),LITREF(lit_19)),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_7 = YPmet(FUNCODEREF(fun_low_elt_setter_7),LITREF(lit_20),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScollectionsScollectionYlow_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScollectionsScollectionYlow_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_low_elt_setter_7;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScollectionsScollectionYlow_elt_setter,T49);
  lit_22 = YPPsym((P)"elt-or");
  lit_23 = YPPsym((P)"default");
  T53 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_19),LITREF(lit_23)),YPPlist(3,VARREF(YLstrG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_22),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScollectionsScollectionYelt_or);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScollectionsScollectionYelt_or);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_elt_or_8;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScollectionsScollectionYelt_or,T54);
  lit_24 = YPPsym((P)"elt-setter");
  T58 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_13),LITREF(lit_19)),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_9 = YPmet(FUNCODEREF(fun_elt_setter_9),LITREF(lit_24),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScollectionsScollectionYelt_setter);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScollectionsScollectionYelt_setter);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_elt_setter_9;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScollectionsScollectionYelt_setter,T59);
  lit_25 = YPPsym((P)"to-str");
  T63 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_10 = YPmet(FUNCODEREF(fun_to_str_10),LITREF(lit_25),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooSmathYto_str);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooSmathYto_str);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_to_str_10;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooSmathYto_str,T64);
  lit_26 = YPPsym((P)"add");
  T68 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_11)),YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_11 = YPmet(FUNCODEREF(fun_add_11),LITREF(lit_26),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YgooScollectionsScollectionYadd);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScollectionsScollectionYadd);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_add_11;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScollectionsScollectionYadd,T69);
  VARSET(YgooScollectionsSstringYascii_limit,YPint((P)128));
  lit_27 = YPPsym((P)"loop");
  lit_28 = YPPsym((P)"j");
  lit_29 = YPsb((P)"\t");
  lit_30 = YPsb((P)"\n");
  lit_31 = YPsb((P)"\f");
  lit_32 = YPsb((P)"\r");
  lit_33 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_34 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_35 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  T74 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_28)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_12 = YPmet(FUNCODEREF(fun_loop_12),LITREF(lit_27),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T77 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLvecG),VARREF(YgooScollectionsSstringYascii_limit));
  T76 = CALL2(1,VARREF(YgooScollectionsScollectionYfill),T77,YPfalse);
  ascii_charsF1059 = T76;
  T79 = FUNFAB(fun_13,1,ascii_charsF1059);
  initF1060 = T79;
  CALL2(1,initF1060,YPint((P)9),LITREF(lit_29));
  CALL2(1,initF1060,YPint((P)10),LITREF(lit_30));
  CALL2(1,initF1060,YPint((P)12),LITREF(lit_31));
  CALL2(1,initF1060,YPint((P)13),LITREF(lit_32));
  CALL2(1,initF1060,YPint((P)32),LITREF(lit_33));
  CALL2(1,initF1060,YPint((P)64),LITREF(lit_34));
  CALL2(1,initF1060,YPint((P)96),LITREF(lit_35));
  T78 = ascii_charsF1059;
  T75 = T78;
  VARSET(YgooScollectionsSstringYascii_chars,T75);
  lit_36 = YPPsym((P)"ascii->char");
  lit_37 = YPPsym((P)"n");
  lit_38 = YPsb((P)"not a standard character's ASCII code: %=");
  T80 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_14 = YPmet(FUNCODEREF(fun_ascii_Gchar_14),LITREF(lit_36),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScollectionsSstringYascii_Gchar);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScollectionsSstringYascii_Gchar);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_ascii_Gchar_14;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScollectionsSstringYascii_Gchar,T81);
  lit_39 = YPPsym((P)"char->integer");
  T85 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_15 = YPmet(FUNCODEREF(fun_char_Ginteger_15),LITREF(lit_39),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScollectionsSstringYchar_Ginteger);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScollectionsSstringYchar_Ginteger);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_char_Ginteger_15;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScollectionsSstringYchar_Ginteger,T86);
  lit_40 = YPPsym((P)"integer->char");
  T90 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_16 = YPmet(FUNCODEREF(fun_integer_Gchar_16),LITREF(lit_40),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScollectionsSstringYinteger_Gchar);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScollectionsSstringYinteger_Gchar);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_integer_Gchar_16;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScollectionsSstringYinteger_Gchar,T91);
  lit_41 = YPPsym((P)"least");
  lit_42 = YPPsym((P)"greatest");
  T96 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_27),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_41),LITREF(lit_42)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_18 = YPmet(FUNCODEREF(fun_loop_18),LITREF(lit_27),T95,ENVNUL,PNUL,YPfalse);
  T98 = CALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScollectionsSstringYascii_chars));
  end259F1061 = T98;
  T100 = FUNSHELL(1,fun_loop_18,2);
  loopF1062 = T100;
  FUNINIT(loopF1062, 2,end259F1061,loopF1062);
  T101 = CALL3(0,loopF1062,YPint((P)0),YPfalse,YPfalse);
  T99 = T101;
  T97 = T99;
  VARSET(YgooScollectionsSstringYnative_chars,T97);
  lit_43 = YPsb((P)"not a standard character: %=");
  T102 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Gascii_19 = YPmet(FUNCODEREF(fun_char_Gascii_19),LITREF(lit_2),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YgooSmathYchar_Gascii);
  if (T105 != YPfalse) {
    T104 = VARREF(YgooSmathYchar_Gascii);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_char_Gascii_19;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YgooSmathYchar_Gascii,T103);
  lit_44 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScollectionsSstringYascii_whitespaces,LITREF(lit_44));
  lit_45 = YPPsym((P)"match");
  lit_46 = YPPsym((P)"match-digit!");
  lit_47 = YPPsym((P)"_");
  lit_48 = YPPsym((P)"return");
  lit_49 = YPPsym((P)"fail!!");
  lit_50 = YPsb((P)"string->number: Two decimal points: %=");
  lit_51 = YPPsym((P)"looking-at-alpha?");
  T114 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_20 = YPmet(FUNCODEREF(fun_match_20),LITREF(lit_45),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_21 = YPmet(FUNCODEREF(fun_failXX_21),LITREF(lit_49),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_23 = YPmet(FUNCODEREF(fun_match_digitX_23),LITREF(lit_46),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_24 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_24),LITREF(lit_51),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),LITREF(lit_27),T109,ENVNUL,PNUL,YPfalse);
  T108 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T107 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T108,Ynil);
  fun_str_to_num_26 = YPmet(FUNCODEREF(fun_str_to_num_26),LITREF(lit_4),T107,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YgooScollectionsSstringYstr_to_num);
  if (T117 != YPfalse) {
    T116 = VARREF(YgooScollectionsSstringYstr_to_num);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_str_to_num_26;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YgooScollectionsSstringYstr_to_num,T115);
  lit_52 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScollectionsSstringYDdigit_to_char,LITREF(lit_52));
  VARSET(YgooScollectionsSstringYTprint_baseT,YPint((P)10));
  lit_53 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScollectionsSstringYepsilon,LITREF(lit_53));
  lit_54 = YPPsym((P)"digit-list");
  lit_55 = YPsb((P)"0");
  T120 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_27),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_28 = YPmet(FUNCODEREF(fun_num_to_str_base_28),LITREF(lit_6),T119,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YgooScollectionsSstringYnum_to_str_base);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooScollectionsSstringYnum_to_str_base);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_num_to_str_base_28;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooScollectionsSstringYnum_to_str_base,T121);
  T125 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_29 = YPmet(FUNCODEREF(fun_num_to_str_29),LITREF(lit_9),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YgooSmathYnum_to_str);
  if (T128 != YPfalse) {
    T127 = VARREF(YgooSmathYnum_to_str);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_num_to_str_29;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YgooSmathYnum_to_str,T126);
  lit_56 = YPsb((P)"");
  lit_57 = YPPsym((P)"p");
  lit_58 = YPPsym((P)"e");
  lit_59 = YPsb((P)".0");
  lit_60 = YPsb((P)"0.");
  lit_61 = YPsb((P)".");
  lit_62 = YPsb((P)"0.0000000000000");
  lit_63 = YPsb((P)"-");
  T131 = YPsig(YPPlist(2,LITREF(lit_57),LITREF(lit_58)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_27),T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_31 = YPmet(FUNCODEREF(fun_num_to_str_base_31),LITREF(lit_6),T130,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YgooScollectionsSstringYnum_to_str_base);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooScollectionsSstringYnum_to_str_base);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_num_to_str_base_31;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooScollectionsSstringYnum_to_str_base,T132);
  T136 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_32 = YPmet(FUNCODEREF(fun_num_to_str_32),LITREF(lit_9),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YgooSmathYnum_to_str);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooSmathYnum_to_str);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_num_to_str_32;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooSmathYnum_to_str,T137);
  lit_64 = YPPsym((P)"as");
  T142 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T141 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_16)),YPPlist(2,T142,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_33 = YPmet(FUNCODEREF(fun_as_33),LITREF(lit_64),T141,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YgooStypesYas);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooStypesYas);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_as_33;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooStypesYas,T143);
  T148 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T147 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_16)),YPPlist(2,T148,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_34 = YPmet(FUNCODEREF(fun_as_34),LITREF(lit_64),T147,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YgooStypesYas);
  if (T151 != YPfalse) {
    T150 = VARREF(YgooStypesYas);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_as_34;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YgooStypesYas,T149);
  lit_65 = YPPsym((P)"<");
  lit_66 = YPPsym((P)"y");
  T153 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_66)),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_L_35 = YPmet(FUNCODEREF(fun_L_35),LITREF(lit_65),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YgooSmagnitudeYL);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooSmagnitudeYL);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_L_35;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooSmagnitudeYL,T154);
  T160 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T159 = fun_to_str_36 = YPmet(FUNCODEREF(fun_to_str_36),LITREF(lit_25),T160,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YgooSmathYto_str);
  if (T164 != YPfalse) {
    T163 = VARREF(YgooSmathYto_str);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_to_str_36;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  T161 = VARSET(YgooSmathYto_str,T162);
  T158 = T161;
  return T158;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSsequence},
  {&module_info_gooScollectionsSlist},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"loc", &module_info_runtimeSboot, "loc"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"def", &module_info_runtimeSboot, "def"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"do", &module_info_gooSmacros, "do"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"t=", &module_info_gooStypes, "t="},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"logn", &module_info_gooSmath, "logn"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"as", &module_info_gooStypes, "as"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"head", &module_info_runtimeSboot, "head"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"t+", &module_info_gooStypes, "t+"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"app", &module_info_gooSmacros, "app"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"map", &module_info_gooSmacros, "map"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {">>", &module_info_gooSmath, ">>"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"match", &module_info_gooSmacros, "match"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"&", &module_info_gooSmath, "&"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"log", &module_info_gooSmath, "log"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"and", &module_info_gooSmacros, "and"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"round", &module_info_gooSmath, "round"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"pow", &module_info_gooSmath, "pow"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"native-chars", &YgooScollectionsSstringYnative_chars},
  {"epsilon", &YgooScollectionsSstringYepsilon},
  {"num-to-str-base", &YgooScollectionsSstringYnum_to_str_base},
  {"integer->char", &YgooScollectionsSstringYinteger_Gchar},
  {"*print-base*", &YgooScollectionsSstringYTprint_baseT},
  {"char->integer", &YgooScollectionsSstringYchar_Ginteger},
  {"ascii-limit", &YgooScollectionsSstringYascii_limit},
  {"ascii-whitespaces", &YgooScollectionsSstringYascii_whitespaces},
  {"str-to-num", &YgooScollectionsSstringYstr_to_num},
  {"$digit-to-char", &YgooScollectionsSstringYDdigit_to_char},
  {"ascii-chars", &YgooScollectionsSstringYascii_chars},
  {"ascii->char", &YgooScollectionsSstringYascii_Gchar},
  {"str", &YgooScollectionsSstringYstr},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"num-to-str-base", "num-to-str-base"},
  {"*print-base*", "*print-base*"},
  {"num-to-str", "num-to-str"},
  {"ascii-limit", "ascii-limit"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"str-to-num", "str-to-num"},
  {"char->ascii", "char->ascii"},
  {"str", "str"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsSstring;
MODULE_INFO module_info_gooScollectionsSstring = {
  "goo/collections/string",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSsequence (void);
extern void load_module_gooScollectionsSlist (void);

/* EXPRESSION: */

extern void load_module_gooScollectionsSstring (void);

void load_module_gooScollectionsSstring (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();
  load_module_gooScollectionsSlist();

  (P)YgooScollectionsSstringY___main_0___();

}

/* END OF GENERATED CODE. */
