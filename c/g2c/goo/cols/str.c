/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yvec,"goo/boot","vec");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ynil,"goo/boot","nil");
EXT(YPisa,"goo/boot","%isa");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYE,"goo/math","=");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooStypesYLproductG,"goo/types","<product>");
DEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYtL,"goo/types","t<");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_26);
DEFLIT(lit_2);
DEFLIT(lit_36);
DEFLIT(lit_52);
DEFLIT(lit_70);
DEFLIT(lit_30);
DEFLIT(lit_34);
DEFLIT(lit_61);
DEFLIT(lit_59);
DEFLIT(lit_60);
DEFLIT(lit_32);
DEFLIT(lit_27);
DEFLIT(lit_20);
DEFLIT(lit_50);
DEFLIT(lit_55);
DEFLIT(lit_39);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_21);
DEFLIT(lit_38);
DEFLIT(lit_53);
DEFLIT(lit_22);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_57);
DEFLIT(lit_42);
DEFLIT(lit_3);
DEFLIT(lit_33);
DEFLIT(lit_67);
DEFLIT(lit_14);
DEFLIT(lit_44);
DEFLIT(lit_24);
DEFLIT(lit_58);
DEFLIT(lit_35);
DEFLIT(lit_9);
DEFLIT(lit_65);
DEFLIT(lit_8);
DEFLIT(lit_51);
DEFLIT(lit_41);
DEFLIT(lit_40);
DEFLIT(lit_16);
DEFLIT(lit_63);
DEFLIT(lit_47);
DEFLIT(lit_4);
DEFLIT(lit_43);
DEFLIT(lit_66);
DEFLIT(lit_12);
DEFLIT(lit_1);
DEFLIT(lit_37);
DEFLIT(lit_17);
DEFLIT(lit_45);
DEFLIT(lit_10);
DEFLIT(lit_69);
DEFLIT(lit_0);
DEFLIT(lit_54);
DEFLIT(lit_31);
DEFLIT(lit_23);
DEFLIT(lit_71);
DEFLIT(lit_48);
DEFLIT(lit_46);
DEFLIT(lit_19);
DEFLIT(lit_56);
DEFLIT(lit_49);
DEFLIT(lit_68);
DEFLIT(lit_62);
DEFLIT(lit_64);
DEFLIT(lit_6);
DEFLIT(lit_11);
DEFLIT(lit_5);

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
FUNFOR(YgooScolsSstrYstring_repeat);
FUNFOR(YgooScolsSstrYstring_split);
FUNFOR(YgooScolsSstrYstring_join);
extern P YgooScolsSstrY___main_0___ ();

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
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
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
  CALL2(1,VARREF(YgooScolsSseqYrange_check),x_,i_);
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
    CALL3(1,VARREF(YgooScolsScolYelt_setter),T4,FREEREF(1),i_);
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
  P loopF1041;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_12,3);
  loopF1041 = T1;
  FUNINIT(loopF1041, 3,s_,FREEREF(0),loopF1041);
  T2 = CALL2(0,loopF1041,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_14) {
  P n_;
  P tmpF1042;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF1042 = T1;
  if (tmpF1042 != YPfalse) {
    T2 = tmpF1042;
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
  P cF1043;
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
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF1043 = T4;
    if (cF1043 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1043);
      T6 = CALL2(1,VARREF(YgooSmathY_),T7,FREEREF(1));
      T5 = CALL3(1,VARREF(YgooScolsScolYelt_setter),i_,FREEREF(2),T6);
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
  P nF1047;
  P cF1046;
  P loopF1045;
  P vF1044;
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
    T4 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLvecG),T5);
    T3 = CALL2(1,VARREF(YgooScolsScolYfill),T4,YPfalse);
    vF1044 = T3;
    T8 = FUNSHELL(1,fun_loop_17,4);
    loopF1045 = T8;
    FUNINIT(loopF1045, 4,FREEREF(0),least_,vF1044,loopF1045);
    T9 = CALL1(0,loopF1045,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF1046 = T11;
    if (cF1046 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1046);
      nF1047 = T14;
      T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSmagYmin),least_,nF1047);
        T17 = T18;
      } else {
        T17 = nF1047;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,VARREF(YgooSmagYmax),greatest_,nF1047);
        T19 = T20;
      } else {
        T19 = nF1047;
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
  P tmpF1048;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = CALL1(1,VARREF(Ytail),VARREF(YgooScolsSstrYnative_chars));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T5 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),char_);
  T6 = CALL1(1,VARREF(Yhead),VARREF(YgooScolsSstrYnative_chars));
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,T6);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,T4);
  tmpF1048 = T1;
  if (tmpF1048 != YPfalse) {
    T7 = tmpF1048;
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
  P tmpF1049;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF1049 = T2;
  if (tmpF1049 != YPfalse) {
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
  P charF1051;
  P failXXF1050;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_21,1);
  failXXF1050 = T1;
  FUNINIT(failXXF1050, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF1050);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF1051 = T6;
  charF1051 = BOXFAB(charF1051);
  T10 = BOXVAL(charF1051);
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
      T16 = CALL2(1,VARREF(YgooSmagYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(0,failXXF1050);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF1051) = T20;
      T11 = T19;
    }
  } else {
  }
  T24 = BOXVAL(charF1051);
  T23 = CALL1(1,VARREF(YgooSmathYdigitQ),T24);
  T22 = CALL1(1,VARREF(Ynot),T23);
  if (T22 != YPfalse) {
    T25 = CALL0(0,failXXF1050);
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
  P tmpF1052;
  P T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF1052 = T2;
  if (tmpF1052 != YPfalse) {
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
  P tmpF1053;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(0,FREEREF(0),T3);
  tmpF1053 = T2;
  if (tmpF1053 != YPfalse) {
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
  P fF1074;
  P tmpF1073;
  P tmpF1072;
  P loopF1071;
  P tmpF1070;
  P tmpF1069;
  P tmpF1068;
  P tmpF1067;
  P tmpF1066;
  P tmpF1065;
  P looking_at_alphaQF1064;
  P match_digitXF1063;
  P matchF1062;
  P radixF1061;
  P seen_decimal_pointQF1060;
  P lengthF1059;
  P scaleF1058;
  P iF1057;
  P nF1056;
  P dF1055;
  P sF1054;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(string_, 0);
loop:
  sF1054 = YPint((P)1);
  sF1054 = BOXFAB(sF1054);
  dF1055 = YPint((P)0);
  dF1055 = BOXFAB(dF1055);
  nF1056 = YPint((P)0);
  nF1056 = BOXFAB(nF1056);
  iF1057 = YPint((P)0);
  iF1057 = BOXFAB(iF1057);
  scaleF1058 = YPint((P)1);
  scaleF1058 = BOXFAB(scaleF1058);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF1059 = T11;
  seen_decimal_pointQF1060 = YPfalse;
  seen_decimal_pointQF1060 = BOXFAB(seen_decimal_pointQF1060);
  radixF1061 = YPint((P)10);
  T16 = FUNSHELL(1,fun_match_20,3);
  matchF1062 = T16;
  T17 = FUNSHELL(1,fun_match_digitX_23,7);
  match_digitXF1063 = T17;
  T18 = FUNSHELL(1,fun_looking_at_alphaQ_24,3);
  looking_at_alphaQF1064 = T18;
  FUNINIT(matchF1062, 3,iF1057,lengthF1059,string_);
  FUNINIT(match_digitXF1063, 7,iF1057,lengthF1059,string_,seen_decimal_pointQF1060,dF1055,scaleF1058,radixF1061);
  FUNINIT(looking_at_alphaQF1064, 3,iF1057,lengthF1059,string_);
  T21 = CALL1(0,matchF1062,YPchr((P)43));
  tmpF1065 = T21;
  if (tmpF1065 != YPfalse) {
    T22 = tmpF1065;
  } else {
    T25 = CALL1(0,matchF1062,YPchr((P)45));
    tmpF1066 = T25;
    if (tmpF1066 != YPfalse) {
      T27 = BOXVAL(sF1054) = YPint((P)-1);
      T26 = T27;
    } else {
      T26 = YPfalse;
    }
    T24 = T26;
    tmpF1067 = T24;
    if (tmpF1067 != YPfalse) {
      T28 = tmpF1067;
    } else {
      T28 = YPtrue;
    }
    T23 = T28;
    T22 = T23;
  }
  T20 = T22;
  tmpF1068 = T20;
  if (tmpF1068 != YPfalse) {
    T33 = BOXVAL(dF1055);
    T32 = CALL1(0,match_digitXF1063,T33);
    tmpF1069 = T32;
    if (tmpF1069 != YPfalse) {
      T36 = BOXVAL(dF1055);
      T35 = BOXVAL(nF1056) = T36;
      T34 = T35;
    } else {
      T34 = YPfalse;
    }
    T31 = T34;
    tmpF1070 = T31;
    if (tmpF1070 != YPfalse) {
      T40 = FUNSHELL(1,fun_loop_25,5);
      loopF1071 = T40;
      FUNINIT(loopF1071, 5,match_digitXF1063,dF1055,nF1056,radixF1061,loopF1071);
      T41 = CALL0(0,loopF1071);
      T39 = T41;
      tmpF1072 = T39;
      if (tmpF1072 != YPfalse) {
        T45 = BOXVAL(iF1057);
        T44 = CALL2(1,VARREF(YgooSmathYE),T45,lengthF1059);
        tmpF1073 = T44;
        if (tmpF1073 != YPfalse) {
          T50 = BOXVAL(sF1054);
          T49 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T50);
          T53 = BOXVAL(nF1056);
          T52 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T53);
          T55 = BOXVAL(scaleF1058);
          T54 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T55);
          T51 = CALL2(1,VARREF(YgooSmathYS),T52,T54);
          T48 = CALL2(1,VARREF(YgooSmathYT),T49,T51);
          fF1074 = T48;
          T57 = BOXVAL(seen_decimal_pointQF1060);
          if (T57 != YPfalse) {
            T56 = fF1074;
          } else {
            T58 = CALL1(1,VARREF(YgooSmathYtrunc),fF1074);
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
  P digitF1075;
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
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYDdigit_to_char),T4);
    digitF1075 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),digitF1075,digit_list_);
    T8 = CALL2(1,VARREF(YgooSmathYtruncS),num_,FREEREF(0));
    T7 = CALL1(1,VARREF(YgooScolsSseqY1st),T8);
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
  P digit_listF1078;
  P loopF1077;
  P sF1076;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF1076 = T1;
  T5 = FUNSHELL(1,fun_loop_27,2);
  loopF1077 = T5;
  FUNINIT(loopF1077, 2,radix_,loopF1077);
  T7 = CALL2(1,VARREF(YgooSmathYT),num_,sF1076);
  T6 = CALL2(0,loopF1077,Ynil,T7);
  T4 = T6;
  digit_listF1078 = T4;
  T10 = CALL2(1,VARREF(YgooSmagYL),sF1076,YPint((P)0));
  if (T10 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF1078);
    T9 = T11;
  } else {
    T13 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T13 != YPfalse) {
      T12 = LITREF(lit_55);
    } else {
      T12 = digit_listF1078;
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
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,VARREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_30) {
  P p_,e_;
  P iF1079;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYtrunc),p_);
  iF1079 = T1;
  T4 = CALL2(1,VARREF(YgooSmathY_),p_,iF1079);
  T3 = CALL2(1,VARREF(YgooSmagYL),T4,VARREF(YgooScolsSstrYepsilon));
  if (T3 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF1079,FREEREF(1));
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
  P lengthF1085;
  P eF1084;
  P loopF1083;
  P stringF1082;
  P pF1081;
  P sF1080;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF1080 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF1080);
  pF1081 = T4;
  stringF1082 = LITREF(lit_56);
  stringF1082 = BOXFAB(stringF1082);
  T9 = FUNSHELL(1,fun_loop_30,3);
  loopF1083 = T9;
  FUNINIT(loopF1083, 3,stringF1082,radix_,loopF1083);
  T10 = CALL2(0,loopF1083,pF1081,YPint((P)0));
  T8 = T10;
  eF1084 = T8;
  T13 = BOXVAL(stringF1082);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  lengthF1085 = T12;
  T15 = CALL2(1,VARREF(YgooSmathYE),eF1084,YPint((P)0));
  if (T15 != YPfalse) {
    T17 = BOXVAL(stringF1082);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_59));
    T14 = T16;
  } else {
    T19 = CALL2(1,VARREF(YgooSmathYE),eF1084,lengthF1085);
    if (T19 != YPfalse) {
      T21 = BOXVAL(stringF1082);
      T20 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_60),T21);
      T18 = T20;
    } else {
      T23 = CALL2(1,VARREF(YgooSmagYL),eF1084,lengthF1085);
      if (T23 != YPfalse) {
        T26 = BOXVAL(stringF1082);
        T27 = CALL2(1,VARREF(YgooSmathY_),lengthF1085,eF1084);
        T25 = CALL3(1,VARREF(YgooScolsSseqYsub),T26,YPint((P)0),T27);
        T29 = BOXVAL(stringF1082);
        T30 = CALL2(1,VARREF(YgooSmathY_),lengthF1085,eF1084);
        T28 = CALL3(1,VARREF(YgooScolsSseqYsub),T29,T30,lengthF1085);
        T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_61),T28);
        T22 = T24;
      } else {
        T34 = CALL2(1,VARREF(YgooSmathY_),eF1084,lengthF1085);
        T33 = CALL2(1,VARREF(YgooSmathYA),T34,YPint((P)2));
        T32 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_62),YPint((P)0),T33);
        T35 = BOXVAL(stringF1082);
        T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,T35);
        T22 = T31;
      }
      T18 = T22;
    }
    T14 = T18;
  }
  BOXVAL(stringF1082) = T14;
  T37 = CALL2(1,VARREF(YgooSmagYL),sF1080,YPint((P)0));
  if (T37 != YPfalse) {
    T39 = BOXVAL(stringF1082);
    T38 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_63),T39);
    T36 = T38;
  } else {
    T40 = BOXVAL(stringF1082);
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
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,VARREF(YgooScolsSstrYTprint_baseT));
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
  T0 = CALL2(1,VARREF(YgooSmagYL),T1,T2);
