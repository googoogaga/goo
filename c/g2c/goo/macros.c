/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

EXT(Yslot_owner,"boot","slot-owner");
EXT(YPslot,"boot","%slot");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(Ynot,"boot","not");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YLunionG,"boot","<union>");
EXT(YPsnul,"boot","%snul");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YLsubclassG,"boot","<subclass>");
DEF(YmacrosYcat,"macros","cat");
EXT(Ysig_specs,"boot","sig-specs");
DEF(YmacrosYemptyQ,"macros","empty?");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YPsymbols,"boot","%symbols");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ytail,"boot","tail");
DEF(YmacrosYgensym,"macros","gensym");
EXT(Yclass_slots,"boot","class-slots");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(Ytype_elts,"boot","type-elts");
EXT(YPPmacro,"boot","%%macro");
EXT(YPdefine_method,"boot","%define-method");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLoptsG,"boot","<opts>");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YisaQ,"boot","isa?");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YLtypeG,"boot","<type>");
EXT(YLclassG,"boot","<class>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yobject_parents,"boot","object-parents");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ytype_error,"boot","type-error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsymG,"boot","<sym>");
DEF(YmacrosYmap,"macros","map");
EXT(Ysig_names,"boot","sig-names");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YLgenG,"boot","<gen>");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YLstrG,"boot","<str>");
DEF(YmacrosYEE,"macros","==");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YmacrosYtup,"macros","tup");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
EXT(Ylst,"boot","lst");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_arity,"boot","sig-arity");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yobject_class,"boot","object-class");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YLlstG,"boot","<lst>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YLfunG,"boot","<fun>");
DEF(YmacrosYpair,"macros","pair");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLseqG,"boot","<seq>");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(Yslot_getter,"boot","slot-getter");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
EXT(YLcolG,"boot","<col>");
DEF(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPvnul,"boot","%vnul");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(Ynul,"boot","nul");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YLsigG,"boot","<sig>");
EXT(Ytype_object,"boot","type-object");
EXT(Yhead_setter,"boot","head-setter");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YLtupG,"boot","<tup>");
EXT(Yhead,"boot","head");
EXT(Yerror,"boot","error");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(Yslot_init,"boot","slot-init");
EXT(YLintG,"boot","<int>");
EXT(Ysym_name,"boot","sym-name");
DEF(YmacrosYmake_sym,"macros","make-sym");
EXT(YLnumG,"boot","<num>");
EXT(Yclass_direct_children,"boot","class-direct-children");
DEF(YmacrosYnapply,"macros","napply");
EXT(Yfun_value,"boot","fun-value");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YsubtypeQ,"boot","subtype?");
DEF(YmacrosYvar_name,"macros","var-name");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(Yadd_slot,"boot","add-slot");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_9);
DEFLIT(lit_86);
DEFLIT(lit_23);
DEFLIT(lit_108);
DEFLIT(lit_30);
DEFLIT(lit_110);
DEFLIT(lit_52);
DEFLIT(lit_78);
DEFLIT(lit_112);
DEFLIT(lit_46);
DEFLIT(lit_8);
DEFLIT(lit_29);
DEFLIT(lit_88);
DEFLIT(lit_0);
DEFLIT(lit_73);
DEFLIT(lit_58);
DEFLIT(lit_94);
DEFLIT(lit_60);
DEFLIT(lit_83);
DEFLIT(lit_14);
DEFLIT(lit_76);
DEFLIT(lit_101);
DEFLIT(lit_21);
DEFLIT(lit_100);
DEFLIT(lit_7);
DEFLIT(lit_39);
DEFLIT(lit_85);
DEFLIT(lit_81);
DEFLIT(lit_84);
DEFLIT(lit_6);
DEFLIT(lit_99);
DEFLIT(lit_103);
DEFLIT(lit_95);
DEFLIT(lit_72);
DEFLIT(lit_45);
DEFLIT(lit_93);
DEFLIT(lit_54);
DEFLIT(lit_42);
DEFLIT(lit_1);
DEFLIT(lit_87);
DEFLIT(lit_50);
DEFLIT(lit_59);
DEFLIT(lit_4);
DEFLIT(lit_109);
DEFLIT(lit_82);
DEFLIT(lit_77);
DEFLIT(lit_89);
DEFLIT(lit_22);
DEFLIT(lit_5);
DEFLIT(lit_56);
DEFLIT(lit_49);
DEFLIT(lit_41);
DEFLIT(lit_2);
DEFLIT(lit_98);
DEFLIT(lit_38);
DEFLIT(lit_79);
DEFLIT(lit_70);
DEFLIT(lit_34);
DEFLIT(lit_16);
DEFLIT(lit_47);
DEFLIT(lit_111);
DEFLIT(lit_63);
DEFLIT(lit_61);
DEFLIT(lit_27);
DEFLIT(lit_19);
DEFLIT(lit_11);
DEFLIT(lit_44);
DEFLIT(lit_62);
DEFLIT(lit_20);
DEFLIT(lit_106);
DEFLIT(lit_96);
DEFLIT(lit_53);
DEFLIT(lit_92);
DEFLIT(lit_26);
DEFLIT(lit_91);
DEFLIT(lit_3);
DEFLIT(lit_37);
DEFLIT(lit_66);
DEFLIT(lit_74);
DEFLIT(lit_25);
DEFLIT(lit_28);
DEFLIT(lit_33);
DEFLIT(lit_107);
DEFLIT(lit_36);
DEFLIT(lit_65);
DEFLIT(lit_12);
DEFLIT(lit_80);
DEFLIT(lit_35);
DEFLIT(lit_15);
DEFLIT(lit_67);
DEFLIT(lit_17);
DEFLIT(lit_75);
DEFLIT(lit_48);
DEFLIT(lit_102);
DEFLIT(lit_51);
DEFLIT(lit_90);
DEFLIT(lit_13);
DEFLIT(lit_55);
DEFLIT(lit_97);
DEFLIT(lit_24);
DEFLIT(lit_18);
DEFLIT(lit_104);
DEFLIT(lit_105);
DEFLIT(lit_57);
DEFLIT(lit_69);
DEFLIT(lit_31);
DEFLIT(lit_40);
DEFLIT(lit_71);
DEFLIT(lit_68);
DEFLIT(lit_32);
DEFLIT(lit_64);

/* FUNCTIONS: */

