/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/col */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLlogG,"goo/boot","<log>");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsScolYDeq_nul,"goo/cols/col","$eq-nul");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooScolsScolYLelt_defaultG,"goo/cols/col","<elt-default>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooScolsScolYDelt_default,"goo/cols/col","$elt-default");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ytup,"goo/boot","tup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YOlst,"goo/boot","@lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathY1A,"goo/math","1+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_60);
DEFLIT(lit_79);
DEFLIT(lit_74);
DEFLIT(lit_66);
DEFLIT(lit_26);
DEFLIT(lit_0);
DEFLIT(lit_41);
DEFLIT(lit_59);
DEFLIT(lit_9);
DEFLIT(lit_34);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_28);
DEFLIT(lit_17);
DEFLIT(lit_36);
DEFLIT(lit_69);
DEFLIT(lit_20);
DEFLIT(lit_16);
DEFLIT(lit_35);
DEFLIT(lit_3);
DEFLIT(lit_37);
DEFLIT(lit_57);
DEFLIT(lit_63);
DEFLIT(lit_29);
DEFLIT(lit_61);
DEFLIT(lit_46);
DEFLIT(lit_7);
DEFLIT(lit_51);
DEFLIT(lit_71);
DEFLIT(lit_1);
DEFLIT(lit_77);
DEFLIT(lit_70);
DEFLIT(lit_78);
DEFLIT(lit_2);
DEFLIT(lit_42);
DEFLIT(lit_76);
DEFLIT(lit_11);
DEFLIT(lit_73);
DEFLIT(lit_21);
DEFLIT(lit_4);
DEFLIT(lit_49);
DEFLIT(lit_10);
DEFLIT(lit_18);
DEFLIT(lit_50);
DEFLIT(lit_22);
DEFLIT(lit_44);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_72);
DEFLIT(lit_52);
DEFLIT(lit_23);
DEFLIT(lit_65);
DEFLIT(lit_62);
DEFLIT(lit_82);
DEFLIT(lit_53);
DEFLIT(lit_40);
DEFLIT(lit_25);
DEFLIT(lit_8);
DEFLIT(lit_68);
DEFLIT(lit_81);
DEFLIT(lit_54);
DEFLIT(lit_80);
DEFLIT(lit_75);
DEFLIT(lit_45);
DEFLIT(lit_5);
DEFLIT(lit_43);
DEFLIT(lit_55);
DEFLIT(lit_58);
DEFLIT(lit_27);
DEFLIT(lit_48);
DEFLIT(lit_39);
DEFLIT(lit_56);
DEFLIT(lit_12);
DEFLIT(lit_31);
DEFLIT(lit_13);
DEFLIT(lit_67);
DEFLIT(lit_38);
DEFLIT(lit_47);
DEFLIT(lit_6);
DEFLIT(lit_64);
DEFLIT(lit_32);
DEFLIT(lit_33);
DEFLIT(lit_30);

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
LOCFOR(fun_range_error_25);
LOCFOR(fun_fnd_26);
LOCFOR(fun_find_or_27);
LOCFOR(fun_find_28);
LOCFOR(fun_zap_29);
LOCFOR(fun_lop_30);
LOCFOR(fun_do_31);
LOCFOR(fun_con_32);
LOCFOR(fun_map_33);
LOCFOR(fun_lop_34);
LOCFOR(fun_do_keyed_35);
LOCFOR(fun_con_36);
LOCFOR(fun_map_keyed_37);
LOCFOR(fun_con_38);
LOCFOR(fun_keys_39);
LOCFOR(fun_con_40);
LOCFOR(fun_items_41);
LOCFOR(fun_42);
LOCFOR(fun_memQ_43);
LOCFOR(fun_col_res_type_44);
LOCFOR(fun_col_res_45);
LOCFOR(fun_eq_46);
LOCFOR(fun_E_47);
LOCFOR(fun_elt_48);
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
  P countF939;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_count_3,1);
  countF939 = T1;
  FUNINIT(countF939, 1,countF939);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,countF939,T3,YPint((P)0));
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
  P inF940;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_11,2);
  inF940 = T1;
  FUNINIT(inF940, 2,dst_,inF940);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL1(0,inF940,T3);
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
  P inF941;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_14,3);
  inF941 = T1;
  FUNINIT(inF941, 3,dst_,src_,inF941);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T2 = CALL1(0,inF941,T3);
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
  P tmpF942;
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
    tmpF942 = T3;
    if (tmpF942 != YPfalse) {
      T6 = tmpF942;
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
  P fndF943;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_17,2);
  fndF943 = T1;
  FUNINIT(fndF943, 2,test_,fndF943);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF943,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_19) {
  P e_;
  P tmpF945;
  P tmpF944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  tmpF944 = T1;
  if (tmpF944 != YPfalse) {
    T2 = tmpF944;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T4 = CALL1(1,FREEREF(0),T5);
    tmpF945 = T4;
    if (tmpF945 != YPfalse) {
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
  P fndF946;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_19,2);
  fndF946 = T1;
  FUNINIT(fndF946, 2,test_,fndF946);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF946,T3);
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
  P redF947;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_21,2);
  redF947 = T1;
  FUNINIT(redF947, 2,combine_,redF947);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,redF947,init_,T3);
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
  P redF950;
  P initF949;
  P eF948;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF948 = T1;
  T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF948);
  initF949 = T3;
  T5 = FUNSHELL(1,fun_red_23,2);
  redF950 = T5;
  FUNINIT(redF950, 2,combine_,redF950);
  T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF948);
  T6 = CALL2(0,redF950,initF949,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_25) {
  P c_,k_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(k_, 1);
loop:
  T0 = CALL3(1,VARREF(Yerror),LITREF(lit_73),c_,k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_26) {
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

FUNCODEDEF(fun_find_or_27) {
  P f_,c_,default_;
  P fndF951;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_26,3);
  fndF951 = T1;
  FUNINIT(fndF951, 3,default_,f_,fndF951);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,fndF951,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_28) {
  P f_,c_;
  P valF952;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYfind_or),f_,c_,VARREF(YgooScolsScolYDelt_default));
  valF952 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF952,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooScolsScolYrange_error),c_,f_);
    T2 = T4;
  } else {
    T2 = valF952;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zap_29) {
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

FUNCODEDEF(fun_lop_30) {
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

FUNCODEDEF(fun_do_31) {
  P f_,c_;
  P lopF953;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_30,2);
  lopF953 = T1;
  FUNINIT(lopF953, 2,f_,lopF953);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,lopF953,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_32) {
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

FUNCODEDEF(fun_map_33) {
  P f_,c_;
  P conF954;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_32,3);
  conF954 = T1;
  FUNINIT(conF954, 3,c_,f_,conF954);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF954,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_34) {
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

FUNCODEDEF(fun_do_keyed_35) {
  P f_,c_;
  P lopF955;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_34,2);
  lopF955 = T1;
  FUNINIT(lopF955, 2,f_,lopF955);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL1(0,lopF955,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_36) {
  P res_,e_;
  P keyF956;
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
    keyF956 = T4;
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T5 = CALL2(1,FREEREF(1),keyF956,T6);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T5,res_,keyF956);
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

FUNCODEDEF(fun_map_keyed_37) {
  P f_,c_;
  P conF957;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_36,3);
  conF957 = T1;
  FUNINIT(conF957, 3,c_,f_,conF957);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF957,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_38) {
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

FUNCODEDEF(fun_keys_39) {
  P c_;
  P conF958;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_38,1);
  conF958 = T1;
  FUNINIT(conF958, 1,conF958);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF958,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_40) {
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

FUNCODEDEF(fun_items_41) {
  P c_;
  P conF959;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_40,1);
  conF959 = T1;
  FUNINIT(conF959, 1,conF959);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF959,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_42) {
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

FUNCODEDEF(fun_memQ_43) {
  P c_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_42,1,x_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_res_type_44) {
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

FUNCODEDEF(fun_col_res_45) {
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

FUNCODEDEF(fun_eq_46) {
  P e1_;
  P tmpF960;
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
    tmpF960 = T3;
    if (tmpF960 != YPfalse) {
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

FUNCODEDEF(fun_E_47) {
  P c1_,c2_;
  P eqF962;
  P tmpF961;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c1_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),c2_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,T3);
  tmpF961 = T1;
  if (tmpF961 != YPfalse) {
    T6 = FUNSHELL(1,fun_eq_46,2);
    eqF962 = T6;
    FUNINIT(eqF962, 2,c2_,eqF962);
    T8 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
    T7 = CALL1(0,eqF962,T8);
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_48) {
  P c_,key_;
  P valF963;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,key_,VARREF(YgooScolsScolYDelt_default));
  valF963 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),valF963,VARREF(YgooScolsScolYDelt_default));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooScolsScolYrange_error),c_,key_);
    T2 = T4;
  } else {
    T2 = valF963;
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
  lit_1 = YPPsym((P)"x");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYlen,T0);
  lit_2 = YPPsym((P)"elt");
  lit_3 = YPPsym((P)"k");
  T3 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYelt,T2);
  lit_4 = YPPsym((P)"elt-or");
  lit_5 = YPPsym((P)"default");
  T5 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_3),LITREF(lit_5)),YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_or,T4);
  lit_6 = YPPsym((P)"elt-type");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_type,T6);
  lit_7 = YPPsym((P)"elt-default");
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_default,T8);
  lit_8 = YPPsym((P)"key-type");
  T11 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkey_type,T10);
  lit_9 = YPPsym((P)"key-test");
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkey_test,T12);
  lit_10 = YPPsym((P)"elts");
  lit_11 = YPPsym((P)"keys");
  T15 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_11)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelts,T14);
  lit_12 = YPPsym((P)"empty?");
  T17 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYemptyQ,T16);
  lit_13 = YPPsym((P)"empty");
  T20 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T19 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T20),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYempty,T18);
  lit_14 = YPPsym((P)"add");
  lit_15 = YPPsym((P)"y");
  T22 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYadd,T21);
  lit_16 = YPPsym((P)"dup");
  T24 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_16),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdup,T23);
  lit_17 = YPPsym((P)"fab");
  lit_18 = YPPsym((P)"t");
  lit_19 = YPPsym((P)"s");
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T26 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_19)),YPPlist(2,T27,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab,T25);
  lit_20 = YPPsym((P)"col");
  lit_21 = YPPsym((P)"key-vals");
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T29 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_21)),YPPlist(1,T30),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol,T28);
  lit_22 = YPPsym((P)"fabs");
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T32 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_10)),YPPlist(1,T33),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYfabs,T31);
  lit_23 = YPPsym((P)"fill");
  lit_24 = YPPsym((P)"val");
  T35 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_24)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_23),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfill,T34);
  lit_25 = YPPsym((P)"any?");
  lit_26 = YPPsym((P)"f");
  T37 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T36 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_25),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYanyQ,T36);
  lit_27 = YPPsym((P)"all?");
  T39 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T38 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_27),T39,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYallQ,T38);
  lit_28 = YPPsym((P)"fold");
  lit_29 = YPPsym((P)"combine");
  lit_30 = YPPsym((P)"init");
  T41 = YPsig(YPPlist(3,LITREF(lit_29),LITREF(lit_30),LITREF(lit_1)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T40 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_28),T41,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfold,T40);
  lit_31 = YPPsym((P)"fold+");
  T43 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T42 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_31),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfoldA,T42);
  lit_32 = YPPsym((P)"find-or");
  T45 = YPsig(YPPlist(3,LITREF(lit_26),LITREF(lit_1),LITREF(lit_5)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfind_or,T44);
  lit_33 = YPPsym((P)"find");
  T47 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T46 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_33),T47,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfind,T46);
  lit_34 = YPPsym((P)"del");
  lit_35 = YPPsym((P)"key");
  T49 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_35)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T48 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_34),T49,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdel,T48);
  lit_36 = YPPsym((P)"zap");
  T51 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T50 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T51,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYzap,T50);
  lit_37 = YPPsym((P)"do");
  T53 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T52 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_37),T53,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYdo,T52);
  lit_38 = YPPsym((P)"mem?");
  T55 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T54 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T55,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYmemQ,T54);
  lit_39 = YPPsym((P)"c");
  T57 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T56 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkeys,T56);
  lit_40 = YPPsym((P)"items");
  T59 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T58 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T59,Ynil,YPfalse,YPfalse,YPfalse);
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
  P T192,T193,T194,T195,T196,T197;
