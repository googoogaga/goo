/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/math */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(Yprop_getter,"boot","prop-getter");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
DEF(YprotoSmathYA,"proto/math","+");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
DEF(YprotoSmathYround_to,"proto/math","round-to");
EXT(YLmetG,"boot","<met>");
DEF(YprotoSmathYcontagious_call,"proto/math","contagious-call");
DEF(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(Yprop_init,"boot","prop-init");
DEF(YprotoSmathYroundS,"proto/math","round/");
EXT(YLsubclassG,"boot","<subclass>");
DEF(YprotoSmathYsin,"proto/math","sin");
EXT(YprotoStypesYtA,"proto/types","t+");
DEF(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
DEF(YprotoSmathYevenQ,"proto/math","even?");
EXT(YLchrG,"boot","<chr>");
DEF(YprotoSmathYabs,"proto/math","abs");
EXT(YLflatG,"boot","<flat>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
DEF(YprotoSmathYlog,"proto/math","log");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
DEF(YprotoSmathY_,"proto/math","-");
DEF(YprotoSmathYtanh,"proto/math","tanh");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ysig_specs,"boot","sig-specs");
DEF(YprotoSmathYB,"proto/math","&");
EXT(YLtupG,"boot","<tup>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
DEF(YprotoSmathYNEE,"proto/math","~==");
DEF(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYmap,"macros","map");
DEF(YprotoSmathYtruncS,"proto/math","trunc/");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoStypesYtQ,"proto/types","t?");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(Ysig_val,"boot","sig-val");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YLlstG,"boot","<lst>");
EXT(YLlogG,"boot","<log>");
DEF(YprotoSmathYneg,"proto/math","neg");
DEF(YprotoSmathYK,"proto/math","|");
DEF(YprotoSmathYsqrt,"proto/math","sqrt");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YprotoSmathYT,"proto/math","*");
DEF(YprotoSmathYround,"proto/math","round");
DEF(YprotoSmathYlogn,"proto/math","logn");
EXT(Ysym_name,"boot","sym-name");
DEF(YprotoSmathYas_log,"proto/math","as-log");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YprotoSmathY1A,"proto/math","1+");
DEF(YprotoSmathYpow,"proto/math","pow");
EXT(Yfun_name,"boot","fun-name");
DEF(YprotoSmathYdigitQ,"proto/math","digit?");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YprotoSmathYLbotG,"proto/math","<bot>");
DEF(YprotoSmathYto_str,"proto/math","to-str");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(Yobject_class,"boot","object-class");
DEF(YprotoSmathYfloorS,"proto/math","floor/");
DEF(YprotoSmathYatan,"proto/math","atan");
EXT(Yclass_parents,"boot","class-parents");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(Yprop_value,"boot","prop-value");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YmacrosYvar_type,"macros","var-type");
DEF(YprotoSmathYto_upper,"proto/math","to-upper");
EXT(YprotoStypesYanyQ,"proto/types","any?");
EXT(Yclass_props,"boot","class-props");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
DEF(YprotoSmathYGGG,"proto/math",">>>");
EXT(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YPsymbols,"boot","%symbols");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfun_names,"boot","fun-names");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
DEF(YprotoSmathYtrunc,"proto/math","trunc");
EXT(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(YprotoSmathYE,"proto/math","=");
DEF(YprotoSmathYalphaQ,"proto/math","alpha?");
DEF(YprotoSmathYceil,"proto/math","ceil");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
DEF(YprotoSmathYto_lower,"proto/math","to-lower");
EXT(YLmagG,"boot","<mag>");
EXT(YprotoSmagnitudesYmax,"proto/magnitudes","max");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfind_setter,"boot","find-setter");
DEF(YprotoSmathYposQ,"proto/math","pos?");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YprotoStypesYLproductG,"proto/types","<product>");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYcat,"macros","cat");
DEF(YprotoSmathYbitQ,"proto/math","bit?");
DEF(YprotoSmathYcosh,"proto/math","cosh");
EXT(Yadd_prop,"boot","add-prop");
EXT(YprotoStypesYlen,"proto/types","len");
EXT(YprotoStypesYtype_elts_setter,"proto/types","type-elts-setter");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLoptsG,"boot","<opts>");
DEF(YprotoSmathYmod,"proto/math","mod");
EXT(Ytail,"boot","tail");
DEF(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");
DEF(YprotoSmathYacos,"proto/math","acos");
EXT(YLtypeG,"boot","<type>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YLlocG,"boot","<loc>");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(Ytype_elts,"boot","type-elts");
DEF(YprotoSmathYLL,"proto/math","<<");
EXT(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(Yclass_name,"boot","class-name");
DEF(YprotoSmathYsinh,"proto/math","sinh");
EXT(YPPmacro,"boot","%%macro");
EXT(Yfind_getter,"boot","find-getter");
DEF(YprotoSmathYupperQ,"proto/math","upper?");
DEF(YprotoSmathYisqrt,"proto/math","isqrt");
DEF(YprotoSmathY1_,"proto/math","1-");
DEF(YprotoSmathYDe,"proto/math","$e");
DEF(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yfun_val,"boot","fun-val");
EXT(Yclass_ancestors,"boot","class-ancestors");
DEF(YprotoSmathYatan2,"proto/math","atan2");
DEF(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YDmin_int,"boot","$min-int");
DEF(YprotoSmathYnegQ,"proto/math","neg?");
DEF(YprotoSmathYfloor,"proto/math","floor");
EXT(YmacrosYpair,"macros","pair");
DEF(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
DEF(YprotoSmathYDpi,"proto/math","$pi");
EXT(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
DEF(YprotoSmathYceilingS,"proto/math","ceiling/");
DEF(YprotoSmathYasin,"proto/math","asin");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoStypesYas,"proto/types","as");
EXT(Yfun_mets,"boot","fun-mets");
DEF(YprotoSmathYrem,"proto/math","rem");
DEF(YprotoSmathYN,"proto/math","~");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YmacrosYdo,"macros","do");
EXT(YOisaQ,"boot","@isa?");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(YprotoSmathYC,"proto/math","^");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
DEF(YprotoSmathYfabs,"proto/math","fabs");
DEF(YprotoSmathYlowerQ,"proto/math","lower?");
DEF(YprotoSmathYto_digit,"proto/math","to-digit");
DEF(YprotoSmathYtan,"proto/math","tan");
EXT(Yobject_props,"boot","object-props");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLintG,"boot","<int>");
EXT(YLstrG,"boot","<str>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YprotoSmathYGG,"proto/math",">>");
EXT(YmacrosYcat_sym,"macros","cat-sym");
DEF(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
DEF(YprotoSmathYS,"proto/math","/");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
EXT(YPprop,"boot","%prop");
DEF(YprotoSmathYcos,"proto/math","cos");
EXT(YprotoStypesYtT,"proto/types","t*");
EXT(YPisa,"boot","%isa");
EXT(Yhead,"boot","head");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_103);
DEFLIT(lit_11);
DEFLIT(lit_30);
DEFLIT(lit_80);
DEFLIT(lit_86);
DEFLIT(lit_36);
DEFLIT(lit_105);
DEFLIT(lit_38);
DEFLIT(lit_46);
DEFLIT(lit_58);
DEFLIT(lit_97);
DEFLIT(lit_84);
DEFLIT(lit_7);
DEFLIT(lit_72);
DEFLIT(lit_35);
DEFLIT(lit_71);
DEFLIT(lit_19);
DEFLIT(lit_3);
DEFLIT(lit_39);
DEFLIT(lit_62);
DEFLIT(lit_21);
DEFLIT(lit_70);
DEFLIT(lit_37);
DEFLIT(lit_8);
DEFLIT(lit_29);
DEFLIT(lit_15);
DEFLIT(lit_65);
DEFLIT(lit_75);
DEFLIT(lit_110);
DEFLIT(lit_47);
DEFLIT(lit_40);
DEFLIT(lit_24);
DEFLIT(lit_33);
DEFLIT(lit_56);
DEFLIT(lit_68);
DEFLIT(lit_114);
DEFLIT(lit_113);
DEFLIT(lit_115);
DEFLIT(lit_79);
DEFLIT(lit_18);
DEFLIT(lit_101);
DEFLIT(lit_20);
DEFLIT(lit_89);
DEFLIT(lit_45);
DEFLIT(lit_10);
DEFLIT(lit_77);
DEFLIT(lit_2);
DEFLIT(lit_98);
DEFLIT(lit_42);
DEFLIT(lit_54);
DEFLIT(lit_109);
DEFLIT(lit_96);
DEFLIT(lit_100);
DEFLIT(lit_53);
DEFLIT(lit_64);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_60);
DEFLIT(lit_74);
DEFLIT(lit_59);
DEFLIT(lit_83);
DEFLIT(lit_55);
DEFLIT(lit_61);
DEFLIT(lit_69);
DEFLIT(lit_26);
DEFLIT(lit_51);
DEFLIT(lit_67);
DEFLIT(lit_14);
DEFLIT(lit_87);
DEFLIT(lit_116);
DEFLIT(lit_106);
DEFLIT(lit_81);
DEFLIT(lit_16);
DEFLIT(lit_82);
DEFLIT(lit_107);
DEFLIT(lit_50);
DEFLIT(lit_88);
DEFLIT(lit_91);
DEFLIT(lit_6);
DEFLIT(lit_112);
DEFLIT(lit_108);
DEFLIT(lit_92);
DEFLIT(lit_23);
DEFLIT(lit_85);
DEFLIT(lit_1);
DEFLIT(lit_32);
DEFLIT(lit_57);
DEFLIT(lit_27);
DEFLIT(lit_43);
DEFLIT(lit_31);
DEFLIT(lit_73);
DEFLIT(lit_102);
DEFLIT(lit_48);
DEFLIT(lit_104);
DEFLIT(lit_17);
DEFLIT(lit_12);
DEFLIT(lit_44);
DEFLIT(lit_78);
DEFLIT(lit_25);
DEFLIT(lit_93);
DEFLIT(lit_94);
DEFLIT(lit_4);
DEFLIT(lit_95);
DEFLIT(lit_22);
DEFLIT(lit_13);
DEFLIT(lit_76);
DEFLIT(lit_34);
DEFLIT(lit_0);
DEFLIT(lit_41);
DEFLIT(lit_49);
DEFLIT(lit_63);
DEFLIT(lit_52);
DEFLIT(lit_99);
DEFLIT(lit_90);
DEFLIT(lit_28);
DEFLIT(lit_111);
DEFLIT(lit_66);

/* FUNCTIONS: */

LOCFOR(fun_to_str_0);
FUNFOR(YprotoSmathYaddress_of);
LOCFOR(fun_to_str_2);
LOCFOR(fun_to_str_3);
LOCFOR(fun_as_4);
FUNFOR(YprotoSmathYas_log);
LOCFOR(fun_EE_6);
LOCFOR(fun_E_7);
LOCFOR(fun_NE_8);
LOCFOR(fun_NEE_9);
LOCFOR(fun_as_10);
LOCFOR(fun_as_11);
LOCFOR(fun_L_12);
LOCFOR(fun_EE_13);
LOCFOR(fun_lowerQ_14);
LOCFOR(fun_upperQ_15);
LOCFOR(fun_to_lower_16);
LOCFOR(fun_to_upper_17);
LOCFOR(fun_to_str_18);
LOCFOR(fun_alphaQ_19);
LOCFOR(fun_digitQ_20);
LOCFOR(fun_to_digit_21);
LOCFOR(fun_eof_objectQ_22);
LOCFOR(fun_eof_objectQ_23);
LOCFOR(fun_eof_object_24);
LOCFOR(fun_contagious_call_25);
LOCFOR(fun_L_26);
LOCFOR(fun_A_27);
LOCFOR(fun_1A_28);
LOCFOR(fun___29);
LOCFOR(fun_1__30);
LOCFOR(fun_T_31);
LOCFOR(fun_atan2_32);
LOCFOR(fun_logn_33);
LOCFOR(fun_floor_34);
LOCFOR(fun_ceil_35);
LOCFOR(fun_round_36);
LOCFOR(fun_round_to_37);
LOCFOR(fun_trunc_38);
LOCFOR(fun_floorS_39);
LOCFOR(fun_ceilingS_40);
LOCFOR(fun_roundS_41);
LOCFOR(fun_truncS_42);
LOCFOR(fun_mod_43);
LOCFOR(fun_rem_44);
LOCFOR(fun_posQ_45);
LOCFOR(fun_zeroQ_46);
LOCFOR(fun_negQ_47);
LOCFOR(fun_neg_48);
LOCFOR(fun_abs_49);
LOCFOR(fun_to_str_50);
LOCFOR(fun_contagious_type_51);
LOCFOR(fun_contagious_type_52);
LOCFOR(fun_contagious_type_53);
LOCFOR(fun_contagious_type_54);
LOCFOR(fun_EE_55);
LOCFOR(fun_L_56);
LOCFOR(fun_A_57);
LOCFOR(fun___58);
LOCFOR(fun_T_59);
LOCFOR(fun_floor_60);
LOCFOR(fun_ceil_61);
LOCFOR(fun_round_62);
LOCFOR(fun_trunc_63);
LOCFOR(fun_truncS_64);
LOCFOR(fun_mod_65);
LOCFOR(fun_loop_66);
LOCFOR(fun_pow_67);
LOCFOR(fun_K_68);
LOCFOR(fun_C_69);
LOCFOR(fun_B_70);
LOCFOR(fun_N_71);
LOCFOR(fun_bitQ_72);
LOCFOR(fun_evenQ_73);
LOCFOR(fun_oddQ_74);
LOCFOR(fun_GG_75);
LOCFOR(fun_GGG_76);
LOCFOR(fun_LL_77);
LOCFOR(fun_search_78);
LOCFOR(fun_power_of_two_ceiling_79);
FUNFOR(YprotoSmathYflo_bits);
LOCFOR(fun_as_81);
LOCFOR(fun_EE_82);
LOCFOR(fun_L_83);
LOCFOR(fun_A_84);
LOCFOR(fun___85);
LOCFOR(fun_T_86);
LOCFOR(fun_S_87);
LOCFOR(fun_truncS_88);
LOCFOR(fun_pow_89);
LOCFOR(fun_isqrt_90);
LOCFOR(fun_x_2367_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_sqrt_94);
LOCFOR(fun_sqrt_95);
LOCFOR(fun_log_96);
LOCFOR(fun_log_97);
LOCFOR(fun_sin_98);
LOCFOR(fun_sin_99);
LOCFOR(fun_cos_100);
LOCFOR(fun_cos_101);
LOCFOR(fun_tan_102);
LOCFOR(fun_tan_103);
LOCFOR(fun_sinh_104);
LOCFOR(fun_sinh_105);
LOCFOR(fun_cosh_106);
LOCFOR(fun_cosh_107);
LOCFOR(fun_tanh_108);
LOCFOR(fun_tanh_109);
LOCFOR(fun_asin_110);
LOCFOR(fun_asin_111);
LOCFOR(fun_acos_112);
LOCFOR(fun_acos_113);
LOCFOR(fun_atan_114);
LOCFOR(fun_atan_115);
LOCFOR(fun_atan2_116);
LOCFOR(fun_atan2_117);
LOCFOR(fun_logn_118);
extern P YprotoSmathY___main_0___ ();
extern P YprotoSmathY___main_1___ ();
extern P YprotoSmathY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_to_str_0) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(Yobject_class),x_);
  T2 = CALL1(1,VARREF(Yclass_name),T3);
  T1 = CALL1(1,VARREF(YprotoSmathYto_str),T2);
  T0 = CALL3(1,VARREF(YmacrosYcat),LITREF(lit_2),T1,LITREF(lit_3));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSmathYaddress_of) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPib(x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_6));
}

