/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

EXT(YLlocG,"boot","<loc>");
EXT(YLseqG,"boot","<seq>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(Yslot_init,"boot","slot-init");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
DEF(YmacrosYpair,"macros","pair");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLtraitsG,"boot","<traits>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfapply,"boot","fapply");
DEF(YmacrosYvar_name,"macros","var-name");
EXT(YLsigG,"boot","<sig>");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YobjectL,"boot","object<");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(Yfun_name,"boot","fun-name");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YPsymbols,"boot","%symbols");
EXT(YPsnul,"boot","%snul");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLcolG,"boot","<col>");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YmacrosYcat,"macros","cat");
EXT(Yerror,"boot","error");
EXT(Ysig_value,"boot","sig-value");
DEF(YmacrosYtup,"macros","tup");
EXT(YLvecG,"boot","<vec>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ynil,"boot","nil");
DEF(YmacrosYmake_sym,"macros","make-sym");
EXT(Ytype_error,"boot","type-error");
EXT(YLslotG,"boot","<slot>");
EXT(Ymet_appQ,"boot","met-app?");
EXT(Ytail,"boot","tail");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLsymG,"boot","<sym>");
EXT(YLtupG,"boot","<tup>");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynul,"boot","nul");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Ysig_names,"boot","sig-names");
EXT(YLlogG,"boot","<log>");
EXT(YPisa,"boot","%isa");
DEF(YmacrosYemptyQ,"macros","empty?");
EXT(YisaQ,"boot","isa?");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
EXT(Yobject_parents,"boot","object-parents");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YLgenG,"boot","<gen>");
DEF(YmacrosYEE,"macros","==");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Ynot,"boot","not");
EXT(YLchrG,"boot","<chr>");
DEF(YmacrosYmap,"macros","map");
EXT(YLanyG,"boot","<any>");
EXT(Yobject_slots,"boot","object-slots");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YLoptsG,"boot","<opts>");
EXT(Yslot_type,"boot","slot-type");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YLintG,"boot","<int>");
EXT(Yfind_setter,"boot","find-setter");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(YLnumG,"boot","<num>");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLstrG,"boot","<str>");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ysym_name,"boot","sym-name");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
DEF(YmacrosYgensym,"macros","gensym");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(Yslot_value_setter,"boot","slot-value-setter");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ysig_arity,"boot","sig-arity");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ylst,"boot","lst");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YLmetG,"boot","<met>");
EXT(YPslot,"boot","%slot");
EXT(Yhead,"boot","head");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YPvnul,"boot","%vnul");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YLfloG,"boot","<flo>");
EXT(YLflatG,"boot","<flat>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YLlstG,"boot","<lst>");
EXT(Yhead_setter,"boot","head-setter");
EXT(YPPmacro,"boot","%%macro");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YLfunG,"boot","<fun>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_92);
DEFLIT(lit_78);
DEFLIT(lit_104);
DEFLIT(lit_95);
DEFLIT(lit_64);
DEFLIT(lit_99);
DEFLIT(lit_61);
DEFLIT(lit_89);
DEFLIT(lit_88);
DEFLIT(lit_73);
DEFLIT(lit_51);
DEFLIT(lit_35);
DEFLIT(lit_4);
DEFLIT(lit_44);
DEFLIT(lit_66);
DEFLIT(lit_102);
DEFLIT(lit_71);
DEFLIT(lit_49);
DEFLIT(lit_80);
DEFLIT(lit_33);
DEFLIT(lit_39);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_13);
DEFLIT(lit_59);
DEFLIT(lit_67);
DEFLIT(lit_62);
DEFLIT(lit_86);
DEFLIT(lit_56);
DEFLIT(lit_19);
DEFLIT(lit_11);
DEFLIT(lit_75);
DEFLIT(lit_53);
DEFLIT(lit_45);
DEFLIT(lit_6);
DEFLIT(lit_25);
DEFLIT(lit_40);
DEFLIT(lit_83);
DEFLIT(lit_68);
DEFLIT(lit_82);
DEFLIT(lit_87);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_38);
DEFLIT(lit_15);
DEFLIT(lit_90);
DEFLIT(lit_93);
DEFLIT(lit_84);
DEFLIT(lit_58);
DEFLIT(lit_2);
DEFLIT(lit_21);
DEFLIT(lit_91);
DEFLIT(lit_77);
DEFLIT(lit_97);
DEFLIT(lit_47);
DEFLIT(lit_98);
DEFLIT(lit_27);
DEFLIT(lit_42);
DEFLIT(lit_94);
DEFLIT(lit_100);
DEFLIT(lit_63);
DEFLIT(lit_31);
DEFLIT(lit_65);
DEFLIT(lit_50);
DEFLIT(lit_17);
DEFLIT(lit_101);
DEFLIT(lit_70);
DEFLIT(lit_48);
DEFLIT(lit_79);
DEFLIT(lit_32);
DEFLIT(lit_12);
DEFLIT(lit_55);
DEFLIT(lit_18);
DEFLIT(lit_10);
DEFLIT(lit_74);
DEFLIT(lit_52);
DEFLIT(lit_105);
DEFLIT(lit_5);
DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_8);
DEFLIT(lit_103);
DEFLIT(lit_72);
DEFLIT(lit_81);
DEFLIT(lit_34);
DEFLIT(lit_28);
DEFLIT(lit_22);
DEFLIT(lit_37);
DEFLIT(lit_14);
DEFLIT(lit_60);
DEFLIT(lit_85);
DEFLIT(lit_57);
DEFLIT(lit_20);
DEFLIT(lit_43);
DEFLIT(lit_76);
DEFLIT(lit_54);
DEFLIT(lit_46);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_26);
DEFLIT(lit_41);
DEFLIT(lit_69);
DEFLIT(lit_106);
DEFLIT(lit_30);
DEFLIT(lit_16);
DEFLIT(lit_0);
DEFLIT(lit_96);

/* FUNCTIONS: */

