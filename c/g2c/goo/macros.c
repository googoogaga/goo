/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

EXT(YLnumG,"boot","<num>");
EXT(YLslotG,"boot","<slot>");
EXT(Ynul,"boot","nul");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(YLchrG,"boot","<chr>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLoptsG,"boot","<opts>");
EXT(YPsnul,"boot","%snul");
EXT(YLunionG,"boot","<union>");
EXT(Yslot_getter,"boot","slot-getter");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(YLlogG,"boot","<log>");
DEF(YmacrosYtup,"macros","tup");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail,"boot","tail");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
DEF(YmacrosYEE,"macros","==");
EXT(YLanyG,"boot","<any>");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YLsingletonG,"boot","<singleton>");
DEF(YmacrosYvar_name,"macros","var-name");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YisaQ,"boot","isa?");
EXT(Ytype_object,"boot","type-object");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Yslot_init,"boot","slot-init");
EXT(Yobject_parents,"boot","object-parents");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ynot,"boot","not");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_value,"boot","sig-value");
EXT(Ysym_name,"boot","sym-name");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YPPmacro,"boot","%%macro");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
EXT(Yobject_slots,"boot","object-slots");
EXT(YLclassG,"boot","<class>");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ytype_error,"boot","type-error");
EXT(Yerror,"boot","error");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yfind_setter,"boot","find-setter");
EXT(YLtypeG,"boot","<type>");
EXT(Ysig_names,"boot","sig-names");
EXT(Yslot_owner,"boot","slot-owner");
DEF(YmacrosYpair,"macros","pair");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YPvnul,"boot","%vnul");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfapply,"boot","fapply");
EXT(Yadd_slot,"boot","add-slot");
EXT(Yhead,"boot","head");
DEF(YmacrosYemptyQ,"macros","empty?");
DEF(YmacrosYgensym,"macros","gensym");
EXT(YLsymG,"boot","<sym>");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yhead_setter,"boot","head-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YLstrG,"boot","<str>");
EXT(Yobject_class,"boot","object-class");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yslot_type,"boot","slot-type");
EXT(Yfab_gen,"boot","fab-gen");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YLvecG,"boot","<vec>");
EXT(Ysig_arity,"boot","sig-arity");
EXT(Yclass_slots,"boot","class-slots");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
DEF(YmacrosYmap,"macros","map");
EXT(Ylst,"boot","lst");
EXT(YLtupG,"boot","<tup>");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_value,"boot","fun-value");
EXT(YPsymbols,"boot","%symbols");
EXT(Ytype_elts,"boot","type-elts");
EXT(YLlstG,"boot","<lst>");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YPisa,"boot","%isa");
EXT(YLfunG,"boot","<fun>");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_name,"boot","class-name");
EXT(YLseqG,"boot","<seq>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YmacrosYcat,"macros","cat");
EXT(YLcolG,"boot","<col>");
EXT(Yapply,"boot","apply");
EXT(Yfun_arity,"boot","fun-arity");
EXT(Yslot_setter,"boot","slot-setter");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YsubtypeQ,"boot","subtype?");
DEF(YmacrosYmake_sym,"macros","make-sym");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YLsigG,"boot","<sig>");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yclass_parents,"boot","class-parents");
EXT(YPslot,"boot","%slot");
EXT(YLfloG,"boot","<flo>");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value,"boot","slot-value");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YLintG,"boot","<int>");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Yfun_naryQ,"boot","fun-nary?");
DEF(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_35);
DEFLIT(lit_14);
DEFLIT(lit_68);
DEFLIT(lit_80);
DEFLIT(lit_102);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_61);
DEFLIT(lit_40);
DEFLIT(lit_49);
DEFLIT(lit_43);
DEFLIT(lit_101);
DEFLIT(lit_37);
DEFLIT(lit_48);
DEFLIT(lit_56);
DEFLIT(lit_54);
DEFLIT(lit_20);
DEFLIT(lit_74);
DEFLIT(lit_62);
DEFLIT(lit_79);
DEFLIT(lit_42);
DEFLIT(lit_27);
DEFLIT(lit_6);
DEFLIT(lit_34);
DEFLIT(lit_38);
DEFLIT(lit_11);
DEFLIT(lit_13);
DEFLIT(lit_66);
DEFLIT(lit_17);
DEFLIT(lit_85);
DEFLIT(lit_30);
DEFLIT(lit_19);
DEFLIT(lit_78);
DEFLIT(lit_31);
DEFLIT(lit_36);
DEFLIT(lit_26);
DEFLIT(lit_99);
DEFLIT(lit_94);
DEFLIT(lit_55);
DEFLIT(lit_53);
DEFLIT(lit_73);
DEFLIT(lit_92);
DEFLIT(lit_47);
DEFLIT(lit_41);
DEFLIT(lit_96);
DEFLIT(lit_84);
DEFLIT(lit_5);
DEFLIT(lit_33);
DEFLIT(lit_89);
DEFLIT(lit_12);
DEFLIT(lit_65);
DEFLIT(lit_72);
DEFLIT(lit_9);
DEFLIT(lit_106);
DEFLIT(lit_29);
DEFLIT(lit_18);
DEFLIT(lit_77);
DEFLIT(lit_25);
DEFLIT(lit_98);
DEFLIT(lit_83);
DEFLIT(lit_2);
DEFLIT(lit_52);
DEFLIT(lit_93);
DEFLIT(lit_91);
DEFLIT(lit_46);
DEFLIT(lit_10);
DEFLIT(lit_32);
DEFLIT(lit_64);
DEFLIT(lit_71);
DEFLIT(lit_81);
DEFLIT(lit_105);
DEFLIT(lit_28);
DEFLIT(lit_23);
DEFLIT(lit_60);
DEFLIT(lit_58);
DEFLIT(lit_16);
DEFLIT(lit_100);
DEFLIT(lit_24);
DEFLIT(lit_97);
DEFLIT(lit_82);
DEFLIT(lit_0);
DEFLIT(lit_51);
DEFLIT(lit_44);
DEFLIT(lit_90);
DEFLIT(lit_63);
DEFLIT(lit_45);
DEFLIT(lit_39);
DEFLIT(lit_69);
DEFLIT(lit_76);
DEFLIT(lit_86);
DEFLIT(lit_88);
DEFLIT(lit_103);
DEFLIT(lit_87);
DEFLIT(lit_15);
DEFLIT(lit_70);
DEFLIT(lit_104);
DEFLIT(lit_67);
DEFLIT(lit_3);
DEFLIT(lit_22);
DEFLIT(lit_8);
DEFLIT(lit_59);
DEFLIT(lit_57);
DEFLIT(lit_21);
DEFLIT(lit_75);
DEFLIT(lit_7);
DEFLIT(lit_95);
DEFLIT(lit_50);

/* FUNCTIONS: */

LOCFOR(fun_x_1070_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1074_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1078_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1082_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_x_1086_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_munch_15);
FUNFOR(YmacrosYlift_place_subforms);
LOCFOR(fun_x_1094_17);
LOCFOR(fun_18);
LOCFOR(fun_x_1092_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_x_1102_22);
LOCFOR(fun_23);
LOCFOR(fun_x_1100_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1106_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1110_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_x_1114_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_x_1118_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_x_1130_39);
LOCFOR(fun_40);
LOCFOR(fun_x_1128_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1126_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1142_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1140_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1138_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_x_1150_53);
LOCFOR(fun_54);
LOCFOR(fun_x_1148_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1162_59);
LOCFOR(fun_60);
LOCFOR(fun_x_1160_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1158_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1166_66);
LOCFOR(fun_67);
LOCFOR(fun_68);
LOCFOR(fun_x_1178_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1176_71);
LOCFOR(fun_72);
LOCFOR(fun_grok_73);
LOCFOR(fun_x_1174_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_x_1190_77);
LOCFOR(fun_78);
LOCFOR(fun_x_1188_79);
LOCFOR(fun_80);
LOCFOR(fun_x_1186_81);
LOCFOR(fun_82);
LOCFOR(fun_83);
LOCFOR(fun_x_1194_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_x_1198_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
extern P YmacrosY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1070_0) {
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
  P x_1069F406;
  P x_1069F405;
  P argsF404;
  P x_1069F403;
  P x_1070F402;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1070_0,1);
  x_1070F402 = T16;
  FUNINIT(x_1070F402, 1,return_);
  x_1069F403 = FREEREF(0);
  argsF404 = YPfalse;
  argsF404 = BOXFAB(argsF404);
  T9 = CALL2(CHKREF(YisaQ),x_1069F403,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1069F403,CHKREF(lit_5),x_1070F402);
    x_1069F405 = T8;
    BOXVAL(argsF404) = x_1069F405;
    x_1069F406 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1069F406,x_1070F402);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1070F402,CHKREF(lit_4),x_1069F403);
  }
  T15 = CALL1(CHKREF(Ylst),CHKREF(lit_3));
  T14 = CALL1(CHKREF(Ylst),CHKREF(lit_2));
  T13 = CALL2(CHKREF(YmacrosYcat),T14,Ynil);
  T12 = CALL1(CHKREF(Ylst),T13);
  T11 = BOXVAL(argsF404);
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

FUNCODEDEF(fun_x_1074_3) {
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
  P x_1073F411;
  P x_1073F410;
  P argsF409;
  P x_1073F408;
  P x_1074F407;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = FUNSHELL(0,fun_x_1074_3,1);
  x_1074F407 = T19;
  FUNINIT(x_1074F407, 1,return_);
  x_1073F408 = FREEREF(0);
  argsF409 = YPfalse;
  argsF409 = BOXFAB(argsF409);
  T11 = CALL2(CHKREF(YisaQ),x_1073F408,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1073F408,CHKREF(lit_10),x_1074F407);
    x_1073F410 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1073F410,x_1074F407);
    BOXVAL(argsF409) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1073F410);
    x_1073F411 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1073F411,x_1074F407);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1074F407,CHKREF(lit_4),x_1073F408);
  }
  T18 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T17 = CALL1(CHKREF(Ylst),CHKREF(lit_2));
  T16 = CALL2(CHKREF(YmacrosYcat),T17,Ynil);
  T15 = CALL1(CHKREF(Ylst),T16);
  T14 = BOXVAL(argsF409);
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

