/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/math */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooSmathYDe,"goo/math","$e");
DEF(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSmathYLL,"goo/math","<<");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YgooSmathYatan,"goo/math","atan");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YtT,"goo/boot","t*");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSmathYcos,"goo/math","cos");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmathYlogn,"goo/math","logn");
DEF(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooSmathYN,"goo/math","~");
DEF(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooSmathYceilS,"goo/math","ceil/");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YPprop,"goo/boot","%prop");
DEF(YgooSmathYNE,"goo/math","~=");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooSmathYround_to,"goo/math","round-to");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooSmathY_,"goo/math","-");
DEF(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSmathYatan2,"goo/math","atan2");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSmathYdiv,"goo/math","div");
DEF(YgooSmathYsin,"goo/math","sin");
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSmathYpow,"goo/math","pow");
DEF(YgooSmathYabs,"goo/math","abs");
DEF(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSmathYround,"goo/math","round");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSmathYE,"goo/math","=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSmathYS,"goo/math","/");
DEF(YgooSmathYasin,"goo/math","asin");
DEF(YgooSmathYneg,"goo/math","neg");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
DEF(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSmathYlog,"goo/math","log");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSmathYrem,"goo/math","rem");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooSmathYC,"goo/math","^");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooSmathYNEE,"goo/math","~==");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YgooSmathYevenQ,"goo/math","even?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ynew,"goo/boot","new");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
DEF(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSmathYto_str,"goo/math","to-str");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_49);
DEFLIT(lit_114);
DEFLIT(lit_51);
DEFLIT(lit_19);
DEFLIT(lit_28);
DEFLIT(lit_17);
DEFLIT(lit_60);
DEFLIT(lit_85);
DEFLIT(lit_40);
DEFLIT(lit_37);
DEFLIT(lit_45);
DEFLIT(lit_116);
DEFLIT(lit_62);
DEFLIT(lit_84);
DEFLIT(lit_90);
DEFLIT(lit_111);
DEFLIT(lit_12);
DEFLIT(lit_31);
DEFLIT(lit_105);
DEFLIT(lit_87);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_86);
DEFLIT(lit_24);
DEFLIT(lit_48);
DEFLIT(lit_11);
DEFLIT(lit_39);
DEFLIT(lit_18);
DEFLIT(lit_118);
DEFLIT(lit_101);
DEFLIT(lit_50);
DEFLIT(lit_120);
DEFLIT(lit_13);
DEFLIT(lit_125);
DEFLIT(lit_64);
DEFLIT(lit_33);
DEFLIT(lit_71);
DEFLIT(lit_63);
DEFLIT(lit_26);
DEFLIT(lit_66);
DEFLIT(lit_81);
DEFLIT(lit_59);
DEFLIT(lit_75);
DEFLIT(lit_96);
DEFLIT(lit_83);
DEFLIT(lit_38);
DEFLIT(lit_54);
DEFLIT(lit_79);
DEFLIT(lit_88);
DEFLIT(lit_29);
DEFLIT(lit_98);
DEFLIT(lit_21);
DEFLIT(lit_8);
DEFLIT(lit_30);
DEFLIT(lit_55);
DEFLIT(lit_74);
DEFLIT(lit_20);
DEFLIT(lit_110);
DEFLIT(lit_89);
DEFLIT(lit_46);
DEFLIT(lit_109);
DEFLIT(lit_80);
DEFLIT(lit_58);
DEFLIT(lit_117);
DEFLIT(lit_5);
DEFLIT(lit_119);
DEFLIT(lit_113);
DEFLIT(lit_102);
DEFLIT(lit_91);
DEFLIT(lit_121);
DEFLIT(lit_68);
DEFLIT(lit_99);
DEFLIT(lit_25);
DEFLIT(lit_123);
DEFLIT(lit_76);
DEFLIT(lit_108);
DEFLIT(lit_53);
DEFLIT(lit_95);
DEFLIT(lit_34);
DEFLIT(lit_124);
DEFLIT(lit_9);
DEFLIT(lit_104);
DEFLIT(lit_112);
DEFLIT(lit_36);
DEFLIT(lit_22);
DEFLIT(lit_93);
DEFLIT(lit_73);
DEFLIT(lit_14);
DEFLIT(lit_107);
DEFLIT(lit_94);
DEFLIT(lit_47);
DEFLIT(lit_97);
DEFLIT(lit_82);
DEFLIT(lit_65);
DEFLIT(lit_52);
DEFLIT(lit_43);
DEFLIT(lit_2);
DEFLIT(lit_32);
DEFLIT(lit_56);
DEFLIT(lit_57);
DEFLIT(lit_15);
DEFLIT(lit_126);
DEFLIT(lit_103);
DEFLIT(lit_72);
DEFLIT(lit_3);
DEFLIT(lit_106);
DEFLIT(lit_77);
DEFLIT(lit_115);
DEFLIT(lit_42);
DEFLIT(lit_70);
DEFLIT(lit_61);
DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_92);
DEFLIT(lit_27);
DEFLIT(lit_6);
DEFLIT(lit_69);
DEFLIT(lit_44);
DEFLIT(lit_67);
DEFLIT(lit_23);
DEFLIT(lit_100);
DEFLIT(lit_122);
DEFLIT(lit_127);
DEFLIT(lit_78);
DEFLIT(lit_41);
DEFLIT(lit_1);
DEFLIT(lit_10);

/* FUNCTIONS: */

LOCFOR(fun_to_str_0);
FUNFOR(YgooSmathYaddress_of);
LOCFOR(fun_to_str_2);
LOCFOR(fun_to_str_3);
LOCFOR(fun_as_4);
FUNFOR(YgooSmathYas_log);
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
LOCFOR(fun_to_digit_18);
LOCFOR(fun_to_str_19);
LOCFOR(fun_alphaQ_20);
LOCFOR(fun_digitQ_21);
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
LOCFOR(fun_S_32);
LOCFOR(fun_atan2_33);
LOCFOR(fun_logn_34);
LOCFOR(fun_floor_35);
LOCFOR(fun_ceil_36);
LOCFOR(fun_round_37);
LOCFOR(fun_round_to_38);
LOCFOR(fun_trunc_39);
LOCFOR(fun_floorS_40);
LOCFOR(fun_ceilS_41);
LOCFOR(fun_roundS_42);
LOCFOR(fun_truncS_43);
LOCFOR(fun_div_44);
LOCFOR(fun_mod_45);
LOCFOR(fun_modA_46);
LOCFOR(fun_mod__47);
LOCFOR(fun_x_1288_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_x_1292_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_rem_54);
LOCFOR(fun_pow_55);
LOCFOR(fun_posQ_56);
LOCFOR(fun_zeroQ_57);
LOCFOR(fun_negQ_58);
LOCFOR(fun_neg_59);
LOCFOR(fun_abs_60);
LOCFOR(fun_to_str_61);
LOCFOR(fun_contagious_type_62);
LOCFOR(fun_contagious_type_63);
LOCFOR(fun_contagious_type_64);
LOCFOR(fun_contagious_type_65);
LOCFOR(fun_EE_66);
LOCFOR(fun_L_67);
LOCFOR(fun_A_68);
LOCFOR(fun___69);
LOCFOR(fun_T_70);
LOCFOR(fun_S_71);
LOCFOR(fun_floor_72);
LOCFOR(fun_ceil_73);
LOCFOR(fun_round_74);
LOCFOR(fun_trunc_75);
LOCFOR(fun_truncS_76);
LOCFOR(fun_mod_77);
LOCFOR(fun_loop_78);
LOCFOR(fun_pow_79);
LOCFOR(fun_K_80);
LOCFOR(fun_C_81);
LOCFOR(fun_B_82);
LOCFOR(fun_N_83);
LOCFOR(fun_bitQ_84);
LOCFOR(fun_evenQ_85);
LOCFOR(fun_oddQ_86);
LOCFOR(fun_GG_87);
LOCFOR(fun_GGG_88);
LOCFOR(fun_LL_89);
LOCFOR(fun_search_90);
LOCFOR(fun_power_of_two_ceil_91);
FUNFOR(YgooSmathYflo_bits);
LOCFOR(fun_as_93);
LOCFOR(fun_EE_94);
LOCFOR(fun_L_95);
LOCFOR(fun_A_96);
LOCFOR(fun___97);
LOCFOR(fun_T_98);
LOCFOR(fun_S_99);
LOCFOR(fun_truncS_100);
LOCFOR(fun_pow_101);
LOCFOR(fun_isqrt_102);
LOCFOR(fun_x_1296_103);
LOCFOR(fun_104);
LOCFOR(fun_105);
LOCFOR(fun_sqrt_106);
LOCFOR(fun_sqrt_107);
LOCFOR(fun_log_108);
LOCFOR(fun_log_109);
LOCFOR(fun_sin_110);
LOCFOR(fun_sin_111);
LOCFOR(fun_cos_112);
LOCFOR(fun_cos_113);
LOCFOR(fun_tan_114);
LOCFOR(fun_tan_115);
LOCFOR(fun_sinh_116);
LOCFOR(fun_sinh_117);
LOCFOR(fun_cosh_118);
LOCFOR(fun_cosh_119);
LOCFOR(fun_tanh_120);
LOCFOR(fun_tanh_121);
LOCFOR(fun_asin_122);
LOCFOR(fun_asin_123);
LOCFOR(fun_acos_124);
LOCFOR(fun_acos_125);
LOCFOR(fun_atan_126);
LOCFOR(fun_atan_127);
LOCFOR(fun_atan2_128);
LOCFOR(fun_atan2_129);
LOCFOR(fun_logn_130);
extern P YgooSmathY___main_0___ ();
extern P YgooSmathY___main_1___ ();
extern P YgooSmathY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_to_str_0) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(Yobject_class),x_);
  T2 = CALL1(1,VARREF(Yclass_name),T3);
  T1 = CALL1(1,VARREF(YgooSmathYto_str),T2);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_2),T1,LITREF(lit_3));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYaddress_of) {
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
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,type_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_11),type_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmathYas_log) {
  P x_;
  P tmpF870;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  tmpF870 = x_;
  if (tmpF870 != YPfalse) {
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
  P T0,T1;
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
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NE_8) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NEE_9) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_10) {
  P U_,i_;
  P T0,T1;
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
  P T0,T1;
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
  P T0,T1,T2,T3;
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
  P T0,T1,T2,T3;
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
  P codeF871;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  codeF871 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T3 = CALL2(1,VARREF(YgooSmagYGE),codeF871,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
    T5 = CALL2(1,VARREF(YgooSmagYLE),codeF871,T6);
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
  P codeF872;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  codeF872 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)65));
  T3 = CALL2(1,VARREF(YgooSmagYGE),codeF872,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)90));
    T5 = CALL2(1,VARREF(YgooSmagYLE),codeF872,T6);
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
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYupperQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)65));
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YgooSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_upper_17) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYlowerQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)65));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YgooSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_digit_18) {
  P digit_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(digit_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),digit_);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  T0 = CALL2(1,VARREF(YgooSmathY_),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_19) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYfabs),VARREF(YLstrG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_alphaQ_20) {
  P x_;
  P tmpF875;
  P tmpF874;
  P tmpF873;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)97),x_);
  tmpF873 = T2;
  if (tmpF873 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)122));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF874 = T1;
  if (tmpF874 != YPfalse) {
    T5 = tmpF874;
  } else {
    T7 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)65),x_);
    tmpF875 = T7;
    if (tmpF875 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)90));
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

