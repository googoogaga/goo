/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/list */

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
DEF(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
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
DEF(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
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
DEF(YprotoScollectionsSlistYlist,"proto/collections/list","list");
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
DEF(YprotoScollectionsSlistYpush,"proto/collections/list","push");
DEF(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
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
DEF(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_17);
DEFLIT(lit_31);
DEFLIT(lit_10);
DEFLIT(lit_39);
DEFLIT(lit_13);
DEFLIT(lit_42);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_34);
DEFLIT(lit_48);
DEFLIT(lit_20);
DEFLIT(lit_46);
DEFLIT(lit_33);
DEFLIT(lit_57);
DEFLIT(lit_26);
DEFLIT(lit_14);
DEFLIT(lit_18);
DEFLIT(lit_50);
DEFLIT(lit_51);
DEFLIT(lit_49);
DEFLIT(lit_25);
DEFLIT(lit_37);
DEFLIT(lit_53);
DEFLIT(lit_2);
DEFLIT(lit_38);
DEFLIT(lit_43);
DEFLIT(lit_11);
DEFLIT(lit_19);
DEFLIT(lit_15);
DEFLIT(lit_9);
DEFLIT(lit_47);
DEFLIT(lit_5);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_6);
DEFLIT(lit_28);
DEFLIT(lit_21);
DEFLIT(lit_32);
DEFLIT(lit_29);
DEFLIT(lit_44);
DEFLIT(lit_56);
DEFLIT(lit_4);
DEFLIT(lit_41);
DEFLIT(lit_22);
DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_12);
DEFLIT(lit_35);
DEFLIT(lit_54);
DEFLIT(lit_24);
DEFLIT(lit_0);
DEFLIT(lit_23);
DEFLIT(lit_45);
DEFLIT(lit_30);
DEFLIT(lit_40);
DEFLIT(lit_55);
DEFLIT(lit_36);
DEFLIT(lit_52);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_sum_1);
LOCFOR(fun_len_2);
LOCFOR(fun_fnd_3);
LOCFOR(fun_elt_4);
LOCFOR(fun_fnd_5);
LOCFOR(fun_elt_setter_6);
LOCFOR(fun_emptyQ_7);
LOCFOR(fun_empty_8);
LOCFOR(fun_fab_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_build_11);
LOCFOR(fun_fabs_12);
LOCFOR(fun_ini_state_13);
LOCFOR(fun_fin_stateQ_14);
LOCFOR(fun_nxt_state_15);
LOCFOR(fun_now_elt_16);
LOCFOR(fun_now_elt_setter_17);
LOCFOR(fun_fnd_18);
LOCFOR(fun_now_key_19);
LOCFOR(fun_copy_state_20);
LOCFOR(fun_add_21);
LOCFOR(fun_fnd_22);
LOCFOR(fun_last_23);
LOCFOR(fun_loop_24);
LOCFOR(fun_revX_25);
LOCFOR(fun_find_tail_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1253_28);
LOCFOR(fun_catX_29);
LOCFOR(fun_lst_30);
LOCFOR(fun_pair_31);
LOCFOR(fun_push_32);
LOCFOR(fun_pop_33);
LOCFOR(fun_to_str_34);
LOCFOR(fun_assq_35);
LOCFOR(fun_assqn_36);
extern P YprotoScollectionsSlistY___main_0___ ();

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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = count_;
  } else {
    T3 = CALL2(1,VARREF(YprotoSmathYA),count_,YPint((P)1));
    T4 = CALL1(1,VARREF(Ytail),x_);
    a1 = T3;
    a2 = T4;
    count_ = a1;
    x_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_2) {
  P x_;
  P sumF847;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_1,1);
  sumF847 = T1;
  FUNINIT(sumF847, 1,sumF847);
  T2 = CALL2(1,sumF847,YPint((P)0),x_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = CALL2(1,VARREF(YmacrosYEE),count_,FREEREF(0));
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(Yhead),x_);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YprotoSmathYA),count_,YPint((P)1));
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
  QRET(T0);
}

