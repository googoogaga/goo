/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/sequence */

EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
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
DEF(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
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
DEF(YprotoScollectionsSsequenceYadd_new,"proto/collections/sequence","add-new");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
DEF(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
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
DEF(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
DEF(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
DEF(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
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
DEF(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
DEF(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
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
DEF(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YLcolG,"boot","<col>");
DEF(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
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
DEF(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(Ymet_appQ,"boot","met-app?");
DEF(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
DEF(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
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
DEF(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
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
DEF(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
DEF(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
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
DEF(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yadd_slot,"boot","add-slot");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
EXT(YisaQ,"boot","isa?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
DEF(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_57);
DEFLIT(lit_37);
DEFLIT(lit_61);
DEFLIT(lit_3);
DEFLIT(lit_8);
DEFLIT(lit_50);
DEFLIT(lit_59);
DEFLIT(lit_1);
DEFLIT(lit_16);
DEFLIT(lit_38);
DEFLIT(lit_41);
DEFLIT(lit_22);
DEFLIT(lit_26);
DEFLIT(lit_29);
DEFLIT(lit_4);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_46);
DEFLIT(lit_39);
DEFLIT(lit_15);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_48);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_0);
DEFLIT(lit_32);
DEFLIT(lit_42);
DEFLIT(lit_31);
DEFLIT(lit_5);
DEFLIT(lit_53);
DEFLIT(lit_49);
DEFLIT(lit_23);
DEFLIT(lit_45);
DEFLIT(lit_27);
DEFLIT(lit_30);
DEFLIT(lit_34);
DEFLIT(lit_33);
DEFLIT(lit_40);
DEFLIT(lit_56);
DEFLIT(lit_54);
DEFLIT(lit_36);
DEFLIT(lit_17);
DEFLIT(lit_47);
DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_28);
DEFLIT(lit_11);
DEFLIT(lit_21);
DEFLIT(lit_44);
DEFLIT(lit_18);
DEFLIT(lit_43);
DEFLIT(lit_24);
DEFLIT(lit_51);
DEFLIT(lit_10);
DEFLIT(lit_58);
DEFLIT(lit_60);
DEFLIT(lit_52);
DEFLIT(lit_35);
DEFLIT(lit_7);
DEFLIT(lit_55);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_in_1);
LOCFOR(fun_alter_2);
LOCFOR(fun_1st_3);
LOCFOR(fun_2nd_4);
LOCFOR(fun_3rd_5);
LOCFOR(fun_last_6);
LOCFOR(fun_7);
LOCFOR(fun_pos_8);
LOCFOR(fun_con_9);
LOCFOR(fun_rev_10);
LOCFOR(fun_cat_11);
LOCFOR(fun_catX_12);
LOCFOR(fun_con_y_13);
LOCFOR(fun_con_x_14);
LOCFOR(fun_cat2_15);
LOCFOR(fun_con_x_16);
LOCFOR(fun_sub_17);
LOCFOR(fun_in_18);
LOCFOR(fun_find_19);
LOCFOR(fun_onto_20);
LOCFOR(fun_skip_21);
LOCFOR(fun_insert_22);
LOCFOR(fun_copy_23);
LOCFOR(fun_sub_setter_24);
LOCFOR(fun_con_25);
LOCFOR(fun_pick_26);
LOCFOR(fun_27);
LOCFOR(fun_del_28);
LOCFOR(fun_29);
LOCFOR(fun_del_dups_30);
LOCFOR(fun_keys_31);
FUNFOR(YprotoScollectionsSsequenceYrange_error);
FUNFOR(YprotoScollectionsSsequenceYrange_check);
FUNFOR(YprotoScollectionsSsequenceYrange_checkQ);
LOCFOR(fun_add_new_35);
LOCFOR(fun_addX_36);
LOCFOR(fun_in_37);
LOCFOR(fun_into_38);
LOCFOR(fun_39);
LOCFOR(fun_vals_to_str_40);
LOCFOR(fun_rep_41);
LOCFOR(fun_do_key_vals_42);
extern P YprotoScollectionsSsequenceY___main_0___ ();
extern P YprotoScollectionsSsequenceY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_0) {
  P d_,s_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),s_);
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),d_,T2);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYalter),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_1) {
  P ds_,ss_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),ds_);
  if (T2 != YPfalse) {
    T1 = YPtrue;
  } else {
    T3 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),ss_);
    T1 = T3;
  }
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),ss_);
    CALL3(1,VARREF(YprotoScollectionsScollectionYnow_elt_setter),T4,FREEREF(0),ds_);
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),ds_);
    T7 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),ss_);
    a1 = T6;
    a2 = T7;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alter_2) {
  P dst_,src_;
  P inF806;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_1,3);
  inF806 = T1;
  FUNINIT(inF806, 3,dst_,src_,inF806);
  T3 = CALL1(1,VARREF(YmacrosYini_state),dst_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),src_);
  T2 = CALL2(0,inF806,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_1st_3) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2nd_4) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3rd_5) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYelt),x_,YPint((P)2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_last_6) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
  T1 = CALL2(1,VARREF(YprotoSmathY_),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YmacrosYelt),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P a_;
  P T0;
  P a1;
