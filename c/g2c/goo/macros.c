/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YLcolG,"boot","<col>");
EXT(Yerror,"boot","error");
EXT(Yslot_getter,"boot","slot-getter");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(YPsymbols,"boot","%symbols");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YmacrosYmake_sym,"macros","make-sym");
DEF(YmacrosYlst,"macros","lst");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YLstrG,"boot","<str>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YPPmacro,"boot","%%macro");
EXT(Ytype_error,"boot","type-error");
EXT(Ysym_name,"boot","sym-name");
EXT(YLnumG,"boot","<num>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ynul,"boot","nul");
EXT(YLsigG,"boot","<sig>");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YmacrosYcat,"macros","cat");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yslot_value,"boot","slot-value");
DEF(YmacrosYEE,"macros","==");
EXT(YLanyG,"boot","<any>");
EXT(YLseqG,"boot","<seq>");
DEF(YmacrosYemptyQ,"macros","empty?");
EXT(Yfapply,"boot","fapply");
EXT(YLlstG,"boot","<lst>");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YLmetG,"boot","<met>");
EXT(YPisa,"boot","%isa");
EXT(Ysig_names,"boot","sig-names");
DEF(YmacrosYpair,"macros","pair");
DEF(YmacrosYmap,"macros","map");
EXT(YisaQ,"boot","isa?");
EXT(YLtraitsG,"boot","<traits>");
DEF(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YPdefine_method,"boot","%define-method");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YPslot,"boot","%slot");
EXT(YLvecG,"boot","<vec>");
DEF(YmacrosYvar_name,"macros","var-name");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(YmacrosYgensym,"macros","gensym");
EXT(YLbagG,"boot","<bag>");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YLlogG,"boot","<log>");
EXT(YPvnul,"boot","%vnul");
EXT(Yobject_parents,"boot","object-parents");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YPsnul,"boot","%snul");
EXT(YLtupG,"boot","<tup>");
EXT(Ysig_value,"boot","sig-value");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YLfloG,"boot","<flo>");
EXT(YLoptsG,"boot","<opts>");
EXT(YLchrG,"boot","<chr>");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLsymG,"boot","<sym>");
EXT(YLlocG,"boot","<loc>");
EXT(YLintG,"boot","<int>");
EXT(Yhead,"boot","head");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YLslotG,"boot","<slot>");
EXT(YLflatG,"boot","<flat>");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(YLfunG,"boot","<fun>");
DEF(YmacrosYtup,"macros","tup");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yapply,"boot","apply");
EXT(Yfun_name,"boot","fun-name");
EXT(Ytail,"boot","tail");
EXT(Yhead_setter,"boot","head-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_143);
DEFLIT(lit_142);
DEFLIT(lit_141);
DEFLIT(lit_140);
DEFLIT(lit_139);
DEFLIT(lit_138);
DEFLIT(lit_137);
DEFLIT(lit_136);
DEFLIT(lit_135);
DEFLIT(lit_134);
DEFLIT(lit_133);
DEFLIT(lit_132);
DEFLIT(lit_131);
DEFLIT(lit_130);
DEFLIT(lit_129);
DEFLIT(lit_128);
DEFLIT(lit_127);
DEFLIT(lit_126);
DEFLIT(lit_125);
DEFLIT(lit_124);
DEFLIT(lit_123);
DEFLIT(lit_122);
DEFLIT(lit_121);
DEFLIT(lit_120);
DEFLIT(lit_119);
DEFLIT(lit_118);
DEFLIT(lit_117);
DEFLIT(lit_116);
DEFLIT(lit_115);
DEFLIT(lit_114);
DEFLIT(lit_113);
DEFLIT(lit_112);
DEFLIT(lit_111);
DEFLIT(lit_110);
DEFLIT(lit_109);
DEFLIT(lit_108);
DEFLIT(lit_107);
DEFLIT(lit_106);
DEFLIT(lit_105);
DEFLIT(lit_104);
DEFLIT(lit_103);
DEFLIT(lit_102);
DEFLIT(lit_101);
DEFLIT(lit_100);
DEFLIT(lit_99);
DEFLIT(lit_98);
DEFLIT(lit_97);
DEFLIT(lit_96);
DEFLIT(lit_95);
DEFLIT(lit_94);
DEFLIT(lit_93);
DEFLIT(lit_92);
DEFLIT(lit_91);
DEFLIT(lit_90);
DEFLIT(lit_89);
DEFLIT(lit_88);
DEFLIT(lit_87);
DEFLIT(lit_86);
DEFLIT(lit_85);
DEFLIT(lit_84);
DEFLIT(lit_83);
DEFLIT(lit_82);
DEFLIT(lit_81);
DEFLIT(lit_80);
DEFLIT(lit_79);
DEFLIT(lit_78);
DEFLIT(lit_77);
DEFLIT(lit_76);
DEFLIT(lit_75);
DEFLIT(lit_74);
DEFLIT(lit_73);
DEFLIT(lit_72);
DEFLIT(lit_71);
DEFLIT(lit_70);
DEFLIT(lit_69);
DEFLIT(lit_68);
DEFLIT(lit_67);
DEFLIT(lit_66);
DEFLIT(lit_65);
DEFLIT(lit_64);
DEFLIT(lit_63);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_60);
DEFLIT(lit_59);
DEFLIT(lit_58);
DEFLIT(lit_57);
DEFLIT(lit_56);
DEFLIT(lit_55);
DEFLIT(lit_54);
DEFLIT(lit_53);
DEFLIT(lit_52);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_46);
DEFLIT(lit_45);
DEFLIT(lit_44);
DEFLIT(lit_43);
DEFLIT(lit_42);
DEFLIT(lit_41);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_33);
DEFLIT(lit_32);
DEFLIT(lit_31);
DEFLIT(lit_30);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_27);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_20);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_x_1044_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1048_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1052_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1056_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_x_1060_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_munch_15);
FUNFOR(YmacrosYlift_place_subforms);
LOCFOR(fun_x_1068_17);
LOCFOR(fun_18);
LOCFOR(fun_x_1066_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_x_1076_22);
LOCFOR(fun_23);
LOCFOR(fun_x_1074_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1080_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1084_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_x_1088_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_x_1092_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_x_1104_39);
LOCFOR(fun_40);
LOCFOR(fun_x_1102_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1100_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1116_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1114_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1112_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_x_1124_53);
LOCFOR(fun_54);
LOCFOR(fun_x_1122_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1136_59);
LOCFOR(fun_60);
LOCFOR(fun_x_1134_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1132_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1140_66);
LOCFOR(fun_67);
LOCFOR(fun_68);
LOCFOR(fun_x_1152_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1150_71);
LOCFOR(fun_72);
LOCFOR(fun_grok_73);
LOCFOR(fun_x_1148_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_x_1164_77);
LOCFOR(fun_78);
LOCFOR(fun_x_1162_79);
LOCFOR(fun_80);
LOCFOR(fun_x_1160_81);
LOCFOR(fun_82);
LOCFOR(fun_83);
LOCFOR(fun_x_1168_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_x_1172_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
extern P YmacrosY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1044_0) {
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
  P x_1043F382;
  P x_1043F381;
  P argsF380;
  P x_1043F379;
  P x_1044F378;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1044_0,1);
  x_1044F378 = T16;
  FUNINIT(x_1044F378, 1,return_);
  x_1043F379 = FREEREF(0);
  argsF380 = YPfalse;
  argsF380 = BOXFAB(argsF380);
  T9 = CALL2(CHKREF(YisaQ),x_1043F379,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1043F379,CHKREF(lit_3),x_1044F378);
    x_1043F381 = T8;
    BOXVAL(argsF380) = x_1043F381;
    x_1043F382 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1043F382,x_1044F378);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1044F378,CHKREF(lit_2),x_1043F379);
  }
  T15 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_1));
  T14 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_0));
  T13 = CALL2(CHKREF(YmacrosYcat),T14,Ynil);
  T12 = CALL1(CHKREF(YmacrosYlst),T13);
  T11 = BOXVAL(argsF380);
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

FUNCODEDEF(fun_x_1048_3) {
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
  P x_1047F387;
  P x_1047F386;
  P argsF385;
  P x_1047F384;
  P x_1048F383;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = FUNSHELL(0,fun_x_1048_3,1);
  x_1048F383 = T19;
  FUNINIT(x_1048F383, 1,return_);
  x_1047F384 = FREEREF(0);
  argsF385 = YPfalse;
  argsF385 = BOXFAB(argsF385);
  T11 = CALL2(CHKREF(YisaQ),x_1047F384,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1047F384,CHKREF(lit_7),x_1048F383);
    x_1047F386 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1047F386,x_1048F383);
    BOXVAL(argsF385) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1047F386);
    x_1047F387 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1047F387,x_1048F383);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1048F383,CHKREF(lit_6),x_1047F384);
  }
  T18 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_5));
  T17 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_4));
  T16 = CALL2(CHKREF(YmacrosYcat),T17,Ynil);
  T15 = CALL1(CHKREF(YmacrosYlst),T16);
  T14 = BOXVAL(argsF385);
  T13 = CALL1(CHKREF(YmacrosYlst),T14);
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

FUNCODEDEF(fun_x_1052_6) {
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
  P x_1051F395;
  P x_1051F394;
  P x_1051F393;
  P x_1051F392;
  P nameF391;
  P bodyF390;
  P x_1051F389;
  P x_1052F388;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T31 = FUNSHELL(0,fun_x_1052_6,1);
  x_1052F388 = T31;
  FUNINIT(x_1052F388, 1,return_);
  x_1051F389 = FREEREF(0);
  bodyF390 = YPfalse;
  bodyF390 = BOXFAB(bodyF390);
  T13 = CALL2(CHKREF(YisaQ),x_1051F389,CHKREF(YLlstG));
  if (T13 != YPfalse) {
    T12 = CALL3(CHKREF(YmacrosYmatch_atom),x_1051F389,CHKREF(lit_13),x_1052F388);
    x_1051F392 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1051F392,x_1052F388);
    x_1051F393 = T10;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1051F393,x_1052F388);
    T11 = CALL1(CHKREF(Ytail),x_1051F392);
    x_1051F394 = T11;
    BOXVAL(bodyF390) = x_1051F394;
    x_1051F395 = Ynil;
    T8 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1051F395,x_1052F388);
    T7 = T8;
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1052F388,CHKREF(lit_12),x_1051F389);
  }
  nameF391 = CHKREF(lit_11);
  T30 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_10));
  T29 = CALL1(CHKREF(YmacrosYlst),nameF391);
  T28 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_9));
  T27 = CALL1(CHKREF(YmacrosYlst),Ynil);
  T26 = CALL3(CHKREF(YmacrosYcat),T28,T27,Ynil);
  T25 = CALL1(CHKREF(YmacrosYlst),T26);
  T24 = CALL3(CHKREF(YmacrosYcat),T29,T25,Ynil);
  T23 = CALL1(CHKREF(YmacrosYlst),T24);
  T22 = CALL2(CHKREF(YmacrosYcat),T23,Ynil);
  T21 = CALL1(CHKREF(YmacrosYlst),T22);
  T20 = BOXVAL(bodyF390);
  T19 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_8));
  T18 = CALL1(CHKREF(YmacrosYlst),nameF391);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(YmacrosYlst),T17);
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

