/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/collection */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
DEF(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
DEF(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
DEF(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
DEF(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(Ytype_object,"boot","type-object");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
DEF(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
DEF(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
DEF(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
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
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YPvnul,"boot","%vnul");
DEF(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
DEF(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YprotoSmathYG,"proto/math",">");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(Yhead_setter,"boot","head-setter");
DEF(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Yfind_getter,"boot","find-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoStypesYtA,"proto/types","t+");
DEF(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
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
DEF(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YDmax_int,"boot","$max-int");
DEF(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
DEF(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathY_,"proto/math","-");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoStypesYas,"proto/types","as");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YLcolG,"boot","<col>");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
EXT(YLtupG,"boot","<tup>");
DEF(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
DEF(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(YLsigG,"boot","<sig>");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoSmathYremainder,"proto/math","remainder");
DEF(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
DEF(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YprotoSmathYfloor,"proto/math","floor");
DEF(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
DEF(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
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
DEF(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
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
DEF(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YLslotG,"boot","<slot>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(Ynot,"boot","not");
DEF(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(Yfun_name,"boot","fun-name");
DEF(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
DEF(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YprotoSmathYmin,"proto/math","min");
DEF(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
DEF(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
DEF(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
DEF(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YLsingletonG,"boot","<singleton>");
EXT(Ytup,"boot","tup");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yadd_slot,"boot","add-slot");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
EXT(YisaQ,"boot","isa?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
DEF(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_27);
DEFLIT(lit_39);
DEFLIT(lit_66);
DEFLIT(lit_80);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_43);
DEFLIT(lit_77);
DEFLIT(lit_75);
DEFLIT(lit_29);
DEFLIT(lit_44);
DEFLIT(lit_1);
DEFLIT(lit_36);
DEFLIT(lit_54);
DEFLIT(lit_58);
DEFLIT(lit_81);
DEFLIT(lit_35);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_11);
DEFLIT(lit_74);
DEFLIT(lit_70);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_34);
DEFLIT(lit_78);
DEFLIT(lit_21);
DEFLIT(lit_50);
DEFLIT(lit_18);
DEFLIT(lit_57);
DEFLIT(lit_52);
DEFLIT(lit_19);
DEFLIT(lit_10);
DEFLIT(lit_38);
DEFLIT(lit_71);
DEFLIT(lit_82);
DEFLIT(lit_76);
DEFLIT(lit_53);
DEFLIT(lit_4);
DEFLIT(lit_24);
DEFLIT(lit_32);
DEFLIT(lit_67);
DEFLIT(lit_72);
DEFLIT(lit_65);
DEFLIT(lit_28);
DEFLIT(lit_25);
DEFLIT(lit_73);
DEFLIT(lit_0);
DEFLIT(lit_31);
DEFLIT(lit_16);
DEFLIT(lit_26);
DEFLIT(lit_2);
DEFLIT(lit_59);
DEFLIT(lit_69);
DEFLIT(lit_68);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_12);
DEFLIT(lit_56);
DEFLIT(lit_63);
DEFLIT(lit_17);
DEFLIT(lit_42);
DEFLIT(lit_47);
DEFLIT(lit_23);
DEFLIT(lit_62);
DEFLIT(lit_8);
DEFLIT(lit_13);
DEFLIT(lit_46);
DEFLIT(lit_60);
DEFLIT(lit_37);
DEFLIT(lit_9);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_7);
DEFLIT(lit_55);
DEFLIT(lit_61);
DEFLIT(lit_51);
DEFLIT(lit_41);
DEFLIT(lit_30);
DEFLIT(lit_64);
DEFLIT(lit_79);
DEFLIT(lit_22);
DEFLIT(lit_40);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_count_1);
LOCFOR(fun_len_2);
LOCFOR(fun_emptyQ_3);
LOCFOR(fun_empty_4);
LOCFOR(fun_default_5);
LOCFOR(fun_fabs_6);
LOCFOR(fun_in_7);
LOCFOR(fun_fill_8);
LOCFOR(fun_in_9);
LOCFOR(fun_alter_10);
LOCFOR(fun_fnd_11);
LOCFOR(fun_anyQ_12);
LOCFOR(fun_fnd_13);
LOCFOR(fun_allQ_14);
LOCFOR(fun_red_15);
LOCFOR(fun_reduce_16);
LOCFOR(fun_red_17);
LOCFOR(fun_reduceA_18);
LOCFOR(fun_fnd_19);
LOCFOR(fun_find_key_20);
LOCFOR(fun_lop_21);
LOCFOR(fun_do_22);
LOCFOR(fun_lop_23);
LOCFOR(fun_do2_24);
LOCFOR(fun_con_25);
LOCFOR(fun_map_26);
LOCFOR(fun_con_27);
LOCFOR(fun_map2_28);
LOCFOR(fun_lop_29);
LOCFOR(fun_do_keyed_30);
LOCFOR(fun_con_31);
LOCFOR(fun_map_keyed_32);
LOCFOR(fun_33);
LOCFOR(fun_memQ_34);
LOCFOR(fun_as_copy_35);
LOCFOR(fun_eq_36);
LOCFOR(fun_E_37);
LOCFOR(fun_con_38);
LOCFOR(fun_keys_39);
LOCFOR(fun_fnd_40);
LOCFOR(fun_any2Q_41);
LOCFOR(fun_fnd_42);
LOCFOR(fun_all2Q_43);
LOCFOR(fun_lop_44);
LOCFOR(fun_do3_45);
LOCFOR(fun_elt_or_46);
LOCFOR(fun_elt_or_47);
extern P YprotoScollectionsScollectionY___main_0___ ();
extern P YprotoScollectionsScollectionY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_0) {
  P p_,x_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),p_,T2);
  T3 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
  T0 = CALLN(1,VARREF(YprotoScollectionsScollectionYinto),4,T1,x_,YPint((P)0),T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_count_1) {
  P s_,i_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T0 = i_;
  } else {
    T3 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s_);
    T4 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T4;
    s_ = a1;
    i_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_2) {
  P x_;
  P countF770;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_count_1,2);
  countF770 = T1;
  FUNINIT(countF770, 2,x_,countF770);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T2 = CALL2(0,countF770,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_emptyQ_3) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),c_);
  T0 = CALL2(1,VARREF(YprotoSmathYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_4) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_5) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_fabs_6) {
  P c_,objects_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),objects_);
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),c_,T2);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYalter),T1,objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_7) {
  P ds_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ds_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),ds_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    CALL3(1,VARREF(YprotoScollectionsScollectionYnow_elt_setter),FREEREF(1),FREEREF(0),ds_);
    T3 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),ds_);
    a1 = T3;
    ds_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fill_8) {
  P dst_,val_;
  P inF771;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_7,3);
  inF771 = T1;
  FUNINIT(inF771, 3,dst_,val_,inF771);
  T3 = CALL1(1,VARREF(YmacrosYini_state),dst_);
  T2 = CALL1(0,inF771,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_9) {
  P ss_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ss_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),ss_);
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),ss_);
    T3 = CALL2(1,VARREF(YprotoScollectionsScollectionYnow_key),FREEREF(0),ss_);
    CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),T2,FREEREF(1),T3);
    T5 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),ss_);
    a1 = T5;
    ss_ = a1;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alter_10) {
  P dst_,src_;
  P inF772;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_9,3);
  inF772 = T1;
  FUNINIT(inF772, 3,src_,dst_,inF772);
  T3 = CALL1(1,VARREF(YmacrosYini_state),src_);
  T2 = CALL1(0,inF772,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_11) {
  P state_;
  P tmpF773;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(state_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),state_);
    T4 = CALL1(1,FREEREF(1),T5);
    T3 = CALL1(1,VARREF(YprotoSmathYas_log),T4);
    tmpF773 = T3;
    if (tmpF773 != YPfalse) {
      T6 = tmpF773;
    } else {
      T8 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),state_);
      a1 = T8;
      state_ = a1;
      goto loop;
      T6 = T7;
    }
    T2 = T6;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_anyQ_12) {
  P test_,c_;
  P fndF774;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_11,3);
  fndF774 = T1;
  FUNINIT(fndF774, 3,c_,test_,fndF774);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL1(0,fndF774,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_13) {
  P state_;
  P tmpF776;
  P tmpF775;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(state_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),state_);
  tmpF775 = T1;
  if (tmpF775 != YPfalse) {
    T2 = tmpF775;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),state_);
    T4 = CALL1(1,FREEREF(1),T5);
    tmpF776 = T4;
    if (tmpF776 != YPfalse) {
      T8 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),state_);
      a1 = T8;
      state_ = a1;
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

