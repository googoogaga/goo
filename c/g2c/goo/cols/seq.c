/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: goo/collections/sequence */

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
DEF(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"runtime/boot","head");
DEF(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
DEF(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
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
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
DEF(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
DEF(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypeY2nd,"goo/type","2nd");
DEF(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYS,"goo/math","/");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
DEF(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypeYtQ,"goo/type","t?");
DEF(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
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
DEF(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
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
DEF(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
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
DEF(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooStypeYanyQ,"goo/type","any?");
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
DEF(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
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
DEF(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
DEF(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPsnul,"runtime/boot","%snul");
DEF(YgooScollectionsSsequenceYalter,"goo/collections/sequence","alter");
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
DEF(YgooScollectionsSsequenceYadd_new,"goo/collections/sequence","add-new");
DEF(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
DEF(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
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
DEF(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
DEF(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
DEF(YgooScollectionsSsequenceYOtQ,"goo/collections/sequence","@t?");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooStypeYall2Q,"goo/type","all2?");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
DEF(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
DEF(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(Yadd_prop,"runtime/boot","add-prop");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_58);
DEFLIT(lit_57);
DEFLIT(lit_69);
DEFLIT(lit_40);
DEFLIT(lit_15);
DEFLIT(lit_50);
DEFLIT(lit_8);
DEFLIT(lit_67);
DEFLIT(lit_49);
DEFLIT(lit_23);
DEFLIT(lit_43);
DEFLIT(lit_65);
DEFLIT(lit_5);
DEFLIT(lit_66);
DEFLIT(lit_39);
DEFLIT(lit_25);
DEFLIT(lit_26);
DEFLIT(lit_44);
DEFLIT(lit_52);
DEFLIT(lit_62);
DEFLIT(lit_48);
DEFLIT(lit_14);
DEFLIT(lit_36);
DEFLIT(lit_53);
DEFLIT(lit_64);
DEFLIT(lit_7);
DEFLIT(lit_13);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_16);
DEFLIT(lit_63);
DEFLIT(lit_45);
DEFLIT(lit_29);
DEFLIT(lit_12);
DEFLIT(lit_38);
DEFLIT(lit_10);
DEFLIT(lit_11);
DEFLIT(lit_34);
DEFLIT(lit_56);
DEFLIT(lit_71);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_22);
DEFLIT(lit_2);
DEFLIT(lit_32);
DEFLIT(lit_37);
DEFLIT(lit_27);
DEFLIT(lit_9);
DEFLIT(lit_3);
DEFLIT(lit_41);
DEFLIT(lit_31);
DEFLIT(lit_30);
DEFLIT(lit_35);
DEFLIT(lit_54);
DEFLIT(lit_4);
DEFLIT(lit_24);
DEFLIT(lit_68);
DEFLIT(lit_59);
DEFLIT(lit_20);
DEFLIT(lit_17);
DEFLIT(lit_0);
DEFLIT(lit_60);
DEFLIT(lit_72);
DEFLIT(lit_61);
DEFLIT(lit_47);
DEFLIT(lit_42);
DEFLIT(lit_46);
DEFLIT(lit_21);
DEFLIT(lit_51);
DEFLIT(lit_55);
DEFLIT(lit_1);
DEFLIT(lit_33);
DEFLIT(lit_70);

/* FUNCTIONS: */

FUNFOR(YgooScollectionsSsequenceYOtQ);
LOCFOR(fun_as_1);
LOCFOR(fun_key_type_2);
LOCFOR(fun_in_3);
LOCFOR(fun_into_4);
LOCFOR(fun_1st_5);
LOCFOR(fun_2nd_6);
LOCFOR(fun_3rd_7);
LOCFOR(fun_last_8);
LOCFOR(fun_9);
LOCFOR(fun_pos_10);
LOCFOR(fun_inner_11);
LOCFOR(fun_outer_12);
LOCFOR(fun_finds_13);
LOCFOR(fun_con_14);
LOCFOR(fun_rev_15);
LOCFOR(fun_cat_16);
LOCFOR(fun_catX_17);
LOCFOR(fun_con_y_18);
LOCFOR(fun_con_x_19);
LOCFOR(fun_cat2_20);
LOCFOR(fun_con_x_21);
LOCFOR(fun_sub_22);
LOCFOR(fun_in_23);
LOCFOR(fun_find_24);
LOCFOR(fun_onto_25);
LOCFOR(fun_skip_26);
LOCFOR(fun_insert_27);
LOCFOR(fun_copy_28);
LOCFOR(fun_sub_setter_29);
LOCFOR(fun_con_30);
LOCFOR(fun_pick_31);
LOCFOR(fun_32);
LOCFOR(fun_reject_33);
LOCFOR(fun_34);
LOCFOR(fun_del_vals_35);
LOCFOR(fun_36);
LOCFOR(fun_del_dups_37);
LOCFOR(fun_copy_38);
LOCFOR(fun_ins_39);
LOCFOR(fun_insX_40);
LOCFOR(fun_keys_41);
FUNFOR(YgooScollectionsSsequenceYrange_check);
FUNFOR(YgooScollectionsSsequenceYrange_checkQ);
LOCFOR(fun_add_new_44);
LOCFOR(fun_in_45);
LOCFOR(fun_alter_46);
LOCFOR(fun_47);
LOCFOR(fun_vals_to_str_48);
LOCFOR(fun_rep_49);
LOCFOR(fun_do_key_vals_50);
extern P YgooScollectionsSsequenceY___main_0___ ();
extern P YgooScollectionsSsequenceY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScollectionsSsequenceYOtQ) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse);
  T1 = CALL2(1,VARREF(YOlst),x_,T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Ytype_elts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_1) {
  P d_,s_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypeYlen),s_);
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),d_,T2);
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYinto),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_key_type_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_in_3) {
  P ed_,es_;
  P tmpF951;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ed_, 0);
  ARG(es_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),es_);
  check_type(T2,VARREF(YLanyG));
  tmpF951 = T2;
  if (tmpF951 != YPfalse) {
    T3 = tmpF951;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ed_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),es_);
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),T5,ed_);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ed_);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),es_);
    a1 = T7;
    a2 = T8;
    ed_ = a1;
    es_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_4) {
  P dst_,src_;
  P inF952;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_3,2);
  inF952 = T1;
  FUNINIT(inF952, 2,dst_,inF952);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),dst_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),src_);
  T2 = CALL2(1,inF952,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1st_5) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_2nd_6) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_3rd_7) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_last_8) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypeYlen),x_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_9) {
  P a_;
  P T0;
  P a1;
LINK_STACK();
  ARG(a_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),a_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pos_10) {
  P x_,v_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
loop:
  T1 = FUNFAB(fun_9,1,v_);
  T0 = CALL3(1,VARREF(YgooScollectionsScollectionYfind_or),T1,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_11) {
  P xi_,yi_;
  P tmpF953;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(xi_, 0);
  ARG(yi_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypeYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagnitudeYL),xi_,T3);
  check_type(T2,VARREF(YLanyG));
  tmpF953 = T2;
  if (tmpF953 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypeYlen),FREEREF(1));
    T5 = CALL2(1,VARREF(YgooSmagnitudeYL),yi_,T6);
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
      T15 = CALL2(1,VARREF(YgooSmathYA),FREEREF(4),YPint((P)1));
      T14 = CALL1(1,FREEREF(3),T15);
      T7 = T14;
    }
    T0 = T7;
  } else {
    T0 = FREEREF(4);
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_outer_12) {
  P xsi_;
  P innerF954;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(xsi_, 0);
loop:
  T4 = CALL1(1,VARREF(YgooStypeYlen),FREEREF(0));
  T5 = CALL1(1,VARREF(YgooStypeYlen),FREEREF(1));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,T5);
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagnitudeYL),xsi_,T2);
  if (T1 != YPfalse) {
    T7 = FUNSHELL(1,fun_inner_11,5);
    innerF954 = T7;
    FUNINIT(innerF954, 5,FREEREF(0),FREEREF(1),innerF954,FREEREF(2),xsi_);
    T8 = CALL2(1,innerF954,xsi_,YPint((P)0));
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finds_13) {
  P x_,y_;
  P outerF955;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_outer_12,3);
  outerF955 = T1;
  FUNINIT(outerF955, 3,x_,y_,outerF955);
  T2 = CALL1(1,outerF955,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_14) {
  P seq_,e_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T4 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),seq_,T5);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
    a1 = T4;
    a2 = T6;
    seq_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rev_15) {
  P x_;
  P conF956;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_14,2);
  conF956 = T1;
  FUNINIT(conF956, 2,x_,conF956);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T2 = CALL2(1,conF956,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat_16) {
  P x_,ss_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScollectionsScollectionYfold),VARREF(YgooScollectionsSsequenceYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_17) {
  P x_,more_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmacrosYcat),YPfalse,x_,more_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_y_18) {
  P seq_,ey_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(ey_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ey_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ey_);
    T5 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),seq_,T6);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ey_);
    a1 = T5;
    a2 = T7;
    seq_ = a1;
    ey_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_x_19) {
  P seq_,ex_;
  P con_yF957;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(ex_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ex_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_con_y_18,2);
    con_yF957 = T3;
    FUNINIT(con_yF957, 2,FREEREF(0),con_yF957);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),FREEREF(1));
    T4 = CALL2(1,con_yF957,seq_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ex_);
    T7 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),seq_,T8);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ex_);
    a1 = T7;
    a2 = T9;
    seq_ = a1;
    ex_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat2_20) {
  P x_,y_;
  P con_xF958;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_x_19,3);
  con_xF958 = T1;
  FUNINIT(con_xF958, 3,x_,y_,con_xF958);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T2 = CALL2(1,con_xF958,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_x_21) {
  P seq_,i_,e_;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(seq_, 0);
  ARG(i_, 1);
  ARG(e_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmagnitudeYGE),i_,FREEREF(2));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSmagnitudeYL),i_,FREEREF(3));
      T6 = T8;
    } else {
      T6 = YPfalse;
    }
    if (T6 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
      T9 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),seq_,T10);
      T5 = T9;
    } else {
      T5 = seq_;
    }
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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
  RET(T0);
}