LOCFOR(fun_x_1064_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1068_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1072_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1076_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_x_1080_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_munch_15);
FUNFOR(YmacrosYlift_place_subforms);
LOCFOR(fun_x_1088_17);
LOCFOR(fun_18);
LOCFOR(fun_x_1086_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_x_1096_22);
LOCFOR(fun_23);
LOCFOR(fun_x_1094_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1100_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1104_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_x_1108_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_x_1112_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_x_1124_39);
LOCFOR(fun_40);
LOCFOR(fun_x_1122_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1120_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1136_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1134_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1132_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_x_1144_53);
LOCFOR(fun_54);
LOCFOR(fun_x_1142_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1156_59);
LOCFOR(fun_60);
LOCFOR(fun_x_1154_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1152_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1160_66);
LOCFOR(fun_67);
LOCFOR(fun_68);
LOCFOR(fun_x_1172_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1170_71);
LOCFOR(fun_72);
LOCFOR(fun_grok_73);
LOCFOR(fun_x_1168_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_x_1184_77);
LOCFOR(fun_78);
LOCFOR(fun_x_1182_79);
LOCFOR(fun_80);
LOCFOR(fun_x_1180_81);
LOCFOR(fun_82);
LOCFOR(fun_83);
LOCFOR(fun_x_1188_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_x_1192_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
extern P YmacrosY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1064_0) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  ARG(return_, 0);
  P x_1063F381;
  P x_1063F380;
  P argsF379;
  P x_1063F378;
  P x_1064F377;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1064_0,1);
  x_1064F377 = T16;
  FUNINIT(x_1064F377, 1,return_);
  x_1063F378 = FREEREF(0);
  argsF379 = YPfalse;
  argsF379 = BOXFAB(argsF379);
  T9 = CALL2(CHKREF(YisaQ),x_1063F378,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1063F378,CHKREF(lit_5),x_1064F377);
    x_1063F380 = T8;
    BOXVAL(argsF379) = x_1063F380;
    x_1063F381 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1063F381,x_1064F377);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1064F377,CHKREF(lit_4),x_1063F378);
  }
  T15 = CALL1(CHKREF(Ylst),CHKREF(lit_3));
  T14 = CALL1(CHKREF(Ylst),CHKREF(lit_2));
  T13 = CALL2(CHKREF(YmacrosYcat),T14,Ynil);
  T12 = CALL1(CHKREF(Ylst),T13);
  T11 = BOXVAL(argsF379);
  T10 = CALLN(CHKREF(YmacrosYcat),4,T15,T12,T11,Ynil);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1068_3) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(return_, 0);
  P x_1067F386;
  P x_1067F385;
  P argsF384;
  P x_1067F383;
  P x_1068F382;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = FUNSHELL(0,fun_x_1068_3,1);
  x_1068F382 = T19;
  FUNINIT(x_1068F382, 1,return_);
  x_1067F383 = FREEREF(0);
  argsF384 = YPfalse;
  argsF384 = BOXFAB(argsF384);
  T11 = CALL2(CHKREF(YisaQ),x_1067F383,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1067F383,CHKREF(lit_10),x_1068F382);
    x_1067F385 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1067F385,x_1068F382);
    BOXVAL(argsF384) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1067F385);
    x_1067F386 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1067F386,x_1068F382);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1068F382,CHKREF(lit_4),x_1067F383);
  }
  T18 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T17 = CALL1(CHKREF(Ylst),CHKREF(lit_2));
  T16 = CALL2(CHKREF(YmacrosYcat),T17,Ynil);
  T15 = CALL1(CHKREF(Ylst),T16);
  T14 = BOXVAL(argsF384);
  T13 = CALL1(CHKREF(Ylst),T14);
  T12 = CALLN(CHKREF(YmacrosYcat),4,T18,T15,T13,Ynil);
  T2 = T12;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_4,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1072_6) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  ARG(return_, 0);
  P x_1071F394;
  P x_1071F393;
  P x_1071F392;
  P x_1071F391;
  P nameF390;
  P bodyF389;
  P x_1071F388;
  P x_1072F387;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T31 = FUNSHELL(0,fun_x_1072_6,1);
  x_1072F387 = T31;
  FUNINIT(x_1072F387, 1,return_);
  x_1071F388 = FREEREF(0);
  bodyF389 = YPfalse;
  bodyF389 = BOXFAB(bodyF389);
  T13 = CALL2(CHKREF(YisaQ),x_1071F388,CHKREF(YLlstG));
  if (T13 != YPfalse) {
    T12 = CALL3(CHKREF(YmacrosYmatch_atom),x_1071F388,CHKREF(lit_16),x_1072F387);
    x_1071F391 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1071F391,x_1072F387);
    x_1071F392 = T10;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1071F392,x_1072F387);
    T11 = CALL1(CHKREF(Ytail),x_1071F391);
    x_1071F393 = T11;
    BOXVAL(bodyF389) = x_1071F393;
    x_1071F394 = Ynil;
    T8 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1071F394,x_1072F387);
    T7 = T8;
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1072F387,CHKREF(lit_4),x_1071F388);
  }
  nameF390 = CHKREF(lit_15);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T29 = CALL1(CHKREF(Ylst),nameF390);
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_13));
  T27 = CALL1(CHKREF(Ylst),Ynil);
  T26 = CALL3(CHKREF(YmacrosYcat),T28,T27,Ynil);
  T25 = CALL1(CHKREF(Ylst),T26);
  T24 = CALL3(CHKREF(YmacrosYcat),T29,T25,Ynil);
  T23 = CALL1(CHKREF(Ylst),T24);
  T22 = CALL2(CHKREF(YmacrosYcat),T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = BOXVAL(bodyF389);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_12));
  T18 = CALL1(CHKREF(Ylst),nameF390);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(Ylst),T17);
  T15 = CALLN(CHKREF(YmacrosYcat),5,T30,T21,T20,T16,Ynil);
  T14 = T15;
  T2 = T14;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_7,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1076_9) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(return_, 0);
  P x_1075F400;
  P x_1075F399;
  P nameF398;
  P valueF397;
  P x_1075F396;
  P x_1076F395;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T22 = FUNSHELL(0,fun_x_1076_9,1);
  x_1076F395 = T22;
  FUNINIT(x_1076F395, 1,return_);
  x_1075F396 = FREEREF(0);
  valueF397 = YPfalse;
  valueF397 = BOXFAB(valueF397);
  T11 = CALL2(CHKREF(YisaQ),x_1075F396,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1075F396,CHKREF(lit_20),x_1076F395);
    x_1075F399 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1075F399,x_1076F395);
    BOXVAL(valueF397) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1075F399);
    x_1075F400 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1075F400,x_1076F395);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1076F395,CHKREF(lit_4),x_1075F396);
  }
  nameF398 = CHKREF(lit_15);
  T21 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T20 = CALL1(CHKREF(Ylst),nameF398);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_18));
  T18 = BOXVAL(valueF397);
  T17 = CALL1(CHKREF(Ylst),T18);
  T16 = CALL1(CHKREF(Ylst),nameF398);
  T15 = CALLN(CHKREF(YmacrosYcat),4,T19,T17,T16,Ynil);
  T14 = CALL1(CHKREF(Ylst),T15);
  T13 = CALLN(CHKREF(YmacrosYcat),4,T21,T20,T14,Ynil);
  T12 = T13;
  T2 = T12;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_10,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1080_12) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(return_, 0);
  P x_1079F405;
  P x_1079F404;
  P nameF403;
  P x_1079F402;
  P x_1080F401;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1080_12,1);
  x_1080F401 = T16;
  FUNINIT(x_1080F401, 1,return_);
  x_1079F402 = FREEREF(0);
  nameF403 = YPfalse;
  nameF403 = BOXFAB(nameF403);
  T11 = CALL2(CHKREF(YisaQ),x_1079F402,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1079F402,CHKREF(lit_12),x_1080F401);
    x_1079F404 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1079F404,x_1080F401);
    BOXVAL(nameF403) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1079F404);
    x_1079F405 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1079F405,x_1080F401);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1080F401,CHKREF(lit_4),x_1079F402);
  }
  T15 = CALL1(CHKREF(Ylst),CHKREF(lit_22));
  T14 = BOXVAL(nameF403);
  T13 = CALL1(CHKREF(Ylst),T14);
  T12 = CALL3(CHKREF(YmacrosYcat),T15,T13,Ynil);
  T2 = T12;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_13,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_munch_15) {
  ARG(subforms_, 0);
  P gF411;
  P tup3F410;
  P g_argsF409;
  P tup3F408;
  P g_declsF407;
  P tup3F406;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T21 = CALL1(CHKREF(YmacrosYemptyQ),subforms_);
  if (T21 != YPfalse) {
    T0 = Ynil;
  } else {
    T20 = CALL1(CHKREF(Ytail),subforms_);
    T19 = CALL1(FREEREF(0),T20);
    tup3F406 = T19;
    T18 = CALL1(CHKREF(Yhead),tup3F406);
    g_declsF407 = T18;
    T17 = CALL1(CHKREF(Ytail),tup3F406);
    tup3F408 = T17;
    T16 = CALL1(CHKREF(Yhead),tup3F408);
    g_argsF409 = T16;
    T15 = CALL1(CHKREF(Ytail),tup3F408);
    tup3F410 = T15;
    T14 = CALL0(CHKREF(YmacrosYgensym));
    gF411 = T14;
    T13 = CALL1(CHKREF(Ylst),gF411);
    T12 = CALL1(CHKREF(Yhead),subforms_);
    T11 = CALL1(CHKREF(Ylst),T12);
    T10 = CALL3(CHKREF(YmacrosYcat),T13,T11,Ynil);
    T9 = CALL2(CHKREF(YmacrosYpair),T10,g_declsF407);
    T8 = CALL2(CHKREF(YmacrosYpair),gF411,g_argsF409);
    T7 = CALL2(CHKREF(YmacrosYtup),T9,T8);
    T6 = T7;
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(YmacrosYlift_place_subforms) {
  ARG(place_, 0);
  P tup4F417;
  P g_argsF416;
  P tup4F415;
  P g_declsF414;
  P tup4F413;
  P munchF412;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = FUNSHELL(1,fun_munch_15,1);
  munchF412 = T18;
  FUNINIT(munchF412, 1,munchF412);
  T17 = CALL2(CHKREF(YisaQ),place_,CHKREF(YLsymG));
  if (T17 != YPfalse) {
    T16 = CALL2(CHKREF(YmacrosYtup),Ynil,place_);
    T1 = T16;
  } else {
    T15 = CALL1(CHKREF(Ytail),place_);
    T14 = CALL1(munchF412,T15);
    tup4F413 = T14;
    T13 = CALL1(CHKREF(Yhead),tup4F413);
    g_declsF414 = T13;
    T12 = CALL1(CHKREF(Ytail),tup4F413);
    tup4F415 = T12;
    T11 = CALL1(CHKREF(Yhead),tup4F415);
    g_argsF416 = T11;
    T10 = CALL1(CHKREF(Ytail),tup4F415);
    tup4F417 = T10;
    T9 = CALL1(CHKREF(Yhead),place_);
    T8 = CALL2(CHKREF(YmacrosYpair),T9,g_argsF416);
    T7 = CALL2(CHKREF(YmacrosYtup),g_declsF414,T8);
    T6 = T7;
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_x_1088_17) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPint((P)1));
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  ARG(return_, 0);
  P x_1087F421;
  P amountF420;
  P x_1087F419;
  P x_1088F418;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1088_17,1);
  x_1088F418 = T12;
  FUNINIT(x_1088F418, 1,return_);
  T11 = BOXVAL(FREEREF(0));
  x_1087F419 = T11;
  amountF420 = YPfalse;
  amountF420 = BOXFAB(amountF420);
  T9 = CALL2(CHKREF(YisaQ),x_1087F419,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1087F419,x_1088F418);
    BOXVAL(amountF420) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1087F419);
    x_1087F421 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1087F421,x_1088F418);
    T5 = T6;
  } else {
    T4 = CALL2(x_1088F418,CHKREF(lit_4),x_1087F419);
  }
  T10 = BOXVAL(amountF420);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1086_19) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  ARG(return_, 0);
  P x_1085F434;
  P x_1085F433;
  P x_1085F432;
  P amountF431;
  P tup6F430;
  P g_placeF429;
  P tup6F428;
  P g_declsF427;
  P tup6F426;
  P amountF425;
  P placeF424;
  P x_1085F423;
  P x_1086F422;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1086_19,1);
  x_1086F422 = T42;
  FUNINIT(x_1086F422, 1,return_);
  x_1085F423 = FREEREF(0);
  placeF424 = YPfalse;
  placeF424 = BOXFAB(placeF424);
  amountF425 = YPfalse;
  amountF425 = BOXFAB(amountF425);
  T14 = CALL2(CHKREF(YisaQ),x_1085F423,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1085F423,CHKREF(lit_30),x_1086F422);
    x_1085F432 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1085F432,x_1086F422);
    BOXVAL(placeF424) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1085F432);
    x_1085F433 = T12;
    BOXVAL(amountF425) = x_1085F433;
    x_1085F434 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1085F434,x_1086F422);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1086F422,CHKREF(lit_4),x_1085F423);
  }
  T41 = BOXVAL(placeF424);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup6F426 = T40;
  T39 = CALL1(CHKREF(Yhead),tup6F426);
  g_declsF427 = T39;
  T38 = CALL1(CHKREF(Ytail),tup6F426);
  tup6F428 = T38;
  T37 = CALL1(CHKREF(Yhead),tup6F428);
  g_placeF429 = T37;
  T36 = CALL1(CHKREF(Ytail),tup6F428);
  tup6F430 = T36;
  T35 = FUNFAB(fun_18,1,amountF425);
  T34 = with_exit(T35);
  amountF431 = T34;
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T32 = CALL2(CHKREF(YmacrosYcat),g_declsF427,Ynil);
  T31 = CALL1(CHKREF(Ylst),T32);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T29 = CALL1(CHKREF(Ylst),g_placeF429);
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_28));
  T27 = CALL1(CHKREF(Ylst),g_placeF429);
  T26 = CALL1(CHKREF(Ylst),amountF431);
  T25 = CALLN(CHKREF(YmacrosYcat),4,T28,T27,T26,Ynil);
  T24 = CALL1(CHKREF(Ylst),T25);
  T23 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T24,Ynil);
  T22 = CALL1(CHKREF(Ylst),T23);
  T21 = CALLN(CHKREF(YmacrosYcat),4,T33,T31,T22,Ynil);
  T20 = T21;
  T19 = T20;
  T18 = T19;
  T17 = T18;
  T16 = T17;
  T15 = T16;
  T4 = T15;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1096_22) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPint((P)1));
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  ARG(return_, 0);
  P x_1095F438;
  P amountF437;
  P x_1095F436;
  P x_1096F435;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1096_22,1);
  x_1096F435 = T12;
  FUNINIT(x_1096F435, 1,return_);
  T11 = BOXVAL(FREEREF(0));
  x_1095F436 = T11;
  amountF437 = YPfalse;
  amountF437 = BOXFAB(amountF437);
  T9 = CALL2(CHKREF(YisaQ),x_1095F436,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1095F436,x_1096F435);
    BOXVAL(amountF437) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1095F436);
    x_1095F438 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1095F438,x_1096F435);
    T5 = T6;
  } else {
    T4 = CALL2(x_1096F435,CHKREF(lit_4),x_1095F436);
  }
  T10 = BOXVAL(amountF437);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1094_24) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  ARG(return_, 0);
  P x_1093F451;
  P x_1093F450;
  P x_1093F449;
  P amountF448;
  P tup8F447;
  P g_placeF446;
  P tup8F445;
  P g_declsF444;
  P tup8F443;
  P amountF442;
  P placeF441;
  P x_1093F440;
  P x_1094F439;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1094_24,1);
  x_1094F439 = T42;
  FUNINIT(x_1094F439, 1,return_);
  x_1093F440 = FREEREF(0);
  placeF441 = YPfalse;
  placeF441 = BOXFAB(placeF441);
  amountF442 = YPfalse;
  amountF442 = BOXFAB(amountF442);
  T14 = CALL2(CHKREF(YisaQ),x_1093F440,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1093F440,CHKREF(lit_34),x_1094F439);
    x_1093F449 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1093F449,x_1094F439);
    BOXVAL(placeF441) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1093F449);
    x_1093F450 = T12;
    BOXVAL(amountF442) = x_1093F450;
    x_1093F451 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1093F451,x_1094F439);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1094F439,CHKREF(lit_4),x_1093F440);
  }
  T41 = BOXVAL(placeF441);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup8F443 = T40;
  T39 = CALL1(CHKREF(Yhead),tup8F443);
  g_declsF444 = T39;
  T38 = CALL1(CHKREF(Ytail),tup8F443);
  tup8F445 = T38;
  T37 = CALL1(CHKREF(Yhead),tup8F445);
  g_placeF446 = T37;
  T36 = CALL1(CHKREF(Ytail),tup8F445);
  tup8F447 = T36;
  T35 = FUNFAB(fun_23,1,amountF442);
  T34 = with_exit(T35);
  amountF448 = T34;
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T32 = CALL2(CHKREF(YmacrosYcat),g_declsF444,Ynil);
  T31 = CALL1(CHKREF(Ylst),T32);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T29 = CALL1(CHKREF(Ylst),g_placeF446);
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_32));
  T27 = CALL1(CHKREF(Ylst),g_placeF446);
  T26 = CALL1(CHKREF(Ylst),amountF448);
  T25 = CALLN(CHKREF(YmacrosYcat),4,T28,T27,T26,Ynil);
  T24 = CALL1(CHKREF(Ylst),T25);
  T23 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T24,Ynil);
  T22 = CALL1(CHKREF(Ylst),T23);
  T21 = CALLN(CHKREF(YmacrosYcat),4,T33,T31,T22,Ynil);
  T20 = T21;
  T19 = T20;
  T18 = T19;
  T17 = T18;
  T16 = T17;
  T15 = T16;
  T4 = T15;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_25,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1100_27) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  ARG(return_, 0);
  P x_1099F463;
  P x_1099F462;
  P x_1099F461;
  P tup10F460;
  P g_placeF459;
  P tup10F458;
  P g_declsF457;
  P tup10F456;
  P valueF455;
  P placeF454;
  P x_1099F453;
  P x_1100F452;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1100_27,1);
  x_1100F452 = T42;
  FUNINIT(x_1100F452, 1,return_);
  x_1099F453 = FREEREF(0);
  placeF454 = YPfalse;
  placeF454 = BOXFAB(placeF454);
  valueF455 = YPfalse;
  valueF455 = BOXFAB(valueF455);
  T16 = CALL2(CHKREF(YisaQ),x_1099F453,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1099F453,CHKREF(lit_37),x_1100F452);
    x_1099F461 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1099F461,x_1100F452);
    BOXVAL(placeF454) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1099F461);
    x_1099F462 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1099F462,x_1100F452);
    BOXVAL(valueF455) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1099F462);
    x_1099F463 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1099F463,x_1100F452);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1100F452,CHKREF(lit_4),x_1099F453);
  }
  T41 = BOXVAL(placeF454);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup10F456 = T40;
  T39 = CALL1(CHKREF(Yhead),tup10F456);
  g_declsF457 = T39;
  T38 = CALL1(CHKREF(Ytail),tup10F456);
  tup10F458 = T38;
  T37 = CALL1(CHKREF(Yhead),tup10F458);
  g_placeF459 = T37;
  T36 = CALL1(CHKREF(Ytail),tup10F458);
  tup10F460 = T36;
  T35 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T34 = CALL2(CHKREF(YmacrosYcat),g_declsF457,Ynil);
  T33 = CALL1(CHKREF(Ylst),T34);
  T32 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T31 = CALL1(CHKREF(Ylst),g_placeF459);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_36));
  T29 = CALL1(CHKREF(Ylst),g_placeF459);
  T28 = BOXVAL(valueF455);
  T27 = CALL1(CHKREF(Ylst),T28);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T27,Ynil);
  T25 = CALL1(CHKREF(Ylst),T26);
  T24 = CALLN(CHKREF(YmacrosYcat),4,T32,T31,T25,Ynil);
  T23 = CALL1(CHKREF(Ylst),T24);
  T22 = CALLN(CHKREF(YmacrosYcat),4,T35,T33,T23,Ynil);
  T21 = T22;
  T20 = T21;
  T19 = T20;
  T18 = T19;
  T17 = T18;
  T4 = T17;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_28,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1104_30) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  ARG(return_, 0);
  P x_1103F475;
  P x_1103F474;
  P valF473;
  P new_colF472;
  P tup12F471;
  P g_placeF470;
  P tup12F469;
  P g_declsF468;
  P tup12F467;
  P placeF466;
  P x_1103F465;
  P x_1104F464;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T48 = FUNSHELL(0,fun_x_1104_30,1);
  x_1104F464 = T48;
  FUNINIT(x_1104F464, 1,return_);
  x_1103F465 = FREEREF(0);
  placeF466 = YPfalse;
  placeF466 = BOXFAB(placeF466);
  T11 = CALL2(CHKREF(YisaQ),x_1103F465,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1103F465,CHKREF(lit_41),x_1104F464);
    x_1103F474 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1103F474,x_1104F464);
    BOXVAL(placeF466) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1103F474);
    x_1103F475 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1103F475,x_1104F464);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1104F464,CHKREF(lit_4),x_1103F465);
  }
  T47 = BOXVAL(placeF466);
  T46 = CALL1(CHKREF(YmacrosYlift_place_subforms),T47);
  tup12F467 = T46;
  T45 = CALL1(CHKREF(Yhead),tup12F467);
  g_declsF468 = T45;
  T44 = CALL1(CHKREF(Ytail),tup12F467);
  tup12F469 = T44;
  T43 = CALL1(CHKREF(Yhead),tup12F469);
  g_placeF470 = T43;
  T42 = CALL1(CHKREF(Ytail),tup12F469);
  tup12F471 = T42;
  T41 = CALL0(CHKREF(YmacrosYgensym));
  new_colF472 = T41;
  T40 = CALL0(CHKREF(YmacrosYgensym));
  valF473 = T40;
  T39 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T38 = CALL1(CHKREF(Ylst),CHKREF(lit_40));
  T37 = CALL1(CHKREF(Ylst),new_colF472);
  T36 = CALL1(CHKREF(Ylst),valF473);
  T35 = CALLN(CHKREF(YmacrosYcat),4,T38,T37,T36,Ynil);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_39));
  T32 = CALL1(CHKREF(Ylst),g_placeF470);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALL3(CHKREF(YmacrosYcat),T34,T30,Ynil);
  T28 = CALL1(CHKREF(Ylst),T29);
  T27 = CALL3(CHKREF(YmacrosYcat),g_declsF468,T28,Ynil);
  T26 = CALL1(CHKREF(Ylst),T27);
  T25 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T24 = CALL1(CHKREF(Ylst),g_placeF470);
  T23 = CALL1(CHKREF(Ylst),new_colF472);
  T22 = CALLN(CHKREF(YmacrosYcat),4,T25,T24,T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = CALL1(CHKREF(Ylst),valF473);
  T19 = CALLN(CHKREF(YmacrosYcat),5,T39,T26,T21,T20,Ynil);
  T18 = T19;
  T17 = T18;
  T16 = T17;
  T15 = T16;
  T14 = T15;
  T13 = T14;
  T12 = T13;
  T2 = T12;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_31,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1108_33) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(return_, 0);
  P x_1107F482;
  P x_1107F481;
  P x_1107F480;
  P bodyF479;
  P testF478;
  P x_1107F477;
  P x_1108F476;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T26 = FUNSHELL(0,fun_x_1108_33,1);
  x_1108F476 = T26;
  FUNINIT(x_1108F476, 1,return_);
  x_1107F477 = FREEREF(0);
  testF478 = YPfalse;
  testF478 = BOXFAB(testF478);
  bodyF479 = YPfalse;
  bodyF479 = BOXFAB(bodyF479);
  T14 = CALL2(CHKREF(YisaQ),x_1107F477,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1107F477,CHKREF(lit_46),x_1108F476);
    x_1107F480 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1107F480,x_1108F476);
    BOXVAL(testF478) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1107F480);
    x_1107F481 = T12;
    BOXVAL(bodyF479) = x_1107F481;
    x_1107F482 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1107F482,x_1108F476);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1108F476,CHKREF(lit_4),x_1107F477);
  }
  T25 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T24 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T23 = BOXVAL(testF478);
  T22 = CALL1(CHKREF(Ylst),T23);
  T21 = CALL3(CHKREF(YmacrosYcat),T24,T22,Ynil);
  T20 = CALL1(CHKREF(Ylst),T21);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T18 = BOXVAL(bodyF479);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(Ylst),T17);
  T15 = CALLN(CHKREF(YmacrosYcat),4,T25,T20,T16,Ynil);
  T4 = T15;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_34,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1112_36) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  ARG(return_, 0);
  P x_1111F489;
  P x_1111F488;
  P x_1111F487;
  P bodyF486;
  P testF485;
  P x_1111F484;
  P x_1112F483;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T23 = FUNSHELL(0,fun_x_1112_36,1);
  x_1112F483 = T23;
  FUNINIT(x_1112F483, 1,return_);
  x_1111F484 = FREEREF(0);
  testF485 = YPfalse;
  testF485 = BOXFAB(testF485);
  bodyF486 = YPfalse;
  bodyF486 = BOXFAB(bodyF486);
  T14 = CALL2(CHKREF(YisaQ),x_1111F484,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1111F484,CHKREF(lit_48),x_1112F483);
    x_1111F487 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1111F487,x_1112F483);
    BOXVAL(testF485) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1111F487);
    x_1111F488 = T12;
    BOXVAL(bodyF486) = x_1111F488;
    x_1111F489 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1111F489,x_1112F483);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1112F483,CHKREF(lit_4),x_1111F484);
  }
  T22 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T21 = BOXVAL(testF485);
  T20 = CALL1(CHKREF(Ylst),T21);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T18 = BOXVAL(bodyF486);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(Ylst),T17);
  T15 = CALLN(CHKREF(YmacrosYcat),4,T22,T20,T16,Ynil);
  T4 = T15;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1124_39) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T17 = CALL1(CHKREF(Ylst),CHKREF(lit_52));
  T16 = BOXVAL(FREEREF(1));
  T15 = CALL1(CHKREF(Ylst),T16);
  T14 = CALL3(CHKREF(YmacrosYcat),T17,T15,Ynil);
  T13 = CALL1(CHKREF(Ylst),T14);
  T12 = CALL2(CHKREF(YmacrosYcat),T13,Ynil);
  T11 = CALL1(CHKREF(Ylst),T12);
  T10 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T9 = CALL1(CHKREF(Ylst),CHKREF(lit_52));
  T8 = CALL1(CHKREF(Ylst),CHKREF(lit_52));
  T7 = CALL1(CHKREF(Ylst),CHKREF(lit_51));
  T6 = BOXVAL(FREEREF(0));
  T5 = CALL3(CHKREF(YmacrosYcat),T7,T6,Ynil);
  T4 = CALL1(CHKREF(Ylst),T5);
  T3 = CALLN(CHKREF(YmacrosYcat),5,T10,T9,T8,T4,Ynil);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = CALLN(CHKREF(YmacrosYcat),4,T18,T11,T2,Ynil);
  T0 = CALL1(FREEREF(2),T1);
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(return_, 0);
  P x_1123F491;
  P x_1124F490;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = FUNSHELL(0,fun_x_1124_39,3);
  x_1124F490 = T7;
  FUNINIT(x_1124F490, 3,FREEREF(1),FREEREF(0),return_);
  T6 = BOXVAL(FREEREF(1));
  x_1123F491 = T6;
  T4 = CALL2(CHKREF(YisaQ),x_1123F491,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1123F491,x_1124F490);
  } else {
    T2 = CALL2(x_1124F490,CHKREF(lit_4),x_1123F491);
  }
  T5 = BOXVAL(FREEREF(0));
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1122_41) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  ARG(return_, 0);
  P x_1121F497;
  P x_1121F496;
  P restF495;
  P xF494;
  P x_1121F493;
  P x_1122F492;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1122_41,1);
  x_1122F492 = T16;
  FUNINIT(x_1122F492, 1,return_);
  T15 = BOXVAL(FREEREF(0));
  x_1121F493 = T15;
  xF494 = YPfalse;
  xF494 = BOXFAB(xF494);
  restF495 = YPfalse;
  restF495 = BOXFAB(restF495);
  T12 = CALL2(CHKREF(YisaQ),x_1121F493,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1121F493,x_1122F492);
    BOXVAL(xF494) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1121F493);
    x_1121F496 = T11;
    BOXVAL(restF495) = x_1121F496;
    x_1121F497 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1121F497,x_1122F492);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1122F492,CHKREF(lit_4),x_1121F493);
  }
  T14 = FUNFAB(fun_40,2,xF494,restF495);
  T13 = with_exit(T14);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1120_43) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(return_, 0);
  P x_1119F502;
  P x_1119F501;
  P restF500;
  P x_1119F499;
  P x_1120F498;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1120_43,1);
  x_1120F498 = T12;
  FUNINIT(x_1120F498, 1,return_);
  x_1119F499 = FREEREF(0);
  restF500 = YPfalse;
  restF500 = BOXFAB(restF500);
  T9 = CALL2(CHKREF(YisaQ),x_1119F499,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1119F499,CHKREF(lit_51),x_1120F498);
    x_1119F501 = T8;
    BOXVAL(restF500) = x_1119F501;
    x_1119F502 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1119F502,x_1120F498);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1120F498,CHKREF(lit_4),x_1119F499);
  }
  T11 = FUNFAB(fun_42,1,restF500);
  T10 = with_exit(T11);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_44,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1136_46) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T17 = CALL1(CHKREF(Ylst),CHKREF(lit_52));
  T16 = BOXVAL(FREEREF(1));
  T15 = CALL1(CHKREF(Ylst),T16);
  T14 = CALL3(CHKREF(YmacrosYcat),T17,T15,Ynil);
  T13 = CALL1(CHKREF(Ylst),T14);
  T12 = CALL2(CHKREF(YmacrosYcat),T13,Ynil);
  T11 = CALL1(CHKREF(Ylst),T12);
  T10 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T9 = CALL1(CHKREF(Ylst),CHKREF(lit_52));
  T8 = CALL1(CHKREF(Ylst),CHKREF(lit_56));
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL3(CHKREF(YmacrosYcat),T8,T7,Ynil);
  T5 = CALL1(CHKREF(Ylst),T6);
  T4 = CALL1(CHKREF(Ylst),YPfalse);
  T3 = CALLN(CHKREF(YmacrosYcat),5,T10,T9,T5,T4,Ynil);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = CALLN(CHKREF(YmacrosYcat),4,T18,T11,T2,Ynil);
  T0 = CALL1(FREEREF(2),T1);
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  ARG(return_, 0);
  P x_1135F504;
  P x_1136F503;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = FUNSHELL(0,fun_x_1136_46,3);
  x_1136F503 = T7;
  FUNINIT(x_1136F503, 3,FREEREF(1),FREEREF(0),return_);
  T6 = BOXVAL(FREEREF(1));
  x_1135F504 = T6;
  T4 = CALL2(CHKREF(YisaQ),x_1135F504,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1135F504,x_1136F503);
  } else {
    T2 = CALL2(x_1136F503,CHKREF(lit_4),x_1135F504);
  }
  T5 = BOXVAL(FREEREF(0));
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1134_48) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(return_, 0);
  P x_1133F510;
  P x_1133F509;
  P restF508;
  P xF507;
  P x_1133F506;
  P x_1134F505;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1134_48,1);
  x_1134F505 = T16;
  FUNINIT(x_1134F505, 1,return_);
  T15 = BOXVAL(FREEREF(0));
  x_1133F506 = T15;
  xF507 = YPfalse;
  xF507 = BOXFAB(xF507);
  restF508 = YPfalse;
  restF508 = BOXFAB(restF508);
  T12 = CALL2(CHKREF(YisaQ),x_1133F506,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1133F506,x_1134F505);
    BOXVAL(xF507) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1133F506);
    x_1133F509 = T11;
    BOXVAL(restF508) = x_1133F509;
    x_1133F510 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1133F510,x_1134F505);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1134F505,CHKREF(lit_4),x_1133F506);
  }
  T14 = FUNFAB(fun_47,2,xF507,restF508);
  T13 = with_exit(T14);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1132_50) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  ARG(return_, 0);
  P x_1131F515;
  P x_1131F514;
  P restF513;
  P x_1131F512;
  P x_1132F511;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1132_50,1);
  x_1132F511 = T12;
  FUNINIT(x_1132F511, 1,return_);
  x_1131F512 = FREEREF(0);
  restF513 = YPfalse;
  restF513 = BOXFAB(restF513);
  T9 = CALL2(CHKREF(YisaQ),x_1131F512,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1131F512,CHKREF(lit_56),x_1132F511);
    x_1131F514 = T8;
    BOXVAL(restF513) = x_1131F514;
    x_1131F515 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1131F515,x_1132F511);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1132F511,CHKREF(lit_4),x_1131F512);
  }
  T11 = FUNFAB(fun_49,1,restF513);
  T10 = with_exit(T11);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_51,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1144_53) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(CHKREF(Yhead),T3);
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_61),T2);
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  ARG(return_, 0);
  P x_1143F521;
  P x_1143F520;
  P bodyF519;
  P condF518;
  P x_1143F517;
  P x_1144F516;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T28 = FUNSHELL(0,fun_x_1144_53,2);
  x_1144F516 = T28;
  FUNINIT(x_1144F516, 2,FREEREF(0),return_);
  T27 = BOXVAL(FREEREF(0));
  T26 = CALL1(CHKREF(Yhead),T27);
  x_1143F517 = T26;
  condF518 = YPfalse;
  condF518 = BOXFAB(condF518);
  bodyF519 = YPfalse;
  bodyF519 = BOXFAB(bodyF519);
  T12 = CALL2(CHKREF(YisaQ),x_1143F517,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1143F517,x_1144F516);
    BOXVAL(condF518) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1143F517);
    x_1143F520 = T11;
    BOXVAL(bodyF519) = x_1143F520;
    x_1143F521 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1143F521,x_1144F516);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1144F516,CHKREF(lit_4),x_1143F517);
  }
  T25 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T24 = BOXVAL(condF518);
  T23 = CALL1(CHKREF(Ylst),T24);
  T22 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T21 = BOXVAL(bodyF519);
  T20 = CALL3(CHKREF(YmacrosYcat),T22,T21,Ynil);
  T19 = CALL1(CHKREF(Ylst),T20);
  T18 = CALL1(CHKREF(Ylst),CHKREF(lit_59));
  T17 = BOXVAL(FREEREF(0));
  T16 = CALL1(CHKREF(Ytail),T17);
  T15 = CALL3(CHKREF(YmacrosYcat),T18,T16,Ynil);
  T14 = CALL1(CHKREF(Ylst),T15);
  T13 = CALLN(CHKREF(YmacrosYcat),5,T25,T23,T19,T14,Ynil);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1142_55) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  ARG(return_, 0);
  P x_1141F526;
  P x_1141F525;
  P casesF524;
  P x_1141F523;
  P x_1142F522;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = FUNSHELL(0,fun_x_1142_55,1);
  x_1142F522 = T15;
  FUNINIT(x_1142F522, 1,return_);
  x_1141F523 = FREEREF(0);
  casesF524 = YPfalse;
  casesF524 = BOXFAB(casesF524);
  T9 = CALL2(CHKREF(YisaQ),x_1141F523,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1141F523,CHKREF(lit_59),x_1142F522);
    x_1141F525 = T8;
    BOXVAL(casesF524) = x_1141F525;
    x_1141F526 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1141F526,x_1142F522);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1142F522,CHKREF(lit_4),x_1141F523);
  }
  T14 = BOXVAL(casesF524);
  T13 = CALL1(CHKREF(YmacrosYemptyQ),T14);
  if (T13 != YPfalse) {
    T10 = YPfalse;
  } else {
    T12 = FUNFAB(fun_54,1,casesF524);
    T11 = with_exit(T12);
    T10 = T11;
  }
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_56,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(Ylst),CHKREF(lit_65));
  T2 = CALL1(CHKREF(Ylst),FREEREF(0));
  T1 = CALL1(CHKREF(Ylst),x_);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T3,T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_x_1156_59) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(CHKREF(Yhead),T3);
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_67),T2);
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  ARG(return_, 0);
  P x_1155F530;
  P valuesF529;
  P x_1155F528;
  P x_1156F527;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T37 = FUNSHELL(0,fun_x_1156_59,2);
  x_1156F527 = T37;
  FUNINIT(x_1156F527, 2,FREEREF(0),return_);
  T36 = BOXVAL(FREEREF(1));
  x_1155F528 = T36;
  valuesF529 = YPfalse;
  valuesF529 = BOXFAB(valuesF529);
  T7 = CALL2(CHKREF(YisaQ),x_1155F528,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    BOXVAL(valuesF529) = x_1155F528;
    x_1155F530 = Ynil;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1155F530,x_1156F527);
    T5 = T6;
  } else {
    T4 = CALL2(x_1156F527,CHKREF(lit_4),x_1155F528);
  }
  T35 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T34 = CALL1(CHKREF(Ylst),FREEREF(2));
  T33 = BOXVAL(FREEREF(4));
  T32 = CALL1(CHKREF(Ylst),T33);
  T31 = CALL3(CHKREF(YmacrosYcat),T34,T32,Ynil);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALL2(CHKREF(YmacrosYcat),T30,Ynil);
  T28 = CALL1(CHKREF(Ylst),T29);
  T27 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T26 = CALL1(CHKREF(Ylst),CHKREF(lit_51));
  T25 = FUNFAB(fun_58,1,FREEREF(2));
  T24 = BOXVAL(valuesF529);
  T23 = CALL2(CHKREF(YmacrosYmap),T25,T24);
  T22 = CALL3(CHKREF(YmacrosYcat),T26,T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T19 = BOXVAL(FREEREF(3));
  T18 = CALL3(CHKREF(YmacrosYcat),T20,T19,Ynil);
  T17 = CALL1(CHKREF(Ylst),T18);
  T16 = CALL1(CHKREF(Ylst),CHKREF(lit_63));
  T15 = CALL1(CHKREF(Ylst),FREEREF(2));
  T14 = BOXVAL(FREEREF(0));
  T13 = CALL1(CHKREF(Ytail),T14);
  T12 = CALLN(CHKREF(YmacrosYcat),4,T16,T15,T13,Ynil);
  T11 = CALL1(CHKREF(Ylst),T12);
  T10 = CALLN(CHKREF(YmacrosYcat),5,T27,T21,T17,T11,Ynil);
  T9 = CALL1(CHKREF(Ylst),T10);
  T8 = CALLN(CHKREF(YmacrosYcat),4,T35,T28,T9,Ynil);
  T2 = T8;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1154_61) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  ARG(return_, 0);
  P x_1153F537;
  P x_1153F536;
  P bvF535;
  P bodyF534;
  P condF533;
  P x_1153F532;
  P x_1154F531;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T25 = FUNSHELL(0,fun_x_1154_61,1);
  x_1154F531 = T25;
  FUNINIT(x_1154F531, 1,return_);
  T24 = BOXVAL(FREEREF(0));
  T23 = CALL1(CHKREF(Yhead),T24);
  x_1153F532 = T23;
  condF533 = YPfalse;
  condF533 = BOXFAB(condF533);
  bodyF534 = YPfalse;
  bodyF534 = BOXFAB(bodyF534);
  T12 = CALL2(CHKREF(YisaQ),x_1153F532,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1153F532,x_1154F531);
    BOXVAL(condF533) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1153F532);
    x_1153F536 = T11;
    BOXVAL(bodyF534) = x_1153F536;
    x_1153F537 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1153F537,x_1154F531);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1154F531,CHKREF(lit_4),x_1153F532);
  }
  T22 = BOXVAL(condF533);
  T21 = CALL2(CHKREF(YmacrosYEE),T22,YPtrue);
  if (T21 != YPfalse) {
    T20 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
    T19 = BOXVAL(bodyF534);
    T18 = CALL3(CHKREF(YmacrosYcat),T20,T19,Ynil);
    T13 = T18;
  } else {
    T17 = CALL0(CHKREF(YmacrosYgensym));
    bvF535 = T17;
    T16 = FUNFAB(fun_60,5,FREEREF(0),condF533,bvF535,bodyF534,FREEREF(1));
    T15 = with_exit(T16);
    T14 = T15;
    T13 = T14;
  }
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1152_63) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  ARG(return_, 0);
  P x_1151F544;
  P x_1151F543;
  P x_1151F542;
  P casesF541;
  P valF540;
  P x_1151F539;
  P x_1152F538;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T20 = FUNSHELL(0,fun_x_1152_63,1);
  x_1152F538 = T20;
  FUNINIT(x_1152F538, 1,return_);
  x_1151F539 = FREEREF(0);
  valF540 = YPfalse;
  valF540 = BOXFAB(valF540);
  casesF541 = YPfalse;
  casesF541 = BOXFAB(casesF541);
  T14 = CALL2(CHKREF(YisaQ),x_1151F539,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1151F539,CHKREF(lit_63),x_1152F538);
    x_1151F542 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1151F542,x_1152F538);
    BOXVAL(valF540) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1151F542);
    x_1151F543 = T12;
    BOXVAL(casesF541) = x_1151F543;
    x_1151F544 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1151F544,x_1152F538);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1152F538,CHKREF(lit_4),x_1151F539);
  }
  T19 = BOXVAL(casesF541);
  T18 = CALL1(CHKREF(YmacrosYemptyQ),T19);
  if (T18 != YPfalse) {
    T15 = YPfalse;
  } else {
    T17 = FUNFAB(fun_62,2,casesF541,valF540);
    T16 = with_exit(T17);
    T15 = T16;
  }
  T4 = T15;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_64,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1160_66) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  ARG(return_, 0);
  P x_1159F553;
  P x_1159F552;
  P x_1159F551;
  P x_1159F550;
  P argsF549;
  P messageF548;
  P condF547;
  P x_1159F546;
  P x_1160F545;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T33 = FUNSHELL(0,fun_x_1160_66,1);
  x_1160F545 = T33;
  FUNINIT(x_1160F545, 1,return_);
  x_1159F546 = FREEREF(0);
  condF547 = YPfalse;
  condF547 = BOXFAB(condF547);
  messageF548 = YPfalse;
  messageF548 = BOXFAB(messageF548);
  argsF549 = YPfalse;
  argsF549 = BOXFAB(argsF549);
  T19 = CALL2(CHKREF(YisaQ),x_1159F546,CHKREF(YLlstG));
  if (T19 != YPfalse) {
    T18 = CALL3(CHKREF(YmacrosYmatch_atom),x_1159F546,CHKREF(lit_71),x_1160F545);
    x_1159F550 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1159F550,x_1160F545);
    BOXVAL(condF547) = T16;
    T17 = CALL1(CHKREF(Ytail),x_1159F550);
    x_1159F551 = T17;
    T14 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1159F551,x_1160F545);
    BOXVAL(messageF548) = T14;
    T15 = CALL1(CHKREF(Ytail),x_1159F551);
    x_1159F552 = T15;
    BOXVAL(argsF549) = x_1159F552;
    x_1159F553 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1159F553,x_1160F545);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1160F545,CHKREF(lit_4),x_1159F546);
  }
  T32 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T31 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T30 = BOXVAL(condF547);
  T29 = CALL1(CHKREF(Ylst),T30);
  T28 = CALL3(CHKREF(YmacrosYcat),T31,T29,Ynil);
  T27 = CALL1(CHKREF(Ylst),T28);
  T26 = CALL1(CHKREF(Ylst),CHKREF(lit_70));
  T25 = BOXVAL(messageF548);
  T24 = CALL1(CHKREF(Ylst),T25);
  T23 = BOXVAL(argsF549);
  T22 = CALLN(CHKREF(YmacrosYcat),4,T26,T24,T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = CALLN(CHKREF(YmacrosYcat),4,T32,T27,T21,Ynil);
  T6 = T20;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_67,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1172_69) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = BOXVAL(FREEREF(2));
  T7 = CALL1(CHKREF(Ylst),T8);
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_81));
  T5 = CALL1(CHKREF(Ylst),FREEREF(1));
  T4 = CALL1(CHKREF(Ylst),FREEREF(0));
  T3 = CALLN(CHKREF(YmacrosYcat),4,T6,T5,T4,Ynil);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = CALL3(CHKREF(YmacrosYcat),T7,T2,Ynil);
  T0 = CALL1(FREEREF(3),T1);
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  ARG(return_, 0);
  P x_1171F560;
  P x_1171F559;
  P x_1171F558;
  P valF557;
  P keyF556;
  P x_1171F555;
  P x_1172F554;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T39 = FUNSHELL(0,fun_x_1172_69,4);
  x_1172F554 = T39;
  FUNINIT(x_1172F554, 4,FREEREF(2),FREEREF(1),FREEREF(0),return_);
  T38 = BOXVAL(FREEREF(0));
  x_1171F555 = T38;
  keyF556 = YPfalse;
  keyF556 = BOXFAB(keyF556);
  valF557 = YPfalse;
  valF557 = BOXFAB(valF557);
  T16 = CALL2(CHKREF(YisaQ),x_1171F555,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1171F555,CHKREF(lit_40),x_1172F554);
    x_1171F558 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1171F558,x_1172F554);
    BOXVAL(keyF556) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1171F558);
    x_1171F559 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1171F559,x_1172F554);
    BOXVAL(valF557) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1171F559);
    x_1171F560 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1171F560,x_1172F554);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1172F554,CHKREF(lit_4),x_1171F555);
  }
  T37 = CALL1(CHKREF(Ylst),CHKREF(lit_40));
  T36 = BOXVAL(keyF556);
  T35 = CALL1(CHKREF(Ylst),T36);
  T34 = BOXVAL(valF557);
  T33 = CALL1(CHKREF(Ylst),T34);
  T32 = CALLN(CHKREF(YmacrosYcat),4,T37,T35,T33,Ynil);
  T31 = CALL1(CHKREF(Ylst),T32);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_40));
  T29 = CALL1(CHKREF(Ylst),CHKREF(lit_82));
  T28 = CALL1(CHKREF(Ylst),FREEREF(1));
  T27 = CALL1(CHKREF(Ylst),FREEREF(2));
  T26 = CALLN(CHKREF(YmacrosYcat),4,T29,T28,T27,Ynil);
  T25 = CALL1(CHKREF(Ylst),T26);
  T24 = CALL1(CHKREF(Ylst),CHKREF(lit_81));
  T23 = CALL1(CHKREF(Ylst),FREEREF(1));
  T22 = CALL1(CHKREF(Ylst),FREEREF(2));
  T21 = CALLN(CHKREF(YmacrosYcat),4,T24,T23,T22,Ynil);
  T20 = CALL1(CHKREF(Ylst),T21);
  T19 = CALLN(CHKREF(YmacrosYcat),4,T30,T25,T20,Ynil);
  T18 = CALL1(CHKREF(Ylst),T19);
  T17 = CALL3(CHKREF(YmacrosYcat),T31,T18,Ynil);
  T4 = T17;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1170_71) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  ARG(return_, 0);
  P x_1169F568;
  P x_1169F567;
  P exp_tmpF566;
  P stateF565;
  P expF564;
  P varF563;
  P x_1169F562;
  P x_1170F561;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T46 = FUNSHELL(0,fun_x_1170_71,1);
  x_1170F561 = T46;
  FUNINIT(x_1170F561, 1,return_);
  x_1169F562 = FREEREF(0);
  varF563 = YPfalse;
  varF563 = BOXFAB(varF563);
  expF564 = YPfalse;
  expF564 = BOXFAB(expF564);
  T14 = CALL2(CHKREF(YisaQ),x_1169F562,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T12 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1169F562,x_1170F561);
    BOXVAL(varF563) = T12;
    T13 = CALL1(CHKREF(Ytail),x_1169F562);
    x_1169F567 = T13;
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1169F567,x_1170F561);
    BOXVAL(expF564) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1169F567);
    x_1169F568 = T11;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1169F568,x_1170F561);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1170F561,CHKREF(lit_4),x_1169F562);
  }
  T45 = CALL0(CHKREF(YmacrosYgensym));
  stateF565 = T45;
  T44 = CALL0(CHKREF(YmacrosYgensym));
  exp_tmpF566 = T44;
  T43 = CALL1(CHKREF(Ytail),FREEREF(6));
  T42 = CALL1(CHKREF(Ylst),exp_tmpF566);
  T41 = BOXVAL(expF564);
  T40 = CALL1(CHKREF(Ylst),T41);
  T39 = CALL3(CHKREF(YmacrosYcat),T42,T40,Ynil);
  T38 = CALL2(CHKREF(YmacrosYpair),T39,FREEREF(5));
  T37 = CALL1(CHKREF(Ylst),stateF565);
  T36 = CALL1(CHKREF(Ylst),CHKREF(lit_85));
  T35 = CALL1(CHKREF(Ylst),exp_tmpF566);
  T34 = CALL3(CHKREF(YmacrosYcat),T36,T35,Ynil);
  T33 = CALL1(CHKREF(Ylst),T34);
  T32 = CALL3(CHKREF(YmacrosYcat),T37,T33,Ynil);
  T31 = CALL2(CHKREF(YmacrosYpair),T32,FREEREF(4));
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_84));
  T29 = CALL1(CHKREF(Ylst),exp_tmpF566);
  T28 = CALL1(CHKREF(Ylst),stateF565);
  T27 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T28,Ynil);
  T26 = CALL2(CHKREF(YmacrosYpair),T27,FREEREF(3));
  T25 = FUNFAB(fun_70,3,varF563,exp_tmpF566,stateF565);
  T24 = with_exit(T25);
  T23 = CALL2(CHKREF(YmacrosYpair),T24,FREEREF(2));
  T22 = CALL1(CHKREF(Ylst),CHKREF(lit_80));
  T21 = CALL1(CHKREF(Ylst),exp_tmpF566);
  T20 = CALL1(CHKREF(Ylst),stateF565);
  T19 = CALLN(CHKREF(YmacrosYcat),4,T22,T21,T20,Ynil);
  T18 = CALL2(CHKREF(YmacrosYpair),T19,FREEREF(1));
  T17 = KCALLN(FREEREF(7),6,T43,T38,T31,T26,T23,T18);
  T16 = T17;
  T15 = T16;
  T4 = T15;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_grok_73) {
  ARG(nexts_, 0);
  ARG(nows_, 1);
  ARG(preds_, 2);
  ARG(inits_, 3);
  ARG(exps_, 4);
  ARG(clauses_, 5);
  P loopF570;
  P clauseF569;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T29 = CALL1(CHKREF(YmacrosYemptyQ),clauses_);
  if (T29 != YPfalse) {
    T28 = CALL0(CHKREF(YmacrosYgensym));
    loopF570 = T28;
    T27 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
    T26 = CALL1(CHKREF(Ylst),exps_);
    T25 = CALL1(CHKREF(Ylst),CHKREF(lit_87));
    T24 = CALL1(CHKREF(Ylst),loopF570);
    T23 = CALL1(CHKREF(Ylst),inits_);
    T22 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
    T21 = CALL1(CHKREF(Ylst),CHKREF(lit_51));
    T20 = CALL3(CHKREF(YmacrosYcat),T21,preds_,Ynil);
    T19 = CALL1(CHKREF(Ylst),T20);
    T18 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
    T17 = CALL1(CHKREF(Ylst),nows_);
    T16 = BOXVAL(FREEREF(1));
    T15 = CALL1(CHKREF(Ylst),loopF570);
    T14 = CALL3(CHKREF(YmacrosYcat),T15,nexts_,Ynil);
    T13 = CALL1(CHKREF(Ylst),T14);
    T12 = CALLN(CHKREF(YmacrosYcat),5,T18,T17,T16,T13,Ynil);
    T11 = CALL1(CHKREF(Ylst),T12);
    T10 = CALLN(CHKREF(YmacrosYcat),4,T22,T19,T11,Ynil);
    T9 = CALL1(CHKREF(Ylst),T10);
    T8 = CALLN(CHKREF(YmacrosYcat),5,T25,T24,T23,T9,Ynil);
    T7 = CALL1(CHKREF(Ylst),T8);
    T6 = CALLN(CHKREF(YmacrosYcat),4,T27,T26,T7,Ynil);
    T5 = T6;
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),clauses_);
    clauseF569 = T4;
    T3 = FUNFAB(fun_72,8,clauseF569,nexts_,nows_,preds_,inits_,exps_,clauses_,FREEREF(0));
    T2 = with_exit(T3);
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_x_1168_74) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  ARG(return_, 0);
  P x_1167F580;
  P x_1167F579;
  P x_1167F578;
  P x_1167F577;
  P x_1167F576;
  P grokF575;
  P bodyF574;
  P clausesF573;
  P x_1167F572;
  P x_1168F571;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T21 = FUNSHELL(0,fun_x_1168_74,1);
  x_1168F571 = T21;
  FUNINIT(x_1168F571, 1,return_);
  x_1167F572 = FREEREF(0);
  clausesF573 = YPfalse;
  clausesF573 = BOXFAB(clausesF573);
  bodyF574 = YPfalse;
  bodyF574 = BOXFAB(bodyF574);
  T16 = CALL2(CHKREF(YisaQ),x_1167F572,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1167F572,CHKREF(lit_88),x_1168F571);
    x_1167F576 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1167F576,x_1168F571);
    x_1167F577 = T13;
    BOXVAL(clausesF573) = x_1167F577;
    x_1167F578 = Ynil;
    T12 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1167F578,x_1168F571);
    T11 = T12;
    T14 = CALL1(CHKREF(Ytail),x_1167F576);
    x_1167F579 = T14;
    BOXVAL(bodyF574) = x_1167F579;
    x_1167F580 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1167F580,x_1168F571);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1168F571,CHKREF(lit_4),x_1167F572);
  }
  T20 = FUNSHELL(1,fun_grok_73,2);
  grokF575 = T20;
  FUNINIT(grokF575, 2,grokF575,bodyF574);
  T19 = BOXVAL(clausesF573);
  T18 = KCALLN(grokF575,6,T19,Ynil,Ynil,Ynil,Ynil,Ynil);
  T17 = T18;
  T4 = T17;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_75,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1184_77) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_94),T2);
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  ARG(return_, 0);
  P x_1183F592;
  P x_1183F591;
  P x_1183F590;
  P x_1183F589;
  P x_1183F588;
  P old_valueF587;
  P nameF586;
  P restF585;
  P valueF584;
  P varF583;
  P x_1183F582;
  P x_1184F581;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T60 = FUNSHELL(0,fun_x_1184_77,2);
  x_1184F581 = T60;
  FUNINIT(x_1184F581, 2,FREEREF(0),return_);
  T59 = BOXVAL(FREEREF(0));
  x_1183F582 = T59;
  varF583 = YPfalse;
  varF583 = BOXFAB(varF583);
  valueF584 = YPfalse;
  valueF584 = BOXFAB(valueF584);
  restF585 = YPfalse;
  restF585 = BOXFAB(restF585);
  T21 = CALL2(CHKREF(YisaQ),x_1183F582,CHKREF(YLlstG));
  if (T21 != YPfalse) {
    T19 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1183F582,x_1184F581);
    x_1183F588 = T19;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1183F588,x_1184F581);
    BOXVAL(varF583) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1183F588);
    x_1183F589 = T18;
    T15 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1183F589,x_1184F581);
    BOXVAL(valueF584) = T15;
    T16 = CALL1(CHKREF(Ytail),x_1183F589);
    x_1183F590 = T16;
    T14 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1183F590,x_1184F581);
    T13 = T14;
    T12 = T13;
    T20 = CALL1(CHKREF(Ytail),x_1183F582);
    x_1183F591 = T20;
    BOXVAL(restF585) = x_1183F591;
    x_1183F592 = Ynil;
    T11 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1183F592,x_1184F581);
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1184F581,CHKREF(lit_4),x_1183F582);
  }
  T58 = BOXVAL(varF583);
  T57 = CALL1(CHKREF(YmacrosYvar_name),T58);
  nameF586 = T57;
  T56 = CALL0(CHKREF(YmacrosYgensym));
  old_valueF587 = T56;
  T55 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T54 = CALL1(CHKREF(Ylst),old_valueF587);
  T53 = CALL1(CHKREF(Ylst),nameF586);
  T52 = CALL3(CHKREF(YmacrosYcat),T54,T53,Ynil);
  T51 = CALL1(CHKREF(Ylst),T52);
  T50 = CALL2(CHKREF(YmacrosYcat),T51,Ynil);
  T49 = CALL1(CHKREF(Ylst),T50);
  T48 = CALL1(CHKREF(Ylst),CHKREF(lit_92));
  T47 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T46 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T45 = CALL1(CHKREF(Ylst),nameF586);
  T44 = BOXVAL(valueF584);
  T43 = CALL1(CHKREF(Ylst),T44);
  T42 = CALLN(CHKREF(YmacrosYcat),4,T46,T45,T43,Ynil);
  T41 = CALL1(CHKREF(Ylst),T42);
  T40 = CALL1(CHKREF(Ylst),CHKREF(lit_91));
  T39 = BOXVAL(restF585);
  T38 = CALL2(CHKREF(YmacrosYcat),T39,Ynil);
  T37 = CALL1(CHKREF(Ylst),T38);
  T36 = BOXVAL(FREEREF(1));
  T35 = CALLN(CHKREF(YmacrosYcat),4,T40,T37,T36,Ynil);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALLN(CHKREF(YmacrosYcat),4,T47,T41,T34,Ynil);
  T32 = CALL1(CHKREF(Ylst),T33);
  T31 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T30 = CALL1(CHKREF(Ylst),nameF586);
  T29 = CALL1(CHKREF(Ylst),old_valueF587);
  T28 = CALLN(CHKREF(YmacrosYcat),4,T31,T30,T29,Ynil);
  T27 = CALL1(CHKREF(Ylst),T28);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T48,T32,T27,Ynil);
  T25 = CALL1(CHKREF(Ylst),T26);
  T24 = CALLN(CHKREF(YmacrosYcat),4,T55,T49,T25,Ynil);
  T23 = T24;
  T22 = T23;
  T6 = T22;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1182_79) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNFAB(fun_78,2,FREEREF(1),FREEREF(0));
  T1 = with_exit(T2);
  T0 = CALL1(FREEREF(2),T1);
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  ARG(return_, 0);
  P x_1181F594;
  P x_1182F593;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = FUNSHELL(0,fun_x_1182_79,3);
  x_1182F593 = T9;
  FUNINIT(x_1182F593, 3,FREEREF(1),FREEREF(0),return_);
  T8 = BOXVAL(FREEREF(0));
  x_1181F594 = T8;
  T4 = CALL2(CHKREF(YisaQ),x_1181F594,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1181F594,x_1182F593);
  } else {
    T2 = CALL2(x_1182F593,CHKREF(lit_4),x_1181F594);
  }
  T7 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL3(CHKREF(YmacrosYcat),T7,T6,Ynil);
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1180_81) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  ARG(return_, 0);
  P x_1179F601;
  P x_1179F600;
  P x_1179F599;
  P bodyF598;
  P bindingsF597;
  P x_1179F596;
  P x_1180F595;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T17 = FUNSHELL(0,fun_x_1180_81,1);
  x_1180F595 = T17;
  FUNINIT(x_1180F595, 1,return_);
  x_1179F596 = FREEREF(0);
  bindingsF597 = YPfalse;
  bindingsF597 = BOXFAB(bindingsF597);
  bodyF598 = YPfalse;
  bodyF598 = BOXFAB(bodyF598);
  T14 = CALL2(CHKREF(YisaQ),x_1179F596,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1179F596,CHKREF(lit_91),x_1180F595);
    x_1179F599 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1179F599,x_1180F595);
    BOXVAL(bindingsF597) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1179F599);
    x_1179F600 = T12;
    BOXVAL(bodyF598) = x_1179F600;
    x_1179F601 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1179F601,x_1180F595);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1180F595,CHKREF(lit_4),x_1179F596);
  }
  T16 = FUNFAB(fun_80,2,bindingsF597,bodyF598);
  T15 = with_exit(T16);
  T4 = T15;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_82,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1188_84) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  ARG(return_, 0);
  P x_1187F611;
  P x_1187F610;
  P x_1187F609;
  P vnamF608;
  P typF607;
  P namF606;
  P valueF605;
  P varF604;
  P x_1187F603;
  P x_1188F602;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T58 = FUNSHELL(0,fun_x_1188_84,1);
  x_1188F602 = T58;
  FUNINIT(x_1188F602, 1,return_);
  x_1187F603 = FREEREF(0);
  varF604 = YPfalse;
  varF604 = BOXFAB(varF604);
  valueF605 = YPfalse;
  valueF605 = BOXFAB(valueF605);
  T16 = CALL2(CHKREF(YisaQ),x_1187F603,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1187F603,CHKREF(lit_102),x_1188F602);
    x_1187F609 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1187F609,x_1188F602);
    BOXVAL(varF604) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1187F609);
    x_1187F610 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1187F610,x_1188F602);
    BOXVAL(valueF605) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1187F610);
    x_1187F611 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1187F611,x_1188F602);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1188F602,CHKREF(lit_4),x_1187F603);
  }
  T57 = BOXVAL(varF604);
  T56 = CALL1(CHKREF(YmacrosYvar_name),T57);
  namF606 = T56;
  T55 = BOXVAL(varF604);
  T54 = CALL1(CHKREF(YmacrosYvar_type),T55);
  typF607 = T54;
  T53 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_101),namF606,CHKREF(lit_100));
  vnamF608 = T53;
  T52 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T51 = CALL1(CHKREF(Ylst),CHKREF(lit_99));
  T50 = CALL1(CHKREF(Ylst),vnamF608);
  T49 = BOXVAL(valueF605);
  T48 = CALL1(CHKREF(Ylst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),4,T51,T50,T48,Ynil);
  T46 = CALL1(CHKREF(Ylst),T47);
  T45 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T44 = CALL1(CHKREF(Ylst),namF606);
  T43 = CALL1(CHKREF(Ylst),CHKREF(lit_98));
  T42 = CALL1(CHKREF(Ylst),typF607);
  T41 = CALL3(CHKREF(YmacrosYcat),T43,T42,Ynil);
  T40 = CALL1(CHKREF(Ylst),T41);
  T39 = CALL1(CHKREF(Ylst),vnamF608);
  T38 = CALLN(CHKREF(YmacrosYcat),5,T45,T44,T40,T39,Ynil);
  T37 = CALL1(CHKREF(Ylst),T38);
  T36 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T35 = CALL1(CHKREF(YmacrosYmake_setter_name),namF606);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_96));
  T32 = CALL1(CHKREF(Ylst),typF607);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALL2(CHKREF(YmacrosYcat),T30,Ynil);
  T28 = CALL1(CHKREF(Ylst),T29);
  T27 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T26 = CALL1(CHKREF(Ylst),vnamF608);
  T25 = CALL1(CHKREF(Ylst),CHKREF(lit_96));
  T24 = CALLN(CHKREF(YmacrosYcat),4,T27,T26,T25,Ynil);
  T23 = CALL1(CHKREF(Ylst),T24);
  T22 = CALLN(CHKREF(YmacrosYcat),5,T36,T34,T28,T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = CALLN(CHKREF(YmacrosYcat),5,T52,T46,T37,T21,Ynil);
  T19 = T20;
  T18 = T19;
  T17 = T18;
  T4 = T17;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_85,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1192_87) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  ARG(return_, 0);
  P x_1191F616;
  P x_1191F615;
  P namesF614;
  P x_1191F613;
  P x_1192F612;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T33 = FUNSHELL(0,fun_x_1192_87,1);
  x_1192F612 = T33;
  FUNINIT(x_1192F612, 1,return_);
  x_1191F613 = FREEREF(0);
  namesF614 = YPfalse;
  namesF614 = BOXFAB(namesF614);
  T9 = CALL2(CHKREF(YisaQ),x_1191F613,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1191F613,CHKREF(lit_104),x_1192F612);
    x_1191F615 = T8;
    BOXVAL(namesF614) = x_1191F615;
    x_1191F616 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1191F616,x_1192F612);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1192F612,CHKREF(lit_4),x_1191F613);
  }
  T32 = BOXVAL(namesF614);
  T31 = CALL1(CHKREF(YmacrosYemptyQ),T32);
  if (T31 != YPfalse) {
    T10 = YPfalse;
  } else {
    T30 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
    T29 = CALL1(CHKREF(Ylst),CHKREF(lit_48));
    T28 = CALL1(CHKREF(Ylst),YPfalse);
    T27 = BOXVAL(namesF614);
    T26 = CALL1(CHKREF(Yhead),T27);
    T25 = CALL1(CHKREF(Ylst),T26);
    T24 = CALLN(CHKREF(YmacrosYcat),4,T29,T28,T25,Ynil);
    T23 = CALL1(CHKREF(Ylst),T24);
    T22 = CALL1(CHKREF(Ylst),CHKREF(lit_105));
    T21 = BOXVAL(namesF614);
    T20 = CALL1(CHKREF(Yhead),T21);
    T19 = CALL1(CHKREF(Ylst),T20);
    T18 = CALL3(CHKREF(YmacrosYcat),T22,T19,Ynil);
    T17 = CALL1(CHKREF(Ylst),T18);
    T16 = CALL1(CHKREF(Ylst),CHKREF(lit_104));
    T15 = BOXVAL(namesF614);
    T14 = CALL1(CHKREF(Ytail),T15);
    T13 = CALL3(CHKREF(YmacrosYcat),T16,T14,Ynil);
    T12 = CALL1(CHKREF(Ylst),T13);
    T11 = CALLN(CHKREF(YmacrosYcat),5,T30,T23,T17,T12,Ynil);
    T10 = T11;
  }
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_88,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