FUNCODEDEF(fun_digitQ_21) {
  P x_;
  P tmpF876;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)48),x_);
  tmpF876 = T1;
  if (tmpF876 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)57));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
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
  P T0,T1,T2,T3;
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
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YPeof_object();
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_25) {
  P f_,x_,y_;
  P typeF877;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF877 = T1;
  T3 = CALL2(1,VARREF(YgooStypesYas),typeF877,x_);
  T4 = CALL2(1,VARREF(YgooStypesYas),typeF877,y_);
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
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmagYL),x_,y_);
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
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYA),x_,y_);
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
  T0 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
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
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathY_),x_,y_);
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
  T0 = CALL2(1,VARREF(YgooSmathY_),x_,YPint((P)1));
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
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYT),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_32) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYS),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan2_33) {
  P y_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYatan2),y_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logn_34) {
  P x_,b_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYlogn),x_,b_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_35) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYfloorS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceil_36) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYceilS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_37) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYroundS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_to_38) {
  P x_,n_;
  P fF878;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYround),x_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYpow),LITREF(lit_48),n_);
    fF878 = T4;
    T8 = CALL2(1,VARREF(YgooSmathYT),x_,fF878);
    T7 = CALL1(1,VARREF(YgooSmathYround),T8);
    T6 = CALL2(1,VARREF(YgooSmathYS),T7,fF878);
    T5 = CALL1(1,x_,T6);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_trunc_39) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floorS_40) {
  P real_,divisor_;
  P tmpF882;
  P remainderF881;
  P integerF880;
  P tup19F879;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup19F879 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup19F879,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF880 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup19F879,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF881 = T5;
  T9 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF881);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF882 = T8;
  if (tmpF882 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T12 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T11 = T13;
    } else {
      T14 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T11 = T14;
    }
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmathY_),integerF880,YPint((P)1));
    T17 = CALL2(1,VARREF(YgooSmathYA),remainderF881,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF880,remainderF881);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceilS_41) {
  P real_,divisor_;
  P tmpF886;
  P remainderF885;
  P integerF884;
  P tup20F883;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup20F883 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F883,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF884 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F883,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF885 = T5;
  T9 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF885);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF886 = T8;
  if (tmpF886 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T12 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T11 = T13;
    } else {
      T14 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T11 = T14;
    }
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmathYA),integerF884,YPint((P)1));
    T17 = CALL2(1,VARREF(YgooSmathY_),remainderF885,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF884,remainderF885);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_roundS_42) {
  P real_,divisor_;
  P tmpF895;
  P tmpF894;
  P minus_thresholdF893;
  P tmpF892;
  P tmpF891;
  P thresholdF890;
  P remainderF889;
  P integerF888;
  P tup21F887;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup21F887 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F887,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF888 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup21F887,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF889 = T5;
  T8 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T7 = CALL2(1,VARREF(YgooSmathYS),T8,LITREF(lit_55));
  check_type(T7,VARREF(YLnumG));
  thresholdF890 = T7;
  T11 = CALL2(1,VARREF(YgooSmagYG),remainderF889,thresholdF890);
  tmpF891 = T11;
  if (tmpF891 != YPfalse) {
    T12 = tmpF891;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYE),remainderF889,thresholdF890);
    tmpF892 = T14;
    if (tmpF892 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooSmathYoddQ),integerF888);
      T15 = T16;
    } else {
      T15 = YPfalse;
    }
    T13 = T15;
    T12 = T13;
  }
  T10 = T12;
  if (T10 != YPfalse) {
    T18 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T18 != YPfalse) {
      T20 = CALL2(1,VARREF(YgooSmathY_),integerF888,YPint((P)1));
      T21 = CALL2(1,VARREF(YgooSmathYA),remainderF889,divisor_);
      T19 = CALL2(1,VARREF(Ytup),T20,T21);
      T17 = T19;
    } else {
      T23 = CALL2(1,VARREF(YgooSmathYA),integerF888,YPint((P)1));
      T24 = CALL2(1,VARREF(YgooSmathY_),remainderF889,divisor_);
      T22 = CALL2(1,VARREF(Ytup),T23,T24);
      T17 = T22;
    }
    T9 = T17;
  } else {
    T27 = CALL1(1,VARREF(YgooSmathYneg),thresholdF890);
    minus_thresholdF893 = T27;
    T29 = CALL2(1,VARREF(YgooSmagYL),remainderF889,minus_thresholdF893);
    tmpF894 = T29;
    if (tmpF894 != YPfalse) {
      T30 = tmpF894;
    } else {
      T32 = CALL2(1,VARREF(YgooSmathYE),remainderF889,minus_thresholdF893);
      tmpF895 = T32;
      if (tmpF895 != YPfalse) {
        T34 = CALL1(1,VARREF(YgooSmathYoddQ),integerF888);
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
      T36 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
      if (T36 != YPfalse) {
        T38 = CALL2(1,VARREF(YgooSmathYA),integerF888,YPint((P)1));
        T39 = CALL2(1,VARREF(YgooSmathY_),remainderF889,divisor_);
        T37 = CALL2(1,VARREF(Ytup),T38,T39);
        T35 = T37;
      } else {
        T41 = CALL2(1,VARREF(YgooSmathY_),integerF888,YPint((P)1));
        T42 = CALL2(1,VARREF(YgooSmathYA),remainderF889,divisor_);
        T40 = CALL2(1,VARREF(Ytup),T41,T42);
        T35 = T40;
      }
      T25 = T35;
    } else {
      T43 = CALL2(1,VARREF(Ytup),integerF888,remainderF889);
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

FUNCODEDEF(fun_truncS_43) {
  P real_,divisor_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_div_44) {
  P x_,y_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  T2 = (P)YPiu(YPint((P)0));
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_45) {
  P real_,divisor_;
  P remainderF898;
  P UF897;
  P tup22F896;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup22F896 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F896,YPint((P)0));
  UF897 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F896,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF898 = T5;
  T4 = remainderF898;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_modA_46) {
  P i_,j_,n_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYA),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mod__47) {
  P i_,j_,n_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathY_),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1288_48) {
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

FUNCODEDEF(fun_49) {
  P return_;
  P x_1287F905;
  P x_1287F904;
  P x_1287F903;
  P maxF902;
  P placeF901;
  P x_1287F900;
  P x_1288F899;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1288_48,1);
  x_1288F899 = T1;
  FUNINIT(x_1288F899, 1,return_);
  x_1287F900 = FREEREF(0);
  placeF901 = YPfalse;
  placeF901 = BOXFAB(placeF901);
  maxF902 = YPfalse;
  maxF902 = BOXFAB(maxF902);
  T7 = CALL2(1,VARREF(YisaQ),x_1287F900,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1287F900,LITREF(lit_67),x_1288F899);
    x_1287F903 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1287F903,x_1288F899);
    BOXVAL(placeF901) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1287F903);
    x_1287F904 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1287F904,x_1288F899);
    BOXVAL(maxF902) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1287F904);
    x_1287F905 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F905,x_1288F899);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1288F899,LITREF(lit_68),x_1287F900);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T21 = BOXVAL(placeF901);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T26 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T28 = BOXVAL(maxF902);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T26,T27,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_49,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1292_51) {
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

FUNCODEDEF(fun_52) {
  P return_;
  P x_1291F912;
  P x_1291F911;
  P x_1291F910;
  P maxF909;
  P placeF908;
  P x_1291F907;
  P x_1292F906;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1292_51,1);
  x_1292F906 = T1;
  FUNINIT(x_1292F906, 1,return_);
  x_1291F907 = FREEREF(0);
  placeF908 = YPfalse;
  placeF908 = BOXFAB(placeF908);
  maxF909 = YPfalse;
  maxF909 = BOXFAB(maxF909);
  T7 = CALL2(1,VARREF(YisaQ),x_1291F907,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1291F907,LITREF(lit_71),x_1292F906);
    x_1291F910 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F910,x_1292F906);
    BOXVAL(placeF908) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1291F910);
    x_1291F911 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1291F911,x_1292F906);
    BOXVAL(maxF909) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1291F911);
    x_1291F912 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F912,x_1292F906);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1292F906,LITREF(lit_68),x_1291F907);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T21 = BOXVAL(placeF908);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T26 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T28 = BOXVAL(maxF909);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T26,T27,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_52,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rem_54) {
  P real_,divisor_;
  P remainderF915;
  P UF914;
  P tup23F913;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup23F913 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F913,YPint((P)0));
  UF914 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F913,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF915 = T5;
  T4 = remainderF915;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_55) {
  P base_,n_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(base_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYpow),base_,n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_posQ_56) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zeroQ_57) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_negQ_58) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_neg_59) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_abs_60) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYneg),x_);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_61) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_type_62) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_contagious_type_63) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_64) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_65) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_EE_66) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_L_67) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_A_68) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun___69) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_T_70) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_S_71) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL1(1,VARREF(Yerror),LITREF(lit_80));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_72) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_ceil_73) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_round_74) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_trunc_75) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_truncS_76) {
  P x_,y_;
  P resultF916;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T3 = (P)YPiu(x_);
  T4 = (P)YPiu(y_);
  T2 = (P)YPitS(T3,T4);
  T1 = (P)YPib(T2);
  resultF916 = T1;
  T7 = CALL2(1,VARREF(YgooSmathYT),resultF916,y_);
  T6 = CALL2(1,VARREF(YgooSmathY_),x_,T7);
  T5 = CALL2(1,VARREF(Ytup),resultF916,T6);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mod_77) {
  P x_,y_;
  P resF917;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T3 = (P)YPiu(x_);
  T4 = (P)YPiu(y_);
  T2 = (P)YPim(T3,T4);
  T1 = (P)YPib(T2);
  resF917 = T1;
  T6 = CALL2(1,VARREF(YgooSmagYL),resF917,YPint((P)0));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathYA),resF917,y_);
      T7 = T9;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathY_),resF917,y_);
      T7 = T10;
    }
    T5 = T7;
  } else {
    T5 = resF917;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_78) {
  P x_,p_,y_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(p_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYzeroQ),p_);
  if (T1 != YPfalse) {
    T0 = y_;
  } else {
    T4 = CALL2(1,VARREF(YgooSmagYG),p_,YPint((P)1));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSmathYT),x_,x_);
      T3 = T5;
    } else {
      T3 = x_;
    }
    T6 = CALL2(1,VARREF(YgooSmathYGG),p_,YPint((P)1));
    T8 = CALL1(1,VARREF(YgooSmathYoddQ),p_);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathYT),x_,y_);
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