LINK_STACK();
  ARG(a_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYEE),FREEREF(0),a_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pos_8) {
  P x_,v_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
loop:
  T1 = FUNFAB(fun_7,1,v_);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfind_key),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_9) {
  P seq_,sta_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sta_);
    T4 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),seq_,T5);
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sta_);
    a1 = T4;
    a2 = T6;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rev_10) {
  P x_;
  P conF807;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_9,2);
  conF807 = T1;
  FUNINIT(conF807, 2,x_,conF807);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T2 = CALL2(0,conF807,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat_11) {
  P x_,ss_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
loop:
  T0 = CALL3(1,VARREF(YprotoScollectionsScollectionYreduce),VARREF(YprotoScollectionsSsequenceYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_12) {
  P x_,more_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = CALLN(1,VARREF(YmacrosYnapply),4,VARREF(YmacrosYcat),YPfalse,x_,more_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_y_13) {
  P seq_,sta_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),FREEREF(1),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sta_);
    T5 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),seq_,T6);
    T7 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sta_);
    a1 = T5;
    a2 = T7;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_x_14) {
  P seq_,sta_;
  P con_yF808;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_con_y_13,3);
    con_yF808 = T3;
    FUNINIT(con_yF808, 3,FREEREF(1),FREEREF(0),con_yF808);
    T5 = CALL1(1,VARREF(YmacrosYini_state),FREEREF(1));
    T4 = CALL2(0,con_yF808,seq_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sta_);
    T7 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),seq_,T8);
    T9 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sta_);
    a1 = T7;
    a2 = T9;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cat2_15) {
  P x_,y_;
  P con_xF809;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_x_14,3);
  con_xF809 = T1;
  FUNINIT(con_xF809, 3,x_,y_,con_xF809);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T2 = CALL2(0,con_xF809,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_x_16) {
  P seq_,i_,sta_;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(seq_, 0);
  ARG(i_, 1);
  ARG(sta_, 2);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YprotoSmathYGE),i_,FREEREF(2));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YprotoSmathYL),i_,FREEREF(3));
      T6 = T8;
    } else {
      T6 = YPfalse;
    }
    if (T6 != YPfalse) {
      T10 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sta_);
      T9 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),seq_,T10);
      T5 = T9;
    } else {
      T5 = seq_;
    }
    T11 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    T12 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sta_);
    a1 = T5;
    a2 = T11;
    a3 = T12;
    seq_ = a1;
    i_ = a2;
    sta_ = a3;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_17) {
  P x_,from_,below_;
  P con_xF810;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_x_16,4);
  con_xF810 = T1;
  FUNINIT(con_xF810, 4,x_,con_xF810,from_,below_);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T2 = CALL3(1,con_xF810,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_18) {
  P ds_,ss_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),ss_);
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),ss_);
    CALL3(1,VARREF(YprotoScollectionsScollectionYnow_elt_setter),T2,FREEREF(1),ds_);
    T4 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),ds_);
    T5 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),ss_);
    a1 = T4;
    a2 = T5;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_19) {
  P ds_,i_;
  P inF811;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_in_18,3);
    inF811 = T3;
    FUNINIT(inF811, 3,FREEREF(1),FREEREF(2),inF811);
    T5 = CALL1(1,VARREF(YmacrosYini_state),FREEREF(1));
    T4 = CALL2(0,inF811,ds_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(2),ds_);
    T8 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    ds_ = a1;
    i_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_onto_20) {
  P nds_,ds_,i_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(nds_, 0);
  ARG(ds_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(2),ds_);
    CALL3(1,VARREF(YprotoScollectionsScollectionYnow_elt_setter),T2,FREEREF(1),nds_);
    T4 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),nds_);
    T5 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(2),ds_);
    T6 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    a3 = T6;
    nds_ = a1;
    ds_ = a2;
    i_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_skip_21) {
  P ds_,i_;
  P ontoF812;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_onto_20,4);
    ontoF812 = T3;
    FUNINIT(ontoF812, 4,FREEREF(1),FREEREF(2),FREEREF(3),ontoF812);
    T4 = CALL3(0,ontoF812,FREEREF(4),ds_,FREEREF(0));
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(3),ds_);
    T7 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    ds_ = a1;
    i_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_22) {
  P nds_,ss_;
  P skipF813;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(nds_, 0);
  ARG(ss_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),ss_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_skip_21,6);
    skipF813 = T3;
    FUNINIT(skipF813, 6,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),nds_,skipF813);
    T4 = CALL2(0,skipF813,FREEREF(5),FREEREF(6));
    T2 = T4;
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),ss_);
    CALL3(1,VARREF(YprotoScollectionsScollectionYnow_elt_setter),T5,FREEREF(3),nds_);
    T7 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(3),nds_);
    T8 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),ss_);
    a1 = T7;
    a2 = T8;
    nds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_23) {
  P nds_,ds_,i_;
  P insertF814;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(nds_, 0);
  ARG(ds_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_insert_22,8);
    insertF814 = T3;
    FUNINIT(insertF814, 8,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),ds_,FREEREF(0),insertF814);
    T5 = CALL1(1,VARREF(YmacrosYini_state),FREEREF(1));
    T4 = CALL2(0,insertF814,nds_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(5),ds_);
    CALL3(1,VARREF(YprotoScollectionsScollectionYnow_elt_setter),T6,FREEREF(4),nds_);
    T8 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(4),nds_);
    T9 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(5),ds_);
    T10 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    a3 = T10;
    nds_ = a1;
    ds_ = a2;
    i_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_setter_24) {
  P src_,dst_,from_,below_;
  P copyF821;
  P ndstF820;
  P new_lenF819;
  P findF818;
  P del_lenF817;
  P src_lenF816;
  P dst_lenF815;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),dst_);
  check_type(T1,VARREF(YLintG));
  dst_lenF815 = T1;
  T3 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),src_);
  check_type(T3,VARREF(YLintG));
  src_lenF816 = T3;
  T5 = CALL2(1,VARREF(YprotoSmathY_),below_,from_);
  check_type(T5,VARREF(YLintG));
  del_lenF817 = T5;
  T7 = CALL2(1,VARREF(YprotoSmathYE),del_lenF817,src_lenF816);
  if (T7 != YPfalse) {
    T9 = FUNSHELL(1,fun_find_19,4);
    findF818 = T9;
    FUNINIT(findF818, 4,from_,src_,dst_,findF818);
    T11 = CALL1(1,VARREF(YmacrosYini_state),dst_);
    T10 = CALL2(0,findF818,T11,YPint((P)0));
    T8 = T10;
    T6 = T8;
  } else {
    T14 = CALL2(1,VARREF(YprotoSmathY_),dst_lenF815,del_lenF817);
    T13 = CALL2(1,VARREF(YprotoSmathYA),T14,src_lenF816);
    new_lenF819 = T13;
    T17 = CALL1(1,VARREF(Yobject_class),dst_);
    T16 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),T17,new_lenF819);
    ndstF820 = T16;
    T19 = FUNSHELL(1,fun_copy_23,7);
    copyF821 = T19;
    FUNINIT(copyF821, 7,from_,src_,below_,dst_lenF815,ndstF820,dst_,copyF821);
    T21 = CALL1(1,VARREF(YmacrosYini_state),ndstF820);
    T22 = CALL1(1,VARREF(YmacrosYini_state),dst_);
    T20 = CALL3(0,copyF821,T21,T22,YPint((P)0));
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

