/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/range */

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
DEF(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
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
DEF(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
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
DEF(YprotoScollectionsSrangeYrange_to_setter,"proto/collections/range","range-to-setter");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
DEF(YprotoScollectionsSrangeYrange_above,"proto/collections/range","range-above");
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
DEF(YprotoScollectionsSrangeYrange_above_setter,"proto/collections/range","range-above-setter");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
DEF(YprotoScollectionsSrangeYrange_below,"proto/collections/range","range-below");
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
DEF(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
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
DEF(YprotoScollectionsSrangeYrange_below_setter,"proto/collections/range","range-below-setter");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoStypesYas,"proto/types","as");
DEF(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
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
DEF(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
DEF(YprotoScollectionsSrangeYrange_from,"proto/collections/range","range-from");
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
DEF(YprotoScollectionsSrangeYrange_by,"proto/collections/range","range-by");
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
DEF(YprotoScollectionsSrangeYrange_from_setter,"proto/collections/range","range-from-setter");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
DEF(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
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
DEF(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoSmathYmin,"proto/math","min");
DEF(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
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
DEF(YprotoScollectionsSrangeYrange_by_setter,"proto/collections/range","range-by-setter");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
DEF(YprotoScollectionsSrangeYrange_to,"proto/collections/range","range-to");
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

DEFLIT(lit_2);
DEFLIT(lit_16);
DEFLIT(lit_11);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_34);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_9);
DEFLIT(lit_17);
DEFLIT(lit_29);
DEFLIT(lit_1);
DEFLIT(lit_21);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_22);
DEFLIT(lit_31);
DEFLIT(lit_5);
DEFLIT(lit_32);
DEFLIT(lit_18);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_7);
DEFLIT(lit_10);
DEFLIT(lit_13);
DEFLIT(lit_8);
DEFLIT(lit_20);
DEFLIT(lit_27);
DEFLIT(lit_4);
DEFLIT(lit_30);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_12);

/* FUNCTIONS: */

LOCFOR(fun_range_from_0);
LOCFOR(fun_range_from_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_range_to_3);
LOCFOR(fun_range_to_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_range_below_6);
LOCFOR(fun_range_below_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_range_above_9);
LOCFOR(fun_range_above_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_range_by_12);
LOCFOR(fun_range_by_setter_13);
LOCFOR(fun_14);
LOCFOR(fun_fab_15);
LOCFOR(fun_from_16);
LOCFOR(fun_from_by_17);
LOCFOR(fun_from_to_18);
LOCFOR(fun_from_to_by_19);
LOCFOR(fun_from_below_20);
LOCFOR(fun_from_below_by_21);
LOCFOR(fun_from_above_22);
LOCFOR(fun_from_above_by_23);
LOCFOR(fun_ini_state_24);
LOCFOR(fun_fin_stateQ_25);
LOCFOR(fun_nxt_state_26);
LOCFOR(fun_now_elt_27);
LOCFOR(fun_copy_state_28);
extern P YprotoScollectionsSrangeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_range_from_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YprotoScollectionsSrangeYrange_from));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_from_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSrangeYrange_from));
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

FUNCODEDEF(fun_range_to_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YprotoScollectionsSrangeYrange_to));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_to_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSrangeYrange_to));
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
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_range_below_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YprotoScollectionsSrangeYrange_below));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_below_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSrangeYrange_below));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_range_above_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YprotoScollectionsSrangeYrange_above));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_above_setter_10) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSrangeYrange_above));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_range_by_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YprotoScollectionsSrangeYrange_by));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_by_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSrangeYrange_by));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)1));
}

