/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/collections/collection */

EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
DEF(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
DEF(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
DEF(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YPsnul,"runtime/boot","%snul");
DEF(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
DEF(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_parents,"runtime/boot","object-parents");
DEF(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
DEF(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
DEF(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
DEF(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YPisa,"runtime/boot","%isa");
DEF(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
DEF(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
DEF(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
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
DEF(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
DEF(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
DEF(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
DEF(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
DEF(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLmetG,"runtime/boot","<met>");
DEF(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YLsubclassG,"runtime/boot","<subclass>");
DEF(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
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
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
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
EXT(Ynul,"runtime/boot","nul");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
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
DEF(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(Ysym_name,"runtime/boot","sym-name");
DEF(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
DEF(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
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
DEF(YgooScollectionsScollectionYDelt_default,"goo/collections/collection","$elt-default");
DEF(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsigG,"runtime/boot","<sig>");
DEF(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
DEF(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
DEF(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynil,"runtime/boot","nil");
EXT(YLcolG,"runtime/boot","<col>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooScollectionsScollectionYLelt_defaultG,"goo/collections/collection","<elt-default>");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
DEF(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
DEF(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YLmagG,"runtime/boot","<mag>");
DEF(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
DEF(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
DEF(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLlocG,"runtime/boot","<loc>");
DEF(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_66);
DEFLIT(lit_48);
DEFLIT(lit_11);
DEFLIT(lit_38);
DEFLIT(lit_19);
DEFLIT(lit_4);
DEFLIT(lit_25);
DEFLIT(lit_57);
DEFLIT(lit_68);
DEFLIT(lit_87);
DEFLIT(lit_36);
DEFLIT(lit_0);
DEFLIT(lit_77);
DEFLIT(lit_81);
DEFLIT(lit_67);
DEFLIT(lit_37);
DEFLIT(lit_89);
DEFLIT(lit_6);
DEFLIT(lit_24);
DEFLIT(lit_8);
DEFLIT(lit_41);
DEFLIT(lit_55);
DEFLIT(lit_50);
DEFLIT(lit_83);
DEFLIT(lit_53);
DEFLIT(lit_21);
DEFLIT(lit_85);
DEFLIT(lit_63);
DEFLIT(lit_75);
DEFLIT(lit_70);
DEFLIT(lit_3);
DEFLIT(lit_27);
DEFLIT(lit_39);
DEFLIT(lit_88);
DEFLIT(lit_2);
DEFLIT(lit_29);
DEFLIT(lit_22);
DEFLIT(lit_13);
DEFLIT(lit_61);
DEFLIT(lit_80);
DEFLIT(lit_16);
DEFLIT(lit_5);
DEFLIT(lit_1);
DEFLIT(lit_32);
DEFLIT(lit_15);
DEFLIT(lit_26);
DEFLIT(lit_10);
DEFLIT(lit_49);
DEFLIT(lit_78);
DEFLIT(lit_56);
DEFLIT(lit_74);
DEFLIT(lit_62);
DEFLIT(lit_59);
DEFLIT(lit_7);
DEFLIT(lit_43);
DEFLIT(lit_69);
DEFLIT(lit_45);
DEFLIT(lit_47);
DEFLIT(lit_40);
DEFLIT(lit_51);
DEFLIT(lit_65);
DEFLIT(lit_60);
DEFLIT(lit_76);
DEFLIT(lit_64);
DEFLIT(lit_84);
DEFLIT(lit_28);
DEFLIT(lit_31);
DEFLIT(lit_90);
DEFLIT(lit_23);
DEFLIT(lit_58);
DEFLIT(lit_52);
DEFLIT(lit_17);
DEFLIT(lit_54);
DEFLIT(lit_42);
DEFLIT(lit_18);
DEFLIT(lit_30);
DEFLIT(lit_71);
DEFLIT(lit_9);
DEFLIT(lit_35);
DEFLIT(lit_73);
DEFLIT(lit_34);
DEFLIT(lit_20);
DEFLIT(lit_86);
DEFLIT(lit_82);
DEFLIT(lit_12);
DEFLIT(lit_46);
DEFLIT(lit_14);
DEFLIT(lit_79);
DEFLIT(lit_33);
DEFLIT(lit_44);
DEFLIT(lit_72);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_count_1);
LOCFOR(fun_len_2);
LOCFOR(fun_elt_type_3);
LOCFOR(fun_key_type_4);
LOCFOR(fun_key_test_5);
LOCFOR(fun_emptyQ_6);
LOCFOR(fun_empty_7);
LOCFOR(fun_elt_default_8);
LOCFOR(fun_fabs_9);
LOCFOR(fun_in_10);
LOCFOR(fun_fill_11);
LOCFOR(fun_dup_12);
LOCFOR(fun_13);
LOCFOR(fun_elts_14);
LOCFOR(fun_addX_15);
LOCFOR(fun_in_16);
LOCFOR(fun_into_17);
LOCFOR(fun_fnd_18);
LOCFOR(fun_anyQ_19);
LOCFOR(fun_fnd_20);
LOCFOR(fun_allQ_21);
LOCFOR(fun_red_22);
LOCFOR(fun_fold_23);
LOCFOR(fun_red_24);
LOCFOR(fun_foldA_25);
LOCFOR(fun_range_error_26);
LOCFOR(fun_fnd_27);
LOCFOR(fun_find_or_28);
LOCFOR(fun_find_29);
LOCFOR(fun_lop_30);
LOCFOR(fun_do_31);
LOCFOR(fun_lop_32);
LOCFOR(fun_do2_33);
LOCFOR(fun_con_34);
LOCFOR(fun_map_35);
LOCFOR(fun_con_36);
LOCFOR(fun_map2_37);
LOCFOR(fun_lop_38);
LOCFOR(fun_do_keyed_39);
LOCFOR(fun_con_40);
LOCFOR(fun_map_keyed_41);
LOCFOR(fun_con_42);
LOCFOR(fun_keys_43);
LOCFOR(fun_con_44);
LOCFOR(fun_items_45);
LOCFOR(fun_46);
LOCFOR(fun_memQ_47);
LOCFOR(fun_as_copy_48);
LOCFOR(fun_eq_49);
LOCFOR(fun_E_50);
LOCFOR(fun_fnd_51);
LOCFOR(fun_any2Q_52);
LOCFOR(fun_fnd_53);
LOCFOR(fun_all2Q_54);
LOCFOR(fun_lop_55);
LOCFOR(fun_do3_56);
LOCFOR(fun_elt_57);
extern P YgooScollectionsScollectionY___main_0___ ();
extern P YgooScollectionsScollectionY___main_1___ ();
extern P YgooScollectionsScollectionY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_0) {
  P p_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),p_,T2);
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYinto),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_count_1) {
  P e_,i_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = i_;
  } else {
    T3 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_len_2) {
  P x_;
  P countF903;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_count_1,1);
  countF903 = T1;
  FUNINIT(countF903, 1,countF903);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T2 = CALL2(0,countF903,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_type_3) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_type_4) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_test_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

FUNCODEDEF(fun_emptyQ_6) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_7) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_default_8) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_fabs_9) {
  P c_,objects_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),c_,T2);
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYinto),T1,objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_10) {
  P ds_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ds_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ds_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),FREEREF(1),ds_);
    T3 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ds_);
    a1 = T3;
    ds_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fill_11) {
  P dst_,val_;
  P inF904;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_10,3);
  inF904 = T1;
  FUNINIT(inF904, 3,dst_,val_,inF904);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),dst_);
  T2 = CALL1(0,inF904,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_dup_12) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),x_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P k_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(k_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),k_);
  T0 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T1,FREEREF(1),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elts_14) {
  P x_,keys_;
  P resF905;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),keys_);
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsScollectionYLtabG),T2);
  resF905 = T1;
  T3 = FUNFAB(fun_13,2,x_,resF905);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,keys_);
  T4 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),x_,resF905);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_addX_15) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_16) {
  P ss_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ss_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ss_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ss_);
    T3 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ss_);
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T2,FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ss_);
    a1 = T5;
    ss_ = a1;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_into_17) {
  P dst_,src_;
  P inF906;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_16,2);
  inF906 = T1;
  FUNINIT(inF906, 2,dst_,inF906);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),src_);
  T2 = CALL1(0,inF906,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_18) {
  P e_;
  P tmpF907;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T4 = CALL1(1,FREEREF(0),T5);
    T3 = CALL1(1,VARREF(YgooSmathYas_log),T4);
    tmpF907 = T3;
    if (tmpF907 != YPfalse) {
      T6 = tmpF907;
    } else {
      T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_anyQ_19) {
  P test_,c_;
  P fndF908;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_18,2);
  fndF908 = T1;
  FUNINIT(fndF908, 2,test_,fndF908);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL1(0,fndF908,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_20) {
  P e_;
  P tmpF910;
  P tmpF909;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  tmpF909 = T1;
  if (tmpF909 != YPfalse) {
    T2 = tmpF909;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T4 = CALL1(1,FREEREF(0),T5);
    tmpF910 = T4;
    if (tmpF910 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_allQ_21) {
  P test_,c_;
  P fndF911;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_20,2);
  fndF911 = T1;
  FUNINIT(fndF911, 2,test_,fndF911);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL1(0,fndF911,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_22) {
  P res_,e_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T3 = CALL2(1,FREEREF(1),res_,T4);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_fold_23) {
  P combine_,init_,c_;
  P redF912;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_22,2);
  redF912 = T1;
  FUNINIT(redF912, 2,redF912,combine_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL2(0,redF912,init_,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_red_24) {
  P res_,e_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T3 = CALL2(1,FREEREF(1),res_,T4);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_foldA_25) {
  P combine_,c_;
  P redF915;
  P initF914;
  P eF913;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  eF913 = T1;
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),eF913);
  initF914 = T3;
  T5 = FUNSHELL(1,fun_red_24,2);
  redF915 = T5;
  FUNINIT(redF915, 2,redF915,combine_);
  T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),eF913);
  T6 = CALL2(0,redF915,initF914,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_26) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Yerror),LITREF(lit_77));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_27) {
  P e_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T3 = CALL1(1,FREEREF(1),T4);
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow_key),e_);
      T2 = T5;
    } else {
      T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_find_or_28) {
  P f_,c_,default_;
  P fndF916;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_27,3);
  fndF916 = T1;
  FUNINIT(fndF916, 3,default_,f_,fndF916);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL1(0,fndF916,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_29) {
  P f_,c_;
  P valF917;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScollectionsScollectionYfind_or),f_,c_,VARREF(YgooScollectionsScollectionYDelt_default));
  valF917 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF917,VARREF(YgooScollectionsScollectionYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL0(1,VARREF(YgooScollectionsScollectionYrange_error));
    T2 = T4;
  } else {
    T2 = valF917;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_30) {
  P e_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    CALL1(1,FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_do_31) {
  P f_,c_;
  P lopF918;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_30,2);
  lopF918 = T1;
  FUNINIT(lopF918, 2,f_,lopF918);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL1(0,lopF918,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_32) {
  P ex_,ey_;
  P tmpF919;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ex_);
  tmpF919 = T3;
  if (tmpF919 != YPfalse) {
    T4 = tmpF919;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ey_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ex_);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ey_);
    CALL2(1,FREEREF(0),T6,T7);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ex_);
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ey_);
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

