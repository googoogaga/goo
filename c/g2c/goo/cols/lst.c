/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: goo/collections/list */

EXT(Ylst,"runtime/boot","lst");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YgooScollectionsSlistYPkey,"goo/collections/list","%key");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooStypeYanyQ,"goo/type","any?");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
DEF(YgooScollectionsSlistYPdat,"goo/collections/list","%dat");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YgooScollectionsSlistYPkey_setter,"goo/collections/list","%key-setter");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypeY2nd,"goo/type","2nd");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooScollectionsSlistYPdat_setter,"goo/collections/list","%dat-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypeYtQ,"goo/type","t?");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
DEF(YgooScollectionsSlistYLlst_enumG,"goo/collections/list","<lst-enum>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooStypeYlen,"goo/type","len");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynil,"runtime/boot","nil");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooStypeYtL,"goo/type","t<");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooStypeYtE,"goo/type","t=");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooStypeYas,"goo/type","as");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YgooStypeYLproductG,"goo/type","<product>");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypeYtype_elts_setter,"goo/type","type-elts-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooStypeYtT,"goo/type","t*");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooStypeYtA,"goo/type","t+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooStypeYall2Q,"goo/type","all2?");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
DEF(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(Yadd_prop,"runtime/boot","add-prop");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_46);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_4);
DEFLIT(lit_21);
DEFLIT(lit_54);
DEFLIT(lit_7);
DEFLIT(lit_55);
DEFLIT(lit_15);
DEFLIT(lit_20);
DEFLIT(lit_38);
DEFLIT(lit_14);
DEFLIT(lit_43);
DEFLIT(lit_30);
DEFLIT(lit_52);
DEFLIT(lit_40);
DEFLIT(lit_29);
DEFLIT(lit_12);
DEFLIT(lit_37);
DEFLIT(lit_22);
DEFLIT(lit_36);
DEFLIT(lit_56);
DEFLIT(lit_0);
DEFLIT(lit_64);
DEFLIT(lit_24);
DEFLIT(lit_50);
DEFLIT(lit_39);
DEFLIT(lit_25);
DEFLIT(lit_57);
DEFLIT(lit_1);
DEFLIT(lit_53);
DEFLIT(lit_41);
DEFLIT(lit_28);
DEFLIT(lit_18);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_26);
DEFLIT(lit_63);
DEFLIT(lit_19);
DEFLIT(lit_27);
DEFLIT(lit_8);
DEFLIT(lit_11);
DEFLIT(lit_31);
DEFLIT(lit_51);
DEFLIT(lit_62);
DEFLIT(lit_17);
DEFLIT(lit_47);
DEFLIT(lit_9);
DEFLIT(lit_13);
DEFLIT(lit_58);
DEFLIT(lit_65);
DEFLIT(lit_5);
DEFLIT(lit_44);
DEFLIT(lit_42);
DEFLIT(lit_35);
DEFLIT(lit_61);
DEFLIT(lit_45);
DEFLIT(lit_3);
DEFLIT(lit_34);
DEFLIT(lit_59);
DEFLIT(lit_32);
DEFLIT(lit_60);

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
LOCFOR(fun_x_1282_31);
LOCFOR(fun_catX_32);
LOCFOR(fun_lst_33);
LOCFOR(fun_pair_34);
LOCFOR(fun_push_35);
LOCFOR(fun_pop_36);
LOCFOR(fun_to_str_37);
LOCFOR(fun_assq_38);
LOCFOR(fun_assqn_39);
extern P YgooScollectionsSlistY___main_0___ ();
extern P YgooScollectionsSlistY___main_1___ ();

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
  RET(T0);
}

FUNCODEDEF(fun_len_2) {
  P x_;
  P sumF985;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_1,1);
  sumF985 = T1;
  FUNINIT(sumF985, 1,sumF985);
  T2 = CALL2(1,sumF985,YPint((P)0),x_);
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
  RET(T0);
}

