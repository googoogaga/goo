/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/vec */

EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYends_with,"goo/cols/seq","ends-with");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPisa,"goo/boot","%isa");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YgooScolsSvecYvec_dat,"goo/cols/vec","vec-dat");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
DEF(YgooScolsSvecYvec_dat_setter,"goo/cols/vec","vec-dat-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YgooScolsSvecYvec_len,"goo/cols/vec","vec-len");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSseqYbegins_with,"goo/cols/seq","begins-with");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooScolsSvecYvec_len_setter,"goo/cols/vec","vec-len-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYA,"goo/math","+");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfind_getter,"goo/boot","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_36);
DEFLIT(lit_23);
DEFLIT(lit_16);
DEFLIT(lit_38);
DEFLIT(lit_7);
DEFLIT(lit_18);
DEFLIT(lit_27);
DEFLIT(lit_35);
DEFLIT(lit_21);
DEFLIT(lit_8);
DEFLIT(lit_32);
DEFLIT(lit_13);
DEFLIT(lit_28);
DEFLIT(lit_2);
DEFLIT(lit_9);
DEFLIT(lit_33);
DEFLIT(lit_20);
DEFLIT(lit_29);
DEFLIT(lit_24);
DEFLIT(lit_5);
DEFLIT(lit_30);
DEFLIT(lit_14);
DEFLIT(lit_12);
DEFLIT(lit_34);
DEFLIT(lit_10);
DEFLIT(lit_17);
DEFLIT(lit_1);
DEFLIT(lit_26);
DEFLIT(lit_3);
DEFLIT(lit_15);
DEFLIT(lit_22);
DEFLIT(lit_37);
DEFLIT(lit_31);
DEFLIT(lit_6);
DEFLIT(lit_19);
DEFLIT(lit_25);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_vec_len_0);
LOCFOR(fun_vec_len_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_vec_dat_3);
LOCFOR(fun_vec_dat_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_len_6);
LOCFOR(fun_elt_or_7);
LOCFOR(fun_elt_setter_8);
LOCFOR(fun_empty_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_x_1300_11);
LOCFOR(fun_x_1298_12);
LOCFOR(fun_catX_13);
LOCFOR(fun_vec_14);
LOCFOR(fun_pushX_15);
LOCFOR(fun_popX_16);
LOCFOR(fun_to_str_17);
LOCFOR(fun_addX_18);
LOCFOR(fun_fill_19);
LOCFOR(fun_lenSfill_setter_20);
LOCFOR(fun_len_setter_21);
LOCFOR(fun_zapX_22);
LOCFOR(fun_low_elt_23);
LOCFOR(fun_low_elt_setter_24);
extern P YgooScolsSvecY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_vec_len_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_len_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_vec_dat_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL0(1,VARREF(YgooScolsSrepYrep_nul));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_6) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSvecYvec_len),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_7) {
  P c_,i_,default_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),c_,i_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,i_);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_8) {
  P z_,c_,i_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(i_, 2);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsScolYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),z_,c_,i_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_empty_9) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF1019;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceiling),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF1019 = T1;
  T3 = CALLN(1,VARREF(Ynew),5,VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),s_,VARREF(YgooScolsSvecYvec_dat),datF1019);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1300_11) {
  P x_1299_;
  P eF1020;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1299_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1299_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1299_);
    eF1020 = T4;
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),eF1020);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1299_);
    a1 = T6;
    x_1299_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1298_12) {
  P x_1297_;
  P x_1300F1022;
  P sF1021;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1297_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1297_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1297_);
    sF1021 = T4;
    T5 = FUNSHELL(1,fun_x_1300_11,2);
    x_1300F1022 = T5;
    FUNINIT(x_1300F1022, 2,FREEREF(0),x_1300F1022);
    T7 = CALL1(1,VARREF(YgooScolsScolYenum),sF1021);
    T6 = CALL1(0,x_1300F1022,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1297_);
    a1 = T9;
    x_1297_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_13) {
  P x_,more_;
  P x_1298F1023;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1298_12,2);
  x_1298F1023 = T0;
  FUNINIT(x_1298F1023, 2,x_,x_1298F1023);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T1 = CALL1(0,x_1298F1023,T2);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_vec_14) {
  P elts_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(elts_, 0);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YgooScolsSvecYLvecG),elts_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_15) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_16) {
  P c_;
  P xF1025;
  P new_lenF1024;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  new_lenF1024 = T1;
  T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,new_lenF1024);
  xF1025 = T4;
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),new_lenF1024,c_);
  T5 = CALL2(1,VARREF(Ytup),c_,xF1025);
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_17) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_29),T1,LITREF(lit_30));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_addX_18) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooStypesYlen),c_);
  CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fill_19) {
  P i_;
  P tmpF1027;
  P tmpF1026;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  tmpF1026 = T1;
  if (tmpF1026 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(1),FREEREF(2),i_);
    tmpF1027 = T4;
    if (tmpF1027 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lenSfill_setter_20) {
  P new_len_,c_,default_;
  P fillF1031;
  P old_lenF1030;
  P new_dataF1029;
  P datF1028;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),c_);
  datF1028 = T1;
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),datF1028);
  T3 = CALL2(1,VARREF(YgooSmagYG),new_len_,T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceiling),new_len_);
    T6 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T7,default_);
    new_dataF1029 = T6;
    CALL2(1,VARREF(YgooScolsSrepYrep_intoX),new_dataF1029,datF1028);
    CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
    T8 = CALL2(1,VARREF(YgooScolsSvecYvec_dat_setter),new_dataF1029,c_);
    T5 = T8;
    T2 = T5;
  } else {
    T11 = CALL1(1,VARREF(YgooStypesYlen),c_);
    T10 = CALL2(1,VARREF(YgooSmagYL),new_len_,T11);
    if (T10 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooStypesYlen),c_);
      old_lenF1030 = T13;
      CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T15 = FUNSHELL(1,fun_fill_19,4);
      fillF1031 = T15;
      FUNINIT(fillF1031, 4,old_lenF1030,default_,datF1028,fillF1031);
      T16 = CALL1(1,fillF1031,new_len_);
      T14 = T16;
      T12 = T14;
      T9 = T12;
    } else {
      T17 = CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T9 = T17;
    }
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_21) {
  P new_len_,c_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYelt_default),c_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYlenSfill_setter),new_len_,c_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_22) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),c_);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_low_elt_23) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_24) {
  P z_,x_,i_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL2(1,VARREF(YgooSmagYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T2 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T4 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),z_,T5,i_);
UNLINK_STACK();
  QRET(T4);
}