FUNCODEDEF(fun_allQ_14) {
  P test_,c_;
  P fndF777;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_13,3);
  fndF777 = T1;
  FUNINIT(fndF777, 3,c_,test_,fndF777);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL1(0,fndF777,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_15) {
  P res_,state_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),state_);
    T3 = CALL2(1,FREEREF(2),res_,T4);
    T5 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),state_);
    a1 = T3;
    a2 = T5;
    res_ = a1;
    state_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reduce_16) {
  P combine_,init_,c_;
  P redF778;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_15,3);
  redF778 = T1;
  FUNINIT(redF778, 3,c_,redF778,combine_);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL2(0,redF778,init_,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_red_17) {
  P res_,state_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),state_);
    T3 = CALL2(1,FREEREF(2),res_,T4);
    T5 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),state_);
    a1 = T3;
    a2 = T5;
    res_ = a1;
    state_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reduceA_18) {
  P combine_,c_;
  P redF781;
  P initF780;
  P stateF779;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYini_state),c_);
  stateF779 = T1;
  T3 = CALL2(1,VARREF(YmacrosYnow_elt),c_,stateF779);
  initF780 = T3;
  T5 = FUNSHELL(1,fun_red_17,3);
  redF781 = T5;
  FUNINIT(redF781, 3,c_,redF781,combine_);
  T7 = CALL2(1,VARREF(YmacrosYnxt_state),c_,stateF779);
  T6 = CALL2(0,redF781,initF780,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_19) {
  P state_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(state_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),state_);
    T3 = CALL1(1,FREEREF(1),T4);
    if (T3 != YPfalse) {
      T5 = CALL2(1,VARREF(YprotoScollectionsScollectionYnow_key),FREEREF(0),state_);
      T2 = T5;
    } else {
      T7 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),state_);
      a1 = T7;
      state_ = a1;
      goto loop;
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_key_20) {
  P f_,c_;
  P fndF782;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_19,3);
  fndF782 = T1;
  FUNINIT(fndF782, 3,c_,f_,fndF782);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL1(0,fndF782,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_21) {
  P s_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),s_);
    CALL1(1,FREEREF(1),T3);
    T5 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s_);
    a1 = T5;
    s_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_22) {
  P f_,c_;
  P lopF783;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_21,3);
  lopF783 = T1;
  FUNINIT(lopF783, 3,c_,f_,lopF783);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL1(0,lopF783,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_23) {
  P sx_,sy_;
  P tmpF784;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
loop:
  T3 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sx_);
  tmpF784 = T3;
  if (tmpF784 != YPfalse) {
    T4 = tmpF784;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),sy_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sx_);
    T7 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),sy_);
    CALL2(1,FREEREF(2),T6,T7);
    T9 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sx_);
    T10 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),sy_);
    a1 = T9;
    a2 = T10;
    sx_ = a1;
    sy_ = a2;
    goto loop;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do2_24) {
  P f_,x_,y_;
  P lopF785;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_lop_23,4);
  lopF785 = T1;
  FUNINIT(lopF785, 4,x_,y_,f_,lopF785);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),y_);
  T2 = CALL2(0,lopF785,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_25) {
  P res_,s_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),s_);
    T6 = CALL1(1,FREEREF(2),T7);
    T5 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),res_,T6);
    T8 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s_);
    a1 = T5;
    a2 = T8;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_26) {
  P f_,c_;
  P conF786;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_25,3);
  conF786 = T1;
  FUNINIT(conF786, 3,c_,conF786,f_);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL2(0,conF786,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_27) {
  P res_,sx_,sy_;
  P tmpF787;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(sx_, 1);
  ARG(sy_, 2);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sx_);
  tmpF787 = T2;
  if (tmpF787 != YPfalse) {
    T3 = tmpF787;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),sy_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T5 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),FREEREF(0),T6);
    T0 = T5;
  } else {
    T10 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sx_);
    T11 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),sy_);
    T9 = CALL2(1,FREEREF(3),T10,T11);
    T8 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),res_,T9);
    T12 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sx_);
    T13 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),sy_);
    a1 = T8;
    a2 = T12;
    a3 = T13;
    res_ = a1;
    sx_ = a2;
    sy_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map2_28) {
  P f_,x_,y_;
  P conF788;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_27,4);
  conF788 = T1;
  FUNINIT(conF788, 4,x_,y_,conF788,f_);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),y_);
  T2 = CALL3(0,conF788,Ynil,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_29) {
  P s_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YprotoScollectionsScollectionYnow_key),FREEREF(0),s_);
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),s_);
    CALL2(1,FREEREF(1),T3,T4);
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s_);
    a1 = T6;
    s_ = a1;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_keyed_30) {
  P f_,c_;
  P lopF789;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_29,3);
  lopF789 = T1;
  FUNINIT(lopF789, 3,c_,f_,lopF789);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL1(0,lopF789,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_31) {
  P res_,s_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YprotoScollectionsScollectionYnow_key),FREEREF(0),s_);
    T8 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),s_);
    T6 = CALL2(1,FREEREF(2),T7,T8);
    T5 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),res_,T6);
    T9 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s_);
    a1 = T5;
    a2 = T9;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_32) {
  P f_,c_;
  P conF790;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_31,3);
  conF790 = T1;
  FUNINIT(conF790, 3,c_,conF790,f_);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL2(0,conF790,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_33) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_memQ_34) {
  P c_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_33,1,x_);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_copy_35) {
  P c_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yobject_class),c_);
  T0 = CALL2(1,VARREF(YprotoStypesYas),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eq_36) {
  P s1_,s2_;
  P tmpF791;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s1_, 0);
  ARG(s2_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s1_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),s2_);
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),s1_);
    T6 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),s2_);
    T4 = CALL2(1,VARREF(YprotoSmathYE),T5,T6);
    tmpF791 = T4;
    if (tmpF791 != YPfalse) {
      T9 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s1_);
      T10 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),s2_);
      a1 = T9;
      a2 = T10;
      s1_ = a1;
      s2_ = a2;
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

