/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/math */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YDmin_int,"boot","$min-int");
DEF(YprotoSmathYE,"proto/math","=");
DEF(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
DEF(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
DEF(YprotoSmathYto_str,"proto/math","to-str");
DEF(YprotoSmathYroundS,"proto/math","round/");
EXT(Ytype_object,"boot","type-object");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YmacrosYgensym,"macros","gensym");
DEF(YprotoSmathYA,"proto/math","+");
DEF(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
DEF(YprotoSmathYLE,"proto/math","<=");
DEF(YprotoSmathYevenQ,"proto/math","even?");
DEF(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(Yobject_slots,"boot","object-slots");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(Yfind_setter,"boot","find-setter");
DEF(YprotoSmathYlogior,"proto/math","logior");
DEF(YprotoSmathYfabs,"proto/math","fabs");
DEF(YprotoSmathYLbotG,"proto/math","<bot>");
DEF(YprotoSmathYround,"proto/math","round");
DEF(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLstrG,"boot","<str>");
DEF(YprotoSmathYtruncateS,"proto/math","truncate/");
DEF(YprotoSmathYas_log,"proto/math","as-log");
EXT(YPvnul,"boot","%vnul");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
DEF(YprotoSmathYG,"proto/math",">");
DEF(YprotoSmathYL,"proto/math","<");
EXT(Yerror,"boot","error");
DEF(YprotoSmathYmax,"proto/math","max");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(Yhead_setter,"boot","head-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
DEF(YprotoSmathYnegQ,"proto/math","neg?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(Ynul,"boot","nul");
EXT(Yobject_class,"boot","object-class");
DEF(YprotoSmathYlogxor,"proto/math","logxor");
DEF(YprotoSmathYNEE,"proto/math","~==");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Ysym_name,"boot","sym-name");
DEF(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
DEF(YprotoSmathYS,"proto/math","/");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YLfunG,"boot","<fun>");
DEF(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YmacrosYnapply,"macros","napply");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YDmax_int,"boot","$max-int");
DEF(YprotoSmathYT,"proto/math","*");
DEF(YprotoSmathYoddQ,"proto/math","odd?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
DEF(YprotoSmathY_,"proto/math","-");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoStypesYas,"proto/types","as");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
DEF(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YLcolG,"boot","<col>");
DEF(YprotoSmathYGE,"proto/math",">=");
EXT(Yfab_class,"boot","fab-class");
DEF(YprotoSmathYlogand,"proto/math","logand");
EXT(YLtupG,"boot","<tup>");
DEF(YprotoSmathYtruncate,"proto/math","truncate");
DEF(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(YLsigG,"boot","<sig>");
EXT(YLlocG,"boot","<loc>");
DEF(YprotoSmathYaddress_of,"proto/math","address-of");
DEF(YprotoSmathYremainder,"proto/math","remainder");
EXT(Ytype_elts,"boot","type-elts");
DEF(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
DEF(YprotoSmathYfloor,"proto/math","floor");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YmacrosYmake_sym,"macros","make-sym");
DEF(YprotoSmathYneg,"proto/math","neg");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(Yfun_value,"boot","fun-value");
DEF(YprotoSmathYlognot,"proto/math","lognot");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPslot,"boot","%slot");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
DEF(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YprotoSmathYash,"proto/math","ash");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YLlogG,"boot","<log>");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YprotoSmathYposQ,"proto/math","pos?");
EXT(YLslotG,"boot","<slot>");
EXT(YsubtypeQ,"boot","subtype?");
DEF(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
DEF(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(Ynot,"boot","not");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
DEF(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
DEF(YprotoSmathYfloorS,"proto/math","floor/");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYmap,"macros","map");
DEF(YprotoSmathYlsh,"proto/math","lsh");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
DEF(YprotoSmathYmin,"proto/math","min");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YLsingletonG,"boot","<singleton>");
EXT(Ytup,"boot","tup");
DEF(YprotoSmathYceiling,"proto/math","ceiling");
DEF(YprotoSmathYnyi,"proto/math","nyi");
EXT(YmacrosYnxt_state,"macros","nxt-state");
DEF(YprotoSmathYabs,"proto/math","abs");
DEF(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yadd_slot,"boot","add-slot");
DEF(YprotoSmathYnyi_error,"proto/math","nyi-error");
EXT(YisaQ,"boot","isa?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
DEF(YprotoSmathYNE,"proto/math","~=");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(YprotoSmathYcontagious_call,"proto/math","contagious-call");
DEF(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
DEF(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_65);
DEFLIT(lit_76);
DEFLIT(lit_37);
DEFLIT(lit_30);
DEFLIT(lit_44);
DEFLIT(lit_60);
DEFLIT(lit_61);
DEFLIT(lit_67);
DEFLIT(lit_71);
DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_52);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_17);
DEFLIT(lit_75);
DEFLIT(lit_66);
DEFLIT(lit_48);
DEFLIT(lit_16);
DEFLIT(lit_50);
DEFLIT(lit_35);
DEFLIT(lit_19);
DEFLIT(lit_77);
DEFLIT(lit_12);
DEFLIT(lit_41);
DEFLIT(lit_54);
DEFLIT(lit_72);
DEFLIT(lit_2);
DEFLIT(lit_55);
DEFLIT(lit_13);
DEFLIT(lit_38);
DEFLIT(lit_40);
DEFLIT(lit_32);
DEFLIT(lit_22);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_70);
DEFLIT(lit_57);
DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_31);
DEFLIT(lit_51);
DEFLIT(lit_49);
DEFLIT(lit_69);
DEFLIT(lit_8);
DEFLIT(lit_63);
DEFLIT(lit_4);
DEFLIT(lit_21);
DEFLIT(lit_68);
DEFLIT(lit_6);
DEFLIT(lit_56);
DEFLIT(lit_73);
DEFLIT(lit_14);
DEFLIT(lit_74);
DEFLIT(lit_58);
DEFLIT(lit_28);
DEFLIT(lit_34);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_26);
DEFLIT(lit_33);
DEFLIT(lit_64);
DEFLIT(lit_25);
DEFLIT(lit_45);
DEFLIT(lit_46);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_23);
DEFLIT(lit_7);
DEFLIT(lit_29);
DEFLIT(lit_62);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_24);
DEFLIT(lit_39);
DEFLIT(lit_47);
DEFLIT(lit_42);
DEFLIT(lit_53);

/* FUNCTIONS: */

