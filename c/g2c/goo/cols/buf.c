/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/buffer */

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
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
DEF(YprotoScollectionsSbufferYbuf_len,"proto/collections/buffer","buf-len");
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
DEF(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
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
DEF(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
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
DEF(YprotoScollectionsSbufferYbuf_len_setter,"proto/collections/buffer","buf-len-setter");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(Yfun_mets,"boot","fun-mets");
DEF(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
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
DEF(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
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
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
DEF(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
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
DEF(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YprotoScollectionsSbufferYbuf_dat,"proto/collections/buffer","buf-dat");
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
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
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
DEF(YprotoScollectionsSbufferYbuf_dat_setter,"proto/collections/buffer","buf-dat-setter");
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
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_22);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_37);
DEFLIT(lit_16);
DEFLIT(lit_38);
DEFLIT(lit_25);
DEFLIT(lit_7);
DEFLIT(lit_36);
DEFLIT(lit_27);
DEFLIT(lit_12);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_29);
DEFLIT(lit_32);
DEFLIT(lit_31);
DEFLIT(lit_6);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_26);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_14);
DEFLIT(lit_24);
DEFLIT(lit_28);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_30);
DEFLIT(lit_8);
DEFLIT(lit_20);

/* FUNCTIONS: */

LOCFOR(fun_buf_len_0);
LOCFOR(fun_buf_len_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_buf_dat_3);
LOCFOR(fun_buf_dat_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_len_6);
LOCFOR(fun_elt_7);
LOCFOR(fun_elt_setter_8);
LOCFOR(fun_empty_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_x_1259_11);
LOCFOR(fun_x_1256_12);
LOCFOR(fun_catX_13);
LOCFOR(fun_buf_14);
LOCFOR(fun_push_lastX_15);
LOCFOR(fun_pop_lastX_16);
LOCFOR(fun_to_str_17);
LOCFOR(fun_addX_18);
LOCFOR(fun_fill_19);
LOCFOR(fun_lenSfill_setter_20);
LOCFOR(fun_len_setter_21);
LOCFOR(fun_low_elt_22);
LOCFOR(fun_low_elt_setter_23);
extern P YprotoScollectionsSbufferY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_buf_len_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YprotoScollectionsSbufferYbuf_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_buf_len_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSbufferYbuf_len));
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

FUNCODEDEF(fun_buf_dat_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YprotoScollectionsSbufferYbuf_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_buf_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSbufferYbuf_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_17));
}