UNLINK_STACK();
  RET(T0);
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

FUNCODEDEF(YgooScolsSstrYstring_repeat) {
  P str_,n_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(str_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYLE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_56);
  } else {
    T4 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
    T3 = CALL2(1,VARREF(YgooScolsSstrYstring_repeat),str_,T4);
    T2 = CALL2(1,VARREF(YgooSmacrosYcat),str_,T3);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSstrYstring_split) {
  P str_,sep_;
  P matchF1086;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(str_, 0);
  ARG(sep_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),str_,sep_);
  matchF1086 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),matchF1086,YPfalse);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),str_);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),str_,YPint((P)0),matchF1086);
    T9 = CALL2(1,VARREF(YgooSmathYA),matchF1086,YPint((P)1));
    T10 = CALL1(1,VARREF(YgooStypesYlen),str_);
    T8 = CALL3(1,VARREF(YgooScolsSseqYsub),str_,T9,T10);
    T7 = CALL2(1,VARREF(YgooScolsSstrYstring_split),T8,sep_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),T6,T7);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSstrYstring_join) {
  P strs_,sep_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(strs_, 0);
  ARG(sep_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),strs_);
  if (T1 != YPfalse) {
    T0 = LITREF(lit_56);
  } else {
    T4 = CALL1(1,VARREF(Ytail),strs_);
    T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T4);
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(Yhead),strs_);
      T2 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T8 = CALL1(1,VARREF(Yhead),strs_);
        T10 = CALL1(1,VARREF(Ytail),strs_);
        T9 = CALL2(1,VARREF(YgooScolsSstrYstring_join),T10,sep_);
        T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,sep_,T9);
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSstrY___main_0___() {
  P loopF1090;
  P end259F1089;
  P initF1088;
  P ascii_charsF1087;
  P T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154;
  P T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138;
  P T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122;
  P T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"str");
  lit_1 = YPPsym((P)"objects");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr,T0);
  lit_2 = YPPsym((P)"char->ascii");
  lit_3 = YPPsym((P)"char");
  T3 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYchar_Gascii,T2);
  VARSET(YgooScolsSstrYascii_whitespaces,YPfalse);
  VARSET(YgooScolsSstrYascii_limit,YPfalse);
  lit_4 = YPPsym((P)"str-to-num");
  lit_5 = YPPsym((P)"string");
  T6 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T5 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T6,Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr_to_num,T4);
  lit_6 = YPPsym((P)"num-to-str-base");
  lit_7 = YPPsym((P)"num");
  lit_8 = YPPsym((P)"radix");
  T8 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T7 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T8,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYnum_to_str_base,T7);
  lit_9 = YPPsym((P)"num-to-str");
  T10 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYnum_to_str,T9);
  VARSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_10 = YPPsym((P)"empty");
  lit_11 = YPPsym((P)"c");
  T12 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T11 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,T12),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_empty_0 = YPmet(FUNCODEREF(fun_empty_0),LITREF(lit_10),T11,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooScolsScolYempty);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScolsScolYempty);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_empty_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooScolsScolYempty,T13);
  lit_12 = YPPsym((P)"elt-default");
  lit_13 = YPPsym((P)"x");
  T17 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_1 = YPmet(FUNCODEREF(fun_elt_default_1),LITREF(lit_12),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScolsScolYelt_default);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsScolYelt_default);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_elt_default_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsScolYelt_default,T18);
  lit_14 = YPPsym((P)"elt-type");
  T22 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_2 = YPmet(FUNCODEREF(fun_elt_type_2),LITREF(lit_14),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsScolYelt_type);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsScolYelt_type);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_elt_type_2;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsScolYelt_type,T23);
  lit_15 = YPPsym((P)"fab");
  lit_16 = YPPsym((P)"s");
  T28 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T27 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_16)),YPPlist(2,T28,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_15),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsScolYfab);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsScolYfab);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_fab_3;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsScolYfab,T29);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_str_4 = YPmet(FUNCODEREF(fun_str_4),LITREF(lit_0),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooScolsSstrYstr);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooScolsSstrYstr);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_str_4;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScolsSstrYstr,T34);
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
  T46 = BOUNDP(YgooScolsScolYlow_elt);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_low_elt_6;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsScolYlow_elt,T44);
  lit_20 = YPPsym((P)"low-elt-setter");
  lit_21 = YPPsym((P)"z");
  T48 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_13),LITREF(lit_19)),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_7 = YPmet(FUNCODEREF(fun_low_elt_setter_7),LITREF(lit_20),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsScolYlow_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsScolYlow_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_low_elt_setter_7;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsScolYlow_elt_setter,T49);
  lit_22 = YPPsym((P)"elt-or");
  lit_23 = YPPsym((P)"default");
  T53 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_19),LITREF(lit_23)),YPPlist(3,VARREF(YLstrG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_22),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsScolYelt_or);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsScolYelt_or);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_elt_or_8;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsScolYelt_or,T54);
  lit_24 = YPPsym((P)"elt-setter");
  T58 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_13),LITREF(lit_19)),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_9 = YPmet(FUNCODEREF(fun_elt_setter_9),LITREF(lit_24),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScolsScolYelt_setter);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsScolYelt_setter);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_elt_setter_9;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsScolYelt_setter,T59);
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
  T71 = BOUNDP(YgooScolsScolYadd);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScolsScolYadd);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_add_11;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScolsScolYadd,T69);
  VARSET(YgooScolsSstrYascii_limit,YPint((P)128));
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
  T77 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLvecG),VARREF(YgooScolsSstrYascii_limit));
  T76 = CALL2(1,VARREF(YgooScolsScolYfill),T77,YPfalse);
  ascii_charsF1087 = T76;
  T79 = FUNFAB(fun_13,1,ascii_charsF1087);
  initF1088 = T79;
  CALL2(1,initF1088,YPint((P)9),LITREF(lit_29));
  CALL2(1,initF1088,YPint((P)10),LITREF(lit_30));
  CALL2(1,initF1088,YPint((P)12),LITREF(lit_31));
  CALL2(1,initF1088,YPint((P)13),LITREF(lit_32));
  CALL2(1,initF1088,YPint((P)32),LITREF(lit_33));
  CALL2(1,initF1088,YPint((P)64),LITREF(lit_34));
  CALL2(1,initF1088,YPint((P)96),LITREF(lit_35));
  T78 = ascii_charsF1087;
  T75 = T78;
  VARSET(YgooScolsSstrYascii_chars,T75);
  lit_36 = YPPsym((P)"ascii->char");
  lit_37 = YPPsym((P)"n");
  lit_38 = YPsb((P)"not a standard character's ASCII code: %=");
  T80 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_14 = YPmet(FUNCODEREF(fun_ascii_Gchar_14),LITREF(lit_36),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsSstrYascii_Gchar);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsSstrYascii_Gchar);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_ascii_Gchar_14;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsSstrYascii_Gchar,T81);
  lit_39 = YPPsym((P)"char->integer");
  T85 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_15 = YPmet(FUNCODEREF(fun_char_Ginteger_15),LITREF(lit_39),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScolsSstrYchar_Ginteger);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsSstrYchar_Ginteger);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_char_Ginteger_15;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsSstrYchar_Ginteger,T86);
  lit_40 = YPPsym((P)"integer->char");
  T90 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_16 = YPmet(FUNCODEREF(fun_integer_Gchar_16),LITREF(lit_40),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScolsSstrYinteger_Gchar);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScolsSstrYinteger_Gchar);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_integer_Gchar_16;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScolsSstrYinteger_Gchar,T91);
  lit_41 = YPPsym((P)"least");
  lit_42 = YPPsym((P)"greatest");
  T96 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_27),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_41),LITREF(lit_42)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_18 = YPmet(FUNCODEREF(fun_loop_18),LITREF(lit_27),T95,ENVNUL,PNUL,YPfalse);
  T98 = CALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F1089 = T98;
  T100 = FUNSHELL(1,fun_loop_18,2);
  loopF1090 = T100;
  FUNINIT(loopF1090, 2,end259F1089,loopF1090);
  T101 = CALL3(0,loopF1090,YPint((P)0),YPfalse,YPfalse);
  T99 = T101;
  T97 = T99;
  VARSET(YgooScolsSstrYnative_chars,T97);
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
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_44));
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
  T117 = BOUNDP(YgooScolsSstrYstr_to_num);
  if (T117 != YPfalse) {
    T116 = VARREF(YgooScolsSstrYstr_to_num);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_str_to_num_26;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YgooScolsSstrYstr_to_num,T115);
  lit_52 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_52));
  VARSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_53 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_53));
  lit_54 = YPPsym((P)"digit-list");
  lit_55 = YPsb((P)"0");
  T120 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_27),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_28 = YPmet(FUNCODEREF(fun_num_to_str_base_28),LITREF(lit_6),T119,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_num_to_str_base_28;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooScolsSstrYnum_to_str_base,T121);
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
  T134 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_num_to_str_base_31;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooScolsSstrYnum_to_str_base,T132);
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
  T153 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_66)),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_35 = YPmet(FUNCODEREF(fun_L_35),LITREF(lit_65),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YgooSmagYL);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooSmagYL);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_L_35;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooSmagYL,T154);
  T158 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_36 = YPmet(FUNCODEREF(fun_to_str_36),LITREF(lit_25),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YgooSmathYto_str);
  if (T161 != YPfalse) {
    T160 = VARREF(YgooSmathYto_str);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_to_str_36;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YgooSmathYto_str,T159);
  lit_67 = YPPsym((P)"string-repeat");
  T163 = YPsig(YPPlist(2,LITREF(lit_0),LITREF(lit_37)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  YgooScolsSstrYstring_repeat = YPmet(FUNCODEREF(YgooScolsSstrYstring_repeat),LITREF(lit_67),T163,ENVNUL,PNUL,YPfalse);
  T164 = YgooScolsSstrYstring_repeat;
  VARSET(YgooScolsSstrYstring_repeat,T164);
  lit_68 = YPPsym((P)"string-split");
  lit_69 = YPPsym((P)"sep");
  T165 = YPsig(YPPlist(2,LITREF(lit_0),LITREF(lit_69)),YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooScolsSstrYstring_split = YPmet(FUNCODEREF(YgooScolsSstrYstring_split),LITREF(lit_68),T165,ENVNUL,PNUL,YPfalse);
  T166 = YgooScolsSstrYstring_split;
  VARSET(YgooScolsSstrYstring_split,T166);
  lit_70 = YPPsym((P)"string-join");
  lit_71 = YPPsym((P)"strs");
  T167 = YPsig(YPPlist(2,LITREF(lit_71),LITREF(lit_69)),YPPlist(2,VARREF(YLlstG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  YgooScolsSstrYstring_join = YPmet(FUNCODEREF(YgooScolsSstrYstring_join),LITREF(lit_70),T167,ENVNUL,PNUL,YPfalse);
  T168 = YgooScolsSstrYstring_join;
  VARSET(YgooScolsSstrYstring_join,T168);
  T169 = YPfalse;
  return T169;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$e", &module_info_gooSmath, "$e"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"or", &module_info_gooSmacros, "or"},
  {"%put", &module_info_gooSboot, "%put"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"any?", &module_info_gooStypes, "any?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"|", &module_info_gooSmath, "|"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@<", &module_info_gooSboot, "@<"},
  {"now", &module_info_gooScolsScol, "now"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"max", &module_info_gooSmag, "max"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"log", &module_info_gooSmath, "log"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%get", &module_info_gooSboot, "%get"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fin", &module_info_gooSboot, "fin"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%im", &module_info_gooSboot, "%im"},
  {"round", &module_info_gooSmath, "round"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"def", &module_info_gooSboot, "def"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"tan", &module_info_gooSmath, "tan"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"set", &module_info_gooSboot, "set"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"ct", &module_info_gooSboot, "ct"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"try", &module_info_gooSboot, "try"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"as", &module_info_gooStypes, "as"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {">", &module_info_gooSmag, ">"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"~=", &module_info_gooSmath, "~="},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"asin", &module_info_gooSmath, "asin"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"/", &module_info_gooSmath, "/"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"map", &module_info_gooSmacros, "map"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"~", &module_info_gooSmath, "~"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"=", &module_info_gooSmath, "="},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"for", &module_info_gooSmacros, "for"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"use", &module_info_gooSboot, "use"},
  {"@len", &module_info_gooSboot, "@len"},
  {"quote", &module_info_gooSboot, "quote"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@+", &module_info_gooSboot, "@+"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"items", &module_info_gooScolsScol, "items"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"1+", &module_info_gooSmath, "1+"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"loc", &module_info_gooSboot, "loc"},
  {"atan", &module_info_gooSmath, "atan"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"into", &module_info_gooScolsScol, "into"},
  {"isa", &module_info_gooSboot, "isa"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ascii-limit", &YgooScolsSstrYascii_limit},
  {"string-join", &YgooScolsSstrYstring_join},
  {"integer->char", &YgooScolsSstrYinteger_Gchar},
  {"string-split", &YgooScolsSstrYstring_split},
  {"string-repeat", &YgooScolsSstrYstring_repeat},
  {"$digit-to-char", &YgooScolsSstrYDdigit_to_char},
  {"---main-0---", NULL},
  {"str-to-num", &YgooScolsSstrYstr_to_num},
  {"ascii-chars", &YgooScolsSstrYascii_chars},
  {"str", &YgooScolsSstrYstr},
  {"num-to-str-base", &YgooScolsSstrYnum_to_str_base},
  {"char->integer", &YgooScolsSstrYchar_Ginteger},
  {"*print-base*", &YgooScolsSstrYTprint_baseT},
  {"ascii->char", &YgooScolsSstrYascii_Gchar},
  {"native-chars", &YgooScolsSstrYnative_chars},
  {"ascii-whitespaces", &YgooScolsSstrYascii_whitespaces},
  {"epsilon", &YgooScolsSstrYepsilon},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"ascii-limit", "ascii-limit"},
  {"string-join", "string-join"},
  {"string-split", "string-split"},
  {"string-repeat", "string-repeat"},
  {"str-to-num", "str-to-num"},
  {"num-to-str", "num-to-str"},
  {"char->ascii", "char->ascii"},
  {"str", "str"},
  {"num-to-str-base", "num-to-str-base"},
  {"*print-base*", "*print-base*"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSstr;
MODULE_INFO module_info_gooScolsSstr = {
  "goo/cols/str",
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
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_gooScolsSstr (void);

void load_module_gooScolsSstr (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();
  load_module_gooScolsSlst();

  (P)YgooScolsSstrY___main_0___();

}

/* END OF GENERATED CODE. */