FUNFOR(YprotoSmathYnulQ);
LOCFOR(fun_nyi_error_1);
LOCFOR(fun_to_str_2);
FUNFOR(YprotoSmathYaddress_of);
LOCFOR(fun_to_str_4);
LOCFOR(fun_to_str_5);
LOCFOR(fun_as_6);
FUNFOR(YprotoSmathYas_log);
LOCFOR(fun_EE_8);
LOCFOR(fun_E_9);
LOCFOR(fun_NE_10);
LOCFOR(fun_NEE_11);
LOCFOR(fun_G_12);
LOCFOR(fun_LE_13);
LOCFOR(fun_GE_14);
LOCFOR(fun_min_15);
LOCFOR(fun_max_16);
LOCFOR(fun_as_17);
LOCFOR(fun_as_18);
LOCFOR(fun_L_19);
LOCFOR(fun_EE_20);
LOCFOR(fun_lowercaseQ_21);
LOCFOR(fun_uppercaseQ_22);
LOCFOR(fun_as_lowercase_23);
LOCFOR(fun_as_uppercase_24);
LOCFOR(fun_to_str_25);
LOCFOR(fun_alphabeticQ_26);
LOCFOR(fun_numericQ_27);
LOCFOR(fun_to_digit_28);
LOCFOR(fun_eof_objectQ_29);
LOCFOR(fun_eof_objectQ_30);
LOCFOR(fun_eof_object_31);
LOCFOR(fun_contagious_call_32);
LOCFOR(fun_L_33);
LOCFOR(fun_A_34);
LOCFOR(fun___35);
LOCFOR(fun_T_36);
LOCFOR(fun_floor_37);
LOCFOR(fun_ceiling_38);
LOCFOR(fun_round_39);
LOCFOR(fun_truncate_40);
LOCFOR(fun_floorS_41);
LOCFOR(fun_ceilingS_42);
LOCFOR(fun_roundS_43);
LOCFOR(fun_truncateS_44);
LOCFOR(fun_modulo_45);
LOCFOR(fun_remainder_46);
LOCFOR(fun_posQ_47);
LOCFOR(fun_zeroQ_48);
LOCFOR(fun_negQ_49);
LOCFOR(fun_neg_50);
LOCFOR(fun_abs_51);
LOCFOR(fun_to_str_52);
LOCFOR(fun_contagious_type_53);
LOCFOR(fun_contagious_type_54);
LOCFOR(fun_contagious_type_55);
LOCFOR(fun_contagious_type_56);
LOCFOR(fun_EE_57);
LOCFOR(fun_L_58);
LOCFOR(fun_A_59);
LOCFOR(fun___60);
LOCFOR(fun_T_61);
LOCFOR(fun_floor_62);
LOCFOR(fun_ceiling_63);
LOCFOR(fun_round_64);
LOCFOR(fun_truncate_65);
LOCFOR(fun_truncateS_66);
LOCFOR(fun_modulo_67);
LOCFOR(fun_logior_68);
LOCFOR(fun_logxor_69);
LOCFOR(fun_logand_70);
LOCFOR(fun_lognot_71);
LOCFOR(fun_logbitQ_72);
LOCFOR(fun_evenQ_73);
LOCFOR(fun_oddQ_74);
LOCFOR(fun_ash_75);
LOCFOR(fun_lsh_76);
LOCFOR(fun_search_77);
LOCFOR(fun_power_of_two_ceiling_78);
FUNFOR(YprotoSmathYflo_bits);
LOCFOR(fun_as_80);
LOCFOR(fun_EE_81);
LOCFOR(fun_L_82);
LOCFOR(fun_A_83);
LOCFOR(fun___84);
LOCFOR(fun_T_85);
LOCFOR(fun_S_86);
LOCFOR(fun_truncateS_87);
extern P YprotoSmathY___main_0___ ();
extern P YprotoSmathY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YprotoSmathYnulQ) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(Ynul));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nyi_error_1) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,VARREF(YprotoSmathYnyi));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_2) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(Yobject_class),x_);
  T2 = CALL1(1,VARREF(Yclass_name),T3);
  T1 = CALL1(1,VARREF(YprotoSmathYto_str),T2);
  T0 = CALL3(1,VARREF(YmacrosYcat),LITREF(lit_4),T1,LITREF(lit_5));
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

FUNCODEDEF(fun_to_str_4) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_8));
}

FUNCODEDEF(fun_to_str_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_9));
}

FUNCODEDEF(fun_as_6) {
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
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_12),type_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoSmathYas_log) {
  P x_;
  P tmpF734;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  tmpF734 = x_;
  if (tmpF734 != YPfalse) {
    T1 = YPtrue;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_8) {
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

FUNCODEDEF(fun_E_9) {
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

FUNCODEDEF(fun_NE_10) {
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

FUNCODEDEF(fun_NEE_11) {
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

FUNCODEDEF(fun_G_12) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYL),y_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LE_13) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYL),y_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GE_14) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYL),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_min_15) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYL),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_max_16) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYG),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_17) {
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

FUNCODEDEF(fun_as_18) {
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

FUNCODEDEF(fun_L_19) {
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

FUNCODEDEF(fun_EE_20) {
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

FUNCODEDEF(fun_lowercaseQ_21) {
  P x_;
  P codeF735;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),x_);
  codeF735 = T1;
  T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)97));
  T3 = CALL2(1,VARREF(YprotoSmathYGE),codeF735,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)122));
    T5 = CALL2(1,VARREF(YprotoSmathYLE),codeF735,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_uppercaseQ_22) {
  P x_;
  P codeF736;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),x_);
  codeF736 = T1;
  T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)65));
  T3 = CALL2(1,VARREF(YprotoSmathYGE),codeF736,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLintG),YPchr((P)90));
    T5 = CALL2(1,VARREF(YprotoSmathYLE),codeF736,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_lowercase_23) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYuppercaseQ),x_);
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

FUNCODEDEF(fun_as_uppercase_24) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYlowercaseQ),x_);
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

