/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Ynul,"goo/boot","nul");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ylst,"goo/boot","lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhead,"goo/boot","head");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ynot,"goo/boot","not");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ynil,"goo/boot","nil");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YPprop,"goo/boot","%prop");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYdigitQ,"goo/math","digit?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_24);
DEFLIT(lit_47);
DEFLIT(lit_45);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_27);
DEFLIT(lit_63);
DEFLIT(lit_20);
DEFLIT(lit_65);
DEFLIT(lit_37);
DEFLIT(lit_10);
DEFLIT(lit_11);
DEFLIT(lit_57);
DEFLIT(lit_31);
DEFLIT(lit_22);
DEFLIT(lit_55);
DEFLIT(lit_23);
DEFLIT(lit_4);
DEFLIT(lit_33);
DEFLIT(lit_54);
DEFLIT(lit_62);
DEFLIT(lit_16);
DEFLIT(lit_26);
DEFLIT(lit_40);
DEFLIT(lit_21);
DEFLIT(lit_32);
DEFLIT(lit_2);
DEFLIT(lit_42);
DEFLIT(lit_43);
DEFLIT(lit_56);
DEFLIT(lit_61);
DEFLIT(lit_58);
DEFLIT(lit_0);
DEFLIT(lit_51);
DEFLIT(lit_44);
DEFLIT(lit_29);
DEFLIT(lit_60);
DEFLIT(lit_7);
DEFLIT(lit_36);
DEFLIT(lit_28);
DEFLIT(lit_18);
DEFLIT(lit_49);
DEFLIT(lit_8);
DEFLIT(lit_52);
DEFLIT(lit_12);
DEFLIT(lit_64);
DEFLIT(lit_39);
DEFLIT(lit_53);
DEFLIT(lit_46);
DEFLIT(lit_41);
DEFLIT(lit_17);
DEFLIT(lit_50);
DEFLIT(lit_9);
DEFLIT(lit_14);
DEFLIT(lit_59);
DEFLIT(lit_15);
DEFLIT(lit_38);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_3);
DEFLIT(lit_30);
DEFLIT(lit_48);
DEFLIT(lit_1);
DEFLIT(lit_25);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_sum_1);
LOCFOR(fun_len_2);
LOCFOR(fun_fnd_3);
LOCFOR(fun_elt_or_4);
LOCFOR(fun_fnd_5);
LOCFOR(fun_elt_setter_6);
LOCFOR(fun_emptyQ_7);
LOCFOR(fun_empty_8);
LOCFOR(fun_fab_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_build_11);
LOCFOR(fun_fabs_12);
LOCFOR(fun_Pdat_13);
LOCFOR(fun_Pdat_setter_14);
LOCFOR(fun_Pkey_15);
LOCFOR(fun_Pkey_setter_16);
LOCFOR(fun_17);
LOCFOR(fun_enum_18);
LOCFOR(fun_finQ_19);
LOCFOR(fun_nxt_20);
LOCFOR(fun_now_21);
LOCFOR(fun_now_setter_22);
LOCFOR(fun_now_key_23);
LOCFOR(fun_add_24);
LOCFOR(fun_fnd_25);
LOCFOR(fun_last_26);
LOCFOR(fun_loop_27);
LOCFOR(fun_revX_28);
LOCFOR(fun_find_tail_29);
LOCFOR(fun_connect_30);
LOCFOR(fun_x_1308_31);
LOCFOR(fun_catX_32);
LOCFOR(fun_lst_33);
LOCFOR(fun_pair_34);
LOCFOR(fun_pushX_35);
LOCFOR(fun_popX_36);
LOCFOR(fun_to_str_37);
LOCFOR(fun_assq_38);
LOCFOR(fun_assqn_39);
extern P YgooScolsSlstY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_0) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_sum_1) {
  P count_,x_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = count_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
    T4 = CALL1(1,VARREF(Ytail),x_);
    a1 = T3;
    a2 = T4;
    count_ = a1;
    x_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_2) {
  P x_;
  P sumF1014;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_1,1);
  sumF1014 = T1;
  FUNINIT(sumF1014, 1,sumF1014);
  T2 = CALL2(1,sumF1014,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_3) {
  P count_,x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),count_,FREEREF(1));
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(Yhead),x_);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
      T7 = CALL1(1,VARREF(Ytail),x_);
      a1 = T6;
      a2 = T7;
      count_ = a1;
      x_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_4) {
  P x_,key_,default_;
  P fndF1015;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_3,3);
  fndF1015 = T1;
  FUNINIT(fndF1015, 3,default_,key_,fndF1015);
  T2 = CALL2(1,fndF1015,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_5) {
  P count_,x_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL0(1,VARREF(YgooScolsScolYrange_error));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),count_,FREEREF(0));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yhead_setter),FREEREF(1),x_);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
      T8 = CALL1(1,VARREF(Ytail),x_);
      a1 = T7;
      a2 = T8;
      count_ = a1;
      x_ = a2;
      goto loop;
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_6) {
  P z_,x_,key_;
  P fndF1016;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_5,3);
  fndF1016 = T1;
  FUNINIT(fndF1016, 3,key_,z_,fndF1016);
  T2 = CALL2(1,fndF1016,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_7) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(Yobject_class),c_);
  T1 = CALL1(1,VARREF(YgooScolsScolYempty),T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_8) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(Ynil);
}