FUNCODEDEF(fun_x_1078_6) {
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
  P x_1077F419;
  P x_1077F418;
  P x_1077F417;
  P x_1077F416;
  P nameF415;
  P bodyF414;
  P x_1077F413;
  P x_1078F412;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T31 = FUNSHELL(0,fun_x_1078_6,1);
  x_1078F412 = T31;
  FUNINIT(x_1078F412, 1,return_);
  x_1077F413 = FREEREF(0);
  bodyF414 = YPfalse;
  bodyF414 = BOXFAB(bodyF414);
  T13 = CALL2(CHKREF(YisaQ),x_1077F413,CHKREF(YLlstG));
  if (T13 != YPfalse) {
    T12 = CALL3(CHKREF(YmacrosYmatch_atom),x_1077F413,CHKREF(lit_16),x_1078F412);
    x_1077F416 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1077F416,x_1078F412);
    x_1077F417 = T10;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1077F417,x_1078F412);
    T11 = CALL1(CHKREF(Ytail),x_1077F416);
    x_1077F418 = T11;
    BOXVAL(bodyF414) = x_1077F418;
    x_1077F419 = Ynil;
    T8 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1077F419,x_1078F412);
    T7 = T8;
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1078F412,CHKREF(lit_4),x_1077F413);
  }
  nameF415 = CHKREF(lit_15);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T29 = CALL1(CHKREF(Ylst),nameF415);
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_13));
  T27 = CALL1(CHKREF(Ylst),Ynil);
  T26 = CALL3(CHKREF(YmacrosYcat),T28,T27,Ynil);
  T25 = CALL1(CHKREF(Ylst),T26);
  T24 = CALL3(CHKREF(YmacrosYcat),T29,T25,Ynil);
  T23 = CALL1(CHKREF(Ylst),T24);
  T22 = CALL2(CHKREF(YmacrosYcat),T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = BOXVAL(bodyF414);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_12));
  T18 = CALL1(CHKREF(Ylst),nameF415);
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

FUNCODEDEF(fun_x_1082_9) {
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
  P x_1081F425;
  P x_1081F424;
  P nameF423;
  P valueF422;
  P x_1081F421;
  P x_1082F420;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T22 = FUNSHELL(0,fun_x_1082_9,1);
  x_1082F420 = T22;
  FUNINIT(x_1082F420, 1,return_);
  x_1081F421 = FREEREF(0);
  valueF422 = YPfalse;
  valueF422 = BOXFAB(valueF422);
  T11 = CALL2(CHKREF(YisaQ),x_1081F421,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1081F421,CHKREF(lit_20),x_1082F420);
    x_1081F424 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1081F424,x_1082F420);
    BOXVAL(valueF422) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1081F424);
    x_1081F425 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1081F425,x_1082F420);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1082F420,CHKREF(lit_4),x_1081F421);
  }
  nameF423 = CHKREF(lit_15);
  T21 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T20 = CALL1(CHKREF(Ylst),nameF423);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_18));
  T18 = BOXVAL(valueF422);
  T17 = CALL1(CHKREF(Ylst),T18);
  T16 = CALL1(CHKREF(Ylst),nameF423);
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

FUNCODEDEF(fun_x_1086_12) {
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
  P x_1085F430;
  P x_1085F429;
  P nameF428;
  P x_1085F427;
  P x_1086F426;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1086_12,1);
  x_1086F426 = T16;
  FUNINIT(x_1086F426, 1,return_);
  x_1085F427 = FREEREF(0);
  nameF428 = YPfalse;
  nameF428 = BOXFAB(nameF428);
  T11 = CALL2(CHKREF(YisaQ),x_1085F427,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1085F427,CHKREF(lit_12),x_1086F426);
    x_1085F429 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1085F429,x_1086F426);
    BOXVAL(nameF428) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1085F429);
    x_1085F430 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1085F430,x_1086F426);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1086F426,CHKREF(lit_4),x_1085F427);
  }
  T15 = CALL1(CHKREF(Ylst),CHKREF(lit_22));
  T14 = BOXVAL(nameF428);
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
  P gF436;
  P tup4F435;
  P g_argsF434;
  P tup4F433;
  P g_declsF432;
  P tup4F431;
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
    tup4F431 = T19;
    T18 = CALL1(CHKREF(Yhead),tup4F431);
    g_declsF432 = T18;
    T17 = CALL1(CHKREF(Ytail),tup4F431);
    tup4F433 = T17;
    T16 = CALL1(CHKREF(Yhead),tup4F433);
    g_argsF434 = T16;
    T15 = CALL1(CHKREF(Ytail),tup4F433);
    tup4F435 = T15;
    T14 = CALL0(CHKREF(YmacrosYgensym));
    gF436 = T14;
    T13 = CALL1(CHKREF(Ylst),gF436);
    T12 = CALL1(CHKREF(Yhead),subforms_);
    T11 = CALL1(CHKREF(Ylst),T12);
    T10 = CALL3(CHKREF(YmacrosYcat),T13,T11,Ynil);
    T9 = CALL2(CHKREF(YmacrosYpair),T10,g_declsF432);
    T8 = CALL2(CHKREF(YmacrosYpair),gF436,g_argsF434);
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
  P tup5F442;
  P g_argsF441;
  P tup5F440;
  P g_declsF439;
  P tup5F438;
  P munchF437;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = FUNSHELL(1,fun_munch_15,1);
  munchF437 = T18;
  FUNINIT(munchF437, 1,munchF437);
  T17 = CALL2(CHKREF(YisaQ),place_,CHKREF(YLsymG));
  if (T17 != YPfalse) {
    T16 = CALL2(CHKREF(YmacrosYtup),Ynil,place_);
    T1 = T16;
  } else {
    T15 = CALL1(CHKREF(Ytail),place_);
    T14 = CALL1(munchF437,T15);
    tup5F438 = T14;
    T13 = CALL1(CHKREF(Yhead),tup5F438);
    g_declsF439 = T13;
    T12 = CALL1(CHKREF(Ytail),tup5F438);
    tup5F440 = T12;
    T11 = CALL1(CHKREF(Yhead),tup5F440);
    g_argsF441 = T11;
    T10 = CALL1(CHKREF(Ytail),tup5F440);
    tup5F442 = T10;
    T9 = CALL1(CHKREF(Yhead),place_);
    T8 = CALL2(CHKREF(YmacrosYpair),T9,g_argsF441);
    T7 = CALL2(CHKREF(YmacrosYtup),g_declsF439,T8);
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

FUNCODEDEF(fun_x_1094_17) {
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
  P x_1093F446;
  P amountF445;
  P x_1093F444;
  P x_1094F443;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1094_17,1);
  x_1094F443 = T12;
  FUNINIT(x_1094F443, 1,return_);
  T11 = BOXVAL(FREEREF(0));
  x_1093F444 = T11;
  amountF445 = YPfalse;
  amountF445 = BOXFAB(amountF445);
  T9 = CALL2(CHKREF(YisaQ),x_1093F444,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1093F444,x_1094F443);
    BOXVAL(amountF445) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1093F444);
    x_1093F446 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1093F446,x_1094F443);
    T5 = T6;
  } else {
    T4 = CALL2(x_1094F443,CHKREF(lit_4),x_1093F444);
  }
  T10 = BOXVAL(amountF445);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1092_19) {
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
  P x_1091F459;
  P x_1091F458;
  P x_1091F457;
  P amountF456;
  P tup7F455;
  P g_placeF454;
  P tup7F453;
  P g_declsF452;
  P tup7F451;
  P amountF450;
  P placeF449;
  P x_1091F448;
  P x_1092F447;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1092_19,1);
  x_1092F447 = T42;
  FUNINIT(x_1092F447, 1,return_);
  x_1091F448 = FREEREF(0);
  placeF449 = YPfalse;
  placeF449 = BOXFAB(placeF449);
  amountF450 = YPfalse;
  amountF450 = BOXFAB(amountF450);
  T14 = CALL2(CHKREF(YisaQ),x_1091F448,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1091F448,CHKREF(lit_30),x_1092F447);
    x_1091F457 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1091F457,x_1092F447);
    BOXVAL(placeF449) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1091F457);
    x_1091F458 = T12;
    BOXVAL(amountF450) = x_1091F458;
    x_1091F459 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1091F459,x_1092F447);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1092F447,CHKREF(lit_4),x_1091F448);
  }
  T41 = BOXVAL(placeF449);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup7F451 = T40;
  T39 = CALL1(CHKREF(Yhead),tup7F451);
  g_declsF452 = T39;
  T38 = CALL1(CHKREF(Ytail),tup7F451);
  tup7F453 = T38;
  T37 = CALL1(CHKREF(Yhead),tup7F453);
  g_placeF454 = T37;
  T36 = CALL1(CHKREF(Ytail),tup7F453);
  tup7F455 = T36;
  T35 = FUNFAB(fun_18,1,amountF450);
  T34 = with_exit(T35);
  amountF456 = T34;
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T32 = CALL2(CHKREF(YmacrosYcat),g_declsF452,Ynil);
  T31 = CALL1(CHKREF(Ylst),T32);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T29 = CALL1(CHKREF(Ylst),g_placeF454);
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_28));
  T27 = CALL1(CHKREF(Ylst),g_placeF454);
  T26 = CALL1(CHKREF(Ylst),amountF456);
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