DEFCREGS();
loop:
  lit_41 = YPPsym((P)"col-res-type");
  T1 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_41),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol_res_type,T0);
  lit_42 = YPPsym((P)"<enum>");
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_42),T3);
  VARSET(YgooScolsScolYLenumG,T2);
  lit_43 = YPPsym((P)"enum");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_43),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYenum,T4);
  lit_44 = YPPsym((P)"fin?");
  lit_45 = YPPsym((P)"e");
  T7 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_44),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfinQ,T6);
  lit_46 = YPPsym((P)"nxt");
  T9 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnxt,T8);
  lit_47 = YPPsym((P)"now");
  T11 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_47),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow,T10);
  lit_48 = YPPsym((P)"now-setter");
  lit_49 = YPPsym((P)"v");
  T13 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_48),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow_setter,T12);
  lit_50 = YPPsym((P)"now-key");
  T15 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_50),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow_key,T14);
  lit_51 = YPPsym((P)"do-keyed");
  T17 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_51),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdo_keyed,T16);
  lit_52 = YPPsym((P)"map-keyed");
  T19 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_52),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYmap_keyed,T18);
  lit_53 = YPPsym((P)"map");
  T21 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_53),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYmap,T20);
  lit_54 = YPPsym((P)"fab-into");
  T23 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_54),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_into,T22);
  lit_55 = YPPsym((P)"fab-fill!");
  T25 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_55),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_fillX,T24);
  lit_56 = YPPsym((P)"range-error");
  T27 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_56),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYrange_error,T26);
  lit_57 = YPPsym((P)"low-elt");
  T29 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_57),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYlow_elt,T28);
  lit_58 = YPPsym((P)"fab-elt-setter");
  T31 = YPsig(YPPlist(3,LITREF(lit_49),LITREF(lit_1),LITREF(lit_3)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_58),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_elt_setter,T30);
  lit_59 = YPPsym((P)"col-res");
  T33 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T32 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_59),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol_res,T32);
  lit_60 = YPPsym((P)"as");
  T35 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T34 = YPsig(YPPlist(2,LITREF(lit_18),LITREF(lit_1)),YPPlist(2,T35,VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_60),T34,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooStypesYas);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooStypesYas);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_as_0;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooStypesYas,T36);
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_dup_1 = YPmet(FUNCODEREF(fun_dup_1),LITREF(lit_16),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooScolsScolYdup);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooScolsScolYdup);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_dup_1;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooScolsScolYdup,T41);
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolIG)),YPfalse,YPint((P)1),VARREF(YLcolIG),Ynil);
  fun_dup_2 = YPmet(FUNCODEREF(fun_dup_2),LITREF(lit_16),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooScolsScolYdup);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooScolsScolYdup);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_dup_2;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooScolsScolYdup,T46);
  lit_61 = YPPsym((P)"count");
  lit_62 = YPPsym((P)"i");
  T51 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_62)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_count_3 = YPmet(FUNCODEREF(fun_count_3),LITREF(lit_61),T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_4 = YPmet(FUNCODEREF(fun_len_4),LITREF(lit_0),T50,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooStypesYlen);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooStypesYlen);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_len_4;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooStypesYlen,T52);
  T56 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_5 = YPmet(FUNCODEREF(fun_elt_type_5),LITREF(lit_6),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooScolsScolYelt_type);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooScolsScolYelt_type);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_elt_type_5;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooScolsScolYelt_type,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_6 = YPmet(FUNCODEREF(fun_key_type_6),LITREF(lit_8),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooScolsScolYkey_type);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooScolsScolYkey_type);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_key_type_6;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooScolsScolYkey_type,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_7 = YPmet(FUNCODEREF(fun_key_test_7),LITREF(lit_9),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooScolsScolYkey_test);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooScolsScolYkey_test);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_key_test_7;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooScolsScolYkey_test,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_8 = YPmet(FUNCODEREF(fun_emptyQ_8),LITREF(lit_12),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooSmacrosYemptyQ);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_emptyQ_8;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooSmacrosYemptyQ,T72);
  T77 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T76 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,T77),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_13),T76,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YgooScolsScolYempty);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooScolsScolYempty);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_empty_9;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooScolsScolYempty,T78);
  T82 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_10 = YPmet(FUNCODEREF(fun_elt_default_10),LITREF(lit_7),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YgooScolsScolYelt_default);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooScolsScolYelt_default);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_elt_default_10;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooScolsScolYelt_default,T83);
  lit_63 = YPPsym((P)"dst");
  lit_64 = YPPsym((P)"src");
  lit_65 = YPPsym((P)"in");
  lit_66 = YPPsym((P)"ss");
  T88 = YPsig(YPPlist(1,LITREF(lit_66)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_11 = YPmet(FUNCODEREF(fun_in_11),LITREF(lit_65),T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(2,LITREF(lit_63),LITREF(lit_64)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_into_12 = YPmet(FUNCODEREF(fun_fab_into_12),LITREF(lit_54),T87,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YgooScolsScolYfab_into);
  if (T91 != YPfalse) {
    T90 = VARREF(YgooScolsScolYfab_into);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_fab_into_12;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YgooScolsScolYfab_into,T89);
  lit_67 = YPPsym((P)"objects");
  T94 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T93 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_67)),YPPlist(1,T94),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_fabs_13 = YPmet(FUNCODEREF(fun_fabs_13),LITREF(lit_22),T93,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooSmathYfabs);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSmathYfabs);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_fabs_13;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSmathYfabs,T95);
  lit_68 = YPPsym((P)"ds");
  T100 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_14 = YPmet(FUNCODEREF(fun_in_14),LITREF(lit_65),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(2,LITREF(lit_63),LITREF(lit_64)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_fillX_15 = YPmet(FUNCODEREF(fun_fab_fillX_15),LITREF(lit_55),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YgooScolsScolYfab_fillX);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScolsScolYfab_fillX);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_fab_fillX_15;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScolsScolYfab_fillX,T101);
  T105 = YPsig(YPPlist(2,LITREF(lit_63),LITREF(lit_24)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_16 = YPmet(FUNCODEREF(fun_fill_16),LITREF(lit_23),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YgooScolsScolYfill);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScolsScolYfill);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_fill_16;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScolsScolYfill,T106);
  lit_69 = YPPsym((P)"test");
  lit_70 = YPPsym((P)"fnd");
  T111 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_17 = YPmet(FUNCODEREF(fun_fnd_17),LITREF(lit_70),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_18 = YPmet(FUNCODEREF(fun_anyQ_18),LITREF(lit_25),T110,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YgooStypesYanyQ);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooStypesYanyQ);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_anyQ_18;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooStypesYanyQ,T112);
  T117 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_19 = YPmet(FUNCODEREF(fun_fnd_19),LITREF(lit_70),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_20 = YPmet(FUNCODEREF(fun_allQ_20),LITREF(lit_27),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooScolsScolYallQ);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooScolsScolYallQ);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_allQ_20;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooScolsScolYallQ,T118);
  lit_71 = YPPsym((P)"red");
  lit_72 = YPPsym((P)"res");
  T123 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_21 = YPmet(FUNCODEREF(fun_red_21),LITREF(lit_71),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(3,LITREF(lit_29),LITREF(lit_30),LITREF(lit_39)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_22 = YPmet(FUNCODEREF(fun_fold_22),LITREF(lit_28),T122,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YgooScolsScolYfold);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooScolsScolYfold);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_fold_22;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooScolsScolYfold,T124);
  T129 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_23 = YPmet(FUNCODEREF(fun_red_23),LITREF(lit_71),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_24 = YPmet(FUNCODEREF(fun_foldA_24),LITREF(lit_31),T128,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YgooScolsScolYfoldA);
  if (T132 != YPfalse) {
    T131 = VARREF(YgooScolsScolYfoldA);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_foldA_24;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YgooScolsScolYfoldA,T130);
  lit_73 = YPsb((P)"RANGE ERROR %= %=");
  T134 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_3)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_25 = YPmet(FUNCODEREF(fun_range_error_25),LITREF(lit_56),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YgooScolsScolYrange_error);
  if (T137 != YPfalse) {
    T136 = VARREF(YgooScolsScolYrange_error);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_range_error_25;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YgooScolsScolYrange_error,T135);
  lit_74 = YPPsym((P)"<elt-default>");
  T140 = (P)YPpair(VARREF(YLanyG),Ynil);
  T139 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_74),T140);
  VARSET(YgooScolsScolYLelt_defaultG,T139);
  T141 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsScolYLelt_defaultG));
  VARSET(YgooScolsScolYDelt_default,T141);
  T143 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_26 = YPmet(FUNCODEREF(fun_fnd_26),LITREF(lit_70),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(3,LITREF(lit_26),LITREF(lit_39),LITREF(lit_5)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_27 = YPmet(FUNCODEREF(fun_find_or_27),LITREF(lit_32),T142,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YgooScolsScolYfind_or);
  if (T146 != YPfalse) {
    T145 = VARREF(YgooScolsScolYfind_or);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_find_or_27;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YgooScolsScolYfind_or,T144);
  T148 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_28 = YPmet(FUNCODEREF(fun_find_28),LITREF(lit_33),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YgooScolsScolYfind);
  if (T151 != YPfalse) {
    T150 = VARREF(YgooScolsScolYfind);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_find_28;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YgooScolsScolYfind,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_zap_29 = YPmet(FUNCODEREF(fun_zap_29),LITREF(lit_36),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YgooScolsScolYzap);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooScolsScolYzap);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_zap_29;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooScolsScolYzap,T154);
  lit_75 = YPPsym((P)"lop");
  T159 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_30 = YPmet(FUNCODEREF(fun_lop_30),LITREF(lit_75),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_31 = YPmet(FUNCODEREF(fun_do_31),LITREF(lit_37),T158,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YgooSmacrosYdo);
  if (T162 != YPfalse) {
    T161 = VARREF(YgooSmacrosYdo);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_do_31;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YgooSmacrosYdo,T160);
  lit_76 = YPPsym((P)"con");
  T165 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_32 = YPmet(FUNCODEREF(fun_con_32),LITREF(lit_76),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_33 = YPmet(FUNCODEREF(fun_map_33),LITREF(lit_53),T164,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YgooSmacrosYmap);
  if (T168 != YPfalse) {
    T167 = VARREF(YgooSmacrosYmap);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_map_33;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YgooSmacrosYmap,T166);
  T171 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_34 = YPmet(FUNCODEREF(fun_lop_34),LITREF(lit_75),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_35 = YPmet(FUNCODEREF(fun_do_keyed_35),LITREF(lit_51),T170,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(YgooScolsScolYdo_keyed);
  if (T174 != YPfalse) {
    T173 = VARREF(YgooScolsScolYdo_keyed);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_do_keyed_35;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YgooScolsScolYdo_keyed,T172);
  T177 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_36 = YPmet(FUNCODEREF(fun_con_36),LITREF(lit_76),T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_39)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_37 = YPmet(FUNCODEREF(fun_map_keyed_37),LITREF(lit_52),T176,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YgooScolsScolYmap_keyed);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooScolsScolYmap_keyed);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_map_keyed_37;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooScolsScolYmap_keyed,T178);
  T183 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_38 = YPmet(FUNCODEREF(fun_con_38),LITREF(lit_76),T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_39 = YPmet(FUNCODEREF(fun_keys_39),LITREF(lit_11),T182,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YgooScolsScolYkeys);
  if (T186 != YPfalse) {
    T185 = VARREF(YgooScolsScolYkeys);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_keys_39;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YgooScolsScolYkeys,T184);
  T192 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T191 = fun_con_40 = YPmet(FUNCODEREF(fun_con_40),LITREF(lit_76),T192,ENVNUL,PNUL,YPfalse);
  T190 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T189 = fun_items_41 = YPmet(FUNCODEREF(fun_items_41),LITREF(lit_40),T190,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YgooScolsScolYitems);
  if (T196 != YPfalse) {
    T195 = VARREF(YgooScolsScolYitems);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_items_41;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  T193 = VARSET(YgooScolsScolYitems,T194);
  T188 = T193;
  return T188;
}

P YgooScolsScolY___main_2___() {
  P tmpF966;
  P tmpF965;
  P tmpF964;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
DEFCREGS();
loop:
  T1 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_43 = YPmet(FUNCODEREF(fun_memQ_43),LITREF(lit_38),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YgooScolsScolYmemQ);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooScolsScolYmemQ);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_memQ_43;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooScolsScolYmemQ,T2);
  T6 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_44 = YPmet(FUNCODEREF(fun_col_res_type_44),LITREF(lit_41),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YgooScolsScolYcol_res_type);
  if (T9 != YPfalse) {
    T8 = VARREF(YgooScolsScolYcol_res_type);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_col_res_type_44;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YgooScolsScolYcol_res_type,T7);
  T11 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_col_res_45 = YPmet(FUNCODEREF(fun_col_res_45),LITREF(lit_59),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YgooScolsScolYcol_res);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooScolsScolYcol_res);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_col_res_45;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooScolsScolYcol_res,T12);
  lit_77 = YPPlist(1,YPPsym((P)"eq-nul"));
  VARSET(YgooScolsScolYDeq_nul,LITREF(lit_77));
  lit_78 = YPPsym((P)"=");
  lit_79 = YPPsym((P)"c1");
  lit_80 = YPPsym((P)"c2");
  lit_81 = YPPsym((P)"eq");
  lit_82 = YPPsym((P)"e1");
  T17 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eq_46 = YPmet(FUNCODEREF(fun_eq_46),LITREF(lit_81),T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(2,LITREF(lit_79),LITREF(lit_80)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_47 = YPmet(FUNCODEREF(fun_E_47),LITREF(lit_78),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooSmathYE);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSmathYE);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_E_47;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSmathYE,T18);
  T22 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_35)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_48 = YPmet(FUNCODEREF(fun_elt_48),LITREF(lit_2),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooSmacrosYelt);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooSmacrosYelt);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_elt_48;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooSmacrosYelt,T23);
  tmpF964 = YPfalse;
  if (tmpF964 != YPfalse) {
    T27 = VARREF(YgooScolsScolYadd);
  } else {
    T27 = YPfalse;
  }
  tmpF965 = YPfalse;
  if (tmpF965 != YPfalse) {
    T28 = VARREF(YgooScolsScolYLtabG);
  } else {
    T28 = YPfalse;
  }
  tmpF966 = YPfalse;
  if (tmpF966 != YPfalse) {
    T29 = VARREF(YgooScolsScolYinto);
  } else {
    T29 = YPfalse;
  }
  T30 = YPfalse;
  return T30;
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
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {">", &module_info_gooSmag, ">"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<", &module_info_gooSmag, "<"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"for", &module_info_gooSmacros, "for"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"use", &module_info_gooSboot, "use"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"df", &module_info_gooSboot, "df"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"while", &module_info_gooSmacros, "while"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"t+", &module_info_gooStypes, "t+"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"*", &module_info_gooSmath, "*"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"set", &module_info_gooSboot, "set"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"and", &module_info_gooSmacros, "and"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"when", &module_info_gooSmacros, "when"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@len", &module_info_gooSboot, "@len"},
  {"cos", &module_info_gooSmath, "cos"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {">>", &module_info_gooSmath, ">>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"try", &module_info_gooSboot, "try"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"export", &module_info_gooSboot, "export"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"==", &module_info_gooSmacros, "=="},
  {"1+", &module_info_gooSmath, "1+"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", PVAR, NULL},
  {"del", CVAR, &YgooScolsScolYdel},
  {"now", CVAR, &YgooScolsScolYnow},
  {"dup", CVAR, &YgooScolsScolYdup},
  {"now-setter", CVAR, &YgooScolsScolYnow_setter},
  {"enum", CVAR, &YgooScolsScolYenum},
  {"fin?", CVAR, &YgooScolsScolYfinQ},
  {"add", CVAR, &YgooScolsScolYadd},
  {"col-res", CVAR, &YgooScolsScolYcol_res},
  {"find-or", CVAR, &YgooScolsScolYfind_or},
  {"empty", CVAR, &YgooScolsScolYempty},
  {"fab", CVAR, &YgooScolsScolYfab},
  {"all?", CVAR, &YgooScolsScolYallQ},
  {"fold+", CVAR, &YgooScolsScolYfoldA},
  {"fab-elt-setter", CVAR, &YgooScolsScolYfab_elt_setter},
  {"keys", CVAR, &YgooScolsScolYkeys},
  {"low-elt", CVAR, &YgooScolsScolYlow_elt},
  {"$eq-nul", CVAR, &YgooScolsScolYDeq_nul},
  {"col", CVAR, &YgooScolsScolYcol},
  {"items", CVAR, &YgooScolsScolYitems},
  {"---main-0---", PVAR, NULL},
  {"fold", CVAR, &YgooScolsScolYfold},
  {"key-test", CVAR, &YgooScolsScolYkey_test},
  {"range-error", CVAR, &YgooScolsScolYrange_error},
  {"key-type", CVAR, &YgooScolsScolYkey_type},
  {"<elt-default>", CVAR, &YgooScolsScolYLelt_defaultG},
  {"into", CVAR, &YgooScolsScolYinto},
  {"<enum>", CVAR, &YgooScolsScolYLenumG},
  {"elt-default", CVAR, &YgooScolsScolYelt_default},
  {"fab-fill!", CVAR, &YgooScolsScolYfab_fillX},
  {"col-res-type", CVAR, &YgooScolsScolYcol_res_type},
  {"elt-type", CVAR, &YgooScolsScolYelt_type},
  {"fab-into", CVAR, &YgooScolsScolYfab_into},
  {"fill", CVAR, &YgooScolsScolYfill},
  {"elts", CVAR, &YgooScolsScolYelts},
  {"---main-2---", PVAR, NULL},
  {"find", CVAR, &YgooScolsScolYfind},
  {"elt-or", CVAR, &YgooScolsScolYelt_or},
  {"$elt-default", CVAR, &YgooScolsScolYDelt_default},
  {"mem?", CVAR, &YgooScolsScolYmemQ},
  {"<tab>", CVAR, &YgooScolsScolYLtabG},
  {"map-keyed", CVAR, &YgooScolsScolYmap_keyed},
  {"zap", CVAR, &YgooScolsScolYzap},
  {"do-keyed", CVAR, &YgooScolsScolYdo_keyed},
  {"nxt", CVAR, &YgooScolsScolYnxt},
  {"now-key", CVAR, &YgooScolsScolYnow_key},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"del", "del"},
  {"do", "do"},
  {"now", "now"},
  {"dup", "dup"},
  {"now-setter", "now-setter"},
  {"enum", "enum"},
  {"fin?", "fin?"},
  {"add", "add"},
  {"col-res", "col-res"},
  {"find-or", "find-or"},
  {"empty", "empty"},
  {"fab", "fab"},
  {"elts", "elts"},
  {"empty?", "empty?"},
  {"all?", "all?"},
  {"fold+", "fold+"},
  {"fab-elt-setter", "fab-elt-setter"},
  {"keys", "keys"},
  {"col", "col"},
  {"do-keyed", "do-keyed"},
  {"low-elt", "low-elt"},
  {"fold", "fold"},
  {"key-test", "key-test"},
  {"range-error", "range-error"},
  {"key-type", "key-type"},
  {"into", "into"},
  {"<enum>", "<enum>"},
  {"elt-default", "elt-default"},
  {"fab-fill!", "fab-fill!"},
  {"any?", "any?"},
  {"col-res-type", "col-res-type"},
  {"elt-type", "elt-type"},
  {"fab-into", "fab-into"},
  {"items", "items"},
  {"fill", "fill"},
  {"map", "map"},
  {"fabs", "fabs"},
  {"find", "find"},
  {"elt-or", "elt-or"},
  {"mem?", "mem?"},
  {"<tab>", "<tab>"},
  {"map-keyed", "map-keyed"},
  {"elt", "elt"},
  {"zap", "zap"},
  {"len", "len"},
  {"<col.>", "<col.>"},
  {"nxt", "nxt"},
  {"<col>", "<col>"},
  {"now-key", "now-key"},
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