FUNCODEDEF(fun_to_str_25) {
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

FUNCODEDEF(fun_alphabeticQ_26) {
  P x_;
  P tmpF739;
  P tmpF738;
  P tmpF737;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoSmathYLE),YPchr((P)97),x_);
  tmpF737 = T2;
  if (tmpF737 != YPfalse) {
    T4 = CALL2(1,VARREF(YprotoSmathYLE),x_,YPchr((P)122));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF738 = T1;
  if (tmpF738 != YPfalse) {
    T5 = tmpF738;
  } else {
    T7 = CALL2(1,VARREF(YprotoSmathYLE),YPchr((P)65),x_);
    tmpF739 = T7;
    if (tmpF739 != YPfalse) {
      T9 = CALL2(1,VARREF(YprotoSmathYLE),x_,YPchr((P)90));
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

FUNCODEDEF(fun_numericQ_27) {
  P x_;
  P tmpF740;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYLE),YPchr((P)48),x_);
  tmpF740 = T1;
  if (tmpF740 != YPfalse) {
    T3 = CALL2(1,VARREF(YprotoSmathYLE),x_,YPchr((P)57));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_digit_28) {
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

FUNCODEDEF(fun_eof_objectQ_29) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_eof_objectQ_30) {
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

FUNCODEDEF(fun_eof_object_31) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = (P)YPeof_object();
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_32) {
  P f_,x_,y_;
  P typeF741;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYcontagious_type),x_,y_);
  typeF741 = T1;
  T3 = CALL2(1,VARREF(YprotoStypesYas),typeF741,x_);
  T4 = CALL2(1,VARREF(YprotoStypesYas),typeF741,y_);
  T2 = CALL2(1,f_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_L_33) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYL),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_34) {
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

FUNCODEDEF(fun___35) {
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

FUNCODEDEF(fun_T_36) {
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

FUNCODEDEF(fun_floor_37) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYfloorS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceiling_38) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYceilingS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_39) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYroundS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncate_40) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYtruncateS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floorS_41) {
  P real_,divisor_;
  P tmpF745;
  P remainderF744;
  P integerF743;
  P tup19F742;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncateS),real_,divisor_);
  tup19F742 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup19F742,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF743 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup19F742,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF744 = T5;
  T9 = CALL1(1,VARREF(YprotoSmathYzeroQ),remainderF744);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF745 = T8;
  if (tmpF745 != YPfalse) {
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
    T16 = CALL2(1,VARREF(YprotoSmathY_),integerF743,YPint((P)1));
    T17 = CALL2(1,VARREF(YprotoSmathYA),remainderF744,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF743,remainderF744);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceilingS_42) {
  P real_,divisor_;
  P tmpF749;
  P remainderF748;
  P integerF747;
  P tup20F746;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncateS),real_,divisor_);
  tup20F746 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup20F746,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF747 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup20F746,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF748 = T5;
  T9 = CALL1(1,VARREF(YprotoSmathYzeroQ),remainderF748);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF749 = T8;
  if (tmpF749 != YPfalse) {
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
    T16 = CALL2(1,VARREF(YprotoSmathYA),integerF747,YPint((P)1));
    T17 = CALL2(1,VARREF(YprotoSmathY_),remainderF748,divisor_);
    T15 = CALL2(1,VARREF(Ytup),T16,T17);
    T6 = T15;
  } else {
    T18 = CALL2(1,VARREF(Ytup),integerF747,remainderF748);
    T6 = T18;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_roundS_43) {
  P real_,divisor_;
  P tmpF758;
  P tmpF757;
  P minus_thresholdF756;
  P tmpF755;
  P tmpF754;
  P thresholdF753;
  P remainderF752;
  P integerF751;
  P tup21F750;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncateS),real_,divisor_);
  tup21F750 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup21F750,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  integerF751 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup21F750,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF752 = T5;
  T8 = CALL1(1,VARREF(YprotoSmathYabs),divisor_);
  T7 = CALL2(1,VARREF(YprotoSmathYS),T8,LITREF(lit_53));
  check_type(T7,VARREF(YLnumG));
  thresholdF753 = T7;
  T11 = CALL2(1,VARREF(YprotoSmathYG),remainderF752,thresholdF753);
  tmpF754 = T11;
  if (tmpF754 != YPfalse) {
    T12 = tmpF754;
  } else {
    T14 = CALL2(1,VARREF(YprotoSmathYE),remainderF752,thresholdF753);
    tmpF755 = T14;
    if (tmpF755 != YPfalse) {
      T16 = CALL1(1,VARREF(YprotoSmathYoddQ),integerF751);
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
      T20 = CALL2(1,VARREF(YprotoSmathY_),integerF751,YPint((P)1));
      T21 = CALL2(1,VARREF(YprotoSmathYA),remainderF752,divisor_);
      T19 = CALL2(1,VARREF(Ytup),T20,T21);
      T17 = T19;
    } else {
      T23 = CALL2(1,VARREF(YprotoSmathYA),integerF751,YPint((P)1));
      T24 = CALL2(1,VARREF(YprotoSmathY_),remainderF752,divisor_);
      T22 = CALL2(1,VARREF(Ytup),T23,T24);
      T17 = T22;
    }
    T9 = T17;
  } else {
    T27 = CALL1(1,VARREF(YprotoSmathYneg),thresholdF753);
    minus_thresholdF756 = T27;
    T29 = CALL2(1,VARREF(YprotoSmathYL),remainderF752,minus_thresholdF756);
    tmpF757 = T29;
    if (tmpF757 != YPfalse) {
      T30 = tmpF757;
    } else {
      T32 = CALL2(1,VARREF(YprotoSmathYE),remainderF752,minus_thresholdF756);
      tmpF758 = T32;
      if (tmpF758 != YPfalse) {
        T34 = CALL1(1,VARREF(YprotoSmathYoddQ),integerF751);
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
        T38 = CALL2(1,VARREF(YprotoSmathYA),integerF751,YPint((P)1));
        T39 = CALL2(1,VARREF(YprotoSmathY_),remainderF752,divisor_);
        T37 = CALL2(1,VARREF(Ytup),T38,T39);
        T35 = T37;
      } else {
        T41 = CALL2(1,VARREF(YprotoSmathY_),integerF751,YPint((P)1));
        T42 = CALL2(1,VARREF(YprotoSmathYA),remainderF752,divisor_);
        T40 = CALL2(1,VARREF(Ytup),T41,T42);
        T35 = T40;
      }
      T25 = T35;
    } else {
      T43 = CALL2(1,VARREF(Ytup),integerF751,remainderF752);
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

FUNCODEDEF(fun_truncateS_44) {
  P real_,divisor_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoSmathYcontagious_call),VARREF(YprotoSmathYtruncateS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_modulo_45) {
  P real_,divisor_;
  P remainderF761;
  P UF760;
  P tup22F759;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYfloorS),real_,divisor_);
  tup22F759 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup22F759,YPint((P)0));
  UF760 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup22F759,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF761 = T5;
  T4 = remainderF761;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_remainder_46) {
  P real_,divisor_;
  P remainderF764;
  P UF763;
  P tup23F762;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYtruncateS),real_,divisor_);
  tup23F762 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup23F762,YPint((P)0));
  UF763 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup23F762,YPint((P)1));
  check_type(T5,VARREF(YLnumG));
  remainderF764 = T5;
  T4 = remainderF764;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_posQ_47) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zeroQ_48) {
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

FUNCODEDEF(fun_negQ_49) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_neg_50) {
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

FUNCODEDEF(fun_abs_51) {
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

FUNCODEDEF(fun_to_str_52) {
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

FUNCODEDEF(fun_contagious_type_53) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLintG));
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

FUNCODEDEF(fun_contagious_type_55) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_56) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