FUNCODEDEF(fun_to_str_3) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_7));
}

FUNCODEDEF(fun_as_4) {
  P type_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,type_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_10),type_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoSmathYas_log) {
  P x_;
  P tmpF5214;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  tmpF5214 = x_;
  if (tmpF5214 != YPfalse) {
    T1 = YPtrue;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_6) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_E_7) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,VARREF(YmacrosYEE),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NE_8) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NEE_9) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYEE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_10) {
  P U_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_11) {
  P U_,c_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(c_, 1);
loop:
  T1 = (P)YPcu(c_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_12) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPcu(x_);
  T3 = (P)YPcu(y_);
  T1 = (P)YPcL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_13) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPcu(x_);
  T3 = (P)YPcu(y_);
  T1 = (P)YPcE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lowerQ_14) {
  P x_;
  P codeF5215;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),x_);
  codeF5215 = T1;
  T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)97));
  T3 = CALL2(1,VARREF(YprotoSmagnitudesYGE),codeF5215,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)122));
    T5 = CALL2(1,VARREF(YprotoSmagnitudesYLE),codeF5215,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_upperQ_15) {
  P x_;
  P codeF5216;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),x_);
  codeF5216 = T1;
  T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)65));
  T3 = CALL2(1,VARREF(YprotoSmagnitudesYGE),codeF5216,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)90));
    T5 = CALL2(1,VARREF(YprotoSmagnitudesYLE),codeF5216,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_lower_16) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYupperQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),x_);
    T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)97));
    T7 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)65));
    T5 = CALL2(1,VARREF(YprotoSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YprotoSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_upper_17) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYlowerQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),x_);
    T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)65));
    T7 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)97));
    T5 = CALL2(1,VARREF(YprotoSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YprotoSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_18) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYfabs),VARREF(YLstrG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_alphaQ_19) {
  P x_;
  P tmpF5219;
  P tmpF5218;
  P tmpF5217;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoSmagnitudesYLE),YPchr((P)97),x_);
  tmpF5217 = T2;
  if (tmpF5217 != YPfalse) {
    T4 = CALL2(1,VARREF(YprotoSmagnitudesYLE),x_,YPchr((P)122));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF5218 = T1;
  if (tmpF5218 != YPfalse) {
    T5 = tmpF5218;
  } else {
    T7 = CALL2(1,VARREF(YprotoSmagnitudesYLE),YPchr((P)65),x_);
    tmpF5219 = T7;
    if (tmpF5219 != YPfalse) {
      T9 = CALL2(1,VARREF(YprotoSmagnitudesYLE),x_,YPchr((P)90));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_digitQ_20) {
  P x_;
  P tmpF5220;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmagnitudesYLE),YPchr((P)48),x_);
  tmpF5220 = T1;
  if (tmpF5220 != YPfalse) {
    T3 = CALL2(1,VARREF(YprotoSmagnitudesYLE),x_,YPchr((P)57));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_digit_21) {
  P digit_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(digit_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYchar_Gascii),digit_);
  T2 = CALL1(1,VARREF(YprotoSmathYchar_Gascii),YPchr((P)48));
  T0 = CALL2(1,VARREF(YprotoSmathY_),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_objectQ_22) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_eof_objectQ_23) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPcu(x_);
  T3 = (P)YPeof_object();
  T1 = (P)YPeqQ(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_object_24) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = (P)YPeof_object();
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_25) {
  P f_,x_,y_;
  P typeF5221;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYcontagious_type),x_,y_);
  typeF5221 = T1;
  T3 = CALL2(1,VARREF(YprotoStypesYas),typeF5221,x_);
  T4 = CALL2(1,VARREF(YprotoStypesYas),typeF5221,y_);
  T2 = CALL2(1,f_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_L_26) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmagnitudesYL),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_27) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYA),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1A_28) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYA),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___29) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathY_),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1__30) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathY_),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_31) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYT),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_32) {
  P y_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYatan2),y_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logn_33) {
  P x_,b_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYlogn),x_,b_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_34) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYfloorS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceil_35) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYceilingS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_36) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYroundS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_to_37) {
  P x_,n_;
  P fF5222;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YprotoSmathYround),x_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YprotoSmathYpow),LITREF(lit_47),n_);
    fF5222 = T4;
    T8 = CALL2(1,VARREF(YprotoSmathYT),x_,fF5222);
    T7 = CALL1(1,VARREF(YprotoSmathYround),T8);
    T6 = CALL2(1,VARREF(YprotoSmathYS),T7,fF5222);
    T5 = CALL1(1,x_,T6);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_trunc_38) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYtruncS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floorS_39) {
  P real_,divisor_;
  P tmpF5226;
  P remainderF5225;
  P integerF5224;
  P tup128F5223;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncS),real_,divisor_);
  tup128F5223 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup128F5223,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF5224 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup128F5223,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF5225 = T5;
  T9 = CALL1(1,VARREF(YprotoSmathYzeroQ),remainderF5225);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF5226 = T8;
  if (tmpF5226 != YPfalse) {
    T12 = CALL1(1,VARREF(YprotoSmathYnegQ),divisor_);
    if (T12 != YPfalse) {
      T13 = CALL1(1,VARREF(YprotoSmathYposQ),real_);
      T11 = T13;
    } else {
      T14 = CALL1(1,VARREF(YprotoSmathYnegQ),real_);
      T11 = T14;
    }
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T16 = CALL2(1,VARREF(YprotoSmathY_),integerF5224,YPint((P)1));
    T17 = CALL2(1,VARREF(YprotoSmathYA),remainderF5225,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF5224,remainderF5225);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceilingS_40) {
  P real_,divisor_;
  P tmpF5230;
  P remainderF5229;
  P integerF5228;
  P tup129F5227;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncS),real_,divisor_);
  tup129F5227 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup129F5227,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF5228 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup129F5227,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF5229 = T5;
  T9 = CALL1(1,VARREF(YprotoSmathYzeroQ),remainderF5229);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF5230 = T8;
  if (tmpF5230 != YPfalse) {
    T12 = CALL1(1,VARREF(YprotoSmathYnegQ),divisor_);
    if (T12 != YPfalse) {
      T13 = CALL1(1,VARREF(YprotoSmathYnegQ),real_);
      T11 = T13;
    } else {
      T14 = CALL1(1,VARREF(YprotoSmathYposQ),real_);
      T11 = T14;
    }
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T16 = CALL2(1,VARREF(YprotoSmathYA),integerF5228,YPint((P)1));
    T17 = CALL2(1,VARREF(YprotoSmathY_),remainderF5229,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF5228,remainderF5229);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_roundS_41) {
  P real_,divisor_;
  P tmpF5239;
  P tmpF5238;
  P minus_thresholdF5237;
  P tmpF5236;
  P tmpF5235;
  P thresholdF5234;
  P remainderF5233;
  P integerF5232;
  P tup130F5231;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncS),real_,divisor_);
  tup130F5231 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup130F5231,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF5232 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup130F5231,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF5233 = T5;
  T8 = CALL1(1,VARREF(YprotoSmathYabs),divisor_);
  T7 = CALL2(1,VARREF(YprotoSmathYS),T8,LITREF(lit_54));
  check_type(T7,VARREF(YLnumG));
  thresholdF5234 = T7;
  T11 = CALL2(1,VARREF(YprotoSmagnitudesYG),remainderF5233,thresholdF5234);
  tmpF5235 = T11;
  if (tmpF5235 != YPfalse) {
    T12 = tmpF5235;
  } else {
    T14 = CALL2(1,VARREF(YprotoSmathYE),remainderF5233,thresholdF5234);
    tmpF5236 = T14;
    if (tmpF5236 != YPfalse) {
      T16 = CALL1(1,VARREF(YprotoSmathYoddQ),integerF5232);
      T15 = T16;
    } else {
      T15 = YPfalse;
    }
    T13 = T15;
    T12 = T13;
  }
  T10 = T12;
  if (T10 != YPfalse) {
    T18 = CALL1(1,VARREF(YprotoSmathYnegQ),divisor_);
    if (T18 != YPfalse) {
      T20 = CALL2(1,VARREF(YprotoSmathY_),integerF5232,YPint((P)1));
      T21 = CALL2(1,VARREF(YprotoSmathYA),remainderF5233,divisor_);
      T19 = CALL2(1,VARREF(Ytup),T20,T21);
      T17 = T19;
    } else {
      T23 = CALL2(1,VARREF(YprotoSmathYA),integerF5232,YPint((P)1));
      T24 = CALL2(1,VARREF(YprotoSmathY_),remainderF5233,divisor_);
      T22 = CALL2(1,VARREF(Ytup),T23,T24);
      T17 = T22;
    }
    T9 = T17;
  } else {
    T27 = CALL1(1,VARREF(YprotoSmathYneg),thresholdF5234);
    minus_thresholdF5237 = T27;
    T29 = CALL2(1,VARREF(YprotoSmagnitudesYL),remainderF5233,minus_thresholdF5237);
    tmpF5238 = T29;
    if (tmpF5238 != YPfalse) {
      T30 = tmpF5238;
    } else {
      T32 = CALL2(1,VARREF(YprotoSmathYE),remainderF5233,minus_thresholdF5237);
      tmpF5239 = T32;
      if (tmpF5239 != YPfalse) {
        T34 = CALL1(1,VARREF(YprotoSmathYoddQ),integerF5232);
        T33 = T34;
      } else {
        T33 = YPfalse;
      }
      T31 = T33;
      T30 = T31;
    }
    T28 = T30;
    T26 = T28;
    if (T26 != YPfalse) {
      T36 = CALL1(1,VARREF(YprotoSmathYnegQ),divisor_);
      if (T36 != YPfalse) {
        T38 = CALL2(1,VARREF(YprotoSmathYA),integerF5232,YPint((P)1));
        T39 = CALL2(1,VARREF(YprotoSmathY_),remainderF5233,divisor_);
        T37 = CALL2(1,VARREF(Ytup),T38,T39);
        T35 = T37;
      } else {
        T41 = CALL2(1,VARREF(YprotoSmathY_),integerF5232,YPint((P)1));
        T42 = CALL2(1,VARREF(YprotoSmathYA),remainderF5233,divisor_);
        T40 = CALL2(1,VARREF(Ytup),T41,T42);
        T35 = T40;
      }
      T25 = T35;
    } else {
      T43 = CALL2(1,VARREF(Ytup),integerF5232,remainderF5233);
      T25 = T43;
    }
    T9 = T25;
  }
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncS_42) {
  P real_,divisor_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYtruncS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_43) {
  P real_,divisor_;
  P remainderF5242;
  P UF5241;
  P tup131F5240;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYfloorS),real_,divisor_);
  tup131F5240 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup131F5240,YPint((P)0));
  UF5241 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup131F5240,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF5242 = T5;
  T4 = remainderF5242;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rem_44) {
  P real_,divisor_;
  P remainderF5245;
  P UF5244;
  P tup132F5243;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncS),real_,divisor_);
  tup132F5243 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup132F5243,YPint((P)0));
  UF5244 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup132F5243,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF5245 = T5;
  T4 = remainderF5245;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_posQ_45) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmagnitudesYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zeroQ_46) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_negQ_47) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmagnitudesYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_neg_48) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_abs_49) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YprotoSmathYneg),x_);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_50) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoSmathYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_type_51) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_contagious_type_52) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_53) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_54) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_EE_55) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_56) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_57) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiA(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___58) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPi_(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_59) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiT(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_60) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_ceil_61) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_round_62) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_trunc_63) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_truncS_64) {
  P x_,y_;
  P resultF5246;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T3 = (P)YPiu(x_);
  T4 = (P)YPiu(y_);
  T2 = (P)YPitS(T3,T4);
  T1 = (P)YPib(T2);
  resultF5246 = T1;
  T7 = CALL2(1,VARREF(YprotoSmathYT),resultF5246,y_);
  T6 = CALL2(1,VARREF(YprotoSmathY_),x_,T7);
  T5 = CALL2(1,VARREF(Ytup),resultF5246,T6);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_65) {
  P x_,y_;
  P resF5247;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T3 = (P)YPiu(x_);
  T4 = (P)YPiu(y_);
  T2 = (P)YPim(T3,T4);
  T1 = (P)YPib(T2);
  resF5247 = T1;
  T6 = CALL2(1,VARREF(YprotoSmagnitudesYL),resF5247,YPint((P)0));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YprotoSmagnitudesYG),y_,YPint((P)0));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YprotoSmathYA),resF5247,y_);
      T7 = T9;
    } else {
      T10 = CALL2(1,VARREF(YprotoSmathY_),resF5247,y_);
      T7 = T10;
    }
    T5 = T7;
  } else {
    T5 = resF5247;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_66) {
  P x_,p_,y_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(p_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYzeroQ),p_);
  if (T1 != YPfalse) {
    T0 = y_;
  } else {
    T4 = CALL2(1,VARREF(YprotoSmagnitudesYG),p_,YPint((P)1));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YprotoSmathYT),x_,x_);
      T3 = T5;
    } else {
      T3 = x_;
    }
    T6 = CALL2(1,VARREF(YprotoSmathYGG),p_,YPint((P)1));
    T8 = CALL1(1,VARREF(YprotoSmathYoddQ),p_);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YprotoSmathYT),x_,y_);
      T7 = T9;
    } else {
      T7 = y_;
    }
    a1 = T3;
    a2 = T6;
    a3 = T7;
    x_ = a1;
    p_ = a2;
    y_ = a3;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pow_67) {
  P x_,n_;
  P loopF5248;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYnegQ),n_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoSmathYneg),n_);
    T3 = CALL2(1,VARREF(YprotoSmathYpow),x_,T4);
    T2 = CALL2(1,VARREF(YprotoSmathYS),YPint((P)1),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YprotoSmathYE),x_,YPint((P)2));
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YprotoSmathYLL),YPint((P)1),n_);
      T5 = T7;
    } else {
      T9 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
      if (T9 != YPfalse) {
        T11 = CALL1(1,VARREF(YprotoSmathYoddQ),n_);
        if (T11 != YPfalse) {
          T14 = CALL1(1,VARREF(YprotoSmathYneg),x_);
          T13 = CALL2(1,VARREF(YprotoSmathYpow),T14,n_);
          T12 = CALL1(1,VARREF(YprotoSmathYneg),T13);
          T10 = T12;
        } else {
          T16 = CALL1(1,VARREF(YprotoSmathYneg),x_);
          T15 = CALL2(1,VARREF(YprotoSmathYpow),T16,n_);
          T10 = T15;
        }
        T8 = T10;
      } else {
        if (YPtrue != YPfalse) {
          T19 = FUNSHELL(1,fun_loop_66,1);
          loopF5248 = T19;
          FUNINIT(loopF5248, 1,loopF5248);
          T22 = CALL2(1,VARREF(YprotoSmagnitudesYG),n_,YPint((P)1));
          if (T22 != YPfalse) {
            T23 = CALL2(1,VARREF(YprotoSmathYT),x_,x_);
            T21 = T23;
          } else {
            T21 = x_;
          }
          T24 = CALL2(1,VARREF(YprotoSmathYGG),n_,YPint((P)1));
          T26 = CALL1(1,VARREF(YprotoSmathYoddQ),n_);
          if (T26 != YPfalse) {
            T25 = x_;
          } else {
            T25 = YPint((P)1);
          }
          T20 = CALL3(1,loopF5248,T21,T24,T25);
          T18 = T20;
          T17 = T18;
        } else {
          T17 = YPfalse;
        }
        T8 = T17;
      }
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_K_68) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiv(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_C_69) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiC(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_B_70) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiB(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_N_71) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPiu(x_);
  T1 = (P)YPiX(T2);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bitQ_72) {
  P o_,x_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPiu(o_);
  T3 = (P)YPiu(x_);
  T1 = (P)YPiQ(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_evenQ_73) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYB),x_,YPint((P)1));
  T0 = CALL1(1,VARREF(YprotoSmathYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_oddQ_74) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYevenQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GG_75) {
  P x_,a_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(a_);
  T1 = (P)YPiGG(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GGG_76) {
  P x_,a_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(a_);
  T1 = (P)YPiGGG(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LL_77) {
  P x_,a_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(a_);
  T1 = (P)YPiLL(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_search_78) {
  P po2_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(po2_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmagnitudesYG),po2_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = po2_;
  } else {
    T3 = CALL2(1,VARREF(YprotoSmathYA),po2_,po2_);
    a1 = T3;
    po2_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_power_of_two_ceiling_79) {
  P x_;
  P searchF5249;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_search_78,2);
  searchF5249 = T1;
  FUNINIT(searchF5249, 2,x_,searchF5249);
  T2 = CALL1(1,searchF5249,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSmathYflo_bits) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPflo_bits(T2);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_81) {
  P U_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPiu(x_);
  T1 = (P)YPfi2f(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_82) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_83) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_84) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfA(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___85) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPf_(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_86) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfT(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_87) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfS(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncS_88) {
  P x_,y_;
  P resultF5251;
  P dividedF5250;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYS),x_,y_);
  dividedF5250 = T1;
  T5 = (P)YPfu(dividedF5250);
  T4 = (P)YPft(T5);
  T3 = (P)YPib(T4);
  resultF5251 = T3;
  T9 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),resultF5251);
  T8 = CALL2(1,VARREF(YprotoSmathY_),dividedF5250,T9);
  T7 = CALL2(1,VARREF(YprotoSmathYT),y_,T8);
  T6 = CALL2(1,VARREF(Ytup),resultF5251,T7);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_89) {
  P x_,n_;
  P tmpF5253;
  P resF5252;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T4 = CALL1(1,VARREF(YprotoSmathYabs),x_);
  T3 = (P)YPfu(T4);
  T5 = (P)YPiu(n_);
  T2 = (P)YPfpow(T3,T5);
  T1 = (P)YPfb(T2);
  resF5252 = T1;
  T8 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  tmpF5253 = T8;
  if (tmpF5253 != YPfalse) {
    T10 = CALL1(1,VARREF(YprotoSmathYoddQ),n_);
    T9 = T10;
  } else {
    T9 = YPfalse;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T11 = CALL1(1,VARREF(YprotoSmathYneg),resF5252);
    T6 = T11;
  } else {
    T6 = resF5252;
  }
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isqrt_90) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T1 = CALL1(1,VARREF(YprotoSmathYsqrt),T2);
  T0 = CALL1(1,VARREF(YprotoSmathYround),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2367_91) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  P return_;
  P PfpF5265;
  P x_2366F5264;
  P x_2366F5263;
  P x_2366F5262;
  P x_2366F5261;
  P x_2366F5260;
  P x_2366F5259;
  P prefixF5258;
  P paramF5257;
  P nameF5256;
  P x_2366F5255;
  P x_2367F5254;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2367_91,1);
  x_2367F5254 = T1;
  FUNINIT(x_2367F5254, 1,return_);
  x_2366F5255 = FREEREF(0);
  nameF5256 = YPfalse;
  nameF5256 = BOXFAB(nameF5256);
  paramF5257 = YPfalse;
  paramF5257 = BOXFAB(paramF5257);
  prefixF5258 = YPfalse;
  prefixF5258 = BOXFAB(prefixF5258);
  T9 = CALL2(1,VARREF(YisaQ),x_2366F5255,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2366F5255,LITREF(lit_91),x_2367F5254);
    x_2366F5259 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2366F5259,x_2367F5254);
    BOXVAL(nameF5256) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2366F5259);
    x_2366F5260 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2366F5260,x_2367F5254);
    x_2366F5261 = T16;
    T18 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2366F5261,x_2367F5254);
    BOXVAL(paramF5257) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_2366F5261);
    x_2366F5262 = T19;
    T20 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2366F5262,x_2367F5254);
    T17 = T20;
    T21 = CALL1(1,VARREF(Ytail),x_2366F5260);
    x_2366F5263 = T21;
    BOXVAL(prefixF5258) = x_2366F5263;
    x_2366F5264 = Ynil;
    T23 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2366F5264,x_2367F5254);
    T22 = T23;
    T15 = T22;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_2367F5254,LITREF(lit_92),x_2366F5255);
  }
  T27 = BOXVAL(nameF5256);
  T26 = CALL2(1,VARREF(YmacrosYcat_sym),LITREF(lit_93),T27);
  PfpF5265 = T26;
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T34 = BOXVAL(nameF5256);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = BOXVAL(paramF5257);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T38 = CALL3(1,VARREF(YmacrosYcat),T39,T41,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T36 = CALLN(1,VARREF(YmacrosYcat),4,T37,T42,T43,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T31 = CALLN(1,VARREF(YmacrosYcat),4,T32,T33,T35,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T48 = BOXVAL(nameF5256);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T54 = BOXVAL(paramF5257);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T52 = CALL3(1,VARREF(YmacrosYcat),T53,T55,Ynil);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T50 = CALLN(1,VARREF(YmacrosYcat),4,T51,T56,T57,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T58 = BOXVAL(prefixF5258);
  T62 = BOXVAL(nameF5256);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T68 = BOXVAL(paramF5257);
  T67 = CALL1(1,VARREF(Ylst),T68);
  T64 = CALLN(1,VARREF(YmacrosYcat),4,T65,T66,T67,Ynil);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T60 = CALL3(1,VARREF(YmacrosYcat),T61,T63,Ynil);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T45 = CALLN(1,VARREF(YmacrosYcat),6,T46,T47,T49,T58,T59,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T73 = BOXVAL(nameF5256);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T79 = BOXVAL(paramF5257);
  T78 = CALL1(1,VARREF(Ylst),T79);
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T77 = CALL3(1,VARREF(YmacrosYcat),T78,T80,Ynil);
  T76 = CALL1(1,VARREF(Ylst),T77);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T75 = CALLN(1,VARREF(YmacrosYcat),4,T76,T81,T82,Ynil);
  T74 = CALL1(1,VARREF(Ylst),T75);
  T83 = BOXVAL(prefixF5258);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
  T89 = CALL1(1,VARREF(Ylst),PfpF5265);
  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
  T94 = BOXVAL(paramF5257);
  T93 = CALL1(1,VARREF(Ylst),T94);
  T91 = CALL3(1,VARREF(YmacrosYcat),T92,T93,Ynil);
  T90 = CALL1(1,VARREF(Ylst),T91);
  T88 = CALL3(1,VARREF(YmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T70 = CALLN(1,VARREF(YmacrosYcat),6,T71,T72,T74,T83,T84,Ynil);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T28 = CALLN(1,VARREF(YmacrosYcat),5,T29,T30,T44,T69,Ynil);
  T25 = T28;
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_92,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sqrt_94) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_104));
  } else {
  }
  T3 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YprotoSmathYsqrt),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_sqrt_95) {
  P x_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_104));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfsqrt(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_log_96) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYlog),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_log_97) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPflog(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sin_98) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYsin),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sin_99) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfsin(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cos_100) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYcos),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cos_101) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfcos(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tan_102) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYtan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tan_103) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPftan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sinh_104) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYsinh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sinh_105) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfsinh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cosh_106) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYcosh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cosh_107) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfcosh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tanh_108) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYtanh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tanh_109) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPftanh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_asin_110) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_113));
  } else {
  }
  T3 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YprotoSmathYasin),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_asin_111) {
  P x_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_113));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfasin(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_112) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_115));
  } else {
  }
  T3 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YprotoSmathYacos),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_113) {
  P x_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_115));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfacos(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_atan_114) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YprotoSmathYatan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan_115) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPfatan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_116) {
  P y_,x_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_117) {
  P y_,x_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logn_118) {
  P x_,b_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYlog),x_);
  T2 = CALL1(1,VARREF(YprotoSmathYlog),b_);
  T0 = CALL2(1,VARREF(YprotoSmathYS),T1,T2);