FUNCODEDEF(fun_sub_22) {
  P x_,from_,below_;
  P con_xF959;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_x_21,4);
  con_xF959 = T1;
  FUNINIT(con_xF959, 4,x_,con_xF959,from_,below_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T2 = CALL3(1,con_xF959,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_23) {
  P d_,s_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),s_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),s_);
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),T2,d_);
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),d_);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),s_);
    a1 = T4;
    a2 = T5;
    d_ = a1;
    s_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_24) {
  P d_,i_;
  P inF960;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_in_23,2);
    inF960 = T3;
    FUNINIT(inF960, 2,FREEREF(1),inF960);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),FREEREF(2));
    T4 = CALL2(1,inF960,d_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),d_);
    T8 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    d_ = a1;
    i_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_onto_25) {
  P nd_,d_,i_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(nd_, 0);
  ARG(d_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),d_);
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),T2,nd_);
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),nd_);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),d_);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    a3 = T6;
    nd_ = a1;
    d_ = a2;
    i_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_skip_26) {
  P d_,i_;
  P ontoF961;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_onto_25,3);
    ontoF961 = T3;
    FUNINIT(ontoF961, 3,FREEREF(1),FREEREF(2),ontoF961);
    T4 = CALL3(1,ontoF961,FREEREF(3),d_,FREEREF(0));
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),d_);
    T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    d_ = a1;
    i_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_27) {
  P nd_,s_;
  P skipF962;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(nd_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),s_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_skip_26,5);
    skipF962 = T3;
    FUNINIT(skipF962, 5,FREEREF(0),FREEREF(1),FREEREF(2),nd_,skipF962);
    T4 = CALL2(1,skipF962,FREEREF(3),FREEREF(4));
    T2 = T4;
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),s_);
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),T5,nd_);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),nd_);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),s_);
    a1 = T7;
    a2 = T8;
    nd_ = a1;
    s_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_28) {
  P nd_,d_,i_;
  P insertF963;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(nd_, 0);
  ARG(d_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_insert_27,6);
    insertF963 = T3;
    FUNINIT(insertF963, 6,FREEREF(1),FREEREF(2),FREEREF(3),d_,FREEREF(0),insertF963);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),FREEREF(4));
    T4 = CALL2(1,insertF963,nd_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),d_);
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),T6,nd_);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),nd_);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),d_);
    T10 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    a3 = T10;
    nd_ = a1;
    d_ = a2;
    i_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_setter_29) {
  P src_,dst_,from_,below_;
  P copyF970;
  P ndstF969;
  P new_lenF968;
  P findF967;
  P del_lenF966;
  P src_lenF965;
  P dst_lenF964;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypeYlen),dst_);
  check_type(T1,VARREF(YLintG));
  dst_lenF964 = T1;
  T3 = CALL1(1,VARREF(YgooStypeYlen),src_);
  check_type(T3,VARREF(YLintG));
  src_lenF965 = T3;
  T5 = CALL2(1,VARREF(YgooSmathY_),below_,from_);
  check_type(T5,VARREF(YLintG));
  del_lenF966 = T5;
  T7 = CALL2(1,VARREF(YgooSmathYE),del_lenF966,src_lenF965);
  if (T7 != YPfalse) {
    T9 = FUNSHELL(1,fun_find_24,4);
    findF967 = T9;
    FUNINIT(findF967, 4,from_,dst_,src_,findF967);
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),dst_);
    T10 = CALL2(1,findF967,T11,YPint((P)0));
    T8 = T10;
    T6 = T8;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathY_),dst_lenF964,del_lenF966);
    T13 = CALL2(1,VARREF(YgooSmathYA),T14,src_lenF965);
    check_type(T13,VARREF(YLanyG));
    new_lenF968 = T13;
    T17 = CALL1(1,VARREF(Yobject_class),dst_);
    T16 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),T17,new_lenF968);
    check_type(T16,VARREF(YLanyG));
    ndstF969 = T16;
    T19 = FUNSHELL(1,fun_copy_28,6);
    copyF970 = T19;
    FUNINIT(copyF970, 6,from_,below_,dst_lenF964,ndstF969,src_,copyF970);
    T21 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),ndstF969);
    T22 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),dst_);
    T20 = CALL3(1,copyF970,T21,T22,YPint((P)0));
    T18 = T20;
    T15 = T18;
    T12 = T15;
    T6 = T12;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_30) {
  P seq_,e_;
  P vF971;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    check_type(T4,VARREF(YLanyG));
    vF971 = T4;
    T7 = CALL1(1,FREEREF(2),vF971);
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),seq_,vF971);
      T6 = T8;
    } else {
      T6 = seq_;
    }
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
    a1 = T6;
    a2 = T9;
    seq_ = a1;
    e_ = a2;
    goto loop;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pick_31) {
  P test_,x_;
  P conF972;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_30,3);
  conF972 = T1;
  FUNINIT(conF972, 3,x_,conF972,test_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T2 = CALL2(1,conF972,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_32) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,FREEREF(0),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_reject_33) {
  P test_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_32,1,test_);
  T0 = CALL2(1,VARREF(YgooScollectionsSsequenceYpick),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_34) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_vals_35) {
  P s_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_34,1,x_);
  T0 = CALL2(1,VARREF(YgooScollectionsSsequenceYreject),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_36) {
  P s_,e_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_dups_37) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = fun_36;
  T2 = CALL3(1,VARREF(YgooScollectionsScollectionYfold),T3,Ynil,x_);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),T2);
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_38) {
  P r_,i_,e_;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(r_, 0);
  ARG(i_, 1);
  ARG(e_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),r_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(1));
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(3),r_);
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
      T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,r_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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
  RET(T0);
}