FUNCODEDEF(fun_x_1102_22) {
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
  P x_1101F463;
  P amountF462;
  P x_1101F461;
  P x_1102F460;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1102_22,1);
  x_1102F460 = T12;
  FUNINIT(x_1102F460, 1,return_);
  T11 = BOXVAL(FREEREF(0));
  x_1101F461 = T11;
  amountF462 = YPfalse;
  amountF462 = BOXFAB(amountF462);
  T9 = CALL2(CHKREF(YisaQ),x_1101F461,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1101F461,x_1102F460);
    BOXVAL(amountF462) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1101F461);
    x_1101F463 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1101F463,x_1102F460);
    T5 = T6;
  } else {
    T4 = CALL2(x_1102F460,CHKREF(lit_4),x_1101F461);
  }
  T10 = BOXVAL(amountF462);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1100_24) {
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
  P x_1099F476;
  P x_1099F475;
  P x_1099F474;
  P amountF473;
  P tup9F472;
  P g_placeF471;
  P tup9F470;
  P g_declsF469;
  P tup9F468;
  P amountF467;
  P placeF466;
  P x_1099F465;
  P x_1100F464;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1100_24,1);
  x_1100F464 = T42;
  FUNINIT(x_1100F464, 1,return_);
  x_1099F465 = FREEREF(0);
  placeF466 = YPfalse;
  placeF466 = BOXFAB(placeF466);
  amountF467 = YPfalse;
  amountF467 = BOXFAB(amountF467);
  T14 = CALL2(CHKREF(YisaQ),x_1099F465,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1099F465,CHKREF(lit_34),x_1100F464);
    x_1099F474 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1099F474,x_1100F464);
    BOXVAL(placeF466) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1099F474);
    x_1099F475 = T12;
    BOXVAL(amountF467) = x_1099F475;
    x_1099F476 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1099F476,x_1100F464);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1100F464,CHKREF(lit_4),x_1099F465);
  }
  T41 = BOXVAL(placeF466);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup9F468 = T40;
  T39 = CALL1(CHKREF(Yhead),tup9F468);
  g_declsF469 = T39;
  T38 = CALL1(CHKREF(Ytail),tup9F468);
  tup9F470 = T38;
  T37 = CALL1(CHKREF(Yhead),tup9F470);
  g_placeF471 = T37;
  T36 = CALL1(CHKREF(Ytail),tup9F470);
  tup9F472 = T36;
  T35 = FUNFAB(fun_23,1,amountF467);
  T34 = with_exit(T35);
  amountF473 = T34;
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T32 = CALL2(CHKREF(YmacrosYcat),g_declsF469,Ynil);
  T31 = CALL1(CHKREF(Ylst),T32);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T29 = CALL1(CHKREF(Ylst),g_placeF471);
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_32));
  T27 = CALL1(CHKREF(Ylst),g_placeF471);
  T26 = CALL1(CHKREF(Ylst),amountF473);
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

FUNCODEDEF(fun_x_1106_27) {
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
  P x_1105F488;
  P x_1105F487;
  P x_1105F486;
  P tup11F485;
  P g_placeF484;
  P tup11F483;
  P g_declsF482;
  P tup11F481;
  P valueF480;
  P placeF479;
  P x_1105F478;
  P x_1106F477;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T42 = FUNSHELL(0,fun_x_1106_27,1);
  x_1106F477 = T42;
  FUNINIT(x_1106F477, 1,return_);
  x_1105F478 = FREEREF(0);
  placeF479 = YPfalse;
  placeF479 = BOXFAB(placeF479);
  valueF480 = YPfalse;
  valueF480 = BOXFAB(valueF480);
  T16 = CALL2(CHKREF(YisaQ),x_1105F478,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1105F478,CHKREF(lit_37),x_1106F477);
    x_1105F486 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1105F486,x_1106F477);
    BOXVAL(placeF479) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1105F486);
    x_1105F487 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1105F487,x_1106F477);
    BOXVAL(valueF480) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1105F487);
    x_1105F488 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1105F488,x_1106F477);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1106F477,CHKREF(lit_4),x_1105F478);
  }
  T41 = BOXVAL(placeF479);
  T40 = CALL1(CHKREF(YmacrosYlift_place_subforms),T41);
  tup11F481 = T40;
  T39 = CALL1(CHKREF(Yhead),tup11F481);
  g_declsF482 = T39;
  T38 = CALL1(CHKREF(Ytail),tup11F481);
  tup11F483 = T38;
  T37 = CALL1(CHKREF(Yhead),tup11F483);
  g_placeF484 = T37;
  T36 = CALL1(CHKREF(Ytail),tup11F483);
  tup11F485 = T36;
  T35 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T34 = CALL2(CHKREF(YmacrosYcat),g_declsF482,Ynil);
  T33 = CALL1(CHKREF(Ylst),T34);
  T32 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T31 = CALL1(CHKREF(Ylst),g_placeF484);
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_36));
  T29 = CALL1(CHKREF(Ylst),g_placeF484);
  T28 = BOXVAL(valueF480);
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

FUNCODEDEF(fun_x_1110_30) {
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
  P x_1109F500;
  P x_1109F499;
  P valF498;
  P new_colF497;
  P tup13F496;
  P g_placeF495;
  P tup13F494;
  P g_declsF493;
  P tup13F492;
  P placeF491;
  P x_1109F490;
  P x_1110F489;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T48 = FUNSHELL(0,fun_x_1110_30,1);
  x_1110F489 = T48;
  FUNINIT(x_1110F489, 1,return_);
  x_1109F490 = FREEREF(0);
  placeF491 = YPfalse;
  placeF491 = BOXFAB(placeF491);
  T11 = CALL2(CHKREF(YisaQ),x_1109F490,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1109F490,CHKREF(lit_41),x_1110F489);
    x_1109F499 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1109F499,x_1110F489);
    BOXVAL(placeF491) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1109F499);
    x_1109F500 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1109F500,x_1110F489);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1110F489,CHKREF(lit_4),x_1109F490);
  }
  T47 = BOXVAL(placeF491);
  T46 = CALL1(CHKREF(YmacrosYlift_place_subforms),T47);
  tup13F492 = T46;
  T45 = CALL1(CHKREF(Yhead),tup13F492);
  g_declsF493 = T45;
  T44 = CALL1(CHKREF(Ytail),tup13F492);
  tup13F494 = T44;
  T43 = CALL1(CHKREF(Yhead),tup13F494);
  g_placeF495 = T43;
  T42 = CALL1(CHKREF(Ytail),tup13F494);
  tup13F496 = T42;
  T41 = CALL0(CHKREF(YmacrosYgensym));
  new_colF497 = T41;
  T40 = CALL0(CHKREF(YmacrosYgensym));
  valF498 = T40;
  T39 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T38 = CALL1(CHKREF(Ylst),CHKREF(lit_40));
  T37 = CALL1(CHKREF(Ylst),new_colF497);
  T36 = CALL1(CHKREF(Ylst),valF498);
  T35 = CALLN(CHKREF(YmacrosYcat),4,T38,T37,T36,Ynil);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_39));
  T32 = CALL1(CHKREF(Ylst),g_placeF495);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALL3(CHKREF(YmacrosYcat),T34,T30,Ynil);
  T28 = CALL1(CHKREF(Ylst),T29);
  T27 = CALL3(CHKREF(YmacrosYcat),g_declsF493,T28,Ynil);
  T26 = CALL1(CHKREF(Ylst),T27);
  T25 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T24 = CALL1(CHKREF(Ylst),g_placeF495);
  T23 = CALL1(CHKREF(Ylst),new_colF497);
  T22 = CALLN(CHKREF(YmacrosYcat),4,T25,T24,T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = CALL1(CHKREF(Ylst),valF498);
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

FUNCODEDEF(fun_x_1114_33) {
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
  P x_1113F507;
  P x_1113F506;
  P x_1113F505;
  P bodyF504;
  P testF503;
  P x_1113F502;
  P x_1114F501;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T26 = FUNSHELL(0,fun_x_1114_33,1);
  x_1114F501 = T26;
  FUNINIT(x_1114F501, 1,return_);
  x_1113F502 = FREEREF(0);
  testF503 = YPfalse;
  testF503 = BOXFAB(testF503);
  bodyF504 = YPfalse;
  bodyF504 = BOXFAB(bodyF504);
  T14 = CALL2(CHKREF(YisaQ),x_1113F502,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1113F502,CHKREF(lit_46),x_1114F501);
    x_1113F505 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1113F505,x_1114F501);
    BOXVAL(testF503) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1113F505);
    x_1113F506 = T12;
    BOXVAL(bodyF504) = x_1113F506;
    x_1113F507 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1113F507,x_1114F501);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1114F501,CHKREF(lit_4),x_1113F502);
  }
  T25 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T24 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T23 = BOXVAL(testF503);
  T22 = CALL1(CHKREF(Ylst),T23);
  T21 = CALL3(CHKREF(YmacrosYcat),T24,T22,Ynil);
  T20 = CALL1(CHKREF(Ylst),T21);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T18 = BOXVAL(bodyF504);
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

FUNCODEDEF(fun_x_1118_36) {
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
  P x_1117F514;
  P x_1117F513;
  P x_1117F512;
  P bodyF511;
  P testF510;
  P x_1117F509;
  P x_1118F508;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T23 = FUNSHELL(0,fun_x_1118_36,1);
  x_1118F508 = T23;
  FUNINIT(x_1118F508, 1,return_);
  x_1117F509 = FREEREF(0);
  testF510 = YPfalse;
  testF510 = BOXFAB(testF510);
  bodyF511 = YPfalse;
  bodyF511 = BOXFAB(bodyF511);
  T14 = CALL2(CHKREF(YisaQ),x_1117F509,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1117F509,CHKREF(lit_48),x_1118F508);
    x_1117F512 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1117F512,x_1118F508);
    BOXVAL(testF510) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1117F512);
    x_1117F513 = T12;
    BOXVAL(bodyF511) = x_1117F513;
    x_1117F514 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1117F514,x_1118F508);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1118F508,CHKREF(lit_4),x_1117F509);
  }
  T22 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T21 = BOXVAL(testF510);
  T20 = CALL1(CHKREF(Ylst),T21);
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T18 = BOXVAL(bodyF511);
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