FUNCODEDEF(fun_len_6) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_len),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_7) {
  P c_,i_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYrange_checkQ),c_,i_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYlow_elt),c_,i_);
    T0 = T2;
  } else {
    T0 = VARREF(Ynul);
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
  T0 = CALL2(1,VARREF(YprotoSmathYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),z_,c_,i_);
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
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSbufferYLbufG),Ynil,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF863;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YprotoSmathYpower_of_two_ceiling),s_);
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YLvecG),T2);
  datF863 = T1;
  T5 = (P)YPpair(VARREF(YprotoScollectionsSbufferYbuf_dat),Ynil);
  T4 = (P)YPpair(VARREF(YprotoScollectionsSbufferYbuf_len),T5);
  T7 = (P)YPpair(datF863,Ynil);
  T6 = (P)YPpair(s_,T7);
  T3 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSbufferYLbufG),T4,T6);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1259_11) {
  P x_1257_;
  P eF864;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1257_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1257_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1257_);
    eF864 = T4;
    CALL2(1,VARREF(YprotoScollectionsSsequenceYaddX),FREEREF(1),eF864);
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1257_);
    a1 = T6;
    x_1257_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1256_12) {
  P x_1254_;
  P x_1259F867;
  P x_1258F866;
  P sF865;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1254_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1254_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1254_);
    sF865 = T4;
    x_1258F866 = sF865;
    T6 = FUNSHELL(1,fun_x_1259_11,3);
    x_1259F867 = T6;
    FUNINIT(x_1259F867, 3,x_1258F866,FREEREF(1),x_1259F867);
    T8 = CALL1(1,VARREF(YmacrosYini_state),x_1258F866);
    T7 = CALL1(0,x_1259F867,T8);
    T5 = T7;
    T10 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1254_);
    a1 = T10;
    x_1254_ = a1;
    goto loop;
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_13) {
  P x_,more_;
  P x_1256F869;
  P x_1255F868;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  x_1255F868 = more_;
  T1 = FUNSHELL(1,fun_x_1256_12,3);
  x_1256F869 = T1;
  FUNINIT(x_1256F869, 3,x_1255F868,x_,x_1256F869);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_1255F868);
  T2 = CALL1(0,x_1256F869,T3);
  T0 = T2;
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_buf_14) {
  P elts_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(elts_, 0);
loop:
  T0 = CALLN(1,VARREF(YmacrosYnapply),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YprotoScollectionsSbufferYLbufG),elts_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_push_lastX_15) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoScollectionsSsequenceYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_lastX_16) {
  P c_;
  P xF871;
  P new_lenF870;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),c_);
  T1 = CALL2(1,VARREF(YprotoSmathY_),T2,YPint((P)1));
  new_lenF870 = T1;
  T4 = CALL2(1,VARREF(YprotoScollectionsScollectionYlow_elt),c_,new_lenF870);
  xF871 = T4;
  CALL2(1,VARREF(YprotoScollectionsSbufferYlen_setter),new_lenF870,c_);
  T3 = xF871;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_17) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YmacrosYcat),LITREF(lit_33),T1,LITREF(lit_34));
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
  T0 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),c_);
  CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fill_19) {
  P i_;
  P tmpF873;
  P tmpF872;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYL),i_,FREEREF(0));
  tmpF872 = T1;
  if (tmpF872 != YPfalse) {
    T4 = CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),FREEREF(1),FREEREF(2),i_);
    tmpF873 = T4;
    if (tmpF873 != YPfalse) {
      T7 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P fillF877;
  P old_lenF876;
  P new_dataF875;
  P datF874;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_dat),c_);
  datF874 = T1;
  T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),datF874);
  T3 = CALL2(1,VARREF(YprotoSmathYG),new_len_,T4);
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YprotoSmathYpower_of_two_ceiling),new_len_);
    T7 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YLvecG),T8);
    T6 = CALL2(1,VARREF(YprotoScollectionsScollectionYfill),T7,default_);
    new_dataF875 = T6;
    CALL2(1,VARREF(YprotoScollectionsScollectionYalter),new_dataF875,datF874);
    CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_len_setter),new_len_,c_);
    T9 = CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_dat_setter),new_dataF875,c_);
    T5 = T9;
    T2 = T5;
  } else {
    T12 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),c_);
    T11 = CALL2(1,VARREF(YprotoSmathYL),new_len_,T12);
    if (T11 != YPfalse) {
      T14 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),c_);
      old_lenF876 = T14;
      CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_len_setter),new_len_,c_);
      T16 = FUNSHELL(1,fun_fill_19,4);
      fillF877 = T16;
      FUNINIT(fillF877, 4,old_lenF876,default_,datF874,fillF877);
      T17 = CALL1(1,fillF877,new_len_);
      T15 = T17;
      T13 = T15;
      T10 = T13;
    } else {
      T18 = CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_len_setter),new_len_,c_);
      T10 = T18;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_21) {
  P new_len_,c_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoScollectionsSbufferYlenSfill_setter),new_len_,c_,VARREF(Ynul));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_22) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_dat),x_);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYlow_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_23) {
  P z_,x_,i_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
  T0 = CALL2(1,VARREF(YprotoSmathYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    T2 = CALL2(1,VARREF(YprotoScollectionsSbufferYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_dat),x_);
  T4 = CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),z_,T5,i_);
UNLINK_STACK();
  QRET(T4);
}