FUNCODEDEF(fun_elt_or_4) {
  P x_,key_,default_;
  P fndF986;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_3,3);
  fndF986 = T1;
  FUNINIT(fndF986, 3,default_,key_,fndF986);
  T2 = CALL2(1,fndF986,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
    T2 = CALL0(1,VARREF(YgooScollectionsScollectionYrange_error));
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
  RET(T0);
}

FUNCODEDEF(fun_elt_setter_6) {
  P z_,x_,key_;
  P fndF987;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_5,3);
  fndF987 = T1;
  FUNINIT(fndF987, 3,key_,z_,fndF987);
  T2 = CALL2(1,fndF987,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_emptyQ_7) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(Yobject_class),c_);
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYempty),T2);
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
  T1 = CALL2(1,VARREF(YgooSmagnitudeYG),i_,YPint((P)0));
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
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P t_,s_;
  P fabF988;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_9,2);
  fabF988 = T1;
  FUNINIT(fabF988, 2,fabF988,t_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYempty),t_);
  T2 = CALL2(1,fabF988,s_,T3);
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
  T1 = CALL2(1,VARREF(YgooSmagnitudeYL),index_,YPint((P)0));
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
  RET(T0);
}

FUNCODEDEF(fun_fabs_12) {
  P c_,objects_;
  P buildF989;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_11,3);
  buildF989 = T1;
  FUNINIT(buildF989, 3,buildF989,c_,objects_);
  T4 = CALL1(1,VARREF(YgooStypeYlen),objects_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T5 = CALL1(1,VARREF(YgooScollectionsScollectionYempty),c_);
  T2 = CALL2(1,buildF989,T3,T5);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSlistYPdat));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_setter_14) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSlistYPdat));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pkey_15) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSlistYPkey));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pkey_setter_16) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSlistYPkey));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_17) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPint((P)0));
}

FUNCODEDEF(fun_enum_18) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScollectionsSlistYLlst_enumG),VARREF(YgooScollectionsSlistYPdat),x_);
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
  T1 = CALL1(1,VARREF(YgooScollectionsSlistYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_20) {
  P e_;
  P x_1280F990;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  check_type(e_,VARREF(YLanyG));
  x_1280F990 = e_;
  T2 = CALL1(1,VARREF(YgooScollectionsSlistYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScollectionsSlistYPkey_setter),T1,x_1280F990);
  T4 = CALL1(1,VARREF(YgooScollectionsSlistYPdat),e_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  CALL2(1,VARREF(YgooScollectionsSlistYPdat_setter),T3,x_1280F990);
  T0 = x_1280F990;
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
  T1 = CALL1(1,VARREF(YgooScollectionsSlistYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_setter_22) {
  P v_,e_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSlistYPdat),e_);
  T0 = CALL2(1,VARREF(Yhead_setter),v_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_key_23) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSlistYPkey),e_);
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
  RET(T0);
}

FUNCODEDEF(fun_last_26) {
  P x_;
  P fndF991;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_25,1);
  fndF991 = T1;
  FUNINIT(fndF991, 1,fndF991);
  T2 = CALL2(1,fndF991,x_,x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P l_,r_;
  P tF992;
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
    check_type(T3,VARREF(YLanyG));
    tF992 = T3;
    CALL2(1,VARREF(Ytail_setter),r_,l_);
    a1 = tF992;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_revX_28) {
  P c_;
  P loopF993;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_27,1);
  loopF993 = T1;
  FUNINIT(loopF993, 1,loopF993);
  T4 = CALL1(1,VARREF(Yobject_class),c_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYempty),T4);
  T2 = CALL2(1,loopF993,c_,T3);
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
  RET(T0);
}