FUNCODEDEF(fun_do2_33) {
  P f_,x_,y_;
  P lopF920;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_lop_32,2);
  lopF920 = T1;
  FUNINIT(lopF920, 2,f_,lopF920);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),y_);
  T2 = CALL2(0,lopF920,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_34) {
  P res_,e_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T6 = CALL1(1,FREEREF(2),T7);
    T5 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),res_,T6);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_map_35) {
  P f_,c_;
  P conF921;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_34,3);
  conF921 = T1;
  FUNINIT(conF921, 3,c_,conF921,f_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL2(0,conF921,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_36) {
  P res_,ex_,ey_;
  P tmpF922;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(ex_, 1);
  ARG(ey_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ex_);
  tmpF922 = T2;
  if (tmpF922 != YPfalse) {
    T3 = tmpF922;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ey_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T5 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),T6);
    T0 = T5;
  } else {
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ex_);
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ey_);
    T9 = CALL2(1,FREEREF(2),T10,T11);
    T8 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),res_,T9);
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ex_);
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ey_);
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

FUNCODEDEF(fun_map2_37) {
  P f_,x_,y_;
  P conF923;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_36,3);
  conF923 = T1;
  FUNINIT(conF923, 3,x_,conF923,f_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),y_);
  T2 = CALL3(0,conF923,Ynil,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_38) {
  P e_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScollectionsScollectionYnow_key),e_);
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    CALL2(1,FREEREF(0),T3,T4);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_do_keyed_39) {
  P f_,c_;
  P lopF924;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_38,2);
  lopF924 = T1;
  FUNINIT(lopF924, 2,f_,lopF924);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL1(0,lopF924,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_40) {
  P res_,e_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow_key),e_);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T6 = CALL2(1,FREEREF(2),T7,T8);
    T5 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),res_,T6);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_map_keyed_41) {
  P f_,c_;
  P conF925;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_40,3);
  conF925 = T1;
  FUNINIT(conF925, 3,c_,conF925,f_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL2(0,conF925,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_42) {
  P res_,e_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow_key),e_);
    T4 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),res_,T5);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_keys_43) {
  P c_;
  P conF926;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_42,1);
  conF926 = T1;
  FUNINIT(conF926, 1,conF926);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL2(0,conF926,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_44) {
  P res_,e_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnow_key),e_);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e_);
    T5 = CALL2(1,VARREF(Ytup),T6,T7);
    T4 = CALL2(1,VARREF(YgooScollectionsScollectionYadd),res_,T5);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e_);
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