FUNCODEDEF(fun_elt_4) {
  P x_,key_;
  P fndF848;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_3,2);
  fndF848 = T1;
  FUNINIT(fndF848, 2,key_,fndF848);
  T2 = CALL2(1,fndF848,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_5) {
  P count_,x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = CALL2(1,VARREF(YmacrosYEE),count_,FREEREF(0));
    if (T3 != YPfalse) {
      T4 = CALL2(1,VARREF(Yhead_setter),FREEREF(1),x_);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YprotoSmathYA),count_,YPint((P)1));
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
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_6) {
  P z_,x_,key_;
  P fndF849;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_5,3);
  fndF849 = T1;
  FUNINIT(fndF849, 3,key_,z_,fndF849);
  T2 = CALL2(1,fndF849,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_7) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(Yobject_class),c_);
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),T2);
  T0 = CALL2(1,VARREF(YmacrosYEE),c_,T1);
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
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(res_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYG),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YprotoSmathY_),i_,YPint((P)1));
    T5 = (P)YPpair(VARREF(Ytail),Ynil);
    T6 = (P)YPpair(res_,Ynil);
    T4 = CALL3(1,VARREF(YPisa),FREEREF(1),T5,T6);
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
  QRET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P t_,s_;
  P fabF850;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_9,2);
  fabF850 = T1;
  FUNINIT(fabF850, 2,fabF850,t_);
  T3 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),t_);
  T2 = CALL2(1,fabF850,s_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_11) {
  P index_,result_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(index_, 0);
  ARG(result_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYL),index_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = result_;
  } else {
    T3 = CALL2(1,VARREF(YprotoSmathY_),index_,YPint((P)1));
    T6 = (P)YPpair(VARREF(Ytail),Ynil);
    T5 = (P)YPpair(VARREF(Yhead),T6);
    T8 = CALL2(1,VARREF(YmacrosYelt),FREEREF(2),index_);
    T9 = (P)YPpair(result_,Ynil);
    T7 = (P)YPpair(T8,T9);
    T4 = CALL3(1,VARREF(YPisa),FREEREF(1),T5,T7);
    a1 = T3;
    a2 = T4;
    index_ = a1;
    result_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fabs_12) {
  P c_,objects_;
  P buildF851;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_11,3);
  buildF851 = T1;
  FUNINIT(buildF851, 3,buildF851,c_,objects_);
  T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),objects_);
  T3 = CALL2(1,VARREF(YprotoSmathY_),T4,YPint((P)1));
  T5 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),c_);
  T2 = CALL2(1,buildF851,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ini_state_13) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fin_stateQ_14) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL1(1,VARREF(YmacrosYemptyQ),state_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_15) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL1(1,VARREF(Ytail),state_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_elt_16) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL1(1,VARREF(Yhead),state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_17) {
  P z_,U_,state_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(U_, 1);
  ARG(state_, 2);
loop:
  T0 = CALL2(1,VARREF(Yhead_setter),z_,state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_18) {
  P key_,c_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(key_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYEE),c_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = key_;
  } else {
    T3 = CALL2(1,VARREF(YprotoSmathYA),key_,YPint((P)1));
    T4 = CALL1(1,VARREF(Ytail),c_);
    a1 = T3;
    a2 = T4;
    key_ = a1;
    c_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_19) {
  P c_,state_;
  P fndF852;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_18,2);
  fndF852 = T1;
  FUNINIT(fndF852, 2,state_,fndF852);
  T2 = CALL2(1,fndF852,YPint((P)0),c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_state_20) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

FUNCODEDEF(fun_add_21) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_22) {
  P x_,px_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(px_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),x_);
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
  QRET(T0);
}