FUNCODEDEF(fun_con_25) {
  P seq_,sta_;
  P eF822;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sta_);
    eF822 = T4;
    T7 = CALL1(1,FREEREF(2),eF822);
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),seq_,eF822);
      T6 = T8;
    } else {
      T6 = seq_;
    }
    T9 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sta_);
    a1 = T6;
    a2 = T9;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pick_26) {
  P test_,x_;
  P conF823;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_25,3);
  conF823 = T1;
  FUNINIT(conF823, 3,x_,conF823,test_);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T2 = CALL2(0,conF823,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_27) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYNEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_28) {
  P s_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_27,1,x_);
  T0 = CALL2(1,VARREF(YprotoScollectionsSsequenceYpick),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_29) {
  P s_,e_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = CALL2(1,VARREF(YmacrosYpair),e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_dups_30) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = fun_29;
  T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYreduce),T3,Ynil,x_);
  T1 = CALL1(1,VARREF(YmacrosYrevX),T2);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_31) {
  P d_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),d_);
  T0 = CALL2(1,VARREF(YprotoScollectionsSsequenceYfrom_below),YPint((P)0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoScollectionsSsequenceYrange_error) {
  P x_,i_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T0 = CALL3(1,VARREF(Yerror),LITREF(lit_54),x_,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoScollectionsSsequenceYrange_check) {
  P x_,i_;
  P tmpF824;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YprotoSmathYL),i_,YPint((P)0));
  tmpF824 = T2;
  if (tmpF824 != YPfalse) {
    T3 = tmpF824;
  } else {
    T5 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
    T4 = CALL2(1,VARREF(YprotoSmathYGE),i_,T5);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YprotoScollectionsSsequenceYrange_error),x_,i_);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoScollectionsSsequenceYrange_checkQ) {
  P x_,i_;
  P tmpF825;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYGE),i_,YPint((P)0));
  tmpF825 = T1;
  if (tmpF825 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
    T3 = CALL2(1,VARREF(YprotoSmathYL),i_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_new_35) {
  P c_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),c_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_addX_36) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_37) {
  P ds_,ss_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),ds_);
  if (T2 != YPfalse) {
    T1 = YPtrue;
  } else {
    T3 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),ss_);
    T1 = T3;
  }
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),ss_);
    CALL3(1,VARREF(YprotoScollectionsScollectionYnow_elt_setter),T4,FREEREF(0),ds_);
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),ds_);
    T7 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),ss_);
    a1 = T6;
    a2 = T7;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_into_38) {
  P dst_,src_,from_,below_;
  P inF826;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = FUNSHELL(1,fun_in_37,3);
  inF826 = T1;
  FUNINIT(inF826, 3,dst_,src_,inF826);
  T3 = CALL1(1,VARREF(YmacrosYini_state),dst_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),src_);
  T2 = CALL2(0,inF826,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_39) {
  P s_,e_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T2 = CALL1(1,VARREF(YmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_59);
  } else {
    T1 = LITREF(lit_60);
  }
  T3 = CALL1(1,VARREF(YprotoSmathYto_str),e_);
  T0 = CALL3(1,VARREF(YmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_40) {
  P s_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = fun_39;
  T0 = CALL3(1,VARREF(YprotoScollectionsScollectionYreduce),T1,LITREF(lit_59),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rep_41) {
  P s_;
  P valF829;
  P nxtsF828;
  P keyF827;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),s_);
    keyF827 = T4;
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s_);
    nxtsF828 = T6;
    T9 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
    if (T9 != YPfalse) {
      T8 = YPfalse;
    } else {
      T10 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),nxtsF828);
      T8 = T10;
    }
    valF829 = T8;
    CALL2(1,FREEREF(1),keyF827,valF829);
    T12 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),nxtsF828);
    a1 = T12;
    s_ = a1;
    goto loop;
    T7 = T11;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_key_vals_42) {
  P fn_,key_vals_;
  P repF830;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_rep_41,3);
  repF830 = T1;
  FUNINIT(repF830, 3,key_vals_,fn_,repF830);
  T3 = CALL1(1,VARREF(YmacrosYini_state),key_vals_);
  T2 = CALL1(0,repF830,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YprotoScollectionsSsequenceY___main_0___() {
  P T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109;
  P T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93;
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"add");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPPsym((P)"y");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_0),T1,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYadd,T0);
  lit_3 = YPPsym((P)"1st");
  T3 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_3),T3,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceY1st,T2);
  lit_4 = YPPsym((P)"2nd");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_4),T5,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceY2nd,T4);
  lit_5 = YPPsym((P)"3rd");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_5),T7,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceY3rd,T6);
  lit_6 = YPPsym((P)"last");
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_6),T9,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYlast,T8);
  lit_7 = YPPsym((P)"pos");
  lit_8 = YPPsym((P)"v");
  T11 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_7),T11,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYpos,T10);
  lit_9 = YPPsym((P)"rev");
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T12 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_9),T13,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYrev,T12);
  lit_10 = YPPsym((P)"rev!");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T14 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_10),T15,Ynil,YPfalse);
  VARSET(YmacrosYrevX,T14);
  lit_11 = YPPsym((P)"cat");
  lit_12 = YPPsym((P)"more");
  T17 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T16 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_11),T17,Ynil,YPfalse);
  VARSET(YmacrosYcat,T16);
  lit_13 = YPPsym((P)"cat!");
  T19 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T18 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_13),T19,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYcatX,T18);
  lit_14 = YPPsym((P)"cat2");
  T21 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T20 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_14),T21,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYcat2,T20);
  lit_15 = YPPsym((P)"sub");
  lit_16 = YPPsym((P)"from");
  lit_17 = YPPsym((P)"below");
  T23 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_16),LITREF(lit_17)),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T22 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_15),T23,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYsub,T22);
  lit_18 = YPPsym((P)"sub-setter");
  lit_19 = YPPsym((P)"dst");
  lit_20 = YPPsym((P)"src");
  T25 = YPsig(YPPlist(4,LITREF(lit_19),LITREF(lit_20),LITREF(lit_16),LITREF(lit_17)),YPPlist(4,VARREF(YLseqG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T24 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_18),T25,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYsub_setter,T24);
  lit_21 = YPPsym((P)"pick");
  lit_22 = YPPsym((P)"test");
  T27 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T26 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_21),T27,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYpick,T26);
  lit_23 = YPPsym((P)"del");
  T29 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T28 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_23),T29,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYdel,T28);
  lit_24 = YPPsym((P)"del-dups");
  T31 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T30 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_24),T31,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYdel_dups,T30);
  lit_25 = YPPsym((P)"vals-to-str");
  lit_26 = YPPsym((P)"s");
  T33 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T32 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_25),T33,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYvals_to_str,T32);
  lit_27 = YPPsym((P)"add!");
  lit_28 = YPPsym((P)"c");
  T35 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T34 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_27),T35,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYaddX,T34);
  lit_29 = YPPsym((P)"do-key-vals");
  lit_30 = YPPsym((P)"fn");
  lit_31 = YPPsym((P)"key-vals");
  T37 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T36 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_29),T37,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYdo_key_vals,T36);
  lit_32 = YPPsym((P)"as");
  lit_33 = YPPsym((P)"d");
  T39 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLseqG));
  T38 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_26)),YPPlist(2,T39,VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_32),T38,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YprotoStypesYas);
  if (T42 != YPfalse) {
    T41 = VARREF(YprotoStypesYas);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_as_0;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YprotoStypesYas,T40);
  lit_34 = YPPsym((P)"alter");
  lit_35 = YPPsym((P)"in");
  lit_36 = YPPsym((P)"ds");
  lit_37 = YPPsym((P)"ss");
  T45 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_37)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_1 = YPmet(FUNCODEREF(fun_in_1),LITREF(lit_35),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_20)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_alter_2 = YPmet(FUNCODEREF(fun_alter_2),LITREF(lit_34),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YprotoScollectionsScollectionYalter);
  if (T48 != YPfalse) {
    T47 = VARREF(YprotoScollectionsScollectionYalter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_alter_2;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YprotoScollectionsScollectionYalter,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1st_3 = YPmet(FUNCODEREF(fun_1st_3),LITREF(lit_3),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YprotoScollectionsSsequenceY1st);
  if (T53 != YPfalse) {
    T52 = VARREF(YprotoScollectionsSsequenceY1st);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_1st_3;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YprotoScollectionsSsequenceY1st,T51);
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_4 = YPmet(FUNCODEREF(fun_2nd_4),LITREF(lit_4),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YprotoScollectionsSsequenceY2nd);
  if (T58 != YPfalse) {
    T57 = VARREF(YprotoScollectionsSsequenceY2nd);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_2nd_4;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YprotoScollectionsSsequenceY2nd,T56);
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3rd_5 = YPmet(FUNCODEREF(fun_3rd_5),LITREF(lit_5),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YprotoScollectionsSsequenceY3rd);
  if (T63 != YPfalse) {
    T62 = VARREF(YprotoScollectionsSsequenceY3rd);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_3rd_5;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YprotoScollectionsSsequenceY3rd,T61);
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_6 = YPmet(FUNCODEREF(fun_last_6),LITREF(lit_6),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YprotoScollectionsSsequenceYlast);
  if (T68 != YPfalse) {
    T67 = VARREF(YprotoScollectionsSsequenceYlast);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_last_6;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YprotoScollectionsSsequenceYlast,T66);
  lit_38 = YPPsym((P)"a");
  T71 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pos_8 = YPmet(FUNCODEREF(fun_pos_8),LITREF(lit_7),T70,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YprotoScollectionsSsequenceYpos);
  if (T74 != YPfalse) {
    T73 = VARREF(YprotoScollectionsSsequenceYpos);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_pos_8;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YprotoScollectionsSsequenceYpos,T72);
  lit_39 = YPPsym((P)"con");
  lit_40 = YPPsym((P)"seq");
  lit_41 = YPPsym((P)"sta");
  T77 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_9 = YPmet(FUNCODEREF(fun_con_9),LITREF(lit_39),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_rev_10 = YPmet(FUNCODEREF(fun_rev_10),LITREF(lit_9),T76,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YprotoScollectionsSsequenceYrev);
  if (T80 != YPfalse) {
    T79 = VARREF(YprotoScollectionsSsequenceYrev);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_rev_10;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YprotoScollectionsSsequenceYrev,T78);
  T82 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_37)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_cat_11 = YPmet(FUNCODEREF(fun_cat_11),LITREF(lit_11),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YmacrosYcat);
  if (T85 != YPfalse) {
    T84 = VARREF(YmacrosYcat);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_cat_11;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YmacrosYcat,T83);
  T87 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_12)),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_catX_12 = YPmet(FUNCODEREF(fun_catX_12),LITREF(lit_13),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YprotoScollectionsSsequenceYcatX);
  if (T90 != YPfalse) {
    T89 = VARREF(YprotoScollectionsSsequenceYcatX);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_catX_12;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YprotoScollectionsSsequenceYcatX,T88);
  lit_42 = YPPsym((P)"con-x");
  lit_43 = YPPsym((P)"con-y");
  T94 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_y_13 = YPmet(FUNCODEREF(fun_con_y_13),LITREF(lit_43),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_x_14 = YPmet(FUNCODEREF(fun_con_x_14),LITREF(lit_42),T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_cat2_15 = YPmet(FUNCODEREF(fun_cat2_15),LITREF(lit_14),T92,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YprotoScollectionsSsequenceYcat2);
  if (T97 != YPfalse) {
    T96 = VARREF(YprotoScollectionsSsequenceYcat2);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_cat2_15;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YprotoScollectionsSsequenceYcat2,T95);
  lit_44 = YPPsym((P)"i");
  T100 = YPsig(YPPlist(3,LITREF(lit_40),LITREF(lit_44),LITREF(lit_41)),YPPlist(3,VARREF(YLanyG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_x_16 = YPmet(FUNCODEREF(fun_con_x_16),LITREF(lit_42),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_16),LITREF(lit_17)),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_sub_17 = YPmet(FUNCODEREF(fun_sub_17),LITREF(lit_15),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YprotoScollectionsSsequenceYsub);
  if (T103 != YPfalse) {
    T102 = VARREF(YprotoScollectionsSsequenceYsub);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sub_17;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YprotoScollectionsSsequenceYsub,T101);
  lit_45 = YPPsym((P)"find");
  lit_46 = YPPsym((P)"copy");
  lit_47 = YPPsym((P)"nds");
  lit_48 = YPPsym((P)"insert");
  lit_49 = YPPsym((P)"skip");
  lit_50 = YPPsym((P)"onto");
  T119 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_37)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T118 = fun_in_18 = YPmet(FUNCODEREF(fun_in_18),LITREF(lit_35),T119,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T116 = fun_find_19 = YPmet(FUNCODEREF(fun_find_19),LITREF(lit_45),T117,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(3,LITREF(lit_47),LITREF(lit_36),LITREF(lit_44)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T114 = fun_onto_20 = YPmet(FUNCODEREF(fun_onto_20),LITREF(lit_50),T115,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T112 = fun_skip_21 = YPmet(FUNCODEREF(fun_skip_21),LITREF(lit_49),T113,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_37)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T110 = fun_insert_22 = YPmet(FUNCODEREF(fun_insert_22),LITREF(lit_48),T111,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(3,LITREF(lit_47),LITREF(lit_36),LITREF(lit_44)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T108 = fun_copy_23 = YPmet(FUNCODEREF(fun_copy_23),LITREF(lit_46),T109,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(4,LITREF(lit_20),LITREF(lit_19),LITREF(lit_16),LITREF(lit_17)),YPPlist(4,VARREF(YLseqG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqG),Ynil);
  T106 = fun_sub_setter_24 = YPmet(FUNCODEREF(fun_sub_setter_24),LITREF(lit_18),T107,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YprotoScollectionsSsequenceYsub_setter);
  if (T123 != YPfalse) {
    T122 = VARREF(YprotoScollectionsSsequenceYsub_setter);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sub_setter_24;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  T120 = VARSET(YprotoScollectionsSsequenceYsub_setter,T121);
  T105 = T120;
  return T105;
}

P YprotoScollectionsSsequenceY___main_1___() {
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T1 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_25 = YPmet(FUNCODEREF(fun_con_25),LITREF(lit_39),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_pick_26 = YPmet(FUNCODEREF(fun_pick_26),LITREF(lit_21),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YprotoScollectionsSsequenceYpick);
  if (T4 != YPfalse) {
    T3 = VARREF(YprotoScollectionsSsequenceYpick);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_pick_26;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YprotoScollectionsSsequenceYpick,T2);
  lit_51 = YPPsym((P)"e");
  T7 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_28 = YPmet(FUNCODEREF(fun_del_28),LITREF(lit_23),T6,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YprotoScollectionsSsequenceYdel);
  if (T10 != YPfalse) {
    T9 = VARREF(YprotoScollectionsSsequenceYdel);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_del_28;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YprotoScollectionsSsequenceYdel,T8);
  T13 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_51)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_del_dups_30 = YPmet(FUNCODEREF(fun_del_dups_30),LITREF(lit_24),T12,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YprotoScollectionsSsequenceYdel_dups);
  if (T16 != YPfalse) {
    T15 = VARREF(YprotoScollectionsSsequenceYdel_dups);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_del_dups_30;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YprotoScollectionsSsequenceYdel_dups,T14);
  lit_52 = YPPsym((P)"keys");
  T18 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_31 = YPmet(FUNCODEREF(fun_keys_31),LITREF(lit_52),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YprotoScollectionsScollectionYkeys);
  if (T21 != YPfalse) {
    T20 = VARREF(YprotoScollectionsScollectionYkeys);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_keys_31;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YprotoScollectionsScollectionYkeys,T19);
  lit_53 = YPPsym((P)"range-error");
  lit_54 = YPsb((P)"RANGE ERROR %= %=");
  T23 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_44)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YprotoScollectionsSsequenceYrange_error = YPmet(FUNCODEREF(YprotoScollectionsSsequenceYrange_error),LITREF(lit_53),T23,ENVNUL,PNUL,YPfalse);
  T24 = YprotoScollectionsSsequenceYrange_error;
  VARSET(YprotoScollectionsSsequenceYrange_error,T24);
  lit_55 = YPPsym((P)"range-check");
  T25 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_44)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YprotoScollectionsSsequenceYrange_check = YPmet(FUNCODEREF(YprotoScollectionsSsequenceYrange_check),LITREF(lit_55),T25,ENVNUL,PNUL,YPfalse);
  T26 = YprotoScollectionsSsequenceYrange_check;
  VARSET(YprotoScollectionsSsequenceYrange_check,T26);
  lit_56 = YPPsym((P)"range-check?");
  T27 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_44)),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YprotoScollectionsSsequenceYrange_checkQ = YPmet(FUNCODEREF(YprotoScollectionsSsequenceYrange_checkQ),LITREF(lit_56),T27,ENVNUL,PNUL,YPfalse);
  T28 = YprotoScollectionsSsequenceYrange_checkQ;
  VARSET(YprotoScollectionsSsequenceYrange_checkQ,T28);
  lit_57 = YPPsym((P)"add-new");
  T29 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_35 = YPmet(FUNCODEREF(fun_add_new_35),LITREF(lit_57),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YprotoScollectionsSsequenceYadd_new);
  if (T32 != YPfalse) {
    T31 = VARREF(YprotoScollectionsSsequenceYadd_new);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_add_new_35;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YprotoScollectionsSsequenceYadd_new,T30);
  T34 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_addX_36 = YPmet(FUNCODEREF(fun_addX_36),LITREF(lit_27),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YprotoScollectionsSsequenceYaddX);
  if (T37 != YPfalse) {
    T36 = VARREF(YprotoScollectionsSsequenceYaddX);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_addX_36;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YprotoScollectionsSsequenceYaddX,T35);
  lit_58 = YPPsym((P)"into");
  T40 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_37)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_37 = YPmet(FUNCODEREF(fun_in_37),LITREF(lit_35),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(4,LITREF(lit_19),LITREF(lit_20),LITREF(lit_16),LITREF(lit_17)),YPPlist(4,VARREF(YLseqG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqG),Ynil);
  fun_into_38 = YPmet(FUNCODEREF(fun_into_38),LITREF(lit_58),T39,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YprotoScollectionsScollectionYinto);
  if (T43 != YPfalse) {
    T42 = VARREF(YprotoScollectionsScollectionYinto);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_into_38;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YprotoScollectionsScollectionYinto,T41);
  lit_59 = YPsb((P)"");
  lit_60 = YPsb((P)" ");
  T46 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_51)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_40 = YPmet(FUNCODEREF(fun_vals_to_str_40),LITREF(lit_25),T45,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YprotoScollectionsSsequenceYvals_to_str);
  if (T49 != YPfalse) {
    T48 = VARREF(YprotoScollectionsSsequenceYvals_to_str);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_vals_to_str_40;
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YprotoScollectionsSsequenceYvals_to_str,T47);
  lit_61 = YPPsym((P)"rep");
  T52 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_rep_41 = YPmet(FUNCODEREF(fun_rep_41),LITREF(lit_61),T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_42 = YPmet(FUNCODEREF(fun_do_key_vals_42),LITREF(lit_29),T51,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YprotoScollectionsSsequenceYdo_key_vals);
  if (T55 != YPfalse) {
    T54 = VARREF(YprotoScollectionsSsequenceYdo_key_vals);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_do_key_vals_42;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YprotoScollectionsSsequenceYdo_key_vals,T53);
  if (YPfalse != YPfalse) {
  } else {
  }
  T57 = YPfalse;
  return T57;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollectionsScollection;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoSmath},
  {&module_info_protoStypes},
  {&module_info_protoScollectionsScollection},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
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
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"%fi2f", &module_info_boot, "%fi2f"},
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
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
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
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
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
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
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
  {"last", &YprotoScollectionsSsequenceYlast},
  {"sub", &YprotoScollectionsSsequenceYsub},
  {"---main-1---", NULL},
  {"add-new", &YprotoScollectionsSsequenceYadd_new},
  {"cat2", &YprotoScollectionsSsequenceYcat2},
  {"pos", &YprotoScollectionsSsequenceYpos},
  {"do-key-vals", &YprotoScollectionsSsequenceYdo_key_vals},
  {"range-check?", &YprotoScollectionsSsequenceYrange_checkQ},
  {"cat!", &YprotoScollectionsSsequenceYcatX},
  {"range-check", &YprotoScollectionsSsequenceYrange_check},
  {"add!", &YprotoScollectionsSsequenceYaddX},
  {"---main-0---", NULL},
  {"range-error", &YprotoScollectionsSsequenceYrange_error},
  {"vals-to-str", &YprotoScollectionsSsequenceYvals_to_str},
  {"del-dups", &YprotoScollectionsSsequenceYdel_dups},
  {"rev", &YprotoScollectionsSsequenceYrev},
  {"del", &YprotoScollectionsSsequenceYdel},
  {"pick", &YprotoScollectionsSsequenceYpick},
  {"3rd", &YprotoScollectionsSsequenceY3rd},
  {"from-below", &YprotoScollectionsSsequenceYfrom_below},
  {"2nd", &YprotoScollectionsSsequenceY2nd},
  {"sub-setter", &YprotoScollectionsSsequenceYsub_setter},
  {"1st", &YprotoScollectionsSsequenceY1st},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sub", "sub"},
  {"add", "add"},
  {"cat2", "cat2"},
  {"pos", "pos"},
  {"do-key-vals", "do-key-vals"},
  {"range-check?", "range-check?"},
  {"cat!", "cat!"},
  {"range-check", "range-check"},
  {"add!", "add!"},
  {"<seq>", "<seq>"},
  {"cat", "cat"},
  {"range-error", "range-error"},
  {"vals-to-str", "vals-to-str"},
  {"del-dups", "del-dups"},
  {"rev", "rev"},
  {"del", "del"},
  {"pick", "pick"},
  {"last", "last"},
  {"3rd", "3rd"},
  {"from-below", "from-below"},
  {"rev!", "rev!"},
  {"2nd", "2nd"},
  {"sub-setter", "sub-setter"},
  {"1st", "1st"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsSsequence;
MODULE_INFO module_info_protoScollectionsSsequence = {
  "proto/collections/sequence",
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

/* EXPRESSION: */

extern void load_module_protoScollectionsSsequence (void);

void load_module_protoScollectionsSsequence (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoSmath();
  load_module_protoStypes();
  load_module_protoScollectionsScollection();

  (P)YprotoScollectionsSsequenceY___main_0___();
  (P)YprotoScollectionsSsequenceY___main_1___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