FUNCODEDEF(fun_x_1056_9) {
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
  P x_1055F401;
  P x_1055F400;
  P nameF399;
  P valueF398;
  P x_1055F397;
  P x_1056F396;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T22 = FUNSHELL(0,fun_x_1056_9,1);
  x_1056F396 = T22;
  FUNINIT(x_1056F396, 1,return_);
  x_1055F397 = FREEREF(0);
  valueF398 = YPfalse;
  valueF398 = BOXFAB(valueF398);
  T11 = CALL2(CHKREF(YisaQ),x_1055F397,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1055F397,CHKREF(lit_18),x_1056F396);
    x_1055F400 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1055F400,x_1056F396);
    BOXVAL(valueF398) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1055F400);
    x_1055F401 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1055F401,x_1056F396);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1056F396,CHKREF(lit_17),x_1055F397);
  }
  nameF399 = CHKREF(lit_16);
  T21 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_15));
  T20 = CALL1(CHKREF(YmacrosYlst),nameF399);
  T19 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_14));
  T18 = BOXVAL(valueF398);
  T17 = CALL1(CHKREF(YmacrosYlst),T18);
  T16 = CALL1(CHKREF(YmacrosYlst),nameF399);
  T15 = CALLN(CHKREF(YmacrosYcat),4,T19,T17,T16,Ynil);
  T14 = CALL1(CHKREF(YmacrosYlst),T15);
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

FUNCODEDEF(fun_x_1060_12) {
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
  P x_1059F406;
  P x_1059F405;
  P nameF404;
  P x_1059F403;
  P x_1060F402;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1060_12,1);
  x_1060F402 = T16;
  FUNINIT(x_1060F402, 1,return_);
  x_1059F403 = FREEREF(0);
  nameF404 = YPfalse;
  nameF404 = BOXFAB(nameF404);
  T11 = CALL2(CHKREF(YisaQ),x_1059F403,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1059F403,CHKREF(lit_21),x_1060F402);
    x_1059F405 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1059F405,x_1060F402);
    BOXVAL(nameF404) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1059F405);
    x_1059F406 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1059F406,x_1060F402);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1060F402,CHKREF(lit_20),x_1059F403);
  }
  T15 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_19));
  T14 = BOXVAL(nameF404);
  T13 = CALL1(CHKREF(YmacrosYlst),T14);
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
  P gF412;
  P tup3F411;
  P g_argsF410;
  P tup3F409;
  P g_declsF408;
  P tup3F407;
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
    tup3F407 = T19;
    T18 = CALL1(CHKREF(Yhead),tup3F407);
    g_declsF408 = T18;
    T17 = CALL1(CHKREF(Ytail),tup3F407);
    tup3F409 = T17;
    T16 = CALL1(CHKREF(Yhead),tup3F409);
    g_argsF410 = T16;
    T15 = CALL1(CHKREF(Ytail),tup3F409);
    tup3F411 = T15;
    T14 = CALL0(CHKREF(YmacrosYgensym));
    gF412 = T14;
    T13 = CALL1(CHKREF(YmacrosYlst),gF412);
    T12 = CALL1(CHKREF(Yhead),subforms_);
    T11 = CALL1(CHKREF(YmacrosYlst),T12);
    T10 = CALL3(CHKREF(YmacrosYcat),T13,T11,Ynil);
    T9 = CALL2(CHKREF(YmacrosYpair),T10,g_declsF408);
    T8 = CALL2(CHKREF(YmacrosYpair),gF412,g_argsF410);
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
  P tup4F418;
  P g_argsF417;
  P tup4F416;
  P g_declsF415;
  P tup4F414;
  P munchF413;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = FUNSHELL(1,fun_munch_15,1);
  munchF413 = T18;
  FUNINIT(munchF413, 1,munchF413);
  T17 = CALL2(CHKREF(YisaQ),place_,CHKREF(YLsymG));
  if (T17 != YPfalse) {
    T16 = CALL2(CHKREF(YmacrosYtup),Ynil,place_);
    T1 = T16;
  } else {
    T15 = CALL1(CHKREF(Ytail),place_);
    T14 = CALL1(munchF413,T15);
    tup4F414 = T14;
    T13 = CALL1(CHKREF(Yhead),tup4F414);
    g_declsF415 = T13;
    T12 = CALL1(CHKREF(Ytail),tup4F414);
    tup4F416 = T12;
    T11 = CALL1(CHKREF(Yhead),tup4F416);
    g_argsF417 = T11;
    T10 = CALL1(CHKREF(Ytail),tup4F416);
    tup4F418 = T10;
    T9 = CALL1(CHKREF(Yhead),place_);
    T8 = CALL2(CHKREF(YmacrosYpair),T9,g_argsF417);
    T7 = CALL2(CHKREF(YmacrosYtup),g_declsF415,T8);
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

FUNCODEDEF(fun_x_1068_17) {
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
  P x_1067F422;
  P amountF421;
  P x_1067F420;
  P x_1068F419;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1068_17,1);
  x_1068F419 = T12;
  FUNINIT(x_1068F419, 1,return_);
  T11 = BOXVAL(FREEREF(0));
  x_1067F420 = T11;
  amountF421 = YPfalse;
  amountF421 = BOXFAB(amountF421);
  T9 = CALL2(CHKREF(YisaQ),x_1067F420,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1067F420,x_1068F419);
    BOXVAL(amountF421) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1067F420);
    x_1067F422 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1067F422,x_1068F419);
    T5 = T6;
  } else {
    T4 = CALL2(x_1068F419,CHKREF(lit_25),x_1067F420);
  }
  T10 = BOXVAL(amountF421);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1066_19) {
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
  P x_1065F435;
  P x_1065F434;
  P x_1065F433;
  P amountF432;
  P tup6F431;
  P g_placeF430;
  P tup6F429;
  P g_declsF428;
  P tup6F427;
  P amountF426;
  P placeF425;
  P x_1065F424;
  P x_1066F423;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1066_19,1);
  x_1066F423 = T42;
  FUNINIT(x_1066F423, 1,return_);
  x_1065F424 = FREEREF(0);
  placeF425 = YPfalse;
  placeF425 = BOXFAB(placeF425);
  amountF426 = YPfalse;
  amountF426 = BOXFAB(amountF426);
  T14 = CALL2(CHKREF(YisaQ),x_1065F424,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1065F424,CHKREF(lit_27),x_1066F423);
    x_1065F433 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1065F433,x_1066F423);
    BOXVAL(placeF425) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1065F433);
    x_1065F434 = T12;
    BOXVAL(amountF426) = x_1065F434;
    x_1065F435 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1065F435,x_1066F423);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1066F423,CHKREF(lit_26),x_1065F424);
  }
  T41 = BOXVAL(placeF425);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup6F427 = T40;
  T39 = CALL1(CHKREF(Yhead),tup6F427);
  g_declsF428 = T39;
  T38 = CALL1(CHKREF(Ytail),tup6F427);
  tup6F429 = T38;
  T37 = CALL1(CHKREF(Yhead),tup6F429);
  g_placeF430 = T37;
  T36 = CALL1(CHKREF(Ytail),tup6F429);
  tup6F431 = T36;
  T35 = FUNFAB(fun_18,1,amountF426);
  T34 = with_exit(T35);
  amountF432 = T34;
  T33 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_24));
  T32 = CALL2(CHKREF(YmacrosYcat),g_declsF428,Ynil);
  T31 = CALL1(CHKREF(YmacrosYlst),T32);
  T30 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_23));
  T29 = CALL1(CHKREF(YmacrosYlst),g_placeF430);
  T28 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_22));
  T27 = CALL1(CHKREF(YmacrosYlst),g_placeF430);
  T26 = CALL1(CHKREF(YmacrosYlst),amountF432);
  T25 = CALLN(CHKREF(YmacrosYcat),4,T28,T27,T26,Ynil);
  T24 = CALL1(CHKREF(YmacrosYlst),T25);
  T23 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T24,Ynil);
  T22 = CALL1(CHKREF(YmacrosYlst),T23);
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

FUNCODEDEF(fun_x_1076_22) {
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
  P x_1075F439;
  P amountF438;
  P x_1075F437;
  P x_1076F436;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1076_22,1);
  x_1076F436 = T12;
  FUNINIT(x_1076F436, 1,return_);
  T11 = BOXVAL(FREEREF(0));
  x_1075F437 = T11;
  amountF438 = YPfalse;
  amountF438 = BOXFAB(amountF438);
  T9 = CALL2(CHKREF(YisaQ),x_1075F437,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1075F437,x_1076F436);
    BOXVAL(amountF438) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1075F437);
    x_1075F439 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1075F439,x_1076F436);
    T5 = T6;
  } else {
    T4 = CALL2(x_1076F436,CHKREF(lit_31),x_1075F437);
  }
  T10 = BOXVAL(amountF438);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1074_24) {
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
  P x_1073F452;
  P x_1073F451;
  P x_1073F450;
  P amountF449;
  P tup8F448;
  P g_placeF447;
  P tup8F446;
  P g_declsF445;
  P tup8F444;
  P amountF443;
  P placeF442;
  P x_1073F441;
  P x_1074F440;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1074_24,1);
  x_1074F440 = T42;
  FUNINIT(x_1074F440, 1,return_);
  x_1073F441 = FREEREF(0);
  placeF442 = YPfalse;
  placeF442 = BOXFAB(placeF442);
  amountF443 = YPfalse;
  amountF443 = BOXFAB(amountF443);
  T14 = CALL2(CHKREF(YisaQ),x_1073F441,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1073F441,CHKREF(lit_33),x_1074F440);
    x_1073F450 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1073F450,x_1074F440);
    BOXVAL(placeF442) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1073F450);
    x_1073F451 = T12;
    BOXVAL(amountF443) = x_1073F451;
    x_1073F452 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1073F452,x_1074F440);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1074F440,CHKREF(lit_32),x_1073F441);
  }
  T41 = BOXVAL(placeF442);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup8F444 = T40;
  T39 = CALL1(CHKREF(Yhead),tup8F444);
  g_declsF445 = T39;
  T38 = CALL1(CHKREF(Ytail),tup8F444);
  tup8F446 = T38;
  T37 = CALL1(CHKREF(Yhead),tup8F446);
  g_placeF447 = T37;
  T36 = CALL1(CHKREF(Ytail),tup8F446);
  tup8F448 = T36;
  T35 = FUNFAB(fun_23,1,amountF443);
  T34 = with_exit(T35);
  amountF449 = T34;
  T33 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_30));
  T32 = CALL2(CHKREF(YmacrosYcat),g_declsF445,Ynil);
  T31 = CALL1(CHKREF(YmacrosYlst),T32);
  T30 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_29));
  T29 = CALL1(CHKREF(YmacrosYlst),g_placeF447);
  T28 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_28));
  T27 = CALL1(CHKREF(YmacrosYlst),g_placeF447);
  T26 = CALL1(CHKREF(YmacrosYlst),amountF449);
  T25 = CALLN(CHKREF(YmacrosYcat),4,T28,T27,T26,Ynil);
  T24 = CALL1(CHKREF(YmacrosYlst),T25);
  T23 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T24,Ynil);
  T22 = CALL1(CHKREF(YmacrosYlst),T23);
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