FUNCODEDEF(fun_connect_30) {
  P x_,y_;
  P find_tailF994;
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
    find_tailF994 = T3;
    FUNINIT(find_tailF994, 1,find_tailF994);
    T4 = CALL1(1,find_tailF994,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1282_31) {
  P x_1281_;
  P xF995;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1281_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1281_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1281_);
    check_type(T4,VARREF(YLanyG));
    xF995 = T4;
    T6 = BOXVAL(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLlstG),xF995);
    T5 = CALL2(1,FREEREF(1),T6,T7);
    BOXVAL(FREEREF(0)) = T5;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1281_);
    a1 = T9;
    x_1281_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_32) {
  P x_,more_;
  P x_1282F999;
  P curF998;
  P resultF997;
  P connectF996;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_connect_30;
  connectF996 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  check_type(T3,VARREF(YLanyG));
  resultF997 = T3;
  check_type(resultF997,VARREF(YLanyG));
  curF998 = resultF997;
  curF998 = BOXFAB(curF998);
  T7 = BOXVAL(curF998);
  T8 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF996,T7,T8);
  BOXVAL(curF998) = T6;
  T9 = FUNSHELL(1,fun_x_1282_31,3);
  x_1282F999 = T9;
  FUNINIT(x_1282F999, 3,curF998,connectF996,x_1282F999);
  T11 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),more_);
  T10 = CALL1(1,x_1282F999,T11);
  T12 = CALL1(1,VARREF(Ytail),resultF997);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(YLlstG),objects_);
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