FUNCODEDEF(fun_fab_9) {
  P i_,res_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(res_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYG),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(Ynew),FREEREF(1),VARREF(Ytail),res_);
    a1 = T3;
    a2 = T4;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T0 = res_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P t_,s_;
  P fabF1017;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_9,2);
  fabF1017 = T1;
  FUNINIT(fabF1017, 2,fabF1017,t_);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),t_);
  T2 = CALL2(1,fabF1017,s_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_11) {
  P index_,result_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(index_, 0);
  ARG(result_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),index_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = result_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathY_),index_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),index_);
    T4 = CALLN(1,VARREF(Ynew),5,FREEREF(1),VARREF(Yhead),T5,VARREF(Ytail),result_);
    a1 = T3;
    a2 = T4;
    index_ = a1;
    result_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fabs_12) {
  P c_,objects_;
  P buildF1018;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_11,3);
  buildF1018 = T1;
  FUNINIT(buildF1018, 3,buildF1018,c_,objects_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),c_);
  T2 = CALL2(1,buildF1018,T3,T5);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_13) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_14) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_15) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_16) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_enum_18) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_19) {
  P e_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_20) {
  P e_;
  P x_1306F1019;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1306F1019 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T1,x_1306F1019);
  T4 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T3,x_1306F1019);
  T0 = x_1306F1019;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_21) {
  P e_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_22) {
  P v_,e_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL2(1,VARREF(Yhead_setter),v_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_23) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_24) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_25) {
  P x_,px_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(px_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),px_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Ytail),x_);
    a1 = T4;
    a2 = x_;
    x_ = a1;
    px_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_last_26) {
  P x_;
  P fndF1020;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_25,1);
  fndF1020 = T1;
  FUNINIT(fndF1020, 1,fndF1020);
  T2 = CALL2(0,fndF1020,x_,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P l_,r_;
  P tF1021;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T3 = CALL1(1,VARREF(Ytail),l_);
    tF1021 = T3;
    CALL2(1,VARREF(Ytail_setter),r_,l_);
    a1 = tF1021;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_revX_28) {
  P c_;
  P loopF1022;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_27,1);
  loopF1022 = T1;
  FUNINIT(loopF1022, 1,loopF1022);
  T4 = CALL1(1,VARREF(Yobject_class),c_);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),T4);
  T2 = CALL2(0,loopF1022,c_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_tail_29) {
  P p_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),p_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T0 = p_;
  } else {
    T4 = CALL1(1,VARREF(Ytail),p_);
    a1 = T4;
    p_ = a1;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_connect_30) {
  P x_,y_;
  P find_tailF1023;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    T3 = FUNSHELL(1,fun_find_tail_29,1);
    find_tailF1023 = T3;
    FUNINIT(find_tailF1023, 1,find_tailF1023);
    T4 = CALL1(1,find_tailF1023,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1308_31) {
  P x_1307_;
  P xF1024;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1307_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1307_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1307_);
    xF1024 = T4;
    T6 = BOXVAL(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF1024);
    T5 = CALL2(1,FREEREF(1),T6,T7);
    BOXVAL(FREEREF(0)) = T5;
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1307_);
    a1 = T9;
    x_1307_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_32) {
  P x_,more_;
  P x_1308F1028;
  P curF1027;
  P resultF1026;
  P connectF1025;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_connect_30;
  connectF1025 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF1026 = T3;
  curF1027 = resultF1026;
  curF1027 = BOXFAB(curF1027);
  T7 = BOXVAL(curF1027);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF1025,T7,T8);
  BOXVAL(curF1027) = T6;
  T9 = FUNSHELL(1,fun_x_1308_31,3);
  x_1308F1028 = T9;
  FUNINIT(x_1308F1028, 3,curF1027,connectF1025,x_1308F1028);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T10 = CALL1(0,x_1308F1028,T11);
  T12 = CALL1(1,VARREF(Ytail),resultF1026);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lst_33) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pair_34) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YLlstG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_35) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_36) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),c_);
  T2 = CALL1(1,VARREF(Yhead),c_);
  T0 = CALL2(1,VARREF(Ytup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_37) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_64),T1,LITREF(lit_65));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assq_38) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YgooScolsSlstYassq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assqn_39) {
  P x_,l_,pos_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),T5,pos_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL3(1,VARREF(YgooScolsSlstYassqn),x_,T8,pos_);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsSlstY___main_0___() {
  P T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158;
  P T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142;
  P T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126;
  P T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110;
  P T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94;
  P T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78;
  P T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62;
  P T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YgooScolsSlstYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPsym((P)"elts");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ylst,T0);
  VARSET(YgooScolsSlstYlist,VARREF(Ylst));
  lit_2 = YPPsym((P)"pair");
  lit_3 = YPPsym((P)"x");
  lit_4 = YPPsym((P)"y");
  T3 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYpair,T2);
  lit_5 = YPPsym((P)"assqn");
  lit_6 = YPPsym((P)"l");
  lit_7 = YPPsym((P)"pos");
  T5 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassqn,T4);
  lit_8 = YPPsym((P)"assq");
  T7 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassq,T6);
  lit_9 = YPPsym((P)"as");
  lit_10 = YPPsym((P)"p");
  T9 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T8 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_3)),YPPlist(2,T9,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_9),T8,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooStypesYas);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooStypesYas);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_as_0;
  T10 = CALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooStypesYas,T10);
  lit_11 = YPPsym((P)"len");
  lit_12 = YPPsym((P)"sum");
  lit_13 = YPPsym((P)"count");
  T15 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sum_1 = YPmet(FUNCODEREF(fun_sum_1),LITREF(lit_12),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_11),T14,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooStypesYlen);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooStypesYlen);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_len_2;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooStypesYlen,T16);
  lit_14 = YPPsym((P)"elt-or");
  lit_15 = YPPsym((P)"key");
  lit_16 = YPPsym((P)"default");
  lit_17 = YPPsym((P)"fnd");
  T21 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_3 = YPmet(FUNCODEREF(fun_fnd_3),LITREF(lit_17),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_15),LITREF(lit_16)),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_4 = YPmet(FUNCODEREF(fun_elt_or_4),LITREF(lit_14),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooScolsScolYelt_or);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooScolsScolYelt_or);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_elt_or_4;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooScolsScolYelt_or,T22);
  lit_18 = YPPsym((P)"elt-setter");
  lit_19 = YPPsym((P)"z");
  T27 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_5 = YPmet(FUNCODEREF(fun_fnd_5),LITREF(lit_17),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_3),LITREF(lit_15)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_6 = YPmet(FUNCODEREF(fun_elt_setter_6),LITREF(lit_18),T26,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YgooScolsScolxYelt_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooScolsScolxYelt_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_elt_setter_6;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooScolsScolxYelt_setter,T28);
  lit_20 = YPPsym((P)"empty?");
  lit_21 = YPPsym((P)"c");
  T32 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_7 = YPmet(FUNCODEREF(fun_emptyQ_7),LITREF(lit_20),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YgooSmacrosYemptyQ);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_emptyQ_7;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooSmacrosYemptyQ,T33);
  lit_22 = YPPsym((P)"empty");
  T38 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T37 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,T38),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_8 = YPmet(FUNCODEREF(fun_empty_8),LITREF(lit_22),T37,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooScolsScolYempty);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooScolsScolYempty);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_empty_8;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooScolsScolYempty,T39);
  lit_23 = YPPsym((P)"fab");
  lit_24 = YPPsym((P)"t");
  lit_25 = YPPsym((P)"s");
  lit_26 = YPPsym((P)"i");
  lit_27 = YPPsym((P)"res");
  T45 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_27)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_9 = YPmet(FUNCODEREF(fun_fab_9),LITREF(lit_23),T45,ENVNUL,PNUL,YPfalse);
  T44 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T43 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,T44,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_23),T43,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooScolsScolYfab);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooScolsScolYfab);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_fab_10;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooScolsScolYfab,T46);
  lit_28 = YPPsym((P)"fabs");
  lit_29 = YPPsym((P)"objects");
  lit_30 = YPPsym((P)"build");
  lit_31 = YPPsym((P)"index");
  lit_32 = YPPsym((P)"result");
  T52 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_32)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_build_11 = YPmet(FUNCODEREF(fun_build_11),LITREF(lit_30),T52,ENVNUL,PNUL,YPfalse);
  T51 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T50 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_29)),YPPlist(1,T51),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_12 = YPmet(FUNCODEREF(fun_fabs_12),LITREF(lit_28),T50,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YgooSmathYfabs);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooSmathYfabs);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_fabs_12;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YgooSmathYfabs,T53);
  lit_33 = YPPsym((P)"<lst-enum>");
  T58 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T57 = CALL2(1,VARREF(Yfab_class),LITREF(lit_33),T58);
  VARSET(YgooScolsSlstYLlst_enumG,T57);
  lit_34 = YPPsym((P)"%dat");
  lit_35 = YPPsym((P)"_x");
  T59 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_13 = YPmet(FUNCODEREF(fun_Pdat_13),LITREF(lit_34),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooScolsSlstYPdat);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooScolsSlstYPdat);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_Pdat_13;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooScolsSlstYPdat,T60);
  lit_36 = YPPsym((P)"%dat-setter");
  lit_37 = YPPsym((P)"_z");
  T64 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_35)),YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_14 = YPmet(FUNCODEREF(fun_Pdat_setter_14),LITREF(lit_36),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooScolsSlstYPdat_setter);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooScolsSlstYPdat_setter);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_Pdat_setter_14;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooScolsSlstYPdat_setter,T65);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_38 = YPPsym((P)"%key");
  T69 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_15 = YPmet(FUNCODEREF(fun_Pkey_15),LITREF(lit_38),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooScolsSlstYPkey);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooScolsSlstYPkey);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_Pkey_15;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooScolsSlstYPkey,T70);
  lit_39 = YPPsym((P)"%key-setter");
  T74 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_35)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_16 = YPmet(FUNCODEREF(fun_Pkey_setter_16),LITREF(lit_39),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooScolsSlstYPkey_setter);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooScolsSlstYPkey_setter);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_Pkey_setter_16;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooScolsSlstYPkey_setter,T75);
  T79 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T80 = fun_17;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T80);
  lit_40 = YPPsym((P)"enum");
  T81 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_18 = YPmet(FUNCODEREF(fun_enum_18),LITREF(lit_40),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooScolsScolYenum);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooScolsScolYenum);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_enum_18;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooScolsScolYenum,T82);
  lit_41 = YPPsym((P)"fin?");
  lit_42 = YPPsym((P)"e");
  T86 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_19 = YPmet(FUNCODEREF(fun_finQ_19),LITREF(lit_41),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooScolsScolYfinQ);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooScolsScolYfinQ);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_finQ_19;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooScolsScolYfinQ,T87);
  lit_43 = YPPsym((P)"nxt");
  T91 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_20 = YPmet(FUNCODEREF(fun_nxt_20),LITREF(lit_43),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YgooScolsScolYnxt);
  if (T94 != YPfalse) {
    T93 = VARREF(YgooScolsScolYnxt);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_nxt_20;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YgooScolsScolYnxt,T92);
  lit_44 = YPPsym((P)"now");
  T96 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_21 = YPmet(FUNCODEREF(fun_now_21),LITREF(lit_44),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YgooScolsScolYnow);
  if (T99 != YPfalse) {
    T98 = VARREF(YgooScolsScolYnow);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_now_21;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YgooScolsScolYnow,T97);
  lit_45 = YPPsym((P)"now-setter");
  lit_46 = YPPsym((P)"v");
  T101 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_42)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_22 = YPmet(FUNCODEREF(fun_now_setter_22),LITREF(lit_45),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YgooScolsScolYnow_setter);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooScolsScolYnow_setter);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_now_setter_22;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YgooScolsScolYnow_setter,T102);
  lit_47 = YPPsym((P)"now-key");
  T106 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_23 = YPmet(FUNCODEREF(fun_now_key_23),LITREF(lit_47),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YgooScolsScolYnow_key);
  if (T109 != YPfalse) {
    T108 = VARREF(YgooScolsScolYnow_key);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_now_key_23;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YgooScolsScolYnow_key,T107);
  lit_48 = YPPsym((P)"add");
  T111 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_24 = YPmet(FUNCODEREF(fun_add_24),LITREF(lit_48),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YgooScolsScolYadd);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooScolsScolYadd);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_add_24;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooScolsScolYadd,T112);
  lit_49 = YPPsym((P)"last");
  lit_50 = YPPsym((P)"px");
  T117 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_50)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_25 = YPmet(FUNCODEREF(fun_fnd_25),LITREF(lit_17),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_26 = YPmet(FUNCODEREF(fun_last_26),LITREF(lit_49),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooScolsSseqYlast);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooScolsSseqYlast);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_last_26;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooScolsSseqYlast,T118);
  lit_51 = YPPsym((P)"rev!");
  lit_52 = YPPsym((P)"loop");
  lit_53 = YPPsym((P)"r");
  T123 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_53)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_52),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_28 = YPmet(FUNCODEREF(fun_revX_28),LITREF(lit_51),T122,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YgooSmacrosYrevX);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooSmacrosYrevX);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_revX_28;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooSmacrosYrevX,T124);
  lit_54 = YPPsym((P)"cat!");
  lit_55 = YPPsym((P)"more");
  lit_56 = YPPsym((P)"connect");
  lit_57 = YPPsym((P)"find-tail");
  lit_58 = YPPsym((P)"x-1308");
  lit_59 = YPPsym((P)"x-1307");
  T131 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_tail_29 = YPmet(FUNCODEREF(fun_find_tail_29),LITREF(lit_57),T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_30 = YPmet(FUNCODEREF(fun_connect_30),LITREF(lit_56),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1308_31 = YPmet(FUNCODEREF(fun_x_1308_31),LITREF(lit_58),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_55)),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_32 = YPmet(FUNCODEREF(fun_catX_32),LITREF(lit_54),T128,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YgooScolsSseqxYcatX);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_catX_32;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooScolsSseqxYcatX,T132);
  T136 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_33 = YPmet(FUNCODEREF(fun_lst_33),LITREF(lit_0),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(Ylst);
  if (T139 != YPfalse) {
    T138 = VARREF(Ylst);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_lst_33;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(Ylst,T137);
  lit_60 = YPPsym((P)"h");
  T141 = YPsig(YPPlist(2,LITREF(lit_60),LITREF(lit_24)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_34 = YPmet(FUNCODEREF(fun_pair_34),LITREF(lit_2),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YgooSmacrosYpair);
  if (T144 != YPfalse) {
    T143 = VARREF(YgooSmacrosYpair);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_pair_34;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YgooSmacrosYpair,T142);
  lit_61 = YPPsym((P)"push!");
  T146 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_35 = YPmet(FUNCODEREF(fun_pushX_35),LITREF(lit_61),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YgooScolsSseqxYpushX);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_pushX_35;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooScolsSseqxYpushX,T147);
  lit_62 = YPPsym((P)"pop!");
  T151 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_popX_36 = YPmet(FUNCODEREF(fun_popX_36),LITREF(lit_62),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YgooScolsSseqxYpopX);
  if (T154 != YPfalse) {
    T153 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_popX_36;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YgooScolsSseqxYpopX,T152);
  lit_63 = YPPsym((P)"to-str");
  lit_64 = YPsb((P)"(");
  lit_65 = YPsb((P)")");
  T156 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_37 = YPmet(FUNCODEREF(fun_to_str_37),LITREF(lit_63),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YgooSmathYto_str);
  if (T159 != YPfalse) {
    T158 = VARREF(YgooSmathYto_str);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_to_str_37;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YgooSmathYto_str,T157);
  T161 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_38 = YPmet(FUNCODEREF(fun_assq_38),LITREF(lit_8),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YgooScolsSlstYassq);
  if (T164 != YPfalse) {
    T163 = VARREF(YgooScolsSlstYassq);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_assq_38;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YgooScolsSlstYassq,T162);
  T168 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T167 = fun_assqn_39 = YPmet(FUNCODEREF(fun_assqn_39),LITREF(lit_5),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YgooScolsSlstYassqn);
  if (T172 != YPfalse) {
    T171 = VARREF(YgooScolsSlstYassqn);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_assqn_39;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  T169 = VARSET(YgooScolsSlstYassqn,T170);
  T166 = T169;
  return T166;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"while", &module_info_gooSmacros, "while"},
  {"~=", &module_info_gooSmath, "~="},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"rem", &module_info_gooSmath, "rem"},
  {"now", &module_info_gooScolsScol, "now"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"t+", &module_info_gooStypes, "t+"},
  {"$e", &module_info_gooSmath, "$e"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"/", &module_info_gooSmath, "/"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"ct", &module_info_gooSboot, "ct"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"app", &module_info_gooSmacros, "app"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"pow", &module_info_gooSmath, "pow"},
  {"t?", &module_info_gooStypes, "t?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"and", &module_info_gooSmacros, "and"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"match", &module_info_gooSmacros, "match"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"use", &module_info_gooSboot, "use"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"when", &module_info_gooSmacros, "when"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"*", &module_info_gooSmath, "*"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"t<", &module_info_gooStypes, "t<"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"seq", &module_info_gooSboot, "seq"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"until", &module_info_gooSmacros, "until"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"==", &module_info_gooSmacros, "=="},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"any?", &module_info_gooStypes, "any?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"t=", &module_info_gooStypes, "t="},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"items", &module_info_gooScolsScol, "items"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"find", &module_info_gooScolsScol, "find"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"t*", &module_info_gooStypes, "t*"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"round/", &module_info_gooSmath, "round/"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"@==", &module_info_gooSboot, "@=="},
  {"case", &module_info_gooSmacros, "case"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"@<", &module_info_gooSboot, "@<"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"max", &module_info_gooSmag, "max"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"head", &module_info_gooSboot, "head"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"def", &module_info_gooSboot, "def"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {">", &module_info_gooSmag, ">"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"len", &module_info_gooStypes, "len"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"if", &module_info_gooSboot, "if"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"round", &module_info_gooSmath, "round"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"<", &module_info_gooSmag, "<"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"min", &module_info_gooSmag, "min"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"as", &module_info_gooStypes, "as"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"not", &module_info_gooSboot, "not"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"try", &module_info_gooSboot, "try"},
  {"dp", &module_info_gooSboot, "dp"},
  {"abs", &module_info_gooSmath, "abs"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"=", &module_info_gooSmath, "="},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"asin", &module_info_gooSmath, "asin"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"+", &module_info_gooSmath, "+"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%str", &module_info_gooSboot, "%str"},
  {"~", &module_info_gooSmath, "~"},
  {"df", &module_info_gooSboot, "df"},
  {"let", &module_info_gooSboot, "let"},
  {"for", &module_info_gooSmacros, "for"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"isa", &module_info_gooSboot, "isa"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"dv", &module_info_gooSboot, "dv"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {">=", &module_info_gooSmag, ">="},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"dg", &module_info_gooSboot, "dg"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"&", &module_info_gooSmath, "&"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ds", &module_info_gooSboot, "ds"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"op", &module_info_gooSmacros, "op"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"dc", &module_info_gooSboot, "dc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"export", &module_info_gooSboot, "export"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"new", &module_info_gooSboot, "new"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<=", &module_info_gooSmag, "<="},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"opf", &module_info_gooSmacros, "opf"},
  {">>", &module_info_gooSmath, ">>"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"^", &module_info_gooSmath, "^"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fin", &module_info_gooSboot, "fin"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"cos", &module_info_gooSmath, "cos"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"or", &module_info_gooSmacros, "or"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<lst-enum>", &YgooScolsSlstYLlst_enumG},
  {"<list>", &YgooScolsSlstYLlistG},
  {"%dat", &YgooScolsSlstYPdat},
  {"%key-setter", &YgooScolsSlstYPkey_setter},
  {"%key", &YgooScolsSlstYPkey},
  {"---main-0---", NULL},
  {"assq", &YgooScolsSlstYassq},
  {"list", &YgooScolsSlstYlist},
  {"assqn", &YgooScolsSlstYassqn},
  {"%dat-setter", &YgooScolsSlstYPdat_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"tail-setter", "tail-setter"},
  {"tail", "tail"},
  {"<list>", "<list>"},
  {"<lst>", "<lst>"},
  {"head-setter", "head-setter"},
  {"lst", "lst"},
  {"head", "head"},
  {"assq", "assq"},
  {"nil", "nil"},
  {"list", "list"},
  {"pair", "pair"},
  {"assqn", "assqn"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSlst;
MODULE_INFO module_info_gooScolsSlst = {
  "goo/cols/lst",
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
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);

/* EXPRESSION: */

extern void load_module_gooScolsSlst (void);

void load_module_gooScolsSlst (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();

  (P)YgooScolsSlstY___main_0___();

}

/* END OF GENERATED CODE. */