FUNCODEDEF(fun_x_1080_27) {
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
  P x_1079F464;
  P x_1079F463;
  P x_1079F462;
  P tup10F461;
  P g_placeF460;
  P tup10F459;
  P g_declsF458;
  P tup10F457;
  P valueF456;
  P placeF455;
  P x_1079F454;
  P x_1080F453;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1080_27,1);
  x_1080F453 = T42;
  FUNINIT(x_1080F453, 1,return_);
  x_1079F454 = FREEREF(0);
  placeF455 = YPfalse;
  placeF455 = BOXFAB(placeF455);
  valueF456 = YPfalse;
  valueF456 = BOXFAB(valueF456);
  T16 = CALL2(CHKREF(YisaQ),x_1079F454,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1079F454,CHKREF(lit_38),x_1080F453);
    x_1079F462 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1079F462,x_1080F453);
    BOXVAL(placeF455) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1079F462);
    x_1079F463 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1079F463,x_1080F453);
    BOXVAL(valueF456) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1079F463);
    x_1079F464 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1079F464,x_1080F453);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1080F453,CHKREF(lit_37),x_1079F454);
  }
  T41 = BOXVAL(placeF455);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup10F457 = T40;
  T39 = CALL1(CHKREF(Yhead),tup10F457);
  g_declsF458 = T39;
  T38 = CALL1(CHKREF(Ytail),tup10F457);
  tup10F459 = T38;
  T37 = CALL1(CHKREF(Yhead),tup10F459);
  g_placeF460 = T37;
  T36 = CALL1(CHKREF(Ytail),tup10F459);
  tup10F461 = T36;
  T35 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_36));
  T34 = CALL2(CHKREF(YmacrosYcat),g_declsF458,Ynil);
  T33 = CALL1(CHKREF(YmacrosYlst),T34);
  T32 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_35));
  T31 = CALL1(CHKREF(YmacrosYlst),g_placeF460);
  T30 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_34));
  T29 = CALL1(CHKREF(YmacrosYlst),g_placeF460);
  T28 = BOXVAL(valueF456);
  T27 = CALL1(CHKREF(YmacrosYlst),T28);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T27,Ynil);
  T25 = CALL1(CHKREF(YmacrosYlst),T26);
  T24 = CALLN(CHKREF(YmacrosYcat),4,T32,T31,T25,Ynil);
  T23 = CALL1(CHKREF(YmacrosYlst),T24);
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

FUNCODEDEF(fun_x_1084_30) {
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
  P x_1083F476;
  P x_1083F475;
  P valF474;
  P new_colF473;
  P tup12F472;
  P g_placeF471;
  P tup12F470;
  P g_declsF469;
  P tup12F468;
  P placeF467;
  P x_1083F466;
  P x_1084F465;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T48 = FUNSHELL(0,fun_x_1084_30,1);
  x_1084F465 = T48;
  FUNINIT(x_1084F465, 1,return_);
  x_1083F466 = FREEREF(0);
  placeF467 = YPfalse;
  placeF467 = BOXFAB(placeF467);
  T11 = CALL2(CHKREF(YisaQ),x_1083F466,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1083F466,CHKREF(lit_44),x_1084F465);
    x_1083F475 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1083F475,x_1084F465);
    BOXVAL(placeF467) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1083F475);
    x_1083F476 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1083F476,x_1084F465);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1084F465,CHKREF(lit_43),x_1083F466);
  }
  T47 = BOXVAL(placeF467);
  T46 = CALL1(CHKREF(YmacrosYlift_place_subforms),T47);
  tup12F468 = T46;
  T45 = CALL1(CHKREF(Yhead),tup12F468);
  g_declsF469 = T45;
  T44 = CALL1(CHKREF(Ytail),tup12F468);
  tup12F470 = T44;
  T43 = CALL1(CHKREF(Yhead),tup12F470);
  g_placeF471 = T43;
  T42 = CALL1(CHKREF(Ytail),tup12F470);
  tup12F472 = T42;
  T41 = CALL0(CHKREF(YmacrosYgensym));
  new_colF473 = T41;
  T40 = CALL0(CHKREF(YmacrosYgensym));
  valF474 = T40;
  T39 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_42));
  T38 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_41));
  T37 = CALL1(CHKREF(YmacrosYlst),new_colF473);
  T36 = CALL1(CHKREF(YmacrosYlst),valF474);
  T35 = CALLN(CHKREF(YmacrosYcat),4,T38,T37,T36,Ynil);
  T34 = CALL1(CHKREF(YmacrosYlst),T35);
  T33 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_40));
  T32 = CALL1(CHKREF(YmacrosYlst),g_placeF471);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(YmacrosYlst),T31);
  T29 = CALL3(CHKREF(YmacrosYcat),T34,T30,Ynil);
  T28 = CALL1(CHKREF(YmacrosYlst),T29);
  T27 = CALL3(CHKREF(YmacrosYcat),g_declsF469,T28,Ynil);
  T26 = CALL1(CHKREF(YmacrosYlst),T27);
  T25 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_39));
  T24 = CALL1(CHKREF(YmacrosYlst),g_placeF471);
  T23 = CALL1(CHKREF(YmacrosYlst),new_colF473);
  T22 = CALLN(CHKREF(YmacrosYcat),4,T25,T24,T23,Ynil);
  T21 = CALL1(CHKREF(YmacrosYlst),T22);
  T20 = CALL1(CHKREF(YmacrosYlst),valF474);
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

FUNCODEDEF(fun_x_1088_33) {
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
  P x_1087F483;
  P x_1087F482;
  P x_1087F481;
  P bodyF480;
  P testF479;
  P x_1087F478;
  P x_1088F477;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T26 = FUNSHELL(0,fun_x_1088_33,1);
  x_1088F477 = T26;
  FUNINIT(x_1088F477, 1,return_);
  x_1087F478 = FREEREF(0);
  testF479 = YPfalse;
  testF479 = BOXFAB(testF479);
  bodyF480 = YPfalse;
  bodyF480 = BOXFAB(bodyF480);
  T14 = CALL2(CHKREF(YisaQ),x_1087F478,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1087F478,CHKREF(lit_49),x_1088F477);
    x_1087F481 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1087F481,x_1088F477);
    BOXVAL(testF479) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1087F481);
    x_1087F482 = T12;
    BOXVAL(bodyF480) = x_1087F482;
    x_1087F483 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1087F483,x_1088F477);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1088F477,CHKREF(lit_48),x_1087F478);
  }
  T25 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_47));
  T24 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_46));
  T23 = BOXVAL(testF479);
  T22 = CALL1(CHKREF(YmacrosYlst),T23);
  T21 = CALL3(CHKREF(YmacrosYcat),T24,T22,Ynil);
  T20 = CALL1(CHKREF(YmacrosYlst),T21);
  T19 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_45));
  T18 = BOXVAL(bodyF480);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(YmacrosYlst),T17);
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

FUNCODEDEF(fun_x_1092_36) {
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
  P x_1091F490;
  P x_1091F489;
  P x_1091F488;
  P bodyF487;
  P testF486;
  P x_1091F485;
  P x_1092F484;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T23 = FUNSHELL(0,fun_x_1092_36,1);
  x_1092F484 = T23;
  FUNINIT(x_1092F484, 1,return_);
  x_1091F485 = FREEREF(0);
  testF486 = YPfalse;
  testF486 = BOXFAB(testF486);
  bodyF487 = YPfalse;
  bodyF487 = BOXFAB(bodyF487);
  T14 = CALL2(CHKREF(YisaQ),x_1091F485,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1091F485,CHKREF(lit_53),x_1092F484);
    x_1091F488 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1091F488,x_1092F484);
    BOXVAL(testF486) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1091F488);
    x_1091F489 = T12;
    BOXVAL(bodyF487) = x_1091F489;
    x_1091F490 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1091F490,x_1092F484);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1092F484,CHKREF(lit_52),x_1091F485);
  }
  T22 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_51));
  T21 = BOXVAL(testF486);
  T20 = CALL1(CHKREF(YmacrosYlst),T21);
  T19 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_50));
  T18 = BOXVAL(bodyF487);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(YmacrosYlst),T17);
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

FUNCODEDEF(fun_x_1104_39) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_60));
  T17 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_59));
  T16 = BOXVAL(FREEREF(1));
  T15 = CALL1(CHKREF(YmacrosYlst),T16);
  T14 = CALL3(CHKREF(YmacrosYcat),T17,T15,Ynil);
  T13 = CALL1(CHKREF(YmacrosYlst),T14);
  T12 = CALL2(CHKREF(YmacrosYcat),T13,Ynil);
  T11 = CALL1(CHKREF(YmacrosYlst),T12);
  T10 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_58));
  T9 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_57));
  T8 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_56));
  T7 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_55));
  T6 = BOXVAL(FREEREF(0));
  T5 = CALL3(CHKREF(YmacrosYcat),T7,T6,Ynil);
  T4 = CALL1(CHKREF(YmacrosYlst),T5);
  T3 = CALLN(CHKREF(YmacrosYcat),5,T10,T9,T8,T4,Ynil);
  T2 = CALL1(CHKREF(YmacrosYlst),T3);
  T1 = CALLN(CHKREF(YmacrosYcat),4,T18,T11,T2,Ynil);
  T0 = CALL1(FREEREF(2),T1);
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(return_, 0);
  P x_1103F492;
  P x_1104F491;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = FUNSHELL(0,fun_x_1104_39,3);
  x_1104F491 = T7;
  FUNINIT(x_1104F491, 3,FREEREF(1),FREEREF(0),return_);
  T6 = BOXVAL(FREEREF(1));
  x_1103F492 = T6;
  T4 = CALL2(CHKREF(YisaQ),x_1103F492,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1103F492,x_1104F491);
  } else {
    T2 = CALL2(x_1104F491,CHKREF(lit_54),x_1103F492);
  }
  T5 = BOXVAL(FREEREF(0));
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1102_41) {
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
  P x_1101F498;
  P x_1101F497;
  P restF496;
  P xF495;
  P x_1101F494;
  P x_1102F493;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1102_41,1);
  x_1102F493 = T16;
  FUNINIT(x_1102F493, 1,return_);
  T15 = BOXVAL(FREEREF(0));
  x_1101F494 = T15;
  xF495 = YPfalse;
  xF495 = BOXFAB(xF495);
  restF496 = YPfalse;
  restF496 = BOXFAB(restF496);
  T12 = CALL2(CHKREF(YisaQ),x_1101F494,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1101F494,x_1102F493);
    BOXVAL(xF495) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1101F494);
    x_1101F497 = T11;
    BOXVAL(restF496) = x_1101F497;
    x_1101F498 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1101F498,x_1102F493);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1102F493,CHKREF(lit_61),x_1101F494);
  }
  T14 = FUNFAB(fun_40,2,xF495,restF496);
  T13 = with_exit(T14);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1100_43) {
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
  P x_1099F503;
  P x_1099F502;
  P restF501;
  P x_1099F500;
  P x_1100F499;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1100_43,1);
  x_1100F499 = T12;
  FUNINIT(x_1100F499, 1,return_);
  x_1099F500 = FREEREF(0);
  restF501 = YPfalse;
  restF501 = BOXFAB(restF501);
  T9 = CALL2(CHKREF(YisaQ),x_1099F500,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1099F500,CHKREF(lit_63),x_1100F499);
    x_1099F502 = T8;
    BOXVAL(restF501) = x_1099F502;
    x_1099F503 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1099F503,x_1100F499);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1100F499,CHKREF(lit_62),x_1099F500);
  }
  T11 = FUNFAB(fun_42,1,restF501);
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