FUNCODEDEF(fun_x_1130_39) {
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
  P x_1129F516;
  P x_1130F515;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = FUNSHELL(0,fun_x_1130_39,3);
  x_1130F515 = T7;
  FUNINIT(x_1130F515, 3,FREEREF(1),FREEREF(0),return_);
  T6 = BOXVAL(FREEREF(1));
  x_1129F516 = T6;
  T4 = CALL2(CHKREF(YisaQ),x_1129F516,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1129F516,x_1130F515);
  } else {
    T2 = CALL2(x_1130F515,CHKREF(lit_4),x_1129F516);
  }
  T5 = BOXVAL(FREEREF(0));
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1128_41) {
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
  P x_1127F522;
  P x_1127F521;
  P restF520;
  P xF519;
  P x_1127F518;
  P x_1128F517;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1128_41,1);
  x_1128F517 = T16;
  FUNINIT(x_1128F517, 1,return_);
  T15 = BOXVAL(FREEREF(0));
  x_1127F518 = T15;
  xF519 = YPfalse;
  xF519 = BOXFAB(xF519);
  restF520 = YPfalse;
  restF520 = BOXFAB(restF520);
  T12 = CALL2(CHKREF(YisaQ),x_1127F518,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1127F518,x_1128F517);
    BOXVAL(xF519) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1127F518);
    x_1127F521 = T11;
    BOXVAL(restF520) = x_1127F521;
    x_1127F522 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1127F522,x_1128F517);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1128F517,CHKREF(lit_4),x_1127F518);
  }
  T14 = FUNFAB(fun_40,2,xF519,restF520);
  T13 = with_exit(T14);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1126_43) {
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
  P x_1125F527;
  P x_1125F526;
  P restF525;
  P x_1125F524;
  P x_1126F523;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1126_43,1);
  x_1126F523 = T12;
  FUNINIT(x_1126F523, 1,return_);
  x_1125F524 = FREEREF(0);
  restF525 = YPfalse;
  restF525 = BOXFAB(restF525);
  T9 = CALL2(CHKREF(YisaQ),x_1125F524,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1125F524,CHKREF(lit_51),x_1126F523);
    x_1125F526 = T8;
    BOXVAL(restF525) = x_1125F526;
    x_1125F527 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1125F527,x_1126F523);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1126F523,CHKREF(lit_4),x_1125F524);
  }
  T11 = FUNFAB(fun_42,1,restF525);
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

FUNCODEDEF(fun_x_1142_46) {
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
  P x_1141F529;
  P x_1142F528;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = FUNSHELL(0,fun_x_1142_46,3);
  x_1142F528 = T7;
  FUNINIT(x_1142F528, 3,FREEREF(1),FREEREF(0),return_);
  T6 = BOXVAL(FREEREF(1));
  x_1141F529 = T6;
  T4 = CALL2(CHKREF(YisaQ),x_1141F529,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1141F529,x_1142F528);
  } else {
    T2 = CALL2(x_1142F528,CHKREF(lit_4),x_1141F529);
  }
  T5 = BOXVAL(FREEREF(0));
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1140_48) {
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
  P x_1139F535;
  P x_1139F534;
  P restF533;
  P xF532;
  P x_1139F531;
  P x_1140F530;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = FUNSHELL(0,fun_x_1140_48,1);
  x_1140F530 = T16;
  FUNINIT(x_1140F530, 1,return_);
  T15 = BOXVAL(FREEREF(0));
  x_1139F531 = T15;
  xF532 = YPfalse;
  xF532 = BOXFAB(xF532);
  restF533 = YPfalse;
  restF533 = BOXFAB(restF533);
  T12 = CALL2(CHKREF(YisaQ),x_1139F531,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1139F531,x_1140F530);
    BOXVAL(xF532) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1139F531);
    x_1139F534 = T11;
    BOXVAL(restF533) = x_1139F534;
    x_1139F535 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1139F535,x_1140F530);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1140F530,CHKREF(lit_4),x_1139F531);
  }
  T14 = FUNFAB(fun_47,2,xF532,restF533);
  T13 = with_exit(T14);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1138_50) {
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
  P x_1137F540;
  P x_1137F539;
  P restF538;
  P x_1137F537;
  P x_1138F536;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1138_50,1);
  x_1138F536 = T12;
  FUNINIT(x_1138F536, 1,return_);
  x_1137F537 = FREEREF(0);
  restF538 = YPfalse;
  restF538 = BOXFAB(restF538);
  T9 = CALL2(CHKREF(YisaQ),x_1137F537,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1137F537,CHKREF(lit_56),x_1138F536);
    x_1137F539 = T8;
    BOXVAL(restF538) = x_1137F539;
    x_1137F540 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1137F540,x_1138F536);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1138F536,CHKREF(lit_4),x_1137F537);
  }
  T11 = FUNFAB(fun_49,1,restF538);
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

FUNCODEDEF(fun_x_1150_53) {
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
  P x_1149F546;
  P x_1149F545;
  P bodyF544;
  P condF543;
  P x_1149F542;
  P x_1150F541;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T28 = FUNSHELL(0,fun_x_1150_53,2);
  x_1150F541 = T28;
  FUNINIT(x_1150F541, 2,FREEREF(0),return_);
  T27 = BOXVAL(FREEREF(0));
  T26 = CALL1(CHKREF(Yhead),T27);
  x_1149F542 = T26;
  condF543 = YPfalse;
  condF543 = BOXFAB(condF543);
  bodyF544 = YPfalse;
  bodyF544 = BOXFAB(bodyF544);
  T12 = CALL2(CHKREF(YisaQ),x_1149F542,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1149F542,x_1150F541);
    BOXVAL(condF543) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1149F542);
    x_1149F545 = T11;
    BOXVAL(bodyF544) = x_1149F545;
    x_1149F546 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1149F546,x_1150F541);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1150F541,CHKREF(lit_4),x_1149F542);
  }
  T25 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T24 = BOXVAL(condF543);
  T23 = CALL1(CHKREF(Ylst),T24);
  T22 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T21 = BOXVAL(bodyF544);
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

FUNCODEDEF(fun_x_1148_55) {
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
  P x_1147F551;
  P x_1147F550;
  P casesF549;
  P x_1147F548;
  P x_1148F547;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = FUNSHELL(0,fun_x_1148_55,1);
  x_1148F547 = T15;
  FUNINIT(x_1148F547, 1,return_);
  x_1147F548 = FREEREF(0);
  casesF549 = YPfalse;
  casesF549 = BOXFAB(casesF549);
  T9 = CALL2(CHKREF(YisaQ),x_1147F548,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1147F548,CHKREF(lit_59),x_1148F547);
    x_1147F550 = T8;
    BOXVAL(casesF549) = x_1147F550;
    x_1147F551 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1147F551,x_1148F547);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1148F547,CHKREF(lit_4),x_1147F548);
  }
  T14 = BOXVAL(casesF549);
  T13 = CALL1(CHKREF(YmacrosYemptyQ),T14);
  if (T13 != YPfalse) {
    T10 = YPfalse;
  } else {
    T12 = FUNFAB(fun_54,1,casesF549);
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

FUNCODEDEF(fun_x_1162_59) {
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
  P x_1161F555;
  P valuesF554;
  P x_1161F553;
  P x_1162F552;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T37 = FUNSHELL(0,fun_x_1162_59,2);
  x_1162F552 = T37;
  FUNINIT(x_1162F552, 2,FREEREF(0),return_);
  T36 = BOXVAL(FREEREF(1));
  x_1161F553 = T36;
  valuesF554 = YPfalse;
  valuesF554 = BOXFAB(valuesF554);
  T7 = CALL2(CHKREF(YisaQ),x_1161F553,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    BOXVAL(valuesF554) = x_1161F553;
    x_1161F555 = Ynil;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1161F555,x_1162F552);
    T5 = T6;
  } else {
    T4 = CALL2(x_1162F552,CHKREF(lit_4),x_1161F553);
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
  T24 = BOXVAL(valuesF554);
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

FUNCODEDEF(fun_x_1160_61) {
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
  P x_1159F562;
  P x_1159F561;
  P bvF560;
  P bodyF559;
  P condF558;
  P x_1159F557;
  P x_1160F556;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T25 = FUNSHELL(0,fun_x_1160_61,1);
  x_1160F556 = T25;
  FUNINIT(x_1160F556, 1,return_);
  T24 = BOXVAL(FREEREF(0));
  T23 = CALL1(CHKREF(Yhead),T24);
  x_1159F557 = T23;
  condF558 = YPfalse;
  condF558 = BOXFAB(condF558);
  bodyF559 = YPfalse;
  bodyF559 = BOXFAB(bodyF559);
  T12 = CALL2(CHKREF(YisaQ),x_1159F557,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1159F557,x_1160F556);
    BOXVAL(condF558) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1159F557);
    x_1159F561 = T11;
    BOXVAL(bodyF559) = x_1159F561;
    x_1159F562 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1159F562,x_1160F556);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1160F556,CHKREF(lit_4),x_1159F557);
  }
  T22 = BOXVAL(condF558);
  T21 = CALL2(CHKREF(YmacrosYEE),T22,YPtrue);
  if (T21 != YPfalse) {
    T20 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
    T19 = BOXVAL(bodyF559);
    T18 = CALL3(CHKREF(YmacrosYcat),T20,T19,Ynil);
    T13 = T18;
  } else {
    T17 = CALL0(CHKREF(YmacrosYgensym));
    bvF560 = T17;
    T16 = FUNFAB(fun_60,5,FREEREF(0),condF558,bvF560,bodyF559,FREEREF(1));
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

FUNCODEDEF(fun_x_1158_63) {
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
  P x_1157F569;
  P x_1157F568;
  P x_1157F567;
  P casesF566;
  P valF565;
  P x_1157F564;
  P x_1158F563;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T20 = FUNSHELL(0,fun_x_1158_63,1);
  x_1158F563 = T20;
  FUNINIT(x_1158F563, 1,return_);
  x_1157F564 = FREEREF(0);
  valF565 = YPfalse;
  valF565 = BOXFAB(valF565);
  casesF566 = YPfalse;
  casesF566 = BOXFAB(casesF566);
  T14 = CALL2(CHKREF(YisaQ),x_1157F564,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1157F564,CHKREF(lit_63),x_1158F563);
    x_1157F567 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1157F567,x_1158F563);
    BOXVAL(valF565) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1157F567);
    x_1157F568 = T12;
    BOXVAL(casesF566) = x_1157F568;
    x_1157F569 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1157F569,x_1158F563);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1158F563,CHKREF(lit_4),x_1157F564);
  }
  T19 = BOXVAL(casesF566);
  T18 = CALL1(CHKREF(YmacrosYemptyQ),T19);
  if (T18 != YPfalse) {
    T15 = YPfalse;
  } else {
    T17 = FUNFAB(fun_62,2,casesF566,valF565);
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

FUNCODEDEF(fun_x_1166_66) {
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
  P x_1165F578;
  P x_1165F577;
  P x_1165F576;
  P x_1165F575;
  P argsF574;
  P messageF573;
  P condF572;
  P x_1165F571;
  P x_1166F570;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T33 = FUNSHELL(0,fun_x_1166_66,1);
  x_1166F570 = T33;
  FUNINIT(x_1166F570, 1,return_);
  x_1165F571 = FREEREF(0);
  condF572 = YPfalse;
  condF572 = BOXFAB(condF572);
  messageF573 = YPfalse;
  messageF573 = BOXFAB(messageF573);
  argsF574 = YPfalse;
  argsF574 = BOXFAB(argsF574);
  T19 = CALL2(CHKREF(YisaQ),x_1165F571,CHKREF(YLlstG));
  if (T19 != YPfalse) {
    T18 = CALL3(CHKREF(YmacrosYmatch_atom),x_1165F571,CHKREF(lit_71),x_1166F570);
    x_1165F575 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1165F575,x_1166F570);
    BOXVAL(condF572) = T16;
    T17 = CALL1(CHKREF(Ytail),x_1165F575);
    x_1165F576 = T17;
    T14 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1165F576,x_1166F570);
    BOXVAL(messageF573) = T14;
    T15 = CALL1(CHKREF(Ytail),x_1165F576);
    x_1165F577 = T15;
    BOXVAL(argsF574) = x_1165F577;
    x_1165F578 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1165F578,x_1166F570);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1166F570,CHKREF(lit_4),x_1165F571);
  }
  T32 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T31 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T30 = BOXVAL(condF572);
  T29 = CALL1(CHKREF(Ylst),T30);
  T28 = CALL3(CHKREF(YmacrosYcat),T31,T29,Ynil);
  T27 = CALL1(CHKREF(Ylst),T28);
  T26 = CALL1(CHKREF(Ylst),CHKREF(lit_70));
  T25 = BOXVAL(messageF573);
  T24 = CALL1(CHKREF(Ylst),T25);
  T23 = BOXVAL(argsF574);
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