LOCFOR(fun_x_1074_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1078_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1082_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1086_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_x_1090_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_x_1094_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_munch_18);
FUNFOR(YmacrosYlift_place_subforms);
LOCFOR(fun_x_1100_20);
LOCFOR(fun_x_1102_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1108_25);
LOCFOR(fun_x_1110_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1114_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_x_1118_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_x_1122_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_x_1126_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_x_1134_42);
LOCFOR(fun_x_1136_43);
LOCFOR(fun_x_1138_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_x_1146_49);
LOCFOR(fun_x_1148_50);
LOCFOR(fun_x_1150_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1156_56);
LOCFOR(fun_x_1158_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_x_1166_61);
LOCFOR(fun_x_1168_62);
LOCFOR(fun_x_1170_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
LOCFOR(fun_67);
LOCFOR(fun_68);
LOCFOR(fun_x_1174_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1182_72);
LOCFOR(fun_x_1184_73);
LOCFOR(fun_x_1186_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_grok_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1194_80);
LOCFOR(fun_x_1198_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1196_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_x_1202_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1206_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
extern P YmacrosY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1074_0) {
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

FUNCODEDEF(fun_1) {
  P return_;
  P x_1073F411;
  P x_1073F410;
  P argsF409;
  P x_1073F408;
  P x_1074F407;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1074_0,1);
  x_1074F407 = T1;
  FUNINIT(x_1074F407, 1,return_);
  x_1073F408 = FREEREF(0);
  argsF409 = YPfalse;
  argsF409 = BOXFAB(argsF409);
  T5 = CALL2(1,CHKREF(YisaQ),x_1073F408,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1073F408,CHKREF(lit_5),x_1074F407);
    x_1073F410 = T7;
    BOXVAL(argsF409) = x_1073F410;
    x_1073F411 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1073F411,x_1074F407);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1074F407,CHKREF(lit_6),x_1073F408);
  }
  T12 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_9));
  T19 = CALL2(1,CHKREF(YmacrosYcat),T20,Ynil);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T16 = CALL3(1,CHKREF(YmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,CHKREF(Ylst),T16);
  T14 = CALL2(1,CHKREF(YmacrosYcat),T15,Ynil);
  T13 = CALL1(1,CHKREF(Ylst),T14);
  T23 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T24 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T27 = CALL1(1,CHKREF(Ylst),CHKREF(lit_11));
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_12));
  T31 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T29 = CALL3(1,CHKREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,CHKREF(Ylst),T29);
  T34 = CALL1(1,CHKREF(Ylst),CHKREF(lit_13));
  T35 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T33 = CALL3(1,CHKREF(YmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T36 = BOXVAL(argsF409);
  T39 = CALL1(1,CHKREF(Ylst),CHKREF(lit_14));
  T40 = CALL1(1,CHKREF(Ylst),Ynil);
  T38 = CALL3(1,CHKREF(YmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,CHKREF(Ylst),T38);
  T26 = CALLN(1,CHKREF(YmacrosYcat),6,T27,T28,T32,T36,T37,Ynil);
  T25 = CALL1(1,CHKREF(Ylst),T26);
  T43 = CALL1(1,CHKREF(Ylst),CHKREF(lit_15));
  T44 = CALL1(1,CHKREF(Ylst),CHKREF(lit_16));
  T42 = CALL3(1,CHKREF(YmacrosYcat),T43,T44,Ynil);
  T41 = CALL1(1,CHKREF(Ylst),T42);
  T22 = CALLN(1,CHKREF(YmacrosYcat),5,T23,T24,T25,T41,Ynil);
  T21 = CALL1(1,CHKREF(Ylst),T22);
  T11 = CALLN(1,CHKREF(YmacrosYcat),4,T12,T13,T21,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1078_3) {
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

FUNCODEDEF(fun_4) {
  P return_;
  P x_1077F416;
  P x_1077F415;
  P argsF414;
  P x_1077F413;
  P x_1078F412;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1078_3,1);
  x_1078F412 = T1;
  FUNINIT(x_1078F412, 1,return_);
  x_1077F413 = FREEREF(0);
  argsF414 = YPfalse;
  argsF414 = BOXFAB(argsF414);
  T5 = CALL2(1,CHKREF(YisaQ),x_1077F413,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1077F413,CHKREF(lit_18),x_1078F412);
    x_1077F415 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1077F415,x_1078F412);
    BOXVAL(argsF414) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1077F415);
    x_1077F416 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1077F416,x_1078F412);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1078F412,CHKREF(lit_6),x_1077F413);
  }
  T14 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T19 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_9));
  T21 = CALL2(1,CHKREF(YmacrosYcat),T22,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T18 = CALL3(1,CHKREF(YmacrosYcat),T19,T20,Ynil);
  T17 = CALL1(1,CHKREF(Ylst),T18);
  T16 = CALL2(1,CHKREF(YmacrosYcat),T17,Ynil);
  T15 = CALL1(1,CHKREF(Ylst),T16);
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T26 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_11));
  T32 = CALL1(1,CHKREF(Ylst),CHKREF(lit_12));
  T33 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T31 = CALL3(1,CHKREF(YmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_13));
  T37 = CALL1(1,CHKREF(Ylst),CHKREF(lit_8));
  T35 = CALL3(1,CHKREF(YmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,CHKREF(Ylst),T35);
  T39 = BOXVAL(argsF414);
  T38 = CALL1(1,CHKREF(Ylst),T39);
  T28 = CALLN(1,CHKREF(YmacrosYcat),5,T29,T30,T34,T38,Ynil);
  T27 = CALL1(1,CHKREF(Ylst),T28);
  T42 = CALL1(1,CHKREF(Ylst),CHKREF(lit_15));
  T43 = CALL1(1,CHKREF(Ylst),CHKREF(lit_19));
  T41 = CALL3(1,CHKREF(YmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,CHKREF(Ylst),T41);
  T24 = CALLN(1,CHKREF(YmacrosYcat),5,T25,T26,T27,T40,Ynil);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T13 = CALLN(1,CHKREF(YmacrosYcat),4,T14,T15,T23,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_4,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1082_6) {
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

FUNCODEDEF(fun_7) {
  P return_;
  P x_1081F423;
  P x_1081F422;
  P x_1081F421;
  P argsF420;
  P fF419;
  P x_1081F418;
  P x_1082F417;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1082_6,1);
  x_1082F417 = T1;
  FUNINIT(x_1082F417, 1,return_);
  x_1081F418 = FREEREF(0);
  fF419 = YPfalse;
  fF419 = BOXFAB(fF419);
  argsF420 = YPfalse;
  argsF420 = BOXFAB(argsF420);
  T7 = CALL2(1,CHKREF(YisaQ),x_1081F418,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1081F418,CHKREF(lit_21),x_1082F417);
    x_1081F421 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1081F421,x_1082F417);
    BOXVAL(fF419) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1081F421);
    x_1081F422 = T12;
    BOXVAL(argsF420) = x_1081F422;
    x_1081F423 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1081F423,x_1082F417);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1082F417,CHKREF(lit_6),x_1081F418);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_11));
  T19 = BOXVAL(fF419);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T20 = CALL1(1,CHKREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF420);
  T16 = CALLN(1,CHKREF(YmacrosYcat),5,T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_7,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1086_9) {
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

FUNCODEDEF(fun_10) {
  P return_;
  P nameF431;
  P x_1085F430;
  P x_1085F429;
  P x_1085F428;
  P x_1085F427;
  P bodyF426;
  P x_1085F425;
  P x_1086F424;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1086_9,1);
  x_1086F424 = T1;
  FUNINIT(x_1086F424, 1,return_);
  x_1085F425 = FREEREF(0);
  bodyF426 = YPfalse;
  bodyF426 = BOXFAB(bodyF426);
  T5 = CALL2(1,CHKREF(YisaQ),x_1085F425,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1085F425,CHKREF(lit_23),x_1086F424);
    x_1085F427 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1085F427,x_1086F424);
    x_1085F428 = T9;
    T10 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1085F428,x_1086F424);
    T11 = CALL1(1,CHKREF(Ytail),x_1085F427);
    x_1085F429 = T11;
    BOXVAL(bodyF426) = x_1085F429;
    x_1085F430 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1085F430,x_1086F424);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1086F424,CHKREF(lit_6),x_1085F425);
  }
  nameF431 = CHKREF(lit_24);
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T22 = CALL1(1,CHKREF(Ylst),nameF431);
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_14));
  T26 = CALL1(1,CHKREF(Ylst),Ynil);
  T24 = CALL3(1,CHKREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T21 = CALL3(1,CHKREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T19 = CALL2(1,CHKREF(YmacrosYcat),T20,Ynil);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T27 = BOXVAL(bodyF426);
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_25));
  T31 = CALL1(1,CHKREF(Ylst),nameF431);
  T29 = CALL3(1,CHKREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,CHKREF(Ylst),T29);
  T16 = CALLN(1,CHKREF(YmacrosYcat),5,T17,T18,T27,T28,Ynil);
  T15 = T16;
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_10,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1090_12) {
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

FUNCODEDEF(fun_13) {
  P return_;
  P nameF437;
  P x_1089F436;
  P x_1089F435;
  P valueF434;
  P x_1089F433;
  P x_1090F432;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1090_12,1);
  x_1090F432 = T1;
  FUNINIT(x_1090F432, 1,return_);
  x_1089F433 = FREEREF(0);
  valueF434 = YPfalse;
  valueF434 = BOXFAB(valueF434);
  T5 = CALL2(1,CHKREF(YisaQ),x_1089F433,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1089F433,CHKREF(lit_27),x_1090F432);
    x_1089F435 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1089F435,x_1090F432);
    BOXVAL(valueF434) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1089F435);
    x_1089F436 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1089F436,x_1090F432);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1090F432,CHKREF(lit_6),x_1089F433);
  }
  nameF437 = CHKREF(lit_24);
  T15 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T16 = CALL1(1,CHKREF(Ylst),nameF437);
  T19 = CALL1(1,CHKREF(Ylst),CHKREF(lit_29));
  T21 = BOXVAL(valueF434);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T22 = CALL1(1,CHKREF(Ylst),nameF437);
  T18 = CALLN(1,CHKREF(YmacrosYcat),4,T19,T20,T22,Ynil);
  T17 = CALL1(1,CHKREF(Ylst),T18);
  T14 = CALLN(1,CHKREF(YmacrosYcat),4,T15,T16,T17,Ynil);
  T13 = T14;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_13,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1094_15) {
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

FUNCODEDEF(fun_16) {
  P return_;
  P x_1093F442;
  P x_1093F441;
  P nameF440;
  P x_1093F439;
  P x_1094F438;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F438 = T1;
  FUNINIT(x_1094F438, 1,return_);
  x_1093F439 = FREEREF(0);
  nameF440 = YPfalse;
  nameF440 = BOXFAB(nameF440);
  T5 = CALL2(1,CHKREF(YisaQ),x_1093F439,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1093F439,CHKREF(lit_25),x_1094F438);
    x_1093F441 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1093F441,x_1094F438);
    BOXVAL(nameF440) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1093F441);
    x_1093F442 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1093F442,x_1094F438);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1094F438,CHKREF(lit_6),x_1093F439);
  }
  T14 = CALL1(1,CHKREF(Ylst),CHKREF(lit_31));
  T16 = BOXVAL(nameF440);
  T15 = CALL1(1,CHKREF(Ylst),T16);
  T13 = CALL3(1,CHKREF(YmacrosYcat),T14,T15,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_16,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_munch_18) {
  P subforms_;
  P gF448;
  P tup4F447;
  P g_argsF446;
  P tup4F445;
  P g_declsF444;
  P tup4F443;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(subforms_, 0);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),subforms_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T4 = CALL1(1,CHKREF(Ytail),subforms_);
    T3 = CALL1(1,FREEREF(0),T4);
    tup4F443 = T3;
    T6 = CALL1(1,CHKREF(Yhead),tup4F443);
    g_declsF444 = T6;
    T8 = CALL1(1,CHKREF(Ytail),tup4F443);
    tup4F445 = T8;
    T10 = CALL1(1,CHKREF(Yhead),tup4F445);
    g_argsF446 = T10;
    T12 = CALL1(1,CHKREF(Ytail),tup4F445);
    tup4F447 = T12;
    T14 = CALL0(1,CHKREF(YmacrosYgensym));
    gF448 = T14;
    T18 = CALL1(1,CHKREF(Ylst),gF448);
    T20 = CALL1(1,CHKREF(Yhead),subforms_);
    T19 = CALL1(1,CHKREF(Ylst),T20);
    T17 = CALL3(1,CHKREF(YmacrosYcat),T18,T19,Ynil);
    T16 = CALL2(1,CHKREF(YmacrosYpair),T17,g_declsF444);
    T21 = CALL2(1,CHKREF(YmacrosYpair),gF448,g_argsF446);
    T15 = CALL2(1,CHKREF(YmacrosYtup),T16,T21);
    T13 = T15;
    T11 = T13;
    T9 = T11;
    T7 = T9;
    T5 = T7;
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YmacrosYlift_place_subforms) {
  P place_;
  P tup5F454;
  P g_argsF453;
  P tup5F452;
  P g_declsF451;
  P tup5F450;
  P munchF449;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_18,1);
  munchF449 = T1;
  FUNINIT(munchF449, 1,munchF449);
  T3 = CALL2(1,CHKREF(YisaQ),place_,CHKREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YmacrosYtup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,CHKREF(Ytail),place_);
    T6 = CALL1(1,munchF449,T7);
    tup5F450 = T6;
    T9 = CALL1(1,CHKREF(Yhead),tup5F450);
    g_declsF451 = T9;
    T11 = CALL1(1,CHKREF(Ytail),tup5F450);
    tup5F452 = T11;
    T13 = CALL1(1,CHKREF(Yhead),tup5F452);
    g_argsF453 = T13;
    T15 = CALL1(1,CHKREF(Ytail),tup5F452);
    tup5F454 = T15;
    T18 = CALL1(1,CHKREF(Yhead),place_);
    T17 = CALL2(1,CHKREF(YmacrosYpair),T18,g_argsF453);
    T16 = CALL2(1,CHKREF(YmacrosYtup),g_declsF451,T17);
    T14 = T16;
    T12 = T14;
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1100_20) {
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

FUNCODEDEF(fun_x_1102_21) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P return_;
  P x_1101F458;
  P amountF457;
  P x_1101F456;
  P x_1102F455;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_21,1);
  x_1102F455 = T1;
  FUNINIT(x_1102F455, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1101F456 = T3;
  amountF457 = YPfalse;
  amountF457 = BOXFAB(amountF457);
  T6 = CALL2(1,CHKREF(YisaQ),x_1101F456,CHKREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1101F456,x_1102F455);
    BOXVAL(amountF457) = T8;
    T9 = CALL1(1,CHKREF(Ytail),x_1101F456);
    x_1101F458 = T9;
    T10 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1101F458,x_1102F455);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1102F455,CHKREF(lit_6),x_1101F456);
  }
  T12 = BOXVAL(amountF457);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF471;
  P tup7F470;
  P g_placeF469;
  P tup7F468;
  P g_declsF467;
  P tup7F466;
  P x_1099F465;
  P x_1099F464;
  P x_1099F463;
  P amountF462;
  P placeF461;
  P x_1099F460;
  P x_1100F459;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1100_20,1);
  x_1100F459 = T1;
  FUNINIT(x_1100F459, 1,return_);
  x_1099F460 = FREEREF(0);
  placeF461 = YPfalse;
  placeF461 = BOXFAB(placeF461);
  amountF462 = YPfalse;
  amountF462 = BOXFAB(amountF462);
  T7 = CALL2(1,CHKREF(YisaQ),x_1099F460,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1099F460,CHKREF(lit_37),x_1100F459);
    x_1099F463 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1099F463,x_1100F459);
    BOXVAL(placeF461) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1099F463);
    x_1099F464 = T12;
    BOXVAL(amountF462) = x_1099F464;
    x_1099F465 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1099F465,x_1100F459);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1100F459,CHKREF(lit_6),x_1099F460);
  }
  T18 = BOXVAL(placeF461);
  T17 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T18);
  tup7F466 = T17;
  T20 = CALL1(1,CHKREF(Yhead),tup7F466);
  g_declsF467 = T20;
  T22 = CALL1(1,CHKREF(Ytail),tup7F466);
  tup7F468 = T22;
  T24 = CALL1(1,CHKREF(Yhead),tup7F468);
  g_placeF469 = T24;
  T26 = CALL1(1,CHKREF(Ytail),tup7F468);
  tup7F470 = T26;
  T29 = FUNFAB(fun_22,1,amountF462);
  T28 = with_exit(T29);
  amountF471 = T28;
  T31 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T33 = CALL2(1,CHKREF(YmacrosYcat),g_declsF467,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T37 = CALL1(1,CHKREF(Ylst),g_placeF469);
  T40 = CALL1(1,CHKREF(Ylst),CHKREF(lit_39));
  T41 = CALL1(1,CHKREF(Ylst),g_placeF469);
  T42 = CALL1(1,CHKREF(Ylst),amountF471);
  T39 = CALLN(1,CHKREF(YmacrosYcat),4,T40,T41,T42,Ynil);
  T38 = CALL1(1,CHKREF(Ylst),T39);
  T35 = CALLN(1,CHKREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,CHKREF(Ylst),T35);
  T30 = CALLN(1,CHKREF(YmacrosYcat),4,T31,T32,T34,Ynil);
  T27 = T30;
  T25 = T27;
  T23 = T25;
  T21 = T23;
  T19 = T21;
  T16 = T19;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_23,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1108_25) {
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

FUNCODEDEF(fun_x_1110_26) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P x_1109F475;
  P amountF474;
  P x_1109F473;
  P x_1110F472;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1110_26,1);
  x_1110F472 = T1;
  FUNINIT(x_1110F472, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1109F473 = T3;
  amountF474 = YPfalse;
  amountF474 = BOXFAB(amountF474);
  T6 = CALL2(1,CHKREF(YisaQ),x_1109F473,CHKREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1109F473,x_1110F472);
    BOXVAL(amountF474) = T8;
    T9 = CALL1(1,CHKREF(Ytail),x_1109F473);
    x_1109F475 = T9;
    T10 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1109F475,x_1110F472);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1110F472,CHKREF(lit_6),x_1109F473);
  }
  T12 = BOXVAL(amountF474);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P amountF488;
  P tup9F487;
  P g_placeF486;
  P tup9F485;
  P g_declsF484;
  P tup9F483;
  P x_1107F482;
  P x_1107F481;
  P x_1107F480;
  P amountF479;
  P placeF478;
  P x_1107F477;
  P x_1108F476;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F476 = T1;
  FUNINIT(x_1108F476, 1,return_);
  x_1107F477 = FREEREF(0);
  placeF478 = YPfalse;
  placeF478 = BOXFAB(placeF478);
  amountF479 = YPfalse;
  amountF479 = BOXFAB(amountF479);
  T7 = CALL2(1,CHKREF(YisaQ),x_1107F477,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1107F477,CHKREF(lit_41),x_1108F476);
    x_1107F480 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1107F480,x_1108F476);
    BOXVAL(placeF478) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1107F480);
    x_1107F481 = T12;
    BOXVAL(amountF479) = x_1107F481;
    x_1107F482 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1107F482,x_1108F476);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1108F476,CHKREF(lit_6),x_1107F477);
  }
  T18 = BOXVAL(placeF478);
  T17 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T18);
  tup9F483 = T17;
  T20 = CALL1(1,CHKREF(Yhead),tup9F483);
  g_declsF484 = T20;
  T22 = CALL1(1,CHKREF(Ytail),tup9F483);
  tup9F485 = T22;
  T24 = CALL1(1,CHKREF(Yhead),tup9F485);
  g_placeF486 = T24;
  T26 = CALL1(1,CHKREF(Ytail),tup9F485);
  tup9F487 = T26;
  T29 = FUNFAB(fun_27,1,amountF479);
  T28 = with_exit(T29);
  amountF488 = T28;
  T31 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T33 = CALL2(1,CHKREF(YmacrosYcat),g_declsF484,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T37 = CALL1(1,CHKREF(Ylst),g_placeF486);
  T40 = CALL1(1,CHKREF(Ylst),CHKREF(lit_43));
  T41 = CALL1(1,CHKREF(Ylst),g_placeF486);
  T42 = CALL1(1,CHKREF(Ylst),amountF488);
  T39 = CALLN(1,CHKREF(YmacrosYcat),4,T40,T41,T42,Ynil);
  T38 = CALL1(1,CHKREF(Ylst),T39);
  T35 = CALLN(1,CHKREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,CHKREF(Ylst),T35);
  T30 = CALLN(1,CHKREF(YmacrosYcat),4,T31,T32,T34,Ynil);
  T27 = T30;
  T25 = T27;
  T23 = T25;
  T21 = T23;
  T19 = T21;
  T16 = T19;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_28,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1114_30) {
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

FUNCODEDEF(fun_31) {
  P return_;
  P tup11F500;
  P g_placeF499;
  P tup11F498;
  P g_declsF497;
  P tup11F496;
  P x_1113F495;
  P x_1113F494;
  P x_1113F493;
  P valueF492;
  P placeF491;
  P x_1113F490;
  P x_1114F489;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1114_30,1);
  x_1114F489 = T1;
  FUNINIT(x_1114F489, 1,return_);
  x_1113F490 = FREEREF(0);
  placeF491 = YPfalse;
  placeF491 = BOXFAB(placeF491);
  valueF492 = YPfalse;
  valueF492 = BOXFAB(valueF492);
  T7 = CALL2(1,CHKREF(YisaQ),x_1113F490,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1113F490,CHKREF(lit_45),x_1114F489);
    x_1113F493 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1113F493,x_1114F489);
    BOXVAL(placeF491) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1113F493);
    x_1113F494 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1113F494,x_1114F489);
    BOXVAL(valueF492) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1113F494);
    x_1113F495 = T15;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1113F495,x_1114F489);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1114F489,CHKREF(lit_6),x_1113F490);
  }
  T20 = BOXVAL(placeF491);
  T19 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T20);
  tup11F496 = T19;
  T22 = CALL1(1,CHKREF(Yhead),tup11F496);
  g_declsF497 = T22;
  T24 = CALL1(1,CHKREF(Ytail),tup11F496);
  tup11F498 = T24;
  T26 = CALL1(1,CHKREF(Yhead),tup11F498);
  g_placeF499 = T26;
  T28 = CALL1(1,CHKREF(Ytail),tup11F498);
  tup11F500 = T28;
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T32 = CALL2(1,CHKREF(YmacrosYcat),g_declsF497,Ynil);
  T31 = CALL1(1,CHKREF(Ylst),T32);
  T35 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T36 = CALL1(1,CHKREF(Ylst),g_placeF499);
  T39 = CALL1(1,CHKREF(Ylst),CHKREF(lit_46));
  T40 = CALL1(1,CHKREF(Ylst),g_placeF499);
  T42 = BOXVAL(valueF492);
  T41 = CALL1(1,CHKREF(Ylst),T42);
  T38 = CALLN(1,CHKREF(YmacrosYcat),4,T39,T40,T41,Ynil);
  T37 = CALL1(1,CHKREF(Ylst),T38);
  T34 = CALLN(1,CHKREF(YmacrosYcat),4,T35,T36,T37,Ynil);
  T33 = CALL1(1,CHKREF(Ylst),T34);
  T29 = CALLN(1,CHKREF(YmacrosYcat),4,T30,T31,T33,Ynil);
  T27 = T29;
  T25 = T27;
  T23 = T25;
  T21 = T23;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_31,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1118_33) {
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

FUNCODEDEF(fun_34) {
  P return_;
  P valF512;
  P new_colF511;
  P tup13F510;
  P g_placeF509;
  P tup13F508;
  P g_declsF507;
  P tup13F506;
  P x_1117F505;
  P x_1117F504;
  P placeF503;
  P x_1117F502;
  P x_1118F501;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1118_33,1);
  x_1118F501 = T1;
  FUNINIT(x_1118F501, 1,return_);
  x_1117F502 = FREEREF(0);
  placeF503 = YPfalse;
  placeF503 = BOXFAB(placeF503);
  T5 = CALL2(1,CHKREF(YisaQ),x_1117F502,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1117F502,CHKREF(lit_48),x_1118F501);
    x_1117F504 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1117F504,x_1118F501);
    BOXVAL(placeF503) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1117F504);
    x_1117F505 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1117F505,x_1118F501);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1118F501,CHKREF(lit_6),x_1117F502);
  }
  T15 = BOXVAL(placeF503);
  T14 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T15);
  tup13F506 = T14;
  T17 = CALL1(1,CHKREF(Yhead),tup13F506);
  g_declsF507 = T17;
  T19 = CALL1(1,CHKREF(Ytail),tup13F506);
  tup13F508 = T19;
  T21 = CALL1(1,CHKREF(Yhead),tup13F508);
  g_placeF509 = T21;
  T23 = CALL1(1,CHKREF(Ytail),tup13F508);
  tup13F510 = T23;
  T25 = CALL0(1,CHKREF(YmacrosYgensym));
  new_colF511 = T25;
  T27 = CALL0(1,CHKREF(YmacrosYgensym));
  valF512 = T27;
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_49));
  T37 = CALL1(1,CHKREF(Ylst),new_colF511);
  T38 = CALL1(1,CHKREF(Ylst),valF512);
  T35 = CALLN(1,CHKREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,CHKREF(Ylst),T35);
  T41 = CALL1(1,CHKREF(Ylst),CHKREF(lit_50));
  T42 = CALL1(1,CHKREF(Ylst),g_placeF509);
  T40 = CALL3(1,CHKREF(YmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,CHKREF(Ylst),T40);
  T33 = CALL3(1,CHKREF(YmacrosYcat),T34,T39,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T31 = CALL3(1,CHKREF(YmacrosYcat),g_declsF507,T32,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T45 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T46 = CALL1(1,CHKREF(Ylst),g_placeF509);
  T47 = CALL1(1,CHKREF(Ylst),new_colF511);
  T44 = CALLN(1,CHKREF(YmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,CHKREF(Ylst),T44);
  T48 = CALL1(1,CHKREF(Ylst),valF512);
  T28 = CALLN(1,CHKREF(YmacrosYcat),5,T29,T30,T43,T48,Ynil);
  T26 = T28;
  T24 = T26;
  T22 = T24;
  T20 = T22;
  T18 = T20;
  T16 = T18;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_34,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1122_36) {
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

FUNCODEDEF(fun_37) {
  P return_;
  P x_1121F519;
  P x_1121F518;
  P x_1121F517;
  P bodyF516;
  P testF515;
  P x_1121F514;
  P x_1122F513;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1122_36,1);
  x_1122F513 = T1;
  FUNINIT(x_1122F513, 1,return_);
  x_1121F514 = FREEREF(0);
  testF515 = YPfalse;
  testF515 = BOXFAB(testF515);
  bodyF516 = YPfalse;
  bodyF516 = BOXFAB(bodyF516);
  T7 = CALL2(1,CHKREF(YisaQ),x_1121F514,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1121F514,CHKREF(lit_52),x_1122F513);
    x_1121F517 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1121F517,x_1122F513);
    BOXVAL(testF515) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1121F517);
    x_1121F518 = T12;
    BOXVAL(bodyF516) = x_1121F518;
    x_1121F519 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1121F519,x_1122F513);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1122F513,CHKREF(lit_6),x_1121F514);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_53));
  T22 = BOXVAL(testF515);
  T21 = CALL1(1,CHKREF(Ylst),T22);
  T19 = CALL3(1,CHKREF(YmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T26 = BOXVAL(bodyF516);
  T24 = CALL3(1,CHKREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T16 = CALLN(1,CHKREF(YmacrosYcat),4,T17,T18,T23,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1126_39) {
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

FUNCODEDEF(fun_40) {
  P return_;
  P x_1125F526;
  P x_1125F525;
  P x_1125F524;
  P bodyF523;
  P testF522;
  P x_1125F521;
  P x_1126F520;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1126_39,1);
  x_1126F520 = T1;
  FUNINIT(x_1126F520, 1,return_);
  x_1125F521 = FREEREF(0);
  testF522 = YPfalse;
  testF522 = BOXFAB(testF522);
  bodyF523 = YPfalse;
  bodyF523 = BOXFAB(bodyF523);
  T7 = CALL2(1,CHKREF(YisaQ),x_1125F521,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1125F521,CHKREF(lit_56),x_1126F520);
    x_1125F524 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1125F524,x_1126F520);
    BOXVAL(testF522) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1125F524);
    x_1125F525 = T12;
    BOXVAL(bodyF523) = x_1125F525;
    x_1125F526 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1125F526,x_1126F520);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1126F520,CHKREF(lit_6),x_1125F521);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T19 = BOXVAL(testF522);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T23 = BOXVAL(bodyF523);
  T21 = CALL3(1,CHKREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T16 = CALLN(1,CHKREF(YmacrosYcat),4,T17,T18,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_40,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1134_42) {
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

FUNCODEDEF(fun_x_1136_43) {
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

FUNCODEDEF(fun_x_1138_44) {
  P msg_,args_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T7 = CALL1(1,CHKREF(Ylst),CHKREF(lit_61));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,CHKREF(Ylst),T9);
  T6 = CALL3(1,CHKREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,CHKREF(Ylst),T6);
  T4 = CALL2(1,CHKREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,CHKREF(Ylst),T4);
  T12 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T13 = CALL1(1,CHKREF(Ylst),CHKREF(lit_61));
  T14 = CALL1(1,CHKREF(Ylst),CHKREF(lit_61));
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_58));
  T18 = BOXVAL(FREEREF(2));
  T16 = CALL3(1,CHKREF(YmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,CHKREF(Ylst),T16);
  T11 = CALLN(1,CHKREF(YmacrosYcat),5,T12,T13,T14,T15,Ynil);
  T10 = CALL1(1,CHKREF(Ylst),T11);
  T1 = CALLN(1,CHKREF(YmacrosYcat),4,T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P return_;
  P x_1137F528;
  P x_1138F527;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1138_44,3);
  x_1138F527 = T1;
  FUNINIT(x_1138F527, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1137F528 = T3;
  T4 = CALL2(1,CHKREF(YisaQ),x_1137F528,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1137F528,x_1138F527);
  } else {
    T6 = CALL2(1,x_1138F527,CHKREF(lit_6),x_1137F528);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P return_;
  P x_1135F534;
  P x_1135F533;
  P restF532;
  P xF531;
  P x_1135F530;
  P x_1136F529;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1136_43,1);
  x_1136F529 = T1;
  FUNINIT(x_1136F529, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1135F530 = T3;
  xF531 = YPfalse;
  xF531 = BOXFAB(xF531);
  restF532 = YPfalse;
  restF532 = BOXFAB(restF532);
  T8 = CALL2(1,CHKREF(YisaQ),x_1135F530,CHKREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1135F530,x_1136F529);
    BOXVAL(xF531) = T10;
    T11 = CALL1(1,CHKREF(Ytail),x_1135F530);
    x_1135F533 = T11;
    BOXVAL(restF532) = x_1135F533;
    x_1135F534 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1135F534,x_1136F529);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1136F529,CHKREF(lit_6),x_1135F530);
  }
  T16 = FUNFAB(fun_45,2,xF531,restF532);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1133F539;
  P x_1133F538;
  P restF537;
  P x_1133F536;
  P x_1134F535;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1134_42,1);
  x_1134F535 = T1;
  FUNINIT(x_1134F535, 1,return_);
  x_1133F536 = FREEREF(0);
  restF537 = YPfalse;
  restF537 = BOXFAB(restF537);
  T5 = CALL2(1,CHKREF(YisaQ),x_1133F536,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1133F536,CHKREF(lit_58),x_1134F535);
    x_1133F538 = T7;
    BOXVAL(restF537) = x_1133F538;
    x_1133F539 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1133F539,x_1134F535);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1134F535,CHKREF(lit_6),x_1133F536);
  }
  T12 = FUNFAB(fun_46,1,restF537);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_47,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1146_49) {
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

FUNCODEDEF(fun_x_1148_50) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1150_51) {
  P msg_,args_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T7 = CALL1(1,CHKREF(Ylst),CHKREF(lit_61));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,CHKREF(Ylst),T9);
  T6 = CALL3(1,CHKREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,CHKREF(Ylst),T6);
  T4 = CALL2(1,CHKREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,CHKREF(Ylst),T4);
  T12 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T13 = CALL1(1,CHKREF(Ylst),CHKREF(lit_61));
  T16 = CALL1(1,CHKREF(Ylst),CHKREF(lit_63));
  T17 = BOXVAL(FREEREF(2));
  T15 = CALL3(1,CHKREF(YmacrosYcat),T16,T17,Ynil);
  T14 = CALL1(1,CHKREF(Ylst),T15);
  T18 = CALL1(1,CHKREF(Ylst),YPfalse);
  T11 = CALLN(1,CHKREF(YmacrosYcat),5,T12,T13,T14,T18,Ynil);
  T10 = CALL1(1,CHKREF(Ylst),T11);
  T1 = CALLN(1,CHKREF(YmacrosYcat),4,T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1149F541;
  P x_1150F540;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_51,3);
  x_1150F540 = T1;
  FUNINIT(x_1150F540, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1149F541 = T3;
  T4 = CALL2(1,CHKREF(YisaQ),x_1149F541,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1149F541,x_1150F540);
  } else {
    T6 = CALL2(1,x_1150F540,CHKREF(lit_6),x_1149F541);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1147F547;
  P x_1147F546;
  P restF545;
  P xF544;
  P x_1147F543;
  P x_1148F542;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_50,1);
  x_1148F542 = T1;
  FUNINIT(x_1148F542, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1147F543 = T3;
  xF544 = YPfalse;
  xF544 = BOXFAB(xF544);
  restF545 = YPfalse;
  restF545 = BOXFAB(restF545);
  T8 = CALL2(1,CHKREF(YisaQ),x_1147F543,CHKREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1147F543,x_1148F542);
    BOXVAL(xF544) = T10;
    T11 = CALL1(1,CHKREF(Ytail),x_1147F543);
    x_1147F546 = T11;
    BOXVAL(restF545) = x_1147F546;
    x_1147F547 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1147F547,x_1148F542);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1148F542,CHKREF(lit_6),x_1147F543);
  }
  T16 = FUNFAB(fun_52,2,xF544,restF545);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1145F552;
  P x_1145F551;
  P restF550;
  P x_1145F549;
  P x_1146F548;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1146_49,1);
  x_1146F548 = T1;
  FUNINIT(x_1146F548, 1,return_);
  x_1145F549 = FREEREF(0);
  restF550 = YPfalse;
  restF550 = BOXFAB(restF550);
  T5 = CALL2(1,CHKREF(YisaQ),x_1145F549,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1145F549,CHKREF(lit_63),x_1146F548);
    x_1145F551 = T7;
    BOXVAL(restF550) = x_1145F551;
    x_1145F552 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1145F552,x_1146F548);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1146F548,CHKREF(lit_6),x_1145F549);
  }
  T12 = FUNFAB(fun_53,1,restF550);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_54,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1156_56) {
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

FUNCODEDEF(fun_x_1158_57) {
  P msg_,args_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,CHKREF(Yhead),T3);
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_69),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1157F558;
  P x_1157F557;
  P bodyF556;
  P condF555;
  P x_1157F554;
  P x_1158F553;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_57,2);
  x_1158F553 = T1;
  FUNINIT(x_1158F553, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,CHKREF(Yhead),T4);
  x_1157F554 = T3;
  condF555 = YPfalse;
  condF555 = BOXFAB(condF555);
  bodyF556 = YPfalse;
  bodyF556 = BOXFAB(bodyF556);
  T9 = CALL2(1,CHKREF(YisaQ),x_1157F554,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1157F554,x_1158F553);
    BOXVAL(condF555) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1157F554);
    x_1157F557 = T12;
    BOXVAL(bodyF556) = x_1157F557;
    x_1157F558 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1157F558,x_1158F553);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1158F553,CHKREF(lit_6),x_1157F554);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T19 = BOXVAL(condF555);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T23 = BOXVAL(bodyF556);
  T21 = CALL3(1,CHKREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T26 = CALL1(1,CHKREF(Ylst),CHKREF(lit_67));
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL1(1,CHKREF(Ytail),T28);
  T25 = CALL3(1,CHKREF(YmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,CHKREF(Ylst),T25);
  T16 = CALLN(1,CHKREF(YmacrosYcat),5,T17,T18,T20,T24,Ynil);
  T7 = T16;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1155F563;
  P x_1155F562;
  P casesF561;
  P x_1155F560;
  P x_1156F559;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1156_56,1);
  x_1156F559 = T1;
  FUNINIT(x_1156F559, 1,return_);
  x_1155F560 = FREEREF(0);
  casesF561 = YPfalse;
  casesF561 = BOXFAB(casesF561);
  T5 = CALL2(1,CHKREF(YisaQ),x_1155F560,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1155F560,CHKREF(lit_67),x_1156F559);
    x_1155F562 = T7;
    BOXVAL(casesF561) = x_1155F562;
    x_1155F563 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1155F563,x_1156F559);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1156F559,CHKREF(lit_6),x_1155F560);
  }
  T13 = BOXVAL(casesF561);
  T12 = CALL1(1,CHKREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_58,1,casesF561);
    T14 = with_exit(T15);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_59,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1166_61) {
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

FUNCODEDEF(fun_x_1168_62) {
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

FUNCODEDEF(fun_x_1170_63) {
  P msg_,args_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,CHKREF(Yhead),T3);
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_74),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(Ylst),CHKREF(lit_76));
  T2 = CALL1(1,CHKREF(Ylst),FREEREF(0));
  T3 = CALL1(1,CHKREF(Ylst),x_);
  T0 = CALLN(1,CHKREF(YmacrosYcat),4,T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1169F567;
  P valuesF566;
  P x_1169F565;
  P x_1170F564;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_63,2);
  x_1170F564 = T1;
  FUNINIT(x_1170F564, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  x_1169F565 = T3;
  valuesF566 = YPfalse;
  valuesF566 = BOXFAB(valuesF566);
  T6 = CALL2(1,CHKREF(YisaQ),x_1169F565,CHKREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF566) = x_1169F565;
    x_1169F567 = Ynil;
    T8 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1169F567,x_1170F564);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1170F564,CHKREF(lit_6),x_1169F565);
  }
  T11 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T16 = CALL1(1,CHKREF(Ylst),FREEREF(2));
  T18 = BOXVAL(FREEREF(3));
  T17 = CALL1(1,CHKREF(Ylst),T18);
  T15 = CALL3(1,CHKREF(YmacrosYcat),T16,T17,Ynil);
  T14 = CALL1(1,CHKREF(Ylst),T15);
  T13 = CALL2(1,CHKREF(YmacrosYcat),T14,Ynil);
  T12 = CALL1(1,CHKREF(Ylst),T13);
  T21 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T24 = CALL1(1,CHKREF(Ylst),CHKREF(lit_58));
  T26 = FUNFAB(fun_64,1,FREEREF(2));
  T27 = BOXVAL(valuesF566);
  T25 = CALL2(1,CHKREF(YmacrosYmap),T26,T27);
  T23 = CALL3(1,CHKREF(YmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,CHKREF(Ylst),T23);
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T31 = BOXVAL(FREEREF(4));
  T29 = CALL3(1,CHKREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,CHKREF(Ylst),T29);
  T34 = CALL1(1,CHKREF(Ylst),CHKREF(lit_71));
  T35 = CALL1(1,CHKREF(Ylst),FREEREF(2));
  T37 = BOXVAL(FREEREF(0));
  T36 = CALL1(1,CHKREF(Ytail),T37);
  T33 = CALLN(1,CHKREF(YmacrosYcat),4,T34,T35,T36,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T20 = CALLN(1,CHKREF(YmacrosYcat),5,T21,T22,T28,T32,Ynil);
  T19 = CALL1(1,CHKREF(Ylst),T20);
  T10 = CALLN(1,CHKREF(YmacrosYcat),4,T11,T12,T19,Ynil);
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P bvF574;
  P x_1167F573;
  P x_1167F572;
  P bodyF571;
  P condF570;
  P x_1167F569;
  P x_1168F568;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1168_62,1);
  x_1168F568 = T1;
  FUNINIT(x_1168F568, 1,return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,CHKREF(Yhead),T4);
  x_1167F569 = T3;
  condF570 = YPfalse;
  condF570 = BOXFAB(condF570);
  bodyF571 = YPfalse;
  bodyF571 = BOXFAB(bodyF571);
  T9 = CALL2(1,CHKREF(YisaQ),x_1167F569,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1167F569,x_1168F568);
    BOXVAL(condF570) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1167F569);
    x_1167F572 = T12;
    BOXVAL(bodyF571) = x_1167F572;
    x_1167F573 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1167F573,x_1168F568);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1168F568,CHKREF(lit_6),x_1167F569);
  }
  T18 = BOXVAL(condF570);
  T17 = CALL2(1,CHKREF(YmacrosYEE),T18,YPtrue);
  if (T17 != YPfalse) {
    T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
    T21 = BOXVAL(bodyF571);
    T19 = CALL3(1,CHKREF(YmacrosYcat),T20,T21,Ynil);
    T16 = T19;
  } else {
    T23 = CALL0(1,CHKREF(YmacrosYgensym));
    bvF574 = T23;
    T25 = FUNFAB(fun_65,5,FREEREF(0),condF570,bvF574,FREEREF(1),bodyF571);
    T24 = with_exit(T25);
    T22 = T24;
    T16 = T22;
  }
  T7 = T16;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P x_1165F581;
  P x_1165F580;
  P x_1165F579;
  P casesF578;
  P valF577;
  P x_1165F576;
  P x_1166F575;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1166_61,1);
  x_1166F575 = T1;
  FUNINIT(x_1166F575, 1,return_);
  x_1165F576 = FREEREF(0);
  valF577 = YPfalse;
  valF577 = BOXFAB(valF577);
  casesF578 = YPfalse;
  casesF578 = BOXFAB(casesF578);
  T7 = CALL2(1,CHKREF(YisaQ),x_1165F576,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1165F576,CHKREF(lit_71),x_1166F575);
    x_1165F579 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1165F579,x_1166F575);
    BOXVAL(valF577) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1165F579);
    x_1165F580 = T12;
    BOXVAL(casesF578) = x_1165F580;
    x_1165F581 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1165F581,x_1166F575);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1166F575,CHKREF(lit_6),x_1165F576);
  }
  T18 = BOXVAL(casesF578);
  T17 = CALL1(1,CHKREF(YmacrosYemptyQ),T18);
  if (T17 != YPfalse) {
    T16 = YPfalse;
  } else {
    T20 = FUNFAB(fun_66,2,casesF578,valF577);
    T19 = with_exit(T20);
    T16 = T19;
  }
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_67,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1174_69) {
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

FUNCODEDEF(fun_70) {
  P return_;
  P x_1173F590;
  P x_1173F589;
  P x_1173F588;
  P x_1173F587;
  P argsF586;
  P messageF585;
  P condF584;
  P x_1173F583;
  P x_1174F582;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1174_69,1);
  x_1174F582 = T1;
  FUNINIT(x_1174F582, 1,return_);
  x_1173F583 = FREEREF(0);
  condF584 = YPfalse;
  condF584 = BOXFAB(condF584);
  messageF585 = YPfalse;
  messageF585 = BOXFAB(messageF585);
  argsF586 = YPfalse;
  argsF586 = BOXFAB(argsF586);
  T9 = CALL2(1,CHKREF(YisaQ),x_1173F583,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1173F583,CHKREF(lit_78),x_1174F582);
    x_1173F587 = T11;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1173F587,x_1174F582);
    BOXVAL(condF584) = T13;
    T14 = CALL1(1,CHKREF(Ytail),x_1173F587);
    x_1173F588 = T14;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1173F588,x_1174F582);
    BOXVAL(messageF585) = T16;
    T17 = CALL1(1,CHKREF(Ytail),x_1173F588);
    x_1173F589 = T17;
    BOXVAL(argsF586) = x_1173F589;
    x_1173F590 = Ynil;
    T19 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1173F590,x_1174F582);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1174F582,CHKREF(lit_6),x_1173F583);
  }
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_53));
  T27 = BOXVAL(condF584);
  T26 = CALL1(1,CHKREF(Ylst),T27);
  T24 = CALL3(1,CHKREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_15));
  T32 = BOXVAL(messageF585);
  T31 = CALL1(1,CHKREF(Ylst),T32);
  T33 = BOXVAL(argsF586);
  T29 = CALLN(1,CHKREF(YmacrosYcat),4,T30,T31,T33,Ynil);
  T28 = CALL1(1,CHKREF(Ylst),T29);
  T21 = CALLN(1,CHKREF(YmacrosYcat),4,T22,T23,T28,Ynil);
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_70,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1182_72) {
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

FUNCODEDEF(fun_x_1184_73) {
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

FUNCODEDEF(fun_x_1186_74) {
  P msg_,args_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,CHKREF(Ylst),T3);
  T6 = CALL1(1,CHKREF(Ylst),CHKREF(lit_93));
  T7 = CALL1(1,CHKREF(Ylst),FREEREF(2));
  T8 = CALL1(1,CHKREF(Ylst),FREEREF(3));
  T5 = CALLN(1,CHKREF(YmacrosYcat),4,T6,T7,T8,Ynil);
  T4 = CALL1(1,CHKREF(Ylst),T5);
  T1 = CALL3(1,CHKREF(YmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1185F597;
  P x_1185F596;
  P x_1185F595;
  P valF594;
  P keyF593;
  P x_1185F592;
  P x_1186F591;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1186_74,4);
  x_1186F591 = T1;
  FUNINIT(x_1186F591, 4,return_,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  x_1185F592 = T3;
  keyF593 = YPfalse;
  keyF593 = BOXFAB(keyF593);
  valF594 = YPfalse;
  valF594 = BOXFAB(valF594);
  T8 = CALL2(1,CHKREF(YisaQ),x_1185F592,CHKREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1185F592,CHKREF(lit_49),x_1186F591);
    x_1185F595 = T10;
    T12 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1185F595,x_1186F591);
    BOXVAL(keyF593) = T12;
    T13 = CALL1(1,CHKREF(Ytail),x_1185F595);
    x_1185F596 = T13;
    T15 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1185F596,x_1186F591);
    BOXVAL(valF594) = T15;
    T16 = CALL1(1,CHKREF(Ytail),x_1185F596);
    x_1185F597 = T16;
    T17 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1185F597,x_1186F591);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1186F591,CHKREF(lit_6),x_1185F592);
  }
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_49));
  T24 = BOXVAL(keyF593);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T26 = BOXVAL(valF594);
  T25 = CALL1(1,CHKREF(Ylst),T26);
  T21 = CALLN(1,CHKREF(YmacrosYcat),4,T22,T23,T25,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_49));
  T32 = CALL1(1,CHKREF(Ylst),CHKREF(lit_94));
  T33 = CALL1(1,CHKREF(Ylst),FREEREF(1));
  T34 = CALL1(1,CHKREF(Ylst),FREEREF(2));
  T31 = CALLN(1,CHKREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T37 = CALL1(1,CHKREF(Ylst),CHKREF(lit_93));
  T38 = CALL1(1,CHKREF(Ylst),FREEREF(1));
  T39 = CALL1(1,CHKREF(Ylst),FREEREF(2));
  T36 = CALLN(1,CHKREF(YmacrosYcat),4,T37,T38,T39,Ynil);
  T35 = CALL1(1,CHKREF(Ylst),T36);
  T28 = CALLN(1,CHKREF(YmacrosYcat),4,T29,T30,T35,Ynil);
  T27 = CALL1(1,CHKREF(Ylst),T28);
  T19 = CALL3(1,CHKREF(YmacrosYcat),T20,T27,Ynil);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P return_;
  P exp_tmpF605;
  P stateF604;
  P x_1183F603;
  P x_1183F602;
  P expF601;
  P varF600;
  P x_1183F599;
  P x_1184F598;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1184_73,1);
  x_1184F598 = T1;
  FUNINIT(x_1184F598, 1,return_);
  x_1183F599 = FREEREF(0);
  varF600 = YPfalse;
  varF600 = BOXFAB(varF600);
  expF601 = YPfalse;
  expF601 = BOXFAB(expF601);
  T7 = CALL2(1,CHKREF(YisaQ),x_1183F599,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1183F599,x_1184F598);
    BOXVAL(varF600) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1183F599);
    x_1183F602 = T10;
    T12 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1183F602,x_1184F598);
    BOXVAL(expF601) = T12;
    T13 = CALL1(1,CHKREF(Ytail),x_1183F602);
    x_1183F603 = T13;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1183F603,x_1184F598);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1184F598,CHKREF(lit_6),x_1183F599);
  }
  T17 = CALL0(1,CHKREF(YmacrosYgensym));
  stateF604 = T17;
  T19 = CALL0(1,CHKREF(YmacrosYgensym));
  exp_tmpF605 = T19;
  T21 = CALL1(1,CHKREF(Ytail),FREEREF(2));
  T24 = CALL1(1,CHKREF(Ylst),exp_tmpF605);
  T26 = BOXVAL(expF601);
  T25 = CALL1(1,CHKREF(Ylst),T26);
  T23 = CALL3(1,CHKREF(YmacrosYcat),T24,T25,Ynil);
  T22 = CALL2(1,CHKREF(YmacrosYpair),T23,FREEREF(3));
  T29 = CALL1(1,CHKREF(Ylst),stateF604);
  T32 = CALL1(1,CHKREF(Ylst),CHKREF(lit_90));
  T33 = CALL1(1,CHKREF(Ylst),exp_tmpF605);
  T31 = CALL3(1,CHKREF(YmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T28 = CALL3(1,CHKREF(YmacrosYcat),T29,T30,Ynil);
  T27 = CALL2(1,CHKREF(YmacrosYpair),T28,FREEREF(4));
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_91));
  T37 = CALL1(1,CHKREF(Ylst),exp_tmpF605);
  T38 = CALL1(1,CHKREF(Ylst),stateF604);
  T35 = CALLN(1,CHKREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL2(1,CHKREF(YmacrosYpair),T35,FREEREF(5));
  T41 = FUNFAB(fun_75,3,varF600,exp_tmpF605,stateF604);
  T40 = with_exit(T41);
  T39 = CALL2(1,CHKREF(YmacrosYpair),T40,FREEREF(6));
  T44 = CALL1(1,CHKREF(Ylst),CHKREF(lit_95));
  T45 = CALL1(1,CHKREF(Ylst),exp_tmpF605);
  T46 = CALL1(1,CHKREF(Ylst),stateF604);
  T43 = CALLN(1,CHKREF(YmacrosYcat),4,T44,T45,T46,Ynil);
  T42 = CALL2(1,CHKREF(YmacrosYpair),T43,FREEREF(7));
  T20 = CALLN(0,FREEREF(1),6,T21,T22,T27,T34,T39,T42);
  T18 = T20;
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grok_77) {
  P clauses_,exps_,inits_,preds_,nows_,nexts_;
  P clauseF607;
  P loopF606;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(clauses_, 0);
  ARG(exps_, 1);
  ARG(inits_, 2);
  ARG(preds_, 3);
  ARG(nows_, 4);
  ARG(nexts_, 5);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),clauses_);
  if (T1 != YPfalse) {
    T3 = CALL0(1,CHKREF(YmacrosYgensym));
    loopF606 = T3;
    T5 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
    T6 = CALL1(1,CHKREF(Ylst),exps_);
    T9 = CALL1(1,CHKREF(Ylst),CHKREF(lit_88));
    T10 = CALL1(1,CHKREF(Ylst),loopF606);
    T11 = CALL1(1,CHKREF(Ylst),inits_);
    T14 = CALL1(1,CHKREF(Ylst),CHKREF(lit_52));
    T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_58));
    T16 = CALL3(1,CHKREF(YmacrosYcat),T17,preds_,Ynil);
    T15 = CALL1(1,CHKREF(Ylst),T16);
    T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
    T21 = CALL1(1,CHKREF(Ylst),nows_);
    T22 = BOXVAL(FREEREF(0));
    T25 = CALL1(1,CHKREF(Ylst),loopF606);
    T24 = CALL3(1,CHKREF(YmacrosYcat),T25,nexts_,Ynil);
    T23 = CALL1(1,CHKREF(Ylst),T24);
    T19 = CALLN(1,CHKREF(YmacrosYcat),5,T20,T21,T22,T23,Ynil);
    T18 = CALL1(1,CHKREF(Ylst),T19);
    T13 = CALLN(1,CHKREF(YmacrosYcat),4,T14,T15,T18,Ynil);
    T12 = CALL1(1,CHKREF(Ylst),T13);
    T8 = CALLN(1,CHKREF(YmacrosYcat),5,T9,T10,T11,T12,Ynil);
    T7 = CALL1(1,CHKREF(Ylst),T8);
    T4 = CALLN(1,CHKREF(YmacrosYcat),4,T5,T6,T7,Ynil);
    T2 = T4;
    T0 = T2;
  } else {
    T27 = CALL1(1,CHKREF(Yhead),clauses_);
    clauseF607 = T27;
    T29 = FUNFAB(fun_76,8,clauseF607,FREEREF(1),clauses_,exps_,inits_,preds_,nows_,nexts_);
    T28 = with_exit(T29);
    T26 = T28;
    T0 = T26;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P grokF617;
  P x_1181F616;
  P x_1181F615;
  P x_1181F614;
  P x_1181F613;
  P x_1181F612;
  P bodyF611;
  P clausesF610;
  P x_1181F609;
  P x_1182F608;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1182_72,1);
  x_1182F608 = T1;
  FUNINIT(x_1182F608, 1,return_);
  x_1181F609 = FREEREF(0);
  clausesF610 = YPfalse;
  clausesF610 = BOXFAB(clausesF610);
  bodyF611 = YPfalse;
  bodyF611 = BOXFAB(bodyF611);
  T7 = CALL2(1,CHKREF(YisaQ),x_1181F609,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1181F609,CHKREF(lit_80),x_1182F608);
    x_1181F612 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1181F612,x_1182F608);
    x_1181F613 = T11;
    BOXVAL(clausesF610) = x_1181F613;
    x_1181F614 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1181F614,x_1182F608);
    T12 = T13;
    T14 = CALL1(1,CHKREF(Ytail),x_1181F612);
    x_1181F615 = T14;
    BOXVAL(bodyF611) = x_1181F615;
    x_1181F616 = Ynil;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1181F616,x_1182F608);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1182F608,CHKREF(lit_6),x_1181F609);
  }
  T19 = FUNSHELL(1,fun_grok_77,2);
  grokF617 = T19;
  FUNINIT(grokF617, 2,bodyF611,grokF617);
  T21 = BOXVAL(clausesF610);
  T20 = CALLN(0,grokF617,6,T21,Ynil,Ynil,Ynil,Ynil,Ynil);
  T18 = T20;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_78,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1194_80) {
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

FUNCODEDEF(fun_x_1198_81) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_100),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P return_;
  P old_valueF629;
  P nameF628;
  P x_1197F627;
  P x_1197F626;
  P x_1197F625;
  P x_1197F624;
  P x_1197F623;
  P restF622;
  P valueF621;
  P varF620;
  P x_1197F619;
  P x_1198F618;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1198_81,2);
  x_1198F618 = T1;
  FUNINIT(x_1198F618, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  x_1197F619 = T3;
  varF620 = YPfalse;
  varF620 = BOXFAB(varF620);
  valueF621 = YPfalse;
  valueF621 = BOXFAB(valueF621);
  restF622 = YPfalse;
  restF622 = BOXFAB(restF622);
  T10 = CALL2(1,CHKREF(YisaQ),x_1197F619,CHKREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1197F619,x_1198F618);
    x_1197F623 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1197F623,x_1198F618);
    BOXVAL(varF620) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1197F623);
    x_1197F624 = T15;
    T17 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1197F624,x_1198F618);
    BOXVAL(valueF621) = T17;
    T18 = CALL1(1,CHKREF(Ytail),x_1197F624);
    x_1197F625 = T18;
    T19 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1197F625,x_1198F618);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,CHKREF(Ytail),x_1197F619);
    x_1197F626 = T20;
    BOXVAL(restF622) = x_1197F626;
    x_1197F627 = Ynil;
    T22 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1197F627,x_1198F618);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1198F618,CHKREF(lit_6),x_1197F619);
  }
  T26 = BOXVAL(varF620);
  T25 = CALL1(1,CHKREF(YmacrosYvar_name),T26);
  nameF628 = T25;
  T28 = CALL0(1,CHKREF(YmacrosYgensym));
  old_valueF629 = T28;
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T35 = CALL1(1,CHKREF(Ylst),old_valueF629);
  T36 = CALL1(1,CHKREF(Ylst),nameF628);
  T34 = CALL3(1,CHKREF(YmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,CHKREF(Ylst),T34);
  T32 = CALL2(1,CHKREF(YmacrosYcat),T33,Ynil);
  T31 = CALL1(1,CHKREF(Ylst),T32);
  T39 = CALL1(1,CHKREF(Ylst),CHKREF(lit_101));
  T42 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T45 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T46 = CALL1(1,CHKREF(Ylst),nameF628);
  T48 = BOXVAL(valueF621);
  T47 = CALL1(1,CHKREF(Ylst),T48);
  T44 = CALLN(1,CHKREF(YmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,CHKREF(Ylst),T44);
  T51 = CALL1(1,CHKREF(Ylst),CHKREF(lit_97));
  T54 = BOXVAL(restF622);
  T53 = CALL2(1,CHKREF(YmacrosYcat),T54,Ynil);
  T52 = CALL1(1,CHKREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALLN(1,CHKREF(YmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,CHKREF(Ylst),T50);
  T41 = CALLN(1,CHKREF(YmacrosYcat),4,T42,T43,T49,Ynil);
  T40 = CALL1(1,CHKREF(Ylst),T41);
  T58 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T59 = CALL1(1,CHKREF(Ylst),nameF628);
  T60 = CALL1(1,CHKREF(Ylst),old_valueF629);
  T57 = CALLN(1,CHKREF(YmacrosYcat),4,T58,T59,T60,Ynil);
  T56 = CALL1(1,CHKREF(Ylst),T57);
  T38 = CALLN(1,CHKREF(YmacrosYcat),4,T39,T40,T56,Ynil);
  T37 = CALL1(1,CHKREF(Ylst),T38);
  T29 = CALLN(1,CHKREF(YmacrosYcat),4,T30,T31,T37,Ynil);
  T27 = T29;
  T24 = T27;
  T8 = T24;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1196_83) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_82,2,FREEREF(1),FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P return_;
  P x_1195F631;
  P x_1196F630;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_83,3);
  x_1196F630 = T1;
  FUNINIT(x_1196F630, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1195F631 = T3;
  T4 = CALL2(1,CHKREF(YisaQ),x_1195F631,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1195F631,x_1196F630);
  } else {
    T6 = CALL2(1,x_1196F630,CHKREF(lit_6),x_1195F631);
  }
  T8 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,CHKREF(YmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P return_;
  P x_1193F638;
  P x_1193F637;
  P x_1193F636;
  P bodyF635;
  P bindingsF634;
  P x_1193F633;
  P x_1194F632;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1194_80,1);
  x_1194F632 = T1;
  FUNINIT(x_1194F632, 1,return_);
  x_1193F633 = FREEREF(0);
  bindingsF634 = YPfalse;
  bindingsF634 = BOXFAB(bindingsF634);
  bodyF635 = YPfalse;
  bodyF635 = BOXFAB(bodyF635);
  T7 = CALL2(1,CHKREF(YisaQ),x_1193F633,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1193F633,CHKREF(lit_97),x_1194F632);
    x_1193F636 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1193F636,x_1194F632);
    BOXVAL(bindingsF634) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1193F636);
    x_1193F637 = T12;
    BOXVAL(bodyF635) = x_1193F637;
    x_1193F638 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1193F638,x_1194F632);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1194F632,CHKREF(lit_6),x_1193F633);
  }
  T17 = FUNFAB(fun_84,2,bindingsF634,bodyF635);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_85,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1202_87) {
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

FUNCODEDEF(fun_88) {
  P return_;
  P vnamF648;
  P typF647;
  P namF646;
  P x_1201F645;
  P x_1201F644;
  P x_1201F643;
  P valueF642;
  P varF641;
  P x_1201F640;
  P x_1202F639;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1202_87,1);
  x_1202F639 = T1;
  FUNINIT(x_1202F639, 1,return_);
  x_1201F640 = FREEREF(0);
  varF641 = YPfalse;
  varF641 = BOXFAB(varF641);
  valueF642 = YPfalse;
  valueF642 = BOXFAB(valueF642);
  T7 = CALL2(1,CHKREF(YisaQ),x_1201F640,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1201F640,CHKREF(lit_103),x_1202F639);
    x_1201F643 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1201F643,x_1202F639);
    BOXVAL(varF641) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1201F643);
    x_1201F644 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1201F644,x_1202F639);
    BOXVAL(valueF642) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1201F644);
    x_1201F645 = T15;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1201F645,x_1202F639);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1202F639,CHKREF(lit_6),x_1201F640);
  }
  T20 = BOXVAL(varF641);
  T19 = CALL1(1,CHKREF(YmacrosYvar_name),T20);
  namF646 = T19;
  T23 = BOXVAL(varF641);
  T22 = CALL1(1,CHKREF(YmacrosYvar_type),T23);
  typF647 = T22;
  T25 = CALL3(1,CHKREF(YmacrosYmake_sym),CHKREF(lit_104),namF646,CHKREF(lit_105));
  vnamF648 = T25;
  T27 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_106));
  T31 = CALL1(1,CHKREF(Ylst),vnamF648);
  T33 = BOXVAL(valueF642);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T29 = CALLN(1,CHKREF(YmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,CHKREF(Ylst),T29);
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_107));
  T37 = CALL1(1,CHKREF(Ylst),namF646);
  T40 = CALL1(1,CHKREF(Ylst),CHKREF(lit_108));
  T41 = CALL1(1,CHKREF(Ylst),typF647);
  T39 = CALL3(1,CHKREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,CHKREF(Ylst),T39);
  T42 = CALL1(1,CHKREF(Ylst),vnamF648);
  T35 = CALLN(1,CHKREF(YmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,CHKREF(Ylst),T35);
  T45 = CALL1(1,CHKREF(Ylst),CHKREF(lit_107));
  T47 = CALL1(1,CHKREF(YmacrosYmake_setter_name),namF646);
  T46 = CALL1(1,CHKREF(Ylst),T47);
  T52 = CALL1(1,CHKREF(Ylst),CHKREF(lit_109));
  T53 = CALL1(1,CHKREF(Ylst),typF647);
  T51 = CALL3(1,CHKREF(YmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,CHKREF(Ylst),T51);
  T49 = CALL2(1,CHKREF(YmacrosYcat),T50,Ynil);
  T48 = CALL1(1,CHKREF(Ylst),T49);
  T56 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T57 = CALL1(1,CHKREF(Ylst),vnamF648);
  T58 = CALL1(1,CHKREF(Ylst),CHKREF(lit_109));
  T55 = CALLN(1,CHKREF(YmacrosYcat),4,T56,T57,T58,Ynil);
  T54 = CALL1(1,CHKREF(Ylst),T55);
  T44 = CALLN(1,CHKREF(YmacrosYcat),5,T45,T46,T48,T54,Ynil);
  T43 = CALL1(1,CHKREF(Ylst),T44);
  T26 = CALLN(1,CHKREF(YmacrosYcat),5,T27,T28,T34,T43,Ynil);
  T24 = T26;
  T21 = T24;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_88,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1206_90) {
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

FUNCODEDEF(fun_91) {
  P return_;
  P x_1205F653;
  P x_1205F652;
  P namesF651;
  P x_1205F650;
  P x_1206F649;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_90,1);
  x_1206F649 = T1;
  FUNINIT(x_1206F649, 1,return_);
  x_1205F650 = FREEREF(0);
  namesF651 = YPfalse;
  namesF651 = BOXFAB(namesF651);
  T5 = CALL2(1,CHKREF(YisaQ),x_1205F650,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1205F650,CHKREF(lit_111),x_1206F649);
    x_1205F652 = T7;
    BOXVAL(namesF651) = x_1205F652;
    x_1205F653 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1205F653,x_1206F649);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1206F649,CHKREF(lit_6),x_1205F650);
  }
  T13 = BOXVAL(namesF651);
  T12 = CALL1(1,CHKREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
    T18 = CALL1(1,CHKREF(Ylst),CHKREF(lit_56));
    T19 = CALL1(1,CHKREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF651);
    T21 = CALL1(1,CHKREF(Yhead),T22);
    T20 = CALL1(1,CHKREF(Ylst),T21);
    T17 = CALLN(1,CHKREF(YmacrosYcat),4,T18,T19,T20,Ynil);
    T16 = CALL1(1,CHKREF(Ylst),T17);
    T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_112));
    T28 = BOXVAL(namesF651);
    T27 = CALL1(1,CHKREF(Yhead),T28);
    T26 = CALL1(1,CHKREF(Ylst),T27);
    T24 = CALL3(1,CHKREF(YmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,CHKREF(Ylst),T24);
    T31 = CALL1(1,CHKREF(Ylst),CHKREF(lit_111));
    T33 = BOXVAL(namesF651);
    T32 = CALL1(1,CHKREF(Ytail),T33);
    T30 = CALL3(1,CHKREF(YmacrosYcat),T31,T32,Ynil);
    T29 = CALL1(1,CHKREF(Ylst),T30);
    T14 = CALLN(1,CHKREF(YmacrosYcat),5,T15,T16,T23,T29,Ynil);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_91,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YmacrosY___main_0___() {
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"exp");
  lit_1 = YPPsym((P)"return");
  lit_2 = YPPsym((P)"x-1074");
  lit_3 = YPPsym((P)"msg");
  lit_4 = YPPsym((P)"args");
  lit_5 = YPPsym((P)"next-method");
  lit_6 = YPsb((P)"Match Pattern Failure");
  lit_7 = YPPsym((P)"let");
  lit_8 = YPPsym((P)"next-mets");
  lit_9 = YPPsym((P)"%next-methods");
  lit_10 = YPPsym((P)"if");
  lit_11 = YPPsym((P)"napply");
  lit_12 = YPPsym((P)"head");
  lit_13 = YPPsym((P)"tail");
  lit_14 = YPPsym((P)"quote");
  lit_15 = YPPsym((P)"error");
  lit_16 = YPsb((P)"No next methods");
  T2 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1074_0 = YPmet(FUNCODEREF(fun_x_1074_0),CHKREF(lit_2),T2,ENVNUL);
  T1 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL);
  T3 = fun_2;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"next-method"),T3);
  lit_17 = YPPsym((P)"x-1078");
  lit_18 = YPPsym((P)"apply-next-method");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1078_3 = YPmet(FUNCODEREF(fun_x_1078_3),CHKREF(lit_17),T6,ENVNUL);
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL);
  T4 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL);
  T7 = fun_5;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"apply-next-method"),T7);
  lit_20 = YPPsym((P)"x-1082");
  lit_21 = YPPsym((P)"apply");
  T10 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1082_6 = YPmet(FUNCODEREF(fun_x_1082_6),CHKREF(lit_20),T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL);
  T8 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL);
  T11 = fun_8;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"apply"),T11);
  lit_22 = YPPsym((P)"x-1086");
  lit_23 = YPPsym((P)"collecting");
  lit_24 = YPPsym((P)"collector-");
  lit_25 = YPPsym((P)"collected");
  T14 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1086_9 = YPmet(FUNCODEREF(fun_x_1086_9),CHKREF(lit_22),T14,ENVNUL);
  T13 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL);
  T15 = fun_11;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collecting"),T15);
  lit_26 = YPPsym((P)"x-1090");
  lit_27 = YPPsym((P)"collect");
  lit_28 = YPPsym((P)"set");
  lit_29 = YPPsym((P)"pair");
  T18 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1090_12 = YPmet(FUNCODEREF(fun_x_1090_12),CHKREF(lit_26),T18,ENVNUL);
  T17 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T17,ENVNUL);
  T16 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T16,ENVNUL);
  T19 = fun_14;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collect"),T19);
  lit_30 = YPPsym((P)"x-1094");
  lit_31 = YPPsym((P)"rev!");
  T22 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),CHKREF(lit_30),T22,ENVNUL);
  T21 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T21,ENVNUL);
  T20 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T20,ENVNUL);
  T23 = fun_17;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collected"),T23);
  lit_32 = YPPsym((P)"lift-place-subforms");
  lit_33 = YPPsym((P)"place");
  lit_34 = YPPsym((P)"munch");
  lit_35 = YPPsym((P)"subforms");
  T25 = YPsig(YPPlist(1,CHKREF(lit_35)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_munch_18 = YPmet(FUNCODEREF(fun_munch_18),CHKREF(lit_34),T25,ENVNUL);
  T24 = YPsig(YPPlist(1,CHKREF(lit_33)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  YmacrosYlift_place_subforms = YPmet(FUNCODEREF(YmacrosYlift_place_subforms),CHKREF(lit_32),T24,ENVNUL);
  T26 = YmacrosYlift_place_subforms;
  YmacrosYlift_place_subforms = T26;
  lit_36 = YPPsym((P)"x-1100");
  lit_37 = YPPsym((P)"inc");
  lit_38 = YPPsym((P)"x-1102");
  lit_39 = YPPsym((P)"+");
  T31 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1100_20 = YPmet(FUNCODEREF(fun_x_1100_20),CHKREF(lit_36),T31,ENVNUL);
  T30 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1102_21 = YPmet(FUNCODEREF(fun_x_1102_21),CHKREF(lit_38),T30,ENVNUL);
  T29 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T28,ENVNUL);
  T27 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T27,ENVNUL);
  T32 = fun_24;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"inc"),T32);
  lit_40 = YPPsym((P)"x-1108");
  lit_41 = YPPsym((P)"dec");
  lit_42 = YPPsym((P)"x-1110");
  lit_43 = YPPsym((P)"-");
  T37 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),CHKREF(lit_40),T37,ENVNUL);
  T36 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1110_26 = YPmet(FUNCODEREF(fun_x_1110_26),CHKREF(lit_42),T36,ENVNUL);
  T35 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T35,ENVNUL);
  T34 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T34,ENVNUL);
  T33 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T33,ENVNUL);
  T38 = fun_29;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dec"),T38);
  lit_44 = YPPsym((P)"x-1114");
  lit_45 = YPPsym((P)"pushf");
  lit_46 = YPPsym((P)"push");
  T41 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1114_30 = YPmet(FUNCODEREF(fun_x_1114_30),CHKREF(lit_44),T41,ENVNUL);
  T40 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL);
  T39 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL);
  T42 = fun_32;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"pushf"),T42);
  lit_47 = YPPsym((P)"x-1118");
  lit_48 = YPPsym((P)"popf");
  lit_49 = YPPsym((P)"tup");
  lit_50 = YPPsym((P)"pop");
  T45 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1118_33 = YPmet(FUNCODEREF(fun_x_1118_33),CHKREF(lit_47),T45,ENVNUL);
  T44 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL);
  T43 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL);
  T46 = fun_35;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"popf"),T46);
  lit_51 = YPPsym((P)"x-1122");
  lit_52 = YPPsym((P)"unless");
  lit_53 = YPPsym((P)"not");
  lit_54 = YPPsym((P)"seq");
  T49 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1122_36 = YPmet(FUNCODEREF(fun_x_1122_36),CHKREF(lit_51),T49,ENVNUL);
  T48 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T47,ENVNUL);
  T50 = fun_38;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"unless"),T50);
  lit_55 = YPPsym((P)"x-1126");
  lit_56 = YPPsym((P)"when");
  T53 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1126_39 = YPmet(FUNCODEREF(fun_x_1126_39),CHKREF(lit_55),T53,ENVNUL);
  T52 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T52,ENVNUL);
  T51 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T51,ENVNUL);
  T54 = fun_41;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"when"),T54);
  lit_57 = YPPsym((P)"x-1134");
  lit_58 = YPPsym((P)"or");
  lit_59 = YPPsym((P)"x-1136");
  lit_60 = YPPsym((P)"x-1138");
  lit_61 = YPPsym((P)"tmp");
  T61 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1134_42 = YPmet(FUNCODEREF(fun_x_1134_42),CHKREF(lit_57),T61,ENVNUL);
  T60 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1136_43 = YPmet(FUNCODEREF(fun_x_1136_43),CHKREF(lit_59),T60,ENVNUL);
  T59 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1138_44 = YPmet(FUNCODEREF(fun_x_1138_44),CHKREF(lit_60),T59,ENVNUL);
  T58 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T58,ENVNUL);
  T57 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T57,ENVNUL);
  T56 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T56,ENVNUL);
  T55 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T55,ENVNUL);
  T62 = fun_48;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"or"),T62);
  lit_62 = YPPsym((P)"x-1146");
  lit_63 = YPPsym((P)"and");
  lit_64 = YPPsym((P)"x-1148");
  lit_65 = YPPsym((P)"x-1150");
  T69 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1146_49 = YPmet(FUNCODEREF(fun_x_1146_49),CHKREF(lit_62),T69,ENVNUL);
  T68 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1148_50 = YPmet(FUNCODEREF(fun_x_1148_50),CHKREF(lit_64),T68,ENVNUL);
  T67 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1150_51 = YPmet(FUNCODEREF(fun_x_1150_51),CHKREF(lit_65),T67,ENVNUL);
  T66 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T66,ENVNUL);
  T65 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T65,ENVNUL);
  T64 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T64,ENVNUL);
  T63 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T63,ENVNUL);
  T70 = fun_55;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"and"),T70);
  lit_66 = YPPsym((P)"x-1156");
  lit_67 = YPPsym((P)"case");
  lit_68 = YPPsym((P)"x-1158");
  lit_69 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  T75 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1156_56 = YPmet(FUNCODEREF(fun_x_1156_56),CHKREF(lit_66),T75,ENVNUL);
  T74 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1158_57 = YPmet(FUNCODEREF(fun_x_1158_57),CHKREF(lit_68),T74,ENVNUL);
  T73 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T73,ENVNUL);
  T72 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T72,ENVNUL);
  T71 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T71,ENVNUL);
  T76 = fun_60;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case"),T76);
  lit_70 = YPPsym((P)"x-1166");
  lit_71 = YPPsym((P)"select");
  lit_72 = YPPsym((P)"x-1168");
  lit_73 = YPPsym((P)"x-1170");
  lit_74 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_75 = YPPsym((P)"x");
  lit_76 = YPPsym((P)"==");
  T84 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1166_61 = YPmet(FUNCODEREF(fun_x_1166_61),CHKREF(lit_70),T84,ENVNUL);
  T83 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1168_62 = YPmet(FUNCODEREF(fun_x_1168_62),CHKREF(lit_72),T83,ENVNUL);
  T82 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1170_63 = YPmet(FUNCODEREF(fun_x_1170_63),CHKREF(lit_73),T82,ENVNUL);
  T81 = YPsig(YPPlist(1,CHKREF(lit_75)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T81,ENVNUL);
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T80,ENVNUL);
  T79 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T79,ENVNUL);
  T78 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T78,ENVNUL);
  T77 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T77,ENVNUL);
  T85 = fun_68;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"select"),T85);
  lit_77 = YPPsym((P)"x-1174");
  lit_78 = YPPsym((P)"assert");
  T88 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1174_69 = YPmet(FUNCODEREF(fun_x_1174_69),CHKREF(lit_77),T88,ENVNUL);
  T87 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T86,ENVNUL);
  T89 = fun_71;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"assert"),T89);
  lit_79 = YPPsym((P)"x-1182");
  lit_80 = YPPsym((P)"for");
  lit_81 = YPPsym((P)"grok");
  lit_82 = YPPsym((P)"clauses");
  lit_83 = YPPsym((P)"exps");
  lit_84 = YPPsym((P)"inits");
  lit_85 = YPPsym((P)"preds");
  lit_86 = YPPsym((P)"nows");
  lit_87 = YPPsym((P)"nexts");
  lit_88 = YPPsym((P)"rep");
  lit_89 = YPPsym((P)"x-1184");
  lit_90 = YPPsym((P)"ini-state");
  lit_91 = YPPsym((P)"fin-state?");
  lit_92 = YPPsym((P)"x-1186");
  lit_93 = YPPsym((P)"now-elt");
  lit_94 = YPPsym((P)"now-key");
  lit_95 = YPPsym((P)"nxt-state");
  T97 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1182_72 = YPmet(FUNCODEREF(fun_x_1182_72),CHKREF(lit_79),T97,ENVNUL);
  T96 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1184_73 = YPmet(FUNCODEREF(fun_x_1184_73),CHKREF(lit_89),T96,ENVNUL);
  T95 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1186_74 = YPmet(FUNCODEREF(fun_x_1186_74),CHKREF(lit_92),T95,ENVNUL);
  T94 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T94,ENVNUL);
  T93 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T93,ENVNUL);
  T92 = YPsig(YPPlist(6,CHKREF(lit_82),CHKREF(lit_83),CHKREF(lit_84),CHKREF(lit_85),CHKREF(lit_86),CHKREF(lit_87)),YPPlist(6,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)6),CHKREF(YLanyG),Ynil);
  fun_grok_77 = YPmet(FUNCODEREF(fun_grok_77),CHKREF(lit_81),T92,ENVNUL);
  T91 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T91,ENVNUL);
  T90 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T90,ENVNUL);
  T98 = fun_79;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"for"),T98);
  lit_96 = YPPsym((P)"x-1194");
  lit_97 = YPPsym((P)"dlet");
  lit_98 = YPPsym((P)"x-1196");
  lit_99 = YPPsym((P)"x-1198");
  lit_100 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_101 = YPPsym((P)"fin");
  T105 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1194_80 = YPmet(FUNCODEREF(fun_x_1194_80),CHKREF(lit_96),T105,ENVNUL);
  T104 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1198_81 = YPmet(FUNCODEREF(fun_x_1198_81),CHKREF(lit_99),T104,ENVNUL);
  T103 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T103,ENVNUL);
  T102 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1196_83 = YPmet(FUNCODEREF(fun_x_1196_83),CHKREF(lit_98),T102,ENVNUL);
  T101 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T101,ENVNUL);
  T100 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T100,ENVNUL);
  T99 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T99,ENVNUL);
  T106 = fun_86;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dlet"),T106);
  lit_102 = YPPsym((P)"x-1202");
  lit_103 = YPPsym((P)"def-fun-var");
  lit_104 = YPsb((P)"*");
  lit_105 = YPsb((P)"*");
  lit_106 = YPPsym((P)"dv");
  lit_107 = YPPsym((P)"dm");
  lit_108 = YPPsym((P)"=>");
  lit_109 = YPPsym((P)"z");
  T109 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1202_87 = YPmet(FUNCODEREF(fun_x_1202_87),CHKREF(lit_102),T109,ENVNUL);
  T108 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T108,ENVNUL);
  T107 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T107,ENVNUL);
  T110 = fun_89;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"def-fun-var"),T110);
  lit_110 = YPPsym((P)"x-1206");
  lit_111 = YPPsym((P)"need-implementation");
  lit_112 = YPPsym((P)"export");
  T113 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1206_90 = YPmet(FUNCODEREF(fun_x_1206_90),CHKREF(lit_110),T113,ENVNUL);
  T112 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T112,ENVNUL);
  T111 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T111,ENVNUL);
  T114 = fun_92;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"need-implementation"),T114);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T115 = YPfalse;
  return T115;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%slot", &module_info_boot, "%slot"},
  {"%selt", &module_info_boot, "%selt"},
  {"<log>", &module_info_boot, "<log>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%im", &module_info_boot, "%im"},
  {"%iu", &module_info_boot, "%iu"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"%i<", &module_info_boot, "%i<"},
  {"not", &module_info_boot, "not"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"%i+", &module_info_boot, "%i+"},
  {"<union>", &module_info_boot, "<union>"},
  {"%snul", &module_info_boot, "%snul"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"let", &module_info_boot, "let"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"loc", &module_info_boot, "loc"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"dg", &module_info_boot, "dg"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%iv", &module_info_boot, "%iv"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"tail", &module_info_boot, "tail"},
  {"%ft", &module_info_boot, "%ft"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%su", &module_info_boot, "%su"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%i?", &module_info_boot, "%i?"},
  {"use", &module_info_boot, "use"},
  {"@olen", &module_info_boot, "@olen"},
  {"bound?", &module_info_boot, "bound?"},
  {"%velt", &module_info_boot, "%velt"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"%i^", &module_info_boot, "%i^"},
  {"%ib", &module_info_boot, "%ib"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"export", &module_info_boot, "export"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"%f+", &module_info_boot, "%f+"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"%bb", &module_info_boot, "%bb"},
  {"class-name", &module_info_boot, "class-name"},
  {"%vec", &module_info_boot, "%vec"},
  {"isa?", &module_info_boot, "isa?"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<type>", &module_info_boot, "<type>"},
  {"<class>", &module_info_boot, "<class>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"%pair", &module_info_boot, "%pair"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"type-error", &module_info_boot, "type-error"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%sb", &module_info_boot, "%sb"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"%f-", &module_info_boot, "%f-"},
  {"<str>", &module_info_boot, "<str>"},
  {"dc", &module_info_boot, "dc"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"lst", &module_info_boot, "lst"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%slen", &module_info_boot, "%slen"},
  {"%i*", &module_info_boot, "%i*"},
  {"%f<", &module_info_boot, "%f<"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"%str", &module_info_boot, "%str"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%lb", &module_info_boot, "%lb"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"isa", &module_info_boot, "isa"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%c<", &module_info_boot, "%c<"},
  {"object-class", &module_info_boot, "object-class"},
  {"lab", &module_info_boot, "lab"},
  {"@+", &module_info_boot, "@+"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%fb", &module_info_boot, "%fb"},
  {"%cb", &module_info_boot, "%cb"},
  {"fin", &module_info_boot, "fin"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%f/", &module_info_boot, "%f/"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"dss", &module_info_boot, "dss"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"%i&", &module_info_boot, "%i&"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"<col>", &module_info_boot, "<col>"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"df", &module_info_boot, "df"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"nul", &module_info_boot, "nul"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%it/", &module_info_boot, "%it/"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"type-object", &module_info_boot, "type-object"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%fu", &module_info_boot, "%fu"},
  {"%raw", &module_info_boot, "%raw"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%i-", &module_info_boot, "%i-"},
  {"%untag", &module_info_boot, "%untag"},
  {"mif", &module_info_boot, "mif"},
  {"%isa", &module_info_boot, "%isa"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%i=", &module_info_boot, "%i="},
  {"head", &module_info_boot, "head"},
  {"error", &module_info_boot, "error"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"ds", &module_info_boot, "ds"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"%f=", &module_info_boot, "%f="},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"<int>", &module_info_boot, "<int>"},
  {"%lu", &module_info_boot, "%lu"},
  {"dm", &module_info_boot, "dm"},
  {"rep", &module_info_boot, "rep"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%i!", &module_info_boot, "%i!"},
  {"%f*", &module_info_boot, "%f*"},
  {"<num>", &module_info_boot, "<num>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"dv", &module_info_boot, "dv"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"try", &module_info_boot, "try"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"slot", &module_info_boot, "slot"},
  {"@<", &module_info_boot, "@<"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%c=", &module_info_boot, "%c="},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"if", &module_info_boot, "if"},
  {"add-slot", &module_info_boot, "add-slot"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"and", NULL},
  {"match-sublist", &YmacrosYmatch_sublist},
  {"def-fun-var", NULL},
  {"pushf", NULL},
  {"apply", NULL},
  {"cat", &YmacrosYcat},
  {"next-method", NULL},
  {"empty?", &YmacrosYemptyQ},
  {"match-atom", &YmacrosYmatch_atom},
  {"gensym", &YmacrosYgensym},
  {"collected", NULL},
  {"for", NULL},
  {"case", NULL},
  {"match-unquote", &YmacrosYmatch_unquote},
  {"collecting", NULL},
  {"apply-next-method", NULL},
  {"when", NULL},
  {"need-implementation", NULL},
  {"map", &YmacrosYmap},
  {"match-empty-list", &YmacrosYmatch_empty_list},
  {"---main-0---", NULL},
  {"inc", NULL},
  {"==", &YmacrosYEE},
  {"tup", &YmacrosYtup},
  {"popf", NULL},
  {"select", NULL},
  {"pair", &YmacrosYpair},
  {"lift-place-subforms", &YmacrosYlift_place_subforms},
  {"make-setter-name", &YmacrosYmake_setter_name},
  {"collect", NULL},
  {"assert", NULL},
  {"dec", NULL},
  {"dlet", NULL},
  {"or", NULL},
  {"var-type", &YmacrosYvar_type},
  {"make-sym", &YmacrosYmake_sym},
  {"unless", NULL},
  {"napply", &YmacrosYnapply},
  {"var-name", &YmacrosYvar_name},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"and", "and"},
  {"match-sublist", "match-sublist"},
  {"def-fun-var", "def-fun-var"},
  {"pushf", "pushf"},
  {"cat", "cat"},
  {"next-method", "next-method"},
  {"empty?", "empty?"},
  {"match-atom", "match-atom"},
  {"gensym", "gensym"},
  {"collected", "collected"},
  {"for", "for"},
  {"case", "case"},
  {"match-unquote", "match-unquote"},
  {"collecting", "collecting"},
  {"apply-next-method", "apply-next-method"},
  {"when", "when"},
  {"need-implementation", "need-implementation"},
  {"map", "map"},
  {"match-empty-list", "match-empty-list"},
  {"inc", "inc"},
  {"==", "=="},
  {"tup", "tup"},
  {"popf", "popf"},
  {"lst", "lst"},
  {"select", "select"},
  {"pair", "pair"},
  {"make-setter-name", "make-setter-name"},
  {"collect", "collect"},
  {"assert", "assert"},
  {"dec", "dec"},
  {"dlet", "dlet"},
  {"apply", "apply"},
  {"or", "or"},
  {"error", "error"},
  {"var-type", "var-type"},
  {"make-sym", "make-sym"},
  {"unless", "unless"},
  {"napply", "napply"},
  {"var-name", "var-name"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_macros;
MODULE_INFO module_info_macros = {
  "macros",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);

/* EXPRESSION: */

extern void load_module_macros (void);

void load_module_macros (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();

  (P)YmacrosY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