FUNCODEDEF(fun_x_1116_46) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_69));
  T17 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_68));
  T16 = BOXVAL(FREEREF(1));
  T15 = CALL1(CHKREF(YmacrosYlst),T16);
  T14 = CALL3(CHKREF(YmacrosYcat),T17,T15,Ynil);
  T13 = CALL1(CHKREF(YmacrosYlst),T14);
  T12 = CALL2(CHKREF(YmacrosYcat),T13,Ynil);
  T11 = CALL1(CHKREF(YmacrosYlst),T12);
  T10 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_67));
  T9 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_66));
  T8 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_65));
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL3(CHKREF(YmacrosYcat),T8,T7,Ynil);
  T5 = CALL1(CHKREF(YmacrosYlst),T6);
  T4 = CALL1(CHKREF(YmacrosYlst),YPfalse);
  T3 = CALLN(CHKREF(YmacrosYcat),5,T10,T9,T5,T4,Ynil);
  T2 = CALL1(CHKREF(YmacrosYlst),T3);
  T1 = CALLN(CHKREF(YmacrosYcat),4,T18,T11,T2,Ynil);
  T0 = CALL1(FREEREF(2),T1);
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  ARG(return_, 0);
  P x_1115F505;
  P x_1116F504;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = FUNSHELL(0,fun_x_1116_46,3);
  x_1116F504 = T7;
  FUNINIT(x_1116F504, 3,FREEREF(1),FREEREF(0),return_);
  T6 = BOXVAL(FREEREF(1));
  x_1115F505 = T6;
  T4 = CALL2(CHKREF(YisaQ),x_1115F505,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1115F505,x_1116F504);
  } else {
    T2 = CALL2(x_1116F504,CHKREF(lit_64),x_1115F505);
  }
  T5 = BOXVAL(FREEREF(0));
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1114_48) {
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
  P x_1113F511;
  P x_1113F510;
  P restF509;
  P xF508;
  P x_1113F507;
  P x_1114F506;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1114_48,1);
  x_1114F506 = T16;
  FUNINIT(x_1114F506, 1,return_);
  T15 = BOXVAL(FREEREF(0));
  x_1113F507 = T15;
  xF508 = YPfalse;
  xF508 = BOXFAB(xF508);
  restF509 = YPfalse;
  restF509 = BOXFAB(restF509);
  T12 = CALL2(CHKREF(YisaQ),x_1113F507,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1113F507,x_1114F506);
    BOXVAL(xF508) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1113F507);
    x_1113F510 = T11;
    BOXVAL(restF509) = x_1113F510;
    x_1113F511 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1113F511,x_1114F506);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1114F506,CHKREF(lit_70),x_1113F507);
  }
  T14 = FUNFAB(fun_47,2,xF508,restF509);
  T13 = with_exit(T14);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1112_50) {
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
  P x_1111F516;
  P x_1111F515;
  P restF514;
  P x_1111F513;
  P x_1112F512;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1112_50,1);
  x_1112F512 = T12;
  FUNINIT(x_1112F512, 1,return_);
  x_1111F513 = FREEREF(0);
  restF514 = YPfalse;
  restF514 = BOXFAB(restF514);
  T9 = CALL2(CHKREF(YisaQ),x_1111F513,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1111F513,CHKREF(lit_72),x_1112F512);
    x_1111F515 = T8;
    BOXVAL(restF514) = x_1111F515;
    x_1111F516 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1111F516,x_1112F512);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1112F512,CHKREF(lit_71),x_1111F513);
  }
  T11 = FUNFAB(fun_49,1,restF514);
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

FUNCODEDEF(fun_x_1124_53) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(CHKREF(Yhead),T3);
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_77),T2);
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  ARG(return_, 0);
  P x_1123F522;
  P x_1123F521;
  P bodyF520;
  P condF519;
  P x_1123F518;
  P x_1124F517;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T28 = FUNSHELL(0,fun_x_1124_53,2);
  x_1124F517 = T28;
  FUNINIT(x_1124F517, 2,FREEREF(0),return_);
  T27 = BOXVAL(FREEREF(0));
  T26 = CALL1(CHKREF(Yhead),T27);
  x_1123F518 = T26;
  condF519 = YPfalse;
  condF519 = BOXFAB(condF519);
  bodyF520 = YPfalse;
  bodyF520 = BOXFAB(bodyF520);
  T12 = CALL2(CHKREF(YisaQ),x_1123F518,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1123F518,x_1124F517);
    BOXVAL(condF519) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1123F518);
    x_1123F521 = T11;
    BOXVAL(bodyF520) = x_1123F521;
    x_1123F522 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1123F522,x_1124F517);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1124F517,CHKREF(lit_76),x_1123F518);
  }
  T25 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_75));
  T24 = BOXVAL(condF519);
  T23 = CALL1(CHKREF(YmacrosYlst),T24);
  T22 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_74));
  T21 = BOXVAL(bodyF520);
  T20 = CALL3(CHKREF(YmacrosYcat),T22,T21,Ynil);
  T19 = CALL1(CHKREF(YmacrosYlst),T20);
  T18 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_73));
  T17 = BOXVAL(FREEREF(0));
  T16 = CALL1(CHKREF(Ytail),T17);
  T15 = CALL3(CHKREF(YmacrosYcat),T18,T16,Ynil);
  T14 = CALL1(CHKREF(YmacrosYlst),T15);
  T13 = CALLN(CHKREF(YmacrosYcat),5,T25,T23,T19,T14,Ynil);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1122_55) {
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
  P x_1121F527;
  P x_1121F526;
  P casesF525;
  P x_1121F524;
  P x_1122F523;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = FUNSHELL(0,fun_x_1122_55,1);
  x_1122F523 = T15;
  FUNINIT(x_1122F523, 1,return_);
  x_1121F524 = FREEREF(0);
  casesF525 = YPfalse;
  casesF525 = BOXFAB(casesF525);
  T9 = CALL2(CHKREF(YisaQ),x_1121F524,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1121F524,CHKREF(lit_79),x_1122F523);
    x_1121F526 = T8;
    BOXVAL(casesF525) = x_1121F526;
    x_1121F527 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1121F527,x_1122F523);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1122F523,CHKREF(lit_78),x_1121F524);
  }
  T14 = BOXVAL(casesF525);
  T13 = CALL1(CHKREF(YmacrosYemptyQ),T14);
  if (T13 != YPfalse) {
    T10 = YPfalse;
  } else {
    T12 = FUNFAB(fun_54,1,casesF525);
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
  T3 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_82));
  T2 = CALL1(CHKREF(YmacrosYlst),FREEREF(0));
  T1 = CALL1(CHKREF(YmacrosYlst),x_);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T3,T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_x_1136_59) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(CHKREF(Yhead),T3);
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_87),T2);
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  ARG(return_, 0);
  P x_1135F531;
  P valuesF530;
  P x_1135F529;
  P x_1136F528;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T37 = FUNSHELL(0,fun_x_1136_59,2);
  x_1136F528 = T37;
  FUNINIT(x_1136F528, 2,FREEREF(0),return_);
  T36 = BOXVAL(FREEREF(1));
  x_1135F529 = T36;
  valuesF530 = YPfalse;
  valuesF530 = BOXFAB(valuesF530);
  T7 = CALL2(CHKREF(YisaQ),x_1135F529,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    BOXVAL(valuesF530) = x_1135F529;
    x_1135F531 = Ynil;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1135F531,x_1136F528);
    T5 = T6;
  } else {
    T4 = CALL2(x_1136F528,CHKREF(lit_86),x_1135F529);
  }
  T35 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_85));
  T34 = CALL1(CHKREF(YmacrosYlst),FREEREF(2));
  T33 = BOXVAL(FREEREF(4));
  T32 = CALL1(CHKREF(YmacrosYlst),T33);
  T31 = CALL3(CHKREF(YmacrosYcat),T34,T32,Ynil);
  T30 = CALL1(CHKREF(YmacrosYlst),T31);
  T29 = CALL2(CHKREF(YmacrosYcat),T30,Ynil);
  T28 = CALL1(CHKREF(YmacrosYlst),T29);
  T27 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_84));
  T26 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_83));
  T25 = FUNFAB(fun_58,1,FREEREF(2));
  T24 = BOXVAL(valuesF530);
  T23 = CALL2(CHKREF(YmacrosYmap),T25,T24);
  T22 = CALL3(CHKREF(YmacrosYcat),T26,T23,Ynil);
  T21 = CALL1(CHKREF(YmacrosYlst),T22);
  T20 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_81));
  T19 = BOXVAL(FREEREF(3));
  T18 = CALL3(CHKREF(YmacrosYcat),T20,T19,Ynil);
  T17 = CALL1(CHKREF(YmacrosYlst),T18);
  T16 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_80));
  T15 = CALL1(CHKREF(YmacrosYlst),FREEREF(2));
  T14 = BOXVAL(FREEREF(0));
  T13 = CALL1(CHKREF(Ytail),T14);
  T12 = CALLN(CHKREF(YmacrosYcat),4,T16,T15,T13,Ynil);
  T11 = CALL1(CHKREF(YmacrosYlst),T12);
  T10 = CALLN(CHKREF(YmacrosYcat),5,T27,T21,T17,T11,Ynil);
  T9 = CALL1(CHKREF(YmacrosYlst),T10);
  T8 = CALLN(CHKREF(YmacrosYcat),4,T35,T28,T9,Ynil);
  T2 = T8;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1134_61) {
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
  P x_1133F538;
  P x_1133F537;
  P bvF536;
  P bodyF535;
  P condF534;
  P x_1133F533;
  P x_1134F532;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T25 = FUNSHELL(0,fun_x_1134_61,1);
  x_1134F532 = T25;
  FUNINIT(x_1134F532, 1,return_);
  T24 = BOXVAL(FREEREF(0));
  T23 = CALL1(CHKREF(Yhead),T24);
  x_1133F533 = T23;
  condF534 = YPfalse;
  condF534 = BOXFAB(condF534);
  bodyF535 = YPfalse;
  bodyF535 = BOXFAB(bodyF535);
  T12 = CALL2(CHKREF(YisaQ),x_1133F533,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1133F533,x_1134F532);
    BOXVAL(condF534) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1133F533);
    x_1133F537 = T11;
    BOXVAL(bodyF535) = x_1133F537;
    x_1133F538 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1133F538,x_1134F532);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1134F532,CHKREF(lit_89),x_1133F533);
  }
  T22 = BOXVAL(condF534);
  T21 = CALL2(CHKREF(YmacrosYEE),T22,YPtrue);
  if (T21 != YPfalse) {
    T20 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_88));
    T19 = BOXVAL(bodyF535);
    T18 = CALL3(CHKREF(YmacrosYcat),T20,T19,Ynil);
    T13 = T18;
  } else {
    T17 = CALL0(CHKREF(YmacrosYgensym));
    bvF536 = T17;
    T16 = FUNFAB(fun_60,5,FREEREF(0),condF534,bvF536,bodyF535,FREEREF(1));
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

FUNCODEDEF(fun_x_1132_63) {
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
  P x_1131F545;
  P x_1131F544;
  P x_1131F543;
  P casesF542;
  P valF541;
  P x_1131F540;
  P x_1132F539;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T20 = FUNSHELL(0,fun_x_1132_63,1);
  x_1132F539 = T20;
  FUNINIT(x_1132F539, 1,return_);
  x_1131F540 = FREEREF(0);
  valF541 = YPfalse;
  valF541 = BOXFAB(valF541);
  casesF542 = YPfalse;
  casesF542 = BOXFAB(casesF542);
  T14 = CALL2(CHKREF(YisaQ),x_1131F540,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1131F540,CHKREF(lit_91),x_1132F539);
    x_1131F543 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1131F543,x_1132F539);
    BOXVAL(valF541) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1131F543);
    x_1131F544 = T12;
    BOXVAL(casesF542) = x_1131F544;
    x_1131F545 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1131F545,x_1132F539);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1132F539,CHKREF(lit_90),x_1131F540);
  }
  T19 = BOXVAL(casesF542);
  T18 = CALL1(CHKREF(YmacrosYemptyQ),T19);
  if (T18 != YPfalse) {
    T15 = YPfalse;
  } else {
    T17 = FUNFAB(fun_62,2,casesF542,valF541);
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

FUNCODEDEF(fun_x_1140_66) {
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
  P x_1139F554;
  P x_1139F553;
  P x_1139F552;
  P x_1139F551;
  P argsF550;
  P messageF549;
  P condF548;
  P x_1139F547;
  P x_1140F546;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T33 = FUNSHELL(0,fun_x_1140_66,1);
  x_1140F546 = T33;
  FUNINIT(x_1140F546, 1,return_);
  x_1139F547 = FREEREF(0);
  condF548 = YPfalse;
  condF548 = BOXFAB(condF548);
  messageF549 = YPfalse;
  messageF549 = BOXFAB(messageF549);
  argsF550 = YPfalse;
  argsF550 = BOXFAB(argsF550);
  T19 = CALL2(CHKREF(YisaQ),x_1139F547,CHKREF(YLlstG));
  if (T19 != YPfalse) {
    T18 = CALL3(CHKREF(YmacrosYmatch_atom),x_1139F547,CHKREF(lit_96),x_1140F546);
    x_1139F551 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1139F551,x_1140F546);
    BOXVAL(condF548) = T16;
    T17 = CALL1(CHKREF(Ytail),x_1139F551);
    x_1139F552 = T17;
    T14 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1139F552,x_1140F546);
    BOXVAL(messageF549) = T14;
    T15 = CALL1(CHKREF(Ytail),x_1139F552);
    x_1139F553 = T15;
    BOXVAL(argsF550) = x_1139F553;
    x_1139F554 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1139F554,x_1140F546);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1140F546,CHKREF(lit_95),x_1139F547);
  }
  T32 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_94));
  T31 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_93));
  T30 = BOXVAL(condF548);
  T29 = CALL1(CHKREF(YmacrosYlst),T30);
  T28 = CALL3(CHKREF(YmacrosYcat),T31,T29,Ynil);
  T27 = CALL1(CHKREF(YmacrosYlst),T28);
  T26 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_92));
  T25 = BOXVAL(messageF549);
  T24 = CALL1(CHKREF(YmacrosYlst),T25);
  T23 = BOXVAL(argsF550);
  T22 = CALLN(CHKREF(YmacrosYcat),4,T26,T24,T23,Ynil);
  T21 = CALL1(CHKREF(YmacrosYlst),T22);
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