FUNCODEDEF(fun_x_1178_69) {
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
  P x_1177F585;
  P x_1177F584;
  P x_1177F583;
  P valF582;
  P keyF581;
  P x_1177F580;
  P x_1178F579;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T39 = FUNSHELL(0,fun_x_1178_69,4);
  x_1178F579 = T39;
  FUNINIT(x_1178F579, 4,FREEREF(2),FREEREF(1),FREEREF(0),return_);
  T38 = BOXVAL(FREEREF(0));
  x_1177F580 = T38;
  keyF581 = YPfalse;
  keyF581 = BOXFAB(keyF581);
  valF582 = YPfalse;
  valF582 = BOXFAB(valF582);
  T16 = CALL2(CHKREF(YisaQ),x_1177F580,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1177F580,CHKREF(lit_40),x_1178F579);
    x_1177F583 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1177F583,x_1178F579);
    BOXVAL(keyF581) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1177F583);
    x_1177F584 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1177F584,x_1178F579);
    BOXVAL(valF582) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1177F584);
    x_1177F585 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1177F585,x_1178F579);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1178F579,CHKREF(lit_4),x_1177F580);
  }
  T37 = CALL1(CHKREF(Ylst),CHKREF(lit_40));
  T36 = BOXVAL(keyF581);
  T35 = CALL1(CHKREF(Ylst),T36);
  T34 = BOXVAL(valF582);
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

FUNCODEDEF(fun_x_1176_71) {
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
  P x_1175F593;
  P x_1175F592;
  P exp_tmpF591;
  P stateF590;
  P expF589;
  P varF588;
  P x_1175F587;
  P x_1176F586;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T46 = FUNSHELL(0,fun_x_1176_71,1);
  x_1176F586 = T46;
  FUNINIT(x_1176F586, 1,return_);
  x_1175F587 = FREEREF(0);
  varF588 = YPfalse;
  varF588 = BOXFAB(varF588);
  expF589 = YPfalse;
  expF589 = BOXFAB(expF589);
  T14 = CALL2(CHKREF(YisaQ),x_1175F587,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T12 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1175F587,x_1176F586);
    BOXVAL(varF588) = T12;
    T13 = CALL1(CHKREF(Ytail),x_1175F587);
    x_1175F592 = T13;
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1175F592,x_1176F586);
    BOXVAL(expF589) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1175F592);
    x_1175F593 = T11;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1175F593,x_1176F586);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1176F586,CHKREF(lit_4),x_1175F587);
  }
  T45 = CALL0(CHKREF(YmacrosYgensym));
  stateF590 = T45;
  T44 = CALL0(CHKREF(YmacrosYgensym));
  exp_tmpF591 = T44;
  T43 = CALL1(CHKREF(Ytail),FREEREF(6));
  T42 = CALL1(CHKREF(Ylst),exp_tmpF591);
  T41 = BOXVAL(expF589);
  T40 = CALL1(CHKREF(Ylst),T41);
  T39 = CALL3(CHKREF(YmacrosYcat),T42,T40,Ynil);
  T38 = CALL2(CHKREF(YmacrosYpair),T39,FREEREF(5));
  T37 = CALL1(CHKREF(Ylst),stateF590);
  T36 = CALL1(CHKREF(Ylst),CHKREF(lit_85));
  T35 = CALL1(CHKREF(Ylst),exp_tmpF591);
  T34 = CALL3(CHKREF(YmacrosYcat),T36,T35,Ynil);
  T33 = CALL1(CHKREF(Ylst),T34);
  T32 = CALL3(CHKREF(YmacrosYcat),T37,T33,Ynil);
  T31 = CALL2(CHKREF(YmacrosYpair),T32,FREEREF(4));
  T30 = CALL1(CHKREF(Ylst),CHKREF(lit_84));
  T29 = CALL1(CHKREF(Ylst),exp_tmpF591);
  T28 = CALL1(CHKREF(Ylst),stateF590);
  T27 = CALLN(CHKREF(YmacrosYcat),4,T30,T29,T28,Ynil);
  T26 = CALL2(CHKREF(YmacrosYpair),T27,FREEREF(3));
  T25 = FUNFAB(fun_70,3,varF588,exp_tmpF591,stateF590);
  T24 = with_exit(T25);
  T23 = CALL2(CHKREF(YmacrosYpair),T24,FREEREF(2));
  T22 = CALL1(CHKREF(Ylst),CHKREF(lit_80));
  T21 = CALL1(CHKREF(Ylst),exp_tmpF591);
  T20 = CALL1(CHKREF(Ylst),stateF590);
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
  P loopF595;
  P clauseF594;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T29 = CALL1(CHKREF(YmacrosYemptyQ),clauses_);
  if (T29 != YPfalse) {
    T28 = CALL0(CHKREF(YmacrosYgensym));
    loopF595 = T28;
    T27 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
    T26 = CALL1(CHKREF(Ylst),exps_);
    T25 = CALL1(CHKREF(Ylst),CHKREF(lit_87));
    T24 = CALL1(CHKREF(Ylst),loopF595);
    T23 = CALL1(CHKREF(Ylst),inits_);
    T22 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
    T21 = CALL1(CHKREF(Ylst),CHKREF(lit_51));
    T20 = CALL3(CHKREF(YmacrosYcat),T21,preds_,Ynil);
    T19 = CALL1(CHKREF(Ylst),T20);
    T18 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
    T17 = CALL1(CHKREF(Ylst),nows_);
    T16 = BOXVAL(FREEREF(1));
    T15 = CALL1(CHKREF(Ylst),loopF595);
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
    clauseF594 = T4;
    T3 = FUNFAB(fun_72,8,clauseF594,nexts_,nows_,preds_,inits_,exps_,clauses_,FREEREF(0));
    T2 = with_exit(T3);
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_x_1174_74) {
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
  P x_1173F605;
  P x_1173F604;
  P x_1173F603;
  P x_1173F602;
  P x_1173F601;
  P grokF600;
  P bodyF599;
  P clausesF598;
  P x_1173F597;
  P x_1174F596;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T21 = FUNSHELL(0,fun_x_1174_74,1);
  x_1174F596 = T21;
  FUNINIT(x_1174F596, 1,return_);
  x_1173F597 = FREEREF(0);
  clausesF598 = YPfalse;
  clausesF598 = BOXFAB(clausesF598);
  bodyF599 = YPfalse;
  bodyF599 = BOXFAB(bodyF599);
  T16 = CALL2(CHKREF(YisaQ),x_1173F597,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1173F597,CHKREF(lit_88),x_1174F596);
    x_1173F601 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1173F601,x_1174F596);
    x_1173F602 = T13;
    BOXVAL(clausesF598) = x_1173F602;
    x_1173F603 = Ynil;
    T12 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1173F603,x_1174F596);
    T11 = T12;
    T14 = CALL1(CHKREF(Ytail),x_1173F601);
    x_1173F604 = T14;
    BOXVAL(bodyF599) = x_1173F604;
    x_1173F605 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1173F605,x_1174F596);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1174F596,CHKREF(lit_4),x_1173F597);
  }
  T20 = FUNSHELL(1,fun_grok_73,2);
  grokF600 = T20;
  FUNINIT(grokF600, 2,grokF600,bodyF599);
  T19 = BOXVAL(clausesF598);
  T18 = KCALLN(grokF600,6,T19,Ynil,Ynil,Ynil,Ynil,Ynil);
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