FUNCODEDEF(fun_EE_57) {
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

FUNCODEDEF(fun_L_58) {
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

FUNCODEDEF(fun_A_59) {
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

FUNCODEDEF(fun___60) {
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

FUNCODEDEF(fun_T_61) {
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

FUNCODEDEF(fun_floor_62) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(Ytup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceiling_63) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(Ytup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_64) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(Ytup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncate_65) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(Ytup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncateS_66) {
  P x_,y_;
  P resultF765;
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
  resultF765 = T1;
  T7 = CALL2(1,VARREF(YprotoSmathYT),resultF765,y_);
  T6 = CALL2(1,VARREF(YprotoSmathY_),x_,T7);
  T5 = CALL2(1,VARREF(Ytup),resultF765,T6);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_modulo_67) {
  P x_,y_;
  P resF766;
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
  resF766 = T1;
  T6 = CALL2(1,VARREF(YprotoSmathYL),resF766,YPint((P)0));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YprotoSmathYG),y_,YPint((P)0));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YprotoSmathYA),resF766,y_);
      T7 = T9;
    } else {
      T10 = CALL2(1,VARREF(YprotoSmathY_),resF766,y_);
      T7 = T10;
    }
    T5 = T7;
  } else {
    T5 = resF766;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logior_68) {
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

FUNCODEDEF(fun_logxor_69) {
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

FUNCODEDEF(fun_logand_70) {
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

FUNCODEDEF(fun_lognot_71) {
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

FUNCODEDEF(fun_logbitQ_72) {
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
  T1 = CALL2(1,VARREF(YprotoSmathYlogand),x_,YPint((P)1));
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

FUNCODEDEF(fun_ash_75) {
  P x_,a_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYnegQ),a_);
  if (T1 != YPfalse) {
    T4 = (P)YPiu(x_);
    T5 = (P)YPiu(a_);
    T3 = (P)YPiGG(T4,T5);
    T2 = (P)YPib(T3);
    T0 = T2;
  } else {
    T8 = (P)YPiu(x_);
    T9 = (P)YPiu(a_);
    T7 = (P)YPiLL(T8,T9);
    T6 = (P)YPib(T7);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lsh_76) {
  P x_,a_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoSmathYnegQ),a_);
  if (T1 != YPfalse) {
    T4 = (P)YPiu(x_);
    T5 = (P)YPiu(a_);
    T3 = (P)YPiGGG(T4,T5);
    T2 = (P)YPib(T3);
    T0 = T2;
  } else {
    T8 = (P)YPiu(x_);
    T9 = (P)YPiu(a_);
    T7 = (P)YPiLLL(T8,T9);
    T6 = (P)YPib(T7);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_search_77) {
  P po2_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(po2_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYG),po2_,FREEREF(0));
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

FUNCODEDEF(fun_power_of_two_ceiling_78) {
  P x_;
  P searchF767;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_search_77,2);
  searchF767 = T1;
  FUNINIT(searchF767, 2,x_,searchF767);
  T2 = CALL1(1,searchF767,YPint((P)1));
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

FUNCODEDEF(fun_as_80) {
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

FUNCODEDEF(fun_EE_81) {
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

FUNCODEDEF(fun_L_82) {
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

FUNCODEDEF(fun_A_83) {
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

FUNCODEDEF(fun___84) {
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

FUNCODEDEF(fun_T_85) {
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

FUNCODEDEF(fun_S_86) {
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

FUNCODEDEF(fun_truncateS_87) {
  P x_,y_;
  P resultF769;
  P dividedF768;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYS),x_,y_);
  dividedF768 = T1;
  T5 = (P)YPfu(dividedF768);
  T4 = (P)YPft(T5);
  T3 = (P)YPib(T4);
  resultF769 = T3;
  T9 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLfloG),resultF769);
  T8 = CALL2(1,VARREF(YprotoSmathY_),dividedF768,T9);
  T7 = CALL2(1,VARREF(YprotoSmathYT),y_,T8);
  T6 = CALL2(1,VARREF(Ytup),resultF769,T7);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YprotoSmathY___main_0___() {
  P T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279;
  P T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263;
  P T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247;
  P T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231;
  P T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215;
  P T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199;
  P T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183;
  P T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167;
  P T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151;
  P T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135;
  P T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119;
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"nul?");
  lit_1 = YPPsym((P)"x");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YprotoSmathYnulQ = YPmet(FUNCODEREF(YprotoSmathYnulQ),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YprotoSmathYnulQ;
  VARSET(YprotoSmathYnulQ,T1);
  lit_2 = YPPsym((P)"nyi-error");
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_nyi_error_1 = YPmet(FUNCODEREF(fun_nyi_error_1),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YprotoSmathYnyi_error);
  if (T5 != YPfalse) {
    T4 = VARREF(YprotoSmathYnyi_error);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_nyi_error_1;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YprotoSmathYnyi_error,T3);
  lit_3 = YPPsym((P)"to-str");
  lit_4 = YPsb((P)"{ obj(");
  lit_5 = YPsb((P)") }");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_2 = YPmet(FUNCODEREF(fun_to_str_2),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YprotoSmathYto_str);
  if (T10 != YPfalse) {
    T9 = VARREF(YprotoSmathYto_str);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_to_str_2;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YprotoSmathYto_str,T8);
  lit_6 = YPPsym((P)"address-of");
  T12 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YprotoSmathYaddress_of = YPmet(FUNCODEREF(YprotoSmathYaddress_of),LITREF(lit_6),T12,ENVNUL,PNUL,YPfalse);
  T13 = YprotoSmathYaddress_of;
  VARSET(YprotoSmathYaddress_of,T13);
  lit_7 = YPPsym((P)"<bot>");
  T15 = (P)YPpair(VARREF(YLanyG),Ynil);
  T14 = CALL2(1,VARREF(Yfab_class),LITREF(lit_7),T15);
  VARSET(YprotoSmathYLbotG,T14);
  lit_8 = YPsb((P)"#t");
  T17 = CALL1(1,VARREF(YprotoStypesYtE),YPtrue);
  T16 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T17),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_4 = YPmet(FUNCODEREF(fun_to_str_4),LITREF(lit_3),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YprotoSmathYto_str);
  if (T20 != YPfalse) {
    T19 = VARREF(YprotoSmathYto_str);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_to_str_4;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YprotoSmathYto_str,T18);
  lit_9 = YPsb((P)"#f");
  T23 = CALL1(1,VARREF(YprotoStypesYtE),YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T23),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_5 = YPmet(FUNCODEREF(fun_to_str_5),LITREF(lit_3),T22,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YprotoSmathYto_str);
  if (T26 != YPfalse) {
    T25 = VARREF(YprotoSmathYto_str);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_to_str_5;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YprotoSmathYto_str,T24);
  lit_10 = YPPsym((P)"as");
  lit_11 = YPPsym((P)"type");
  lit_12 = YPsb((P)"NO AS METHOD FOR %= AND %=");
  T28 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_6 = YPmet(FUNCODEREF(fun_as_6),LITREF(lit_10),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YprotoStypesYas);
  if (T31 != YPfalse) {
    T30 = VARREF(YprotoStypesYas);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_as_6;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YprotoStypesYas,T29);
  lit_13 = YPPsym((P)"as-log");
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YprotoSmathYas_log = YPmet(FUNCODEREF(YprotoSmathYas_log),LITREF(lit_13),T33,ENVNUL,PNUL,YPfalse);
  T34 = YprotoSmathYas_log;
  VARSET(YprotoSmathYas_log,T34);
  lit_14 = YPPsym((P)"==");
  lit_15 = YPPsym((P)"y");
  T35 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_8 = YPmet(FUNCODEREF(fun_EE_8),LITREF(lit_14),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YmacrosYEE);
  if (T38 != YPfalse) {
    T37 = VARREF(YmacrosYEE);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_EE_8;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YmacrosYEE,T36);
  lit_16 = YPPsym((P)"=");
  T40 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_9 = YPmet(FUNCODEREF(fun_E_9),LITREF(lit_16),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YprotoSmathYE);
  if (T43 != YPfalse) {
    T42 = VARREF(YprotoSmathYE);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_E_9;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YprotoSmathYE,T41);
  lit_17 = YPPsym((P)"~=");
  T45 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NE_10 = YPmet(FUNCODEREF(fun_NE_10),LITREF(lit_17),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YprotoSmathYNE);
  if (T48 != YPfalse) {
    T47 = VARREF(YprotoSmathYNE);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_NE_10;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YprotoSmathYNE,T46);
  lit_18 = YPPsym((P)"~==");
  T50 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_NEE_11 = YPmet(FUNCODEREF(fun_NEE_11),LITREF(lit_18),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YprotoSmathYNEE);
  if (T53 != YPfalse) {
    T52 = VARREF(YprotoSmathYNEE);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_NEE_11;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YprotoSmathYNEE,T51);
  lit_19 = YPPsym((P)">");
  T55 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_G_12 = YPmet(FUNCODEREF(fun_G_12),LITREF(lit_19),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YprotoSmathYG);
  if (T58 != YPfalse) {
    T57 = VARREF(YprotoSmathYG);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_G_12;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YprotoSmathYG,T56);
  lit_20 = YPPsym((P)"<=");
  T60 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_LE_13 = YPmet(FUNCODEREF(fun_LE_13),LITREF(lit_20),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YprotoSmathYLE);
  if (T63 != YPfalse) {
    T62 = VARREF(YprotoSmathYLE);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_LE_13;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YprotoSmathYLE,T61);
  lit_21 = YPPsym((P)">=");
  T65 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_GE_14 = YPmet(FUNCODEREF(fun_GE_14),LITREF(lit_21),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YprotoSmathYGE);
  if (T68 != YPfalse) {
    T67 = VARREF(YprotoSmathYGE);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_GE_14;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YprotoSmathYGE,T66);
  lit_22 = YPPsym((P)"min");
  T70 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_min_15 = YPmet(FUNCODEREF(fun_min_15),LITREF(lit_22),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YprotoSmathYmin);
  if (T73 != YPfalse) {
    T72 = VARREF(YprotoSmathYmin);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_min_15;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YprotoSmathYmin,T71);
  lit_23 = YPPsym((P)"max");
  T75 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_max_16 = YPmet(FUNCODEREF(fun_max_16),LITREF(lit_23),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YprotoSmathYmax);
  if (T78 != YPfalse) {
    T77 = VARREF(YprotoSmathYmax);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_max_16;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YprotoSmathYmax,T76);
  lit_24 = YPPsym((P)"_");
  lit_25 = YPPsym((P)"i");
  T81 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLchrG));
  T80 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,T81,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_as_17 = YPmet(FUNCODEREF(fun_as_17),LITREF(lit_10),T80,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YprotoStypesYas);
  if (T84 != YPfalse) {
    T83 = VARREF(YprotoStypesYas);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_as_17;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YprotoStypesYas,T82);
  lit_26 = YPPsym((P)"c");
  T87 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLintG));
  T86 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_26)),YPPlist(2,T87,VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_as_18 = YPmet(FUNCODEREF(fun_as_18),LITREF(lit_10),T86,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YprotoStypesYas);
  if (T90 != YPfalse) {
    T89 = VARREF(YprotoStypesYas);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_as_18;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YprotoStypesYas,T88);
  lit_27 = YPPsym((P)"<");
  T92 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_19 = YPmet(FUNCODEREF(fun_L_19),LITREF(lit_27),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YprotoSmathYL);
  if (T95 != YPfalse) {
    T94 = VARREF(YprotoSmathYL);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_L_19;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YprotoSmathYL,T93);
  T97 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_20 = YPmet(FUNCODEREF(fun_EE_20),LITREF(lit_14),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YmacrosYEE);
  if (T100 != YPfalse) {
    T99 = VARREF(YmacrosYEE);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_EE_20;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YmacrosYEE,T98);
  lit_28 = YPPsym((P)"lowercase?");
  T102 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_lowercaseQ_21 = YPmet(FUNCODEREF(fun_lowercaseQ_21),LITREF(lit_28),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YprotoSmathYlowercaseQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YprotoSmathYlowercaseQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_lowercaseQ_21;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YprotoSmathYlowercaseQ,T103);
  lit_29 = YPPsym((P)"uppercase?");
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_uppercaseQ_22 = YPmet(FUNCODEREF(fun_uppercaseQ_22),LITREF(lit_29),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YprotoSmathYuppercaseQ);
  if (T110 != YPfalse) {
    T109 = VARREF(YprotoSmathYuppercaseQ);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_uppercaseQ_22;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YprotoSmathYuppercaseQ,T108);
  lit_30 = YPPsym((P)"as-lowercase");
  T112 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_as_lowercase_23 = YPmet(FUNCODEREF(fun_as_lowercase_23),LITREF(lit_30),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YprotoSmathYas_lowercase);
  if (T115 != YPfalse) {
    T114 = VARREF(YprotoSmathYas_lowercase);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_as_lowercase_23;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YprotoSmathYas_lowercase,T113);
  lit_31 = YPPsym((P)"as-uppercase");
  T117 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_as_uppercase_24 = YPmet(FUNCODEREF(fun_as_uppercase_24),LITREF(lit_31),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YprotoSmathYas_uppercase);
  if (T120 != YPfalse) {
    T119 = VARREF(YprotoSmathYas_uppercase);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_as_uppercase_24;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YprotoSmathYas_uppercase,T118);
  T122 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_25 = YPmet(FUNCODEREF(fun_to_str_25),LITREF(lit_3),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YprotoSmathYto_str);
  if (T125 != YPfalse) {
    T124 = VARREF(YprotoSmathYto_str);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_to_str_25;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YprotoSmathYto_str,T123);
  lit_32 = YPPsym((P)"alphabetic?");
  T127 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_alphabeticQ_26 = YPmet(FUNCODEREF(fun_alphabeticQ_26),LITREF(lit_32),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YprotoSmathYalphabeticQ);
  if (T130 != YPfalse) {
    T129 = VARREF(YprotoSmathYalphabeticQ);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_alphabeticQ_26;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YprotoSmathYalphabeticQ,T128);
  lit_33 = YPPsym((P)"numeric?");
  T132 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_numericQ_27 = YPmet(FUNCODEREF(fun_numericQ_27),LITREF(lit_33),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YprotoSmathYnumericQ);
  if (T135 != YPfalse) {
    T134 = VARREF(YprotoSmathYnumericQ);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_numericQ_27;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YprotoSmathYnumericQ,T133);
  lit_34 = YPPsym((P)"to-digit");
  lit_35 = YPPsym((P)"digit");
  T137 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_to_digit_28 = YPmet(FUNCODEREF(fun_to_digit_28),LITREF(lit_34),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YprotoSmathYto_digit);
  if (T140 != YPfalse) {
    T139 = VARREF(YprotoSmathYto_digit);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_to_digit_28;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YprotoSmathYto_digit,T138);
  lit_36 = YPPsym((P)"eof-object?");
  T142 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_29 = YPmet(FUNCODEREF(fun_eof_objectQ_29),LITREF(lit_36),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YprotoSmathYeof_objectQ);
  if (T145 != YPfalse) {
    T144 = VARREF(YprotoSmathYeof_objectQ);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_eof_objectQ_29;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YprotoSmathYeof_objectQ,T143);
  T147 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_30 = YPmet(FUNCODEREF(fun_eof_objectQ_30),LITREF(lit_36),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YprotoSmathYeof_objectQ);
  if (T150 != YPfalse) {
    T149 = VARREF(YprotoSmathYeof_objectQ);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_eof_objectQ_30;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YprotoSmathYeof_objectQ,T148);
  lit_37 = YPPsym((P)"eof-object");
  T152 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  fun_eof_object_31 = YPmet(FUNCODEREF(fun_eof_object_31),LITREF(lit_37),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YprotoSmathYeof_object);
  if (T155 != YPfalse) {
    T154 = VARREF(YprotoSmathYeof_object);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_eof_object_31;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YprotoSmathYeof_object,T153);
  lit_38 = YPPsym((P)"contagious-type");
  T159 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLnumG));
  T158 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T159,Ynil);
  T157 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_38),T158,Ynil,YPfalse);
  VARSET(YprotoSmathYcontagious_type,T157);
  lit_39 = YPPsym((P)"contagious-call");
  lit_40 = YPPsym((P)"f");
  T161 = YPsig(YPPlist(3,LITREF(lit_40),LITREF(lit_1),LITREF(lit_15)),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T160 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_39),T161,Ynil,YPfalse);
  VARSET(YprotoSmathYcontagious_call,T160);
  T162 = YPsig(YPPlist(3,LITREF(lit_40),LITREF(lit_1),LITREF(lit_15)),YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_contagious_call_32 = YPmet(FUNCODEREF(fun_contagious_call_32),LITREF(lit_39),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YprotoSmathYcontagious_call);
  if (T165 != YPfalse) {
    T164 = VARREF(YprotoSmathYcontagious_call);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_contagious_call_32;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YprotoSmathYcontagious_call,T163);
  T167 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_33 = YPmet(FUNCODEREF(fun_L_33),LITREF(lit_27),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YprotoSmathYL);
  if (T170 != YPfalse) {
    T169 = VARREF(YprotoSmathYL);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_L_33;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YprotoSmathYL,T168);
  lit_41 = YPPsym((P)"+");
  T172 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_34 = YPmet(FUNCODEREF(fun_A_34),LITREF(lit_41),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YprotoSmathYA);
  if (T175 != YPfalse) {
    T174 = VARREF(YprotoSmathYA);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_A_34;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YprotoSmathYA,T173);
  lit_42 = YPPsym((P)"-");
  T177 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___35 = YPmet(FUNCODEREF(fun___35),LITREF(lit_42),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YprotoSmathY_);
  if (T180 != YPfalse) {
    T179 = VARREF(YprotoSmathY_);
  } else {
    T179 = YPfalse;
  }
  T181 = fun___35;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YprotoSmathY_,T178);
  lit_43 = YPPsym((P)"*");
  T182 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_36 = YPmet(FUNCODEREF(fun_T_36),LITREF(lit_43),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YprotoSmathYT);
  if (T185 != YPfalse) {
    T184 = VARREF(YprotoSmathYT);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_T_36;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YprotoSmathYT,T183);
  lit_44 = YPPsym((P)"floor");
  T187 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_floor_37 = YPmet(FUNCODEREF(fun_floor_37),LITREF(lit_44),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YprotoSmathYfloor);
  if (T190 != YPfalse) {
    T189 = VARREF(YprotoSmathYfloor);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_floor_37;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YprotoSmathYfloor,T188);
  lit_45 = YPPsym((P)"ceiling");
  T192 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_ceiling_38 = YPmet(FUNCODEREF(fun_ceiling_38),LITREF(lit_45),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YprotoSmathYceiling);
  if (T195 != YPfalse) {
    T194 = VARREF(YprotoSmathYceiling);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_ceiling_38;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YprotoSmathYceiling,T193);
  lit_46 = YPPsym((P)"round");
  T197 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_round_39 = YPmet(FUNCODEREF(fun_round_39),LITREF(lit_46),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YprotoSmathYround);
  if (T200 != YPfalse) {
    T199 = VARREF(YprotoSmathYround);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_round_39;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YprotoSmathYround,T198);
  lit_47 = YPPsym((P)"truncate");
  T202 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_truncate_40 = YPmet(FUNCODEREF(fun_truncate_40),LITREF(lit_47),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YprotoSmathYtruncate);
  if (T205 != YPfalse) {
    T204 = VARREF(YprotoSmathYtruncate);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_truncate_40;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YprotoSmathYtruncate,T203);
  lit_48 = YPPsym((P)"floor/");
  lit_49 = YPPsym((P)"real");
  lit_50 = YPPsym((P)"divisor");
  T207 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_floorS_41 = YPmet(FUNCODEREF(fun_floorS_41),LITREF(lit_48),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YprotoSmathYfloorS);
  if (T210 != YPfalse) {
    T209 = VARREF(YprotoSmathYfloorS);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_floorS_41;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YprotoSmathYfloorS,T208);
  lit_51 = YPPsym((P)"ceiling/");
  T212 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_ceilingS_42 = YPmet(FUNCODEREF(fun_ceilingS_42),LITREF(lit_51),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YprotoSmathYceilingS);
  if (T215 != YPfalse) {
    T214 = VARREF(YprotoSmathYceilingS);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_ceilingS_42;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YprotoSmathYceilingS,T213);
  lit_52 = YPPsym((P)"round/");
  lit_53 = YPflo(FLOINT(2.0));
  T217 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_roundS_43 = YPmet(FUNCODEREF(fun_roundS_43),LITREF(lit_52),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YprotoSmathYroundS);
  if (T220 != YPfalse) {
    T219 = VARREF(YprotoSmathYroundS);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_roundS_43;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YprotoSmathYroundS,T218);
  lit_54 = YPPsym((P)"truncate/");
  T222 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_truncateS_44 = YPmet(FUNCODEREF(fun_truncateS_44),LITREF(lit_54),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YprotoSmathYtruncateS);
  if (T225 != YPfalse) {
    T224 = VARREF(YprotoSmathYtruncateS);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_truncateS_44;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YprotoSmathYtruncateS,T223);
  lit_55 = YPPsym((P)"modulo");
  T227 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_modulo_45 = YPmet(FUNCODEREF(fun_modulo_45),LITREF(lit_55),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YprotoSmathYmodulo);
  if (T230 != YPfalse) {
    T229 = VARREF(YprotoSmathYmodulo);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_modulo_45;
  T228 = CALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YprotoSmathYmodulo,T228);
  lit_56 = YPPsym((P)"remainder");
  T232 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_remainder_46 = YPmet(FUNCODEREF(fun_remainder_46),LITREF(lit_56),T232,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YprotoSmathYremainder);
  if (T235 != YPfalse) {
    T234 = VARREF(YprotoSmathYremainder);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_remainder_46;
  T233 = CALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YprotoSmathYremainder,T233);
  lit_57 = YPPsym((P)"pos?");
  T237 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_47 = YPmet(FUNCODEREF(fun_posQ_47),LITREF(lit_57),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YprotoSmathYposQ);
  if (T240 != YPfalse) {
    T239 = VARREF(YprotoSmathYposQ);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_posQ_47;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YprotoSmathYposQ,T238);
  lit_58 = YPPsym((P)"zero?");
  T242 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_48 = YPmet(FUNCODEREF(fun_zeroQ_48),LITREF(lit_58),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YprotoSmathYzeroQ);
  if (T245 != YPfalse) {
    T244 = VARREF(YprotoSmathYzeroQ);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_zeroQ_48;
  T243 = CALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YprotoSmathYzeroQ,T243);
  lit_59 = YPPsym((P)"neg?");
  T247 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_49 = YPmet(FUNCODEREF(fun_negQ_49),LITREF(lit_59),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YprotoSmathYnegQ);
  if (T250 != YPfalse) {
    T249 = VARREF(YprotoSmathYnegQ);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_negQ_49;
  T248 = CALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YprotoSmathYnegQ,T248);
  lit_60 = YPPsym((P)"neg");
  T252 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_neg_50 = YPmet(FUNCODEREF(fun_neg_50),LITREF(lit_60),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YprotoSmathYneg);
  if (T255 != YPfalse) {
    T254 = VARREF(YprotoSmathYneg);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_neg_50;
  T253 = CALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YprotoSmathYneg,T253);
  lit_61 = YPPsym((P)"abs");
  T257 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_51 = YPmet(FUNCODEREF(fun_abs_51),LITREF(lit_61),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YprotoSmathYabs);
  if (T260 != YPfalse) {
    T259 = VARREF(YprotoSmathYabs);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_abs_51;
  T258 = CALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YprotoSmathYabs,T258);
  T262 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_52 = YPmet(FUNCODEREF(fun_to_str_52),LITREF(lit_3),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YprotoSmathYto_str);
  if (T265 != YPfalse) {
    T264 = VARREF(YprotoSmathYto_str);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_to_str_52;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YprotoSmathYto_str,T263);
  T267 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_53 = YPmet(FUNCODEREF(fun_contagious_type_53),LITREF(lit_38),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YprotoSmathYcontagious_type);
  if (T270 != YPfalse) {
    T269 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_contagious_type_53;
  T268 = CALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YprotoSmathYcontagious_type,T268);
  T272 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_54 = YPmet(FUNCODEREF(fun_contagious_type_54),LITREF(lit_38),T272,ENVNUL,PNUL,YPfalse);
  T275 = BOUNDP(YprotoSmathYcontagious_type);
  if (T275 != YPfalse) {
    T274 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_contagious_type_54;
  T273 = CALL2(1,VARREF(YPdefine_method),T274,T276);
  VARSET(YprotoSmathYcontagious_type,T273);
  T277 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_55 = YPmet(FUNCODEREF(fun_contagious_type_55),LITREF(lit_38),T277,ENVNUL,PNUL,YPfalse);
  T280 = BOUNDP(YprotoSmathYcontagious_type);
  if (T280 != YPfalse) {
    T279 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T279 = YPfalse;
  }
  T281 = fun_contagious_type_55;
  T278 = CALL2(1,VARREF(YPdefine_method),T279,T281);
  VARSET(YprotoSmathYcontagious_type,T278);
  T282 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_contagious_type_56 = YPmet(FUNCODEREF(fun_contagious_type_56),LITREF(lit_38),T282,ENVNUL,PNUL,YPfalse);
  T285 = BOUNDP(YprotoSmathYcontagious_type);
  if (T285 != YPfalse) {
    T284 = VARREF(YprotoSmathYcontagious_type);
  } else {
    T284 = YPfalse;
  }
  T286 = fun_contagious_type_56;
  T283 = CALL2(1,VARREF(YPdefine_method),T284,T286);
  VARSET(YprotoSmathYcontagious_type,T283);
  T289 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T288 = fun_EE_57 = YPmet(FUNCODEREF(fun_EE_57),LITREF(lit_14),T289,ENVNUL,PNUL,YPfalse);
  T293 = BOUNDP(YmacrosYEE);
  if (T293 != YPfalse) {
    T292 = VARREF(YmacrosYEE);
  } else {
    T292 = YPfalse;
  }
  T294 = fun_EE_57;
  T291 = CALL2(1,VARREF(YPdefine_method),T292,T294);
  T290 = VARSET(YmacrosYEE,T291);
  T287 = T290;
  return T287;
}