FUNCODEDEF(fun_pow_79) {
  P x_,n_;
  P loopF918;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnegQ),n_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),n_);
    T3 = CALL2(1,VARREF(YgooSmathYpow),x_,T4);
    T2 = CALL2(1,VARREF(YgooSmathYS),YPint((P)1),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),x_,YPint((P)2));
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYLL),YPint((P)1),n_);
      T5 = T7;
    } else {
      T9 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
      if (T9 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
        if (T11 != YPfalse) {
          T14 = CALL1(1,VARREF(YgooSmathYneg),x_);
          T13 = CALL2(1,VARREF(YgooSmathYpow),T14,n_);
          T12 = CALL1(1,VARREF(YgooSmathYneg),T13);
          T10 = T12;
        } else {
          T16 = CALL1(1,VARREF(YgooSmathYneg),x_);
          T15 = CALL2(1,VARREF(YgooSmathYpow),T16,n_);
          T10 = T15;
        }
        T8 = T10;
      } else {
        if (YPtrue != YPfalse) {
          T19 = FUNSHELL(1,fun_loop_78,1);
          loopF918 = T19;
          FUNINIT(loopF918, 1,loopF918);
          T22 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)1));
          if (T22 != YPfalse) {
            T23 = CALL2(1,VARREF(YgooSmathYT),x_,x_);
            T21 = T23;
          } else {
            T21 = x_;
          }
          T24 = CALL2(1,VARREF(YgooSmathYGG),n_,YPint((P)1));
          T26 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
          if (T26 != YPfalse) {
            T25 = x_;
          } else {
            T25 = YPint((P)1);
          }
          T20 = CALL3(1,loopF918,T21,T24,T25);
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

FUNCODEDEF(fun_K_80) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_C_81) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_B_82) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_N_83) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_bitQ_84) {
  P o_,x_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_evenQ_85) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYB),x_,YPint((P)1));
  T0 = CALL1(1,VARREF(YgooSmathYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_oddQ_86) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYevenQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GG_87) {
  P x_,a_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_GGG_88) {
  P x_,a_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_LL_89) {
  P x_,a_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_search_90) {
  P po2_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(po2_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYG),po2_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = po2_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYA),po2_,po2_);
    a1 = T3;
    po2_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_power_of_two_ceil_91) {
  P x_;
  P searchF919;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_search_90,2);
  searchF919 = T1;
  FUNINIT(searchF919, 2,x_,searchF919);
  T2 = CALL1(1,searchF919,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_as_93) {
  P U_,x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_EE_94) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_L_95) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_A_96) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun___97) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_T_98) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_S_99) {
  P x_,y_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_truncS_100) {
  P x_,y_;
  P resultF921;
  P dividedF920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF920 = T1;
  T5 = (P)YPfu(dividedF920);
  T4 = (P)YPft(T5);
  T3 = (P)YPib(T4);
  resultF921 = T3;
  T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF921);
  T8 = CALL2(1,VARREF(YgooSmathY_),dividedF920,T9);
  T7 = CALL2(1,VARREF(YgooSmathYT),y_,T8);
  T6 = CALL2(1,VARREF(Ytup),resultF921,T7);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pow_101) {
  P x_,n_;
  P tmpF923;
  P resF922;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
loop:
  T4 = CALL1(1,VARREF(YgooSmathYabs),x_);
  T3 = (P)YPfu(T4);
  T5 = (P)YPfu(n_);
  T2 = (P)YPfpow(T3,T5);
  T1 = (P)YPfb(T2);
  resF922 = T1;
  T8 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  tmpF923 = T8;
  if (tmpF923 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T9 = T10;
  } else {
    T9 = YPfalse;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSmathYneg),resF922);
    T6 = T11;
  } else {
    T6 = resF922;
  }
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isqrt_102) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYsqrt),T2);
  T0 = CALL1(1,VARREF(YgooSmathYround),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1296_103) {
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

FUNCODEDEF(fun_104) {
  P return_;
  P PfpF935;
  P x_1295F934;
  P x_1295F933;
  P x_1295F932;
  P x_1295F931;
  P x_1295F930;
  P x_1295F929;
  P prefixF928;
  P paramF927;
  P nameF926;
  P x_1295F925;
  P x_1296F924;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1296_103,1);
  x_1296F924 = T1;
  FUNINIT(x_1296F924, 1,return_);
  x_1295F925 = FREEREF(0);
  nameF926 = YPfalse;
  nameF926 = BOXFAB(nameF926);
  paramF927 = YPfalse;
  paramF927 = BOXFAB(paramF927);
  prefixF928 = YPfalse;
  prefixF928 = BOXFAB(prefixF928);
  T9 = CALL2(1,VARREF(YisaQ),x_1295F925,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1295F925,LITREF(lit_103),x_1296F924);
    x_1295F929 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F929,x_1296F924);
    BOXVAL(nameF926) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1295F929);
    x_1295F930 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1295F930,x_1296F924);
    x_1295F931 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F931,x_1296F924);
    BOXVAL(paramF927) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1295F931);
    x_1295F932 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F932,x_1296F924);
    T17 = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1295F930);
    x_1295F933 = T21;
    BOXVAL(prefixF928) = x_1295F933;
    x_1295F934 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F934,x_1296F924);
    T22 = T23;
    T15 = T22;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1296F924,LITREF(lit_68),x_1295F925);
  }
  T27 = BOXVAL(nameF926);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_104),T27);
  PfpF935 = T26;
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T34 = BOXVAL(nameF926);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = BOXVAL(paramF927);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T41,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T42,T43,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T35,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T48 = BOXVAL(nameF926);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T54 = BOXVAL(paramF927);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T52 = CALL3(1,VARREF(YgooSmacrosYcat),T53,T55,Ynil);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T56,T57,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T58 = BOXVAL(prefixF928);
  T62 = BOXVAL(nameF926);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T68 = BOXVAL(paramF927);
  T67 = CALL1(1,VARREF(Ylst),T68);
  T64 = CALL4(1,VARREF(YgooSmacrosYcat),T65,T66,T67,Ynil);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T60 = CALL3(1,VARREF(YgooSmacrosYcat),T61,T63,Ynil);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T45 = CALLN(1,VARREF(YgooSmacrosYcat),6,T46,T47,T49,T58,T59,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T73 = BOXVAL(nameF926);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T79 = BOXVAL(paramF927);
  T78 = CALL1(1,VARREF(Ylst),T79);
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T77 = CALL3(1,VARREF(YgooSmacrosYcat),T78,T80,Ynil);
  T76 = CALL1(1,VARREF(Ylst),T77);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T75 = CALL4(1,VARREF(YgooSmacrosYcat),T76,T81,T82,Ynil);
  T74 = CALL1(1,VARREF(Ylst),T75);
  T83 = BOXVAL(prefixF928);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_112));
  T89 = CALL1(1,VARREF(Ylst),PfpF935);
  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T94 = BOXVAL(paramF927);
  T93 = CALL1(1,VARREF(Ylst),T94);
  T91 = CALL3(1,VARREF(YgooSmacrosYcat),T92,T93,Ynil);
  T90 = CALL1(1,VARREF(Ylst),T91);
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T70 = CALLN(1,VARREF(YgooSmacrosYcat),6,T71,T72,T74,T83,T84,Ynil);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T44,T69,Ynil);
  T25 = T28;
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_104,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sqrt_106) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_115));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYsqrt),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_sqrt_107) {
  P x_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_115));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfsqrt(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_log_108) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYlog),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_log_109) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_sin_110) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsin),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sin_111) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_cos_112) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcos),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cos_113) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_tan_114) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tan_115) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_sinh_116) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsinh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sinh_117) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_cosh_118) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcosh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cosh_119) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_tanh_120) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtanh),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tanh_121) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_asin_122) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_124));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYasin),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_asin_123) {
  P x_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_124));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfasin(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_124) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_126));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYacos),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_acos_125) {
  P x_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_126));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YPfacos(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_atan_126) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYatan),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_atan_127) {
  P x_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_atan2_128) {
  P y_,x_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_atan2_129) {
  P y_,x_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_logn_130) {
  P x_,b_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYlog),x_);
  T2 = CALL1(1,VARREF(YgooSmathYlog),b_);
  T0 = CALL2(1,VARREF(YgooSmathYS),T1,T2);