FUNCODEDEF(fun_x_1190_77) {
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
  P x_1189F617;
  P x_1189F616;
  P x_1189F615;
  P x_1189F614;
  P x_1189F613;
  P old_valueF612;
  P nameF611;
  P restF610;
  P valueF609;
  P varF608;
  P x_1189F607;
  P x_1190F606;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T60 = FUNSHELL(0,fun_x_1190_77,2);
  x_1190F606 = T60;
  FUNINIT(x_1190F606, 2,FREEREF(0),return_);
  T59 = BOXVAL(FREEREF(0));
  x_1189F607 = T59;
  varF608 = YPfalse;
  varF608 = BOXFAB(varF608);
  valueF609 = YPfalse;
  valueF609 = BOXFAB(valueF609);
  restF610 = YPfalse;
  restF610 = BOXFAB(restF610);
  T21 = CALL2(CHKREF(YisaQ),x_1189F607,CHKREF(YLlstG));
  if (T21 != YPfalse) {
    T19 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1189F607,x_1190F606);
    x_1189F613 = T19;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1189F613,x_1190F606);
    BOXVAL(varF608) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1189F613);
    x_1189F614 = T18;
    T15 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1189F614,x_1190F606);
    BOXVAL(valueF609) = T15;
    T16 = CALL1(CHKREF(Ytail),x_1189F614);
    x_1189F615 = T16;
    T14 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1189F615,x_1190F606);
    T13 = T14;
    T12 = T13;
    T20 = CALL1(CHKREF(Ytail),x_1189F607);
    x_1189F616 = T20;
    BOXVAL(restF610) = x_1189F616;
    x_1189F617 = Ynil;
    T11 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1189F617,x_1190F606);
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1190F606,CHKREF(lit_4),x_1189F607);
  }
  T58 = BOXVAL(varF608);
  T57 = CALL1(CHKREF(YmacrosYvar_name),T58);
  nameF611 = T57;
  T56 = CALL0(CHKREF(YmacrosYgensym));
  old_valueF612 = T56;
  T55 = CALL1(CHKREF(Ylst),CHKREF(lit_14));
  T54 = CALL1(CHKREF(Ylst),old_valueF612);
  T53 = CALL1(CHKREF(Ylst),nameF611);
  T52 = CALL3(CHKREF(YmacrosYcat),T54,T53,Ynil);
  T51 = CALL1(CHKREF(Ylst),T52);
  T50 = CALL2(CHKREF(YmacrosYcat),T51,Ynil);
  T49 = CALL1(CHKREF(Ylst),T50);
  T48 = CALL1(CHKREF(Ylst),CHKREF(lit_92));
  T47 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T46 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T45 = CALL1(CHKREF(Ylst),nameF611);
  T44 = BOXVAL(valueF609);
  T43 = CALL1(CHKREF(Ylst),T44);
  T42 = CALLN(CHKREF(YmacrosYcat),4,T46,T45,T43,Ynil);
  T41 = CALL1(CHKREF(Ylst),T42);
  T40 = CALL1(CHKREF(Ylst),CHKREF(lit_91));
  T39 = BOXVAL(restF610);
  T38 = CALL2(CHKREF(YmacrosYcat),T39,Ynil);
  T37 = CALL1(CHKREF(Ylst),T38);
  T36 = BOXVAL(FREEREF(1));
  T35 = CALLN(CHKREF(YmacrosYcat),4,T40,T37,T36,Ynil);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALLN(CHKREF(YmacrosYcat),4,T47,T41,T34,Ynil);
  T32 = CALL1(CHKREF(Ylst),T33);
  T31 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T30 = CALL1(CHKREF(Ylst),nameF611);
  T29 = CALL1(CHKREF(Ylst),old_valueF612);
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

FUNCODEDEF(fun_x_1188_79) {
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
  P x_1187F619;
  P x_1188F618;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = FUNSHELL(0,fun_x_1188_79,3);
  x_1188F618 = T9;
  FUNINIT(x_1188F618, 3,FREEREF(1),FREEREF(0),return_);
  T8 = BOXVAL(FREEREF(0));
  x_1187F619 = T8;
  T4 = CALL2(CHKREF(YisaQ),x_1187F619,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1187F619,x_1188F618);
  } else {
    T2 = CALL2(x_1188F618,CHKREF(lit_4),x_1187F619);
  }
  T7 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL3(CHKREF(YmacrosYcat),T7,T6,Ynil);
  T1 = T5;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1186_81) {
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
  P x_1185F626;
  P x_1185F625;
  P x_1185F624;
  P bodyF623;
  P bindingsF622;
  P x_1185F621;
  P x_1186F620;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T17 = FUNSHELL(0,fun_x_1186_81,1);
  x_1186F620 = T17;
  FUNINIT(x_1186F620, 1,return_);
  x_1185F621 = FREEREF(0);
  bindingsF622 = YPfalse;
  bindingsF622 = BOXFAB(bindingsF622);
  bodyF623 = YPfalse;
  bodyF623 = BOXFAB(bodyF623);
  T14 = CALL2(CHKREF(YisaQ),x_1185F621,CHKREF(YLlstG));
  if (T14 != YPfalse) {
    T13 = CALL3(CHKREF(YmacrosYmatch_atom),x_1185F621,CHKREF(lit_91),x_1186F620);
    x_1185F624 = T13;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1185F624,x_1186F620);
    BOXVAL(bindingsF622) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1185F624);
    x_1185F625 = T12;
    BOXVAL(bodyF623) = x_1185F625;
    x_1185F626 = Ynil;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1185F626,x_1186F620);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1186F620,CHKREF(lit_4),x_1185F621);
  }
  T16 = FUNFAB(fun_80,2,bindingsF622,bodyF623);
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

FUNCODEDEF(fun_x_1194_84) {
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
  P x_1193F636;
  P x_1193F635;
  P x_1193F634;
  P vnamF633;
  P typF632;
  P namF631;
  P valueF630;
  P varF629;
  P x_1193F628;
  P x_1194F627;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T58 = FUNSHELL(0,fun_x_1194_84,1);
  x_1194F627 = T58;
  FUNINIT(x_1194F627, 1,return_);
  x_1193F628 = FREEREF(0);
  varF629 = YPfalse;
  varF629 = BOXFAB(varF629);
  valueF630 = YPfalse;
  valueF630 = BOXFAB(valueF630);
  T16 = CALL2(CHKREF(YisaQ),x_1193F628,CHKREF(YLlstG));
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YmacrosYmatch_atom),x_1193F628,CHKREF(lit_102),x_1194F627);
    x_1193F634 = T15;
    T13 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1193F634,x_1194F627);
    BOXVAL(varF629) = T13;
    T14 = CALL1(CHKREF(Ytail),x_1193F634);
    x_1193F635 = T14;
    T11 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1193F635,x_1194F627);
    BOXVAL(valueF630) = T11;
    T12 = CALL1(CHKREF(Ytail),x_1193F635);
    x_1193F636 = T12;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1193F636,x_1194F627);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1194F627,CHKREF(lit_4),x_1193F628);
  }
  T57 = BOXVAL(varF629);
  T56 = CALL1(CHKREF(YmacrosYvar_name),T57);
  namF631 = T56;
  T55 = BOXVAL(varF629);
  T54 = CALL1(CHKREF(YmacrosYvar_type),T55);
  typF632 = T54;
  T53 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_101),namF631,CHKREF(lit_100));
  vnamF633 = T53;
  T52 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T51 = CALL1(CHKREF(Ylst),CHKREF(lit_99));
  T50 = CALL1(CHKREF(Ylst),vnamF633);
  T49 = BOXVAL(valueF630);
  T48 = CALL1(CHKREF(Ylst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),4,T51,T50,T48,Ynil);
  T46 = CALL1(CHKREF(Ylst),T47);
  T45 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T44 = CALL1(CHKREF(Ylst),namF631);
  T43 = CALL1(CHKREF(Ylst),CHKREF(lit_98));
  T42 = CALL1(CHKREF(Ylst),typF632);
  T41 = CALL3(CHKREF(YmacrosYcat),T43,T42,Ynil);
  T40 = CALL1(CHKREF(Ylst),T41);
  T39 = CALL1(CHKREF(Ylst),vnamF633);
  T38 = CALLN(CHKREF(YmacrosYcat),5,T45,T44,T40,T39,Ynil);
  T37 = CALL1(CHKREF(Ylst),T38);
  T36 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T35 = CALL1(CHKREF(YmacrosYmake_setter_name),namF631);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_96));
  T32 = CALL1(CHKREF(Ylst),typF632);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALL2(CHKREF(YmacrosYcat),T30,Ynil);
  T28 = CALL1(CHKREF(Ylst),T29);
  T27 = CALL1(CHKREF(Ylst),CHKREF(lit_19));
  T26 = CALL1(CHKREF(Ylst),vnamF633);
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