FUNCODEDEF(fun_fab_15) {
  P c_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoScollectionsSsequenceYfrom_below),YPint((P)0),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_16) {
  P from_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(from_, 0);
loop:
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),Ynil);
  T2 = (P)YPpair(from_,Ynil);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_by_17) {
  P from_,by_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(by_, 1);
loop:
  T2 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_by),Ynil);
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),T2);
  T4 = (P)YPpair(by_,Ynil);
  T3 = (P)YPpair(from_,T4);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_to_18) {
  P from_,to_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(to_, 1);
loop:
  T2 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_to),Ynil);
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),T2);
  T4 = (P)YPpair(to_,Ynil);
  T3 = (P)YPpair(from_,T4);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_to_by_19) {
  P from_,to_,by_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(from_, 0);
  ARG(to_, 1);
  ARG(by_, 2);
loop:
  T3 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_by),Ynil);
  T2 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_to),T3);
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),T2);
  T6 = (P)YPpair(by_,Ynil);
  T5 = (P)YPpair(to_,T6);
  T4 = (P)YPpair(from_,T5);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_below_20) {
  P from_,below_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(below_, 1);
loop:
  T2 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_below),Ynil);
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),T2);
  T4 = (P)YPpair(below_,Ynil);
  T3 = (P)YPpair(from_,T4);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_below_by_21) {
  P from_,below_,by_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(from_, 0);
  ARG(below_, 1);
  ARG(by_, 2);
loop:
  T3 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_by),Ynil);
  T2 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_below),T3);
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),T2);
  T6 = (P)YPpair(by_,Ynil);
  T5 = (P)YPpair(below_,T6);
  T4 = (P)YPpair(from_,T5);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_above_22) {
  P from_,above_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(above_, 1);
loop:
  T2 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_above),Ynil);
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),T2);
  T4 = (P)YPpair(above_,Ynil);
  T3 = (P)YPpair(from_,T4);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_above_by_23) {
  P from_,above_,by_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(from_, 0);
  ARG(above_, 1);
  ARG(by_, 2);
loop:
  T3 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_by),Ynil);
  T2 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_above),T3);
  T1 = (P)YPpair(VARREF(YprotoScollectionsSrangeYrange_from),T2);
  T6 = (P)YPpair(by_,Ynil);
  T5 = (P)YPpair(above_,T6);
  T4 = (P)YPpair(from_,T5);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YprotoScollectionsSrangeYLrangeG),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ini_state_24) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_from),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fin_stateQ_25) {
  P c_,state_;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_by),c_);
  T1 = CALL1(1,VARREF(YprotoSmathYnegQ),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_to),c_);
    T4 = CALL2(1,VARREF(YmacrosYEE),T5,VARREF(Ynul));
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_above),c_);
      T7 = CALL2(1,VARREF(YmacrosYEE),T8,VARREF(Ynul));
      if (T7 != YPfalse) {
        T6 = YPfalse;
      } else {
        T10 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_above),c_);
        T9 = CALL2(1,VARREF(YprotoSmathYLE),state_,T10);
        T6 = T9;
      }
      T3 = T6;
    } else {
      T12 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_to),c_);
      T11 = CALL2(1,VARREF(YprotoSmathYL),state_,T12);
      T3 = T11;
    }
    T0 = T3;
  } else {
    T15 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_to),c_);
    T14 = CALL2(1,VARREF(YmacrosYEE),T15,VARREF(Ynul));
    if (T14 != YPfalse) {
      T18 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_below),c_);
      T17 = CALL2(1,VARREF(YmacrosYEE),T18,VARREF(Ynul));
      if (T17 != YPfalse) {
        T16 = YPfalse;
      } else {
        T20 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_below),c_);
        T19 = CALL2(1,VARREF(YprotoSmathYGE),state_,T20);
        T16 = T19;
      }
      T13 = T16;
    } else {
      T22 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_to),c_);
      T21 = CALL2(1,VARREF(YprotoSmathYG),state_,T22);
      T13 = T21;
    }
    T0 = T13;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_26) {
  P c_,state_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSrangeYrange_by),c_);
  T0 = CALL2(1,VARREF(YprotoSmathYA),state_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_elt_27) {
  P c_,state_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  QRET(state_);
}

FUNCODEDEF(fun_copy_state_28) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