P YmacrosY___main_0___() {
  P T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"exp");
  lit_1 = YPPsym((P)"return");
  lit_2 = YPPsym((P)"%next-methods");
  lit_3 = YPPsym((P)"%call-next-method");
  lit_4 = YPsb((P)"Match Pattern Failure");
  lit_5 = YPPsym((P)"next-method");
  lit_6 = YPPsym((P)"x-1064");
  lit_7 = YPPsym((P)"args");
  lit_8 = YPPsym((P)"msg");
  T2 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1064_0 = YPmet(FUNCODEREF(fun_x_1064_0),CHKREF(lit_6),T2,ENVNUL);
  T1 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL);
  T3 = fun_2;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"next-method"),T3);
  lit_9 = YPPsym((P)"%apply-next-method");
  lit_10 = YPPsym((P)"apply-next-method");
  lit_11 = YPPsym((P)"x-1068");
  T6 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1068_3 = YPmet(FUNCODEREF(fun_x_1068_3),CHKREF(lit_11),T6,ENVNUL);
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL);
  T4 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL);
  T7 = fun_5;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"apply-next-method"),T7);
  lit_12 = YPPsym((P)"collected");
  lit_13 = YPPsym((P)"quote");
  lit_14 = YPPsym((P)"let");
  lit_15 = YPPsym((P)"collector-");
  lit_16 = YPPsym((P)"collecting");
  lit_17 = YPPsym((P)"x-1072");
  T10 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1072_6 = YPmet(FUNCODEREF(fun_x_1072_6),CHKREF(lit_17),T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL);
  T8 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL);
  T11 = fun_8;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collecting"),T11);
  lit_18 = YPPsym((P)"pair");
  lit_19 = YPPsym((P)"set");
  lit_20 = YPPsym((P)"collect");
  lit_21 = YPPsym((P)"x-1076");
  T14 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1076_9 = YPmet(FUNCODEREF(fun_x_1076_9),CHKREF(lit_21),T14,ENVNUL);
  T13 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL);
  T15 = fun_11;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collect"),T15);
  lit_22 = YPPsym((P)"rev!");
  lit_23 = YPPsym((P)"x-1080");
  T18 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1080_12 = YPmet(FUNCODEREF(fun_x_1080_12),CHKREF(lit_23),T18,ENVNUL);
  T17 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T17,ENVNUL);
  T16 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T16,ENVNUL);
  T19 = fun_14;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collected"),T19);
  lit_24 = YPPsym((P)"lift-place-subforms");
  lit_25 = YPPsym((P)"place");
  lit_26 = YPPsym((P)"munch");
  lit_27 = YPPsym((P)"subforms");
  T21 = YPsig(YPPlist(1,CHKREF(lit_27)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_munch_15 = YPmet(FUNCODEREF(fun_munch_15),CHKREF(lit_26),T21,ENVNUL);
  T20 = YPsig(YPPlist(1,CHKREF(lit_25)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  YmacrosYlift_place_subforms = YPmet(FUNCODEREF(YmacrosYlift_place_subforms),CHKREF(lit_24),T20,ENVNUL);
  T22 = YmacrosYlift_place_subforms;
  YmacrosYlift_place_subforms = T22;
  regsym(&YmacrosYlift_place_subforms,"macros","lift-place-subforms");
  lit_28 = YPPsym((P)"+");
  lit_29 = YPPsym((P)"x-1088");
  lit_30 = YPPsym((P)"inc");
  lit_31 = YPPsym((P)"x-1086");
  T27 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1088_17 = YPmet(FUNCODEREF(fun_x_1088_17),CHKREF(lit_29),T27,ENVNUL);
  T26 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T26,ENVNUL);
  T25 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1086_19 = YPmet(FUNCODEREF(fun_x_1086_19),CHKREF(lit_31),T25,ENVNUL);
  T24 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T24,ENVNUL);
  T23 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T23,ENVNUL);
  T28 = fun_21;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"inc"),T28);
  lit_32 = YPPsym((P)"-");
  lit_33 = YPPsym((P)"x-1096");
  lit_34 = YPPsym((P)"dec");
  lit_35 = YPPsym((P)"x-1094");
  T33 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1096_22 = YPmet(FUNCODEREF(fun_x_1096_22),CHKREF(lit_33),T33,ENVNUL);
  T32 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T32,ENVNUL);
  T31 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1094_24 = YPmet(FUNCODEREF(fun_x_1094_24),CHKREF(lit_35),T31,ENVNUL);
  T30 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T30,ENVNUL);
  T29 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T29,ENVNUL);
  T34 = fun_26;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dec"),T34);
  lit_36 = YPPsym((P)"push");
  lit_37 = YPPsym((P)"pushf");
  lit_38 = YPPsym((P)"x-1100");
  T37 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1100_27 = YPmet(FUNCODEREF(fun_x_1100_27),CHKREF(lit_38),T37,ENVNUL);
  T36 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T36,ENVNUL);
  T35 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T35,ENVNUL);
  T38 = fun_29;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"pushf"),T38);
  lit_39 = YPPsym((P)"pop");
  lit_40 = YPPsym((P)"tup");
  lit_41 = YPPsym((P)"popf");
  lit_42 = YPPsym((P)"x-1104");
  T41 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1104_30 = YPmet(FUNCODEREF(fun_x_1104_30),CHKREF(lit_42),T41,ENVNUL);
  T40 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL);
  T39 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL);
  T42 = fun_32;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"popf"),T42);
  lit_43 = YPPsym((P)"seq");
  lit_44 = YPPsym((P)"not");
  lit_45 = YPPsym((P)"if");
  lit_46 = YPPsym((P)"unless");
  lit_47 = YPPsym((P)"x-1108");
  T45 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1108_33 = YPmet(FUNCODEREF(fun_x_1108_33),CHKREF(lit_47),T45,ENVNUL);
  T44 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL);
  T43 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL);
  T46 = fun_35;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"unless"),T46);
  lit_48 = YPPsym((P)"when");
  lit_49 = YPPsym((P)"x-1112");
  T49 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1112_36 = YPmet(FUNCODEREF(fun_x_1112_36),CHKREF(lit_49),T49,ENVNUL);
  T48 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T47,ENVNUL);
  T50 = fun_38;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"when"),T50);
  lit_50 = YPPsym((P)"x-1124");
  lit_51 = YPPsym((P)"or");
  lit_52 = YPPsym((P)"tmp");
  lit_53 = YPPsym((P)"x-1122");
  lit_54 = YPPsym((P)"x-1120");
  T57 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1124_39 = YPmet(FUNCODEREF(fun_x_1124_39),CHKREF(lit_50),T57,ENVNUL);
  T56 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T56,ENVNUL);
  T55 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1122_41 = YPmet(FUNCODEREF(fun_x_1122_41),CHKREF(lit_53),T55,ENVNUL);
  T54 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T54,ENVNUL);
  T53 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1120_43 = YPmet(FUNCODEREF(fun_x_1120_43),CHKREF(lit_54),T53,ENVNUL);
  T52 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T52,ENVNUL);
  T51 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T51,ENVNUL);
  T58 = fun_45;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"or"),T58);
  lit_55 = YPPsym((P)"x-1136");
  lit_56 = YPPsym((P)"and");
  lit_57 = YPPsym((P)"x-1134");
  lit_58 = YPPsym((P)"x-1132");
  T65 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1136_46 = YPmet(FUNCODEREF(fun_x_1136_46),CHKREF(lit_55),T65,ENVNUL);
  T64 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T64,ENVNUL);
  T63 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1134_48 = YPmet(FUNCODEREF(fun_x_1134_48),CHKREF(lit_57),T63,ENVNUL);
  T62 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T62,ENVNUL);
  T61 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1132_50 = YPmet(FUNCODEREF(fun_x_1132_50),CHKREF(lit_58),T61,ENVNUL);
  T60 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T60,ENVNUL);
  T59 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T59,ENVNUL);
  T66 = fun_52;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"and"),T66);
  lit_59 = YPPsym((P)"case");
  lit_60 = YPPsym((P)"x-1144");
  lit_61 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_62 = YPPsym((P)"x-1142");
  T71 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1144_53 = YPmet(FUNCODEREF(fun_x_1144_53),CHKREF(lit_60),T71,ENVNUL);
  T70 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T70,ENVNUL);
  T69 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1142_55 = YPmet(FUNCODEREF(fun_x_1142_55),CHKREF(lit_62),T69,ENVNUL);
  T68 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T67,ENVNUL);
  T72 = fun_57;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case"),T72);
  lit_63 = YPPsym((P)"select");
  lit_64 = YPPsym((P)"x");
  lit_65 = YPPsym((P)"==");
  lit_66 = YPPsym((P)"x-1156");
  lit_67 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_68 = YPPsym((P)"x-1154");
  lit_69 = YPPsym((P)"x-1152");
  T80 = YPsig(YPPlist(1,CHKREF(lit_64)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T80,ENVNUL);
  T79 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1156_59 = YPmet(FUNCODEREF(fun_x_1156_59),CHKREF(lit_66),T79,ENVNUL);
  T78 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T78,ENVNUL);
  T77 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1154_61 = YPmet(FUNCODEREF(fun_x_1154_61),CHKREF(lit_68),T77,ENVNUL);
  T76 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T76,ENVNUL);
  T75 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1152_63 = YPmet(FUNCODEREF(fun_x_1152_63),CHKREF(lit_69),T75,ENVNUL);
  T74 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T74,ENVNUL);
  T73 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T73,ENVNUL);
  T81 = fun_65;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"select"),T81);
  lit_70 = YPPsym((P)"error");
  lit_71 = YPPsym((P)"assert");
  lit_72 = YPPsym((P)"x-1160");
  T84 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1160_66 = YPmet(FUNCODEREF(fun_x_1160_66),CHKREF(lit_72),T84,ENVNUL);
  T83 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T83,ENVNUL);
  T82 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T82,ENVNUL);
  T85 = fun_68;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"assert"),T85);
  lit_73 = YPPsym((P)"grok");
  lit_74 = YPPsym((P)"nexts");
  lit_75 = YPPsym((P)"nows");
  lit_76 = YPPsym((P)"preds");
  lit_77 = YPPsym((P)"inits");
  lit_78 = YPPsym((P)"exps");
  lit_79 = YPPsym((P)"clauses");
  lit_80 = YPPsym((P)"nxt-state");
  lit_81 = YPPsym((P)"now-elt");
  lit_82 = YPPsym((P)"now-key");
  lit_83 = YPPsym((P)"x-1172");
  lit_84 = YPPsym((P)"fin-state?");
  lit_85 = YPPsym((P)"ini-state");
  lit_86 = YPPsym((P)"x-1170");
  lit_87 = YPPsym((P)"rep");
  lit_88 = YPPsym((P)"for");
  lit_89 = YPPsym((P)"x-1168");
  T93 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1172_69 = YPmet(FUNCODEREF(fun_x_1172_69),CHKREF(lit_83),T93,ENVNUL);
  T92 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T92,ENVNUL);
  T91 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1170_71 = YPmet(FUNCODEREF(fun_x_1170_71),CHKREF(lit_86),T91,ENVNUL);
  T90 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T90,ENVNUL);
  T89 = YPsig(YPPlist(6,CHKREF(lit_79),CHKREF(lit_78),CHKREF(lit_77),CHKREF(lit_76),CHKREF(lit_75),CHKREF(lit_74)),YPPlist(6,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)6),CHKREF(YLanyG));
  fun_grok_73 = YPmet(FUNCODEREF(fun_grok_73),CHKREF(lit_73),T89,ENVNUL);
  T88 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1168_74 = YPmet(FUNCODEREF(fun_x_1168_74),CHKREF(lit_89),T88,ENVNUL);
  T87 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T86,ENVNUL);
  T94 = fun_76;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"for"),T94);
  lit_90 = YPPsym((P)"x-1182");
  lit_91 = YPPsym((P)"dlet");
  lit_92 = YPPsym((P)"fin");
  lit_93 = YPPsym((P)"x-1184");
  lit_94 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_95 = YPPsym((P)"x-1180");
  T101 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1184_77 = YPmet(FUNCODEREF(fun_x_1184_77),CHKREF(lit_93),T101,ENVNUL);
  T100 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T100,ENVNUL);
  T99 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1182_79 = YPmet(FUNCODEREF(fun_x_1182_79),CHKREF(lit_90),T99,ENVNUL);
  T98 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T98,ENVNUL);
  T97 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1180_81 = YPmet(FUNCODEREF(fun_x_1180_81),CHKREF(lit_95),T97,ENVNUL);
  T96 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T95,ENVNUL);
  T102 = fun_83;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dlet"),T102);
  lit_96 = YPPsym((P)"z");
  lit_97 = YPPsym((P)"dm");
  lit_98 = YPPsym((P)"=>");
  lit_99 = YPPsym((P)"dv");
  lit_100 = YPsb((P)"*");
  lit_101 = YPsb((P)"*");
  lit_102 = YPPsym((P)"def-fun-var");
  lit_103 = YPPsym((P)"x-1188");
  T105 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1188_84 = YPmet(FUNCODEREF(fun_x_1188_84),CHKREF(lit_103),T105,ENVNUL);
  T104 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T104,ENVNUL);
  T103 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T103,ENVNUL);
  T106 = fun_86;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"def-fun-var"),T106);
  lit_104 = YPPsym((P)"need-implementation");
  lit_105 = YPPsym((P)"export");
  lit_106 = YPPsym((P)"x-1192");
  T109 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1192_87 = YPmet(FUNCODEREF(fun_x_1192_87),CHKREF(lit_106),T109,ENVNUL);
  T108 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T108,ENVNUL);
  T107 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T107,ENVNUL);
  T110 = fun_89;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"need-implementation"),T110);
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
  T111 = YPfalse;
  return T111;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%fb", &module_info_boot, "%fb"},
  {"dss", &module_info_boot, "dss"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"%ft", &module_info_boot, "%ft"},
  {"%im", &module_info_boot, "%im"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"export", &module_info_boot, "export"},
  {"%f/", &module_info_boot, "%f/"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fapply", &module_info_boot, "fapply"},
  {"if", &module_info_boot, "if"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%i^", &module_info_boot, "%i^"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"object<", &module_info_boot, "object<"},
  {"%i!", &module_info_boot, "%i!"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"let", &module_info_boot, "let"},
  {"%f=", &module_info_boot, "%f="},
  {"%cb", &module_info_boot, "%cb"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%i*", &module_info_boot, "%i*"},
  {"%snul", &module_info_boot, "%snul"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%slen", &module_info_boot, "%slen"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"df", &module_info_boot, "df"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"dv", &module_info_boot, "dv"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"<col>", &module_info_boot, "<col>"},
  {"%lu", &module_info_boot, "%lu"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"error", &module_info_boot, "error"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"%cu", &module_info_boot, "%cu"},
  {"%pair", &module_info_boot, "%pair"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%sb", &module_info_boot, "%sb"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"quote", &module_info_boot, "quote"},
  {"%it/", &module_info_boot, "%it/"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"loc", &module_info_boot, "loc"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%i=", &module_info_boot, "%i="},
  {"%ib", &module_info_boot, "%ib"},
  {"nil", &module_info_boot, "nil"},
  {"%c<", &module_info_boot, "%c<"},
  {"type-error", &module_info_boot, "type-error"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"tail", &module_info_boot, "tail"},
  {"%fu", &module_info_boot, "%fu"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"%f<", &module_info_boot, "%f<"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%f*", &module_info_boot, "%f*"},
  {"dp", &module_info_boot, "dp"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"dm", &module_info_boot, "dm"},
  {"%iu", &module_info_boot, "%iu"},
  {"nul", &module_info_boot, "nul"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<log>", &module_info_boot, "<log>"},
  {"mif", &module_info_boot, "mif"},
  {"%isa", &module_info_boot, "%isa"},
  {"dc", &module_info_boot, "dc"},
  {"dg", &module_info_boot, "dg"},
  {"isa?", &module_info_boot, "isa?"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"apply", &module_info_boot, "apply"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"isa", &module_info_boot, "isa"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"fun", &module_info_boot, "fun"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%i<", &module_info_boot, "%i<"},
  {"not", &module_info_boot, "not"},
  {"%i+", &module_info_boot, "%i+"},
  {"try", &module_info_boot, "try"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"<any>", &module_info_boot, "<any>"},
  {"fin", &module_info_boot, "fin"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"ds", &module_info_boot, "ds"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"<int>", &module_info_boot, "<int>"},
  {"%vec", &module_info_boot, "%vec"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"<num>", &module_info_boot, "<num>"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%su", &module_info_boot, "%su"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<str>", &module_info_boot, "<str>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%raw", &module_info_boot, "%raw"},
  {"%f-", &module_info_boot, "%f-"},
  {"%f+", &module_info_boot, "%f+"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"use", &module_info_boot, "use"},
  {"%i&", &module_info_boot, "%i&"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"ct", &module_info_boot, "ct"},
  {"%iv", &module_info_boot, "%iv"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"%selt", &module_info_boot, "%selt"},
  {"lst", &module_info_boot, "lst"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"lab", &module_info_boot, "lab"},
  {"<met>", &module_info_boot, "<met>"},
  {"%slot", &module_info_boot, "%slot"},
  {"%i?", &module_info_boot, "%i?"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"head", &module_info_boot, "head"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"slot", &module_info_boot, "slot"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%velt", &module_info_boot, "%velt"},
  {"%str", &module_info_boot, "%str"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"rep", &module_info_boot, "rep"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i-", &module_info_boot, "%i-"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"bound?", &module_info_boot, "bound?"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"set", &module_info_boot, "set"},
  {"%c=", &module_info_boot, "%c="},
  {"%file-type", &module_info_boot, "%file-type"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"unless", NULL},
  {"def-fun-var", NULL},
  {"lift-place-subforms", &YmacrosYlift_place_subforms},
  {"pair", &YmacrosYpair},
  {"var-name", &YmacrosYvar_name},
  {"assert", NULL},
  {"when", NULL},
  {"popf", NULL},
  {"match-empty-list", &YmacrosYmatch_empty_list},
  {"need-implementation", NULL},
  {"or", NULL},
  {"cat", &YmacrosYcat},
  {"tup", &YmacrosYtup},
  {"pushf", NULL},
  {"apply-next-method", NULL},
  {"dec", NULL},
  {"make-sym", &YmacrosYmake_sym},
  {"collected", NULL},
  {"next-method", NULL},
  {"empty?", &YmacrosYemptyQ},
  {"inc", NULL},
  {"match-sublist", &YmacrosYmatch_sublist},
  {"==", &YmacrosYEE},
  {"map", &YmacrosYmap},
  {"select", NULL},
  {"var-type", &YmacrosYvar_type},
  {"dlet", NULL},
  {"case", NULL},
  {"make-setter-name", &YmacrosYmake_setter_name},
  {"gensym", &YmacrosYgensym},
  {"match-atom", &YmacrosYmatch_atom},
  {"and", NULL},
  {"for", NULL},
  {"match-unquote", &YmacrosYmatch_unquote},
  {"collect", NULL},
  {"---main-0---", NULL},
  {"collecting", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"unless", "unless"},
  {"def-fun-var", "def-fun-var"},
  {"pair", "pair"},
  {"var-name", "var-name"},
  {"or", "or"},
  {"assert", "assert"},
  {"when", "when"},
  {"popf", "popf"},
  {"match-empty-list", "match-empty-list"},
  {"need-implementation", "need-implementation"},
  {"cat", "cat"},
  {"error", "error"},
  {"tup", "tup"},
  {"pushf", "pushf"},
  {"apply-next-method", "apply-next-method"},
  {"dec", "dec"},
  {"make-sym", "make-sym"},
  {"collected", "collected"},
  {"next-method", "next-method"},
  {"empty?", "empty?"},
  {"inc", "inc"},
  {"match-sublist", "match-sublist"},
  {"==", "=="},
  {"map", "map"},
  {"select", "select"},
  {"var-type", "var-type"},
  {"dlet", "dlet"},
  {"case", "case"},
  {"make-setter-name", "make-setter-name"},
  {"gensym", "gensym"},
  {"match-atom", "match-atom"},
  {"and", "and"},
  {"for", "for"},
  {"lst", "lst"},
  {"match-unquote", "match-unquote"},
  {"collect", "collect"},
  {"collecting", "collecting"},
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