FUNCODEDEF(fun_last_23) {
  P x_;
  P fndF853;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_22,1);
  fndF853 = T1;
  FUNINIT(fndF853, 1,fndF853);
  T2 = CALL2(0,fndF853,x_,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_24) {
  P l_,r_;
  P tF854;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T3 = CALL1(1,VARREF(Ytail),l_);
    tF854 = T3;
    CALL2(1,VARREF(Ytail_setter),r_,l_);
    a1 = tF854;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_revX_25) {
  P c_;
  P loopF855;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_24,1);
  loopF855 = T1;
  FUNINIT(loopF855, 1,loopF855);
  T4 = CALL1(1,VARREF(Yobject_class),c_);
  T3 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),T4);
  T2 = CALL2(0,loopF855,c_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_tail_26) {
  P p_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),p_);
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),T2);
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
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P x_,y_;
  P find_tailF856;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    T3 = FUNSHELL(1,fun_find_tail_26,1);
    find_tailF856 = T3;
    FUNINIT(find_tailF856, 1,find_tailF856);
    T4 = CALL1(1,find_tailF856,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1253_28) {
  P x_1251_;
  P xF857;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1251_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1251_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1251_);
    xF857 = T4;
    T6 = BOXVAL(FREEREF(1));
    T7 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLlstG),xF857);
    T5 = CALL2(1,FREEREF(2),T6,T7);
    BOXVAL(FREEREF(1)) = T5;
    T9 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1251_);
    a1 = T9;
    x_1251_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_29) {
  P x_,more_;
  P x_1253F862;
  P x_1252F861;
  P curF860;
  P resultF859;
  P connectF858;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_27;
  connectF858 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF859 = T3;
  curF860 = resultF859;
  curF860 = BOXFAB(curF860);
  T7 = BOXVAL(curF860);
  T8 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF858,T7,T8);
  BOXVAL(curF860) = T6;
  x_1252F861 = more_;
  T10 = FUNSHELL(1,fun_x_1253_28,4);
  x_1253F862 = T10;
  FUNINIT(x_1253F862, 4,x_1252F861,curF860,connectF858,x_1253F862);
  T12 = CALL1(1,VARREF(YmacrosYini_state),x_1252F861);
  T11 = CALL1(0,x_1253F862,T12);
  T9 = T11;
  T13 = CALL1(1,VARREF(Ytail),resultF859);
  T4 = T13;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lst_30) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALLN(1,VARREF(YmacrosYnapply),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pair_31) {
  P h_,t_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T2 = (P)YPpair(VARREF(Ytail),Ynil);
  T1 = (P)YPpair(VARREF(Yhead),T2);
  T4 = (P)YPpair(t_,Ynil);
  T3 = (P)YPpair(h_,T4);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YLlstG),T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_push_32) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_33) {
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

FUNCODEDEF(fun_to_str_34) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YmacrosYcat),LITREF(lit_56),T1,LITREF(lit_57));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assq_35) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YprotoScollectionsSlistYassq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assqn_36) {
  P x_,l_,pos_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL2(1,VARREF(YmacrosYelt),T5,pos_);
    T3 = CALL2(1,VARREF(YmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL3(1,VARREF(YprotoScollectionsSlistYassqn),x_,T8,pos_);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

P YprotoScollectionsSlistY___main_0___() {
  P T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144;
  P T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128;
  P T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112;
  P T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YprotoScollectionsSlistYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPsym((P)"elts");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_0),T1,Ynil,YPfalse);
  VARSET(Ylst,T0);
  VARSET(YprotoScollectionsSlistYlist,VARREF(Ylst));
  lit_2 = YPPsym((P)"pair");
  lit_3 = YPPsym((P)"x");
  lit_4 = YPPsym((P)"y");
  T3 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T2 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_2),T3,Ynil,YPfalse);
  VARSET(YmacrosYpair,T2);
  lit_5 = YPPsym((P)"push");
  lit_6 = YPPsym((P)"l");
  T5 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T4 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_5),T5,Ynil,YPfalse);
  VARSET(YprotoScollectionsSlistYpush,T4);
  lit_7 = YPPsym((P)"pop");
  T7 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  T6 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_7),T7,Ynil,YPfalse);
  VARSET(YprotoScollectionsSlistYpop,T6);
  lit_8 = YPPsym((P)"assqn");
  lit_9 = YPPsym((P)"pos");
  T9 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_9)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_8),T9,Ynil,YPfalse);
  VARSET(YprotoScollectionsSlistYassqn,T8);
  lit_10 = YPPsym((P)"assq");
  T11 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_10),T11,Ynil,YPfalse);
  VARSET(YprotoScollectionsSlistYassq,T10);
  lit_11 = YPPsym((P)"as");
  lit_12 = YPPsym((P)"p");
  T13 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T12 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_3)),YPPlist(2,T13,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YprotoStypesYas);
  if (T16 != YPfalse) {
    T15 = VARREF(YprotoStypesYas);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_as_0;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YprotoStypesYas,T14);
  lit_13 = YPPsym((P)"len");
  lit_14 = YPPsym((P)"sum");
  lit_15 = YPPsym((P)"count");
  T19 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sum_1 = YPmet(FUNCODEREF(fun_sum_1),LITREF(lit_14),T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YprotoScollectionsScollectionYlen);
  if (T22 != YPfalse) {
    T21 = VARREF(YprotoScollectionsScollectionYlen);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_len_2;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YprotoScollectionsScollectionYlen,T20);
  lit_16 = YPPsym((P)"elt");
  lit_17 = YPPsym((P)"key");
  lit_18 = YPPsym((P)"fnd");
  T25 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_3 = YPmet(FUNCODEREF(fun_fnd_3),LITREF(lit_18),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_17)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_4 = YPmet(FUNCODEREF(fun_elt_4),LITREF(lit_16),T24,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YmacrosYelt);
  if (T28 != YPfalse) {
    T27 = VARREF(YmacrosYelt);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_elt_4;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YmacrosYelt,T26);
  lit_19 = YPPsym((P)"elt-setter");
  lit_20 = YPPsym((P)"z");
  T31 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_5 = YPmet(FUNCODEREF(fun_fnd_5),LITREF(lit_18),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_3),LITREF(lit_17)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_6 = YPmet(FUNCODEREF(fun_elt_setter_6),LITREF(lit_19),T30,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YprotoScollectionsScollectionYelt_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YprotoScollectionsScollectionYelt_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_elt_setter_6;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YprotoScollectionsScollectionYelt_setter,T32);
  lit_21 = YPPsym((P)"empty?");
  lit_22 = YPPsym((P)"c");
  T36 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_7 = YPmet(FUNCODEREF(fun_emptyQ_7),LITREF(lit_21),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YmacrosYemptyQ);
  if (T39 != YPfalse) {
    T38 = VARREF(YmacrosYemptyQ);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_emptyQ_7;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YmacrosYemptyQ,T37);
  lit_23 = YPPsym((P)"empty");
  T42 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T41 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,T42),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_8 = YPmet(FUNCODEREF(fun_empty_8),LITREF(lit_23),T41,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T45 != YPfalse) {
    T44 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_empty_8;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YprotoScollectionsScollectionYempty,T43);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPsym((P)"t");
  lit_26 = YPPsym((P)"s");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"res");
  T49 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_28)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_9 = YPmet(FUNCODEREF(fun_fab_9),LITREF(lit_24),T49,ENVNUL,PNUL,YPfalse);
  T48 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T47 = YPsig(YPPlist(2,LITREF(lit_25),LITREF(lit_26)),YPPlist(2,T48,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_24),T47,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YprotoScollectionsScollectionYfab);
  if (T52 != YPfalse) {
    T51 = VARREF(YprotoScollectionsScollectionYfab);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_fab_10;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YprotoScollectionsScollectionYfab,T50);
  lit_29 = YPPsym((P)"fabs");
  lit_30 = YPPsym((P)"objects");
  lit_31 = YPPsym((P)"build");
  lit_32 = YPPsym((P)"index");
  lit_33 = YPPsym((P)"result");
  T56 = YPsig(YPPlist(2,LITREF(lit_32),LITREF(lit_33)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_build_11 = YPmet(FUNCODEREF(fun_build_11),LITREF(lit_31),T56,ENVNUL,PNUL,YPfalse);
  T55 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLlstG));
  T54 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_30)),YPPlist(1,T55),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fabs_12 = YPmet(FUNCODEREF(fun_fabs_12),LITREF(lit_29),T54,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YprotoSmathYfabs);
  if (T59 != YPfalse) {
    T58 = VARREF(YprotoSmathYfabs);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_fabs_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YprotoSmathYfabs,T57);
  lit_34 = YPPsym((P)"ini-state");
  T61 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_ini_state_13 = YPmet(FUNCODEREF(fun_ini_state_13),LITREF(lit_34),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YmacrosYini_state);
  if (T64 != YPfalse) {
    T63 = VARREF(YmacrosYini_state);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_ini_state_13;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YmacrosYini_state,T62);
  lit_35 = YPPsym((P)"fin-state?");
  lit_36 = YPPsym((P)"_");
  lit_37 = YPPsym((P)"state");
  T66 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_37)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_fin_stateQ_14 = YPmet(FUNCODEREF(fun_fin_stateQ_14),LITREF(lit_35),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YmacrosYfin_stateQ);
  if (T69 != YPfalse) {
    T68 = VARREF(YmacrosYfin_stateQ);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_fin_stateQ_14;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YmacrosYfin_stateQ,T67);
  lit_38 = YPPsym((P)"nxt-state");
  T71 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_37)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nxt_state_15 = YPmet(FUNCODEREF(fun_nxt_state_15),LITREF(lit_38),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YmacrosYnxt_state);
  if (T74 != YPfalse) {
    T73 = VARREF(YmacrosYnxt_state);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_nxt_state_15;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YmacrosYnxt_state,T72);
  lit_39 = YPPsym((P)"now-elt");
  T76 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_37)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_elt_16 = YPmet(FUNCODEREF(fun_now_elt_16),LITREF(lit_39),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YmacrosYnow_elt);
  if (T79 != YPfalse) {
    T78 = VARREF(YmacrosYnow_elt);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_now_elt_16;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YmacrosYnow_elt,T77);
  lit_40 = YPPsym((P)"now-elt-setter");
  T81 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_36),LITREF(lit_37)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_now_elt_setter_17 = YPmet(FUNCODEREF(fun_now_elt_setter_17),LITREF(lit_40),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YprotoScollectionsScollectionYnow_elt_setter);
  if (T84 != YPfalse) {
    T83 = VARREF(YprotoScollectionsScollectionYnow_elt_setter);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_now_elt_setter_17;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YprotoScollectionsScollectionYnow_elt_setter,T82);
  lit_41 = YPPsym((P)"now-key");
  T87 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_22)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_18 = YPmet(FUNCODEREF(fun_fnd_18),LITREF(lit_18),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_37)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_now_key_19 = YPmet(FUNCODEREF(fun_now_key_19),LITREF(lit_41),T86,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YprotoScollectionsScollectionYnow_key);
  if (T90 != YPfalse) {
    T89 = VARREF(YprotoScollectionsScollectionYnow_key);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_now_key_19;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YprotoScollectionsScollectionYnow_key,T88);
  lit_42 = YPPsym((P)"copy-state");
  T92 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_37)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_copy_state_20 = YPmet(FUNCODEREF(fun_copy_state_20),LITREF(lit_42),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YprotoScollectionsScollectionYcopy_state);
  if (T95 != YPfalse) {
    T94 = VARREF(YprotoScollectionsScollectionYcopy_state);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_copy_state_20;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YprotoScollectionsScollectionYcopy_state,T93);
  lit_43 = YPPsym((P)"add");
  T97 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_21 = YPmet(FUNCODEREF(fun_add_21),LITREF(lit_43),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YprotoScollectionsScollectionYadd);
  if (T100 != YPfalse) {
    T99 = VARREF(YprotoScollectionsScollectionYadd);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_add_21;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YprotoScollectionsScollectionYadd,T98);
  lit_44 = YPPsym((P)"last");
  lit_45 = YPPsym((P)"px");
  T103 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_22 = YPmet(FUNCODEREF(fun_fnd_22),LITREF(lit_18),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_23 = YPmet(FUNCODEREF(fun_last_23),LITREF(lit_44),T102,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YprotoScollectionsSsequenceYlast);
  if (T106 != YPfalse) {
    T105 = VARREF(YprotoScollectionsSsequenceYlast);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_last_23;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YprotoScollectionsSsequenceYlast,T104);
  lit_46 = YPPsym((P)"rev!");
  lit_47 = YPPsym((P)"loop");
  lit_48 = YPPsym((P)"r");
  T109 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_47),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_25 = YPmet(FUNCODEREF(fun_revX_25),LITREF(lit_46),T108,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YmacrosYrevX);
  if (T112 != YPfalse) {
    T111 = VARREF(YmacrosYrevX);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_revX_25;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YmacrosYrevX,T110);
  lit_49 = YPPsym((P)"cat!");
  lit_50 = YPPsym((P)"more");
  lit_51 = YPPsym((P)"find-tail");
  lit_52 = YPPsym((P)"x-1253");
  lit_53 = YPPsym((P)"x-1251");
  T117 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_tail_26 = YPmet(FUNCODEREF(fun_find_tail_26),LITREF(lit_51),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1253_28 = YPmet(FUNCODEREF(fun_x_1253_28),LITREF(lit_52),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_50)),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_29 = YPmet(FUNCODEREF(fun_catX_29),LITREF(lit_49),T114,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YprotoScollectionsSsequenceYcatX);
  if (T120 != YPfalse) {
    T119 = VARREF(YprotoScollectionsSsequenceYcatX);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_catX_29;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YprotoScollectionsSsequenceYcatX,T118);
  T122 = YPsig(YPPlist(1,LITREF(lit_30)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_lst_30 = YPmet(FUNCODEREF(fun_lst_30),LITREF(lit_0),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(Ylst);
  if (T125 != YPfalse) {
    T124 = VARREF(Ylst);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_lst_30;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(Ylst,T123);
  lit_54 = YPPsym((P)"h");
  T127 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pair_31 = YPmet(FUNCODEREF(fun_pair_31),LITREF(lit_2),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YmacrosYpair);
  if (T130 != YPfalse) {
    T129 = VARREF(YmacrosYpair);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_pair_31;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YmacrosYpair,T128);
  T132 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_push_32 = YPmet(FUNCODEREF(fun_push_32),LITREF(lit_5),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YprotoScollectionsSlistYpush);
  if (T135 != YPfalse) {
    T134 = VARREF(YprotoScollectionsSlistYpush);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_push_32;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YprotoScollectionsSlistYpush,T133);
  T137 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_pop_33 = YPmet(FUNCODEREF(fun_pop_33),LITREF(lit_7),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YprotoScollectionsSlistYpop);
  if (T140 != YPfalse) {
    T139 = VARREF(YprotoScollectionsSlistYpop);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_pop_33;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YprotoScollectionsSlistYpop,T138);
  lit_55 = YPPsym((P)"to-str");
  lit_56 = YPsb((P)"(");
  lit_57 = YPsb((P)")");
  T142 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_34 = YPmet(FUNCODEREF(fun_to_str_34),LITREF(lit_55),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YprotoSmathYto_str);
  if (T145 != YPfalse) {
    T144 = VARREF(YprotoSmathYto_str);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_to_str_34;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YprotoSmathYto_str,T143);
  T147 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_35 = YPmet(FUNCODEREF(fun_assq_35),LITREF(lit_10),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YprotoScollectionsSlistYassq);
  if (T150 != YPfalse) {
    T149 = VARREF(YprotoScollectionsSlistYassq);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_assq_35;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YprotoScollectionsSlistYassq,T148);
  T154 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_9)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T153 = fun_assqn_36 = YPmet(FUNCODEREF(fun_assqn_36),LITREF(lit_8),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YprotoScollectionsSlistYassqn);
  if (T158 != YPfalse) {
    T157 = VARREF(YprotoScollectionsSlistYassqn);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_assqn_36;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  T155 = VARSET(YprotoScollectionsSlistYassqn,T156);
  T152 = T155;
  return T152;
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
  {"<list>", &YprotoScollectionsSlistYLlistG},
  {"assqn", &YprotoScollectionsSlistYassqn},
  {"---main-0---", NULL},
  {"list", &YprotoScollectionsSlistYlist},
  {"push", &YprotoScollectionsSlistYpush},
  {"pop", &YprotoScollectionsSlistYpop},
  {"assq", &YprotoScollectionsSlistYassq},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<list>", "<list>"},
  {"assqn", "assqn"},
  {"head-setter", "head-setter"},
  {"pair", "pair"},
  {"head", "head"},
  {"<lst>", "<lst>"},
  {"tail-setter", "tail-setter"},
  {"tail", "tail"},
  {"lst", "lst"},
  {"list", "list"},
  {"nil", "nil"},
  {"push", "push"},
  {"pop", "pop"},
  {"assq", "assq"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsSlist;
MODULE_INFO module_info_protoScollectionsSlist = {
  "proto/collections/list",
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

extern void load_module_protoScollectionsSlist (void);

void load_module_protoScollectionsSlist (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoScollectionsScollection();
  load_module_protoScollectionsSsequence();

  (P)YprotoScollectionsSlistY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