FUNCODEDEF(fun_items_45) {
  P c_;
  P conF927;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_44,1);
  conF927 = T1;
  FUNINIT(conF927, 1,conF927);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c_);
  T2 = CALL2(0,conF927,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_46) {
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

FUNCODEDEF(fun_memQ_47) {
  P c_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_46,1,x_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_copy_48) {
  P c_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yobject_class),c_);
  T0 = CALL2(1,VARREF(YgooStypesYas),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eq_49) {
  P e1_,e2_;
  P tmpF928;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e1_, 0);
  ARG(e2_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e1_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),e2_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e1_);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),e2_);
    T4 = CALL2(1,VARREF(YgooSmathYE),T5,T6);
    tmpF928 = T4;
    if (tmpF928 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e1_);
      T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),e2_);
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

FUNCODEDEF(fun_E_50) {
  P c1_,c2_;
  P eqF929;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T1 = FUNSHELL(1,fun_eq_49,1);
  eqF929 = T1;
  FUNINIT(eqF929, 1,eqF929);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c1_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),c2_);
  T2 = CALL2(0,eqF929,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_51) {
  P ex_,ey_;
  P tmpF931;
  P tmpF930;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ex_);
  tmpF930 = T2;
  if (tmpF930 != YPfalse) {
    T3 = tmpF930;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ey_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ex_);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ey_);
    T7 = CALL2(1,FREEREF(0),T8,T9);
    T6 = CALL1(1,VARREF(YgooSmathYas_log),T7);
    tmpF931 = T6;
    if (tmpF931 != YPfalse) {
      T10 = tmpF931;
    } else {
      T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ex_);
      T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ey_);
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

FUNCODEDEF(fun_any2Q_52) {
  P test_,x_,y_;
  P fndF932;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_51,2);
  fndF932 = T1;
  FUNINIT(fndF932, 2,test_,fndF932);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),y_);
  T2 = CALL2(0,fndF932,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_53) {
  P ex_,ey_;
  P tmpF935;
  P tmpF934;
  P tmpF933;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ex_);
  tmpF933 = T1;
  if (tmpF933 != YPfalse) {
    T2 = tmpF933;
  } else {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ey_);
    tmpF934 = T4;
    if (tmpF934 != YPfalse) {
      T5 = tmpF934;
    } else {
      T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ex_);
      T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ey_);
      T7 = CALL2(1,FREEREF(0),T8,T9);
      tmpF935 = T7;
      if (tmpF935 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ex_);
        T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ey_);
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

FUNCODEDEF(fun_all2Q_54) {
  P test_,x_,y_;
  P fndF936;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_53,2);
  fndF936 = T1;
  FUNINIT(fndF936, 2,test_,fndF936);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),y_);
  T2 = CALL2(0,fndF936,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_55) {
  P ex_,ey_,ez_;
  P tmpF938;
  P tmpF937;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
  ARG(ez_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ex_);
  tmpF937 = T3;
  if (tmpF937 != YPfalse) {
    T4 = tmpF937;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ey_);
    tmpF938 = T6;
    if (tmpF938 != YPfalse) {
      T7 = tmpF938;
    } else {
      T8 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),ez_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ex_);
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ey_);
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),ez_);
    CALL3(1,FREEREF(0),T9,T10,T11);
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ex_);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ey_);
    T15 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),ez_);
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