FUNCODEDEF(fun_x_1198_87) {
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
  P x_1197F641;
  P x_1197F640;
  P namesF639;
  P x_1197F638;
  P x_1198F637;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T33 = FUNSHELL(0,fun_x_1198_87,1);
  x_1198F637 = T33;
  FUNINIT(x_1198F637, 1,return_);
  x_1197F638 = FREEREF(0);
  namesF639 = YPfalse;
  namesF639 = BOXFAB(namesF639);
  T9 = CALL2(CHKREF(YisaQ),x_1197F638,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T8 = CALL3(CHKREF(YmacrosYmatch_atom),x_1197F638,CHKREF(lit_104),x_1198F637);
    x_1197F640 = T8;
    BOXVAL(namesF639) = x_1197F640;
    x_1197F641 = Ynil;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1197F641,x_1198F637);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1198F637,CHKREF(lit_4),x_1197F638);
  }
  T32 = BOXVAL(namesF639);
  T31 = CALL1(CHKREF(YmacrosYemptyQ),T32);
  if (T31 != YPfalse) {
    T10 = YPfalse;
  } else {
    T30 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
    T29 = CALL1(CHKREF(Ylst),CHKREF(lit_48));
    T28 = CALL1(CHKREF(Ylst),YPfalse);
    T27 = BOXVAL(namesF639);
    T26 = CALL1(CHKREF(Yhead),T27);
    T25 = CALL1(CHKREF(Ylst),T26);
    T24 = CALLN(CHKREF(YmacrosYcat),4,T29,T28,T25,Ynil);
    T23 = CALL1(CHKREF(Ylst),T24);
    T22 = CALL1(CHKREF(Ylst),CHKREF(lit_105));
    T21 = BOXVAL(namesF639);
    T20 = CALL1(CHKREF(Yhead),T21);
    T19 = CALL1(CHKREF(Ylst),T20);
    T18 = CALL3(CHKREF(YmacrosYcat),T22,T19,Ynil);
    T17 = CALL1(CHKREF(Ylst),T18);
    T16 = CALL1(CHKREF(Ylst),CHKREF(lit_104));
    T15 = BOXVAL(namesF639);
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
  lit_6 = YPPsym((P)"x-1070");
  lit_7 = YPPsym((P)"args");
  lit_8 = YPPsym((P)"msg");
  T2 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1070_0 = YPmet(FUNCODEREF(fun_x_1070_0),CHKREF(lit_6),T2,ENVNUL);
  T1 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL);
  T3 = fun_2;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"next-method"),T3);
  lit_9 = YPPsym((P)"%apply-next-method");
  lit_10 = YPPsym((P)"apply-next-method");
  lit_11 = YPPsym((P)"x-1074");
  T6 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1074_3 = YPmet(FUNCODEREF(fun_x_1074_3),CHKREF(lit_11),T6,ENVNUL);
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
  lit_17 = YPPsym((P)"x-1078");
  T10 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1078_6 = YPmet(FUNCODEREF(fun_x_1078_6),CHKREF(lit_17),T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL);
  T8 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL);
  T11 = fun_8;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collecting"),T11);
  lit_18 = YPPsym((P)"pair");
  lit_19 = YPPsym((P)"set");
  lit_20 = YPPsym((P)"collect");
  lit_21 = YPPsym((P)"x-1082");
  T14 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1082_9 = YPmet(FUNCODEREF(fun_x_1082_9),CHKREF(lit_21),T14,ENVNUL);
  T13 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL);
  T15 = fun_11;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collect"),T15);
  lit_22 = YPPsym((P)"rev!");
  lit_23 = YPPsym((P)"x-1086");
  T18 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1086_12 = YPmet(FUNCODEREF(fun_x_1086_12),CHKREF(lit_23),T18,ENVNUL);
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
  lit_28 = YPPsym((P)"+");
  lit_29 = YPPsym((P)"x-1094");
  lit_30 = YPPsym((P)"inc");
  lit_31 = YPPsym((P)"x-1092");
  T27 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1094_17 = YPmet(FUNCODEREF(fun_x_1094_17),CHKREF(lit_29),T27,ENVNUL);
  T26 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T26,ENVNUL);
  T25 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1092_19 = YPmet(FUNCODEREF(fun_x_1092_19),CHKREF(lit_31),T25,ENVNUL);
  T24 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T24,ENVNUL);
  T23 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T23,ENVNUL);
  T28 = fun_21;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"inc"),T28);
  lit_32 = YPPsym((P)"-");
  lit_33 = YPPsym((P)"x-1102");
  lit_34 = YPPsym((P)"dec");
  lit_35 = YPPsym((P)"x-1100");
  T33 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1102_22 = YPmet(FUNCODEREF(fun_x_1102_22),CHKREF(lit_33),T33,ENVNUL);
  T32 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T32,ENVNUL);
  T31 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1100_24 = YPmet(FUNCODEREF(fun_x_1100_24),CHKREF(lit_35),T31,ENVNUL);
  T30 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T30,ENVNUL);
  T29 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T29,ENVNUL);
  T34 = fun_26;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dec"),T34);
  lit_36 = YPPsym((P)"push");
  lit_37 = YPPsym((P)"pushf");
  lit_38 = YPPsym((P)"x-1106");
  T37 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1106_27 = YPmet(FUNCODEREF(fun_x_1106_27),CHKREF(lit_38),T37,ENVNUL);
  T36 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T36,ENVNUL);
  T35 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T35,ENVNUL);
  T38 = fun_29;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"pushf"),T38);
  lit_39 = YPPsym((P)"pop");
  lit_40 = YPPsym((P)"tup");
  lit_41 = YPPsym((P)"popf");
  lit_42 = YPPsym((P)"x-1110");
  T41 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1110_30 = YPmet(FUNCODEREF(fun_x_1110_30),CHKREF(lit_42),T41,ENVNUL);
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
  lit_47 = YPPsym((P)"x-1114");
  T45 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1114_33 = YPmet(FUNCODEREF(fun_x_1114_33),CHKREF(lit_47),T45,ENVNUL);
  T44 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL);
  T43 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL);
  T46 = fun_35;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"unless"),T46);
  lit_48 = YPPsym((P)"when");
  lit_49 = YPPsym((P)"x-1118");
  T49 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1118_36 = YPmet(FUNCODEREF(fun_x_1118_36),CHKREF(lit_49),T49,ENVNUL);
  T48 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T47,ENVNUL);
  T50 = fun_38;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"when"),T50);
  lit_50 = YPPsym((P)"x-1130");
  lit_51 = YPPsym((P)"or");
  lit_52 = YPPsym((P)"tmp");
  lit_53 = YPPsym((P)"x-1128");
  lit_54 = YPPsym((P)"x-1126");
  T57 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1130_39 = YPmet(FUNCODEREF(fun_x_1130_39),CHKREF(lit_50),T57,ENVNUL);
  T56 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T56,ENVNUL);
  T55 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1128_41 = YPmet(FUNCODEREF(fun_x_1128_41),CHKREF(lit_53),T55,ENVNUL);
  T54 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T54,ENVNUL);
  T53 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1126_43 = YPmet(FUNCODEREF(fun_x_1126_43),CHKREF(lit_54),T53,ENVNUL);
  T52 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T52,ENVNUL);
  T51 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T51,ENVNUL);
  T58 = fun_45;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"or"),T58);
  lit_55 = YPPsym((P)"x-1142");
  lit_56 = YPPsym((P)"and");
  lit_57 = YPPsym((P)"x-1140");
  lit_58 = YPPsym((P)"x-1138");
  T65 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1142_46 = YPmet(FUNCODEREF(fun_x_1142_46),CHKREF(lit_55),T65,ENVNUL);
  T64 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T64,ENVNUL);
  T63 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1140_48 = YPmet(FUNCODEREF(fun_x_1140_48),CHKREF(lit_57),T63,ENVNUL);
  T62 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T62,ENVNUL);
  T61 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1138_50 = YPmet(FUNCODEREF(fun_x_1138_50),CHKREF(lit_58),T61,ENVNUL);
  T60 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T60,ENVNUL);
  T59 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T59,ENVNUL);
  T66 = fun_52;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"and"),T66);
  lit_59 = YPPsym((P)"case");
  lit_60 = YPPsym((P)"x-1150");
  lit_61 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_62 = YPPsym((P)"x-1148");
  T71 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1150_53 = YPmet(FUNCODEREF(fun_x_1150_53),CHKREF(lit_60),T71,ENVNUL);
  T70 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T70,ENVNUL);
  T69 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1148_55 = YPmet(FUNCODEREF(fun_x_1148_55),CHKREF(lit_62),T69,ENVNUL);
  T68 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T67,ENVNUL);
  T72 = fun_57;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case"),T72);
  lit_63 = YPPsym((P)"select");
  lit_64 = YPPsym((P)"x");
  lit_65 = YPPsym((P)"==");
  lit_66 = YPPsym((P)"x-1162");
  lit_67 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_68 = YPPsym((P)"x-1160");
  lit_69 = YPPsym((P)"x-1158");
  T80 = YPsig(YPPlist(1,CHKREF(lit_64)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T80,ENVNUL);
  T79 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1162_59 = YPmet(FUNCODEREF(fun_x_1162_59),CHKREF(lit_66),T79,ENVNUL);
  T78 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T78,ENVNUL);
  T77 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1160_61 = YPmet(FUNCODEREF(fun_x_1160_61),CHKREF(lit_68),T77,ENVNUL);
  T76 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T76,ENVNUL);
  T75 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1158_63 = YPmet(FUNCODEREF(fun_x_1158_63),CHKREF(lit_69),T75,ENVNUL);
  T74 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T74,ENVNUL);
  T73 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T73,ENVNUL);
  T81 = fun_65;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"select"),T81);
  lit_70 = YPPsym((P)"error");
  lit_71 = YPPsym((P)"assert");
  lit_72 = YPPsym((P)"x-1166");
  T84 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1166_66 = YPmet(FUNCODEREF(fun_x_1166_66),CHKREF(lit_72),T84,ENVNUL);
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
  lit_83 = YPPsym((P)"x-1178");
  lit_84 = YPPsym((P)"fin-state?");
  lit_85 = YPPsym((P)"ini-state");
  lit_86 = YPPsym((P)"x-1176");
  lit_87 = YPPsym((P)"rep");
  lit_88 = YPPsym((P)"for");
  lit_89 = YPPsym((P)"x-1174");
  T93 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1178_69 = YPmet(FUNCODEREF(fun_x_1178_69),CHKREF(lit_83),T93,ENVNUL);
  T92 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T92,ENVNUL);
  T91 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1176_71 = YPmet(FUNCODEREF(fun_x_1176_71),CHKREF(lit_86),T91,ENVNUL);
  T90 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T90,ENVNUL);
  T89 = YPsig(YPPlist(6,CHKREF(lit_79),CHKREF(lit_78),CHKREF(lit_77),CHKREF(lit_76),CHKREF(lit_75),CHKREF(lit_74)),YPPlist(6,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)6),CHKREF(YLanyG));
  fun_grok_73 = YPmet(FUNCODEREF(fun_grok_73),CHKREF(lit_73),T89,ENVNUL);
  T88 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1174_74 = YPmet(FUNCODEREF(fun_x_1174_74),CHKREF(lit_89),T88,ENVNUL);
  T87 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T86,ENVNUL);
  T94 = fun_76;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"for"),T94);
  lit_90 = YPPsym((P)"x-1188");
  lit_91 = YPPsym((P)"dlet");
  lit_92 = YPPsym((P)"fin");
  lit_93 = YPPsym((P)"x-1190");
  lit_94 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_95 = YPPsym((P)"x-1186");
  T101 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1190_77 = YPmet(FUNCODEREF(fun_x_1190_77),CHKREF(lit_93),T101,ENVNUL);
  T100 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T100,ENVNUL);
  T99 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1188_79 = YPmet(FUNCODEREF(fun_x_1188_79),CHKREF(lit_90),T99,ENVNUL);
  T98 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T98,ENVNUL);
  T97 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1186_81 = YPmet(FUNCODEREF(fun_x_1186_81),CHKREF(lit_95),T97,ENVNUL);
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
  lit_103 = YPPsym((P)"x-1194");
  T105 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1194_84 = YPmet(FUNCODEREF(fun_x_1194_84),CHKREF(lit_103),T105,ENVNUL);
  T104 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T104,ENVNUL);
  T103 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T103,ENVNUL);
  T106 = fun_86;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"def-fun-var"),T106);
  lit_104 = YPPsym((P)"need-implementation");
  lit_105 = YPPsym((P)"export");
  lit_106 = YPPsym((P)"x-1198");
  T109 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_7)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1198_87 = YPmet(FUNCODEREF(fun_x_1198_87),CHKREF(lit_106),T109,ENVNUL);
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
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"quote", &module_info_boot, "quote"},
  {"%i?", &module_info_boot, "%i?"},
  {"%fb", &module_info_boot, "%fb"},
  {"<num>", &module_info_boot, "<num>"},
  {"fun", &module_info_boot, "fun"},
  {"ds", &module_info_boot, "ds"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%bb", &module_info_boot, "%bb"},
  {"%f+", &module_info_boot, "%f+"},
  {"bound?", &module_info_boot, "bound?"},
  {"nul", &module_info_boot, "nul"},
  {"%su", &module_info_boot, "%su"},
  {"%i&", &module_info_boot, "%i&"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%cu", &module_info_boot, "%cu"},
  {"%c<", &module_info_boot, "%c<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%i+", &module_info_boot, "%i+"},
  {"%snul", &module_info_boot, "%snul"},
  {"<union>", &module_info_boot, "<union>"},
  {"slot", &module_info_boot, "slot"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"loc", &module_info_boot, "loc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<log>", &module_info_boot, "<log>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"tail", &module_info_boot, "tail"},
  {"%im", &module_info_boot, "%im"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%selt", &module_info_boot, "%selt"},
  {"%f=", &module_info_boot, "%f="},
  {"%sb", &module_info_boot, "%sb"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<any>", &module_info_boot, "<any>"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%pair", &module_info_boot, "%pair"},
  {"df", &module_info_boot, "df"},
  {"isa?", &module_info_boot, "isa?"},
  {"type-object", &module_info_boot, "type-object"},
  {"fin", &module_info_boot, "fin"},
  {"rep", &module_info_boot, "rep"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%iu", &module_info_boot, "%iu"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"not", &module_info_boot, "not"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"use", &module_info_boot, "use"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"lab", &module_info_boot, "lab"},
  {"%i-", &module_info_boot, "%i-"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"isa", &module_info_boot, "isa"},
  {"<class>", &module_info_boot, "<class>"},
  {"set", &module_info_boot, "set"},
  {"type-error", &module_info_boot, "type-error"},
  {"error", &module_info_boot, "error"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<type>", &module_info_boot, "<type>"},
  {"%velt", &module_info_boot, "%velt"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fapply", &module_info_boot, "fapply"},
  {"%fu", &module_info_boot, "%fu"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"head", &module_info_boot, "head"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"dv", &module_info_boot, "dv"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"dc", &module_info_boot, "dc"},
  {"%c=", &module_info_boot, "%c="},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"if", &module_info_boot, "if"},
  {"<str>", &module_info_boot, "<str>"},
  {"object-class", &module_info_boot, "object-class"},
  {"%f/", &module_info_boot, "%f/"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"nil", &module_info_boot, "nil"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"dm", &module_info_boot, "dm"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"seq", &module_info_boot, "seq"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%f<", &module_info_boot, "%f<"},
  {"try", &module_info_boot, "try"},
  {"%vec", &module_info_boot, "%vec"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%i=", &module_info_boot, "%i="},
  {"<flat>", &module_info_boot, "<flat>"},
  {"%cb", &module_info_boot, "%cb"},
  {"<met>", &module_info_boot, "<met>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"lst", &module_info_boot, "lst"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%isa", &module_info_boot, "%isa"},
  {"%f-", &module_info_boot, "%f-"},
  {"%ib", &module_info_boot, "%ib"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%lu", &module_info_boot, "%lu"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-name", &module_info_boot, "class-name"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"%i*", &module_info_boot, "%i*"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"<col>", &module_info_boot, "<col>"},
  {"apply", &module_info_boot, "apply"},
  {"%f*", &module_info_boot, "%f*"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"export", &module_info_boot, "export"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%it/", &module_info_boot, "%it/"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"mif", &module_info_boot, "mif"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%i!", &module_info_boot, "%i!"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%slot", &module_info_boot, "%slot"},
  {"%i<", &module_info_boot, "%i<"},
  {"%slen", &module_info_boot, "%slen"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"dss", &module_info_boot, "dss"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"ct", &module_info_boot, "ct"},
  {"type-class", &module_info_boot, "type-class"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"let", &module_info_boot, "let"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"<int>", &module_info_boot, "<int>"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"dg", &module_info_boot, "dg"},
  {"%str", &module_info_boot, "%str"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"collected", NULL},
  {"var-type", &YmacrosYvar_type},
  {"popf", NULL},
  {"next-method", NULL},
  {"match-atom", &YmacrosYmatch_atom},
  {"tup", &YmacrosYtup},
  {"==", &YmacrosYEE},
  {"for", NULL},
  {"var-name", &YmacrosYvar_name},
  {"match-unquote", &YmacrosYmatch_unquote},
  {"select", NULL},
  {"dlet", NULL},
  {"dec", NULL},
  {"collect", NULL},
  {"assert", NULL},
  {"lift-place-subforms", &YmacrosYlift_place_subforms},
  {"match-empty-list", &YmacrosYmatch_empty_list},
  {"or", NULL},
  {"def-fun-var", NULL},
  {"pair", &YmacrosYpair},
  {"empty?", &YmacrosYemptyQ},
  {"gensym", &YmacrosYgensym},
  {"unless", NULL},
  {"apply-next-method", NULL},
  {"---main-0---", NULL},
  {"and", NULL},
  {"map", &YmacrosYmap},
  {"pushf", NULL},
  {"cat", &YmacrosYcat},
  {"case", NULL},
  {"make-sym", &YmacrosYmake_sym},
  {"need-implementation", NULL},
  {"collecting", NULL},
  {"match-sublist", &YmacrosYmatch_sublist},
  {"when", NULL},
  {"make-setter-name", &YmacrosYmake_setter_name},
  {"inc", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"collected", "collected"},
  {"var-type", "var-type"},
  {"popf", "popf"},
  {"next-method", "next-method"},
  {"match-atom", "match-atom"},
  {"tup", "tup"},
  {"==", "=="},
  {"for", "for"},
  {"var-name", "var-name"},
  {"match-unquote", "match-unquote"},
  {"select", "select"},
  {"dlet", "dlet"},
  {"dec", "dec"},
  {"collect", "collect"},
  {"assert", "assert"},
  {"match-empty-list", "match-empty-list"},
  {"error", "error"},
  {"or", "or"},
  {"def-fun-var", "def-fun-var"},
  {"pair", "pair"},
  {"empty?", "empty?"},
  {"unless", "unless"},
  {"gensym", "gensym"},
  {"apply-next-method", "apply-next-method"},
  {"when", "when"},
  {"and", "and"},
  {"map", "map"},
  {"lst", "lst"},
  {"pushf", "pushf"},
  {"cat", "cat"},
  {"case", "case"},
  {"make-sym", "make-sym"},
  {"need-implementation", "need-implementation"},
  {"collecting", "collecting"},
  {"match-sublist", "match-sublist"},
  {"make-setter-name", "make-setter-name"},
  {"inc", "inc"},
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