FUNCODEDEF(fun_x_1152_69) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = BOXVAL(FREEREF(2));
  T7 = CALL1(CHKREF(YmacrosYlst),T8);
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_104));
  T5 = CALL1(CHKREF(YmacrosYlst),FREEREF(1));
  T4 = CALL1(CHKREF(YmacrosYlst),FREEREF(0));
  T3 = CALLN(CHKREF(YmacrosYcat),4,T6,T5,T4,Ynil);
  T2 = CALL1(CHKREF(YmacrosYlst),T3);
  T1 = CALL3(CHKREF(YmacrosYcat),T7,T2,Ynil);
  T0 = CALL1(FREEREF(3),T1);
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  ARG(return_, 0);
  P x_1151F561;
  P x_1151F560;
  P x_1151F559;
  P valF558;
  P keyF557;
  P x_1151F556;
  P x_1152F555;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T39 = FUNSHELL(0,fun_x_1152_69,4);
  x_1152F555 = T39;
  FUNINIT(x_1152F555, 4,FREEREF(2),FREEREF(1),FREEREF(0),return_);
  T38 = BOXVAL(FREEREF(0));
  x_1151F556 = T38;
  keyF557 = YPfalse;
  keyF557 = BOXFAB(keyF557);
  valF558 = YPfalse;
  valF558 = BOXFAB(valF558);
  T16 = CALL2(CHKREF(YisaQ),x_1151F556,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1151F556,CHKREF(lit_103),x_1152F555);
    x_1151F559 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1151F559,x_1152F555);
    BOXVAL(keyF557) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1151F559);
    x_1151F560 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1151F560,x_1152F555);
    BOXVAL(valF558) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1151F560);
    x_1151F561 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1151F561,x_1152F555);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1152F555,CHKREF(lit_102),x_1151F556);
  }
  T37 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_101));
  T36 = BOXVAL(keyF557);
  T35 = CALL1(CHKREF(YmacrosYlst),T36);
  T34 = BOXVAL(valF558);
  T33 = CALL1(CHKREF(YmacrosYlst),T34);
  T32 = CALLN(CHKREF(YmacrosYcat),4,T37,T35,T33,Ynil);
  T31 = CALL1(CHKREF(YmacrosYlst),T32);
  T30 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_100));
  T29 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_99));
  T28 = CALL1(CHKREF(YmacrosYlst),FREEREF(1));
  T27 = CALL1(CHKREF(YmacrosYlst),FREEREF(2));
  T26 = CALLN(CHKREF(YmacrosYcat),4,T29,T28,T27,Ynil);
  T25 = CALL1(CHKREF(YmacrosYlst),T26);
  T24 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_98));
  T23 = CALL1(CHKREF(YmacrosYlst),FREEREF(1));
  T22 = CALL1(CHKREF(YmacrosYlst),FREEREF(2));
  T21 = CALLN(CHKREF(YmacrosYcat),4,T24,T23,T22,Ynil);
  T20 = CALL1(CHKREF(YmacrosYlst),T21);
  T19 = CALLN(CHKREF(YmacrosYcat),4,T30,T25,T20,Ynil);
  T18 = CALL1(CHKREF(YmacrosYlst),T19);
  T17 = CALL3(CHKREF(YmacrosYcat),T31,T18,Ynil);
  T4 = T17;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1150_71) {
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
  P x_1149F569;
  P x_1149F568;
  P exp_tmpF567;
  P stateF566;
  P expF565;
  P varF564;
  P x_1149F563;
  P x_1150F562;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T46 = FUNSHELL(0,fun_x_1150_71,1);
  x_1150F562 = T46;
  FUNINIT(x_1150F562, 1,return_);
  x_1149F563 = FREEREF(0);
  varF564 = YPfalse;
  varF564 = BOXFAB(varF564);
  expF565 = YPfalse;
  expF565 = BOXFAB(expF565);
  T14 = CALL2(CHKREF(YisaQ),x_1149F563,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T12 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1149F563,x_1150F562);
    BOXVAL(varF564) = T12;
    T13 = CALL1(CHKREF(Ytail),x_1149F563);
    x_1149F568 = T13;
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1149F568,x_1150F562);
    BOXVAL(expF565) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1149F568);
    x_1149F569 = T11;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1149F569,x_1150F562);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1150F562,CHKREF(lit_107),x_1149F563);
  }
  T45 = CALL0(CHKREF(YmacrosYgensym));
  stateF566 = T45;
  T44 = CALL0(CHKREF(YmacrosYgensym));
  exp_tmpF567 = T44;
  T43 = CALL1(CHKREF(Ytail),FREEREF(6));
  T42 = CALL1(CHKREF(YmacrosYlst),exp_tmpF567);
  T41 = BOXVAL(expF565);
  T40 = CALL1(CHKREF(YmacrosYlst),T41);
  T39 = CALL3(CHKREF(YmacrosYcat),T42,T40,Ynil);
  T38 = CALL2(CHKREF(YmacrosYpair),T39,FREEREF(5));
  T37 = CALL1(CHKREF(YmacrosYlst),stateF566);
  T36 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_106));
  T35 = CALL1(CHKREF(YmacrosYlst),exp_tmpF567);
  T34 = CALL3(CHKREF(YmacrosYcat),T36,T35,Ynil);
  T33 = CALL1(CHKREF(YmacrosYlst),T34);
  T32 = CALL3(CHKREF(YmacrosYcat),T37,T33,Ynil);
  T31 = CALL2(CHKREF(YmacrosYpair),T32,FREEREF(4));
  T30 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_105));
  T29 = CALL1(CHKREF(YmacrosYlst),exp_tmpF567);
  T28 = CALL1(CHKREF(YmacrosYlst),stateF566);
  T27 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T28,Ynil);
  T26 = CALL2(CHKREF(YmacrosYpair),T27,FREEREF(3));
  T25 = FUNFAB(fun_70,3,varF564,exp_tmpF567,stateF566);
  T24 = with_exit(T25);
  T23 = CALL2(CHKREF(YmacrosYpair),T24,FREEREF(2));
  T22 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_97));
  T21 = CALL1(CHKREF(YmacrosYlst),exp_tmpF567);
  T20 = CALL1(CHKREF(YmacrosYlst),stateF566);
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
  P loopF571;
  P clauseF570;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T29 = CALL1(CHKREF(YmacrosYemptyQ),clauses_);
  if (T29 != YPfalse) {
    T28 = CALL0(CHKREF(YmacrosYgensym));
    loopF571 = T28;
    T27 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_112));
    T26 = CALL1(CHKREF(YmacrosYlst),exps_);
    T25 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_111));
    T24 = CALL1(CHKREF(YmacrosYlst),loopF571);
    T23 = CALL1(CHKREF(YmacrosYlst),inits_);
    T22 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_110));
    T21 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_109));
    T20 = CALL3(CHKREF(YmacrosYcat),T21,preds_,Ynil);
    T19 = CALL1(CHKREF(YmacrosYlst),T20);
    T18 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_108));
    T17 = CALL1(CHKREF(YmacrosYlst),nows_);
    T16 = BOXVAL(FREEREF(1));
    T15 = CALL1(CHKREF(YmacrosYlst),loopF571);
    T14 = CALL3(CHKREF(YmacrosYcat),T15,nexts_,Ynil);
    T13 = CALL1(CHKREF(YmacrosYlst),T14);
    T12 = CALLN(CHKREF(YmacrosYcat),5,T18,T17,T16,T13,Ynil);
    T11 = CALL1(CHKREF(YmacrosYlst),T12);
    T10 = CALLN(CHKREF(YmacrosYcat),4,T22,T19,T11,Ynil);
    T9 = CALL1(CHKREF(YmacrosYlst),T10);
    T8 = CALLN(CHKREF(YmacrosYcat),5,T25,T24,T23,T9,Ynil);
    T7 = CALL1(CHKREF(YmacrosYlst),T8);
    T6 = CALLN(CHKREF(YmacrosYcat),4,T27,T26,T7,Ynil);
    T5 = T6;
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),clauses_);
    clauseF570 = T4;
    T3 = FUNFAB(fun_72,8,clauseF570,nexts_,nows_,preds_,inits_,exps_,clauses_,FREEREF(0));
    T2 = with_exit(T3);
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_x_1148_74) {
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
  P x_1147F581;
  P x_1147F580;
  P x_1147F579;
  P x_1147F578;
  P x_1147F577;
  P grokF576;
  P bodyF575;
  P clausesF574;
  P x_1147F573;
  P x_1148F572;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T21 = FUNSHELL(0,fun_x_1148_74,1);
  x_1148F572 = T21;
  FUNINIT(x_1148F572, 1,return_);
  x_1147F573 = FREEREF(0);
  clausesF574 = YPfalse;
  clausesF574 = BOXFAB(clausesF574);
  bodyF575 = YPfalse;
  bodyF575 = BOXFAB(bodyF575);
  T16 = CALL2(CHKREF(YisaQ),x_1147F573,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1147F573,CHKREF(lit_114),x_1148F572);
    x_1147F577 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1147F577,x_1148F572);
    x_1147F578 = T13;
    BOXVAL(clausesF574) = x_1147F578;
    x_1147F579 = Ynil;
    T12 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1147F579,x_1148F572);
    T11 = T12;
    T14 = CALL1(CHKREF(Ytail),x_1147F577);
    x_1147F580 = T14;
    BOXVAL(bodyF575) = x_1147F580;
    x_1147F581 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1147F581,x_1148F572);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1148F572,CHKREF(lit_113),x_1147F573);
  }
  T20 = FUNSHELL(1,fun_grok_73,2);
  grokF576 = T20;
  FUNINIT(grokF576, 2,grokF576,bodyF575);
  T19 = BOXVAL(clausesF574);
  T18 = KCALLN(grokF576,6,T19,Ynil,Ynil,Ynil,Ynil,Ynil);
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