FUNCODEDEF(fun_E_37) {
  P c1_,c2_;
  P eqF792;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T1 = FUNSHELL(1,fun_eq_36,3);
  eqF792 = T1;
  FUNINIT(eqF792, 3,c1_,c2_,eqF792);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c1_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),c2_);
  T2 = CALL2(0,eqF792,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_38) {
  P res_,s_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YprotoScollectionsScollectionYnow_key),FREEREF(0),s_);
    T4 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),res_,T5);
    T6 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),s_);
    a1 = T4;
    a2 = T6;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_keys_39) {
  P c_;
  P conF793;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_38,2);
  conF793 = T1;
  FUNINIT(conF793, 2,c_,conF793);
  T3 = CALL1(1,VARREF(YmacrosYini_state),c_);
  T2 = CALL2(0,conF793,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_40) {
  P sx_,sy_;
  P tmpF795;
  P tmpF794;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sx_);
  tmpF794 = T2;
  if (tmpF794 != YPfalse) {
    T3 = tmpF794;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),sy_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sx_);
    T9 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),sy_);
    T7 = CALL2(1,FREEREF(2),T8,T9);
    T6 = CALL1(1,VARREF(YprotoSmathYas_log),T7);
    tmpF795 = T6;
    if (tmpF795 != YPfalse) {
      T10 = tmpF795;
    } else {
      T12 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sx_);
      T13 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),sy_);
      a1 = T12;
      a2 = T13;
      sx_ = a1;
      sy_ = a2;
      goto loop;
      T10 = T11;
    }
    T5 = T10;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_any2Q_41) {
  P test_,x_,y_;
  P fndF796;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_40,4);
  fndF796 = T1;
  FUNINIT(fndF796, 4,x_,y_,test_,fndF796);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),y_);
  T2 = CALL2(0,fndF796,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_42) {
  P sx_,sy_;
  P tmpF799;
  P tmpF798;
  P tmpF797;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sx_);
  tmpF797 = T1;
  if (tmpF797 != YPfalse) {
    T2 = tmpF797;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),sy_);
    tmpF798 = T4;
    if (tmpF798 != YPfalse) {
      T5 = tmpF798;
    } else {
      T8 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sx_);
      T9 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),sy_);
      T7 = CALL2(1,FREEREF(2),T8,T9);
      tmpF799 = T7;
      if (tmpF799 != YPfalse) {
        T12 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sx_);
        T13 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),sy_);
        a1 = T12;
        a2 = T13;
        sx_ = a1;
        sy_ = a2;
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