UNLINK_STACK();
  RET(T0);
}

P YgooSmathY___main_0___() {
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
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"to-str");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPsb((P)"{ obj(");
  lit_3 = YPsb((P)") }");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_0 = YPmet(FUNCODEREF(fun_to_str_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSmathYto_str);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSmathYto_str);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_to_str_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSmathYto_str,T1);
  lit_4 = YPPsym((P)"address-of");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYaddress_of = YPmet(FUNCODEREF(YgooSmathYaddress_of),LITREF(lit_4),T5,ENVNUL,PNUL,YPfalse);
  T6 = YgooSmathYaddress_of;
  VARSET(YgooSmathYaddress_of,T6);
  lit_5 = YPPsym((P)"<bot>");
  T8 = (P)YPpair(VARREF(YLanyG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_5),T8);
  VARSET(YgooSmathYLbotG,T7);
  lit_6 = YPsb((P)"#t");
  T10 = XCALL1(1,VARREF(YgooStypesYtE),YPtrue);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T10),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_2 = YPmet(FUNCODEREF(fun_to_str_2),LITREF(lit_0),T9,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooSmathYto_str);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSmathYto_str);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_to_str_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSmathYto_str,T11);
  lit_7 = YPsb((P)"#f");
  T16 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T16),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_3 = YPmet(FUNCODEREF(fun_to_str_3),LITREF(lit_0),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YgooSmathYto_str);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSmathYto_str);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_to_str_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSmathYto_str,T17);
  lit_8 = YPPsym((P)"as");
  lit_9 = YPPsym((P)"y");
  T22 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYas,T21);
  lit_10 = YPPsym((P)"type");
  lit_11 = YPsb((P)"NO AS METHOD FOR %= AND %=");
  T23 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_4 = YPmet(FUNCODEREF(fun_as_4),LITREF(lit_8),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooStypesYas);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooStypesYas);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_as_4;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooStypesYas,T24);
  lit_12 = YPPsym((P)"as-log");
  T28 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSmathYas_log = YPmet(FUNCODEREF(YgooSmathYas_log),LITREF(lit_12),T28,ENVNUL,PNUL,YPfalse);
  T29 = YgooSmathYas_log;
  VARSET(YgooSmathYas_log,T29);
  lit_13 = YPPsym((P)"==");
  T30 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_6 = YPmet(FUNCODEREF(fun_EE_6),LITREF(lit_13),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooSmacrosYEE);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSmacrosYEE);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_EE_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSmacrosYEE,T31);
  lit_14 = YPPsym((P)"=");
  T35 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_7 = YPmet(FUNCODEREF(fun_E_7),LITREF(lit_14),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooSmathYE);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSmathYE);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_E_7;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSmathYE,T36);
  lit_15 = YPPsym((P)"~=");
  T40 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NE_8 = YPmet(FUNCODEREF(fun_NE_8),LITREF(lit_15),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooSmathYNE);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooSmathYNE);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_NE_8;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooSmathYNE,T41);
  lit_16 = YPPsym((P)"~==");
  T45 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NEE_9 = YPmet(FUNCODEREF(fun_NEE_9),LITREF(lit_16),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooSmathYNEE);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooSmathYNEE);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_NEE_9;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooSmathYNEE,T46);
  lit_17 = YPPsym((P)"_");
  lit_18 = YPPsym((P)"i");
  T51 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLchrG));
  T50 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,T51,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_as_10 = YPmet(FUNCODEREF(fun_as_10),LITREF(lit_8),T50,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooStypesYas);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooStypesYas);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_as_10;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooStypesYas,T52);
  lit_19 = YPPsym((P)"c");
  T57 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLintG));
  T56 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_19)),YPPlist(2,T57,VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_as_11 = YPmet(FUNCODEREF(fun_as_11),LITREF(lit_8),T56,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YgooStypesYas);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooStypesYas);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_as_11;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooStypesYas,T58);
  lit_20 = YPPsym((P)"<");
  T62 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_12 = YPmet(FUNCODEREF(fun_L_12),LITREF(lit_20),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YgooSmagYL);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSmagYL);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_L_12;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSmagYL,T63);
  T67 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_13 = YPmet(FUNCODEREF(fun_EE_13),LITREF(lit_13),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YgooSmacrosYEE);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooSmacrosYEE);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_EE_13;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooSmacrosYEE,T68);
  lit_21 = YPPsym((P)"lower?");
  T72 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_lowerQ_14 = YPmet(FUNCODEREF(fun_lowerQ_14),LITREF(lit_21),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YgooSmathYlowerQ);
  if (T75 != YPfalse) {
    T74 = VARREF(YgooSmathYlowerQ);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_lowerQ_14;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YgooSmathYlowerQ,T73);
  lit_22 = YPPsym((P)"upper?");
  T77 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_upperQ_15 = YPmet(FUNCODEREF(fun_upperQ_15),LITREF(lit_22),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YgooSmathYupperQ);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooSmathYupperQ);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_upperQ_15;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooSmathYupperQ,T78);
  lit_23 = YPPsym((P)"to-lower");
  T82 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_lower_16 = YPmet(FUNCODEREF(fun_to_lower_16),LITREF(lit_23),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YgooSmathYto_lower);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooSmathYto_lower);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_to_lower_16;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooSmathYto_lower,T83);
  lit_24 = YPPsym((P)"to-upper");
  T87 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_upper_17 = YPmet(FUNCODEREF(fun_to_upper_17),LITREF(lit_24),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YgooSmathYto_upper);
  if (T90 != YPfalse) {
    T89 = VARREF(YgooSmathYto_upper);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_to_upper_17;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YgooSmathYto_upper,T88);
  lit_25 = YPPsym((P)"to-digit");
  lit_26 = YPPsym((P)"digit");
  T92 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_to_digit_18 = YPmet(FUNCODEREF(fun_to_digit_18),LITREF(lit_25),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YgooSmathYto_digit);
  if (T95 != YPfalse) {
    T94 = VARREF(YgooSmathYto_digit);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_to_digit_18;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YgooSmathYto_digit,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_19 = YPmet(FUNCODEREF(fun_to_str_19),LITREF(lit_0),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YgooSmathYto_str);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooSmathYto_str);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_to_str_19;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooSmathYto_str,T98);
  lit_27 = YPPsym((P)"alpha?");
  T102 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_alphaQ_20 = YPmet(FUNCODEREF(fun_alphaQ_20),LITREF(lit_27),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YgooSmathYalphaQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YgooSmathYalphaQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_alphaQ_20;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YgooSmathYalphaQ,T103);
  lit_28 = YPPsym((P)"digit?");
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_digitQ_21 = YPmet(FUNCODEREF(fun_digitQ_21),LITREF(lit_28),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YgooSmathYdigitQ);
  if (T110 != YPfalse) {
    T109 = VARREF(YgooSmathYdigitQ);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_digitQ_21;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YgooSmathYdigitQ,T108);
  lit_29 = YPPsym((P)"eof-object?");
  T112 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_22 = YPmet(FUNCODEREF(fun_eof_objectQ_22),LITREF(lit_29),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YgooSmathYeof_objectQ);
  if (T115 != YPfalse) {
    T114 = VARREF(YgooSmathYeof_objectQ);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_eof_objectQ_22;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YgooSmathYeof_objectQ,T113);
  T117 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_23 = YPmet(FUNCODEREF(fun_eof_objectQ_23),LITREF(lit_29),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooSmathYeof_objectQ);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSmathYeof_objectQ);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_eof_objectQ_23;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSmathYeof_objectQ,T118);
  lit_30 = YPPsym((P)"eof-object");
  T122 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  fun_eof_object_24 = YPmet(FUNCODEREF(fun_eof_object_24),LITREF(lit_30),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YgooSmathYeof_object);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooSmathYeof_object);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_eof_object_24;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooSmathYeof_object,T123);
  lit_31 = YPPsym((P)"contagious-type");
  T129 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLnumG));
  T128 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T129,Ynil);
  T127 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_31),T128,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcontagious_type,T127);
  lit_32 = YPPsym((P)"contagious-call");
  lit_33 = YPPsym((P)"f");
  T131 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T130 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T131,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcontagious_call,T130);
  T132 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_1),LITREF(lit_9)),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_contagious_call_25 = YPmet(FUNCODEREF(fun_contagious_call_25),LITREF(lit_32),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YgooSmathYcontagious_call);
  if (T135 != YPfalse) {
    T134 = VARREF(YgooSmathYcontagious_call);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_contagious_call_25;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YgooSmathYcontagious_call,T133);
  T137 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_26 = YPmet(FUNCODEREF(fun_L_26),LITREF(lit_20),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YgooSmagYL);
  if (T140 != YPfalse) {
    T139 = VARREF(YgooSmagYL);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_L_26;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YgooSmagYL,T138);
  lit_34 = YPPsym((P)"+");
  T142 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_27 = YPmet(FUNCODEREF(fun_A_27),LITREF(lit_34),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YgooSmathYA);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooSmathYA);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_A_27;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooSmathYA,T143);
  lit_35 = YPPsym((P)"1+");
  T147 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1A_28 = YPmet(FUNCODEREF(fun_1A_28),LITREF(lit_35),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YgooSmathY1A);
  if (T150 != YPfalse) {
    T149 = VARREF(YgooSmathY1A);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_1A_28;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YgooSmathY1A,T148);
  lit_36 = YPPsym((P)"-");
  T152 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___29 = YPmet(FUNCODEREF(fun___29),LITREF(lit_36),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YgooSmathY_);
  if (T155 != YPfalse) {
    T154 = VARREF(YgooSmathY_);
  } else {
    T154 = YPfalse;
  }
  T156 = fun___29;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YgooSmathY_,T153);
  lit_37 = YPPsym((P)"1-");
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_1__30 = YPmet(FUNCODEREF(fun_1__30),LITREF(lit_37),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YgooSmathY1_);
  if (T160 != YPfalse) {
    T159 = VARREF(YgooSmathY1_);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_1__30;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YgooSmathY1_,T158);
  lit_38 = YPPsym((P)"*");
  T162 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_31 = YPmet(FUNCODEREF(fun_T_31),LITREF(lit_38),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YgooSmathYT);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooSmathYT);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_T_31;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooSmathYT,T163);
  lit_39 = YPPsym((P)"/");
  T167 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_S_32 = YPmet(FUNCODEREF(fun_S_32),LITREF(lit_39),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YgooSmathYS);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooSmathYS);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_S_32;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooSmathYS,T168);
  lit_40 = YPPsym((P)"atan2");
  T172 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_1)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_33 = YPmet(FUNCODEREF(fun_atan2_33),LITREF(lit_40),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YgooSmathYatan2);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooSmathYatan2);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_atan2_33;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooSmathYatan2,T173);
  lit_41 = YPPsym((P)"logn");
  lit_42 = YPPsym((P)"b");
  T177 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_42)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_34 = YPmet(FUNCODEREF(fun_logn_34),LITREF(lit_41),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YgooSmathYlogn);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooSmathYlogn);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_logn_34;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooSmathYlogn,T178);
  lit_43 = YPPsym((P)"floor");
  T182 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_35 = YPmet(FUNCODEREF(fun_floor_35),LITREF(lit_43),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooSmathYfloor);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSmathYfloor);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_floor_35;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSmathYfloor,T183);
  lit_44 = YPPsym((P)"ceil");
  T187 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_36 = YPmet(FUNCODEREF(fun_ceil_36),LITREF(lit_44),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YgooSmathYceil);
  if (T190 != YPfalse) {
    T189 = VARREF(YgooSmathYceil);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_ceil_36;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YgooSmathYceil,T188);
  lit_45 = YPPsym((P)"round");
  T192 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_37 = YPmet(FUNCODEREF(fun_round_37),LITREF(lit_45),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YgooSmathYround);
  if (T195 != YPfalse) {
    T194 = VARREF(YgooSmathYround);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_round_37;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YgooSmathYround,T193);
  lit_46 = YPPsym((P)"round-to");
  lit_47 = YPPsym((P)"n");
  lit_48 = YPflo(FLOINT(10.0));
  T197 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_47)),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_round_to_38 = YPmet(FUNCODEREF(fun_round_to_38),LITREF(lit_46),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YgooSmathYround_to);
  if (T200 != YPfalse) {
    T199 = VARREF(YgooSmathYround_to);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_round_to_38;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YgooSmathYround_to,T198);
  lit_49 = YPPsym((P)"trunc");
  T202 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_39 = YPmet(FUNCODEREF(fun_trunc_39),LITREF(lit_49),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YgooSmathYtrunc);
  if (T205 != YPfalse) {
    T204 = VARREF(YgooSmathYtrunc);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_trunc_39;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YgooSmathYtrunc,T203);
  lit_50 = YPPsym((P)"floor/");
  lit_51 = YPPsym((P)"real");
  lit_52 = YPPsym((P)"divisor");
  T208 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T207 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T208,Ynil);
  fun_floorS_40 = YPmet(FUNCODEREF(fun_floorS_40),LITREF(lit_50),T207,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YgooSmathYfloorS);
  if (T211 != YPfalse) {
    T210 = VARREF(YgooSmathYfloorS);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_floorS_40;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YgooSmathYfloorS,T209);
  lit_53 = YPPsym((P)"ceil/");
  T214 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T213 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T214,Ynil);
  fun_ceilS_41 = YPmet(FUNCODEREF(fun_ceilS_41),LITREF(lit_53),T213,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YgooSmathYceilS);
  if (T217 != YPfalse) {
    T216 = VARREF(YgooSmathYceilS);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_ceilS_41;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YgooSmathYceilS,T215);
  lit_54 = YPPsym((P)"round/");
  lit_55 = YPflo(FLOINT(2.0));
  T220 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T219 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T220,Ynil);
  fun_roundS_42 = YPmet(FUNCODEREF(fun_roundS_42),LITREF(lit_54),T219,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YgooSmathYroundS);
  if (T223 != YPfalse) {
    T222 = VARREF(YgooSmathYroundS);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_roundS_42;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YgooSmathYroundS,T221);
  lit_56 = YPPsym((P)"trunc/");
  T226 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T225 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T226,Ynil);
  fun_truncS_43 = YPmet(FUNCODEREF(fun_truncS_43),LITREF(lit_56),T225,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YgooSmathYtruncS);
  if (T229 != YPfalse) {
    T228 = VARREF(YgooSmathYtruncS);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_truncS_43;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YgooSmathYtruncS,T227);
  lit_57 = YPPsym((P)"div");
  T231 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_div_44 = YPmet(FUNCODEREF(fun_div_44),LITREF(lit_57),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YgooSmathYdiv);
  if (T234 != YPfalse) {
    T233 = VARREF(YgooSmathYdiv);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_div_44;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YgooSmathYdiv,T232);
  lit_58 = YPPsym((P)"mod");
  T236 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_45 = YPmet(FUNCODEREF(fun_mod_45),LITREF(lit_58),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YgooSmathYmod);
  if (T239 != YPfalse) {
    T238 = VARREF(YgooSmathYmod);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_mod_45;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YgooSmathYmod,T237);
  lit_59 = YPPsym((P)"mod+");
  lit_60 = YPPsym((P)"j");
  T241 = YPsig(YPPlist(3,LITREF(lit_18),LITREF(lit_60),LITREF(lit_47)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_modA_46 = YPmet(FUNCODEREF(fun_modA_46),LITREF(lit_59),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YgooSmathYmodA);
  if (T244 != YPfalse) {
    T243 = VARREF(YgooSmathYmodA);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_modA_46;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YgooSmathYmodA,T242);
  lit_61 = YPPsym((P)"mod-");
  T246 = YPsig(YPPlist(3,LITREF(lit_18),LITREF(lit_60),LITREF(lit_47)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_mod__47 = YPmet(FUNCODEREF(fun_mod__47),LITREF(lit_61),T246,ENVNUL,PNUL,YPfalse);
  T249 = BOUNDP(YgooSmathYmod_);
  if (T249 != YPfalse) {
    T248 = VARREF(YgooSmathYmod_);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_mod__47;
  T247 = XCALL2(1,VARREF(YPdefine_method),T248,T250);
  VARSET(YgooSmathYmod_,T247);
  lit_62 = YPPsym((P)"exp");
  lit_63 = YPPsym((P)"return");
  lit_64 = YPPsym((P)"x-1288");
  lit_65 = YPPsym((P)"msg");
  lit_66 = YPPsym((P)"args");
  lit_67 = YPPsym((P)"modincf");
  lit_68 = YPsb((P)"Match Pattern Failure");
  lit_69 = YPPsym((P)"opf");
  T253 = YPsig(YPPlist(2,LITREF(lit_65),LITREF(lit_66)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1288_48 = YPmet(FUNCODEREF(fun_x_1288_48),LITREF(lit_64),T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(YPPlist(1,LITREF(lit_63)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T252,ENVNUL,PNUL,YPfalse);
  T251 = YPsig(YPPlist(1,LITREF(lit_62)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T251,ENVNUL,PNUL,YPfalse);
  T254 = fun_50;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T254);
  lit_70 = YPPsym((P)"x-1292");
  lit_71 = YPPsym((P)"moddecf");
  T257 = YPsig(YPPlist(2,LITREF(lit_65),LITREF(lit_66)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1292_51 = YPmet(FUNCODEREF(fun_x_1292_51),LITREF(lit_70),T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(YPPlist(1,LITREF(lit_63)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_62)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T258 = fun_53;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"moddecf"),T258);
  lit_72 = YPPsym((P)"rem");
  T259 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_54 = YPmet(FUNCODEREF(fun_rem_54),LITREF(lit_72),T259,ENVNUL,PNUL,YPfalse);
  T262 = BOUNDP(YgooSmathYrem);
  if (T262 != YPfalse) {
    T261 = VARREF(YgooSmathYrem);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_rem_54;
  T260 = XCALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YgooSmathYrem,T260);
  lit_73 = YPPsym((P)"pow");
  lit_74 = YPPsym((P)"base");
  T264 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_47)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_55 = YPmet(FUNCODEREF(fun_pow_55),LITREF(lit_73),T264,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YgooSmathYpow);
  if (T267 != YPfalse) {
    T266 = VARREF(YgooSmathYpow);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_pow_55;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YgooSmathYpow,T265);
  lit_75 = YPPsym((P)"pos?");
  T269 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_56 = YPmet(FUNCODEREF(fun_posQ_56),LITREF(lit_75),T269,ENVNUL,PNUL,YPfalse);
  T272 = BOUNDP(YgooSmathYposQ);
  if (T272 != YPfalse) {
    T271 = VARREF(YgooSmathYposQ);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_posQ_56;
  T270 = XCALL2(1,VARREF(YPdefine_method),T271,T273);
  VARSET(YgooSmathYposQ,T270);
  lit_76 = YPPsym((P)"zero?");
  T274 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_57 = YPmet(FUNCODEREF(fun_zeroQ_57),LITREF(lit_76),T274,ENVNUL,PNUL,YPfalse);
  T277 = BOUNDP(YgooSmathYzeroQ);
  if (T277 != YPfalse) {
    T276 = VARREF(YgooSmathYzeroQ);
  } else {
    T276 = YPfalse;
  }
  T278 = fun_zeroQ_57;
  T275 = XCALL2(1,VARREF(YPdefine_method),T276,T278);
  VARSET(YgooSmathYzeroQ,T275);
  lit_77 = YPPsym((P)"neg?");
  T279 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_58 = YPmet(FUNCODEREF(fun_negQ_58),LITREF(lit_77),T279,ENVNUL,PNUL,YPfalse);
  T282 = BOUNDP(YgooSmathYnegQ);
  if (T282 != YPfalse) {
    T281 = VARREF(YgooSmathYnegQ);
  } else {
    T281 = YPfalse;
  }
  T283 = fun_negQ_58;
  T280 = XCALL2(1,VARREF(YPdefine_method),T281,T283);
  VARSET(YgooSmathYnegQ,T280);
  lit_78 = YPPsym((P)"neg");
  T286 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T285 = fun_neg_59 = YPmet(FUNCODEREF(fun_neg_59),LITREF(lit_78),T286,ENVNUL,PNUL,YPfalse);
  T290 = BOUNDP(YgooSmathYneg);
  if (T290 != YPfalse) {
    T289 = VARREF(YgooSmathYneg);
  } else {
    T289 = YPfalse;
  }
  T291 = fun_neg_59;
  T288 = XCALL2(1,VARREF(YPdefine_method),T289,T291);
  T287 = VARSET(YgooSmathYneg,T288);
  T284 = T287;
  return T284;
}

P YgooSmathY___main_1___() {
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
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291,T292,T293,T294,T295,T296;
DEFCREGS();
loop:
  lit_79 = YPPsym((P)"abs");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_60 = YPmet(FUNCODEREF(fun_abs_60),LITREF(lit_79),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSmathYabs);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSmathYabs);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_abs_60;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSmathYabs,T1);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_61 = YPmet(FUNCODEREF(fun_to_str_61),LITREF(lit_0),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooSmathYto_str);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSmathYto_str);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_to_str_61;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSmathYto_str,T6);
  T11 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLintG));
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T11,Ynil);
  fun_contagious_type_62 = YPmet(FUNCODEREF(fun_contagious_type_62),LITREF(lit_31),T10,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YgooSmathYcontagious_type);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooSmathYcontagious_type);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_contagious_type_62;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooSmathYcontagious_type,T12);
  T17 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T16 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T17,Ynil);
  fun_contagious_type_63 = YPmet(FUNCODEREF(fun_contagious_type_63),LITREF(lit_31),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooSmathYcontagious_type);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSmathYcontagious_type);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_contagious_type_63;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSmathYcontagious_type,T18);
  T23 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T22 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),T23,Ynil);
  fun_contagious_type_64 = YPmet(FUNCODEREF(fun_contagious_type_64),LITREF(lit_31),T22,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooSmathYcontagious_type);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooSmathYcontagious_type);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_contagious_type_64;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooSmathYcontagious_type,T24);
  T29 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T28 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),T29,Ynil);
  fun_contagious_type_65 = YPmet(FUNCODEREF(fun_contagious_type_65),LITREF(lit_31),T28,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooSmathYcontagious_type);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooSmathYcontagious_type);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_contagious_type_65;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooSmathYcontagious_type,T30);
  T34 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_66 = YPmet(FUNCODEREF(fun_EE_66),LITREF(lit_13),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooSmacrosYEE);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSmacrosYEE);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_EE_66;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSmacrosYEE,T35);
  T39 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_67 = YPmet(FUNCODEREF(fun_L_67),LITREF(lit_20),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooSmagYL);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSmagYL);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_L_67;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSmagYL,T40);
  T44 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_A_68 = YPmet(FUNCODEREF(fun_A_68),LITREF(lit_34),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooSmathYA);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSmathYA);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_A_68;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSmathYA,T45);
  T49 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___69 = YPmet(FUNCODEREF(fun___69),LITREF(lit_36),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooSmathY_);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooSmathY_);
  } else {
    T51 = YPfalse;
  }
  T53 = fun___69;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooSmathY_,T50);
  T54 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_70 = YPmet(FUNCODEREF(fun_T_70),LITREF(lit_38),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSmathYT);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSmathYT);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_T_70;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSmathYT,T55);
  lit_80 = YPsb((P)"No int divide, consider trunc/");
  T59 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_S_71 = YPmet(FUNCODEREF(fun_S_71),LITREF(lit_39),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSmathYS);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSmathYS);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_S_71;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSmathYS,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_72 = YPmet(FUNCODEREF(fun_floor_72),LITREF(lit_43),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSmathYfloor);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSmathYfloor);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_floor_72;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSmathYfloor,T65);
  T69 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_73 = YPmet(FUNCODEREF(fun_ceil_73),LITREF(lit_44),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSmathYceil);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSmathYceil);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_ceil_73;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSmathYceil,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_74 = YPmet(FUNCODEREF(fun_round_74),LITREF(lit_45),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSmathYround);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSmathYround);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_round_74;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSmathYround,T75);
  T79 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_75 = YPmet(FUNCODEREF(fun_trunc_75),LITREF(lit_49),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSmathYtrunc);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSmathYtrunc);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_trunc_75;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSmathYtrunc,T80);
  T85 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T84 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T85,Ynil);
  fun_truncS_76 = YPmet(FUNCODEREF(fun_truncS_76),LITREF(lit_56),T84,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooSmathYtruncS);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooSmathYtruncS);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_truncS_76;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooSmathYtruncS,T86);
  T90 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_mod_77 = YPmet(FUNCODEREF(fun_mod_77),LITREF(lit_58),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooSmathYmod);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooSmathYmod);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_mod_77;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooSmathYmod,T91);
  lit_81 = YPPsym((P)"loop");
  lit_82 = YPPsym((P)"p");
  T96 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_82),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_78 = YPmet(FUNCODEREF(fun_loop_78),LITREF(lit_81),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_47)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_79 = YPmet(FUNCODEREF(fun_pow_79),LITREF(lit_73),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YgooSmathYpow);
  if (T99 != YPfalse) {
    T98 = VARREF(YgooSmathYpow);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_pow_79;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YgooSmathYpow,T97);
  lit_83 = YPPsym((P)"|");
  T101 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_80 = YPmet(FUNCODEREF(fun_K_80),LITREF(lit_83),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YgooSmathYK);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooSmathYK);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_K_80;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YgooSmathYK,T102);
  lit_84 = YPPsym((P)"^");
  T106 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_81 = YPmet(FUNCODEREF(fun_C_81),LITREF(lit_84),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YgooSmathYC);
  if (T109 != YPfalse) {
    T108 = VARREF(YgooSmathYC);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_C_81;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YgooSmathYC,T107);
  lit_85 = YPPsym((P)"&");
  T111 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_82 = YPmet(FUNCODEREF(fun_B_82),LITREF(lit_85),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YgooSmathYB);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSmathYB);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_B_82;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSmathYB,T112);
  lit_86 = YPPsym((P)"~");
  T116 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_N_83 = YPmet(FUNCODEREF(fun_N_83),LITREF(lit_86),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YgooSmathYN);
  if (T119 != YPfalse) {
    T118 = VARREF(YgooSmathYN);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_N_83;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YgooSmathYN,T117);
  lit_87 = YPPsym((P)"bit?");
  lit_88 = YPPsym((P)"o");
  T121 = YPsig(YPPlist(2,LITREF(lit_88),LITREF(lit_1)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_bitQ_84 = YPmet(FUNCODEREF(fun_bitQ_84),LITREF(lit_87),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooSmathYbitQ);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSmathYbitQ);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_bitQ_84;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSmathYbitQ,T122);
  lit_89 = YPPsym((P)"even?");
  T126 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_85 = YPmet(FUNCODEREF(fun_evenQ_85),LITREF(lit_89),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooSmathYevenQ);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSmathYevenQ);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_evenQ_85;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSmathYevenQ,T127);
  lit_90 = YPPsym((P)"odd?");
  T131 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_86 = YPmet(FUNCODEREF(fun_oddQ_86),LITREF(lit_90),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YgooSmathYoddQ);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooSmathYoddQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_oddQ_86;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooSmathYoddQ,T132);
  lit_91 = YPPsym((P)">>");
  lit_92 = YPPsym((P)"a");
  T136 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_92)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_GG_87 = YPmet(FUNCODEREF(fun_GG_87),LITREF(lit_91),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YgooSmathYGG);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooSmathYGG);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_GG_87;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooSmathYGG,T137);
  lit_93 = YPPsym((P)">>>");
  T141 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_92)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_GGG_88 = YPmet(FUNCODEREF(fun_GGG_88),LITREF(lit_93),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YgooSmathYGGG);
  if (T144 != YPfalse) {
    T143 = VARREF(YgooSmathYGGG);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_GGG_88;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YgooSmathYGGG,T142);
  lit_94 = YPPsym((P)"<<");
  T146 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_92)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_LL_89 = YPmet(FUNCODEREF(fun_LL_89),LITREF(lit_94),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YgooSmathYLL);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooSmathYLL);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_LL_89;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooSmathYLL,T147);
  lit_95 = YPPsym((P)"power-of-two-ceil");
  lit_96 = YPPsym((P)"search");
  lit_97 = YPPsym((P)"po2");
  T152 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_90 = YPmet(FUNCODEREF(fun_search_90),LITREF(lit_96),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_91 = YPmet(FUNCODEREF(fun_power_of_two_ceil_91),LITREF(lit_95),T151,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YgooSmathYpower_of_two_ceil);
  if (T155 != YPfalse) {
    T154 = VARREF(YgooSmathYpower_of_two_ceil);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_power_of_two_ceil_91;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YgooSmathYpower_of_two_ceil,T153);
  lit_98 = YPPsym((P)"flo-bits");
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPmet(FUNCODEREF(YgooSmathYflo_bits),LITREF(lit_98),T157,ENVNUL,PNUL,YPfalse);
  T158 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T158);
  T160 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T159 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_1)),YPPlist(2,T160,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_93 = YPmet(FUNCODEREF(fun_as_93),LITREF(lit_8),T159,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YgooStypesYas);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooStypesYas);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_as_93;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooStypesYas,T161);
  T165 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_94 = YPmet(FUNCODEREF(fun_EE_94),LITREF(lit_13),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YgooSmacrosYEE);
  if (T168 != YPfalse) {
    T167 = VARREF(YgooSmacrosYEE);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_EE_94;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YgooSmacrosYEE,T166);
  T170 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_95 = YPmet(FUNCODEREF(fun_L_95),LITREF(lit_20),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YgooSmagYL);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooSmagYL);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_L_95;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooSmagYL,T171);
  T175 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_96 = YPmet(FUNCODEREF(fun_A_96),LITREF(lit_34),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YgooSmathYA);
  if (T178 != YPfalse) {
    T177 = VARREF(YgooSmathYA);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_A_96;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YgooSmathYA,T176);
  T180 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___97 = YPmet(FUNCODEREF(fun___97),LITREF(lit_36),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YgooSmathY_);
  if (T183 != YPfalse) {
    T182 = VARREF(YgooSmathY_);
  } else {
    T182 = YPfalse;
  }
  T184 = fun___97;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YgooSmathY_,T181);
  T185 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_98 = YPmet(FUNCODEREF(fun_T_98),LITREF(lit_38),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YgooSmathYT);
  if (T188 != YPfalse) {
    T187 = VARREF(YgooSmathYT);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_T_98;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YgooSmathYT,T186);
  T190 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_99 = YPmet(FUNCODEREF(fun_S_99),LITREF(lit_39),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YgooSmathYS);
  if (T193 != YPfalse) {
    T192 = VARREF(YgooSmathYS);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_S_99;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YgooSmathYS,T191);
  T196 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLfloG));
  T195 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T196,Ynil);
  fun_truncS_100 = YPmet(FUNCODEREF(fun_truncS_100),LITREF(lit_56),T195,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YgooSmathYtruncS);
  if (T199 != YPfalse) {
    T198 = VARREF(YgooSmathYtruncS);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_truncS_100;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YgooSmathYtruncS,T197);
  T201 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_47)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_101 = YPmet(FUNCODEREF(fun_pow_101),LITREF(lit_73),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YgooSmathYpow);
  if (T204 != YPfalse) {
    T203 = VARREF(YgooSmathYpow);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_pow_101;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YgooSmathYpow,T202);
  lit_99 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_99));
  lit_100 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_100));
  lit_101 = YPPsym((P)"isqrt");
  T206 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_102 = YPmet(FUNCODEREF(fun_isqrt_102),LITREF(lit_101),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YgooSmathYisqrt);
  if (T209 != YPfalse) {
    T208 = VARREF(YgooSmathYisqrt);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_isqrt_102;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YgooSmathYisqrt,T207);
  lit_102 = YPPsym((P)"x-1296");
  lit_103 = YPPsym((P)"def-unary-trans");
  lit_104 = YPsb((P)"%f");
  lit_105 = YPPsym((P)"seq");
  lit_106 = YPPsym((P)"dg");
  lit_107 = YPPsym((P)"<num>");
  lit_108 = YPPsym((P)"=>");
  lit_109 = YPPsym((P)"dm");
  lit_110 = YPPsym((P)"<int>");
  lit_111 = YPPsym((P)"<flo>");
  lit_112 = YPPsym((P)"%fb");
  lit_113 = YPPsym((P)"%fu");
  T213 = YPsig(YPPlist(2,LITREF(lit_65),LITREF(lit_66)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1296_103 = YPmet(FUNCODEREF(fun_x_1296_103),LITREF(lit_102),T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(1,LITREF(lit_63)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(1,LITREF(lit_62)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T214 = fun_105;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T214);
  lit_114 = YPPsym((P)"sqrt");
  T216 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T215 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_114),T216,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsqrt,T215);
  lit_115 = YPsb((P)"SQRT would produce complex number");
  T217 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_106 = YPmet(FUNCODEREF(fun_sqrt_106),LITREF(lit_114),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YgooSmathYsqrt);
  if (T220 != YPfalse) {
    T219 = VARREF(YgooSmathYsqrt);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sqrt_106;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YgooSmathYsqrt,T218);
  T222 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_107 = YPmet(FUNCODEREF(fun_sqrt_107),LITREF(lit_114),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YgooSmathYsqrt);
  if (T225 != YPfalse) {
    T224 = VARREF(YgooSmathYsqrt);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sqrt_107;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YgooSmathYsqrt,T223);
  lit_116 = YPPsym((P)"log");
  T228 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T227 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_116),T228,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlog,T227);
  T229 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_108 = YPmet(FUNCODEREF(fun_log_108),LITREF(lit_116),T229,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YgooSmathYlog);
  if (T232 != YPfalse) {
    T231 = VARREF(YgooSmathYlog);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_log_108;
  T230 = XCALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YgooSmathYlog,T230);
  T234 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_109 = YPmet(FUNCODEREF(fun_log_109),LITREF(lit_116),T234,ENVNUL,PNUL,YPfalse);
  T237 = BOUNDP(YgooSmathYlog);
  if (T237 != YPfalse) {
    T236 = VARREF(YgooSmathYlog);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_log_109;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YgooSmathYlog,T235);
  lit_117 = YPPsym((P)"sin");
  T240 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T239 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_117),T240,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsin,T239);
  T241 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_110 = YPmet(FUNCODEREF(fun_sin_110),LITREF(lit_117),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YgooSmathYsin);
  if (T244 != YPfalse) {
    T243 = VARREF(YgooSmathYsin);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_sin_110;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YgooSmathYsin,T242);
  T246 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_111 = YPmet(FUNCODEREF(fun_sin_111),LITREF(lit_117),T246,ENVNUL,PNUL,YPfalse);
  T249 = BOUNDP(YgooSmathYsin);
  if (T249 != YPfalse) {
    T248 = VARREF(YgooSmathYsin);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_sin_111;
  T247 = XCALL2(1,VARREF(YPdefine_method),T248,T250);
  VARSET(YgooSmathYsin,T247);
  lit_118 = YPPsym((P)"cos");
  T252 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T251 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_118),T252,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcos,T251);
  T253 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_112 = YPmet(FUNCODEREF(fun_cos_112),LITREF(lit_118),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YgooSmathYcos);
  if (T256 != YPfalse) {
    T255 = VARREF(YgooSmathYcos);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_cos_112;
  T254 = XCALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YgooSmathYcos,T254);
  T258 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_113 = YPmet(FUNCODEREF(fun_cos_113),LITREF(lit_118),T258,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YgooSmathYcos);
  if (T261 != YPfalse) {
    T260 = VARREF(YgooSmathYcos);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_cos_113;
  T259 = XCALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YgooSmathYcos,T259);
  lit_119 = YPPsym((P)"tan");
  T264 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T263 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_119),T264,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtan,T263);
  T265 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_114 = YPmet(FUNCODEREF(fun_tan_114),LITREF(lit_119),T265,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(YgooSmathYtan);
  if (T268 != YPfalse) {
    T267 = VARREF(YgooSmathYtan);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_tan_114;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YgooSmathYtan,T266);
  T270 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_115 = YPmet(FUNCODEREF(fun_tan_115),LITREF(lit_119),T270,ENVNUL,PNUL,YPfalse);
  T273 = BOUNDP(YgooSmathYtan);
  if (T273 != YPfalse) {
    T272 = VARREF(YgooSmathYtan);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_tan_115;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YgooSmathYtan,T271);
  lit_120 = YPPsym((P)"sinh");
  T276 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T275 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_120),T276,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYsinh,T275);
  T277 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_116 = YPmet(FUNCODEREF(fun_sinh_116),LITREF(lit_120),T277,ENVNUL,PNUL,YPfalse);
  T280 = BOUNDP(YgooSmathYsinh);
  if (T280 != YPfalse) {
    T279 = VARREF(YgooSmathYsinh);
  } else {
    T279 = YPfalse;
  }
  T281 = fun_sinh_116;
  T278 = XCALL2(1,VARREF(YPdefine_method),T279,T281);
  VARSET(YgooSmathYsinh,T278);
  T282 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_117 = YPmet(FUNCODEREF(fun_sinh_117),LITREF(lit_120),T282,ENVNUL,PNUL,YPfalse);
  T285 = BOUNDP(YgooSmathYsinh);
  if (T285 != YPfalse) {
    T284 = VARREF(YgooSmathYsinh);
  } else {
    T284 = YPfalse;
  }
  T286 = fun_sinh_117;
  T283 = XCALL2(1,VARREF(YPdefine_method),T284,T286);
  VARSET(YgooSmathYsinh,T283);
  lit_121 = YPPsym((P)"cosh");
  T288 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T287 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_121),T288,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYcosh,T287);
  T291 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  T290 = fun_cosh_118 = YPmet(FUNCODEREF(fun_cosh_118),LITREF(lit_121),T291,ENVNUL,PNUL,YPfalse);
  T295 = BOUNDP(YgooSmathYcosh);
  if (T295 != YPfalse) {
    T294 = VARREF(YgooSmathYcosh);
  } else {
    T294 = YPfalse;
  }
  T296 = fun_cosh_118;
  T293 = XCALL2(1,VARREF(YPdefine_method),T294,T296);
  T292 = VARSET(YgooSmathYcosh,T293);
  T289 = T292;
  return T289;
}