FUNCODEDEF(fun_x_1164_77) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_124),T2);
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  ARG(return_, 0);
  P x_1163F593;
  P x_1163F592;
  P x_1163F591;
  P x_1163F590;
  P x_1163F589;
  P old_valueF588;
  P nameF587;
  P restF586;
  P valueF585;
  P varF584;
  P x_1163F583;
  P x_1164F582;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T60 = FUNSHELL(0,fun_x_1164_77,2);
  x_1164F582 = T60;
  FUNINIT(x_1164F582, 2,FREEREF(0),return_);
  T59 = BOXVAL(FREEREF(0));
  x_1163F583 = T59;
  varF584 = YPfalse;
  varF584 = BOXFAB(varF584);
  valueF585 = YPfalse;
  valueF585 = BOXFAB(valueF585);
  restF586 = YPfalse;
  restF586 = BOXFAB(restF586);
  T21 = CALL2(CHKREF(YisaQ),x_1163F583,CHKREF(YLlstG));
  if (T21 != YPfalse) {
    T19 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1163F583,x_1164F582);
    x_1163F589 = T19;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1163F589,x_1164F582);
    BOXVAL(varF584) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1163F589);
    x_1163F590 = T18;
    T15 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1163F590,x_1164F582);
    BOXVAL(valueF585) = T15;
    T16 = CALL1(CHKREF(Ytail),x_1163F590);
    x_1163F591 = T16;
    T14 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1163F591,x_1164F582);
    T13 = T14;
    T12 = T13;
    T20 = CALL1(CHKREF(Ytail),x_1163F583);
    x_1163F592 = T20;
    BOXVAL(restF586) = x_1163F592;
    x_1163F593 = Ynil;
    T11 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1163F593,x_1164F582);
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1164F582,CHKREF(lit_123),x_1163F583);
  }
  T58 = BOXVAL(varF584);
  T57 = CALL1(CHKREF(YmacrosYvar_name),T58);
  nameF587 = T57;
  T56 = CALL0(CHKREF(YmacrosYgensym));
  old_valueF588 = T56;
  T55 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_122));
  T54 = CALL1(CHKREF(YmacrosYlst),old_valueF588);
  T53 = CALL1(CHKREF(YmacrosYlst),nameF587);
  T52 = CALL3(CHKREF(YmacrosYcat),T54,T53,Ynil);
  T51 = CALL1(CHKREF(YmacrosYlst),T52);
  T50 = CALL2(CHKREF(YmacrosYcat),T51,Ynil);
  T49 = CALL1(CHKREF(YmacrosYlst),T50);
  T48 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_121));
  T47 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_120));
  T46 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_119));
  T45 = CALL1(CHKREF(YmacrosYlst),nameF587);
  T44 = BOXVAL(valueF585);
  T43 = CALL1(CHKREF(YmacrosYlst),T44);
  T42 = CALLN(CHKREF(YmacrosYcat),4,T46,T45,T43,Ynil);
  T41 = CALL1(CHKREF(YmacrosYlst),T42);
  T40 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_118));
  T39 = BOXVAL(restF586);
  T38 = CALL2(CHKREF(YmacrosYcat),T39,Ynil);
  T37 = CALL1(CHKREF(YmacrosYlst),T38);
  T36 = BOXVAL(FREEREF(1));
  T35 = CALLN(CHKREF(YmacrosYcat),4,T40,T37,T36,Ynil);
  T34 = CALL1(CHKREF(YmacrosYlst),T35);
  T33 = CALLN(CHKREF(YmacrosYcat),4,T47,T41,T34,Ynil);
  T32 = CALL1(CHKREF(YmacrosYlst),T33);
  T31 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_117));
  T30 = CALL1(CHKREF(YmacrosYlst),nameF587);
  T29 = CALL1(CHKREF(YmacrosYlst),old_valueF588);
  T28 = CALLN(CHKREF(YmacrosYcat),4,T31,T30,T29,Ynil);
  T27 = CALL1(CHKREF(YmacrosYlst),T28);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T48,T32,T27,Ynil);
  T25 = CALL1(CHKREF(YmacrosYlst),T26);
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

FUNCODEDEF(fun_x_1162_79) {
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
  P x_1161F595;
  P x_1162F594;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = FUNSHELL(0,fun_x_1162_79,3);
  x_1162F594 = T9;
  FUNINIT(x_1162F594, 3,FREEREF(1),FREEREF(0),return_);
  T8 = BOXVAL(FREEREF(0));
  x_1161F595 = T8;
  T4 = CALL2(CHKREF(YisaQ),x_1161F595,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1161F595,x_1162F594);
  } else {
    T2 = CALL2(x_1162F594,CHKREF(lit_116),x_1161F595);
  }
  T7 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_115));
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL3(CHKREF(YmacrosYcat),T7,T6,Ynil);
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1160_81) {
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
  P x_1159F602;
  P x_1159F601;
  P x_1159F600;
  P bodyF599;
  P bindingsF598;
  P x_1159F597;
  P x_1160F596;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T17 = FUNSHELL(0,fun_x_1160_81,1);
  x_1160F596 = T17;
  FUNINIT(x_1160F596, 1,return_);
  x_1159F597 = FREEREF(0);
  bindingsF598 = YPfalse;
  bindingsF598 = BOXFAB(bindingsF598);
  bodyF599 = YPfalse;
  bodyF599 = BOXFAB(bodyF599);
  T14 = CALL2(CHKREF(YisaQ),x_1159F597,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1159F597,CHKREF(lit_126),x_1160F596);
    x_1159F600 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1159F600,x_1160F596);
    BOXVAL(bindingsF598) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1159F600);
    x_1159F601 = T12;
    BOXVAL(bodyF599) = x_1159F601;
    x_1159F602 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1159F602,x_1160F596);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1160F596,CHKREF(lit_125),x_1159F597);
  }
  T16 = FUNFAB(fun_80,2,bindingsF598,bodyF599);
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