UNLINK_STACK();
  RET(T0);
}

P YprotoSmathY___main_0___() {
  P T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277;
  P T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261;
  P T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245;
  P T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229;
  P T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213;
  P T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197;
  P T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181;
  P T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165;
  P T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149;
  P T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133;
  P T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117;
  P T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101;
  P T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"to-str");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPsb((P)"{ obj(");
  lit_3 = YPsb((P)") }");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_0 = YPmet(FUNCODEREF(fun_to_str_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YprotoSmathYto_str);
  if (T3 != YPfalse) {
    T2 = VARREF(YprotoSmathYto_str);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_to_str_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YprotoSmathYto_str,T1);
  lit_4 = YPPsym((P)"address-of");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YprotoSmathYaddress_of = YPmet(FUNCODEREF(YprotoSmathYaddress_of),LITREF(lit_4),T5,ENVNUL,PNUL,YPfalse);
  T6 = YprotoSmathYaddress_of;
  VARSET(YprotoSmathYaddress_of,T6);
  lit_5 = YPPsym((P)"<bot>");
  T8 = (P)YPpair(VARREF(YLanyG),Ynil);
  T7 = CALL2(1,VARREF(Yfab_class),LITREF(lit_5),T8);
  VARSET(YprotoSmathYLbotG,T7);
  lit_6 = YPsb((P)"#t");
  T10 = CALL1(1,VARREF(YprotoStypesYtE),YPtrue);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T10),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_2 = YPmet(FUNCODEREF(fun_to_str_2),LITREF(lit_0),T9,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YprotoSmathYto_str);
  if (T13 != YPfalse) {
    T12 = VARREF(YprotoSmathYto_str);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_to_str_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YprotoSmathYto_str,T11);
  lit_7 = YPsb((P)"#f");
  T16 = CALL1(1,VARREF(YprotoStypesYtE),YPfalse);
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T16),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_3 = YPmet(FUNCODEREF(fun_to_str_3),LITREF(lit_0),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YprotoSmathYto_str);
  if (T19 != YPfalse) {
    T18 = VARREF(YprotoSmathYto_str);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_to_str_3;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YprotoSmathYto_str,T17);
  lit_8 = YPPsym((P)"as");
  lit_9 = YPPsym((P)"type");
  lit_10 = YPsb((P)"NO AS METHOD FOR %= AND %=");
  T21 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_4 = YPmet(FUNCODEREF(fun_as_4),LITREF(lit_8),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YprotoStypesYas);
  if (T24 != YPfalse) {
    T23 = VARREF(YprotoStypesYas);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_as_4;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YprotoStypesYas,T22);
  lit_11 = YPPsym((P)"as-log");
  T26 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YprotoSmathYas_log = YPmet(FUNCODEREF(YprotoSmathYas_log),LITREF(lit_11),T26,ENVNUL,PNUL,YPfalse);
  T27 = YprotoSmathYas_log;
  VARSET(YprotoSmathYas_log,T27);
  lit_12 = YPPsym((P)"==");
  lit_13 = YPPsym((P)"y");
  T28 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_6 = YPmet(FUNCODEREF(fun_EE_6),LITREF(lit_12),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YmacrosYEE);
  if (T31 != YPfalse) {
    T30 = VARREF(YmacrosYEE);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_EE_6;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YmacrosYEE,T29);
  lit_14 = YPPsym((P)"=");
  T33 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_7 = YPmet(FUNCODEREF(fun_E_7),LITREF(lit_14),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YprotoSmathYE);
  if (T36 != YPfalse) {
    T35 = VARREF(YprotoSmathYE);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_E_7;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YprotoSmathYE,T34);
  lit_15 = YPPsym((P)"~=");
  T38 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NE_8 = YPmet(FUNCODEREF(fun_NE_8),LITREF(lit_15),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YprotoSmathYNE);
  if (T41 != YPfalse) {
    T40 = VARREF(YprotoSmathYNE);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_NE_8;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YprotoSmathYNE,T39);
  lit_16 = YPPsym((P)"~==");
  T43 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NEE_9 = YPmet(FUNCODEREF(fun_NEE_9),LITREF(lit_16),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YprotoSmathYNEE);
  if (T46 != YPfalse) {
    T45 = VARREF(YprotoSmathYNEE);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_NEE_9;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YprotoSmathYNEE,T44);
  lit_17 = YPPsym((P)"_");
  lit_18 = YPPsym((P)"i");
  T49 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLchrG));
  T48 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,T49,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_as_10 = YPmet(FUNCODEREF(fun_as_10),LITREF(lit_8),T48,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YprotoStypesYas);
  if (T52 != YPfalse) {
    T51 = VARREF(YprotoStypesYas);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_as_10;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YprotoStypesYas,T50);
  lit_19 = YPPsym((P)"c");
  T55 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLintG));
  T54 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_19)),YPPlist(2,T55,VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_as_11 = YPmet(FUNCODEREF(fun_as_11),LITREF(lit_8),T54,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YprotoStypesYas);
  if (T58 != YPfalse) {
    T57 = VARREF(YprotoStypesYas);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_as_11;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YprotoStypesYas,T56);
  lit_20 = YPPsym((P)"<");
  T60 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_12 = YPmet(FUNCODEREF(fun_L_12),LITREF(lit_20),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YprotoSmagnitudesYL);
  if (T63 != YPfalse) {
    T62 = VARREF(YprotoSmagnitudesYL);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_L_12;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YprotoSmagnitudesYL,T61);
  T65 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_13 = YPmet(FUNCODEREF(fun_EE_13),LITREF(lit_12),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YmacrosYEE);
  if (T68 != YPfalse) {
    T67 = VARREF(YmacrosYEE);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_EE_13;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YmacrosYEE,T66);
  lit_21 = YPPsym((P)"lower?");
  T70 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_lowerQ_14 = YPmet(FUNCODEREF(fun_lowerQ_14),LITREF(lit_21),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YprotoSmathYlowerQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YprotoSmathYlowerQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_lowerQ_14;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YprotoSmathYlowerQ,T71);
  lit_22 = YPPsym((P)"upper?");
  T75 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_upperQ_15 = YPmet(FUNCODEREF(fun_upperQ_15),LITREF(lit_22),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YprotoSmathYupperQ);
  if (T78 != YPfalse) {
    T77 = VARREF(YprotoSmathYupperQ);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_upperQ_15;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YprotoSmathYupperQ,T76);
  lit_23 = YPPsym((P)"to-lower");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_lower_16 = YPmet(FUNCODEREF(fun_to_lower_16),LITREF(lit_23),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YprotoSmathYto_lower);
  if (T83 != YPfalse) {
    T82 = VARREF(YprotoSmathYto_lower);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_to_lower_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YprotoSmathYto_lower,T81);
  lit_24 = YPPsym((P)"to-upper");
  T85 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_upper_17 = YPmet(FUNCODEREF(fun_to_upper_17),LITREF(lit_24),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YprotoSmathYto_upper);
  if (T88 != YPfalse) {
    T87 = VARREF(YprotoSmathYto_upper);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_to_upper_17;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YprotoSmathYto_upper,T86);
  T90 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_18 = YPmet(FUNCODEREF(fun_to_str_18),LITREF(lit_0),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YprotoSmathYto_str);
  if (T93 != YPfalse) {
    T92 = VARREF(YprotoSmathYto_str);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_to_str_18;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YprotoSmathYto_str,T91);
  lit_25 = YPPsym((P)"alpha?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_alphaQ_19 = YPmet(FUNCODEREF(fun_alphaQ_19),LITREF(lit_25),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YprotoSmathYalphaQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YprotoSmathYalphaQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_alphaQ_19;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YprotoSmathYalphaQ,T96);
  lit_26 = YPPsym((P)"digit?");
  T100 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_digitQ_20 = YPmet(FUNCODEREF(fun_digitQ_20),LITREF(lit_26),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YprotoSmathYdigitQ);
  if (T103 != YPfalse) {
    T102 = VARREF(YprotoSmathYdigitQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_digitQ_20;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YprotoSmathYdigitQ,T101);
  lit_27 = YPPsym((P)"to-digit");
  lit_28 = YPPsym((P)"digit");
  T105 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_to_digit_21 = YPmet(FUNCODEREF(fun_to_digit_21),LITREF(lit_27),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YprotoSmathYto_digit);
  if (T108 != YPfalse) {
    T107 = VARREF(YprotoSmathYto_digit);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_to_digit_21;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YprotoSmathYto_digit,T106);
  lit_29 = YPPsym((P)"eof-object?");
  T110 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_22 = YPmet(FUNCODEREF(fun_eof_objectQ_22),LITREF(lit_29),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YprotoSmathYeof_objectQ);
  if (T113 != YPfalse) {
    T112 = VARREF(YprotoSmathYeof_objectQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_eof_objectQ_22;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YprotoSmathYeof_objectQ,T111);
  T115 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_23 = YPmet(FUNCODEREF(fun_eof_objectQ_23),LITREF(lit_29),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YprotoSmathYeof_objectQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YprotoSmathYeof_objectQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_eof_objectQ_23;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YprotoSmathYeof_objectQ,T116);
  lit_30 = YPPsym((P)"eof-object");
  T120 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  fun_eof_object_24 = YPmet(FUNCODEREF(fun_eof_object_24),LITREF(lit_30),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YprotoSmathYeof_object);
  if (T123 != YPfalse) {
    T122 = VARREF(YprotoSmathYeof_object);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_eof_object_24;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YprotoSmathYeof_object,T121);
  lit_31 = YPPsym((P)"contagious-type");
  T127 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLnumG));
  T126 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T127,Ynil);
  T125 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_31),T126,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYcontagious_type,T125);
  lit_32 = YPPsym((P)"contagious-call");
  lit_33 = YPPsym((P)"f");
  T129 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_1),LITREF(lit_13)),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T128 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T129,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYcontagious_call,T128);
  T130 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_1),LITREF(lit_13)),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_contagious_call_25 = YPmet(FUNCODEREF(fun_contagious_call_25),LITREF(lit_32),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YprotoSmathYcontagious_call);
  if (T133 != YPfalse) {
    T132 = VARREF(YprotoSmathYcontagious_call);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_contagious_call_25;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YprotoSmathYcontagious_call,T131);
  T135 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_26 = YPmet(FUNCODEREF(fun_L_26),LITREF(lit_20),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YprotoSmagnitudesYL);
  if (T138 != YPfalse) {
    T137 = VARREF(YprotoSmagnitudesYL);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_L_26;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YprotoSmagnitudesYL,T136);
  lit_34 = YPPsym((P)"+");
  T140 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_27 = YPmet(FUNCODEREF(fun_A_27),LITREF(lit_34),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YprotoSmathYA);
  if (T143 != YPfalse) {
    T142 = VARREF(YprotoSmathYA);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_A_27;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YprotoSmathYA,T141);
  lit_35 = YPPsym((P)"1+");
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1A_28 = YPmet(FUNCODEREF(fun_1A_28),LITREF(lit_35),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YprotoSmathY1A);
  if (T148 != YPfalse) {
    T147 = VARREF(YprotoSmathY1A);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_1A_28;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YprotoSmathY1A,T146);
  lit_36 = YPPsym((P)"-");
  T150 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___29 = YPmet(FUNCODEREF(fun___29),LITREF(lit_36),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YprotoSmathY_);
  if (T153 != YPfalse) {
    T152 = VARREF(YprotoSmathY_);
  } else {
    T152 = YPfalse;
  }
  T154 = fun___29;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YprotoSmathY_,T151);
  lit_37 = YPPsym((P)"1-");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1__30 = YPmet(FUNCODEREF(fun_1__30),LITREF(lit_37),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YprotoSmathY1_);
  if (T158 != YPfalse) {
    T157 = VARREF(YprotoSmathY1_);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_1__30;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YprotoSmathY1_,T156);
  lit_38 = YPPsym((P)"*");
  T160 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_31 = YPmet(FUNCODEREF(fun_T_31),LITREF(lit_38),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YprotoSmathYT);
  if (T163 != YPfalse) {
    T162 = VARREF(YprotoSmathYT);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_T_31;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YprotoSmathYT,T161);
  lit_39 = YPPsym((P)"atan2");
  T165 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_1)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_32 = YPmet(FUNCODEREF(fun_atan2_32),LITREF(lit_39),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YprotoSmathYatan2);
  if (T168 != YPfalse) {
    T167 = VARREF(YprotoSmathYatan2);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_atan2_32;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YprotoSmathYatan2,T166);
  lit_40 = YPPsym((P)"logn");
  lit_41 = YPPsym((P)"b");
  T170 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_41)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_33 = YPmet(FUNCODEREF(fun_logn_33),LITREF(lit_40),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YprotoSmathYlogn);
  if (T173 != YPfalse) {
    T172 = VARREF(YprotoSmathYlogn);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_logn_33;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YprotoSmathYlogn,T171);
  lit_42 = YPPsym((P)"floor");
  T175 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_34 = YPmet(FUNCODEREF(fun_floor_34),LITREF(lit_42),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YprotoSmathYfloor);
  if (T178 != YPfalse) {
    T177 = VARREF(YprotoSmathYfloor);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_floor_34;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YprotoSmathYfloor,T176);
  lit_43 = YPPsym((P)"ceil");
  T180 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_35 = YPmet(FUNCODEREF(fun_ceil_35),LITREF(lit_43),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YprotoSmathYceil);
  if (T183 != YPfalse) {
    T182 = VARREF(YprotoSmathYceil);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_ceil_35;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YprotoSmathYceil,T181);
  lit_44 = YPPsym((P)"round");
  T185 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_36 = YPmet(FUNCODEREF(fun_round_36),LITREF(lit_44),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YprotoSmathYround);
  if (T188 != YPfalse) {
    T187 = VARREF(YprotoSmathYround);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_round_36;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YprotoSmathYround,T186);
  lit_45 = YPPsym((P)"round-to");
  lit_46 = YPPsym((P)"n");
  lit_47 = YPflo(FLOINT(10.0));
  T190 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_46)),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_round_to_37 = YPmet(FUNCODEREF(fun_round_to_37),LITREF(lit_45),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YprotoSmathYround_to);
  if (T193 != YPfalse) {
    T192 = VARREF(YprotoSmathYround_to);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_round_to_37;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YprotoSmathYround_to,T191);
  lit_48 = YPPsym((P)"trunc");
  T195 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_38 = YPmet(FUNCODEREF(fun_trunc_38),LITREF(lit_48),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YprotoSmathYtrunc);
  if (T198 != YPfalse) {
    T197 = VARREF(YprotoSmathYtrunc);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_trunc_38;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YprotoSmathYtrunc,T196);
  lit_49 = YPPsym((P)"floor/");
  lit_50 = YPPsym((P)"real");
  lit_51 = YPPsym((P)"divisor");
  T200 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_floorS_39 = YPmet(FUNCODEREF(fun_floorS_39),LITREF(lit_49),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YprotoSmathYfloorS);
  if (T203 != YPfalse) {
    T202 = VARREF(YprotoSmathYfloorS);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_floorS_39;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YprotoSmathYfloorS,T201);
  lit_52 = YPPsym((P)"ceiling/");
  T205 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_ceilingS_40 = YPmet(FUNCODEREF(fun_ceilingS_40),LITREF(lit_52),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YprotoSmathYceilingS);
  if (T208 != YPfalse) {
    T207 = VARREF(YprotoSmathYceilingS);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_ceilingS_40;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YprotoSmathYceilingS,T206);
  lit_53 = YPPsym((P)"round/");
  lit_54 = YPflo(FLOINT(2.0));
  T210 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_roundS_41 = YPmet(FUNCODEREF(fun_roundS_41),LITREF(lit_53),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YprotoSmathYroundS);
  if (T213 != YPfalse) {
    T212 = VARREF(YprotoSmathYroundS);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_roundS_41;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YprotoSmathYroundS,T211);
  lit_55 = YPPsym((P)"trunc/");
  T215 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_truncS_42 = YPmet(FUNCODEREF(fun_truncS_42),LITREF(lit_55),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YprotoSmathYtruncS);
  if (T218 != YPfalse) {
    T217 = VARREF(YprotoSmathYtruncS);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_truncS_42;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YprotoSmathYtruncS,T216);
  lit_56 = YPPsym((P)"mod");
  T220 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_43 = YPmet(FUNCODEREF(fun_mod_43),LITREF(lit_56),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YprotoSmathYmod);
  if (T223 != YPfalse) {
    T222 = VARREF(YprotoSmathYmod);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_mod_43;
  T221 = CALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YprotoSmathYmod,T221);
  lit_57 = YPPsym((P)"rem");
  T225 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_44 = YPmet(FUNCODEREF(fun_rem_44),LITREF(lit_57),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YprotoSmathYrem);
  if (T228 != YPfalse) {
    T227 = VARREF(YprotoSmathYrem);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_rem_44;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YprotoSmathYrem,T226);
  lit_58 = YPPsym((P)"pos?");
  T230 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_45 = YPmet(FUNCODEREF(fun_posQ_45),LITREF(lit_58),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YprotoSmathYposQ);
  if (T233 != YPfalse) {
    T232 = VARREF(YprotoSmathYposQ);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_posQ_45;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YprotoSmathYposQ,T231);
  lit_59 = YPPsym((P)"zero?");
  T235 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_46 = YPmet(FUNCODEREF(fun_zeroQ_46),LITREF(lit_59),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YprotoSmathYzeroQ);
  if (T238 != YPfalse) {
    T237 = VARREF(YprotoSmathYzeroQ);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_zeroQ_46;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YprotoSmathYzeroQ,T236);
  lit_60 = YPPsym((P)"neg?");
  T240 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_47 = YPmet(FUNCODEREF(fun_negQ_47),LITREF(lit_60),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YprotoSmathYnegQ);
  if (T243 != YPfalse) {
    T242 = VARREF(YprotoSmathYnegQ);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_negQ_47;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YprotoSmathYnegQ,T241);
  lit_61 = YPPsym((P)"neg");
  T245 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_neg_48 = YPmet(FUNCODEREF(fun_neg_48),LITREF(lit_61),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YprotoSmathYneg);
  if (T248 != YPfalse) {
    T247 = VARREF(YprotoSmathYneg);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_neg_48;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YprotoSmathYneg,T246);
  lit_62 = YPPsym((P)"abs");
  T250 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_49 = YPmet(FUNCODEREF(fun_abs_49),LITREF(lit_62),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YprotoSmathYabs);
  if (T253 != YPfalse) {
    T252 = VARREF(YprotoSmathYabs);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_abs_49;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YprotoSmathYabs,T251);
  T255 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_50 = YPmet(FUNCODEREF(fun_to_str_50),LITREF(lit_0),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YprotoSmathYto_str);
  if (T258 != YPfalse) {
    T257 = VARREF(YprotoSmathYto_str);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_to_str_50;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YprotoSmathYto_str,T256);
  T260 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_51 = YPmet(FUNCODEREF(fun_contagious_type_51),LITREF(lit_31),T260,ENVNUL,PNUL,YPfalse);
  T263 = BOUNDP(YprotoSmathYcontagious_type);
  if (T263 != YPfalse) {
    T262 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_contagious_type_51;
  T261 = CALL2(1,VARREF(YPdefine_method),T262,T264);
  VARSET(YprotoSmathYcontagious_type,T261);
  T265 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_52 = YPmet(FUNCODEREF(fun_contagious_type_52),LITREF(lit_31),T265,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(YprotoSmathYcontagious_type);
  if (T268 != YPfalse) {
    T267 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_contagious_type_52;
  T266 = CALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YprotoSmathYcontagious_type,T266);
  T270 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_53 = YPmet(FUNCODEREF(fun_contagious_type_53),LITREF(lit_31),T270,ENVNUL,PNUL,YPfalse);
  T273 = BOUNDP(YprotoSmathYcontagious_type);
  if (T273 != YPfalse) {
    T272 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_contagious_type_53;
  T271 = CALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YprotoSmathYcontagious_type,T271);
  T275 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_54 = YPmet(FUNCODEREF(fun_contagious_type_54),LITREF(lit_31),T275,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(YprotoSmathYcontagious_type);
  if (T278 != YPfalse) {
    T277 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_contagious_type_54;
  T276 = CALL2(1,VARREF(YPdefine_method),T277,T279);
  VARSET(YprotoSmathYcontagious_type,T276);
  T280 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_55 = YPmet(FUNCODEREF(fun_EE_55),LITREF(lit_12),T280,ENVNUL,PNUL,YPfalse);
  T283 = BOUNDP(YmacrosYEE);
  if (T283 != YPfalse) {
    T282 = VARREF(YmacrosYEE);
  } else {
    T282 = YPfalse;
  }
  T284 = fun_EE_55;
  T281 = CALL2(1,VARREF(YPdefine_method),T282,T284);
  VARSET(YmacrosYEE,T281);
  T287 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T286 = fun_L_56 = YPmet(FUNCODEREF(fun_L_56),LITREF(lit_20),T287,ENVNUL,PNUL,YPfalse);
  T291 = BOUNDP(YprotoSmagnitudesYL);
  if (T291 != YPfalse) {
    T290 = VARREF(YprotoSmagnitudesYL);
  } else {
    T290 = YPfalse;
  }
  T292 = fun_L_56;
  T289 = CALL2(1,VARREF(YPdefine_method),T290,T292);
  T288 = VARSET(YprotoSmagnitudesYL,T289);
  T285 = T288;
  return T285;
}

P YprotoSmathY___main_1___() {
  P T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266;
  P T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250;
  P T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234;
  P T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218;
  P T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202;
  P T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186;
  P T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170;
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
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_A_57 = YPmet(FUNCODEREF(fun_A_57),LITREF(lit_34),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YprotoSmathYA);
  if (T3 != YPfalse) {
    T2 = VARREF(YprotoSmathYA);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_A_57;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YprotoSmathYA,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___58 = YPmet(FUNCODEREF(fun___58),LITREF(lit_36),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YprotoSmathY_);
  if (T8 != YPfalse) {
    T7 = VARREF(YprotoSmathY_);
  } else {
    T7 = YPfalse;
  }
  T9 = fun___58;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YprotoSmathY_,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_59 = YPmet(FUNCODEREF(fun_T_59),LITREF(lit_38),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YprotoSmathYT);
  if (T13 != YPfalse) {
    T12 = VARREF(YprotoSmathYT);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_T_59;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YprotoSmathYT,T11);
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_60 = YPmet(FUNCODEREF(fun_floor_60),LITREF(lit_42),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YprotoSmathYfloor);
  if (T18 != YPfalse) {
    T17 = VARREF(YprotoSmathYfloor);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_floor_60;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YprotoSmathYfloor,T16);
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_61 = YPmet(FUNCODEREF(fun_ceil_61),LITREF(lit_43),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YprotoSmathYceil);
  if (T23 != YPfalse) {
    T22 = VARREF(YprotoSmathYceil);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_ceil_61;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YprotoSmathYceil,T21);
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_62 = YPmet(FUNCODEREF(fun_round_62),LITREF(lit_44),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YprotoSmathYround);
  if (T28 != YPfalse) {
    T27 = VARREF(YprotoSmathYround);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_round_62;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YprotoSmathYround,T26);
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_63 = YPmet(FUNCODEREF(fun_trunc_63),LITREF(lit_48),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YprotoSmathYtrunc);
  if (T33 != YPfalse) {
    T32 = VARREF(YprotoSmathYtrunc);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_trunc_63;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YprotoSmathYtrunc,T31);
  T35 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_truncS_64 = YPmet(FUNCODEREF(fun_truncS_64),LITREF(lit_55),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YprotoSmathYtruncS);
  if (T38 != YPfalse) {
    T37 = VARREF(YprotoSmathYtruncS);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_truncS_64;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YprotoSmathYtruncS,T36);
  T40 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_mod_65 = YPmet(FUNCODEREF(fun_mod_65),LITREF(lit_56),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YprotoSmathYmod);
  if (T43 != YPfalse) {
    T42 = VARREF(YprotoSmathYmod);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_mod_65;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YprotoSmathYmod,T41);
  lit_63 = YPPsym((P)"pow");
  lit_64 = YPPsym((P)"loop");
  lit_65 = YPPsym((P)"p");
  T46 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_65),LITREF(lit_13)),YPPlist(3,VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_66 = YPmet(FUNCODEREF(fun_loop_66),LITREF(lit_64),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_46)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_67 = YPmet(FUNCODEREF(fun_pow_67),LITREF(lit_63),T45,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YprotoSmathYpow);
  if (T49 != YPfalse) {
    T48 = VARREF(YprotoSmathYpow);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_pow_67;
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YprotoSmathYpow,T47);
  lit_66 = YPPsym((P)"|");
  T51 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_68 = YPmet(FUNCODEREF(fun_K_68),LITREF(lit_66),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YprotoSmathYK);
  if (T54 != YPfalse) {
    T53 = VARREF(YprotoSmathYK);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_K_68;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YprotoSmathYK,T52);
  lit_67 = YPPsym((P)"^");
  T56 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_69 = YPmet(FUNCODEREF(fun_C_69),LITREF(lit_67),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YprotoSmathYC);
  if (T59 != YPfalse) {
    T58 = VARREF(YprotoSmathYC);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_C_69;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YprotoSmathYC,T57);
  lit_68 = YPPsym((P)"&");
  T61 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_70 = YPmet(FUNCODEREF(fun_B_70),LITREF(lit_68),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YprotoSmathYB);
  if (T64 != YPfalse) {
    T63 = VARREF(YprotoSmathYB);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_B_70;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YprotoSmathYB,T62);
  lit_69 = YPPsym((P)"~");
  T66 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_N_71 = YPmet(FUNCODEREF(fun_N_71),LITREF(lit_69),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YprotoSmathYN);
  if (T69 != YPfalse) {
    T68 = VARREF(YprotoSmathYN);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_N_71;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YprotoSmathYN,T67);
  lit_70 = YPPsym((P)"bit?");
  lit_71 = YPPsym((P)"o");
  T71 = YPsig(YPPlist(2,LITREF(lit_71),LITREF(lit_1)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_bitQ_72 = YPmet(FUNCODEREF(fun_bitQ_72),LITREF(lit_70),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YprotoSmathYbitQ);
  if (T74 != YPfalse) {
    T73 = VARREF(YprotoSmathYbitQ);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_bitQ_72;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YprotoSmathYbitQ,T72);
  lit_72 = YPPsym((P)"even?");
  T76 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_73 = YPmet(FUNCODEREF(fun_evenQ_73),LITREF(lit_72),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YprotoSmathYevenQ);
  if (T79 != YPfalse) {
    T78 = VARREF(YprotoSmathYevenQ);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_evenQ_73;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YprotoSmathYevenQ,T77);
  lit_73 = YPPsym((P)"odd?");
  T81 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_74 = YPmet(FUNCODEREF(fun_oddQ_74),LITREF(lit_73),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YprotoSmathYoddQ);
  if (T84 != YPfalse) {
    T83 = VARREF(YprotoSmathYoddQ);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_oddQ_74;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YprotoSmathYoddQ,T82);
  lit_74 = YPPsym((P)">>");
  lit_75 = YPPsym((P)"a");
  T86 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_75)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_GG_75 = YPmet(FUNCODEREF(fun_GG_75),LITREF(lit_74),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YprotoSmathYGG);
  if (T89 != YPfalse) {
    T88 = VARREF(YprotoSmathYGG);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_GG_75;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YprotoSmathYGG,T87);
  lit_76 = YPPsym((P)">>>");
  T91 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_75)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_GGG_76 = YPmet(FUNCODEREF(fun_GGG_76),LITREF(lit_76),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YprotoSmathYGGG);
  if (T94 != YPfalse) {
    T93 = VARREF(YprotoSmathYGGG);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_GGG_76;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YprotoSmathYGGG,T92);
  lit_77 = YPPsym((P)"<<");
  T96 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_75)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_LL_77 = YPmet(FUNCODEREF(fun_LL_77),LITREF(lit_77),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YprotoSmathYLL);
  if (T99 != YPfalse) {
    T98 = VARREF(YprotoSmathYLL);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_LL_77;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YprotoSmathYLL,T97);
  lit_78 = YPPsym((P)"power-of-two-ceiling");
  lit_79 = YPPsym((P)"search");
  lit_80 = YPPsym((P)"po2");
  T102 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_78 = YPmet(FUNCODEREF(fun_search_78),LITREF(lit_79),T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceiling_79 = YPmet(FUNCODEREF(fun_power_of_two_ceiling_79),LITREF(lit_78),T101,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YprotoSmathYpower_of_two_ceiling);
  if (T105 != YPfalse) {
    T104 = VARREF(YprotoSmathYpower_of_two_ceiling);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_power_of_two_ceiling_79;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YprotoSmathYpower_of_two_ceiling,T103);
  lit_81 = YPPsym((P)"flo-bits");
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YprotoSmathYflo_bits = YPmet(FUNCODEREF(YprotoSmathYflo_bits),LITREF(lit_81),T107,ENVNUL,PNUL,YPfalse);
  T108 = YprotoSmathYflo_bits;
  VARSET(YprotoSmathYflo_bits,T108);
  T110 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLfloG));
  T109 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_1)),YPPlist(2,T110,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_81 = YPmet(FUNCODEREF(fun_as_81),LITREF(lit_8),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YprotoStypesYas);
  if (T113 != YPfalse) {
    T112 = VARREF(YprotoStypesYas);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_as_81;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YprotoStypesYas,T111);
  T115 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_82 = YPmet(FUNCODEREF(fun_EE_82),LITREF(lit_12),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YmacrosYEE);
  if (T118 != YPfalse) {
    T117 = VARREF(YmacrosYEE);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_EE_82;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YmacrosYEE,T116);
  T120 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_83 = YPmet(FUNCODEREF(fun_L_83),LITREF(lit_20),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YprotoSmagnitudesYL);
  if (T123 != YPfalse) {
    T122 = VARREF(YprotoSmagnitudesYL);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_L_83;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YprotoSmagnitudesYL,T121);
  T125 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_84 = YPmet(FUNCODEREF(fun_A_84),LITREF(lit_34),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YprotoSmathYA);
  if (T128 != YPfalse) {
    T127 = VARREF(YprotoSmathYA);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_A_84;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YprotoSmathYA,T126);
  T130 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___85 = YPmet(FUNCODEREF(fun___85),LITREF(lit_36),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YprotoSmathY_);
  if (T133 != YPfalse) {
    T132 = VARREF(YprotoSmathY_);
  } else {
    T132 = YPfalse;
  }
  T134 = fun___85;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YprotoSmathY_,T131);
  T135 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_86 = YPmet(FUNCODEREF(fun_T_86),LITREF(lit_38),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YprotoSmathYT);
  if (T138 != YPfalse) {
    T137 = VARREF(YprotoSmathYT);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_T_86;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YprotoSmathYT,T136);
  lit_82 = YPPsym((P)"/");
  T140 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_87 = YPmet(FUNCODEREF(fun_S_87),LITREF(lit_82),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YprotoSmathYS);
  if (T143 != YPfalse) {
    T142 = VARREF(YprotoSmathYS);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_S_87;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YprotoSmathYS,T141);
  T145 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_truncS_88 = YPmet(FUNCODEREF(fun_truncS_88),LITREF(lit_55),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YprotoSmathYtruncS);
  if (T148 != YPfalse) {
    T147 = VARREF(YprotoSmathYtruncS);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_truncS_88;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YprotoSmathYtruncS,T146);
  T150 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_46)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_89 = YPmet(FUNCODEREF(fun_pow_89),LITREF(lit_63),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YprotoSmathYpow);
  if (T153 != YPfalse) {
    T152 = VARREF(YprotoSmathYpow);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_pow_89;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YprotoSmathYpow,T151);
  lit_83 = YPflo(FLOINT(3.1415928));
  VARSET(YprotoSmathYDpi,LITREF(lit_83));
  lit_84 = YPflo(FLOINT(2.7182816));
  VARSET(YprotoSmathYDe,LITREF(lit_84));
  lit_85 = YPPsym((P)"isqrt");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_90 = YPmet(FUNCODEREF(fun_isqrt_90),LITREF(lit_85),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YprotoSmathYisqrt);
  if (T158 != YPfalse) {
    T157 = VARREF(YprotoSmathYisqrt);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_isqrt_90;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YprotoSmathYisqrt,T156);
  lit_86 = YPPsym((P)"exp");
  lit_87 = YPPsym((P)"return");
  lit_88 = YPPsym((P)"x-2367");
  lit_89 = YPPsym((P)"msg");
  lit_90 = YPPsym((P)"args");
  lit_91 = YPPsym((P)"def-unary-trans");
  lit_92 = YPsb((P)"Match Pattern Failure");
  lit_93 = YPsb((P)"%f");
  lit_94 = YPPsym((P)"seq");
  lit_95 = YPPsym((P)"dg");
  lit_96 = YPPsym((P)"<num>");
  lit_97 = YPPsym((P)"=>");
  lit_98 = YPPsym((P)"dm");
  lit_99 = YPPsym((P)"<int>");
  lit_100 = YPPsym((P)"<flo>");
  lit_101 = YPPsym((P)"%fb");
  lit_102 = YPPsym((P)"%fu");
  T162 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_90)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2367_91 = YPmet(FUNCODEREF(fun_x_2367_91),LITREF(lit_88),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_87)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_93;
  YPmacro(YPPsym((P)"proto/math"),YPPsym((P)"def-unary-trans"),T163);
  lit_103 = YPPsym((P)"sqrt");
  T165 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T164 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_103),T165,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYsqrt,T164);
  lit_104 = YPsb((P)"SQRT would produce complex number");
  T166 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_sqrt_94 = YPmet(FUNCODEREF(fun_sqrt_94),LITREF(lit_103),T166,ENVNUL,PNUL,YPfalse);
  T169 = BOUNDP(YprotoSmathYsqrt);
  if (T169 != YPfalse) {
    T168 = VARREF(YprotoSmathYsqrt);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_sqrt_94;
  T167 = CALL2(1,VARREF(YPdefine_method),T168,T170);
  VARSET(YprotoSmathYsqrt,T167);
  T171 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_95 = YPmet(FUNCODEREF(fun_sqrt_95),LITREF(lit_103),T171,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(YprotoSmathYsqrt);
  if (T174 != YPfalse) {
    T173 = VARREF(YprotoSmathYsqrt);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_sqrt_95;
  T172 = CALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YprotoSmathYsqrt,T172);
  lit_105 = YPPsym((P)"log");
  T177 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T176 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_105),T177,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYlog,T176);
  T178 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_log_96 = YPmet(FUNCODEREF(fun_log_96),LITREF(lit_105),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YprotoSmathYlog);
  if (T181 != YPfalse) {
    T180 = VARREF(YprotoSmathYlog);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_log_96;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YprotoSmathYlog,T179);
  T183 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_97 = YPmet(FUNCODEREF(fun_log_97),LITREF(lit_105),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YprotoSmathYlog);
  if (T186 != YPfalse) {
    T185 = VARREF(YprotoSmathYlog);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_log_97;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YprotoSmathYlog,T184);
  lit_106 = YPPsym((P)"sin");
  T189 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T188 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_106),T189,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYsin,T188);
  T190 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_sin_98 = YPmet(FUNCODEREF(fun_sin_98),LITREF(lit_106),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YprotoSmathYsin);
  if (T193 != YPfalse) {
    T192 = VARREF(YprotoSmathYsin);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sin_98;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YprotoSmathYsin,T191);
  T195 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_99 = YPmet(FUNCODEREF(fun_sin_99),LITREF(lit_106),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YprotoSmathYsin);
  if (T198 != YPfalse) {
    T197 = VARREF(YprotoSmathYsin);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_sin_99;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YprotoSmathYsin,T196);
  lit_107 = YPPsym((P)"cos");
  T201 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T200 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_107),T201,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYcos,T200);
  T202 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_cos_100 = YPmet(FUNCODEREF(fun_cos_100),LITREF(lit_107),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YprotoSmathYcos);
  if (T205 != YPfalse) {
    T204 = VARREF(YprotoSmathYcos);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_cos_100;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YprotoSmathYcos,T203);
  T207 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_101 = YPmet(FUNCODEREF(fun_cos_101),LITREF(lit_107),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YprotoSmathYcos);
  if (T210 != YPfalse) {
    T209 = VARREF(YprotoSmathYcos);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_cos_101;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YprotoSmathYcos,T208);
  lit_108 = YPPsym((P)"tan");
  T213 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T212 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_108),T213,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYtan,T212);
  T214 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_tan_102 = YPmet(FUNCODEREF(fun_tan_102),LITREF(lit_108),T214,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YprotoSmathYtan);
  if (T217 != YPfalse) {
    T216 = VARREF(YprotoSmathYtan);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_tan_102;
  T215 = CALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YprotoSmathYtan,T215);
  T219 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_103 = YPmet(FUNCODEREF(fun_tan_103),LITREF(lit_108),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YprotoSmathYtan);
  if (T222 != YPfalse) {
    T221 = VARREF(YprotoSmathYtan);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_tan_103;
  T220 = CALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YprotoSmathYtan,T220);
  lit_109 = YPPsym((P)"sinh");
  T225 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T224 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_109),T225,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYsinh,T224);
  T226 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_sinh_104 = YPmet(FUNCODEREF(fun_sinh_104),LITREF(lit_109),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YprotoSmathYsinh);
  if (T229 != YPfalse) {
    T228 = VARREF(YprotoSmathYsinh);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_sinh_104;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YprotoSmathYsinh,T227);
  T231 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_105 = YPmet(FUNCODEREF(fun_sinh_105),LITREF(lit_109),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YprotoSmathYsinh);
  if (T234 != YPfalse) {
    T233 = VARREF(YprotoSmathYsinh);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_sinh_105;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YprotoSmathYsinh,T232);
  lit_110 = YPPsym((P)"cosh");
  T237 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T236 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_110),T237,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYcosh,T236);
  T238 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_cosh_106 = YPmet(FUNCODEREF(fun_cosh_106),LITREF(lit_110),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YprotoSmathYcosh);
  if (T241 != YPfalse) {
    T240 = VARREF(YprotoSmathYcosh);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_cosh_106;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YprotoSmathYcosh,T239);
  T243 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_107 = YPmet(FUNCODEREF(fun_cosh_107),LITREF(lit_110),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YprotoSmathYcosh);
  if (T246 != YPfalse) {
    T245 = VARREF(YprotoSmathYcosh);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_cosh_107;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YprotoSmathYcosh,T244);
  lit_111 = YPPsym((P)"tanh");
  T249 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T248 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_111),T249,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYtanh,T248);
  T250 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_tanh_108 = YPmet(FUNCODEREF(fun_tanh_108),LITREF(lit_111),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YprotoSmathYtanh);
  if (T253 != YPfalse) {
    T252 = VARREF(YprotoSmathYtanh);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_tanh_108;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YprotoSmathYtanh,T251);
  T255 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_109 = YPmet(FUNCODEREF(fun_tanh_109),LITREF(lit_111),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YprotoSmathYtanh);
  if (T258 != YPfalse) {
    T257 = VARREF(YprotoSmathYtanh);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_tanh_109;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YprotoSmathYtanh,T256);
  lit_112 = YPPsym((P)"asin");
  T261 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T260 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_112),T261,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYasin,T260);
  lit_113 = YPsb((P)"SQRT would produce complex number");
  T262 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_asin_110 = YPmet(FUNCODEREF(fun_asin_110),LITREF(lit_112),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YprotoSmathYasin);
  if (T265 != YPfalse) {
    T264 = VARREF(YprotoSmathYasin);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_asin_110;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YprotoSmathYasin,T263);
  T267 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_111 = YPmet(FUNCODEREF(fun_asin_111),LITREF(lit_112),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YprotoSmathYasin);
  if (T270 != YPfalse) {
    T269 = VARREF(YprotoSmathYasin);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_asin_111;
  T268 = CALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YprotoSmathYasin,T268);
  lit_114 = YPPsym((P)"acos");
  T273 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T272 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_114),T273,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYacos,T272);
  lit_115 = YPsb((P)"SQRT would produce complex number");
  T276 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T275 = fun_acos_112 = YPmet(FUNCODEREF(fun_acos_112),LITREF(lit_114),T276,ENVNUL,PNUL,YPfalse);
  T280 = BOUNDP(YprotoSmathYacos);
  if (T280 != YPfalse) {
    T279 = VARREF(YprotoSmathYacos);
  } else {
    T279 = YPfalse;
  }
  T281 = fun_acos_112;
  T278 = CALL2(1,VARREF(YPdefine_method),T279,T281);
  T277 = VARSET(YprotoSmathYacos,T278);
  T274 = T277;
  return T274;
}