P YgooSmathY___main_2___() {
  P tmpF938;
  P tmpF937;
  P tmpF936;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75;
DEFCREGS();
loop:
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_119 = YPmet(FUNCODEREF(fun_cosh_119),LITREF(lit_121),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSmathYcosh);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSmathYcosh);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_cosh_119;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSmathYcosh,T1);
  lit_122 = YPPsym((P)"tanh");
  T6 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_122),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYtanh,T5);
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_120 = YPmet(FUNCODEREF(fun_tanh_120),LITREF(lit_122),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YgooSmathYtanh);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSmathYtanh);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_tanh_120;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSmathYtanh,T8);
  T12 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_121 = YPmet(FUNCODEREF(fun_tanh_121),LITREF(lit_122),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooSmathYtanh);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSmathYtanh);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_tanh_121;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSmathYtanh,T13);
  lit_123 = YPPsym((P)"asin");
  T18 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T17 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_123),T18,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYasin,T17);
  lit_124 = YPsb((P)"SQRT would produce complex number");
  T19 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_122 = YPmet(FUNCODEREF(fun_asin_122),LITREF(lit_123),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YgooSmathYasin);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSmathYasin);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_asin_122;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSmathYasin,T20);
  T24 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_123 = YPmet(FUNCODEREF(fun_asin_123),LITREF(lit_123),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YgooSmathYasin);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooSmathYasin);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_asin_123;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooSmathYasin,T25);
  lit_125 = YPPsym((P)"acos");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T29 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_125),T30,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYacos,T29);
  lit_126 = YPsb((P)"SQRT would produce complex number");
  T31 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_124 = YPmet(FUNCODEREF(fun_acos_124),LITREF(lit_125),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YgooSmathYacos);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooSmathYacos);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_acos_124;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooSmathYacos,T32);
  T36 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_125 = YPmet(FUNCODEREF(fun_acos_125),LITREF(lit_125),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YgooSmathYacos);
  if (T39 != YPfalse) {
    T38 = VARREF(YgooSmathYacos);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_acos_125;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YgooSmathYacos,T37);
  lit_127 = YPPsym((P)"atan");
  T42 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T41 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_127),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan,T41);
  T43 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_126 = YPmet(FUNCODEREF(fun_atan_126),LITREF(lit_127),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooSmathYatan);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooSmathYatan);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_atan_126;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSmathYatan,T44);
  T48 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_127 = YPmet(FUNCODEREF(fun_atan_127),LITREF(lit_127),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooSmathYatan);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooSmathYatan);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_atan_127;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooSmathYatan,T49);
  T54 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_1)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T53 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T54,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYatan2,T53);
  T55 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_1)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_128 = YPmet(FUNCODEREF(fun_atan2_128),LITREF(lit_40),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YgooSmathYatan2);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooSmathYatan2);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_atan2_128;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooSmathYatan2,T56);
  T60 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_1)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_129 = YPmet(FUNCODEREF(fun_atan2_129),LITREF(lit_40),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YgooSmathYatan2);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooSmathYatan2);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_atan2_129;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooSmathYatan2,T61);
  T66 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_42)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T65 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_41),T66,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYlogn,T65);
  T67 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_42)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_130 = YPmet(FUNCODEREF(fun_logn_130),LITREF(lit_41),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YgooSmathYlogn);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooSmathYlogn);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_logn_130;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooSmathYlogn,T68);
  tmpF936 = YPfalse;
  if (tmpF936 != YPfalse) {
    T72 = VARREF(YgooSmathYnum_to_str);
  } else {
    T72 = YPfalse;
  }
  tmpF937 = YPfalse;
  if (tmpF937 != YPfalse) {
    T73 = VARREF(YgooSmathYchar_Gascii);
  } else {
    T73 = YPfalse;
  }
  tmpF938 = YPfalse;
  if (tmpF938 != YPfalse) {
    T74 = VARREF(YgooSmathYfabs);
  } else {
    T74 = YPfalse;
  }
  T75 = YPfalse;
  return T75;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooStypes;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmag},
  {&module_info_gooStypes},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%str", &module_info_gooSboot, "%str"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
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
  {"%lu", &module_info_gooSboot, "%lu"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
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
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<=", &module_info_gooSmag, "<="},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"seq", &module_info_gooSboot, "seq"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"or", &module_info_gooSmacros, "or"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"app", &module_info_gooSmacros, "app"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {">", &module_info_gooSmag, ">"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fin", &module_info_gooSboot, "fin"},
  {"any?", &module_info_gooStypes, "any?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
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
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"df", &module_info_gooSboot, "df"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
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
  {"%f=", &module_info_gooSboot, "%f="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
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
  {"object-props", &module_info_gooSboot, "object-props"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"nul", &module_info_gooSboot, "nul"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$e", CVAR, &YgooSmathYDe},
  {"lower?", CVAR, &YgooSmathYlowerQ},
  {"<<", CVAR, &YgooSmathYLL},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"---main-1---", PVAR, NULL},
  {"round/", CVAR, &YgooSmathYroundS},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"atan", CVAR, &YgooSmathYatan},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {"1-", CVAR, &YgooSmathY1_},
  {"cos", CVAR, &YgooSmathYcos},
  {"logn", CVAR, &YgooSmathYlogn},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"modincf", PVAR, NULL},
  {">>>", CVAR, &YgooSmathYGGG},
  {"fabs", CVAR, &YgooSmathYfabs},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"mod", CVAR, &YgooSmathYmod},
  {"as-log", CVAR, &YgooSmathYas_log},
  {"~", CVAR, &YgooSmathYN},
  {"tanh", CVAR, &YgooSmathYtanh},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"|", CVAR, &YgooSmathYK},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"moddecf", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"to-digit", CVAR, &YgooSmathYto_digit},
  {"~=", CVAR, &YgooSmathYNE},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {"round-to", CVAR, &YgooSmathYround_to},
  {"acos", CVAR, &YgooSmathYacos},
  {"-", CVAR, &YgooSmathY_},
  {"eof-object", CVAR, &YgooSmathYeof_object},
  {"+", CVAR, &YgooSmathYA},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"---main-0---", PVAR, NULL},
  {"1+", CVAR, &YgooSmathY1A},
  {"def-unary-trans", PVAR, NULL},
  {"div", CVAR, &YgooSmathYdiv},
  {"sin", CVAR, &YgooSmathYsin},
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {"to-upper", CVAR, &YgooSmathYto_upper},
  {">>", CVAR, &YgooSmathYGG},
  {"pow", CVAR, &YgooSmathYpow},
  {"abs", CVAR, &YgooSmathYabs},
  {"&", CVAR, &YgooSmathYB},
  {"round", CVAR, &YgooSmathYround},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {"<bot>", CVAR, &YgooSmathYLbotG},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"eof-object?", CVAR, &YgooSmathYeof_objectQ},
  {"=", CVAR, &YgooSmathYE},
  {"to-lower", CVAR, &YgooSmathYto_lower},
  {"address-of", CVAR, &YgooSmathYaddress_of},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"/", CVAR, &YgooSmathYS},
  {"asin", CVAR, &YgooSmathYasin},
  {"neg", CVAR, &YgooSmathYneg},
  {"ceil", CVAR, &YgooSmathYceil},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"log", CVAR, &YgooSmathYlog},
  {"rem", CVAR, &YgooSmathYrem},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"^", CVAR, &YgooSmathYC},
  {"digit?", CVAR, &YgooSmathYdigitQ},
  {"~==", CVAR, &YgooSmathYNEE},
  {"upper?", CVAR, &YgooSmathYupperQ},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"tan", CVAR, &YgooSmathYtan},
  {"floor", CVAR, &YgooSmathYfloor},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {"*", CVAR, &YgooSmathYT},
  {"char->ascii", CVAR, &YgooSmathYchar_Gascii},
  {"alpha?", CVAR, &YgooSmathYalphaQ},
  {"to-str", CVAR, &YgooSmathYto_str},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$e", "$e"},
  {"lower?", "lower?"},
  {"-", "-"},
  {"<<", "<<"},
  {"mod+", "mod+"},
  {"round/", "round/"},
  {"|", "|"},
  {"zero?", "zero?"},
  {"min", "min"},
  {"sqrt", "sqrt"},
  {"trunc", "trunc"},
  {"atan", "atan"},
  {"bit?", "bit?"},
  {"1-", "1-"},
  {"as", "as"},
  {">=", ">="},
  {"cos", "cos"},
  {"logn", "logn"},
  {"pos?", "pos?"},
  {"modincf", "modincf"},
  {">>>", ">>>"},
  {"contagious-call", "contagious-call"},
  {"mod", "mod"},
  {"<=", "<="},
  {"as-log", "as-log"},
  {"sin", "sin"},
  {"~", "~"},
  {"tanh", "tanh"},
  {"cosh", "cosh"},
  {"ceil/", "ceil/"},
  {"to-digit", "to-digit"},
  {"contagious-type", "contagious-type"},
  {"acos", "acos"},
  {"eof-object", "eof-object"},
  {"+", "+"},
  {"atan2", "atan2"},
  {"1+", "1+"},
  {"div", "div"},
  {"flo-bits", "flo-bits"},
  {"to-upper", "to-upper"},
  {">>", ">>"},
  {"pow", "pow"},
  {"abs", "abs"},
  {"&", "&"},
  {">", ">"},
  {"==", "=="},
  {"round", "round"},
  {"num-to-str", "num-to-str"},
  {"<bot>", "<bot>"},
  {"sinh", "sinh"},
  {"<", "<"},
  {"$pi", "$pi"},
  {"eof-object?", "eof-object?"},
  {"=", "="},
  {"to-lower", "to-lower"},
  {"address-of", "address-of"},
  {"mod-", "mod-"},
  {"odd?", "odd?"},
  {"isqrt", "isqrt"},
  {"/", "/"},
  {"asin", "asin"},
  {"neg", "neg"},
  {"ceil", "ceil"},
  {"trunc/", "trunc/"},
  {"log", "log"},
  {"rem", "rem"},
  {"power-of-two-ceil", "power-of-two-ceil"},
  {"^", "^"},
  {"digit?", "digit?"},
  {"~==", "~=="},
  {"upper?", "upper?"},
  {"fabs", "fabs"},
  {"even?", "even?"},
  {"neg?", "neg?"},
  {"tan", "tan"},
  {"floor", "floor"},
  {"floor/", "floor/"},
  {"max", "max"},
  {"*", "*"},
  {"~=", "~="},
  {"char->ascii", "char->ascii"},
  {"alpha?", "alpha?"},
  {"moddecf", "moddecf"},
  {"to-str", "to-str"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSmath;
MODULE_INFO module_info_gooSmath = {
  "goo/math",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmag (void);
extern void load_module_gooStypes (void);

/* EXPRESSION: */

extern void load_module_gooSmath (void);

void load_module_gooSmath (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmag();
  load_module_gooStypes();

  (P)YgooSmathY___main_0___();
  (P)YgooSmathY___main_1___();
  (P)YgooSmathY___main_2___();

}

/* END OF GENERATED CODE. */