FUNCODEDEF(fun_all2Q_43) {
  P test_,x_,y_;
  P fndF800;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_42,4);
  fndF800 = T1;
  FUNINIT(fndF800, 4,x_,y_,test_,fndF800);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),y_);
  T2 = CALL2(0,fndF800,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_44) {
  P sx_,sy_,sz_;
  P tmpF802;
  P tmpF801;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
  ARG(sz_, 2);
loop:
  T3 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),sx_);
  tmpF801 = T3;
  if (tmpF801 != YPfalse) {
    T4 = tmpF801;
  } else {
    T6 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),sy_);
    tmpF802 = T6;
    if (tmpF802 != YPfalse) {
      T7 = tmpF802;
    } else {
      T8 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(2),sz_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T9 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),sx_);
    T10 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),sy_);
    T11 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(2),sz_);
    CALL3(1,FREEREF(3),T9,T10,T11);
    T13 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),sx_);
    T14 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),sy_);
    T15 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(2),sz_);
    a1 = T13;
    a2 = T14;
    a3 = T15;
    sx_ = a1;
    sy_ = a2;
    sz_ = a3;
    goto loop;
    T0 = T12;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do3_45) {
  P f_,x_,y_,z_;
  P lopF803;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
loop:
  T1 = FUNSHELL(1,fun_lop_44,5);
  lopF803 = T1;
  FUNINIT(lopF803, 5,x_,y_,z_,f_,lopF803);
  T3 = CALL1(1,VARREF(YmacrosYini_state),x_);
  T4 = CALL1(1,VARREF(YmacrosYini_state),y_);
  T5 = CALL1(1,VARREF(YmacrosYini_state),z_);
  T2 = CALL3(0,lopF803,T3,T4,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_46) {
  P c_,key_,default_;
  P valF804;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YmacrosYelt),c_,key_);
  valF804 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),valF804,VARREF(Ynul));
  if (T3 != YPfalse) {
    T4 = CALL0(1,default_);
    T2 = T4;
  } else {
    T2 = valF804;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_47) {
  P c_,key_,default_;
  P valF805;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YmacrosYelt),c_,key_);
  valF805 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),valF805,VARREF(Ynul));
  if (T3 != YPfalse) {
    T2 = default_;
  } else {
    T2 = valF805;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YprotoScollectionsScollectionY___main_0___() {
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"len");
  lit_1 = YPPsym((P)"x");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_0),T1,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYlen,T0);
  lit_2 = YPPsym((P)"elt");
  lit_3 = YPPsym((P)"k");
  T3 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_2),T3,Ynil,YPfalse);
  VARSET(YmacrosYelt,T2);
  lit_4 = YPPsym((P)"elt-setter");
  lit_5 = YPPsym((P)"v");
  T5 = YPsig(YPPlist(3,LITREF(lit_5),LITREF(lit_1),LITREF(lit_3)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_4),T5,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYelt_setter,T4);
  lit_6 = YPPsym((P)"empty?");
  T7 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T6 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_6),T7,Ynil,YPfalse);
  VARSET(YmacrosYemptyQ,T6);
  lit_7 = YPPsym((P)"empty");
  T10 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T10),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T8 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_7),T9,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYempty,T8);
  lit_8 = YPPsym((P)"default");
  T13 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T12 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,T13),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T11 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_8),T12,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYdefault,T11);
  lit_9 = YPPsym((P)"fab");
  lit_10 = YPPsym((P)"t");
  lit_11 = YPPsym((P)"s");
  T16 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T15 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_11)),YPPlist(2,T16,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T14 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_9),T15,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYfab,T14);
  lit_12 = YPPsym((P)"fabs");
  lit_13 = YPPsym((P)"elts");
  T19 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T18 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_13)),YPPlist(1,T19),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  T17 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_12),T18,Ynil,YPfalse);
  VARSET(YprotoSmathYfabs,T17);
  lit_14 = YPPsym((P)"fill");
  lit_15 = YPPsym((P)"val");
  T21 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_15)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T20 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_14),T21,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYfill,T20);
  lit_16 = YPPsym((P)"alter");
  lit_17 = YPPsym((P)"y");
  T23 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_17)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T22 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_16),T23,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYalter,T22);
  lit_18 = YPPsym((P)"any?");
  lit_19 = YPPsym((P)"f");
  T25 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T24 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_18),T25,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYanyQ,T24);
  lit_20 = YPPsym((P)"all?");
  T27 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T26 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_20),T27,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYallQ,T26);
  lit_21 = YPPsym((P)"reduce");
  lit_22 = YPPsym((P)"combine");
  lit_23 = YPPsym((P)"init");
  T29 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_23),LITREF(lit_1)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLcolG),Ynil);
  T28 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_21),T29,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYreduce,T28);
  lit_24 = YPPsym((P)"reduce+");
  T31 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T30 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_24),T31,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYreduceA,T30);
  lit_25 = YPPsym((P)"find-key");
  T33 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T32 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_25),T33,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYfind_key,T32);
  lit_26 = YPPsym((P)"del-key");
  lit_27 = YPPsym((P)"key");
  T35 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_27)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T34 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_26),T35,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYdel_key,T34);
  lit_28 = YPPsym((P)"del-keys");
  T37 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T36 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_28),T37,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYdel_keys,T36);
  lit_29 = YPPsym((P)"do");
  T39 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  T38 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_29),T39,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYdo,T38);
  lit_30 = YPPsym((P)"do2");
  T41 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  T40 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_30),T41,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYdo2,T40);
  lit_31 = YPPsym((P)"map");
  T43 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T42 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_31),T43,Ynil,YPfalse);
  VARSET(YmacrosYmap,T42);
  lit_32 = YPPsym((P)"map2");
  T45 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLcolG),Ynil);
  T44 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_32),T45,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYmap2,T44);
  lit_33 = YPPsym((P)"do-keyed");
  T47 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  T46 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_33),T47,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYdo_keyed,T46);
  lit_34 = YPPsym((P)"map-keyed");
  T49 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_1)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T48 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_34),T49,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYmap_keyed,T48);
  lit_35 = YPPsym((P)"mem?");
  T51 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_17)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T50 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_35),T51,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYmemQ,T50);
  lit_36 = YPPsym((P)"ini-state");
  T53 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T52 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_36),T53,Ynil,YPfalse);
  VARSET(YmacrosYini_state,T52);
  lit_37 = YPPsym((P)"fin-state?");
  lit_38 = YPPsym((P)"state");
  T55 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_38)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T54 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_37),T55,Ynil,YPfalse);
  VARSET(YmacrosYfin_stateQ,T54);
  lit_39 = YPPsym((P)"nxt-state");
  T57 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_38)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T56 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_39),T57,Ynil,YPfalse);
  VARSET(YmacrosYnxt_state,T56);
  lit_40 = YPPsym((P)"now-elt");
  T59 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_38)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T58 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_40),T59,Ynil,YPfalse);
  VARSET(YmacrosYnow_elt,T58);
  lit_41 = YPPsym((P)"now-elt-setter");
  T61 = YPsig(YPPlist(3,LITREF(lit_5),LITREF(lit_1),LITREF(lit_38)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T60 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_41),T61,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYnow_elt_setter,T60);
  T62 = YPfalse;
  return T62;
}