FUNCODEDEF(fun_do3_56) {
  P f_,x_,y_,z_;
  P lopF939;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
loop:
  T1 = FUNSHELL(1,fun_lop_55,2);
  lopF939 = T1;
  FUNINIT(lopF939, 2,f_,lopF939);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),y_);
  T5 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),z_);
  T2 = CALL3(0,lopF939,T3,T4,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_57) {
  P c_,key_;
  P valF940;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),c_,key_,VARREF(YgooScollectionsScollectionYDelt_default));
  valF940 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF940,VARREF(YgooScollectionsScollectionYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL0(1,VARREF(YgooScollectionsScollectionYrange_error));
    T2 = T4;
  } else {
    T2 = valF940;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooScollectionsScollectionY___main_0___() {
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"elt");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPPsym((P)"k");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYelt,T0);
  lit_3 = YPPsym((P)"elt-or");
  lit_4 = YPPsym((P)"default");
  T3 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_4)),YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYelt_or,T2);
  lit_5 = YPPsym((P)"elt-setter");
  lit_6 = YPPsym((P)"v");
  T5 = YPsig(YPPlist(3,LITREF(lit_6),LITREF(lit_1),LITREF(lit_2)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYelt_setter,T4);
  lit_7 = YPPsym((P)"elt-type");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYelt_type,T6);
  lit_8 = YPPsym((P)"elt-default");
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYelt_default,T8);
  lit_9 = YPPsym((P)"key-type");
  T11 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYkey_type,T10);
  lit_10 = YPPsym((P)"key-test");
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYkey_test,T12);
  lit_11 = YPPsym((P)"elts");
  lit_12 = YPPsym((P)"keys");
  T15 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYelts,T14);
  lit_13 = YPPsym((P)"empty?");
  T17 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYemptyQ,T16);
  lit_14 = YPPsym((P)"empty");
  T20 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T19 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T20),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYempty,T18);
  lit_15 = YPPsym((P)"add");
  lit_16 = YPPsym((P)"y");
  T22 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_16)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYadd,T21);
  lit_17 = YPPsym((P)"add!");
  lit_18 = YPPsym((P)"c");
  T24 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYaddX,T23);
  lit_19 = YPPsym((P)"dup");
  T26 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_19),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYdup,T25);
  lit_20 = YPPsym((P)"fab");
  lit_21 = YPPsym((P)"t");
  lit_22 = YPPsym((P)"s");
  T29 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T28 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_22)),YPPlist(2,T29,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T27 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T28,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYfab,T27);
  lit_23 = YPPsym((P)"fabs");
  T32 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T31 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_11)),YPPlist(1,T32),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_23),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYfabs,T30);
  lit_24 = YPPsym((P)"fill");
  lit_25 = YPPsym((P)"val");
  T34 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_25)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T33 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T34,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYfill,T33);
  lit_26 = YPPsym((P)"into");
  T36 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_16)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYinto,T35);
  lit_27 = YPPsym((P)"all?");
  lit_28 = YPPsym((P)"f");
  T38 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_27),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYallQ,T37);
  lit_29 = YPPsym((P)"fold");
  lit_30 = YPPsym((P)"combine");
  lit_31 = YPPsym((P)"init");
  T40 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_31),LITREF(lit_1)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLcolG),Ynil);
  T39 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_29),T40,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYfold,T39);
  lit_32 = YPPsym((P)"fold+");
  T42 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T41 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYfoldA,T41);
  lit_33 = YPPsym((P)"find-or");
  T44 = YPsig(YPPlist(3,LITREF(lit_28),LITREF(lit_1),LITREF(lit_4)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T43 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_33),T44,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYfind_or,T43);
  lit_34 = YPPsym((P)"find");
  T46 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T45 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_34),T46,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYfind,T45);
  lit_35 = YPPsym((P)"del");
  lit_36 = YPPsym((P)"key");
  T48 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_36)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T47 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_35),T48,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYdel,T47);
  lit_37 = YPPsym((P)"zap");
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T49 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_37),T50,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYzap,T49);
  lit_38 = YPPsym((P)"do");
  T52 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T51 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T52,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYdo,T51);
  lit_39 = YPPsym((P)"mem?");
  T54 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_16)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T53 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_39),T54,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYmemQ,T53);
  T56 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T55 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T56,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYkeys,T55);
  T57 = YPfalse;
  return T57;
}

