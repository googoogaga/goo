/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/flat */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(Ytype_object,"boot","type-object");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(Yobject_slots,"boot","object-slots");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(Yfind_setter,"boot","find-setter");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YprotoSmathYG,"proto/math",">");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(Yfind_getter,"boot","find-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Ysym_name,"boot","sym-name");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YprotoSmathYS,"proto/math","/");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YDmax_int,"boot","$max-int");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathY_,"proto/math","-");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoStypesYas,"proto/types","as");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YLcolG,"boot","<col>");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
EXT(YLtupG,"boot","<tup>");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(YLsigG,"boot","<sig>");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoSmathYremainder,"proto/math","remainder");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(Yfun_value,"boot","fun-value");
EXT(YprotoSmathYlognot,"proto/math","lognot");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPslot,"boot","%slot");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YprotoSmathYash,"proto/math","ash");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YLslotG,"boot","<slot>");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(Yfun_name,"boot","fun-name");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YprotoSmathYmin,"proto/math","min");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yadd_slot,"boot","add-slot");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
EXT(YisaQ,"boot","isa?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_10);
DEFLIT(lit_3);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_7);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_ini_state_0);
LOCFOR(fun_fin_stateQ_1);
LOCFOR(fun_nxt_state_2);
LOCFOR(fun_now_elt_3);
LOCFOR(fun_now_elt_setter_4);
LOCFOR(fun_now_key_5);
LOCFOR(fun_copy_state_6);
extern P YprotoScollectionsSflatY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_ini_state_0) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(YPint((P)0));
}

FUNCODEDEF(fun_fin_stateQ_1) {
  P c_,state_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),c_);
  T0 = CALL2(1,VARREF(YmacrosYEE),state_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_2) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYA),state_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_elt_3) {
  P c_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYlow_elt),c_,state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_4) {
  P z_,c_,state_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(state_, 2);
loop:
  T0 = CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),z_,c_,state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_5) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

FUNCODEDEF(fun_copy_state_6) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