FUNCODEDEF(fun_x_1168_84) {
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
  P x_1167F612;
  P x_1167F611;
  P x_1167F610;
  P vnamF609;
  P typF608;
  P namF607;
  P valueF606;
  P varF605;
  P x_1167F604;
  P x_1168F603;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T58 = FUNSHELL(0,fun_x_1168_84,1);
  x_1168F603 = T58;
  FUNINIT(x_1168F603, 1,return_);
  x_1167F604 = FREEREF(0);
  varF605 = YPfalse;
  varF605 = BOXFAB(varF605);
  valueF606 = YPfalse;
  valueF606 = BOXFAB(valueF606);
  T16 = CALL2(CHKREF(YisaQ),x_1167F604,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1167F604,CHKREF(lit_138),x_1168F603);
    x_1167F610 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1167F610,x_1168F603);
    BOXVAL(varF605) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1167F610);
    x_1167F611 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1167F611,x_1168F603);
    BOXVAL(valueF606) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1167F611);
    x_1167F612 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1167F612,x_1168F603);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1168F603,CHKREF(lit_137),x_1167F604);
  }
  T57 = BOXVAL(varF605);
  T56 = CALL1(CHKREF(YmacrosYvar_name),T57);
  namF607 = T56;
  T55 = BOXVAL(varF605);
  T54 = CALL1(CHKREF(YmacrosYvar_type),T55);
  typF608 = T54;
  T53 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_136),namF607,CHKREF(lit_135));
  vnamF609 = T53;
  T52 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_134));
  T51 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_133));
  T50 = CALL1(CHKREF(YmacrosYlst),vnamF609);
  T49 = BOXVAL(valueF606);
  T48 = CALL1(CHKREF(YmacrosYlst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),4,T51,T50,T48,Ynil);
  T46 = CALL1(CHKREF(YmacrosYlst),T47);
  T45 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_132));
  T44 = CALL1(CHKREF(YmacrosYlst),namF607);
  T43 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_131));
  T42 = CALL1(CHKREF(YmacrosYlst),typF608);
  T41 = CALL3(CHKREF(YmacrosYcat),T43,T42,Ynil);
  T40 = CALL1(CHKREF(YmacrosYlst),T41);
  T39 = CALL1(CHKREF(YmacrosYlst),vnamF609);
  T38 = CALLN(CHKREF(YmacrosYcat),5,T45,T44,T40,T39,Ynil);
  T37 = CALL1(CHKREF(YmacrosYlst),T38);
  T36 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_130));
  T35 = CALL1(CHKREF(YmacrosYmake_setter_name),namF607);
  T34 = CALL1(CHKREF(YmacrosYlst),T35);
  T33 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_129));
  T32 = CALL1(CHKREF(YmacrosYlst),typF608);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(YmacrosYlst),T31);
  T29 = CALL2(CHKREF(YmacrosYcat),T30,Ynil);
  T28 = CALL1(CHKREF(YmacrosYlst),T29);
  T27 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_128));
  T26 = CALL1(CHKREF(YmacrosYlst),vnamF609);
  T25 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_127));
  T24 = CALLN(CHKREF(YmacrosYcat),4,T27,T26,T25,Ynil);
  T23 = CALL1(CHKREF(YmacrosYlst),T24);
  T22 = CALLN(CHKREF(YmacrosYcat),5,T36,T34,T28,T23,Ynil);
  T21 = CALL1(CHKREF(YmacrosYlst),T22);
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