P YgooScolsSvecY___main_0___() {
  P T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101;
  P T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<vec>");
  T2 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T1 = (P)YPpair(VARREF(YLflatG),T2);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSvecYLvecG,T0);
  lit_1 = YPPsym((P)"vec");
  lit_2 = YPPsym((P)"elts");
  T4 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  T3 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSvecYvec,T3);
  lit_3 = YPPsym((P)"vec-len");
  lit_4 = YPPsym((P)"_x");
  T5 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_len_0 = YPmet(FUNCODEREF(fun_vec_len_0),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooScolsSvecYvec_len);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScolsSvecYvec_len);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_vec_len_0;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScolsSvecYvec_len,T6);
  lit_5 = YPPsym((P)"vec-len-setter");
  lit_6 = YPPsym((P)"_z");
  T10 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_len_setter_1 = YPmet(FUNCODEREF(fun_vec_len_setter_1),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsSvecYvec_len_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsSvecYvec_len_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_vec_len_setter_1;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsSvecYvec_len_setter,T11);
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T16 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),VARREF(YgooScolsSvecYvec_len_setter),VARREF(YLintG),T16);
  lit_8 = YPPsym((P)"vec-dat");
  T17 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_dat_3 = YPmet(FUNCODEREF(fun_vec_dat_3),LITREF(lit_8),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScolsSvecYvec_dat);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsSvecYvec_dat);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_vec_dat_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsSvecYvec_dat,T18);
  lit_9 = YPPsym((P)"vec-dat-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_dat_setter_4 = YPmet(FUNCODEREF(fun_vec_dat_setter_4),LITREF(lit_9),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsSvecYvec_dat_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsSvecYvec_dat_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_vec_dat_setter_4;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsSvecYvec_dat_setter,T23);
  T27 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T28 = fun_5;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_dat),VARREF(YgooScolsSvecYvec_dat_setter),VARREF(YLrepG),T28);
  lit_10 = YPPsym((P)"len");
  lit_11 = YPPsym((P)"c");
  T29 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_10),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooStypesYlen);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooStypesYlen);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_len_6;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooStypesYlen,T30);
  lit_12 = YPPsym((P)"elt-or");
  lit_13 = YPPsym((P)"i");
  lit_14 = YPPsym((P)"default");
  T34 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_13),LITREF(lit_14)),YPPlist(3,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPmet(FUNCODEREF(fun_elt_or_7),LITREF(lit_12),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooScolsScolYelt_or);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooScolsScolYelt_or);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_elt_or_7;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooScolsScolYelt_or,T35);
  lit_15 = YPPsym((P)"elt-setter");
  lit_16 = YPPsym((P)"z");
  T39 = YPsig(YPPlist(3,LITREF(lit_16),LITREF(lit_11),LITREF(lit_13)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooScolsScolxYelt_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooScolsScolxYelt_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_elt_setter_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooScolsScolxYelt_setter,T40);
  lit_17 = YPPsym((P)"empty");
  T45 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T44 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,T45),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_17),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooScolsScolYempty);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooScolsScolYempty);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_empty_9;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooScolsScolYempty,T46);
  lit_18 = YPPsym((P)"fab");
  lit_19 = YPPsym((P)"s");
  T51 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T50 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_19)),YPPlist(2,T51,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_18),T50,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooScolsScolYfab);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooScolsScolYfab);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_fab_10;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooScolsScolYfab,T52);
  lit_20 = YPPsym((P)"cat!");
  lit_21 = YPPsym((P)"more");
  lit_22 = YPPsym((P)"x-1298");
  lit_23 = YPPsym((P)"x-1297");
  lit_24 = YPPsym((P)"x-1300");
  lit_25 = YPPsym((P)"x-1299");
  T58 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_11 = YPmet(FUNCODEREF(fun_x_1300_11),LITREF(lit_24),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1298_12 = YPmet(FUNCODEREF(fun_x_1298_12),LITREF(lit_22),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPtrue,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_catX_13 = YPmet(FUNCODEREF(fun_catX_13),LITREF(lit_20),T56,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScolsSseqxYcatX);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_catX_13;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsSseqxYcatX,T59);
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_vec_14 = YPmet(FUNCODEREF(fun_vec_14),LITREF(lit_1),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooScolsSvecYvec);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsSvecYvec);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_vec_14;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsSvecYvec,T64);
  lit_26 = YPPsym((P)"push!");
  T68 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_7)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_pushX_15 = YPmet(FUNCODEREF(fun_pushX_15),LITREF(lit_26),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YgooScolsSseqxYpushX);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_pushX_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScolsSseqxYpushX,T69);
  lit_27 = YPPsym((P)"pop!");
  T73 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_popX_16 = YPmet(FUNCODEREF(fun_popX_16),LITREF(lit_27),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YgooScolsSseqxYpopX);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_popX_16;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YgooScolsSseqxYpopX,T74);
  lit_28 = YPPsym((P)"to-str");
  lit_29 = YPsb((P)"#[");
  lit_30 = YPsb((P)"]");
  T78 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_17 = YPmet(FUNCODEREF(fun_to_str_17),LITREF(lit_28),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YgooSmathYto_str);
  if (T81 != YPfalse) {
    T80 = VARREF(YgooSmathYto_str);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_to_str_17;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YgooSmathYto_str,T79);
  lit_31 = YPPsym((P)"add!");
  T83 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_7)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_addX_18 = YPmet(FUNCODEREF(fun_addX_18),LITREF(lit_31),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YgooScolsScolxYaddX);
  if (T86 != YPfalse) {
    T85 = VARREF(YgooScolsScolxYaddX);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_addX_18;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YgooScolsScolxYaddX,T84);
  lit_32 = YPPsym((P)"len/fill-setter");
  lit_33 = YPPsym((P)"new-len");
  lit_34 = YPPsym((P)"fill");
  T89 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_19 = YPmet(FUNCODEREF(fun_fill_19),LITREF(lit_34),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_11),LITREF(lit_14)),YPPlist(3,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_20 = YPmet(FUNCODEREF(fun_lenSfill_setter_20),LITREF(lit_32),T88,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YgooScolsScolxYlenSfill_setter);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooScolsScolxYlenSfill_setter);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_lenSfill_setter_20;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooScolsScolxYlenSfill_setter,T90);
  lit_35 = YPPsym((P)"len-setter");
  T94 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_11)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_21 = YPmet(FUNCODEREF(fun_len_setter_21),LITREF(lit_35),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooScolsScolxYlen_setter);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooScolsScolxYlen_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_len_setter_21;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooScolsScolxYlen_setter,T95);
  lit_36 = YPPsym((P)"zap!");
  T99 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_zapX_22 = YPmet(FUNCODEREF(fun_zapX_22),LITREF(lit_36),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooScolsScolxYzapX);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooScolsScolxYzapX);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_zapX_22;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooScolsScolxYzapX,T100);
  lit_37 = YPPsym((P)"low-elt");
  T104 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_13)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_23 = YPmet(FUNCODEREF(fun_low_elt_23),LITREF(lit_37),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YgooScolsScolYlow_elt);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_low_elt_23;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooScolsScolYlow_elt,T105);
  lit_38 = YPPsym((P)"low-elt-setter");
  T111 = YPsig(YPPlist(3,LITREF(lit_16),LITREF(lit_7),LITREF(lit_13)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T110 = fun_low_elt_setter_24 = YPmet(FUNCODEREF(fun_low_elt_setter_24),LITREF(lit_38),T111,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YgooScolsScolxYlow_elt_setter);
  if (T115 != YPfalse) {
    T114 = VARREF(YgooScolsScolxYlow_elt_setter);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_low_elt_setter_24;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  T112 = VARSET(YgooScolsScolxYlow_elt_setter,T113);
  T109 = T112;
  return T109;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSflat},
  {&module_info_gooScolsSrep},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"~=", &module_info_gooSmath, "~="},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {">", &module_info_gooSmag, ">"},
  {"df", &module_info_gooSboot, "df"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"-", &module_info_gooSmath, "-"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<", &module_info_gooSmag, "<"},
  {"not", &module_info_gooSboot, "not"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pow", &module_info_gooSmath, "pow"},
  {"any?", &module_info_gooStypes, "any?"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"log", &module_info_gooSmath, "log"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"when", &module_info_gooSmacros, "when"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"ends-with", &module_info_gooScolsSseq, "ends-with"},
  {"op", &module_info_gooSmacros, "op"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"set", &module_info_gooSboot, "set"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"1-", &module_info_gooSmath, "1-"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"=", &module_info_gooSmath, "="},
  {"export", &module_info_gooSboot, "export"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"1+", &module_info_gooSmath, "1+"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"t=", &module_info_gooStypes, "t="},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"~==", &module_info_gooSmath, "~=="},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"map", &module_info_gooSmacros, "map"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"head", &module_info_gooSboot, "head"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"max", &module_info_gooSmag, "max"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"fin", &module_info_gooSboot, "fin"},
  {"len", &module_info_gooStypes, "len"},
  {"*", &module_info_gooSmath, "*"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%su", &module_info_gooSboot, "%su"},
  {"do", &module_info_gooSmacros, "do"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"tan", &module_info_gooSmath, "tan"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"while", &module_info_gooSmacros, "while"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"now", &module_info_gooScolsScol, "now"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"tup", &module_info_gooSboot, "tup"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"round", &module_info_gooSmath, "round"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%str", &module_info_gooSboot, "%str"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"t<", &module_info_gooStypes, "t<"},
  {"min", &module_info_gooSmag, "min"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"@+", &module_info_gooSboot, "@+"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"mod", &module_info_gooSmath, "mod"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"dm", &module_info_gooSboot, "dm"},
  {"t+", &module_info_gooStypes, "t+"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"ds", &module_info_gooSboot, "ds"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"def", &module_info_gooSboot, "def"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"round/", &module_info_gooSmath, "round/"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {">=", &module_info_gooSmag, ">="},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"match", &module_info_gooSmacros, "match"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"@<", &module_info_gooSboot, "@<"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"isa", &module_info_gooSboot, "isa"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"and", &module_info_gooSmacros, "and"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"error", &module_info_gooSboot, "error"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"abs", &module_info_gooSmath, "abs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<=", &module_info_gooSmag, "<="},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"new", &module_info_gooSboot, "new"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~", &module_info_gooSmath, "~"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"acos", &module_info_gooSmath, "acos"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%put", &module_info_gooSboot, "%put"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"begins-with", &module_info_gooScolsSseq, "begins-with"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"&", &module_info_gooSmath, "&"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"items", &module_info_gooScolsScol, "items"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"as", &module_info_gooStypes, "as"},
  {"^", &module_info_gooSmath, "^"},
  {"atan", &module_info_gooSmath, "atan"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"@len", &module_info_gooSboot, "@len"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"try", &module_info_gooSboot, "try"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dp", &module_info_gooSboot, "dp"},
  {"find", &module_info_gooScolsScol, "find"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"if", &module_info_gooSboot, "if"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"+", &module_info_gooSmath, "+"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"vec-dat", &YgooScolsSvecYvec_dat},
  {"vec-dat-setter", &YgooScolsSvecYvec_dat_setter},
  {"<vec>", &YgooScolsSvecYLvecG},
  {"---main-0---", NULL},
  {"vec-len", &YgooScolsSvecYvec_len},
  {"vec-len-setter", &YgooScolsSvecYvec_len_setter},
  {"vec", &YgooScolsSvecYvec},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<vec>", "<vec>"},
  {"vec", "vec"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSvec;
MODULE_INFO module_info_gooScolsSvec = {
  "goo/cols/vec",
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
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSflat (void);
extern void load_module_gooScolsSrep (void);

/* EXPRESSION: */

extern void load_module_gooScolsSvec (void);

void load_module_gooScolsSvec (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSlst();
  load_module_gooScolsSflat();
  load_module_gooScolsSrep();

  (P)YgooScolsSvecY___main_0___();

}

/* END OF GENERATED CODE. */