P YprotoScollectionsSflatY___main_0___() {
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"ini-state");
  lit_1 = YPPsym((P)"c");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLflatG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ini_state_0 = YPmet(FUNCODEREF(fun_ini_state_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YmacrosYini_state);
  if (T3 != YPfalse) {
    T2 = VARREF(YmacrosYini_state);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ini_state_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YmacrosYini_state,T1);
  lit_2 = YPPsym((P)"fin-state?");
  lit_3 = YPPsym((P)"state");
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLflatG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_fin_stateQ_1 = YPmet(FUNCODEREF(fun_fin_stateQ_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YmacrosYfin_stateQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YmacrosYfin_stateQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_fin_stateQ_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YmacrosYfin_stateQ,T6);
  lit_4 = YPPsym((P)"nxt-state");
  lit_5 = YPPsym((P)"_");
  T10 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_3)),YPPlist(2,VARREF(YLflatG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_nxt_state_2 = YPmet(FUNCODEREF(fun_nxt_state_2),LITREF(lit_4),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YmacrosYnxt_state);
  if (T13 != YPfalse) {
    T12 = VARREF(YmacrosYnxt_state);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_nxt_state_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YmacrosYnxt_state,T11);
  lit_6 = YPPsym((P)"now-elt");
  T15 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLflatG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_elt_3 = YPmet(FUNCODEREF(fun_now_elt_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YmacrosYnow_elt);
  if (T18 != YPfalse) {
    T17 = VARREF(YmacrosYnow_elt);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_now_elt_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YmacrosYnow_elt,T16);
  lit_7 = YPPsym((P)"now-elt-setter");
  lit_8 = YPPsym((P)"z");
  T20 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_1),LITREF(lit_3)),YPPlist(3,VARREF(YLanyG),VARREF(YLflatG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_now_elt_setter_4 = YPmet(FUNCODEREF(fun_now_elt_setter_4),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YprotoScollectionsScollectionYnow_elt_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YprotoScollectionsScollectionYnow_elt_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_now_elt_setter_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YprotoScollectionsScollectionYnow_elt_setter,T21);
  lit_9 = YPPsym((P)"now-key");
  T25 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_3)),YPPlist(2,VARREF(YLflatG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_now_key_5 = YPmet(FUNCODEREF(fun_now_key_5),LITREF(lit_9),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YprotoScollectionsScollectionYnow_key);
  if (T28 != YPfalse) {
    T27 = VARREF(YprotoScollectionsScollectionYnow_key);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_now_key_5;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YprotoScollectionsScollectionYnow_key,T26);
  lit_10 = YPPsym((P)"copy-state");
  T32 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_3)),YPPlist(2,VARREF(YLflatG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T31 = fun_copy_state_6 = YPmet(FUNCODEREF(fun_copy_state_6),LITREF(lit_10),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YprotoScollectionsScollectionYcopy_state);
  if (T36 != YPfalse) {
    T35 = VARREF(YprotoScollectionsScollectionYcopy_state);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_copy_state_6;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  T33 = VARSET(YprotoScollectionsScollectionYcopy_state,T34);
  T30 = T33;
  return T30;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSsequence;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {&module_info_protoScollectionsScollection},
  {&module_info_protoScollectionsSsequence},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"var-type", &module_info_macros, "var-type"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"uppercase?", &module_info_protoSmath, "uppercase?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"round/", &module_info_protoSmath, "round/"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"+", &module_info_protoSmath, "+"},
  {"ddv", &module_info_macros, "ddv"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"%i-", &module_info_boot, "%i-"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"rep", &module_info_boot, "rep"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"logior", &module_info_protoSmath, "logior"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"<str>", &module_info_boot, "<str>"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"dss", &module_info_boot, "dss"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"%iv", &module_info_boot, "%iv"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {">", &module_info_protoSmath, ">"},
  {"<", &module_info_protoSmath, "<"},
  {"error", &module_info_boot, "error"},
  {"max", &module_info_protoSmath, "max"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"t+", &module_info_protoStypes, "t+"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"~==", &module_info_protoSmath, "~=="},
  {"%i<", &module_info_boot, "%i<"},
  {"%sb", &module_info_boot, "%sb"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"set", &module_info_boot, "set"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"%i&", &module_info_boot, "%i&"},
  {"/", &module_info_protoSmath, "/"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%raw", &module_info_boot, "%raw"},
  {"case", &module_info_macros, "case"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"ct", &module_info_boot, "ct"},
  {"napply", &module_info_macros, "napply"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"%cb", &module_info_boot, "%cb"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"*", &module_info_protoSmath, "*"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"-", &module_info_protoSmath, "-"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
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
  {"range-error", &module_info_protoScollectionsSsequence, "range-error"},
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {">=", &module_info_protoSmath, ">="},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logand", &module_info_protoSmath, "logand"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"truncate", &module_info_protoSmath, "truncate"},
  {"dg", &module_info_boot, "dg"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"try", &module_info_boot, "try"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"dec", &module_info_macros, "dec"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"let", &module_info_boot, "let"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%i?", &module_info_boot, "%i?"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"@+", &module_info_boot, "@+"},
  {"floor", &module_info_protoSmath, "floor"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"df", &module_info_boot, "df"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"neg", &module_info_protoSmath, "neg"},
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
  {"lognot", &module_info_protoSmath, "lognot"},
  {"%su", &module_info_boot, "%su"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"%slot", &module_info_boot, "%slot"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ash", &module_info_protoSmath, "ash"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"%selt", &module_info_boot, "%selt"},
  {"@<", &module_info_boot, "@<"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"dm", &module_info_boot, "dm"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"numeric?", &module_info_protoSmath, "numeric?"},
  {"<union>", &module_info_boot, "<union>"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"select", &module_info_macros, "select"},
  {"seq", &module_info_boot, "seq"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"lsh", &module_info_protoSmath, "lsh"},
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
  {"min", &module_info_protoSmath, "min"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"@olen", &module_info_boot, "@olen"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"nyi-error", &module_info_protoSmath, "nyi-error"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"~=", &module_info_protoSmath, "~="},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"logbit?", &module_info_protoSmath, "logbit?"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<flat>", "<flat>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsSflat;
MODULE_INFO module_info_protoScollectionsSflat = {
  "proto/collections/flat",
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
extern void load_module_protoSmath (void);
extern void load_module_protoScollectionsScollection (void);
extern void load_module_protoScollectionsSsequence (void);

/* EXPRESSION: */

extern void load_module_protoScollectionsSflat (void);

void load_module_protoScollectionsSflat (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoScollectionsScollection();
  load_module_protoScollectionsSsequence();

  (P)YprotoScollectionsSflatY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