P YprotoSmathY___main_1___() {
  P T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129;
  P T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113;
  P T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97;
  P T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81;
  P T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_58 = YPmet(FUNCODEREF(fun_L_58),LITREF(lit_27),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YprotoSmathYL);
  if (T3 != YPfalse) {
    T2 = VARREF(YprotoSmathYL);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_L_58;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YprotoSmathYL,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_A_59 = YPmet(FUNCODEREF(fun_A_59),LITREF(lit_41),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YprotoSmathYA);
  if (T8 != YPfalse) {
    T7 = VARREF(YprotoSmathYA);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_A_59;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YprotoSmathYA,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___60 = YPmet(FUNCODEREF(fun___60),LITREF(lit_42),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YprotoSmathY_);
  if (T13 != YPfalse) {
    T12 = VARREF(YprotoSmathY_);
  } else {
    T12 = YPfalse;
  }
  T14 = fun___60;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YprotoSmathY_,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_61 = YPmet(FUNCODEREF(fun_T_61),LITREF(lit_43),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YprotoSmathYT);
  if (T18 != YPfalse) {
    T17 = VARREF(YprotoSmathYT);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_T_61;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YprotoSmathYT,T16);
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_floor_62 = YPmet(FUNCODEREF(fun_floor_62),LITREF(lit_44),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YprotoSmathYfloor);
  if (T23 != YPfalse) {
    T22 = VARREF(YprotoSmathYfloor);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_floor_62;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YprotoSmathYfloor,T21);
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_ceiling_63 = YPmet(FUNCODEREF(fun_ceiling_63),LITREF(lit_45),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YprotoSmathYceiling);
  if (T28 != YPfalse) {
    T27 = VARREF(YprotoSmathYceiling);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_ceiling_63;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YprotoSmathYceiling,T26);
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_round_64 = YPmet(FUNCODEREF(fun_round_64),LITREF(lit_46),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YprotoSmathYround);
  if (T33 != YPfalse) {
    T32 = VARREF(YprotoSmathYround);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_round_64;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YprotoSmathYround,T31);
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_truncate_65 = YPmet(FUNCODEREF(fun_truncate_65),LITREF(lit_47),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YprotoSmathYtruncate);
  if (T38 != YPfalse) {
    T37 = VARREF(YprotoSmathYtruncate);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_truncate_65;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YprotoSmathYtruncate,T36);
  T40 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_truncateS_66 = YPmet(FUNCODEREF(fun_truncateS_66),LITREF(lit_54),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YprotoSmathYtruncateS);
  if (T43 != YPfalse) {
    T42 = VARREF(YprotoSmathYtruncateS);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_truncateS_66;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YprotoSmathYtruncateS,T41);
  T45 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_modulo_67 = YPmet(FUNCODEREF(fun_modulo_67),LITREF(lit_55),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YprotoSmathYmodulo);
  if (T48 != YPfalse) {
    T47 = VARREF(YprotoSmathYmodulo);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_modulo_67;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YprotoSmathYmodulo,T46);
  lit_62 = YPPsym((P)"logior");
  T50 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_logior_68 = YPmet(FUNCODEREF(fun_logior_68),LITREF(lit_62),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YprotoSmathYlogior);
  if (T53 != YPfalse) {
    T52 = VARREF(YprotoSmathYlogior);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_logior_68;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YprotoSmathYlogior,T51);
  lit_63 = YPPsym((P)"logxor");
  T55 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_logxor_69 = YPmet(FUNCODEREF(fun_logxor_69),LITREF(lit_63),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YprotoSmathYlogxor);
  if (T58 != YPfalse) {
    T57 = VARREF(YprotoSmathYlogxor);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_logxor_69;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YprotoSmathYlogxor,T56);
  lit_64 = YPPsym((P)"logand");
  T60 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_logand_70 = YPmet(FUNCODEREF(fun_logand_70),LITREF(lit_64),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YprotoSmathYlogand);
  if (T63 != YPfalse) {
    T62 = VARREF(YprotoSmathYlogand);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_logand_70;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YprotoSmathYlogand,T61);
  lit_65 = YPPsym((P)"lognot");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_lognot_71 = YPmet(FUNCODEREF(fun_lognot_71),LITREF(lit_65),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YprotoSmathYlognot);
  if (T68 != YPfalse) {
    T67 = VARREF(YprotoSmathYlognot);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_lognot_71;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YprotoSmathYlognot,T66);
  lit_66 = YPPsym((P)"logbit?");
  lit_67 = YPPsym((P)"o");
  T70 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_1)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_logbitQ_72 = YPmet(FUNCODEREF(fun_logbitQ_72),LITREF(lit_66),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YprotoSmathYlogbitQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YprotoSmathYlogbitQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_logbitQ_72;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YprotoSmathYlogbitQ,T71);
  lit_68 = YPPsym((P)"even?");
  T75 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_73 = YPmet(FUNCODEREF(fun_evenQ_73),LITREF(lit_68),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YprotoSmathYevenQ);
  if (T78 != YPfalse) {
    T77 = VARREF(YprotoSmathYevenQ);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_evenQ_73;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YprotoSmathYevenQ,T76);
  lit_69 = YPPsym((P)"odd?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_74 = YPmet(FUNCODEREF(fun_oddQ_74),LITREF(lit_69),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YprotoSmathYoddQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YprotoSmathYoddQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_oddQ_74;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YprotoSmathYoddQ,T81);
  lit_70 = YPPsym((P)"ash");
  lit_71 = YPPsym((P)"a");
  T85 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_71)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_ash_75 = YPmet(FUNCODEREF(fun_ash_75),LITREF(lit_70),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YprotoSmathYash);
  if (T88 != YPfalse) {
    T87 = VARREF(YprotoSmathYash);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_ash_75;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YprotoSmathYash,T86);
  lit_72 = YPPsym((P)"lsh");
  T90 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_71)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_lsh_76 = YPmet(FUNCODEREF(fun_lsh_76),LITREF(lit_72),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YprotoSmathYlsh);
  if (T93 != YPfalse) {
    T92 = VARREF(YprotoSmathYlsh);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_lsh_76;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YprotoSmathYlsh,T91);
  lit_73 = YPPsym((P)"power-of-two-ceiling");
  lit_74 = YPPsym((P)"search");
  lit_75 = YPPsym((P)"po2");
  T96 = YPsig(YPPlist(1,LITREF(lit_75)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_77 = YPmet(FUNCODEREF(fun_search_77),LITREF(lit_74),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceiling_78 = YPmet(FUNCODEREF(fun_power_of_two_ceiling_78),LITREF(lit_73),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YprotoSmathYpower_of_two_ceiling);
  if (T99 != YPfalse) {
    T98 = VARREF(YprotoSmathYpower_of_two_ceiling);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_power_of_two_ceiling_78;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YprotoSmathYpower_of_two_ceiling,T97);
  lit_76 = YPPsym((P)"flo-bits");
  T101 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YprotoSmathYflo_bits = YPmet(FUNCODEREF(YprotoSmathYflo_bits),LITREF(lit_76),T101,ENVNUL,PNUL,YPfalse);
  T102 = YprotoSmathYflo_bits;
  VARSET(YprotoSmathYflo_bits,T102);
  T104 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLfloG));
  T103 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_1)),YPPlist(2,T104,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_80 = YPmet(FUNCODEREF(fun_as_80),LITREF(lit_10),T103,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YprotoStypesYas);
  if (T107 != YPfalse) {
    T106 = VARREF(YprotoStypesYas);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_as_80;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YprotoStypesYas,T105);
  T109 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_81 = YPmet(FUNCODEREF(fun_EE_81),LITREF(lit_14),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YmacrosYEE);
  if (T112 != YPfalse) {
    T111 = VARREF(YmacrosYEE);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_EE_81;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YmacrosYEE,T110);
  T114 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_82 = YPmet(FUNCODEREF(fun_L_82),LITREF(lit_27),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YprotoSmathYL);
  if (T117 != YPfalse) {
    T116 = VARREF(YprotoSmathYL);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_L_82;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YprotoSmathYL,T115);
  T119 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_83 = YPmet(FUNCODEREF(fun_A_83),LITREF(lit_41),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YprotoSmathYA);
  if (T122 != YPfalse) {
    T121 = VARREF(YprotoSmathYA);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_A_83;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YprotoSmathYA,T120);
  T124 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___84 = YPmet(FUNCODEREF(fun___84),LITREF(lit_42),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YprotoSmathY_);
  if (T127 != YPfalse) {
    T126 = VARREF(YprotoSmathY_);
  } else {
    T126 = YPfalse;
  }
  T128 = fun___84;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YprotoSmathY_,T125);
  T129 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_85 = YPmet(FUNCODEREF(fun_T_85),LITREF(lit_43),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YprotoSmathYT);
  if (T132 != YPfalse) {
    T131 = VARREF(YprotoSmathYT);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_T_85;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YprotoSmathYT,T130);
  lit_77 = YPPsym((P)"/");
  T134 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_86 = YPmet(FUNCODEREF(fun_S_86),LITREF(lit_77),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YprotoSmathYS);
  if (T137 != YPfalse) {
    T136 = VARREF(YprotoSmathYS);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_S_86;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YprotoSmathYS,T135);
  T139 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_truncateS_87 = YPmet(FUNCODEREF(fun_truncateS_87),LITREF(lit_54),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YprotoSmathYtruncateS);
  if (T142 != YPfalse) {
    T141 = VARREF(YprotoSmathYtruncateS);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_truncateS_87;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YprotoSmathYtruncateS,T140);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T144 = YPfalse;
  return T144;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoStypes;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoStypes},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"var-type", &module_info_macros, "var-type"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"ddv", &module_info_macros, "ddv"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"%i-", &module_info_boot, "%i-"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"rep", &module_info_boot, "rep"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<str>", &module_info_boot, "<str>"},
  {"dss", &module_info_boot, "dss"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"error", &module_info_boot, "error"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"t+", &module_info_protoStypes, "t+"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"%i<", &module_info_boot, "%i<"},
  {"%sb", &module_info_boot, "%sb"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"set", &module_info_boot, "set"},
  {"%i&", &module_info_boot, "%i&"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%raw", &module_info_boot, "%raw"},
  {"case", &module_info_macros, "case"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"ct", &module_info_boot, "ct"},
  {"napply", &module_info_macros, "napply"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"%cb", &module_info_boot, "%cb"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"dc", &module_info_boot, "dc"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"as", &module_info_protoStypes, "as"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"dg", &module_info_boot, "dg"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"try", &module_info_boot, "try"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"dec", &module_info_macros, "dec"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"let", &module_info_boot, "let"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%i?", &module_info_boot, "%i?"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"@+", &module_info_boot, "@+"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"df", &module_info_boot, "df"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%f/", &module_info_boot, "%f/"},
  {"%su", &module_info_boot, "%su"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"empty?", &module_info_macros, "empty?"},
  {"%slot", &module_info_boot, "%slot"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"<log>", &module_info_boot, "<log>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"not", &module_info_boot, "not"},
  {"%selt", &module_info_boot, "%selt"},
  {"@<", &module_info_boot, "@<"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"dm", &module_info_boot, "dm"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<union>", &module_info_boot, "<union>"},
  {"select", &module_info_macros, "select"},
  {"seq", &module_info_boot, "seq"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"or", &module_info_macros, "or"},
  {"unless", &module_info_macros, "unless"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"@olen", &module_info_boot, "@olen"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"zero?", &YprotoSmathYzeroQ},
  {"=", &YprotoSmathYE},
  {"nul?", &YprotoSmathYnulQ},
  {"uppercase?", &YprotoSmathYuppercaseQ},
  {"to-str", &YprotoSmathYto_str},
  {"round/", &YprotoSmathYroundS},
  {"+", &YprotoSmathYA},
  {"to-digit", &YprotoSmathYto_digit},
  {"<=", &YprotoSmathYLE},
  {"even?", &YprotoSmathYevenQ},
  {"contagious-type", &YprotoSmathYcontagious_type},
  {"---main-1---", NULL},
  {"logior", &YprotoSmathYlogior},
  {"fabs", &YprotoSmathYfabs},
  {"<bot>", &YprotoSmathYLbotG},
  {"round", &YprotoSmathYround},
  {"flo-bits", &YprotoSmathYflo_bits},
  {"truncate/", &YprotoSmathYtruncateS},
  {"as-log", &YprotoSmathYas_log},
  {">", &YprotoSmathYG},
  {"<", &YprotoSmathYL},
  {"max", &YprotoSmathYmax},
  {"neg?", &YprotoSmathYnegQ},
  {"logxor", &YprotoSmathYlogxor},
  {"~==", &YprotoSmathYNEE},
  {"as-lowercase", &YprotoSmathYas_lowercase},
  {"/", &YprotoSmathYS},
  {"eof-object?", &YprotoSmathYeof_objectQ},
  {"modulo", &YprotoSmathYmodulo},
  {"*", &YprotoSmathYT},
  {"odd?", &YprotoSmathYoddQ},
  {"-", &YprotoSmathY_},
  {"---main-0---", NULL},
  {"alphabetic?", &YprotoSmathYalphabeticQ},
  {">=", &YprotoSmathYGE},
  {"logand", &YprotoSmathYlogand},
  {"truncate", &YprotoSmathYtruncate},
  {"eof-object", &YprotoSmathYeof_object},
  {"address-of", &YprotoSmathYaddress_of},
  {"remainder", &YprotoSmathYremainder},
  {"num-to-str", &YprotoSmathYnum_to_str},
  {"floor", &YprotoSmathYfloor},
  {"neg", &YprotoSmathYneg},
  {"lognot", &YprotoSmathYlognot},
  {"as-uppercase", &YprotoSmathYas_uppercase},
  {"ash", &YprotoSmathYash},
  {"pos?", &YprotoSmathYposQ},
  {"lowercase?", &YprotoSmathYlowercaseQ},
  {"char->ascii", &YprotoSmathYchar_Gascii},
  {"numeric?", &YprotoSmathYnumericQ},
  {"floor/", &YprotoSmathYfloorS},
  {"lsh", &YprotoSmathYlsh},
  {"min", &YprotoSmathYmin},
  {"ceiling", &YprotoSmathYceiling},
  {"nyi", &YprotoSmathYnyi},
  {"abs", &YprotoSmathYabs},
  {"ceiling/", &YprotoSmathYceilingS},
  {"nyi-error", &YprotoSmathYnyi_error},
  {"~=", &YprotoSmathYNE},
  {"contagious-call", &YprotoSmathYcontagious_call},
  {"logbit?", &YprotoSmathYlogbitQ},
  {"power-of-two-ceiling", &YprotoSmathYpower_of_two_ceiling},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"zero?", "zero?"},
  {"=", "="},
  {"nul?", "nul?"},
  {"even?", "even?"},
  {"uppercase?", "uppercase?"},
  {"to-str", "to-str"},
  {"flo-bits", "flo-bits"},
  {"logbit?", "logbit?"},
  {"+", "+"},
  {"to-digit", "to-digit"},
  {"<=", "<="},
  {"contagious-type", "contagious-type"},
  {"round/", "round/"},
  {"logior", "logior"},
  {"fabs", "fabs"},
  {"round", "round"},
  {"truncate/", "truncate/"},
  {"as-log", "as-log"},
  {"max", "max"},
  {"neg?", "neg?"},
  {"logxor", "logxor"},
  {"~==", "~=="},
  {"as-lowercase", "as-lowercase"},
  {"/", "/"},
  {"eof-object?", "eof-object?"},
  {"modulo", "modulo"},
  {"*", "*"},
  {"odd?", "odd?"},
  {"-", "-"},
  {"<bot>", "<bot>"},
  {"as", "as"},
  {"alphabetic?", "alphabetic?"},
  {">=", ">="},
  {"logand", "logand"},
  {"truncate", "truncate"},
  {"eof-object", "eof-object"},
  {"address-of", "address-of"},
  {"remainder", "remainder"},
  {"num-to-str", "num-to-str"},
  {"floor", "floor"},
  {"neg", "neg"},
  {"==", "=="},
  {"lognot", "lognot"},
  {"as-uppercase", "as-uppercase"},
  {"ash", "ash"},
  {"pos?", "pos?"},
  {"lowercase?", "lowercase?"},
  {"char->ascii", "char->ascii"},
  {"numeric?", "numeric?"},
  {"floor/", "floor/"},
  {"lsh", "lsh"},
  {"min", "min"},
  {"ceiling", "ceiling"},
  {"abs", "abs"},
  {"ceiling/", "ceiling/"},
  {">", ">"},
  {"nyi-error", "nyi-error"},
  {"~=", "~="},
  {"contagious-call", "contagious-call"},
  {"<", "<"},
  {"power-of-two-ceiling", "power-of-two-ceiling"},
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
extern void load_module_protoStypes (void);

/* EXPRESSION: */

extern void load_module_protoSmath (void);

void load_module_protoSmath (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoStypes();

  (P)YprotoSmathY___main_0___();
  (P)YprotoSmathY___main_1___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