FUNCODEDEF(fun_ins_39) {
  P x_,v_,before_;
  P copyF973;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
loop:
  T1 = FUNSHELL(1,fun_copy_38,4);
  copyF973 = T1;
  FUNINIT(copyF973, 4,x_,before_,copyF973,v_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T2 = CALL3(1,copyF973,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insX_40) {
  P x_,v_,before_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooScollectionsSsequenceYins),x_,v_,before_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_41) {
  P d_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeYlen),d_);
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceYbelow),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScollectionsSsequenceYrange_check) {
  P x_,i_;
  P tmpF974;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagnitudeYL),i_,YPint((P)0));
  check_type(T2,VARREF(YLanyG));
  tmpF974 = T2;
  if (tmpF974 != YPfalse) {
    T3 = tmpF974;
  } else {
    T5 = CALL1(1,VARREF(YgooStypeYlen),x_);
    T4 = CALL2(1,VARREF(YgooSmagnitudeYGE),i_,T5);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL0(1,VARREF(YgooScollectionsScollectionYrange_error));
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScollectionsSsequenceYrange_checkQ) {
  P x_,i_;
  P tmpF975;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYGE),i_,YPint((P)0));
  check_type(T1,VARREF(YLanyG));
  tmpF975 = T1;
  if (tmpF975 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooStypeYlen),x_);
    T3 = CALL2(1,VARREF(YgooSmagnitudeYL),i_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_new_44) {
  P c_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYmemQ),c_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_in_45) {
  P d_,s_;
  P tmpF976;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),d_);
  check_type(T2,VARREF(YLanyG));
  tmpF976 = T2;
  if (tmpF976 != YPfalse) {
    T3 = tmpF976;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),s_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),s_);
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),T5,d_);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),d_);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),s_);
    a1 = T7;
    a2 = T8;
    d_ = a1;
    s_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_alter_46) {
  P dst_,src_,from_,below_;
  P inF977;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = FUNSHELL(1,fun_in_45,2);
  inF977 = T1;
  FUNINIT(inF977, 2,dst_,inF977);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),dst_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),src_);
  T2 = CALL2(1,inF977,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_47) {
  P s_,e_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_70);
  } else {
    T1 = LITREF(lit_71);
  }
  T3 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_vals_to_str_48) {
  P s_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = fun_47;
  T0 = CALL3(1,VARREF(YgooScollectionsScollectionYfold),T1,LITREF(lit_70),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rep_49) {
  P e_;
  P valF981;
  P tmpF980;
  P nxtsF979;
  P keyF978;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    check_type(T4,VARREF(YLanyG));
    keyF978 = T4;
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
    check_type(T6,VARREF(YLanyG));
    nxtsF979 = T6;
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
    T9 = CALL1(1,VARREF(Ynot),T10);
    check_type(T9,VARREF(YLanyG));
    tmpF980 = T9;
    if (tmpF980 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T8 = T11;
    check_type(T8,VARREF(YLanyG));
    valF981 = T8;
    CALL2(1,FREEREF(0),keyF978,valF981);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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
  RET(T0);
}

FUNCODEDEF(fun_do_key_vals_50) {
  P fn_,key_vals_;
  P repF982;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_rep_49,2);
  repF982 = T1;
  FUNINIT(repF982, 2,fn_,repF982);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),key_vals_);
  T2 = CALL1(1,repF982,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooScollectionsSsequenceY___main_0___() {
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"@t?");
  lit_1 = YPPsym((P)"x");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YLunionG),Ynil);
  YgooScollectionsSsequenceYOtQ = YPmet(FUNCODEREF(YgooScollectionsSsequenceYOtQ),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YgooScollectionsSsequenceYOtQ;
  VARSET(YgooScollectionsSsequenceYOtQ,T1);
  lit_2 = YPPsym((P)"1st");
  T3 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceY1st,T2);
  lit_3 = YPPsym((P)"3rd");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceY3rd,T4);
  lit_4 = YPPsym((P)"last");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYlast,T6);
  lit_5 = YPPsym((P)"pos");
  lit_6 = YPPsym((P)"v");
  T10 = CALL1(1,VARREF(YgooScollectionsSsequenceYOtQ),VARREF(YLintG));
  T9 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_6)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T10,Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYpos,T8);
  lit_7 = YPPsym((P)"finds");
  lit_8 = YPPsym((P)"y");
  T13 = CALL1(1,VARREF(YgooScollectionsSsequenceYOtQ),VARREF(YLintG));
  T12 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T13,Ynil);
  T11 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T12,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYfinds,T11);
  lit_9 = YPPsym((P)"rev");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYrev,T14);
  lit_10 = YPPsym((P)"rev!");
  T17 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYrevX,T16);
  lit_11 = YPPsym((P)"cat");
  lit_12 = YPPsym((P)"more");
  T19 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYcat,T18);
  lit_13 = YPPsym((P)"cat!");
  T21 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYcatX,T20);
  lit_14 = YPPsym((P)"cat2");
  T23 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYcat2,T22);
  lit_15 = YPPsym((P)"sub");
  lit_16 = YPPsym((P)"from");
  lit_17 = YPPsym((P)"below");
  T25 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_16),LITREF(lit_17)),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYsub,T24);
  lit_18 = YPPsym((P)"sub-setter");
  lit_19 = YPPsym((P)"dst");
  lit_20 = YPPsym((P)"src");
  T27 = YPsig(YPPlist(4,LITREF(lit_19),LITREF(lit_20),LITREF(lit_16),LITREF(lit_17)),YPPlist(4,VARREF(YLseqG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYsub_setter,T26);
  lit_21 = YPPsym((P)"ins");
  lit_22 = YPPsym((P)"e");
  lit_23 = YPPsym((P)"before");
  T29 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_22),LITREF(lit_23)),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_21),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYins,T28);
  lit_24 = YPPsym((P)"ins!");
  T31 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_22),LITREF(lit_23)),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYinsX,T30);
  lit_25 = YPPsym((P)"pick");
  lit_26 = YPPsym((P)"test");
  T33 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T32 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_25),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYpick,T32);
  lit_27 = YPPsym((P)"reject");
  T35 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_27),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYreject,T34);
  lit_28 = YPPsym((P)"del-vals");
  T37 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_6)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T36 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_28),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYdel_vals,T36);
  lit_29 = YPPsym((P)"del-dups");
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T38 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_29),T39,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYdel_dups,T38);
  lit_30 = YPPsym((P)"vals-to-str");
  lit_31 = YPPsym((P)"s");
  T41 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T40 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_30),T41,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYvals_to_str,T40);
  lit_32 = YPPsym((P)"do-key-vals");
  lit_33 = YPPsym((P)"fn");
  lit_34 = YPPsym((P)"key-vals");
  T43 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T42 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSsequenceYdo_key_vals,T42);
  lit_35 = YPPsym((P)"as");
  lit_36 = YPPsym((P)"d");
  T45 = CALL1(1,VARREF(YgooStypeYtL),VARREF(YLseqG));
  T44 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_31)),YPPlist(2,T45,VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_as_1 = YPmet(FUNCODEREF(fun_as_1),LITREF(lit_35),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooStypeYas);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooStypeYas);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_as_1;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooStypeYas,T46);
  lit_37 = YPPsym((P)"key-type");
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_2 = YPmet(FUNCODEREF(fun_key_type_2),LITREF(lit_37),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YgooScollectionsScollectionYkey_type);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooScollectionsScollectionYkey_type);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_key_type_2;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooScollectionsScollectionYkey_type,T51);
  lit_38 = YPPsym((P)"into");
  lit_39 = YPPsym((P)"in");
  lit_40 = YPPsym((P)"ed");
  lit_41 = YPPsym((P)"es");
  T56 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_3 = YPmet(FUNCODEREF(fun_in_3),LITREF(lit_39),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_20)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_into_4 = YPmet(FUNCODEREF(fun_into_4),LITREF(lit_38),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooScollectionsScollectionYinto);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooScollectionsScollectionYinto);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_into_4;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooScollectionsScollectionYinto,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1st_5 = YPmet(FUNCODEREF(fun_1st_5),LITREF(lit_2),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooScollectionsSsequenceY1st);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooScollectionsSsequenceY1st);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_1st_5;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooScollectionsSsequenceY1st,T62);
  lit_42 = YPPsym((P)"2nd");
  T66 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_6 = YPmet(FUNCODEREF(fun_2nd_6),LITREF(lit_42),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooStypeY2nd);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooStypeY2nd);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_2nd_6;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooStypeY2nd,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3rd_7 = YPmet(FUNCODEREF(fun_3rd_7),LITREF(lit_3),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooScollectionsSsequenceY3rd);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooScollectionsSsequenceY3rd);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_3rd_7;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooScollectionsSsequenceY3rd,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_8 = YPmet(FUNCODEREF(fun_last_8),LITREF(lit_4),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooScollectionsSsequenceYlast);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooScollectionsSsequenceYlast);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_last_8;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooScollectionsSsequenceYlast,T77);
  lit_43 = YPPsym((P)"a");
  T83 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = CALL1(1,VARREF(YgooScollectionsSsequenceYOtQ),VARREF(YLintG));
  T81 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_6)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T82,Ynil);
  fun_pos_10 = YPmet(FUNCODEREF(fun_pos_10),LITREF(lit_5),T81,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YgooScollectionsSsequenceYpos);
  if (T86 != YPfalse) {
    T85 = VARREF(YgooScollectionsSsequenceYpos);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_pos_10;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YgooScollectionsSsequenceYpos,T84);
  lit_44 = YPPsym((P)"outer");
  lit_45 = YPPsym((P)"xsi");
  lit_46 = YPPsym((P)"inner");
  lit_47 = YPPsym((P)"xi");
  lit_48 = YPPsym((P)"yi");
  T91 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_11 = YPmet(FUNCODEREF(fun_inner_11),LITREF(lit_46),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_12 = YPmet(FUNCODEREF(fun_outer_12),LITREF(lit_44),T90,ENVNUL,PNUL,YPfalse);
  T89 = CALL1(1,VARREF(YgooScollectionsSsequenceYOtQ),VARREF(YLintG));
  T88 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T89,Ynil);
  fun_finds_13 = YPmet(FUNCODEREF(fun_finds_13),LITREF(lit_7),T88,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YgooScollectionsSsequenceYfinds);
  if (T94 != YPfalse) {
    T93 = VARREF(YgooScollectionsSsequenceYfinds);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_finds_13;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YgooScollectionsSsequenceYfinds,T92);
  lit_49 = YPPsym((P)"con");
  lit_50 = YPPsym((P)"seq");
  T100 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T99 = fun_con_14 = YPmet(FUNCODEREF(fun_con_14),LITREF(lit_49),T100,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T97 = fun_rev_15 = YPmet(FUNCODEREF(fun_rev_15),LITREF(lit_9),T98,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YgooScollectionsSsequenceYrev);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooScollectionsSsequenceYrev);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_rev_15;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  T101 = VARSET(YgooScollectionsSsequenceYrev,T102);
  T96 = T101;
  return T96;
}