P YprotoScollectionsSbufferY___main_0___() {
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<buf>");
  T1 = (P)YPpair(VARREF(YLflatG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YprotoScollectionsSbufferYLbufG,T0);
  lit_1 = YPPsym((P)"buf");
  lit_2 = YPPsym((P)"elts");
  T3 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  T2 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_1),T3,Ynil,YPfalse);
  VARSET(YprotoScollectionsSbufferYbuf,T2);
  lit_3 = YPPsym((P)"push-last!");
  lit_4 = YPPsym((P)"c");
  lit_5 = YPPsym((P)"x");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  T4 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_3),T5,Ynil,YPfalse);
  VARSET(YprotoScollectionsSbufferYpush_lastX,T4);
  lit_6 = YPPsym((P)"pop-last!");
  T7 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_6),T7,Ynil,YPfalse);
  VARSET(YprotoScollectionsSbufferYpop_lastX,T6);
  lit_7 = YPPsym((P)"len/fill-setter");
  lit_8 = YPPsym((P)"new-len");
  lit_9 = YPPsym((P)"default");
  T9 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_7),T9,Ynil,YPfalse);
  VARSET(YprotoScollectionsSbufferYlenSfill_setter,T8);
  lit_10 = YPPsym((P)"len-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_10),T11,Ynil,YPfalse);
  VARSET(YprotoScollectionsSbufferYlen_setter,T10);
  lit_11 = YPPsym((P)"buf-len");
  lit_12 = YPPsym((P)"_x");
  T12 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_len_0 = YPmet(FUNCODEREF(fun_buf_len_0),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YprotoScollectionsSbufferYbuf_len);
  if (T15 != YPfalse) {
    T14 = VARREF(YprotoScollectionsSbufferYbuf_len);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_buf_len_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YprotoScollectionsSbufferYbuf_len,T13);
  lit_13 = YPPsym((P)"buf-len-setter");
  lit_14 = YPPsym((P)"_z");
  T17 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_len_setter_1 = YPmet(FUNCODEREF(fun_buf_len_setter_1),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YprotoScollectionsSbufferYbuf_len_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YprotoScollectionsSbufferYbuf_len_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_buf_len_setter_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YprotoScollectionsSbufferYbuf_len_setter,T18);
  T22 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T23 = fun_2;
  CALLN(1,VARREF(YPslot),5,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YprotoScollectionsSbufferYbuf_len),VARREF(YprotoScollectionsSbufferYbuf_len_setter),VARREF(YLintG),T23);
  lit_15 = YPPsym((P)"buf-dat");
  T24 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_dat_3 = YPmet(FUNCODEREF(fun_buf_dat_3),LITREF(lit_15),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YprotoScollectionsSbufferYbuf_dat);
  if (T27 != YPfalse) {
    T26 = VARREF(YprotoScollectionsSbufferYbuf_dat);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_buf_dat_3;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YprotoScollectionsSbufferYbuf_dat,T25);
  lit_16 = YPPsym((P)"buf-dat-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLvecG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_dat_setter_4 = YPmet(FUNCODEREF(fun_buf_dat_setter_4),LITREF(lit_16),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YprotoScollectionsSbufferYbuf_dat_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YprotoScollectionsSbufferYbuf_dat_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_buf_dat_setter_4;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YprotoScollectionsSbufferYbuf_dat_setter,T30);
  lit_17 = CALLN(1, Yvec, 0);
  T34 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T35 = fun_5;
  CALLN(1,VARREF(YPslot),5,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YprotoScollectionsSbufferYbuf_dat),VARREF(YprotoScollectionsSbufferYbuf_dat_setter),VARREF(YLvecG),T35);
  lit_18 = YPPsym((P)"len");
  T36 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_18),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YprotoScollectionsScollectionYlen);
  if (T39 != YPfalse) {
    T38 = VARREF(YprotoScollectionsScollectionYlen);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_len_6;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YprotoScollectionsScollectionYlen,T37);
  lit_19 = YPPsym((P)"elt");
  lit_20 = YPPsym((P)"i");
  T41 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_7 = YPmet(FUNCODEREF(fun_elt_7),LITREF(lit_19),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YmacrosYelt);
  if (T44 != YPfalse) {
    T43 = VARREF(YmacrosYelt);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_elt_7;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YmacrosYelt,T42);
  lit_21 = YPPsym((P)"elt-setter");
  lit_22 = YPPsym((P)"z");
  T46 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_4),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_21),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YprotoScollectionsScollectionYelt_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YprotoScollectionsScollectionYelt_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_elt_setter_8;
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YprotoScollectionsScollectionYelt_setter,T47);
  lit_23 = YPPsym((P)"empty");
  T52 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YprotoScollectionsSbufferYLbufG));
  T51 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,T52),YPfalse,YPint((P)1),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_23),T51,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T55 != YPfalse) {
    T54 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_empty_9;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YprotoScollectionsScollectionYempty,T53);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPsym((P)"s");
  T58 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YprotoScollectionsSbufferYLbufG));
  T57 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_25)),YPPlist(2,T58,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_24),T57,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YprotoScollectionsScollectionYfab);
  if (T61 != YPfalse) {
    T60 = VARREF(YprotoScollectionsScollectionYfab);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_fab_10;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YprotoScollectionsScollectionYfab,T59);
  lit_26 = YPPsym((P)"cat!");
  lit_27 = YPPsym((P)"more");
  lit_28 = YPPsym((P)"x-1256");
  lit_29 = YPPsym((P)"x-1254");
  lit_30 = YPPsym((P)"x-1259");
  lit_31 = YPPsym((P)"x-1257");
  T65 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1259_11 = YPmet(FUNCODEREF(fun_x_1259_11),LITREF(lit_30),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1256_12 = YPmet(FUNCODEREF(fun_x_1256_12),LITREF(lit_28),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_27)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPtrue,YPint((P)1),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_catX_13 = YPmet(FUNCODEREF(fun_catX_13),LITREF(lit_26),T63,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YprotoScollectionsSsequenceYcatX);
  if (T68 != YPfalse) {
    T67 = VARREF(YprotoScollectionsSsequenceYcatX);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_catX_13;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YprotoScollectionsSsequenceYcatX,T66);
  T70 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_buf_14 = YPmet(FUNCODEREF(fun_buf_14),LITREF(lit_1),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YprotoScollectionsSbufferYbuf);
  if (T73 != YPfalse) {
    T72 = VARREF(YprotoScollectionsSbufferYbuf);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_buf_14;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YprotoScollectionsSbufferYbuf,T71);
  T75 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_push_lastX_15 = YPmet(FUNCODEREF(fun_push_lastX_15),LITREF(lit_3),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YprotoScollectionsSbufferYpush_lastX);
  if (T78 != YPfalse) {
    T77 = VARREF(YprotoScollectionsSbufferYpush_lastX);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_push_lastX_15;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YprotoScollectionsSbufferYpush_lastX,T76);
  T80 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pop_lastX_16 = YPmet(FUNCODEREF(fun_pop_lastX_16),LITREF(lit_6),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YprotoScollectionsSbufferYpop_lastX);
  if (T83 != YPfalse) {
    T82 = VARREF(YprotoScollectionsSbufferYpop_lastX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_pop_lastX_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YprotoScollectionsSbufferYpop_lastX,T81);
  lit_32 = YPPsym((P)"to-str");
  lit_33 = YPsb((P)"#[");
  lit_34 = YPsb((P)"]");
  T85 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_17 = YPmet(FUNCODEREF(fun_to_str_17),LITREF(lit_32),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YprotoSmathYto_str);
  if (T88 != YPfalse) {
    T87 = VARREF(YprotoSmathYto_str);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_to_str_17;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YprotoSmathYto_str,T86);
  lit_35 = YPPsym((P)"add!");
  T90 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_addX_18 = YPmet(FUNCODEREF(fun_addX_18),LITREF(lit_35),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YprotoScollectionsSsequenceYaddX);
  if (T93 != YPfalse) {
    T92 = VARREF(YprotoScollectionsSsequenceYaddX);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_addX_18;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YprotoScollectionsSsequenceYaddX,T91);
  lit_36 = YPPsym((P)"fill");
  T96 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_19 = YPmet(FUNCODEREF(fun_fill_19),LITREF(lit_36),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_20 = YPmet(FUNCODEREF(fun_lenSfill_setter_20),LITREF(lit_7),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YprotoScollectionsSbufferYlenSfill_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(YprotoScollectionsSbufferYlenSfill_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_lenSfill_setter_20;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YprotoScollectionsSbufferYlenSfill_setter,T97);
  T101 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_21 = YPmet(FUNCODEREF(fun_len_setter_21),LITREF(lit_10),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YprotoScollectionsSbufferYlen_setter);
  if (T104 != YPfalse) {
    T103 = VARREF(YprotoScollectionsSbufferYlen_setter);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_len_setter_21;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YprotoScollectionsSbufferYlen_setter,T102);
  lit_37 = YPPsym((P)"low-elt");
  T106 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_22 = YPmet(FUNCODEREF(fun_low_elt_22),LITREF(lit_37),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YprotoScollectionsScollectionYlow_elt);
  if (T109 != YPfalse) {
    T108 = VARREF(YprotoScollectionsScollectionYlow_elt);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_low_elt_22;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YprotoScollectionsScollectionYlow_elt,T107);
  lit_38 = YPPsym((P)"low-elt-setter");
  T113 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_5),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T112 = fun_low_elt_setter_23 = YPmet(FUNCODEREF(fun_low_elt_setter_23),LITREF(lit_38),T113,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YprotoScollectionsScollectionYlow_elt_setter);
  if (T117 != YPfalse) {
    T116 = VARREF(YprotoScollectionsScollectionYlow_elt_setter);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_low_elt_setter_23;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  T114 = VARSET(YprotoScollectionsScollectionYlow_elt_setter,T115);
  T111 = T114;
  return T111;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsSflat;
extern MODULE_INFO module_info_protoScollectionsSvector;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoSmath},
  {&module_info_protoStypes},
  {&module_info_protoScollectionsScollection},
  {&module_info_protoScollectionsSsequence},
  {&module_info_protoScollectionsSlist},
  {&module_info_protoScollectionsSflat},
  {&module_info_protoScollectionsSvector},
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
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
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
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
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
  {"list", &module_info_protoScollectionsSlist, "list"},
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
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
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
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"buf-len", &YprotoScollectionsSbufferYbuf_len},
  {"len-setter", &YprotoScollectionsSbufferYlen_setter},
  {"len/fill-setter", &YprotoScollectionsSbufferYlenSfill_setter},
  {"buf-len-setter", &YprotoScollectionsSbufferYbuf_len_setter},
  {"pop-last!", &YprotoScollectionsSbufferYpop_lastX},
  {"push-last!", &YprotoScollectionsSbufferYpush_lastX},
  {"---main-0---", NULL},
  {"buf", &YprotoScollectionsSbufferYbuf},
  {"<buf>", &YprotoScollectionsSbufferYLbufG},
  {"buf-dat", &YprotoScollectionsSbufferYbuf_dat},
  {"buf-dat-setter", &YprotoScollectionsSbufferYbuf_dat_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"len-setter", "len-setter"},
  {"len/fill-setter", "len/fill-setter"},
  {"pop-last!", "pop-last!"},
  {"push-last!", "push-last!"},
  {"buf", "buf"},
  {"<buf>", "<buf>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsSbuffer;
MODULE_INFO module_info_protoScollectionsSbuffer = {
  "proto/collections/buffer",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_protoSmath (void);
extern void load_module_protoStypes (void);
extern void load_module_protoScollectionsScollection (void);
extern void load_module_protoScollectionsSsequence (void);
extern void load_module_protoScollectionsSlist (void);
extern void load_module_protoScollectionsSflat (void);
extern void load_module_protoScollectionsSvector (void);

/* EXPRESSION: */

extern void load_module_protoScollectionsSbuffer (void);

void load_module_protoScollectionsSbuffer (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoSmath();
  load_module_protoStypes();
  load_module_protoScollectionsScollection();
  load_module_protoScollectionsSsequence();
  load_module_protoScollectionsSlist();
  load_module_protoScollectionsSflat();
  load_module_protoScollectionsSvector();

  (P)YprotoScollectionsSbufferY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