P YgooScollectionsScollectionY___main_1___() {
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
  lit_40 = YPPsym((P)"items");
  T1 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYitems,T0);
  lit_41 = YPPsym((P)"<enum>");
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  T2 = CALL2(1,VARREF(Yfab_class),LITREF(lit_41),T3);
  VARSET(YgooScollectionsScollectionYLenumG,T2);
  lit_42 = YPPsym((P)"enum");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsScollectionYLenumG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_42),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYenum,T4);
  lit_43 = YPPsym((P)"fin?");
  lit_44 = YPPsym((P)"e");
  T7 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsScollectionYLenumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_43),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYfinQ,T6);
  lit_45 = YPPsym((P)"nxt");
  T9 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsScollectionYLenumG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsScollectionYLenumG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_45),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYnxt,T8);
  lit_46 = YPPsym((P)"now");
  T11 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsScollectionYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYnow,T10);
  lit_47 = YPPsym((P)"now-setter");
  T13 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScollectionsScollectionYLenumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_47),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYnow_setter,T12);
  lit_48 = YPPsym((P)"now-key");
  T15 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YgooScollectionsScollectionYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_48),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYnow_key,T14);
  lit_49 = YPPsym((P)"do-keyed");
  T17 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_49),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYdo_keyed,T16);
  lit_50 = YPPsym((P)"map-keyed");
  T19 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_50),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYmap_keyed,T18);
  lit_51 = YPPsym((P)"do2");
  T21 = YPsig(YPPlist(3,LITREF(lit_28),LITREF(lit_1),LITREF(lit_16)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_51),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYdo2,T20);
  lit_52 = YPPsym((P)"do3");
  lit_53 = YPPsym((P)"z");
  T23 = YPsig(YPPlist(4,LITREF(lit_28),LITREF(lit_1),LITREF(lit_16),LITREF(lit_53)),YPPlist(4,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_52),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYdo3,T22);
  lit_54 = YPPsym((P)"map");
  T25 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_54),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYmap,T24);
  lit_55 = YPPsym((P)"map2");
  T27 = YPsig(YPPlist(3,LITREF(lit_28),LITREF(lit_1),LITREF(lit_16)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLcolG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_55),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYmap2,T26);
  lit_56 = YPPsym((P)"any2?");
  lit_57 = YPPsym((P)"test");
  T29 = YPsig(YPPlist(3,LITREF(lit_57),LITREF(lit_1),LITREF(lit_16)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_56),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYany2Q,T28);
  lit_58 = YPPsym((P)"range-error");
  T31 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_58),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYrange_error,T30);
  lit_59 = YPPsym((P)"low-elt");
  T33 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T32 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_59),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYlow_elt,T32);
  lit_60 = YPPsym((P)"low-elt-setter");
  T35 = YPsig(YPPlist(3,LITREF(lit_6),LITREF(lit_1),LITREF(lit_2)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_60),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYlow_elt_setter,T34);
  lit_61 = YPPsym((P)"as-copy");
  T37 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T36 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_61),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsScollectionYas_copy,T36);
  lit_62 = YPPsym((P)"as");
  lit_63 = YPPsym((P)"p");
  T39 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T38 = YPsig(YPPlist(2,LITREF(lit_63),LITREF(lit_1)),YPPlist(2,T39,VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_62),T38,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooStypesYas);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooStypesYas);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_as_0;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooStypesYas,T40);
  lit_64 = YPPsym((P)"len");
  lit_65 = YPPsym((P)"count");
  lit_66 = YPPsym((P)"i");
  T45 = YPsig(YPPlist(2,LITREF(lit_44),LITREF(lit_66)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_count_1 = YPmet(FUNCODEREF(fun_count_1),LITREF(lit_65),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_64),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooStypesYlen);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooStypesYlen);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_len_2;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooStypesYlen,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_3 = YPmet(FUNCODEREF(fun_elt_type_3),LITREF(lit_7),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YgooScollectionsScollectionYelt_type);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooScollectionsScollectionYelt_type);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_elt_type_3;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooScollectionsScollectionYelt_type,T51);
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_4 = YPmet(FUNCODEREF(fun_key_type_4),LITREF(lit_9),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YgooScollectionsScollectionYkey_type);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooScollectionsScollectionYkey_type);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_key_type_4;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooScollectionsScollectionYkey_type,T56);
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_5 = YPmet(FUNCODEREF(fun_key_test_5),LITREF(lit_10),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YgooScollectionsScollectionYkey_test);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooScollectionsScollectionYkey_test);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_key_test_5;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooScollectionsScollectionYkey_test,T61);
  T65 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_6 = YPmet(FUNCODEREF(fun_emptyQ_6),LITREF(lit_13),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YgooSmacrosYemptyQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_emptyQ_6;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YgooSmacrosYemptyQ,T66);
  T71 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T70 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,T71),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_empty_7 = YPmet(FUNCODEREF(fun_empty_7),LITREF(lit_14),T70,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooScollectionsScollectionYempty);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooScollectionsScollectionYempty);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_empty_7;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooScollectionsScollectionYempty,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_8 = YPmet(FUNCODEREF(fun_elt_default_8),LITREF(lit_8),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooScollectionsScollectionYelt_default);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooScollectionsScollectionYelt_default);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_elt_default_8;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooScollectionsScollectionYelt_default,T77);
  lit_67 = YPPsym((P)"objects");
  T82 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T81 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_67)),YPPlist(1,T82),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fabs_9 = YPmet(FUNCODEREF(fun_fabs_9),LITREF(lit_23),T81,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YgooSmathYfabs);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooSmathYfabs);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_fabs_9;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooSmathYfabs,T83);
  lit_68 = YPPsym((P)"dst");
  lit_69 = YPPsym((P)"in");
  lit_70 = YPPsym((P)"ds");
  T88 = YPsig(YPPlist(1,LITREF(lit_70)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_10 = YPmet(FUNCODEREF(fun_in_10),LITREF(lit_69),T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(2,LITREF(lit_68),LITREF(lit_25)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_11 = YPmet(FUNCODEREF(fun_fill_11),LITREF(lit_24),T87,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YgooScollectionsScollectionYfill);
  if (T91 != YPfalse) {
    T90 = VARREF(YgooScollectionsScollectionYfill);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_fill_11;
  T89 = CALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YgooScollectionsScollectionYfill,T89);
  T93 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_dup_12 = YPmet(FUNCODEREF(fun_dup_12),LITREF(lit_19),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YgooScollectionsScollectionYdup);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooScollectionsScollectionYdup);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_dup_12;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooScollectionsScollectionYdup,T94);
  T99 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(2,VARREF(YLcolG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_elts_14 = YPmet(FUNCODEREF(fun_elts_14),LITREF(lit_11),T98,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooScollectionsScollectionYelts);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooScollectionsScollectionYelts);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_elts_14;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooScollectionsScollectionYelts,T100);
  T104 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_addX_15 = YPmet(FUNCODEREF(fun_addX_15),LITREF(lit_17),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YgooScollectionsScollectionYaddX);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooScollectionsScollectionYaddX);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_addX_15;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooScollectionsScollectionYaddX,T105);
  lit_71 = YPPsym((P)"src");
  lit_72 = YPPsym((P)"ss");
  T110 = YPsig(YPPlist(1,LITREF(lit_72)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_16 = YPmet(FUNCODEREF(fun_in_16),LITREF(lit_69),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_68),LITREF(lit_71)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_into_17 = YPmet(FUNCODEREF(fun_into_17),LITREF(lit_26),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YgooScollectionsScollectionYinto);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooScollectionsScollectionYinto);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_into_17;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooScollectionsScollectionYinto,T111);
  lit_73 = YPPsym((P)"any?");
  lit_74 = YPPsym((P)"fnd");
  T116 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_18 = YPmet(FUNCODEREF(fun_fnd_18),LITREF(lit_74),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_57),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_19 = YPmet(FUNCODEREF(fun_anyQ_19),LITREF(lit_73),T115,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YgooStypesYanyQ);
  if (T119 != YPfalse) {
    T118 = VARREF(YgooStypesYanyQ);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_anyQ_19;
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YgooStypesYanyQ,T117);
  T122 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_20 = YPmet(FUNCODEREF(fun_fnd_20),LITREF(lit_74),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(2,LITREF(lit_57),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_21 = YPmet(FUNCODEREF(fun_allQ_21),LITREF(lit_27),T121,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YgooScollectionsScollectionYallQ);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooScollectionsScollectionYallQ);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_allQ_21;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooScollectionsScollectionYallQ,T123);
  lit_75 = YPPsym((P)"red");
  lit_76 = YPPsym((P)"res");
  T128 = YPsig(YPPlist(2,LITREF(lit_76),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_22 = YPmet(FUNCODEREF(fun_red_22),LITREF(lit_75),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_31),LITREF(lit_18)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_23 = YPmet(FUNCODEREF(fun_fold_23),LITREF(lit_29),T127,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YgooScollectionsScollectionYfold);
  if (T131 != YPfalse) {
    T130 = VARREF(YgooScollectionsScollectionYfold);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_fold_23;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YgooScollectionsScollectionYfold,T129);
  T134 = YPsig(YPPlist(2,LITREF(lit_76),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_24 = YPmet(FUNCODEREF(fun_red_24),LITREF(lit_75),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_25 = YPmet(FUNCODEREF(fun_foldA_25),LITREF(lit_32),T133,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YgooScollectionsScollectionYfoldA);
  if (T137 != YPfalse) {
    T136 = VARREF(YgooScollectionsScollectionYfoldA);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_foldA_25;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YgooScollectionsScollectionYfoldA,T135);
  lit_77 = YPsb((P)"RANGE ERROR");
  T139 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_range_error_26 = YPmet(FUNCODEREF(fun_range_error_26),LITREF(lit_58),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YgooScollectionsScollectionYrange_error);
  if (T142 != YPfalse) {
    T141 = VARREF(YgooScollectionsScollectionYrange_error);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_range_error_26;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YgooScollectionsScollectionYrange_error,T140);
  lit_78 = YPPsym((P)"<elt-default>");
  T145 = (P)YPpair(VARREF(YLanyG),Ynil);
  T144 = CALL2(1,VARREF(Yfab_class),LITREF(lit_78),T145);
  VARSET(YgooScollectionsScollectionYLelt_defaultG,T144);
  T146 = CALL1(1,VARREF(Ynew),VARREF(YgooScollectionsScollectionYLelt_defaultG));
  VARSET(YgooScollectionsScollectionYDelt_default,T146);
  T148 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_27 = YPmet(FUNCODEREF(fun_fnd_27),LITREF(lit_74),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(3,LITREF(lit_28),LITREF(lit_18),LITREF(lit_4)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_28 = YPmet(FUNCODEREF(fun_find_or_28),LITREF(lit_33),T147,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YgooScollectionsScollectionYfind_or);
  if (T151 != YPfalse) {
    T150 = VARREF(YgooScollectionsScollectionYfind_or);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_find_or_28;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YgooScollectionsScollectionYfind_or,T149);
  T153 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_29 = YPmet(FUNCODEREF(fun_find_29),LITREF(lit_34),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YgooScollectionsScollectionYfind);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooScollectionsScollectionYfind);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_find_29;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooScollectionsScollectionYfind,T154);
  lit_79 = YPPsym((P)"lop");
  T162 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T161 = fun_lop_30 = YPmet(FUNCODEREF(fun_lop_30),LITREF(lit_79),T162,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T159 = fun_do_31 = YPmet(FUNCODEREF(fun_do_31),LITREF(lit_38),T160,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YgooSmacrosYdo);
  if (T166 != YPfalse) {
    T165 = VARREF(YgooSmacrosYdo);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_do_31;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  T163 = VARSET(YgooSmacrosYdo,T164);
  T158 = T163;
  return T158;
}

P YgooScollectionsScollectionY___main_2___() {
  P tmpF942;
  P tmpF941;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_80 = YPPsym((P)"ex");
  lit_81 = YPPsym((P)"ey");
  T1 = YPsig(YPPlist(2,LITREF(lit_80),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_lop_32 = YPmet(FUNCODEREF(fun_lop_32),LITREF(lit_79),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(3,LITREF(lit_28),LITREF(lit_1),LITREF(lit_16)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do2_33 = YPmet(FUNCODEREF(fun_do2_33),LITREF(lit_51),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YgooScollectionsScollectionYdo2);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooScollectionsScollectionYdo2);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_do2_33;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooScollectionsScollectionYdo2,T2);
  lit_82 = YPPsym((P)"con");
  T7 = YPsig(YPPlist(2,LITREF(lit_76),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_34 = YPmet(FUNCODEREF(fun_con_34),LITREF(lit_82),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_35 = YPmet(FUNCODEREF(fun_map_35),LITREF(lit_54),T6,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YgooSmacrosYmap);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSmacrosYmap);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_map_35;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSmacrosYmap,T8);
  T13 = YPsig(YPPlist(3,LITREF(lit_76),LITREF(lit_80),LITREF(lit_81)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_36 = YPmet(FUNCODEREF(fun_con_36),LITREF(lit_82),T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(3,LITREF(lit_28),LITREF(lit_1),LITREF(lit_16)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLcolG),Ynil);
  fun_map2_37 = YPmet(FUNCODEREF(fun_map2_37),LITREF(lit_55),T12,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooScollectionsScollectionYmap2);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooScollectionsScollectionYmap2);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_map2_37;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooScollectionsScollectionYmap2,T14);
  T19 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_38 = YPmet(FUNCODEREF(fun_lop_38),LITREF(lit_79),T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_39 = YPmet(FUNCODEREF(fun_do_keyed_39),LITREF(lit_49),T18,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YgooScollectionsScollectionYdo_keyed);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooScollectionsScollectionYdo_keyed);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_do_keyed_39;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooScollectionsScollectionYdo_keyed,T20);
  T25 = YPsig(YPPlist(2,LITREF(lit_76),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_40 = YPmet(FUNCODEREF(fun_con_40),LITREF(lit_82),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_18)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_41 = YPmet(FUNCODEREF(fun_map_keyed_41),LITREF(lit_50),T24,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YgooScollectionsScollectionYmap_keyed);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooScollectionsScollectionYmap_keyed);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_map_keyed_41;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooScollectionsScollectionYmap_keyed,T26);
  T31 = YPsig(YPPlist(2,LITREF(lit_76),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_42 = YPmet(FUNCODEREF(fun_con_42),LITREF(lit_82),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_43 = YPmet(FUNCODEREF(fun_keys_43),LITREF(lit_12),T30,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YgooScollectionsScollectionYkeys);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooScollectionsScollectionYkeys);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_keys_43;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooScollectionsScollectionYkeys,T32);
  T37 = YPsig(YPPlist(2,LITREF(lit_76),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_44 = YPmet(FUNCODEREF(fun_con_44),LITREF(lit_82),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_items_45 = YPmet(FUNCODEREF(fun_items_45),LITREF(lit_40),T36,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YgooScollectionsScollectionYitems);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooScollectionsScollectionYitems);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_items_45;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooScollectionsScollectionYitems,T38);
  T43 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_47 = YPmet(FUNCODEREF(fun_memQ_47),LITREF(lit_39),T42,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScollectionsScollectionYmemQ);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScollectionsScollectionYmemQ);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_memQ_47;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScollectionsScollectionYmemQ,T44);
  T48 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_copy_48 = YPmet(FUNCODEREF(fun_as_copy_48),LITREF(lit_61),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScollectionsScollectionYas_copy);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScollectionsScollectionYas_copy);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_as_copy_48;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScollectionsScollectionYas_copy,T49);
  lit_83 = YPPsym((P)"=");
  lit_84 = YPPsym((P)"c1");
  lit_85 = YPPsym((P)"c2");
  lit_86 = YPPsym((P)"eq");
  lit_87 = YPPsym((P)"e1");
  lit_88 = YPPsym((P)"e2");
  T54 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_88)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eq_49 = YPmet(FUNCODEREF(fun_eq_49),LITREF(lit_86),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_50 = YPmet(FUNCODEREF(fun_E_50),LITREF(lit_83),T53,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSmathYE);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSmathYE);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_E_50;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSmathYE,T55);
  T60 = YPsig(YPPlist(2,LITREF(lit_80),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_51 = YPmet(FUNCODEREF(fun_fnd_51),LITREF(lit_74),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(3,LITREF(lit_57),LITREF(lit_1),LITREF(lit_16)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_any2Q_52 = YPmet(FUNCODEREF(fun_any2Q_52),LITREF(lit_56),T59,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YgooScollectionsScollectionYany2Q);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooScollectionsScollectionYany2Q);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_any2Q_52;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooScollectionsScollectionYany2Q,T61);
  lit_89 = YPPsym((P)"all2?");
  T66 = YPsig(YPPlist(2,LITREF(lit_80),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_53 = YPmet(FUNCODEREF(fun_fnd_53),LITREF(lit_74),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(3,LITREF(lit_57),LITREF(lit_1),LITREF(lit_16)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_all2Q_54 = YPmet(FUNCODEREF(fun_all2Q_54),LITREF(lit_89),T65,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooStypesYall2Q);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooStypesYall2Q);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_all2Q_54;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooStypesYall2Q,T67);
  lit_90 = YPPsym((P)"ez");
  T72 = YPsig(YPPlist(3,LITREF(lit_80),LITREF(lit_81),LITREF(lit_90)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lop_55 = YPmet(FUNCODEREF(fun_lop_55),LITREF(lit_79),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(4,LITREF(lit_28),LITREF(lit_1),LITREF(lit_16),LITREF(lit_53)),YPPlist(4,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do3_56 = YPmet(FUNCODEREF(fun_do3_56),LITREF(lit_52),T71,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YgooScollectionsScollectionYdo3);
  if (T75 != YPfalse) {
    T74 = VARREF(YgooScollectionsScollectionYdo3);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_do3_56;
  T73 = CALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YgooScollectionsScollectionYdo3,T73);
  T77 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_36)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_57 = YPmet(FUNCODEREF(fun_elt_57),LITREF(lit_0),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YgooSmacrosYelt);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooSmacrosYelt);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_elt_57;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooSmacrosYelt,T78);
  tmpF941 = YPfalse;
  if (tmpF941 != YPfalse) {
    T82 = VARREF(YgooScollectionsScollectionYadd);
  } else {
    T82 = YPfalse;
  }
  tmpF942 = YPfalse;
  if (tmpF942 != YPfalse) {
    T83 = VARREF(YgooScollectionsScollectionYLtabG);
  } else {
    T83 = YPfalse;
  }
  T84 = YPfalse;
  return T84;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
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
  {"def", &module_info_runtimeSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
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
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"t=", &module_info_gooStypes, "t="},
  {"-", &module_info_gooSmath, "-"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"/", &module_info_gooSmath, "/"},
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
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
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
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"as", &module_info_gooStypes, "as"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"tup", &module_info_runtimeSboot, "tup"},
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
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"head", &module_info_runtimeSboot, "head"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
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
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
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
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
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
  {"to-upper", &module_info_gooSmath, "to-upper"},
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
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
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
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"&", &module_info_gooSmath, "&"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
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
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
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
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"and", &module_info_gooSmacros, "and"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
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
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"round", &module_info_gooSmath, "round"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"low-elt", &YgooScollectionsScollectionYlow_elt},
  {"map-keyed", &YgooScollectionsScollectionYmap_keyed},
  {"items", &YgooScollectionsScollectionYitems},
  {"range-error", &YgooScollectionsScollectionYrange_error},
  {"add!", &YgooScollectionsScollectionYaddX},
  {"fold", &YgooScollectionsScollectionYfold},
  {"elt-setter", &YgooScollectionsScollectionYelt_setter},
  {"do-keyed", &YgooScollectionsScollectionYdo_keyed},
  {"elts", &YgooScollectionsScollectionYelts},
  {"mem?", &YgooScollectionsScollectionYmemQ},
  {"all?", &YgooScollectionsScollectionYallQ},
  {"map2", &YgooScollectionsScollectionYmap2},
  {"keys", &YgooScollectionsScollectionYkeys},
  {"del", &YgooScollectionsScollectionYdel},
  {"add", &YgooScollectionsScollectionYadd},
  {"any2?", &YgooScollectionsScollectionYany2Q},
  {"now-setter", &YgooScollectionsScollectionYnow_setter},
  {"nxt", &YgooScollectionsScollectionYnxt},
  {"---main-1---", NULL},
  {"elt-or", &YgooScollectionsScollectionYelt_or},
  {"---main-2---", NULL},
  {"into", &YgooScollectionsScollectionYinto},
  {"empty", &YgooScollectionsScollectionYempty},
  {"now-key", &YgooScollectionsScollectionYnow_key},
  {"zap", &YgooScollectionsScollectionYzap},
  {"now", &YgooScollectionsScollectionYnow},
  {"fin?", &YgooScollectionsScollectionYfinQ},
  {"fill", &YgooScollectionsScollectionYfill},
  {"enum", &YgooScollectionsScollectionYenum},
  {"find", &YgooScollectionsScollectionYfind},
  {"<tab>", &YgooScollectionsScollectionYLtabG},
  {"key-test", &YgooScollectionsScollectionYkey_test},
  {"$elt-default", &YgooScollectionsScollectionYDelt_default},
  {"do3", &YgooScollectionsScollectionYdo3},
  {"as-copy", &YgooScollectionsScollectionYas_copy},
  {"key-type", &YgooScollectionsScollectionYkey_type},
  {"find-or", &YgooScollectionsScollectionYfind_or},
  {"elt-default", &YgooScollectionsScollectionYelt_default},
  {"<elt-default>", &YgooScollectionsScollectionYLelt_defaultG},
  {"fold+", &YgooScollectionsScollectionYfoldA},
  {"do2", &YgooScollectionsScollectionYdo2},
  {"low-elt-setter", &YgooScollectionsScollectionYlow_elt_setter},
  {"dup", &YgooScollectionsScollectionYdup},
  {"elt-type", &YgooScollectionsScollectionYelt_type},
  {"<enum>", &YgooScollectionsScollectionYLenumG},
  {"fab", &YgooScollectionsScollectionYfab},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"low-elt", "low-elt"},
  {"map-keyed", "map-keyed"},
  {"items", "items"},
  {"len", "len"},
  {"range-error", "range-error"},
  {"add!", "add!"},
  {"fold", "fold"},
  {"do", "do"},
  {"elt-setter", "elt-setter"},
  {"do-keyed", "do-keyed"},
  {"elts", "elts"},
  {"mem?", "mem?"},
  {"all?", "all?"},
  {"add", "add"},
  {"any2?", "any2?"},
  {"now-setter", "now-setter"},
  {"nxt", "nxt"},
  {"elt-or", "elt-or"},
  {"into", "into"},
  {"empty", "empty"},
  {"now-key", "now-key"},
  {"zap", "zap"},
  {"map2", "map2"},
  {"now", "now"},
  {"empty?", "empty?"},
  {"fin?", "fin?"},
  {"fill", "fill"},
  {"elt", "elt"},
  {"map", "map"},
  {"del", "del"},
  {"keys", "keys"},
  {"enum", "enum"},
  {"find", "find"},
  {"fabs", "fabs"},
  {"<tab>", "<tab>"},
  {"all2?", "all2?"},
  {"key-test", "key-test"},
  {"do3", "do3"},
  {"as-copy", "as-copy"},
  {"key-type", "key-type"},
  {"find-or", "find-or"},
  {"<col>", "<col>"},
  {"any?", "any?"},
  {"elt-default", "elt-default"},
  {"fold+", "fold+"},
  {"do2", "do2"},
  {"low-elt-setter", "low-elt-setter"},
  {"dup", "dup"},
  {"elt-type", "elt-type"},
  {"<enum>", "<enum>"},
  {"fab", "fab"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsScollection;
MODULE_INFO module_info_gooScollectionsScollection = {
  "goo/collections/collection",
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

/* EXPRESSION: */

extern void load_module_gooScollectionsScollection (void);

void load_module_gooScollectionsScollection (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();

  (P)YgooScollectionsScollectionY___main_0___();
  (P)YgooScollectionsScollectionY___main_1___();
  (P)YgooScollectionsScollectionY___main_2___();

}

/* END OF GENERATED CODE. */