P YgooScollectionsSsequenceY___main_1___() {
  P tmpF983;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_51 = YPPsym((P)"ss");
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_51)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_cat_16 = YPmet(FUNCODEREF(fun_cat_16),LITREF(lit_11),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSmacrosYcat);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSmacrosYcat);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_cat_16;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSmacrosYcat,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_catX_17 = YPmet(FUNCODEREF(fun_catX_17),LITREF(lit_13),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooScollectionsSsequenceYcatX);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScollectionsSsequenceYcatX);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_catX_17;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScollectionsSsequenceYcatX,T6);
  lit_52 = YPPsym((P)"con-x");
  lit_53 = YPPsym((P)"ex");
  lit_54 = YPPsym((P)"con-y");
  lit_55 = YPPsym((P)"ey");
  T12 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_55)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_y_18 = YPmet(FUNCODEREF(fun_con_y_18),LITREF(lit_54),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_53)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_x_19 = YPmet(FUNCODEREF(fun_con_x_19),LITREF(lit_52),T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_cat2_20 = YPmet(FUNCODEREF(fun_cat2_20),LITREF(lit_14),T10,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooScollectionsSsequenceYcat2);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScollectionsSsequenceYcat2);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_cat2_20;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooScollectionsSsequenceYcat2,T13);
  lit_56 = YPPsym((P)"i");
  T18 = YPsig(YPPlist(3,LITREF(lit_50),LITREF(lit_56),LITREF(lit_22)),YPPlist(3,VARREF(YLanyG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_x_21 = YPmet(FUNCODEREF(fun_con_x_21),LITREF(lit_52),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_16),LITREF(lit_17)),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_sub_22 = YPmet(FUNCODEREF(fun_sub_22),LITREF(lit_15),T17,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScollectionsSsequenceYsub);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScollectionsSsequenceYsub);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_sub_22;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScollectionsSsequenceYsub,T19);
  lit_57 = YPPsym((P)"find");
  lit_58 = YPPsym((P)"copy");
  lit_59 = YPPsym((P)"nd");
  lit_60 = YPPsym((P)"insert");
  lit_61 = YPPsym((P)"skip");
  lit_62 = YPPsym((P)"onto");
  T29 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_23 = YPmet(FUNCODEREF(fun_in_23),LITREF(lit_39),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_24 = YPmet(FUNCODEREF(fun_find_24),LITREF(lit_57),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_36),LITREF(lit_56)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_onto_25 = YPmet(FUNCODEREF(fun_onto_25),LITREF(lit_62),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_skip_26 = YPmet(FUNCODEREF(fun_skip_26),LITREF(lit_61),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_27 = YPmet(FUNCODEREF(fun_insert_27),LITREF(lit_60),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_36),LITREF(lit_56)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_copy_28 = YPmet(FUNCODEREF(fun_copy_28),LITREF(lit_58),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(4,LITREF(lit_20),LITREF(lit_19),LITREF(lit_16),LITREF(lit_17)),YPPlist(4,VARREF(YLseqG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqG),Ynil);
  fun_sub_setter_29 = YPmet(FUNCODEREF(fun_sub_setter_29),LITREF(lit_18),T23,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooScollectionsSsequenceYsub_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooScollectionsSsequenceYsub_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_sub_setter_29;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooScollectionsSsequenceYsub_setter,T30);
  T35 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_30 = YPmet(FUNCODEREF(fun_con_30),LITREF(lit_49),T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_pick_31 = YPmet(FUNCODEREF(fun_pick_31),LITREF(lit_25),T34,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScollectionsSsequenceYpick);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScollectionsSsequenceYpick);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_pick_31;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScollectionsSsequenceYpick,T36);
  T41 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_reject_33 = YPmet(FUNCODEREF(fun_reject_33),LITREF(lit_27),T40,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YgooScollectionsSsequenceYreject);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooScollectionsSsequenceYreject);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_reject_33;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooScollectionsSsequenceYreject,T42);
  T47 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_vals_35 = YPmet(FUNCODEREF(fun_del_vals_35),LITREF(lit_28),T46,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YgooScollectionsSsequenceYdel_vals);
  if (T50 != YPfalse) {
    T49 = VARREF(YgooScollectionsSsequenceYdel_vals);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_del_vals_35;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YgooScollectionsSsequenceYdel_vals,T48);
  T53 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_del_dups_37 = YPmet(FUNCODEREF(fun_del_dups_37),LITREF(lit_29),T52,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScollectionsSsequenceYdel_dups);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScollectionsSsequenceYdel_dups);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_del_dups_37;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScollectionsSsequenceYdel_dups,T54);
  lit_63 = YPPsym((P)"r");
  T59 = YPsig(YPPlist(3,LITREF(lit_63),LITREF(lit_56),LITREF(lit_22)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_copy_38 = YPmet(FUNCODEREF(fun_copy_38),LITREF(lit_58),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_6),LITREF(lit_23)),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_ins_39 = YPmet(FUNCODEREF(fun_ins_39),LITREF(lit_21),T58,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooScollectionsSsequenceYins);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooScollectionsSsequenceYins);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_ins_39;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooScollectionsSsequenceYins,T60);
  T64 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_6),LITREF(lit_23)),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_insX_40 = YPmet(FUNCODEREF(fun_insX_40),LITREF(lit_24),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooScollectionsSsequenceYinsX);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooScollectionsSsequenceYinsX);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_insX_40;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooScollectionsSsequenceYinsX,T65);
  lit_64 = YPPsym((P)"keys");
  T69 = YPsig(YPPlist(1,LITREF(lit_36)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_41 = YPmet(FUNCODEREF(fun_keys_41),LITREF(lit_64),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooScollectionsScollectionYkeys);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooScollectionsScollectionYkeys);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_keys_41;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooScollectionsScollectionYkeys,T70);
  lit_65 = YPPsym((P)"range-check");
  T74 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_56)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScollectionsSsequenceYrange_check = YPmet(FUNCODEREF(YgooScollectionsSsequenceYrange_check),LITREF(lit_65),T74,ENVNUL,PNUL,YPfalse);
  T75 = YgooScollectionsSsequenceYrange_check;
  VARSET(YgooScollectionsSsequenceYrange_check,T75);
  lit_66 = YPPsym((P)"range-check?");
  T76 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_56)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScollectionsSsequenceYrange_checkQ = YPmet(FUNCODEREF(YgooScollectionsSsequenceYrange_checkQ),LITREF(lit_66),T76,ENVNUL,PNUL,YPfalse);
  T77 = YgooScollectionsSsequenceYrange_checkQ;
  VARSET(YgooScollectionsSsequenceYrange_checkQ,T77);
  lit_67 = YPPsym((P)"add-new");
  lit_68 = YPPsym((P)"c");
  T78 = YPsig(YPPlist(2,LITREF(lit_68),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_44 = YPmet(FUNCODEREF(fun_add_new_44),LITREF(lit_67),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YgooScollectionsSsequenceYadd_new);
  if (T81 != YPfalse) {
    T80 = VARREF(YgooScollectionsSsequenceYadd_new);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_add_new_44;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YgooScollectionsSsequenceYadd_new,T79);
  lit_69 = YPPsym((P)"alter");
  T84 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_45 = YPmet(FUNCODEREF(fun_in_45),LITREF(lit_39),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(4,LITREF(lit_19),LITREF(lit_20),LITREF(lit_16),LITREF(lit_17)),YPPlist(4,VARREF(YLseqG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqG),Ynil);
  fun_alter_46 = YPmet(FUNCODEREF(fun_alter_46),LITREF(lit_69),T83,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooScollectionsSsequenceYalter);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooScollectionsSsequenceYalter);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_alter_46;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooScollectionsSsequenceYalter,T85);
  lit_70 = YPsb((P)"");
  lit_71 = YPsb((P)" ");
  T90 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_48 = YPmet(FUNCODEREF(fun_vals_to_str_48),LITREF(lit_30),T89,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScollectionsSsequenceYvals_to_str);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScollectionsSsequenceYvals_to_str);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_vals_to_str_48;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScollectionsSsequenceYvals_to_str,T91);
  lit_72 = YPPsym((P)"rep");
  T96 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_rep_49 = YPmet(FUNCODEREF(fun_rep_49),LITREF(lit_72),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_50 = YPmet(FUNCODEREF(fun_do_key_vals_50),LITREF(lit_32),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YgooScollectionsSsequenceYdo_key_vals);
  if (T99 != YPfalse) {
    T98 = VARREF(YgooScollectionsSsequenceYdo_key_vals);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_do_key_vals_50;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YgooScollectionsSsequenceYdo_key_vals,T97);
  check_type(YPfalse,VARREF(YLanyG));
  tmpF983 = YPfalse;
  if (tmpF983 != YPfalse) {
    T101 = VARREF(YgooScollectionsSsequenceYbelow);
  } else {
    T101 = YPfalse;
  }
  T102 = YPfalse;
  return T102;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStype;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStype},
  {&module_info_gooScollectionsScollection},
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
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
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
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"<<", &module_info_gooSmath, "<<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"2nd", &module_info_gooStype, "2nd"},
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
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"t?", &module_info_gooStype, "t?"},
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
  {"quote", &module_info_runtimeSboot, "quote"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
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
  {"any?", &module_info_gooStype, "any?"},
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
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
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
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
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
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
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
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"range-check", &YgooScollectionsSsequenceYrange_check},
  {"---main-1---", NULL},
  {"del-vals", &YgooScollectionsSsequenceYdel_vals},
  {"below", &YgooScollectionsSsequenceYbelow},
  {"finds", &YgooScollectionsSsequenceYfinds},
  {"reject", &YgooScollectionsSsequenceYreject},
  {"do-key-vals", &YgooScollectionsSsequenceYdo_key_vals},
  {"sub", &YgooScollectionsSsequenceYsub},
  {"pos", &YgooScollectionsSsequenceYpos},
  {"pick", &YgooScollectionsSsequenceYpick},
  {"cat2", &YgooScollectionsSsequenceYcat2},
  {"cat!", &YgooScollectionsSsequenceYcatX},
  {"ins!", &YgooScollectionsSsequenceYinsX},
  {"last", &YgooScollectionsSsequenceYlast},
  {"3rd", &YgooScollectionsSsequenceY3rd},
  {"ins", &YgooScollectionsSsequenceYins},
  {"---main-0---", NULL},
  {"alter", &YgooScollectionsSsequenceYalter},
  {"add-new", &YgooScollectionsSsequenceYadd_new},
  {"rev", &YgooScollectionsSsequenceYrev},
  {"1st", &YgooScollectionsSsequenceY1st},
  {"vals-to-str", &YgooScollectionsSsequenceYvals_to_str},
  {"range-check?", &YgooScollectionsSsequenceYrange_checkQ},
  {"@t?", &YgooScollectionsSsequenceYOtQ},
  {"sub-setter", &YgooScollectionsSsequenceYsub_setter},
  {"del-dups", &YgooScollectionsSsequenceYdel_dups},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"range-check", "range-check"},
  {"del-vals", "del-vals"},
  {"below", "below"},
  {"finds", "finds"},
  {"reject", "reject"},
  {"2nd", "2nd"},
  {"sub", "sub"},
  {"pos", "pos"},
  {"rev!", "rev!"},
  {"pick", "pick"},
  {"cat2", "cat2"},
  {"<seq>", "<seq>"},
  {"cat!", "cat!"},
  {"ins!", "ins!"},
  {"last", "last"},
  {"cat", "cat"},
  {"3rd", "3rd"},
  {"ins", "ins"},
  {"do-key-vals", "do-key-vals"},
  {"rev", "rev"},
  {"1st", "1st"},
  {"vals-to-str", "vals-to-str"},
  {"range-check?", "range-check?"},
  {"sub-setter", "sub-setter"},
  {"del-dups", "del-dups"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsSsequence;
MODULE_INFO module_info_gooScollectionsSsequence = {
  "goo/collections/sequence",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStype (void);
extern void load_module_gooScollectionsScollection (void);

/* EXPRESSION: */

extern void load_module_gooScollectionsSsequence (void);

void load_module_gooScollectionsSsequence (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStype();
  load_module_gooScollectionsScollection();

  (P)YgooScollectionsSsequenceY___main_0___();
  (P)YgooScollectionsSsequenceY___main_1___();

}

/* END OF GENERATED CODE. */