P YprotoSmathY___main_2___() {
  P tmpF5268;
  P tmpF5267;
  P tmpF5266;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_113 = YPmet(FUNCODEREF(fun_acos_113),LITREF(lit_114),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YprotoSmathYacos);
  if (T3 != YPfalse) {
    T2 = VARREF(YprotoSmathYacos);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_acos_113;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YprotoSmathYacos,T1);
  lit_116 = YPPsym((P)"atan");
  T6 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_116),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYatan,T5);
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_atan_114 = YPmet(FUNCODEREF(fun_atan_114),LITREF(lit_116),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YprotoSmathYatan);
  if (T10 != YPfalse) {
    T9 = VARREF(YprotoSmathYatan);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_atan_114;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YprotoSmathYatan,T8);
  T12 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_115 = YPmet(FUNCODEREF(fun_atan_115),LITREF(lit_116),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YprotoSmathYatan);
  if (T15 != YPfalse) {
    T14 = VARREF(YprotoSmathYatan);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_atan_115;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YprotoSmathYatan,T13);
  T18 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_1)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T17 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_39),T18,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYatan2,T17);
  T19 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_1)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_116 = YPmet(FUNCODEREF(fun_atan2_116),LITREF(lit_39),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YprotoSmathYatan2);
  if (T22 != YPfalse) {
    T21 = VARREF(YprotoSmathYatan2);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_atan2_116;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YprotoSmathYatan2,T20);
  T24 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_1)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_117 = YPmet(FUNCODEREF(fun_atan2_117),LITREF(lit_39),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YprotoSmathYatan2);
  if (T27 != YPfalse) {
    T26 = VARREF(YprotoSmathYatan2);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_atan2_117;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YprotoSmathYatan2,T25);
  T30 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_41)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T29 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T30,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmathYlogn,T29);
  T31 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_41)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_118 = YPmet(FUNCODEREF(fun_logn_118),LITREF(lit_40),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YprotoSmathYlogn);
  if (T34 != YPfalse) {
    T33 = VARREF(YprotoSmathYlogn);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_logn_118;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YprotoSmathYlogn,T32);
  tmpF5266 = YPfalse;
  if (tmpF5266 != YPfalse) {
    T36 = VARREF(YprotoSmathYnum_to_str);
  } else {
    T36 = YPfalse;
  }
  tmpF5267 = YPfalse;
  if (tmpF5267 != YPfalse) {
    T37 = VARREF(YprotoSmathYchar_Gascii);
  } else {
    T37 = YPfalse;
  }
  tmpF5268 = YPfalse;
  if (tmpF5268 != YPfalse) {
    T38 = VARREF(YprotoSmathYfabs);
  } else {
    T38 = YPfalse;
  }
  T39 = YPfalse;
  return T39;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoSmagnitudes;