P YprotoScollectionsScollectionY___main_1___() {
  P T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169;
  P T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153;
  P T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137;
  P T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121;
  P T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105;
  P T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89;
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_42 = YPPsym((P)"now-key");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_38)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_42),T1,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYnow_key,T0);
  lit_43 = YPPsym((P)"copy-state");
  T3 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_38)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_43),T3,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYcopy_state,T2);
  lit_44 = YPPsym((P)"low-elt");
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_44),T5,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYlow_elt,T4);
  lit_45 = YPPsym((P)"low-elt-setter");
  T7 = YPsig(YPPlist(3,LITREF(lit_5),LITREF(lit_1),LITREF(lit_3)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_45),T7,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYlow_elt_setter,T6);
  lit_46 = YPPsym((P)"keys");
  lit_47 = YPPsym((P)"c");
  T9 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T8 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_46),T9,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYkeys,T8);
  lit_48 = YPPsym((P)"any2?");
  lit_49 = YPPsym((P)"test");
  T11 = YPsig(YPPlist(3,LITREF(lit_49),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T10 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_48),T11,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYany2Q,T10);
  lit_50 = YPPsym((P)"all2?");
  T13 = YPsig(YPPlist(3,LITREF(lit_49),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T12 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_50),T13,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYall2Q,T12);
  lit_51 = YPPsym((P)"into");
  lit_52 = YPPsym((P)"dst");
  lit_53 = YPPsym((P)"src");
  lit_54 = YPPsym((P)"from");
  lit_55 = YPPsym((P)"below");
  T15 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_53),LITREF(lit_54),LITREF(lit_55)),YPPlist(4,VARREF(YLseqG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqG),Ynil);
  T14 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_51),T15,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYinto,T14);
  lit_56 = YPPsym((P)"as-copy");
  T17 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T16 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_56),T17,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYas_copy,T16);
  lit_57 = YPPsym((P)"do3");
  lit_58 = YPPsym((P)"z");
  T19 = YPsig(YPPlist(4,LITREF(lit_19),LITREF(lit_1),LITREF(lit_17),LITREF(lit_58)),YPPlist(4,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T18 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_57),T19,Ynil,YPfalse);
  VARSET(YprotoScollectionsScollectionYdo3,T18);
  lit_59 = YPPsym((P)"as");
  lit_60 = YPPsym((P)"p");
  T21 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T20 = YPsig(YPPlist(2,LITREF(lit_60),LITREF(lit_1)),YPPlist(2,T21,VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_59),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YprotoStypesYas);
  if (T24 != YPfalse) {
    T23 = VARREF(YprotoStypesYas);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_as_0;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YprotoStypesYas,T22);
  lit_61 = YPPsym((P)"count");
  lit_62 = YPPsym((P)"i");
  T27 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_62)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_count_1 = YPmet(FUNCODEREF(fun_count_1),LITREF(lit_61),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_0),T26,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YprotoScollectionsScollectionYlen);
  if (T30 != YPfalse) {
    T29 = VARREF(YprotoScollectionsScollectionYlen);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_len_2;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YprotoScollectionsScollectionYlen,T28);
  T32 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_3 = YPmet(FUNCODEREF(fun_emptyQ_3),LITREF(lit_6),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YmacrosYemptyQ);
  if (T35 != YPfalse) {
    T34 = VARREF(YmacrosYemptyQ);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_emptyQ_3;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YmacrosYemptyQ,T33);
  T38 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T37 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,T38),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_empty_4 = YPmet(FUNCODEREF(fun_empty_4),LITREF(lit_7),T37,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T41 != YPfalse) {
    T40 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_empty_4;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YprotoScollectionsScollectionYempty,T39);
  T44 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T43 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,T44),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_5 = YPmet(FUNCODEREF(fun_default_5),LITREF(lit_8),T43,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YprotoScollectionsScollectionYdefault);
  if (T47 != YPfalse) {
    T46 = VARREF(YprotoScollectionsScollectionYdefault);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_default_5;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YprotoScollectionsScollectionYdefault,T45);
  lit_63 = YPPsym((P)"objects");
  T50 = CALL1(1,VARREF(YprotoStypesYtL),VARREF(YLcolG));
  T49 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_63)),YPPlist(1,T50),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fabs_6 = YPmet(FUNCODEREF(fun_fabs_6),LITREF(lit_12),T49,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YprotoSmathYfabs);
  if (T53 != YPfalse) {
    T52 = VARREF(YprotoSmathYfabs);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_fabs_6;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YprotoSmathYfabs,T51);
  lit_64 = YPPsym((P)"in");
  lit_65 = YPPsym((P)"ds");
  T56 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_7 = YPmet(FUNCODEREF(fun_in_7),LITREF(lit_64),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_15)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_8 = YPmet(FUNCODEREF(fun_fill_8),LITREF(lit_14),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YprotoScollectionsScollectionYfill);
  if (T59 != YPfalse) {
    T58 = VARREF(YprotoScollectionsScollectionYfill);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_fill_8;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YprotoScollectionsScollectionYfill,T57);
  lit_66 = YPPsym((P)"ss");
  T62 = YPsig(YPPlist(1,LITREF(lit_66)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_9 = YPmet(FUNCODEREF(fun_in_9),LITREF(lit_64),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_53)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_alter_10 = YPmet(FUNCODEREF(fun_alter_10),LITREF(lit_16),T61,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YprotoScollectionsScollectionYalter);
  if (T65 != YPfalse) {
    T64 = VARREF(YprotoScollectionsScollectionYalter);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_alter_10;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YprotoScollectionsScollectionYalter,T63);
  lit_67 = YPPsym((P)"fnd");
  T68 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_11 = YPmet(FUNCODEREF(fun_fnd_11),LITREF(lit_67),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_12 = YPmet(FUNCODEREF(fun_anyQ_12),LITREF(lit_18),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YprotoScollectionsScollectionYanyQ);
  if (T71 != YPfalse) {
    T70 = VARREF(YprotoScollectionsScollectionYanyQ);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_anyQ_12;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YprotoScollectionsScollectionYanyQ,T69);
  T74 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_13 = YPmet(FUNCODEREF(fun_fnd_13),LITREF(lit_67),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_14 = YPmet(FUNCODEREF(fun_allQ_14),LITREF(lit_20),T73,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YprotoScollectionsScollectionYallQ);
  if (T77 != YPfalse) {
    T76 = VARREF(YprotoScollectionsScollectionYallQ);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_allQ_14;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YprotoScollectionsScollectionYallQ,T75);
  lit_68 = YPPsym((P)"red");
  lit_69 = YPPsym((P)"res");
  T80 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_38)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_15 = YPmet(FUNCODEREF(fun_red_15),LITREF(lit_68),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_23),LITREF(lit_47)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_reduce_16 = YPmet(FUNCODEREF(fun_reduce_16),LITREF(lit_21),T79,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YprotoScollectionsScollectionYreduce);
  if (T83 != YPfalse) {
    T82 = VARREF(YprotoScollectionsScollectionYreduce);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_reduce_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YprotoScollectionsScollectionYreduce,T81);
  T86 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_38)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_17 = YPmet(FUNCODEREF(fun_red_17),LITREF(lit_68),T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reduceA_18 = YPmet(FUNCODEREF(fun_reduceA_18),LITREF(lit_24),T85,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YprotoScollectionsScollectionYreduceA);
  if (T89 != YPfalse) {
    T88 = VARREF(YprotoScollectionsScollectionYreduceA);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_reduceA_18;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YprotoScollectionsScollectionYreduceA,T87);
  T92 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_19 = YPmet(FUNCODEREF(fun_fnd_19),LITREF(lit_67),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_key_20 = YPmet(FUNCODEREF(fun_find_key_20),LITREF(lit_25),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YprotoScollectionsScollectionYfind_key);
  if (T95 != YPfalse) {
    T94 = VARREF(YprotoScollectionsScollectionYfind_key);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_find_key_20;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YprotoScollectionsScollectionYfind_key,T93);
  lit_70 = YPPsym((P)"lop");
  T98 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_21 = YPmet(FUNCODEREF(fun_lop_21),LITREF(lit_70),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_22 = YPmet(FUNCODEREF(fun_do_22),LITREF(lit_29),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YprotoScollectionsScollectionYdo);
  if (T101 != YPfalse) {
    T100 = VARREF(YprotoScollectionsScollectionYdo);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_do_22;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YprotoScollectionsScollectionYdo,T99);
  lit_71 = YPPsym((P)"sx");
  lit_72 = YPPsym((P)"sy");
  T104 = YPsig(YPPlist(2,LITREF(lit_71),LITREF(lit_72)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_lop_23 = YPmet(FUNCODEREF(fun_lop_23),LITREF(lit_70),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do2_24 = YPmet(FUNCODEREF(fun_do2_24),LITREF(lit_30),T103,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YprotoScollectionsScollectionYdo2);
  if (T107 != YPfalse) {
    T106 = VARREF(YprotoScollectionsScollectionYdo2);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_do2_24;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YprotoScollectionsScollectionYdo2,T105);
  lit_73 = YPPsym((P)"con");
  T110 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_25 = YPmet(FUNCODEREF(fun_con_25),LITREF(lit_73),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_26 = YPmet(FUNCODEREF(fun_map_26),LITREF(lit_31),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YmacrosYmap);
  if (T113 != YPfalse) {
    T112 = VARREF(YmacrosYmap);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_map_26;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YmacrosYmap,T111);
  T116 = YPsig(YPPlist(3,LITREF(lit_69),LITREF(lit_71),LITREF(lit_72)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_27 = YPmet(FUNCODEREF(fun_con_27),LITREF(lit_73),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLcolG),Ynil);
  fun_map2_28 = YPmet(FUNCODEREF(fun_map2_28),LITREF(lit_32),T115,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YprotoScollectionsScollectionYmap2);
  if (T119 != YPfalse) {
    T118 = VARREF(YprotoScollectionsScollectionYmap2);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_map2_28;
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YprotoScollectionsScollectionYmap2,T117);
  T122 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_29 = YPmet(FUNCODEREF(fun_lop_29),LITREF(lit_70),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_30 = YPmet(FUNCODEREF(fun_do_keyed_30),LITREF(lit_33),T121,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YprotoScollectionsScollectionYdo_keyed);
  if (T125 != YPfalse) {
    T124 = VARREF(YprotoScollectionsScollectionYdo_keyed);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_do_keyed_30;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YprotoScollectionsScollectionYdo_keyed,T123);
  T128 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_31 = YPmet(FUNCODEREF(fun_con_31),LITREF(lit_73),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_47)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_32 = YPmet(FUNCODEREF(fun_map_keyed_32),LITREF(lit_34),T127,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YprotoScollectionsScollectionYmap_keyed);
  if (T131 != YPfalse) {
    T130 = VARREF(YprotoScollectionsScollectionYmap_keyed);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_map_keyed_32;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YprotoScollectionsScollectionYmap_keyed,T129);
  lit_74 = YPPsym((P)"e");
  T134 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_34 = YPmet(FUNCODEREF(fun_memQ_34),LITREF(lit_35),T133,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YprotoScollectionsScollectionYmemQ);
  if (T137 != YPfalse) {
    T136 = VARREF(YprotoScollectionsScollectionYmemQ);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_memQ_34;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YprotoScollectionsScollectionYmemQ,T135);
  T139 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_1)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_copy_35 = YPmet(FUNCODEREF(fun_as_copy_35),LITREF(lit_56),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YprotoScollectionsScollectionYas_copy);
  if (T142 != YPfalse) {
    T141 = VARREF(YprotoScollectionsScollectionYas_copy);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_as_copy_35;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YprotoScollectionsScollectionYas_copy,T140);
  lit_75 = YPPsym((P)"=");
  lit_76 = YPPsym((P)"c1");
  lit_77 = YPPsym((P)"c2");
  lit_78 = YPPsym((P)"eq");
  lit_79 = YPPsym((P)"s1");
  lit_80 = YPPsym((P)"s2");
  T145 = YPsig(YPPlist(2,LITREF(lit_79),LITREF(lit_80)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eq_36 = YPmet(FUNCODEREF(fun_eq_36),LITREF(lit_78),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(2,LITREF(lit_76),LITREF(lit_77)),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_37 = YPmet(FUNCODEREF(fun_E_37),LITREF(lit_75),T144,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YprotoSmathYE);
  if (T148 != YPfalse) {
    T147 = VARREF(YprotoSmathYE);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_E_37;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YprotoSmathYE,T146);
  T151 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_38 = YPmet(FUNCODEREF(fun_con_38),LITREF(lit_73),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_39 = YPmet(FUNCODEREF(fun_keys_39),LITREF(lit_46),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YprotoScollectionsScollectionYkeys);
  if (T154 != YPfalse) {
    T153 = VARREF(YprotoScollectionsScollectionYkeys);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_keys_39;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YprotoScollectionsScollectionYkeys,T152);
  T157 = YPsig(YPPlist(2,LITREF(lit_71),LITREF(lit_72)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_40 = YPmet(FUNCODEREF(fun_fnd_40),LITREF(lit_67),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(3,LITREF(lit_49),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_any2Q_41 = YPmet(FUNCODEREF(fun_any2Q_41),LITREF(lit_48),T156,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YprotoScollectionsScollectionYany2Q);
  if (T160 != YPfalse) {
    T159 = VARREF(YprotoScollectionsScollectionYany2Q);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_any2Q_41;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YprotoScollectionsScollectionYany2Q,T158);
  T163 = YPsig(YPPlist(2,LITREF(lit_71),LITREF(lit_72)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_42 = YPmet(FUNCODEREF(fun_fnd_42),LITREF(lit_67),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(3,LITREF(lit_49),LITREF(lit_1),LITREF(lit_17)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_all2Q_43 = YPmet(FUNCODEREF(fun_all2Q_43),LITREF(lit_50),T162,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YprotoScollectionsScollectionYall2Q);
  if (T166 != YPfalse) {
    T165 = VARREF(YprotoScollectionsScollectionYall2Q);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_all2Q_43;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YprotoScollectionsScollectionYall2Q,T164);
  lit_81 = YPPsym((P)"sz");
  T169 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_72),LITREF(lit_81)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lop_44 = YPmet(FUNCODEREF(fun_lop_44),LITREF(lit_70),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(4,LITREF(lit_19),LITREF(lit_1),LITREF(lit_17),LITREF(lit_58)),YPPlist(4,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do3_45 = YPmet(FUNCODEREF(fun_do3_45),LITREF(lit_57),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YprotoScollectionsScollectionYdo3);
  if (T172 != YPfalse) {
    T171 = VARREF(YprotoScollectionsScollectionYdo3);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_do3_45;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YprotoScollectionsScollectionYdo3,T170);
  lit_82 = YPPsym((P)"elt-or");
  T174 = YPsig(YPPlist(3,LITREF(lit_47),LITREF(lit_27),LITREF(lit_8)),YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_46 = YPmet(FUNCODEREF(fun_elt_or_46),LITREF(lit_82),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YprotoScollectionsScollectionYelt_or);
  if (T177 != YPfalse) {
    T176 = VARREF(YprotoScollectionsScollectionYelt_or);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_elt_or_46;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YprotoScollectionsScollectionYelt_or,T175);
  T179 = YPsig(YPPlist(3,LITREF(lit_47),LITREF(lit_27),LITREF(lit_8)),YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_47 = YPmet(FUNCODEREF(fun_elt_or_47),LITREF(lit_82),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YprotoScollectionsScollectionYelt_or);
  if (T182 != YPfalse) {
    T181 = VARREF(YprotoScollectionsScollectionYelt_or);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_elt_or_47;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YprotoScollectionsScollectionYelt_or,T180);
  if (YPfalse != YPfalse) {
  } else {
  }
  T184 = YPfalse;
  return T184;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"var-type", &module_info_macros, "var-type"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
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
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"round/", &module_info_protoSmath, "round/"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
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
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
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
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
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
  {"df", &module_info_boot, "df"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
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
  {"fill", &YprotoScollectionsScollectionYfill},
  {"any2?", &YprotoScollectionsScollectionYany2Q},
  {"all2?", &YprotoScollectionsScollectionYall2Q},
  {"now-elt-setter", &YprotoScollectionsScollectionYnow_elt_setter},
  {"len", &YprotoScollectionsScollectionYlen},
  {"add", &YprotoScollectionsScollectionYadd},
  {"del-keys", &YprotoScollectionsScollectionYdel_keys},
  {"into", &YprotoScollectionsScollectionYinto},
  {"---main-1---", NULL},
  {"del-key", &YprotoScollectionsScollectionYdel_key},
  {"do", &YprotoScollectionsScollectionYdo},
  {"fab", &YprotoScollectionsScollectionYfab},
  {"find-key", &YprotoScollectionsScollectionYfind_key},
  {"mem?", &YprotoScollectionsScollectionYmemQ},
  {"elt-or", &YprotoScollectionsScollectionYelt_or},
  {"reduce+", &YprotoScollectionsScollectionYreduceA},
  {"all?", &YprotoScollectionsScollectionYallQ},
  {"---main-0---", NULL},
  {"default", &YprotoScollectionsScollectionYdefault},
  {"map-keyed", &YprotoScollectionsScollectionYmap_keyed},
  {"reduce", &YprotoScollectionsScollectionYreduce},
  {"keys", &YprotoScollectionsScollectionYkeys},
  {"do-keyed", &YprotoScollectionsScollectionYdo_keyed},
  {"empty", &YprotoScollectionsScollectionYempty},
  {"low-elt-setter", &YprotoScollectionsScollectionYlow_elt_setter},
  {"map2", &YprotoScollectionsScollectionYmap2},
  {"any?", &YprotoScollectionsScollectionYanyQ},
  {"do3", &YprotoScollectionsScollectionYdo3},
  {"low-elt", &YprotoScollectionsScollectionYlow_elt},
  {"as-copy", &YprotoScollectionsScollectionYas_copy},
  {"alter", &YprotoScollectionsScollectionYalter},
  {"copy-state", &YprotoScollectionsScollectionYcopy_state},
  {"elt-setter", &YprotoScollectionsScollectionYelt_setter},
  {"now-key", &YprotoScollectionsScollectionYnow_key},
  {"do2", &YprotoScollectionsScollectionYdo2},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fill", "fill"},
  {"fin-state?", "fin-state?"},
  {"any2?", "any2?"},
  {"now-elt-setter", "now-elt-setter"},
  {"ini-state", "ini-state"},
  {"len", "len"},
  {"add", "add"},
  {"del-keys", "del-keys"},
  {"into", "into"},
  {"fabs", "fabs"},
  {"del-key", "del-key"},
  {"do", "do"},
  {"fab", "fab"},
  {"find-key", "find-key"},
  {"mem?", "mem?"},
  {"reduce+", "reduce+"},
  {"all?", "all?"},
  {"<col>", "<col>"},
  {"default", "default"},
  {"map-keyed", "map-keyed"},
  {"reduce", "reduce"},
  {"keys", "keys"},
  {"do-keyed", "do-keyed"},
  {"empty", "empty"},
  {"low-elt-setter", "low-elt-setter"},
  {"empty?", "empty?"},
  {"map2", "map2"},
  {"any?", "any?"},
  {"do3", "do3"},
  {"low-elt", "low-elt"},
  {"all2?", "all2?"},
  {"map", "map"},
  {"as-copy", "as-copy"},
  {"alter", "alter"},
  {"copy-state", "copy-state"},
  {"elt-setter", "elt-setter"},
  {"nxt-state", "nxt-state"},
  {"now-key", "now-key"},
  {"now-elt", "now-elt"},
  {"do2", "do2"},
  {"elt", "elt"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsScollection;
MODULE_INFO module_info_protoScollectionsScollection = {
  "proto/collections/collection",
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

/* EXPRESSION: */

extern void load_module_protoScollectionsScollection (void);

void load_module_protoScollectionsScollection (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoStypes();
  load_module_protoSmath();

  (P)YprotoScollectionsScollectionY___main_0___();
  (P)YprotoScollectionsScollectionY___main_1___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