P YprotoScollectionsSrangeY___main_0___() {
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
  lit_0 = YPPsym((P)"<range>");
  T1 = (P)YPpair(VARREF(YLseqG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YprotoScollectionsSrangeYLrangeG,T0);
  lit_1 = YPPsym((P)"from");
  T3 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T2 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_1),T3,Ynil,YPfalse);
  VARSET(YprotoScollectionsSrangeYfrom,T2);
  lit_2 = YPPsym((P)"from-by");
  lit_3 = YPPsym((P)"by");
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T4 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_2),T5,Ynil,YPfalse);
  VARSET(YprotoScollectionsSrangeYfrom_by,T4);
  lit_4 = YPPsym((P)"from-to");
  lit_5 = YPPsym((P)"to");
  T7 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_5)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T6 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_4),T7,Ynil,YPfalse);
  VARSET(YprotoScollectionsSrangeYfrom_to,T6);
  lit_6 = YPPsym((P)"from-to-by");
  T9 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_5),LITREF(lit_3)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T8 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_6),T9,Ynil,YPfalse);
  VARSET(YprotoScollectionsSrangeYfrom_to_by,T8);
  lit_7 = YPPsym((P)"from-below");
  lit_8 = YPPsym((P)"below");
  T11 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T10 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_7),T11,Ynil,YPfalse);
  VARSET(YprotoScollectionsSsequenceYfrom_below,T10);
  lit_9 = YPPsym((P)"from-below-by");
  T13 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_8),LITREF(lit_3)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T12 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_9),T13,Ynil,YPfalse);
  VARSET(YprotoScollectionsSrangeYfrom_below_by,T12);
  lit_10 = YPPsym((P)"from-above");
  lit_11 = YPPsym((P)"above");
  T15 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_11)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T14 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_10),T15,Ynil,YPfalse);
  VARSET(YprotoScollectionsSrangeYfrom_above,T14);
  lit_12 = YPPsym((P)"from-above-by");
  T17 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_11),LITREF(lit_3)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  T16 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_12),T17,Ynil,YPfalse);
  VARSET(YprotoScollectionsSrangeYfrom_above_by,T16);
  lit_13 = YPPsym((P)"range-from");
  lit_14 = YPPsym((P)"_x");
  T18 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_from_0 = YPmet(FUNCODEREF(fun_range_from_0),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YprotoScollectionsSrangeYrange_from);
  if (T21 != YPfalse) {
    T20 = VARREF(YprotoScollectionsSrangeYrange_from);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_range_from_0;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YprotoScollectionsSrangeYrange_from,T19);
  lit_15 = YPPsym((P)"range-from-setter");
  lit_16 = YPPsym((P)"_z");
  T23 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLnumG),VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_from_setter_1 = YPmet(FUNCODEREF(fun_range_from_setter_1),LITREF(lit_15),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YprotoScollectionsSrangeYrange_from_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YprotoScollectionsSrangeYrange_from_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_range_from_setter_1;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YprotoScollectionsSrangeYrange_from_setter,T24);
  lit_17 = YPPsym((P)"x");
  T28 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_2;
  CALLN(1,VARREF(YPslot),5,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YprotoScollectionsSrangeYrange_from),VARREF(YprotoScollectionsSrangeYrange_from_setter),VARREF(YLnumG),T29);
  lit_18 = YPPsym((P)"range-to");
  T30 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_to_3 = YPmet(FUNCODEREF(fun_range_to_3),LITREF(lit_18),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YprotoScollectionsSrangeYrange_to);
  if (T33 != YPfalse) {
    T32 = VARREF(YprotoScollectionsSrangeYrange_to);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_range_to_3;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YprotoScollectionsSrangeYrange_to,T31);
  lit_19 = YPPsym((P)"range-to-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLnumG),VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_to_setter_4 = YPmet(FUNCODEREF(fun_range_to_setter_4),LITREF(lit_19),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YprotoScollectionsSrangeYrange_to_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YprotoScollectionsSrangeYrange_to_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_range_to_setter_4;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YprotoScollectionsSrangeYrange_to_setter,T36);
  T40 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T41 = fun_5;
  CALLN(1,VARREF(YPslot),5,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YprotoScollectionsSrangeYrange_to),VARREF(YprotoScollectionsSrangeYrange_to_setter),VARREF(YLnumG),T41);
  lit_20 = YPPsym((P)"range-below");
  T42 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_below_6 = YPmet(FUNCODEREF(fun_range_below_6),LITREF(lit_20),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YprotoScollectionsSrangeYrange_below);
  if (T45 != YPfalse) {
    T44 = VARREF(YprotoScollectionsSrangeYrange_below);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_range_below_6;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YprotoScollectionsSrangeYrange_below,T43);
  lit_21 = YPPsym((P)"range-below-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLnumG),VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_below_setter_7 = YPmet(FUNCODEREF(fun_range_below_setter_7),LITREF(lit_21),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YprotoScollectionsSrangeYrange_below_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YprotoScollectionsSrangeYrange_below_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_range_below_setter_7;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YprotoScollectionsSrangeYrange_below_setter,T48);
  T52 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T53 = fun_8;
  CALLN(1,VARREF(YPslot),5,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YprotoScollectionsSrangeYrange_below),VARREF(YprotoScollectionsSrangeYrange_below_setter),VARREF(YLnumG),T53);
  lit_22 = YPPsym((P)"range-above");
  T54 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_above_9 = YPmet(FUNCODEREF(fun_range_above_9),LITREF(lit_22),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YprotoScollectionsSrangeYrange_above);
  if (T57 != YPfalse) {
    T56 = VARREF(YprotoScollectionsSrangeYrange_above);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_range_above_9;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YprotoScollectionsSrangeYrange_above,T55);
  lit_23 = YPPsym((P)"range-above-setter");
  T59 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLnumG),VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_above_setter_10 = YPmet(FUNCODEREF(fun_range_above_setter_10),LITREF(lit_23),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YprotoScollectionsSrangeYrange_above_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(YprotoScollectionsSrangeYrange_above_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_range_above_setter_10;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YprotoScollectionsSrangeYrange_above_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_11;
  CALLN(1,VARREF(YPslot),5,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YprotoScollectionsSrangeYrange_above),VARREF(YprotoScollectionsSrangeYrange_above_setter),VARREF(YLnumG),T65);
  lit_24 = YPPsym((P)"range-by");
  T66 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_by_12 = YPmet(FUNCODEREF(fun_range_by_12),LITREF(lit_24),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YprotoScollectionsSrangeYrange_by);
  if (T69 != YPfalse) {
    T68 = VARREF(YprotoScollectionsSrangeYrange_by);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_range_by_12;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YprotoScollectionsSrangeYrange_by,T67);
  lit_25 = YPPsym((P)"range-by-setter");
  T71 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLnumG),VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_by_setter_13 = YPmet(FUNCODEREF(fun_range_by_setter_13),LITREF(lit_25),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YprotoScollectionsSrangeYrange_by_setter);
  if (T74 != YPfalse) {
    T73 = VARREF(YprotoScollectionsSrangeYrange_by_setter);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_range_by_setter_13;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YprotoScollectionsSrangeYrange_by_setter,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T77 = fun_14;
  CALLN(1,VARREF(YPslot),5,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YprotoScollectionsSrangeYrange_by),VARREF(YprotoScollectionsSrangeYrange_by_setter),VARREF(YLnumG),T77);
  lit_26 = YPPsym((P)"fab");
  lit_27 = YPPsym((P)"c");
  lit_28 = YPPsym((P)"s");
  T79 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YprotoScollectionsSrangeYLrangeG));
  T78 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_28)),YPPlist(2,T79,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_fab_15 = YPmet(FUNCODEREF(fun_fab_15),LITREF(lit_26),T78,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YprotoScollectionsScollectionYfab);
  if (T82 != YPfalse) {
    T81 = VARREF(YprotoScollectionsScollectionYfab);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_fab_15;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YprotoScollectionsScollectionYfab,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_16 = YPmet(FUNCODEREF(fun_from_16),LITREF(lit_1),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YprotoScollectionsSrangeYfrom);
  if (T87 != YPfalse) {
    T86 = VARREF(YprotoScollectionsSrangeYfrom);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_from_16;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YprotoScollectionsSrangeYfrom,T85);
  T89 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_by_17 = YPmet(FUNCODEREF(fun_from_by_17),LITREF(lit_2),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YprotoScollectionsSrangeYfrom_by);
  if (T92 != YPfalse) {
    T91 = VARREF(YprotoScollectionsSrangeYfrom_by);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_from_by_17;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YprotoScollectionsSrangeYfrom_by,T90);
  T94 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_5)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_to_18 = YPmet(FUNCODEREF(fun_from_to_18),LITREF(lit_4),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YprotoScollectionsSrangeYfrom_to);
  if (T97 != YPfalse) {
    T96 = VARREF(YprotoScollectionsSrangeYfrom_to);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_from_to_18;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YprotoScollectionsSrangeYfrom_to,T95);
  T99 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_5),LITREF(lit_3)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_to_by_19 = YPmet(FUNCODEREF(fun_from_to_by_19),LITREF(lit_6),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YprotoScollectionsSrangeYfrom_to_by);
  if (T102 != YPfalse) {
    T101 = VARREF(YprotoScollectionsSrangeYfrom_to_by);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_from_to_by_19;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YprotoScollectionsSrangeYfrom_to_by,T100);
  T104 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_below_20 = YPmet(FUNCODEREF(fun_from_below_20),LITREF(lit_7),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YprotoScollectionsSsequenceYfrom_below);
  if (T107 != YPfalse) {
    T106 = VARREF(YprotoScollectionsSsequenceYfrom_below);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_from_below_20;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YprotoScollectionsSsequenceYfrom_below,T105);
  T109 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_8),LITREF(lit_3)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_below_by_21 = YPmet(FUNCODEREF(fun_from_below_by_21),LITREF(lit_9),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YprotoScollectionsSrangeYfrom_below_by);
  if (T112 != YPfalse) {
    T111 = VARREF(YprotoScollectionsSrangeYfrom_below_by);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_from_below_by_21;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YprotoScollectionsSrangeYfrom_below_by,T110);
  T114 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_11)),YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_above_22 = YPmet(FUNCODEREF(fun_from_above_22),LITREF(lit_10),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YprotoScollectionsSrangeYfrom_above);
  if (T117 != YPfalse) {
    T116 = VARREF(YprotoScollectionsSrangeYfrom_above);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_from_above_22;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YprotoScollectionsSrangeYfrom_above,T115);
  T119 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_11),LITREF(lit_3)),YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YprotoScollectionsSrangeYLrangeG),Ynil);
  fun_from_above_by_23 = YPmet(FUNCODEREF(fun_from_above_by_23),LITREF(lit_12),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YprotoScollectionsSrangeYfrom_above_by);
  if (T122 != YPfalse) {
    T121 = VARREF(YprotoScollectionsSrangeYfrom_above_by);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_from_above_by_23;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YprotoScollectionsSrangeYfrom_above_by,T120);
  lit_29 = YPPsym((P)"ini-state");
  T124 = YPsig(YPPlist(1,LITREF(lit_27)),YPPlist(1,VARREF(YprotoScollectionsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_ini_state_24 = YPmet(FUNCODEREF(fun_ini_state_24),LITREF(lit_29),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YmacrosYini_state);
  if (T127 != YPfalse) {
    T126 = VARREF(YmacrosYini_state);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_ini_state_24;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YmacrosYini_state,T125);
  lit_30 = YPPsym((P)"fin-state?");
  lit_31 = YPPsym((P)"state");
  T129 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_31)),YPPlist(2,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_fin_stateQ_25 = YPmet(FUNCODEREF(fun_fin_stateQ_25),LITREF(lit_30),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YmacrosYfin_stateQ);
  if (T132 != YPfalse) {
    T131 = VARREF(YmacrosYfin_stateQ);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_fin_stateQ_25;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YmacrosYfin_stateQ,T130);
  lit_32 = YPPsym((P)"nxt-state");
  T134 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_31)),YPPlist(2,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_nxt_state_26 = YPmet(FUNCODEREF(fun_nxt_state_26),LITREF(lit_32),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YmacrosYnxt_state);
  if (T137 != YPfalse) {
    T136 = VARREF(YmacrosYnxt_state);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_nxt_state_26;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YmacrosYnxt_state,T135);
  lit_33 = YPPsym((P)"now-elt");
  T139 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_31)),YPPlist(2,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_elt_27 = YPmet(FUNCODEREF(fun_now_elt_27),LITREF(lit_33),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YmacrosYnow_elt);
  if (T142 != YPfalse) {
    T141 = VARREF(YmacrosYnow_elt);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_now_elt_27;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YmacrosYnow_elt,T140);
  lit_34 = YPPsym((P)"copy-state");
  lit_35 = YPPsym((P)"_");
  T146 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_31)),YPPlist(2,VARREF(YprotoScollectionsSrangeYLrangeG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T145 = fun_copy_state_28 = YPmet(FUNCODEREF(fun_copy_state_28),LITREF(lit_34),T146,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YprotoScollectionsScollectionYcopy_state);
  if (T150 != YPfalse) {
    T149 = VARREF(YprotoScollectionsScollectionYcopy_state);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_copy_state_28;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  T147 = VARSET(YprotoScollectionsScollectionYcopy_state,T148);
  T144 = T147;
  return T144;
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
  {"from", &YprotoScollectionsSrangeYfrom},
  {"from-to-by", &YprotoScollectionsSrangeYfrom_to_by},
  {"range-to-setter", &YprotoScollectionsSrangeYrange_to_setter},
  {"range-above", &YprotoScollectionsSrangeYrange_above},
  {"range-above-setter", &YprotoScollectionsSrangeYrange_above_setter},
  {"range-below", &YprotoScollectionsSrangeYrange_below},
  {"from-above", &YprotoScollectionsSrangeYfrom_above},
  {"range-below-setter", &YprotoScollectionsSrangeYrange_below_setter},
  {"from-to", &YprotoScollectionsSrangeYfrom_to},
  {"---main-0---", NULL},
  {"from-below-by", &YprotoScollectionsSrangeYfrom_below_by},
  {"range-from", &YprotoScollectionsSrangeYrange_from},
  {"range-by", &YprotoScollectionsSrangeYrange_by},
  {"range-from-setter", &YprotoScollectionsSrangeYrange_from_setter},
  {"<range>", &YprotoScollectionsSrangeYLrangeG},
  {"from-above-by", &YprotoScollectionsSrangeYfrom_above_by},
  {"from-by", &YprotoScollectionsSrangeYfrom_by},
  {"range-by-setter", &YprotoScollectionsSrangeYrange_by_setter},
  {"range-to", &YprotoScollectionsSrangeYrange_to},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"from", "from"},
  {"from-to-by", "from-to-by"},
  {"from-above", "from-above"},
  {"from-to", "from-to"},
  {"from-below-by", "from-below-by"},
  {"<range>", "<range>"},
  {"from-below", "from-below"},
  {"from-above-by", "from-above-by"},
  {"from-by", "from-by"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsSrange;
MODULE_INFO module_info_protoScollectionsSrange = {
  "proto/collections/range",
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

extern void load_module_protoScollectionsSrange (void);

void load_module_protoScollectionsSrange (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoScollectionsScollection();
  load_module_protoScollectionsSsequence();

  (P)YprotoScollectionsSrangeY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