extern MODULE_INFO module_info_protoStypes;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoSmagnitudes},
  {&module_info_protoStypes},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"and", &module_info_macros, "and"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"<met>", &module_info_boot, "<met>"},
  {"mif", &module_info_boot, "mif"},
  {"use/export", &module_info_boot, "use/export"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"t+", &module_info_protoStypes, "t+"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"var-name", &module_info_macros, "var-name"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"isa", &module_info_boot, "isa"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"incf", &module_info_macros, "incf"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"%f*", &module_info_boot, "%f*"},
  {"%iu", &module_info_boot, "%iu"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%im", &module_info_boot, "%im"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"rep", &module_info_boot, "rep"},
  {"opf", &module_info_macros, "opf"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"map", &module_info_macros, "map"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"t?", &module_info_protoStypes, "t?"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"match", &module_info_macros, "match"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<log>", &module_info_boot, "<log>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"renew", &module_info_macros, "renew"},
  {"decf", &module_info_macros, "decf"},
  {"%raw", &module_info_boot, "%raw"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"t<", &module_info_protoStypes, "t<"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"collected", &module_info_macros, "collected"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"match-atom", &module_info_macros, "match-atom"},
  {">", &module_info_protoSmagnitudes, ">"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"seq", &module_info_boot, "seq"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i<", &module_info_boot, "%i<"},
  {"%selt", &module_info_boot, "%selt"},
  {"any?", &module_info_protoStypes, "any?"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"pushf", &module_info_macros, "pushf"},
  {"class-props", &module_info_boot, "class-props"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"t=", &module_info_protoStypes, "t="},
  {"error", &module_info_boot, "error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"ddv", &module_info_macros, "ddv"},
  {"%cb", &module_info_boot, "%cb"},
  {"<", &module_info_protoSmagnitudes, "<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"collecting", &module_info_macros, "collecting"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"quote", &module_info_boot, "quote"},
  {"%str", &module_info_boot, "%str"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"max", &module_info_protoSmagnitudes, "max"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"<product>", &module_info_protoStypes, "<product>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"len", &module_info_protoStypes, "len"},
  {"type-elts-setter", &module_info_protoStypes, "type-elts-setter"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"tail", &module_info_boot, "tail"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"case-by", &module_info_macros, "case-by"},
  {"min", &module_info_protoSmagnitudes, "min"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"%i&", &module_info_boot, "%i&"},
  {"class-name", &module_info_boot, "class-name"},
  {"swapf", &module_info_macros, "swapf"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"if", &module_info_boot, "if"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"dlet", &module_info_macros, "dlet"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"%c=", &module_info_boot, "%c="},
  {"unless", &module_info_macros, "unless"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%f=", &module_info_boot, "%f="},
  {"dc", &module_info_boot, "dc"},
  {"pair", &module_info_macros, "pair"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {">=", &module_info_protoSmagnitudes, ">="},
  {"app-sup", &module_info_macros, "app-sup"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"as", &module_info_protoStypes, "as"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"while", &module_info_macros, "while"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"dl", &module_info_boot, "dl"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"dg", &module_info_boot, "dg"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<int>", &module_info_boot, "<int>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"%fu", &module_info_boot, "%fu"},
  {"<=", &module_info_protoSmagnitudes, "<="},
  {"sup", &module_info_macros, "sup"},
  {"%sb", &module_info_boot, "%sb"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"%velt", &module_info_boot, "%velt"},
  {"==", &module_info_macros, "=="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"%prop", &module_info_boot, "%prop"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"t*", &module_info_protoStypes, "t*"},
  {"%f-", &module_info_boot, "%f-"},
  {"case", &module_info_macros, "case"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%isa", &module_info_boot, "%isa"},
  {"popf", &module_info_macros, "popf"},
  {"head", &module_info_boot, "head"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"+", &YprotoSmathYA},
  {"round-to", &YprotoSmathYround_to},
  {"contagious-call", &YprotoSmathYcontagious_call},
  {"zero?", &YprotoSmathYzeroQ},
  {"---main-2---", NULL},
  {"round/", &YprotoSmathYroundS},
  {"sin", &YprotoSmathYsin},
  {"eof-object", &YprotoSmathYeof_object},
  {"even?", &YprotoSmathYevenQ},
  {"abs", &YprotoSmathYabs},
  {"log", &YprotoSmathYlog},
  {"-", &YprotoSmathY_},
  {"tanh", &YprotoSmathYtanh},
  {"&", &YprotoSmathYB},
  {"~==", &YprotoSmathYNEE},
  {"flo-bits", &YprotoSmathYflo_bits},
  {"trunc/", &YprotoSmathYtruncS},
  {"~=", &YprotoSmathYNE},
  {"neg", &YprotoSmathYneg},
  {"|", &YprotoSmathYK},
  {"sqrt", &YprotoSmathYsqrt},
  {"*", &YprotoSmathYT},
  {"round", &YprotoSmathYround},
  {"logn", &YprotoSmathYlogn},
  {"as-log", &YprotoSmathYas_log},
  {"1+", &YprotoSmathY1A},
  {"pow", &YprotoSmathYpow},
  {"def-unary-trans", NULL},
  {"digit?", &YprotoSmathYdigitQ},
  {"<bot>", &YprotoSmathYLbotG},
  {"to-str", &YprotoSmathYto_str},
  {"floor/", &YprotoSmathYfloorS},
  {"atan", &YprotoSmathYatan},
  {"char->ascii", &YprotoSmathYchar_Gascii},
  {"to-upper", &YprotoSmathYto_upper},
  {"address-of", &YprotoSmathYaddress_of},
  {">>>", &YprotoSmathYGGG},
  {"trunc", &YprotoSmathYtrunc},
  {"=", &YprotoSmathYE},
  {"alpha?", &YprotoSmathYalphaQ},
  {"ceil", &YprotoSmathYceil},
  {"to-lower", &YprotoSmathYto_lower},
  {"pos?", &YprotoSmathYposQ},
  {"---main-1---", NULL},
  {"bit?", &YprotoSmathYbitQ},
  {"cosh", &YprotoSmathYcosh},
  {"mod", &YprotoSmathYmod},
  {"power-of-two-ceiling", &YprotoSmathYpower_of_two_ceiling},
  {"acos", &YprotoSmathYacos},
  {"<<", &YprotoSmathYLL},
  {"sinh", &YprotoSmathYsinh},
  {"upper?", &YprotoSmathYupperQ},
  {"isqrt", &YprotoSmathYisqrt},
  {"1-", &YprotoSmathY1_},
  {"$e", &YprotoSmathYDe},
  {"eof-object?", &YprotoSmathYeof_objectQ},
  {"atan2", &YprotoSmathYatan2},
  {"num-to-str", &YprotoSmathYnum_to_str},
  {"neg?", &YprotoSmathYnegQ},
  {"floor", &YprotoSmathYfloor},
  {"contagious-type", &YprotoSmathYcontagious_type},
  {"$pi", &YprotoSmathYDpi},
  {"ceiling/", &YprotoSmathYceilingS},
  {"asin", &YprotoSmathYasin},
  {"rem", &YprotoSmathYrem},
  {"~", &YprotoSmathYN},
  {"^", &YprotoSmathYC},
  {"fabs", &YprotoSmathYfabs},
  {"lower?", &YprotoSmathYlowerQ},
  {"to-digit", &YprotoSmathYto_digit},
  {"tan", &YprotoSmathYtan},
  {">>", &YprotoSmathYGG},
  {"---main-0---", NULL},
  {"odd?", &YprotoSmathYoddQ},
  {"/", &YprotoSmathYS},
  {"cos", &YprotoSmathYcos},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"+", "+"},
  {"contagious-call", "contagious-call"},
  {"zero?", "zero?"},
  {"round/", "round/"},
  {"sin", "sin"},
  {"eof-object", "eof-object"},
  {"even?", "even?"},
  {"rem", "rem"},
  {"log", "log"},
  {"-", "-"},
  {"tanh", "tanh"},
  {"&", "&"},
  {"~==", "~=="},
  {"trunc/", "trunc/"},
  {"~=", "~="},
  {"neg", "neg"},
  {"|", "|"},
  {"*", "*"},
  {"round", "round"},
  {"logn", "logn"},
  {"as-log", "as-log"},
  {"alpha?", "alpha?"},
  {"1+", "1+"},
  {"pow", "pow"},
  {"digit?", "digit?"},
  {"<bot>", "<bot>"},
  {"to-str", "to-str"},
  {"floor/", "floor/"},
  {"atan", "atan"},
  {">", ">"},
  {"char->ascii", "char->ascii"},
  {"to-upper", "to-upper"},
  {"address-of", "address-of"},
  {">>>", ">>>"},
  {"<", "<"},
  {"trunc", "trunc"},
  {"=", "="},
  {"ceil", "ceil"},
  {"to-lower", "to-lower"},
  {"max", "max"},
  {"acos", "acos"},
  {"pos?", "pos?"},
  {"bit?", "bit?"},
  {"cosh", "cosh"},
  {"sqrt", "sqrt"},
  {"mod", "mod"},
  {"power-of-two-ceiling", "power-of-two-ceiling"},
  {"flo-bits", "flo-bits"},
  {"min", "min"},
  {"sinh", "sinh"},
  {"upper?", "upper?"},
  {"isqrt", "isqrt"},
  {"1-", "1-"},
  {"$e", "$e"},
  {"eof-object?", "eof-object?"},
  {"atan2", "atan2"},
  {"num-to-str", "num-to-str"},
  {"neg?", "neg?"},
  {"abs", "abs"},
  {"floor", "floor"},
  {"contagious-type", "contagious-type"},
  {"$pi", "$pi"},
  {">=", ">="},
  {"ceiling/", "ceiling/"},
  {"asin", "asin"},
  {"as", "as"},
  {"~", "~"},
  {"^", "^"},
  {"fabs", "fabs"},
  {"lower?", "lower?"},
  {"to-digit", "to-digit"},
  {"tan", "tan"},
  {"<=", "<="},
  {">>", ">>"},
  {"odd?", "odd?"},
  {"==", "=="},
  {"/", "/"},
  {"<<", "<<"},
  {"cos", "cos"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoSmath;
MODULE_INFO module_info_protoSmath = {
  "proto/math",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_protoSmagnitudes (void);
extern void load_module_protoStypes (void);

/* EXPRESSION: */

extern void load_module_protoSmath (void);

void load_module_protoSmath (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoSmagnitudes();
  load_module_protoStypes();

  (P)YprotoSmathY___main_0___();
  (P)YprotoSmathY___main_1___();
  (P)YprotoSmathY___main_2___();

}

/* END OF GENERATED CODE. */