FUNCODEDEF(fun_x_1172_87) {
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
  P x_1171F617;
  P x_1171F616;
  P namesF615;
  P x_1171F614;
  P x_1172F613;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T26 = FUNSHELL(0,fun_x_1172_87,1);
  x_1172F613 = T26;
  FUNINIT(x_1172F613, 1,return_);
  x_1171F614 = FREEREF(0);
  namesF615 = YPfalse;
  namesF615 = BOXFAB(namesF615);
  T9 = CALL2(CHKREF(YisaQ),x_1171F614,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1171F614,CHKREF(lit_143),x_1172F613);
    x_1171F616 = T8;
    BOXVAL(namesF615) = x_1171F616;
    x_1171F617 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1171F617,x_1172F613);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1172F613,CHKREF(lit_142),x_1171F614);
  }
  T25 = BOXVAL(namesF615);
  T24 = CALL1(CHKREF(YmacrosYemptyQ),T25);
  if (T24 != YPfalse) {
    T10 = YPfalse;
  } else {
    T23 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_141));
    T22 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_140));
    T21 = BOXVAL(namesF615);
    T20 = CALL1(CHKREF(Yhead),T21);
    T19 = CALL1(CHKREF(YmacrosYlst),T20);
    T18 = CALL3(CHKREF(YmacrosYcat),T22,T19,Ynil);
    T17 = CALL1(CHKREF(YmacrosYlst),T18);
    T16 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_139));
    T15 = BOXVAL(namesF615);
    T14 = CALL1(CHKREF(Ytail),T15);
    T13 = CALL3(CHKREF(YmacrosYcat),T16,T14,Ynil);
    T12 = CALL1(CHKREF(YmacrosYlst),T13);
    T11 = CALLN(CHKREF(YmacrosYcat),4,T23,T17,T12,Ynil);
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
  lit_0 = YPPsym((P)"%next-methods");
  lit_1 = YPPsym((P)"%call-next-method");
  lit_2 = YPsb((P)"Match Pattern Failure");
  lit_3 = YPPsym((P)"next-method");
  T2 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1044_0 = YPmet(FUNCODEREF(fun_x_1044_0),YPPsym((P)"x-1044"),T2,ENVNUL);
  T1 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL);
  T3 = fun_2;
  YPmacro(YPPsym((P)"next-method"),T3);
  lit_4 = YPPsym((P)"%next-methods");
  lit_5 = YPPsym((P)"%apply-next-method");
  lit_6 = YPsb((P)"Match Pattern Failure");
  lit_7 = YPPsym((P)"apply-next-method");
  T6 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1048_3 = YPmet(FUNCODEREF(fun_x_1048_3),YPPsym((P)"x-1048"),T6,ENVNUL);
  T5 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL);
  T4 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL);
  T7 = fun_5;
  YPmacro(YPPsym((P)"apply-next-method"),T7);
  lit_8 = YPPsym((P)"collected");
  lit_9 = YPPsym((P)"quote");
  lit_10 = YPPsym((P)"let");
  lit_11 = YPPsym((P)"collector-");
  lit_12 = YPsb((P)"Match Pattern Failure");
  lit_13 = YPPsym((P)"collecting");
  T10 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1052_6 = YPmet(FUNCODEREF(fun_x_1052_6),YPPsym((P)"x-1052"),T10,ENVNUL);
  T9 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL);
  T8 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL);
  T11 = fun_8;
  YPmacro(YPPsym((P)"collecting"),T11);
  lit_14 = YPPsym((P)"pair");
  lit_15 = YPPsym((P)"set");
  lit_16 = YPPsym((P)"collector-");
  lit_17 = YPsb((P)"Match Pattern Failure");
  lit_18 = YPPsym((P)"collect");
  T14 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1056_9 = YPmet(FUNCODEREF(fun_x_1056_9),YPPsym((P)"x-1056"),T14,ENVNUL);
  T13 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL);
  T15 = fun_11;
  YPmacro(YPPsym((P)"collect"),T15);
  lit_19 = YPPsym((P)"rev!");
  lit_20 = YPsb((P)"Match Pattern Failure");
  lit_21 = YPPsym((P)"collected");
  T18 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1060_12 = YPmet(FUNCODEREF(fun_x_1060_12),YPPsym((P)"x-1060"),T18,ENVNUL);
  T17 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T17,ENVNUL);
  T16 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T16,ENVNUL);
  T19 = fun_14;
  YPmacro(YPPsym((P)"collected"),T19);
  T21 = YPsig(YPpair(YPPsym((P)"subforms"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_munch_15 = YPmet(FUNCODEREF(fun_munch_15),YPPsym((P)"munch"),T21,ENVNUL);
  T20 = YPsig(YPpair(YPPsym((P)"place"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLtupG));
  YmacrosYlift_place_subforms = YPmet(FUNCODEREF(YmacrosYlift_place_subforms),YPPsym((P)"lift-place-subforms"),T20,ENVNUL);
  T22 = YmacrosYlift_place_subforms;
  YmacrosYlift_place_subforms = T22;
  regsym(&YmacrosYlift_place_subforms,"macros","lift-place-subforms");
  lit_22 = YPPsym((P)"+");
  lit_23 = YPPsym((P)"set");
  lit_24 = YPPsym((P)"let");
  lit_25 = YPsb((P)"Match Pattern Failure");
  lit_26 = YPsb((P)"Match Pattern Failure");
  lit_27 = YPPsym((P)"inc");
  T27 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1068_17 = YPmet(FUNCODEREF(fun_x_1068_17),YPPsym((P)"x-1068"),T27,ENVNUL);
  T26 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T26,ENVNUL);
  T25 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1066_19 = YPmet(FUNCODEREF(fun_x_1066_19),YPPsym((P)"x-1066"),T25,ENVNUL);
  T24 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T24,ENVNUL);
  T23 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T23,ENVNUL);
  T28 = fun_21;
  YPmacro(YPPsym((P)"inc"),T28);
  lit_28 = YPPsym((P)"-");
  lit_29 = YPPsym((P)"set");
  lit_30 = YPPsym((P)"let");
  lit_31 = YPsb((P)"Match Pattern Failure");
  lit_32 = YPsb((P)"Match Pattern Failure");
  lit_33 = YPPsym((P)"dec");
  T33 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1076_22 = YPmet(FUNCODEREF(fun_x_1076_22),YPPsym((P)"x-1076"),T33,ENVNUL);
  T32 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T32,ENVNUL);
  T31 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1074_24 = YPmet(FUNCODEREF(fun_x_1074_24),YPPsym((P)"x-1074"),T31,ENVNUL);
  T30 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T30,ENVNUL);
  T29 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T29,ENVNUL);
  T34 = fun_26;
  YPmacro(YPPsym((P)"dec"),T34);
  lit_34 = YPPsym((P)"push");
  lit_35 = YPPsym((P)"set");
  lit_36 = YPPsym((P)"let");
  lit_37 = YPsb((P)"Match Pattern Failure");
  lit_38 = YPPsym((P)"pushf");
  T37 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1080_27 = YPmet(FUNCODEREF(fun_x_1080_27),YPPsym((P)"x-1080"),T37,ENVNUL);
  T36 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T36,ENVNUL);
  T35 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T35,ENVNUL);
  T38 = fun_29;
  YPmacro(YPPsym((P)"pushf"),T38);
  lit_39 = YPPsym((P)"set");
  lit_40 = YPPsym((P)"pop");
  lit_41 = YPPsym((P)"tup");
  lit_42 = YPPsym((P)"let");
  lit_43 = YPsb((P)"Match Pattern Failure");
  lit_44 = YPPsym((P)"popf");
  T41 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1084_30 = YPmet(FUNCODEREF(fun_x_1084_30),YPPsym((P)"x-1084"),T41,ENVNUL);
  T40 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL);
  T39 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL);
  T42 = fun_32;
  YPmacro(YPPsym((P)"popf"),T42);
  lit_45 = YPPsym((P)"seq");
  lit_46 = YPPsym((P)"not");
  lit_47 = YPPsym((P)"if");
  lit_48 = YPsb((P)"Match Pattern Failure");
  lit_49 = YPPsym((P)"unless");
  T45 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1088_33 = YPmet(FUNCODEREF(fun_x_1088_33),YPPsym((P)"x-1088"),T45,ENVNUL);
  T44 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL);
  T43 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL);
  T46 = fun_35;
  YPmacro(YPPsym((P)"unless"),T46);
  lit_50 = YPPsym((P)"seq");
  lit_51 = YPPsym((P)"if");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"when");
  T49 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1092_36 = YPmet(FUNCODEREF(fun_x_1092_36),YPPsym((P)"x-1092"),T49,ENVNUL);
  T48 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T47,ENVNUL);
  T50 = fun_38;
  YPmacro(YPPsym((P)"when"),T50);
  lit_54 = YPsb((P)"Match Pattern Failure");
  lit_55 = YPPsym((P)"or");
  lit_56 = YPPsym((P)"tmp");
  lit_57 = YPPsym((P)"tmp");
  lit_58 = YPPsym((P)"if");
  lit_59 = YPPsym((P)"tmp");
  lit_60 = YPPsym((P)"let");
  lit_61 = YPsb((P)"Match Pattern Failure");
  lit_62 = YPsb((P)"Match Pattern Failure");
  lit_63 = YPPsym((P)"or");
  T57 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1104_39 = YPmet(FUNCODEREF(fun_x_1104_39),YPPsym((P)"x-1104"),T57,ENVNUL);
  T56 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T56,ENVNUL);
  T55 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1102_41 = YPmet(FUNCODEREF(fun_x_1102_41),YPPsym((P)"x-1102"),T55,ENVNUL);
  T54 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T54,ENVNUL);
  T53 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1100_43 = YPmet(FUNCODEREF(fun_x_1100_43),YPPsym((P)"x-1100"),T53,ENVNUL);
  T52 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T52,ENVNUL);
  T51 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T51,ENVNUL);
  T58 = fun_45;
  YPmacro(YPPsym((P)"or"),T58);
  lit_64 = YPsb((P)"Match Pattern Failure");
  lit_65 = YPPsym((P)"and");
  lit_66 = YPPsym((P)"tmp");
  lit_67 = YPPsym((P)"if");
  lit_68 = YPPsym((P)"tmp");
  lit_69 = YPPsym((P)"let");
  lit_70 = YPsb((P)"Match Pattern Failure");
  lit_71 = YPsb((P)"Match Pattern Failure");
  lit_72 = YPPsym((P)"and");
  T65 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1116_46 = YPmet(FUNCODEREF(fun_x_1116_46),YPPsym((P)"x-1116"),T65,ENVNUL);
  T64 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T64,ENVNUL);
  T63 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1114_48 = YPmet(FUNCODEREF(fun_x_1114_48),YPPsym((P)"x-1114"),T63,ENVNUL);
  T62 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T62,ENVNUL);
  T61 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1112_50 = YPmet(FUNCODEREF(fun_x_1112_50),YPPsym((P)"x-1112"),T61,ENVNUL);
  T60 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T60,ENVNUL);
  T59 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T59,ENVNUL);
  T66 = fun_52;
  YPmacro(YPPsym((P)"and"),T66);
  lit_73 = YPPsym((P)"case");
  lit_74 = YPPsym((P)"seq");
  lit_75 = YPPsym((P)"if");
  lit_76 = YPsb((P)"Match Pattern Failure");
  lit_77 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_78 = YPsb((P)"Match Pattern Failure");
  lit_79 = YPPsym((P)"case");
  T71 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1124_53 = YPmet(FUNCODEREF(fun_x_1124_53),YPPsym((P)"x-1124"),T71,ENVNUL);
  T70 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T70,ENVNUL);
  T69 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1122_55 = YPmet(FUNCODEREF(fun_x_1122_55),YPPsym((P)"x-1122"),T69,ENVNUL);
  T68 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T67,ENVNUL);
  T72 = fun_57;
  YPmacro(YPPsym((P)"case"),T72);
  lit_80 = YPPsym((P)"select");
  lit_81 = YPPsym((P)"seq");
  lit_82 = YPPsym((P)"==");
  lit_83 = YPPsym((P)"or");
  lit_84 = YPPsym((P)"if");
  lit_85 = YPPsym((P)"let");
  lit_86 = YPsb((P)"Match Pattern Failure");
  lit_87 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_88 = YPPsym((P)"seq");
  lit_89 = YPsb((P)"Match Pattern Failure");
  lit_90 = YPsb((P)"Match Pattern Failure");
  lit_91 = YPPsym((P)"select");
  T80 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T80,ENVNUL);
  T79 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1136_59 = YPmet(FUNCODEREF(fun_x_1136_59),YPPsym((P)"x-1136"),T79,ENVNUL);
  T78 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T78,ENVNUL);
  T77 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1134_61 = YPmet(FUNCODEREF(fun_x_1134_61),YPPsym((P)"x-1134"),T77,ENVNUL);
  T76 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T76,ENVNUL);
  T75 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1132_63 = YPmet(FUNCODEREF(fun_x_1132_63),YPPsym((P)"x-1132"),T75,ENVNUL);
  T74 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T74,ENVNUL);
  T73 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T73,ENVNUL);
  T81 = fun_65;
  YPmacro(YPPsym((P)"select"),T81);
  lit_92 = YPPsym((P)"error");
  lit_93 = YPPsym((P)"not");
  lit_94 = YPPsym((P)"if");
  lit_95 = YPsb((P)"Match Pattern Failure");
  lit_96 = YPPsym((P)"assert");
  T84 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1140_66 = YPmet(FUNCODEREF(fun_x_1140_66),YPPsym((P)"x-1140"),T84,ENVNUL);
  T83 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T83,ENVNUL);
  T82 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T82,ENVNUL);
  T85 = fun_68;
  YPmacro(YPPsym((P)"assert"),T85);
  lit_97 = YPPsym((P)"nxt-state");
  lit_98 = YPPsym((P)"now-elt");
  lit_99 = YPPsym((P)"now-key");
  lit_100 = YPPsym((P)"tup");
  lit_101 = YPPsym((P)"tup");
  lit_102 = YPsb((P)"Match Pattern Failure");
  lit_103 = YPPsym((P)"tup");
  lit_104 = YPPsym((P)"now-elt");
  lit_105 = YPPsym((P)"fin-state?");
  lit_106 = YPPsym((P)"ini-state");
  lit_107 = YPsb((P)"Match Pattern Failure");
  lit_108 = YPPsym((P)"let");
  lit_109 = YPPsym((P)"or");
  lit_110 = YPPsym((P)"unless");
  lit_111 = YPPsym((P)"rep");
  lit_112 = YPPsym((P)"let");
  lit_113 = YPsb((P)"Match Pattern Failure");
  lit_114 = YPPsym((P)"for");
  T93 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1152_69 = YPmet(FUNCODEREF(fun_x_1152_69),YPPsym((P)"x-1152"),T93,ENVNUL);
  T92 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T92,ENVNUL);
  T91 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1150_71 = YPmet(FUNCODEREF(fun_x_1150_71),YPPsym((P)"x-1150"),T91,ENVNUL);
  T90 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T90,ENVNUL);
  T89 = YPsig(YPpair(YPPsym((P)"clauses"),YPpair(YPPsym((P)"exps"),YPpair(YPPsym((P)"inits"),YPpair(YPPsym((P)"preds"),YPpair(YPPsym((P)"nows"),YPpair(YPPsym((P)"nexts"),Ynil)))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))),YPfalse,YPint((P)6),CHKREF(YLanyG));
  fun_grok_73 = YPmet(FUNCODEREF(fun_grok_73),YPPsym((P)"grok"),T89,ENVNUL);
  T88 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1148_74 = YPmet(FUNCODEREF(fun_x_1148_74),YPPsym((P)"x-1148"),T88,ENVNUL);
  T87 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T86,ENVNUL);
  T94 = fun_76;
  YPmacro(YPPsym((P)"for"),T94);
  lit_115 = YPPsym((P)"seq");
  lit_116 = YPsb((P)"Match Pattern Failure");
  lit_117 = YPPsym((P)"set");
  lit_118 = YPPsym((P)"dlet");
  lit_119 = YPPsym((P)"set");
  lit_120 = YPPsym((P)"seq");
  lit_121 = YPPsym((P)"fin");
  lit_122 = YPPsym((P)"let");
  lit_123 = YPsb((P)"Match Pattern Failure");
  lit_124 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_125 = YPsb((P)"Match Pattern Failure");
  lit_126 = YPPsym((P)"dlet");
  T101 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1164_77 = YPmet(FUNCODEREF(fun_x_1164_77),YPPsym((P)"x-1164"),T101,ENVNUL);
  T100 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T100,ENVNUL);
  T99 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1162_79 = YPmet(FUNCODEREF(fun_x_1162_79),YPPsym((P)"x-1162"),T99,ENVNUL);
  T98 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T98,ENVNUL);
  T97 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1160_81 = YPmet(FUNCODEREF(fun_x_1160_81),YPPsym((P)"x-1160"),T97,ENVNUL);
  T96 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T96,ENVNUL);
  T95 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T95,ENVNUL);
  T102 = fun_83;
  YPmacro(YPPsym((P)"dlet"),T102);
  lit_127 = YPPsym((P)"z");
  lit_128 = YPPsym((P)"set");
  lit_129 = YPPsym((P)"z");
  lit_130 = YPPsym((P)"dm");
  lit_131 = YPPsym((P)"=>");
  lit_132 = YPPsym((P)"dm");
  lit_133 = YPPsym((P)"dv");
  lit_134 = YPPsym((P)"seq");
  lit_135 = YPsb((P)"*");
  lit_136 = YPsb((P)"*");
  lit_137 = YPsb((P)"Match Pattern Failure");
  lit_138 = YPPsym((P)"def-fun-var");
  T105 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1168_84 = YPmet(FUNCODEREF(fun_x_1168_84),YPPsym((P)"x-1168"),T105,ENVNUL);
  T104 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T104,ENVNUL);
  T103 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T103,ENVNUL);
  T106 = fun_86;
  YPmacro(YPPsym((P)"def-fun-var"),T106);
  lit_139 = YPPsym((P)"need-implementation");
  lit_140 = YPPsym((P)"export");
  lit_141 = YPPsym((P)"seq");
  lit_142 = YPsb((P)"Match Pattern Failure");
  lit_143 = YPPsym((P)"need-implementation");
  T109 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1172_87 = YPmet(FUNCODEREF(fun_x_1172_87),YPPsym((P)"x-1172"),T109,ENVNUL);
  T108 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T108,ENVNUL);
  T107 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T107,ENVNUL);
  T110 = fun_89;
  YPmacro(YPPsym((P)"need-implementation"),T110);
  T111 = YPfalse;
  return T111;
}

/* MODULES USED: */

extern void load_module_boot (void);

/* EXPRESSION: */

extern void load_module_macros (void);

void load_module_macros (void) {
  static int need_init = 1;
  if (!need_init) return;

  load_module_boot();

  (P)YmacrosY___main_0___();

  need_init = 0;
}

/* END OF GENERATED CODE. */