FUNCODEDEF(fun_push_35) {
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

FUNCODEDEF(fun_pop_36) {
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
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYvals_to_str),x_);
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
      T7 = CALL2(1,VARREF(YgooScollectionsSlistYassq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
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
      T7 = CALL3(1,VARREF(YgooScollectionsSlistYassqn),x_,T8,pos_);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScollectionsSlistY___main_0___() {
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YgooScollectionsSlistYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPsym((P)"elts");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ylst,T0);
  VARSET(YgooScollectionsSlistYlist,VARREF(Ylst));
  lit_2 = YPPsym((P)"pair");
  lit_3 = YPPsym((P)"x");
  lit_4 = YPPsym((P)"y");
  T3 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYpair,T2);
  lit_5 = YPPsym((P)"push");
  lit_6 = YPPsym((P)"l");
  T5 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSlistYpush,T4);
  lit_7 = YPPsym((P)"pop");
  T7 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSlistYpop,T6);
  lit_8 = YPPsym((P)"assqn");
  lit_9 = YPPsym((P)"pos");
  T9 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_9)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSlistYassqn,T8);
  lit_10 = YPPsym((P)"assq");
  T11 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSlistYassq,T10);
  lit_11 = YPPsym((P)"as");
  lit_12 = YPPsym((P)"p");
  T13 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YLlstG));
  T12 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_3)),YPPlist(2,T13,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooStypeYas);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooStypeYas);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_as_0;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooStypeYas,T14);
  lit_13 = YPPsym((P)"len");
  lit_14 = YPPsym((P)"sum");
  lit_15 = YPPsym((P)"count");
  T19 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sum_1 = YPmet(FUNCODEREF(fun_sum_1),LITREF(lit_14),T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YgooStypeYlen);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooStypeYlen);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_len_2;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooStypeYlen,T20);
  lit_16 = YPPsym((P)"elt-or");
  lit_17 = YPPsym((P)"key");
  lit_18 = YPPsym((P)"default");
  lit_19 = YPPsym((P)"fnd");
  T25 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_3 = YPmet(FUNCODEREF(fun_fnd_3),LITREF(lit_19),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_17),LITREF(lit_18)),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_4 = YPmet(FUNCODEREF(fun_elt_or_4),LITREF(lit_16),T24,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YgooScollectionsScollectionYelt_or);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooScollectionsScollectionYelt_or);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_elt_or_4;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooScollectionsScollectionYelt_or,T26);
  lit_20 = YPPsym((P)"elt-setter");
  lit_21 = YPPsym((P)"z");
  T31 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_5 = YPmet(FUNCODEREF(fun_fnd_5),LITREF(lit_19),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_3),LITREF(lit_17)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_6 = YPmet(FUNCODEREF(fun_elt_setter_6),LITREF(lit_20),T30,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YgooScollectionsScollectionYelt_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooScollectionsScollectionYelt_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_elt_setter_6;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooScollectionsScollectionYelt_setter,T32);
  lit_22 = YPPsym((P)"empty?");
  lit_23 = YPPsym((P)"c");
  T36 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_7 = YPmet(FUNCODEREF(fun_emptyQ_7),LITREF(lit_22),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YgooSmacrosYemptyQ);
  if (T39 != YPfalse) {
    T38 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_emptyQ_7;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YgooSmacrosYemptyQ,T37);
  lit_24 = YPPsym((P)"empty");
  T42 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YLlstG));
  T41 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,T42),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_8 = YPmet(FUNCODEREF(fun_empty_8),LITREF(lit_24),T41,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooScollectionsScollectionYempty);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooScollectionsScollectionYempty);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_empty_8;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooScollectionsScollectionYempty,T43);
  lit_25 = YPPsym((P)"fab");
  lit_26 = YPPsym((P)"t");
  lit_27 = YPPsym((P)"s");
  lit_28 = YPPsym((P)"i");
  lit_29 = YPPsym((P)"res");
  T49 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_29)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_9 = YPmet(FUNCODEREF(fun_fab_9),LITREF(lit_25),T49,ENVNUL,PNUL,YPfalse);
  T48 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YLlstG));
  T47 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_27)),YPPlist(2,T48,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_25),T47,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooScollectionsScollectionYfab);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooScollectionsScollectionYfab);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_fab_10;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooScollectionsScollectionYfab,T50);
  lit_30 = YPPsym((P)"fabs");
  lit_31 = YPPsym((P)"objects");
  lit_32 = YPPsym((P)"build");
  lit_33 = YPPsym((P)"index");
  lit_34 = YPPsym((P)"result");
  T56 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_build_11 = YPmet(FUNCODEREF(fun_build_11),LITREF(lit_32),T56,ENVNUL,PNUL,YPfalse);
  T55 = CALL1(1,VARREF(YgooStypeYtL),VARREF(YLlstG));
  T54 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_31)),YPPlist(1,T55),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fabs_12 = YPmet(FUNCODEREF(fun_fabs_12),LITREF(lit_30),T54,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooSmathYfabs);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSmathYfabs);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_fabs_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSmathYfabs,T57);
  lit_35 = YPPsym((P)"<lst-enum>");
  T62 = (P)YPpair(VARREF(YgooScollectionsScollectionYLenumG),Ynil);
  T61 = CALL2(1,VARREF(Yfab_class),LITREF(lit_35),T62);
  VARSET(YgooScollectionsSlistYLlst_enumG,T61);
  lit_36 = YPPsym((P)"%dat");
  lit_37 = YPPsym((P)"_x");
  T63 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_13 = YPmet(FUNCODEREF(fun_Pdat_13),LITREF(lit_36),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooScollectionsSlistYPdat);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScollectionsSlistYPdat);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_Pdat_13;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScollectionsSlistYPdat,T64);
  lit_38 = YPPsym((P)"%dat-setter");
  lit_39 = YPPsym((P)"_z");
  T68 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_37)),YPPlist(2,VARREF(YLlstG),VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_14 = YPmet(FUNCODEREF(fun_Pdat_setter_14),LITREF(lit_38),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YgooScollectionsSlistYPdat_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScollectionsSlistYPdat_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_Pdat_setter_14;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScollectionsSlistYPdat_setter,T69);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSlistYLlst_enumG),VARREF(YgooScollectionsSlistYPdat),VARREF(YgooScollectionsSlistYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_40 = YPPsym((P)"%key");
  T73 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_15 = YPmet(FUNCODEREF(fun_Pkey_15),LITREF(lit_40),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YgooScollectionsSlistYPkey);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooScollectionsSlistYPkey);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_Pkey_15;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YgooScollectionsSlistYPkey,T74);
  lit_41 = YPPsym((P)"%key-setter");
  T78 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_37)),YPPlist(2,VARREF(YLintG),VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_16 = YPmet(FUNCODEREF(fun_Pkey_setter_16),LITREF(lit_41),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YgooScollectionsSlistYPkey_setter);
  if (T81 != YPfalse) {
    T80 = VARREF(YgooScollectionsSlistYPkey_setter);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_Pkey_setter_16;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YgooScollectionsSlistYPkey_setter,T79);
  T83 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T84 = fun_17;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSlistYLlst_enumG),VARREF(YgooScollectionsSlistYPkey),VARREF(YgooScollectionsSlistYPkey_setter),VARREF(YLintG),T84);
  lit_42 = YPPsym((P)"enum");
  T85 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsSlistYLlst_enumG),Ynil);
  fun_enum_18 = YPmet(FUNCODEREF(fun_enum_18),LITREF(lit_42),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScollectionsScollectionYenum);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScollectionsScollectionYenum);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_enum_18;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScollectionsScollectionYenum,T86);
  lit_43 = YPPsym((P)"fin?");
  lit_44 = YPPsym((P)"e");
  T90 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_19 = YPmet(FUNCODEREF(fun_finQ_19),LITREF(lit_43),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScollectionsScollectionYfinQ);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScollectionsScollectionYfinQ);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_finQ_19;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScollectionsScollectionYfinQ,T91);
  lit_45 = YPPsym((P)"nxt");
  T95 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsSlistYLlst_enumG),Ynil);
  fun_nxt_20 = YPmet(FUNCODEREF(fun_nxt_20),LITREF(lit_45),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooScollectionsScollectionYnxt);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScollectionsScollectionYnxt);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_nxt_20;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScollectionsScollectionYnxt,T96);
  lit_46 = YPPsym((P)"now");
  T100 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_21 = YPmet(FUNCODEREF(fun_now_21),LITREF(lit_46),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YgooScollectionsScollectionYnow);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScollectionsScollectionYnow);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_now_21;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScollectionsScollectionYnow,T101);
  lit_47 = YPPsym((P)"now-setter");
  lit_48 = YPPsym((P)"v");
  T105 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_22 = YPmet(FUNCODEREF(fun_now_setter_22),LITREF(lit_47),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YgooScollectionsScollectionYnow_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScollectionsScollectionYnow_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_now_setter_22;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScollectionsScollectionYnow_setter,T106);
  lit_49 = YPPsym((P)"now-key");
  T110 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsSlistYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_23 = YPmet(FUNCODEREF(fun_now_key_23),LITREF(lit_49),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YgooScollectionsScollectionYnow_key);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooScollectionsScollectionYnow_key);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_now_key_23;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooScollectionsScollectionYnow_key,T111);
  lit_50 = YPPsym((P)"add");
  T115 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_24 = YPmet(FUNCODEREF(fun_add_24),LITREF(lit_50),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YgooScollectionsScollectionYadd);
  if (T118 != YPfalse) {
    T117 = VARREF(YgooScollectionsScollectionYadd);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_add_24;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YgooScollectionsScollectionYadd,T116);
  lit_51 = YPPsym((P)"last");
  lit_52 = YPPsym((P)"px");
  T121 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_25 = YPmet(FUNCODEREF(fun_fnd_25),LITREF(lit_19),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_26 = YPmet(FUNCODEREF(fun_last_26),LITREF(lit_51),T120,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooScollectionsSsequenceYlast);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooScollectionsSsequenceYlast);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_last_26;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooScollectionsSsequenceYlast,T122);
  lit_53 = YPPsym((P)"rev!");
  lit_54 = YPPsym((P)"loop");
  lit_55 = YPPsym((P)"r");
  T127 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_55)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_54),T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_28 = YPmet(FUNCODEREF(fun_revX_28),LITREF(lit_53),T126,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YgooSmacrosYrevX);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooSmacrosYrevX);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_revX_28;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooSmacrosYrevX,T128);
  lit_56 = YPPsym((P)"cat!");
  lit_57 = YPPsym((P)"more");
  lit_58 = YPPsym((P)"connect");
  lit_59 = YPPsym((P)"find-tail");
  lit_60 = YPPsym((P)"x-1282");
  lit_61 = YPPsym((P)"x-1281");
  T135 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_tail_29 = YPmet(FUNCODEREF(fun_find_tail_29),LITREF(lit_59),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_30 = YPmet(FUNCODEREF(fun_connect_30),LITREF(lit_58),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1282_31 = YPmet(FUNCODEREF(fun_x_1282_31),LITREF(lit_60),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_57)),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_32 = YPmet(FUNCODEREF(fun_catX_32),LITREF(lit_56),T132,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YgooScollectionsSsequenceYcatX);
  if (T138 != YPfalse) {
    T137 = VARREF(YgooScollectionsSsequenceYcatX);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_catX_32;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YgooScollectionsSsequenceYcatX,T136);
  T140 = YPsig(YPPlist(1,LITREF(lit_31)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_lst_33 = YPmet(FUNCODEREF(fun_lst_33),LITREF(lit_0),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Ylst);
  if (T143 != YPfalse) {
    T142 = VARREF(Ylst);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_lst_33;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Ylst,T141);
  lit_62 = YPPsym((P)"h");
  T145 = YPsig(YPPlist(2,LITREF(lit_62),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pair_34 = YPmet(FUNCODEREF(fun_pair_34),LITREF(lit_2),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YgooSmacrosYpair);
  if (T148 != YPfalse) {
    T147 = VARREF(YgooSmacrosYpair);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_pair_34;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YgooSmacrosYpair,T146);
  T150 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_push_35 = YPmet(FUNCODEREF(fun_push_35),LITREF(lit_5),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YgooScollectionsSlistYpush);
  if (T153 != YPfalse) {
    T152 = VARREF(YgooScollectionsSlistYpush);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_push_35;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YgooScollectionsSlistYpush,T151);
  T155 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_pop_36 = YPmet(FUNCODEREF(fun_pop_36),LITREF(lit_7),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YgooScollectionsSlistYpop);
  if (T158 != YPfalse) {
    T157 = VARREF(YgooScollectionsSlistYpop);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_pop_36;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YgooScollectionsSlistYpop,T156);
  lit_63 = YPPsym((P)"to-str");
  lit_64 = YPsb((P)"(");
  lit_65 = YPsb((P)")");
  T162 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T161 = fun_to_str_37 = YPmet(FUNCODEREF(fun_to_str_37),LITREF(lit_63),T162,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YgooSmathYto_str);
  if (T166 != YPfalse) {
    T165 = VARREF(YgooSmathYto_str);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_to_str_37;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  T163 = VARSET(YgooSmathYto_str,T164);
  T160 = T163;
  return T160;
}

P YgooScollectionsSlistY___main_1___() {
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_38 = YPmet(FUNCODEREF(fun_assq_38),LITREF(lit_10),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooScollectionsSlistYassq);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooScollectionsSlistYassq);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_assq_38;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooScollectionsSlistYassq,T1);
  T7 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_9)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T6 = fun_assqn_39 = YPmet(FUNCODEREF(fun_assqn_39),LITREF(lit_8),T7,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooScollectionsSlistYassqn);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooScollectionsSlistYassqn);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_assqn_39;
  T9 = CALL2(1,VARREF(YPdefine_method),T10,T12);
  T8 = VARSET(YgooScollectionsSlistYassqn,T9);
  T5 = T8;
  return T5;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStype;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStype},
  {&module_info_gooSmath},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSsequence},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"df", &module_info_runtimeSboot, "df"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan", &module_info_gooSmath, "atan"},
  {"rem", &module_info_gooSmath, "rem"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"log", &module_info_gooSmath, "log"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"any?", &module_info_gooStype, "any?"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"try", &module_info_runtimeSboot, "try"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"<<", &module_info_gooSmath, "<<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"2nd", &module_info_gooStype, "2nd"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"round", &module_info_gooSmath, "round"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"/", &module_info_gooSmath, "/"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"t?", &module_info_gooStype, "t?"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"len", &module_info_gooStype, "len"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"t<", &module_info_gooStype, "t<"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"or", &module_info_gooSmacros, "or"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"t=", &module_info_gooStype, "t="},
  {"and", &module_info_gooSmacros, "and"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"as", &module_info_gooStype, "as"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"for", &module_info_gooSmacros, "for"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"+", &module_info_gooSmath, "+"},
  {"def", &module_info_runtimeSboot, "def"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"&", &module_info_gooSmath, "&"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"neg", &module_info_gooSmath, "neg"},
  {"=", &module_info_gooSmath, "="},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"~=", &module_info_gooSmath, "~="},
  {"==", &module_info_gooSmacros, "=="},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"*", &module_info_gooSmath, "*"},
  {"~", &module_info_gooSmath, "~"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {">>", &module_info_gooSmath, ">>"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"<product>", &module_info_gooStype, "<product>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"case", &module_info_gooSmacros, "case"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"type-elts-setter", &module_info_gooStype, "type-elts-setter"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"t*", &module_info_gooStype, "t*"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"^", &module_info_gooSmath, "^"},
  {"round/", &module_info_gooSmath, "round/"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"map", &module_info_gooSmacros, "map"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"-", &module_info_gooSmath, "-"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"t+", &module_info_gooStype, "t+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"|", &module_info_gooSmath, "|"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"do", &module_info_gooSmacros, "do"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"when", &module_info_gooSmacros, "when"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"all2?", &module_info_gooStype, "all2?"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%key", &YgooScollectionsSlistYPkey},
  {"---main-1---", NULL},
  {"push", &YgooScollectionsSlistYpush},
  {"%dat", &YgooScollectionsSlistYPdat},
  {"%key-setter", &YgooScollectionsSlistYPkey_setter},
  {"%dat-setter", &YgooScollectionsSlistYPdat_setter},
  {"<lst-enum>", &YgooScollectionsSlistYLlst_enumG},
  {"<list>", &YgooScollectionsSlistYLlistG},
  {"assq", &YgooScollectionsSlistYassq},
  {"---main-0---", NULL},
  {"pop", &YgooScollectionsSlistYpop},
  {"list", &YgooScollectionsSlistYlist},
  {"assqn", &YgooScollectionsSlistYassqn},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"lst", "lst"},
  {"head-setter", "head-setter"},
  {"push", "push"},
  {"head", "head"},
  {"nil", "nil"},
  {"<lst>", "<lst>"},
  {"tail-setter", "tail-setter"},
  {"tail", "tail"},
  {"<list>", "<list>"},
  {"assq", "assq"},
  {"pop", "pop"},
  {"pair", "pair"},
  {"list", "list"},
  {"assqn", "assqn"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsSlist;
MODULE_INFO module_info_gooScollectionsSlist = {
  "goo/collections/list",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStype (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSsequence (void);

/* EXPRESSION: */

extern void load_module_gooScollectionsSlist (void);

void load_module_gooScollectionsSlist (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStype();
  load_module_gooSmath();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();

  (P)YgooScollectionsSlistY___main_0___();
  (P)YgooScollectionsSlistY___main_1___();

}

/* END OF GENERATED CODE. */
