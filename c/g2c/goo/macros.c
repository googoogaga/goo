/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(Yfind_getter,"boot","find-getter");
DEF(YmacrosYmake_sym,"macros","make-sym");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(Yobject_class,"boot","object-class");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_mets,"boot","fun-mets");
DEF(YmacrosYvar_name,"macros","var-name");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ynul,"boot","nul");
EXT(YLfunG,"boot","<fun>");
DEF(YmacrosYEE,"macros","==");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YmacrosYmap,"macros","map");
EXT(YPPmacro,"boot","%%macro");
EXT(YLlstG,"boot","<lst>");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YLseqG,"boot","<seq>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ytail,"boot","tail");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yclass_slots,"boot","class-slots");
EXT(YLcolG,"boot","<col>");
EXT(Yfab_class,"boot","fab-class");
EXT(YLsigG,"boot","<sig>");
EXT(Ytype_error,"boot","type-error");
EXT(Yadd_slot,"boot","add-slot");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
DEF(YmacrosYemptyQ,"macros","empty?");
EXT(YLlocG,"boot","<loc>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YmacrosYgensym,"macros","gensym");
EXT(YLfloG,"boot","<flo>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YPisa,"boot","%isa");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Yfun_value,"boot","fun-value");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YmacrosYpair,"macros","pair");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YLchrG,"boot","<chr>");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Ysig_names,"boot","sig-names");
EXT(YPslot,"boot","%slot");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YLlogG,"boot","<log>");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YLslotG,"boot","<slot>");
EXT(YPsymbols,"boot","%symbols");
EXT(Ynot,"boot","not");
EXT(YLtupG,"boot","<tup>");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YLanyG,"boot","<any>");
EXT(Ytype_class,"boot","type-class");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLunionG,"boot","<union>");
EXT(Yfun_arity,"boot","fun-arity");
EXT(Yslot_value,"boot","slot-value");
EXT(Yerror,"boot","error");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YLsingletonG,"boot","<singleton>");
EXT(Yunexec,"boot","unexec");
EXT(Ynil,"boot","nil");
EXT(Ylst,"boot","lst");
DEF(YmacrosYnapply,"macros","napply");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(YmacrosYtup,"macros","tup");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YPsnul,"boot","%snul");
DEF(YmacrosYcat,"macros","cat");
EXT(YLoptsG,"boot","<opts>");
EXT(YPvnul,"boot","%vnul");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YisaQ,"boot","isa?");
EXT(Ytype_object,"boot","type-object");
EXT(YDmin_int,"boot","$min-int");
EXT(YLclassG,"boot","<class>");
EXT(YLtypeG,"boot","<type>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(Yobject_parents,"boot","object-parents");
DEF(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(Yobject_slots,"boot","object-slots");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
EXT(Yfind_setter,"boot","find-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YLstrG,"boot","<str>");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(Yhead_setter,"boot","head-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_111);
DEFLIT(lit_80);
DEFLIT(lit_50);
DEFLIT(lit_20);
DEFLIT(lit_66);
DEFLIT(lit_118);
DEFLIT(lit_81);
DEFLIT(lit_115);
DEFLIT(lit_34);
DEFLIT(lit_91);
DEFLIT(lit_10);
DEFLIT(lit_55);
DEFLIT(lit_13);
DEFLIT(lit_106);
DEFLIT(lit_75);
DEFLIT(lit_78);
DEFLIT(lit_58);
DEFLIT(lit_95);
DEFLIT(lit_2);
DEFLIT(lit_105);
DEFLIT(lit_99);
DEFLIT(lit_61);
DEFLIT(lit_104);
DEFLIT(lit_37);
DEFLIT(lit_107);
DEFLIT(lit_94);
DEFLIT(lit_25);
DEFLIT(lit_114);
DEFLIT(lit_33);
DEFLIT(lit_90);
DEFLIT(lit_26);
DEFLIT(lit_9);
DEFLIT(lit_54);
DEFLIT(lit_79);
DEFLIT(lit_15);
DEFLIT(lit_44);
DEFLIT(lit_100);
DEFLIT(lit_48);
DEFLIT(lit_17);
DEFLIT(lit_73);
DEFLIT(lit_77);
DEFLIT(lit_56);
DEFLIT(lit_53);
DEFLIT(lit_24);
DEFLIT(lit_22);
DEFLIT(lit_8);
DEFLIT(lit_31);
DEFLIT(lit_60);
DEFLIT(lit_49);
DEFLIT(lit_110);
DEFLIT(lit_30);
DEFLIT(lit_32);
DEFLIT(lit_74);
DEFLIT(lit_89);
DEFLIT(lit_29);
DEFLIT(lit_43);
DEFLIT(lit_68);
DEFLIT(lit_59);
DEFLIT(lit_113);
DEFLIT(lit_14);
DEFLIT(lit_36);
DEFLIT(lit_19);
DEFLIT(lit_23);
DEFLIT(lit_64);
DEFLIT(lit_109);
DEFLIT(lit_85);
DEFLIT(lit_38);
DEFLIT(lit_117);
DEFLIT(lit_7);
DEFLIT(lit_101);
DEFLIT(lit_62);
DEFLIT(lit_52);
DEFLIT(lit_72);
DEFLIT(lit_27);
DEFLIT(lit_46);
DEFLIT(lit_116);
DEFLIT(lit_71);
DEFLIT(lit_93);
DEFLIT(lit_63);
DEFLIT(lit_35);
DEFLIT(lit_69);
DEFLIT(lit_96);
DEFLIT(lit_112);
DEFLIT(lit_102);
DEFLIT(lit_88);
DEFLIT(lit_6);
DEFLIT(lit_67);
DEFLIT(lit_70);
DEFLIT(lit_47);
DEFLIT(lit_76);
DEFLIT(lit_40);
DEFLIT(lit_86);
DEFLIT(lit_21);
DEFLIT(lit_5);
DEFLIT(lit_57);
DEFLIT(lit_39);
DEFLIT(lit_16);
DEFLIT(lit_51);
DEFLIT(lit_0);
DEFLIT(lit_97);
DEFLIT(lit_45);
DEFLIT(lit_108);
DEFLIT(lit_92);
DEFLIT(lit_82);
DEFLIT(lit_11);
DEFLIT(lit_28);
DEFLIT(lit_65);
DEFLIT(lit_83);
DEFLIT(lit_87);
DEFLIT(lit_42);
DEFLIT(lit_119);
DEFLIT(lit_41);
DEFLIT(lit_98);
DEFLIT(lit_4);
DEFLIT(lit_103);
DEFLIT(lit_1);
DEFLIT(lit_84);
DEFLIT(lit_12);

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
LOCFOR(fun_x_1130_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_x_1134_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1142_48);
LOCFOR(fun_x_1144_49);
LOCFOR(fun_x_1146_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_x_1154_55);
LOCFOR(fun_x_1156_56);
LOCFOR(fun_x_1158_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1164_62);
LOCFOR(fun_x_1166_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
LOCFOR(fun_x_1174_67);
LOCFOR(fun_x_1176_68);
LOCFOR(fun_x_1178_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_x_1182_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1190_78);
LOCFOR(fun_x_1192_79);
LOCFOR(fun_x_1194_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_grok_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1198_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_x_1206_89);
LOCFOR(fun_x_1210_90);
LOCFOR(fun_91);
LOCFOR(fun_x_1208_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1214_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1218_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
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
  P x_1073F421;
  P x_1073F420;
  P argsF419;
  P x_1073F418;
  P x_1074F417;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1074_0,1);
  x_1074F417 = T1;
  FUNINIT(x_1074F417, 1,return_);
  x_1073F418 = FREEREF(0);
  argsF419 = YPfalse;
  argsF419 = BOXFAB(argsF419);
  T5 = CALL2(1,CHKREF(YisaQ),x_1073F418,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1073F418,CHKREF(lit_5),x_1074F417);
    x_1073F420 = T7;
    BOXVAL(argsF419) = x_1073F420;
    x_1073F421 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1073F421,x_1074F417);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1074F417,CHKREF(lit_6),x_1073F418);
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
  T36 = BOXVAL(argsF419);
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
  P x_1077F426;
  P x_1077F425;
  P argsF424;
  P x_1077F423;
  P x_1078F422;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1078_3,1);
  x_1078F422 = T1;
  FUNINIT(x_1078F422, 1,return_);
  x_1077F423 = FREEREF(0);
  argsF424 = YPfalse;
  argsF424 = BOXFAB(argsF424);
  T5 = CALL2(1,CHKREF(YisaQ),x_1077F423,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1077F423,CHKREF(lit_18),x_1078F422);
    x_1077F425 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1077F425,x_1078F422);
    BOXVAL(argsF424) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1077F425);
    x_1077F426 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1077F426,x_1078F422);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1078F422,CHKREF(lit_6),x_1077F423);
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
  T39 = BOXVAL(argsF424);
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
  P x_1081F433;
  P x_1081F432;
  P x_1081F431;
  P argsF430;
  P fF429;
  P x_1081F428;
  P x_1082F427;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1082_6,1);
  x_1082F427 = T1;
  FUNINIT(x_1082F427, 1,return_);
  x_1081F428 = FREEREF(0);
  fF429 = YPfalse;
  fF429 = BOXFAB(fF429);
  argsF430 = YPfalse;
  argsF430 = BOXFAB(argsF430);
  T7 = CALL2(1,CHKREF(YisaQ),x_1081F428,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1081F428,CHKREF(lit_21),x_1082F427);
    x_1081F431 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1081F431,x_1082F427);
    BOXVAL(fF429) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1081F431);
    x_1081F432 = T12;
    BOXVAL(argsF430) = x_1081F432;
    x_1081F433 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1081F433,x_1082F427);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1082F427,CHKREF(lit_6),x_1081F428);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_11));
  T19 = BOXVAL(fF429);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T20 = CALL1(1,CHKREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF430);
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
  P nameF441;
  P x_1085F440;
  P x_1085F439;
  P x_1085F438;
  P x_1085F437;
  P bodyF436;
  P x_1085F435;
  P x_1086F434;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1086_9,1);
  x_1086F434 = T1;
  FUNINIT(x_1086F434, 1,return_);
  x_1085F435 = FREEREF(0);
  bodyF436 = YPfalse;
  bodyF436 = BOXFAB(bodyF436);
  T5 = CALL2(1,CHKREF(YisaQ),x_1085F435,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1085F435,CHKREF(lit_23),x_1086F434);
    x_1085F437 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1085F437,x_1086F434);
    x_1085F438 = T9;
    T10 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1085F438,x_1086F434);
    T11 = CALL1(1,CHKREF(Ytail),x_1085F437);
    x_1085F439 = T11;
    BOXVAL(bodyF436) = x_1085F439;
    x_1085F440 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1085F440,x_1086F434);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1086F434,CHKREF(lit_6),x_1085F435);
  }
  nameF441 = CHKREF(lit_24);
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T22 = CALL1(1,CHKREF(Ylst),nameF441);
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_14));
  T26 = CALL1(1,CHKREF(Ylst),Ynil);
  T24 = CALL3(1,CHKREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T21 = CALL3(1,CHKREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T19 = CALL2(1,CHKREF(YmacrosYcat),T20,Ynil);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T27 = BOXVAL(bodyF436);
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_25));
  T31 = CALL1(1,CHKREF(Ylst),nameF441);
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
  P nameF447;
  P x_1089F446;
  P x_1089F445;
  P valueF444;
  P x_1089F443;
  P x_1090F442;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1090_12,1);
  x_1090F442 = T1;
  FUNINIT(x_1090F442, 1,return_);
  x_1089F443 = FREEREF(0);
  valueF444 = YPfalse;
  valueF444 = BOXFAB(valueF444);
  T5 = CALL2(1,CHKREF(YisaQ),x_1089F443,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1089F443,CHKREF(lit_27),x_1090F442);
    x_1089F445 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1089F445,x_1090F442);
    BOXVAL(valueF444) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1089F445);
    x_1089F446 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1089F446,x_1090F442);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1090F442,CHKREF(lit_6),x_1089F443);
  }
  nameF447 = CHKREF(lit_24);
  T15 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T16 = CALL1(1,CHKREF(Ylst),nameF447);
  T19 = CALL1(1,CHKREF(Ylst),CHKREF(lit_29));
  T21 = BOXVAL(valueF444);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T22 = CALL1(1,CHKREF(Ylst),nameF447);
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
  P x_1093F452;
  P x_1093F451;
  P nameF450;
  P x_1093F449;
  P x_1094F448;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F448 = T1;
  FUNINIT(x_1094F448, 1,return_);
  x_1093F449 = FREEREF(0);
  nameF450 = YPfalse;
  nameF450 = BOXFAB(nameF450);
  T5 = CALL2(1,CHKREF(YisaQ),x_1093F449,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1093F449,CHKREF(lit_25),x_1094F448);
    x_1093F451 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1093F451,x_1094F448);
    BOXVAL(nameF450) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1093F451);
    x_1093F452 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1093F452,x_1094F448);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1094F448,CHKREF(lit_6),x_1093F449);
  }
  T14 = CALL1(1,CHKREF(Ylst),CHKREF(lit_31));
  T16 = BOXVAL(nameF450);
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
  P gF458;
  P tup4F457;
  P g_argsF456;
  P tup4F455;
  P g_declsF454;
  P tup4F453;
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
    tup4F453 = T3;
    T6 = CALL1(1,CHKREF(Yhead),tup4F453);
    g_declsF454 = T6;
    T8 = CALL1(1,CHKREF(Ytail),tup4F453);
    tup4F455 = T8;
    T10 = CALL1(1,CHKREF(Yhead),tup4F455);
    g_argsF456 = T10;
    T12 = CALL1(1,CHKREF(Ytail),tup4F455);
    tup4F457 = T12;
    T14 = CALL0(1,CHKREF(YmacrosYgensym));
    gF458 = T14;
    T18 = CALL1(1,CHKREF(Ylst),gF458);
    T20 = CALL1(1,CHKREF(Yhead),subforms_);
    T19 = CALL1(1,CHKREF(Ylst),T20);
    T17 = CALL3(1,CHKREF(YmacrosYcat),T18,T19,Ynil);
    T16 = CALL2(1,CHKREF(YmacrosYpair),T17,g_declsF454);
    T21 = CALL2(1,CHKREF(YmacrosYpair),gF458,g_argsF456);
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
  P tup5F464;
  P g_argsF463;
  P tup5F462;
  P g_declsF461;
  P tup5F460;
  P munchF459;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_18,1);
  munchF459 = T1;
  FUNINIT(munchF459, 1,munchF459);
  T3 = CALL2(1,CHKREF(YisaQ),place_,CHKREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YmacrosYtup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,CHKREF(Ytail),place_);
    T6 = CALL1(1,munchF459,T7);
    tup5F460 = T6;
    T9 = CALL1(1,CHKREF(Yhead),tup5F460);
    g_declsF461 = T9;
    T11 = CALL1(1,CHKREF(Ytail),tup5F460);
    tup5F462 = T11;
    T13 = CALL1(1,CHKREF(Yhead),tup5F462);
    g_argsF463 = T13;
    T15 = CALL1(1,CHKREF(Ytail),tup5F462);
    tup5F464 = T15;
    T18 = CALL1(1,CHKREF(Yhead),place_);
    T17 = CALL2(1,CHKREF(YmacrosYpair),T18,g_argsF463);
    T16 = CALL2(1,CHKREF(YmacrosYtup),g_declsF461,T17);
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
  P x_1101F468;
  P amountF467;
  P x_1101F466;
  P x_1102F465;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_21,1);
  x_1102F465 = T1;
  FUNINIT(x_1102F465, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1101F466 = T3;
  amountF467 = YPfalse;
  amountF467 = BOXFAB(amountF467);
  T6 = CALL2(1,CHKREF(YisaQ),x_1101F466,CHKREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1101F466,x_1102F465);
    BOXVAL(amountF467) = T8;
    T9 = CALL1(1,CHKREF(Ytail),x_1101F466);
    x_1101F468 = T9;
    T10 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1101F468,x_1102F465);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1102F465,CHKREF(lit_6),x_1101F466);
  }
  T12 = BOXVAL(amountF467);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF481;
  P tup7F480;
  P g_placeF479;
  P tup7F478;
  P g_declsF477;
  P tup7F476;
  P x_1099F475;
  P x_1099F474;
  P x_1099F473;
  P amountF472;
  P placeF471;
  P x_1099F470;
  P x_1100F469;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1100_20,1);
  x_1100F469 = T1;
  FUNINIT(x_1100F469, 1,return_);
  x_1099F470 = FREEREF(0);
  placeF471 = YPfalse;
  placeF471 = BOXFAB(placeF471);
  amountF472 = YPfalse;
  amountF472 = BOXFAB(amountF472);
  T7 = CALL2(1,CHKREF(YisaQ),x_1099F470,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1099F470,CHKREF(lit_37),x_1100F469);
    x_1099F473 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1099F473,x_1100F469);
    BOXVAL(placeF471) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1099F473);
    x_1099F474 = T12;
    BOXVAL(amountF472) = x_1099F474;
    x_1099F475 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1099F475,x_1100F469);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1100F469,CHKREF(lit_6),x_1099F470);
  }
  T18 = BOXVAL(placeF471);
  T17 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T18);
  tup7F476 = T17;
  T20 = CALL1(1,CHKREF(Yhead),tup7F476);
  g_declsF477 = T20;
  T22 = CALL1(1,CHKREF(Ytail),tup7F476);
  tup7F478 = T22;
  T24 = CALL1(1,CHKREF(Yhead),tup7F478);
  g_placeF479 = T24;
  T26 = CALL1(1,CHKREF(Ytail),tup7F478);
  tup7F480 = T26;
  T29 = FUNFAB(fun_22,1,amountF472);
  T28 = with_exit(T29);
  amountF481 = T28;
  T31 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T33 = CALL2(1,CHKREF(YmacrosYcat),g_declsF477,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T37 = CALL1(1,CHKREF(Ylst),g_placeF479);
  T40 = CALL1(1,CHKREF(Ylst),CHKREF(lit_39));
  T41 = CALL1(1,CHKREF(Ylst),g_placeF479);
  T42 = CALL1(1,CHKREF(Ylst),amountF481);
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
  P x_1109F485;
  P amountF484;
  P x_1109F483;
  P x_1110F482;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1110_26,1);
  x_1110F482 = T1;
  FUNINIT(x_1110F482, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1109F483 = T3;
  amountF484 = YPfalse;
  amountF484 = BOXFAB(amountF484);
  T6 = CALL2(1,CHKREF(YisaQ),x_1109F483,CHKREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1109F483,x_1110F482);
    BOXVAL(amountF484) = T8;
    T9 = CALL1(1,CHKREF(Ytail),x_1109F483);
    x_1109F485 = T9;
    T10 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1109F485,x_1110F482);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1110F482,CHKREF(lit_6),x_1109F483);
  }
  T12 = BOXVAL(amountF484);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P amountF498;
  P tup9F497;
  P g_placeF496;
  P tup9F495;
  P g_declsF494;
  P tup9F493;
  P x_1107F492;
  P x_1107F491;
  P x_1107F490;
  P amountF489;
  P placeF488;
  P x_1107F487;
  P x_1108F486;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F486 = T1;
  FUNINIT(x_1108F486, 1,return_);
  x_1107F487 = FREEREF(0);
  placeF488 = YPfalse;
  placeF488 = BOXFAB(placeF488);
  amountF489 = YPfalse;
  amountF489 = BOXFAB(amountF489);
  T7 = CALL2(1,CHKREF(YisaQ),x_1107F487,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1107F487,CHKREF(lit_41),x_1108F486);
    x_1107F490 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1107F490,x_1108F486);
    BOXVAL(placeF488) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1107F490);
    x_1107F491 = T12;
    BOXVAL(amountF489) = x_1107F491;
    x_1107F492 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1107F492,x_1108F486);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1108F486,CHKREF(lit_6),x_1107F487);
  }
  T18 = BOXVAL(placeF488);
  T17 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T18);
  tup9F493 = T17;
  T20 = CALL1(1,CHKREF(Yhead),tup9F493);
  g_declsF494 = T20;
  T22 = CALL1(1,CHKREF(Ytail),tup9F493);
  tup9F495 = T22;
  T24 = CALL1(1,CHKREF(Yhead),tup9F495);
  g_placeF496 = T24;
  T26 = CALL1(1,CHKREF(Ytail),tup9F495);
  tup9F497 = T26;
  T29 = FUNFAB(fun_27,1,amountF489);
  T28 = with_exit(T29);
  amountF498 = T28;
  T31 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T33 = CALL2(1,CHKREF(YmacrosYcat),g_declsF494,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T37 = CALL1(1,CHKREF(Ylst),g_placeF496);
  T40 = CALL1(1,CHKREF(Ylst),CHKREF(lit_43));
  T41 = CALL1(1,CHKREF(Ylst),g_placeF496);
  T42 = CALL1(1,CHKREF(Ylst),amountF498);
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
  P tup11F510;
  P g_placeF509;
  P tup11F508;
  P g_declsF507;
  P tup11F506;
  P x_1113F505;
  P x_1113F504;
  P x_1113F503;
  P valueF502;
  P placeF501;
  P x_1113F500;
  P x_1114F499;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1114_30,1);
  x_1114F499 = T1;
  FUNINIT(x_1114F499, 1,return_);
  x_1113F500 = FREEREF(0);
  placeF501 = YPfalse;
  placeF501 = BOXFAB(placeF501);
  valueF502 = YPfalse;
  valueF502 = BOXFAB(valueF502);
  T7 = CALL2(1,CHKREF(YisaQ),x_1113F500,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1113F500,CHKREF(lit_45),x_1114F499);
    x_1113F503 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1113F503,x_1114F499);
    BOXVAL(placeF501) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1113F503);
    x_1113F504 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1113F504,x_1114F499);
    BOXVAL(valueF502) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1113F504);
    x_1113F505 = T15;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1113F505,x_1114F499);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1114F499,CHKREF(lit_6),x_1113F500);
  }
  T20 = BOXVAL(placeF501);
  T19 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T20);
  tup11F506 = T19;
  T22 = CALL1(1,CHKREF(Yhead),tup11F506);
  g_declsF507 = T22;
  T24 = CALL1(1,CHKREF(Ytail),tup11F506);
  tup11F508 = T24;
  T26 = CALL1(1,CHKREF(Yhead),tup11F508);
  g_placeF509 = T26;
  T28 = CALL1(1,CHKREF(Ytail),tup11F508);
  tup11F510 = T28;
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T32 = CALL2(1,CHKREF(YmacrosYcat),g_declsF507,Ynil);
  T31 = CALL1(1,CHKREF(Ylst),T32);
  T35 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T36 = CALL1(1,CHKREF(Ylst),g_placeF509);
  T39 = CALL1(1,CHKREF(Ylst),CHKREF(lit_46));
  T40 = CALL1(1,CHKREF(Ylst),g_placeF509);
  T42 = BOXVAL(valueF502);
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
  P tmpF528;
  P tup15F527;
  P yg_placeF526;
  P tup15F525;
  P yg_declsF524;
  P tup15F523;
  P tup14F522;
  P xg_placeF521;
  P tup14F520;
  P xg_declsF519;
  P tup14F518;
  P x_1117F517;
  P x_1117F516;
  P x_1117F515;
  P yF514;
  P xF513;
  P x_1117F512;
  P x_1118F511;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1118_33,1);
  x_1118F511 = T1;
  FUNINIT(x_1118F511, 1,return_);
  x_1117F512 = FREEREF(0);
  xF513 = YPfalse;
  xF513 = BOXFAB(xF513);
  yF514 = YPfalse;
  yF514 = BOXFAB(yF514);
  T7 = CALL2(1,CHKREF(YisaQ),x_1117F512,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1117F512,CHKREF(lit_48),x_1118F511);
    x_1117F515 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1117F515,x_1118F511);
    BOXVAL(xF513) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1117F515);
    x_1117F516 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1117F516,x_1118F511);
    BOXVAL(yF514) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1117F516);
    x_1117F517 = T15;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1117F517,x_1118F511);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1118F511,CHKREF(lit_6),x_1117F512);
  }
  T20 = BOXVAL(xF513);
  T19 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T20);
  tup14F518 = T19;
  T22 = CALL1(1,CHKREF(Yhead),tup14F518);
  xg_declsF519 = T22;
  T24 = CALL1(1,CHKREF(Ytail),tup14F518);
  tup14F520 = T24;
  T26 = CALL1(1,CHKREF(Yhead),tup14F520);
  xg_placeF521 = T26;
  T28 = CALL1(1,CHKREF(Ytail),tup14F520);
  tup14F522 = T28;
  T31 = BOXVAL(yF514);
  T30 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T31);
  tup15F523 = T30;
  T33 = CALL1(1,CHKREF(Yhead),tup15F523);
  yg_declsF524 = T33;
  T35 = CALL1(1,CHKREF(Ytail),tup15F523);
  tup15F525 = T35;
  T37 = CALL1(1,CHKREF(Yhead),tup15F525);
  yg_placeF526 = T37;
  T39 = CALL1(1,CHKREF(Ytail),tup15F525);
  tup15F527 = T39;
  T41 = CALL0(1,CHKREF(YmacrosYgensym));
  tmpF528 = T41;
  T43 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T48 = CALL1(1,CHKREF(Ylst),tmpF528);
  T49 = CALL1(1,CHKREF(Ylst),xg_placeF521);
  T47 = CALL3(1,CHKREF(YmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,CHKREF(Ylst),T47);
  T45 = CALLN(1,CHKREF(YmacrosYcat),4,xg_declsF519,yg_declsF524,T46,Ynil);
  T44 = CALL1(1,CHKREF(Ylst),T45);
  T52 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T53 = CALL1(1,CHKREF(Ylst),xg_placeF521);
  T54 = CALL1(1,CHKREF(Ylst),yg_placeF526);
  T51 = CALLN(1,CHKREF(YmacrosYcat),4,T52,T53,T54,Ynil);
  T50 = CALL1(1,CHKREF(Ylst),T51);
  T57 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T58 = CALL1(1,CHKREF(Ylst),yg_placeF526);
  T59 = CALL1(1,CHKREF(Ylst),tmpF528);
  T56 = CALLN(1,CHKREF(YmacrosYcat),4,T57,T58,T59,Ynil);
  T55 = CALL1(1,CHKREF(Ylst),T56);
  T42 = CALLN(1,CHKREF(YmacrosYcat),5,T43,T44,T50,T55,Ynil);
  T40 = T42;
  T38 = T40;
  T36 = T38;
  T34 = T36;
  T32 = T34;
  T29 = T32;
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
  P valF540;
  P new_colF539;
  P tup17F538;
  P g_placeF537;
  P tup17F536;
  P g_declsF535;
  P tup17F534;
  P x_1121F533;
  P x_1121F532;
  P placeF531;
  P x_1121F530;
  P x_1122F529;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1122_36,1);
  x_1122F529 = T1;
  FUNINIT(x_1122F529, 1,return_);
  x_1121F530 = FREEREF(0);
  placeF531 = YPfalse;
  placeF531 = BOXFAB(placeF531);
  T5 = CALL2(1,CHKREF(YisaQ),x_1121F530,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1121F530,CHKREF(lit_50),x_1122F529);
    x_1121F532 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1121F532,x_1122F529);
    BOXVAL(placeF531) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1121F532);
    x_1121F533 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1121F533,x_1122F529);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1122F529,CHKREF(lit_6),x_1121F530);
  }
  T15 = BOXVAL(placeF531);
  T14 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T15);
  tup17F534 = T14;
  T17 = CALL1(1,CHKREF(Yhead),tup17F534);
  g_declsF535 = T17;
  T19 = CALL1(1,CHKREF(Ytail),tup17F534);
  tup17F536 = T19;
  T21 = CALL1(1,CHKREF(Yhead),tup17F536);
  g_placeF537 = T21;
  T23 = CALL1(1,CHKREF(Ytail),tup17F536);
  tup17F538 = T23;
  T25 = CALL0(1,CHKREF(YmacrosYgensym));
  new_colF539 = T25;
  T27 = CALL0(1,CHKREF(YmacrosYgensym));
  valF540 = T27;
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_51));
  T37 = CALL1(1,CHKREF(Ylst),new_colF539);
  T38 = CALL1(1,CHKREF(Ylst),valF540);
  T35 = CALLN(1,CHKREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,CHKREF(Ylst),T35);
  T41 = CALL1(1,CHKREF(Ylst),CHKREF(lit_52));
  T42 = CALL1(1,CHKREF(Ylst),g_placeF537);
  T40 = CALL3(1,CHKREF(YmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,CHKREF(Ylst),T40);
  T33 = CALL3(1,CHKREF(YmacrosYcat),T34,T39,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T31 = CALL3(1,CHKREF(YmacrosYcat),g_declsF535,T32,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T45 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T46 = CALL1(1,CHKREF(Ylst),g_placeF537);
  T47 = CALL1(1,CHKREF(Ylst),new_colF539);
  T44 = CALLN(1,CHKREF(YmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,CHKREF(Ylst),T44);
  T48 = CALL1(1,CHKREF(Ylst),valF540);
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
  P tup19F552;
  P g_placeF551;
  P tup19F550;
  P g_declsF549;
  P tup19F548;
  P x_1125F547;
  P x_1125F546;
  P x_1125F545;
  P callF544;
  P placeF543;
  P x_1125F542;
  P x_1126F541;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1126_39,1);
  x_1126F541 = T1;
  FUNINIT(x_1126F541, 1,return_);
  x_1125F542 = FREEREF(0);
  placeF543 = YPfalse;
  placeF543 = BOXFAB(placeF543);
  callF544 = YPfalse;
  callF544 = BOXFAB(callF544);
  T7 = CALL2(1,CHKREF(YisaQ),x_1125F542,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1125F542,CHKREF(lit_54),x_1126F541);
    x_1125F545 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1125F545,x_1126F541);
    BOXVAL(placeF543) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1125F545);
    x_1125F546 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1125F546,x_1126F541);
    BOXVAL(callF544) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1125F546);
    x_1125F547 = T15;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1125F547,x_1126F541);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1126F541,CHKREF(lit_6),x_1125F542);
  }
  T20 = BOXVAL(placeF543);
  T19 = CALL1(1,CHKREF(YmacrosYlift_place_subforms),T20);
  tup19F548 = T19;
  T22 = CALL1(1,CHKREF(Yhead),tup19F548);
  g_declsF549 = T22;
  T24 = CALL1(1,CHKREF(Ytail),tup19F548);
  tup19F550 = T24;
  T26 = CALL1(1,CHKREF(Yhead),tup19F550);
  g_placeF551 = T26;
  T28 = CALL1(1,CHKREF(Ytail),tup19F550);
  tup19F552 = T28;
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T35 = CALL1(1,CHKREF(Ylst),CHKREF(lit_55));
  T36 = CALL1(1,CHKREF(Ylst),g_placeF551);
  T34 = CALL3(1,CHKREF(YmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,CHKREF(Ylst),T34);
  T32 = CALL3(1,CHKREF(YmacrosYcat),g_declsF549,T33,Ynil);
  T31 = CALL1(1,CHKREF(Ylst),T32);
  T39 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T40 = CALL1(1,CHKREF(Ylst),g_placeF551);
  T42 = BOXVAL(callF544);
  T41 = CALL1(1,CHKREF(Ylst),T42);
  T38 = CALLN(1,CHKREF(YmacrosYcat),4,T39,T40,T41,Ynil);
  T37 = CALL1(1,CHKREF(Ylst),T38);
  T29 = CALLN(1,CHKREF(YmacrosYcat),4,T30,T31,T37,Ynil);
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

FUNCODEDEF(fun_x_1130_42) {
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

FUNCODEDEF(fun_43) {
  P return_;
  P x_1129F559;
  P x_1129F558;
  P x_1129F557;
  P bodyF556;
  P testF555;
  P x_1129F554;
  P x_1130F553;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1130_42,1);
  x_1130F553 = T1;
  FUNINIT(x_1130F553, 1,return_);
  x_1129F554 = FREEREF(0);
  testF555 = YPfalse;
  testF555 = BOXFAB(testF555);
  bodyF556 = YPfalse;
  bodyF556 = BOXFAB(bodyF556);
  T7 = CALL2(1,CHKREF(YisaQ),x_1129F554,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1129F554,CHKREF(lit_57),x_1130F553);
    x_1129F557 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1129F557,x_1130F553);
    BOXVAL(testF555) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1129F557);
    x_1129F558 = T12;
    BOXVAL(bodyF556) = x_1129F558;
    x_1129F559 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1129F559,x_1130F553);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1130F553,CHKREF(lit_6),x_1129F554);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_58));
  T22 = BOXVAL(testF555);
  T21 = CALL1(1,CHKREF(Ylst),T22);
  T19 = CALL3(1,CHKREF(YmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
  T26 = BOXVAL(bodyF556);
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

FUNCODEDEF(fun_44) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_43,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1134_45) {
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

FUNCODEDEF(fun_46) {
  P return_;
  P x_1133F566;
  P x_1133F565;
  P x_1133F564;
  P bodyF563;
  P testF562;
  P x_1133F561;
  P x_1134F560;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1134_45,1);
  x_1134F560 = T1;
  FUNINIT(x_1134F560, 1,return_);
  x_1133F561 = FREEREF(0);
  testF562 = YPfalse;
  testF562 = BOXFAB(testF562);
  bodyF563 = YPfalse;
  bodyF563 = BOXFAB(bodyF563);
  T7 = CALL2(1,CHKREF(YisaQ),x_1133F561,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1133F561,CHKREF(lit_61),x_1134F560);
    x_1133F564 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1133F564,x_1134F560);
    BOXVAL(testF562) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1133F564);
    x_1133F565 = T12;
    BOXVAL(bodyF563) = x_1133F565;
    x_1133F566 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1133F566,x_1134F560);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1134F560,CHKREF(lit_6),x_1133F561);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T19 = BOXVAL(testF562);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
  T23 = BOXVAL(bodyF563);
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

FUNCODEDEF(fun_47) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_46,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1142_48) {
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

FUNCODEDEF(fun_x_1144_49) {
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

FUNCODEDEF(fun_x_1146_50) {
  P msg_,args_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T7 = CALL1(1,CHKREF(Ylst),CHKREF(lit_66));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,CHKREF(Ylst),T9);
  T6 = CALL3(1,CHKREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,CHKREF(Ylst),T6);
  T4 = CALL2(1,CHKREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,CHKREF(Ylst),T4);
  T12 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T13 = CALL1(1,CHKREF(Ylst),CHKREF(lit_66));
  T14 = CALL1(1,CHKREF(Ylst),CHKREF(lit_66));
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_63));
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

FUNCODEDEF(fun_51) {
  P return_;
  P x_1145F568;
  P x_1146F567;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1146_50,3);
  x_1146F567 = T1;
  FUNINIT(x_1146F567, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1145F568 = T3;
  T4 = CALL2(1,CHKREF(YisaQ),x_1145F568,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1145F568,x_1146F567);
  } else {
    T6 = CALL2(1,x_1146F567,CHKREF(lit_6),x_1145F568);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1143F574;
  P x_1143F573;
  P restF572;
  P xF571;
  P x_1143F570;
  P x_1144F569;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1144_49,1);
  x_1144F569 = T1;
  FUNINIT(x_1144F569, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1143F570 = T3;
  xF571 = YPfalse;
  xF571 = BOXFAB(xF571);
  restF572 = YPfalse;
  restF572 = BOXFAB(restF572);
  T8 = CALL2(1,CHKREF(YisaQ),x_1143F570,CHKREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1143F570,x_1144F569);
    BOXVAL(xF571) = T10;
    T11 = CALL1(1,CHKREF(Ytail),x_1143F570);
    x_1143F573 = T11;
    BOXVAL(restF572) = x_1143F573;
    x_1143F574 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1143F574,x_1144F569);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1144F569,CHKREF(lit_6),x_1143F570);
  }
  T16 = FUNFAB(fun_51,2,xF571,restF572);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1141F579;
  P x_1141F578;
  P restF577;
  P x_1141F576;
  P x_1142F575;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1142_48,1);
  x_1142F575 = T1;
  FUNINIT(x_1142F575, 1,return_);
  x_1141F576 = FREEREF(0);
  restF577 = YPfalse;
  restF577 = BOXFAB(restF577);
  T5 = CALL2(1,CHKREF(YisaQ),x_1141F576,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1141F576,CHKREF(lit_63),x_1142F575);
    x_1141F578 = T7;
    BOXVAL(restF577) = x_1141F578;
    x_1141F579 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1141F579,x_1142F575);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1142F575,CHKREF(lit_6),x_1141F576);
  }
  T12 = FUNFAB(fun_52,1,restF577);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_53,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1154_55) {
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

FUNCODEDEF(fun_x_1156_56) {
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

FUNCODEDEF(fun_x_1158_57) {
  P msg_,args_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T7 = CALL1(1,CHKREF(Ylst),CHKREF(lit_66));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,CHKREF(Ylst),T9);
  T6 = CALL3(1,CHKREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,CHKREF(Ylst),T6);
  T4 = CALL2(1,CHKREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,CHKREF(Ylst),T4);
  T12 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T13 = CALL1(1,CHKREF(Ylst),CHKREF(lit_66));
  T16 = CALL1(1,CHKREF(Ylst),CHKREF(lit_68));
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

FUNCODEDEF(fun_58) {
  P return_;
  P x_1157F581;
  P x_1158F580;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_57,3);
  x_1158F580 = T1;
  FUNINIT(x_1158F580, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1157F581 = T3;
  T4 = CALL2(1,CHKREF(YisaQ),x_1157F581,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1157F581,x_1158F580);
  } else {
    T6 = CALL2(1,x_1158F580,CHKREF(lit_6),x_1157F581);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1155F587;
  P x_1155F586;
  P restF585;
  P xF584;
  P x_1155F583;
  P x_1156F582;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1156_56,1);
  x_1156F582 = T1;
  FUNINIT(x_1156F582, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1155F583 = T3;
  xF584 = YPfalse;
  xF584 = BOXFAB(xF584);
  restF585 = YPfalse;
  restF585 = BOXFAB(restF585);
  T8 = CALL2(1,CHKREF(YisaQ),x_1155F583,CHKREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1155F583,x_1156F582);
    BOXVAL(xF584) = T10;
    T11 = CALL1(1,CHKREF(Ytail),x_1155F583);
    x_1155F586 = T11;
    BOXVAL(restF585) = x_1155F586;
    x_1155F587 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1155F587,x_1156F582);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1156F582,CHKREF(lit_6),x_1155F583);
  }
  T16 = FUNFAB(fun_58,2,xF584,restF585);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1153F592;
  P x_1153F591;
  P restF590;
  P x_1153F589;
  P x_1154F588;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1154_55,1);
  x_1154F588 = T1;
  FUNINIT(x_1154F588, 1,return_);
  x_1153F589 = FREEREF(0);
  restF590 = YPfalse;
  restF590 = BOXFAB(restF590);
  T5 = CALL2(1,CHKREF(YisaQ),x_1153F589,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1153F589,CHKREF(lit_68),x_1154F588);
    x_1153F591 = T7;
    BOXVAL(restF590) = x_1153F591;
    x_1153F592 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1153F592,x_1154F588);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1154F588,CHKREF(lit_6),x_1153F589);
  }
  T12 = FUNFAB(fun_59,1,restF590);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_60,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1164_62) {
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

FUNCODEDEF(fun_x_1166_63) {
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
  P return_;
  P x_1165F598;
  P x_1165F597;
  P bodyF596;
  P condF595;
  P x_1165F594;
  P x_1166F593;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1166_63,2);
  x_1166F593 = T1;
  FUNINIT(x_1166F593, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,CHKREF(Yhead),T4);
  x_1165F594 = T3;
  condF595 = YPfalse;
  condF595 = BOXFAB(condF595);
  bodyF596 = YPfalse;
  bodyF596 = BOXFAB(bodyF596);
  T9 = CALL2(1,CHKREF(YisaQ),x_1165F594,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1165F594,x_1166F593);
    BOXVAL(condF595) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1165F594);
    x_1165F597 = T12;
    BOXVAL(bodyF596) = x_1165F597;
    x_1165F598 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1165F598,x_1166F593);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1166F593,CHKREF(lit_6),x_1165F594);
  }
  T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T19 = BOXVAL(condF595);
  T18 = CALL1(1,CHKREF(Ylst),T19);
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
  T23 = BOXVAL(bodyF596);
  T21 = CALL3(1,CHKREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T26 = CALL1(1,CHKREF(Ylst),CHKREF(lit_72));
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

FUNCODEDEF(fun_65) {
  P return_;
  P x_1163F603;
  P x_1163F602;
  P casesF601;
  P x_1163F600;
  P x_1164F599;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1164_62,1);
  x_1164F599 = T1;
  FUNINIT(x_1164F599, 1,return_);
  x_1163F600 = FREEREF(0);
  casesF601 = YPfalse;
  casesF601 = BOXFAB(casesF601);
  T5 = CALL2(1,CHKREF(YisaQ),x_1163F600,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1163F600,CHKREF(lit_72),x_1164F599);
    x_1163F602 = T7;
    BOXVAL(casesF601) = x_1163F602;
    x_1163F603 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1163F603,x_1164F599);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1164F599,CHKREF(lit_6),x_1163F600);
  }
  T13 = BOXVAL(casesF601);
  T12 = CALL1(1,CHKREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_64,1,casesF601);
    T14 = with_exit(T15);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_65,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1174_67) {
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

FUNCODEDEF(fun_x_1176_68) {
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

FUNCODEDEF(fun_x_1178_69) {
  P msg_,args_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,CHKREF(Yhead),T3);
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_79),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(Ylst),CHKREF(lit_81));
  T2 = CALL1(1,CHKREF(Ylst),FREEREF(0));
  T3 = CALL1(1,CHKREF(Ylst),x_);
  T0 = CALLN(1,CHKREF(YmacrosYcat),4,T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1177F607;
  P valuesF606;
  P x_1177F605;
  P x_1178F604;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1178_69,2);
  x_1178F604 = T1;
  FUNINIT(x_1178F604, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  x_1177F605 = T3;
  valuesF606 = YPfalse;
  valuesF606 = BOXFAB(valuesF606);
  T6 = CALL2(1,CHKREF(YisaQ),x_1177F605,CHKREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF606) = x_1177F605;
    x_1177F607 = Ynil;
    T8 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1177F607,x_1178F604);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1178F604,CHKREF(lit_6),x_1177F605);
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
  T24 = CALL1(1,CHKREF(Ylst),CHKREF(lit_63));
  T26 = FUNFAB(fun_70,1,FREEREF(2));
  T27 = BOXVAL(valuesF606);
  T25 = CALL2(1,CHKREF(YmacrosYmap),T26,T27);
  T23 = CALL3(1,CHKREF(YmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,CHKREF(Ylst),T23);
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
  T31 = BOXVAL(FREEREF(4));
  T29 = CALL3(1,CHKREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,CHKREF(Ylst),T29);
  T34 = CALL1(1,CHKREF(Ylst),CHKREF(lit_76));
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

FUNCODEDEF(fun_72) {
  P return_;
  P bvF614;
  P x_1175F613;
  P x_1175F612;
  P bodyF611;
  P condF610;
  P x_1175F609;
  P x_1176F608;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_68,1);
  x_1176F608 = T1;
  FUNINIT(x_1176F608, 1,return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,CHKREF(Yhead),T4);
  x_1175F609 = T3;
  condF610 = YPfalse;
  condF610 = BOXFAB(condF610);
  bodyF611 = YPfalse;
  bodyF611 = BOXFAB(bodyF611);
  T9 = CALL2(1,CHKREF(YisaQ),x_1175F609,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1175F609,x_1176F608);
    BOXVAL(condF610) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1175F609);
    x_1175F612 = T12;
    BOXVAL(bodyF611) = x_1175F612;
    x_1175F613 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1175F613,x_1176F608);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1176F608,CHKREF(lit_6),x_1175F609);
  }
  T18 = BOXVAL(condF610);
  T17 = CALL2(1,CHKREF(YmacrosYEE),T18,YPtrue);
  if (T17 != YPfalse) {
    T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
    T21 = BOXVAL(bodyF611);
    T19 = CALL3(1,CHKREF(YmacrosYcat),T20,T21,Ynil);
    T16 = T19;
  } else {
    T23 = CALL0(1,CHKREF(YmacrosYgensym));
    bvF614 = T23;
    T25 = FUNFAB(fun_71,5,FREEREF(0),condF610,bvF614,FREEREF(1),bodyF611);
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

FUNCODEDEF(fun_73) {
  P return_;
  P x_1173F621;
  P x_1173F620;
  P x_1173F619;
  P casesF618;
  P valF617;
  P x_1173F616;
  P x_1174F615;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1174_67,1);
  x_1174F615 = T1;
  FUNINIT(x_1174F615, 1,return_);
  x_1173F616 = FREEREF(0);
  valF617 = YPfalse;
  valF617 = BOXFAB(valF617);
  casesF618 = YPfalse;
  casesF618 = BOXFAB(casesF618);
  T7 = CALL2(1,CHKREF(YisaQ),x_1173F616,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1173F616,CHKREF(lit_76),x_1174F615);
    x_1173F619 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1173F619,x_1174F615);
    BOXVAL(valF617) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1173F619);
    x_1173F620 = T12;
    BOXVAL(casesF618) = x_1173F620;
    x_1173F621 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1173F621,x_1174F615);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1174F615,CHKREF(lit_6),x_1173F616);
  }
  T18 = BOXVAL(casesF618);
  T17 = CALL1(1,CHKREF(YmacrosYemptyQ),T18);
  if (T17 != YPfalse) {
    T16 = YPfalse;
  } else {
    T20 = FUNFAB(fun_72,2,casesF618,valF617);
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

FUNCODEDEF(fun_74) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_73,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1182_75) {
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

FUNCODEDEF(fun_76) {
  P return_;
  P x_1181F630;
  P x_1181F629;
  P x_1181F628;
  P x_1181F627;
  P argsF626;
  P messageF625;
  P condF624;
  P x_1181F623;
  P x_1182F622;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1182_75,1);
  x_1182F622 = T1;
  FUNINIT(x_1182F622, 1,return_);
  x_1181F623 = FREEREF(0);
  condF624 = YPfalse;
  condF624 = BOXFAB(condF624);
  messageF625 = YPfalse;
  messageF625 = BOXFAB(messageF625);
  argsF626 = YPfalse;
  argsF626 = BOXFAB(argsF626);
  T9 = CALL2(1,CHKREF(YisaQ),x_1181F623,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1181F623,CHKREF(lit_83),x_1182F622);
    x_1181F627 = T11;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1181F627,x_1182F622);
    BOXVAL(condF624) = T13;
    T14 = CALL1(1,CHKREF(Ytail),x_1181F627);
    x_1181F628 = T14;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1181F628,x_1182F622);
    BOXVAL(messageF625) = T16;
    T17 = CALL1(1,CHKREF(Ytail),x_1181F628);
    x_1181F629 = T17;
    BOXVAL(argsF626) = x_1181F629;
    x_1181F630 = Ynil;
    T19 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1181F630,x_1182F622);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1182F622,CHKREF(lit_6),x_1181F623);
  }
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_58));
  T27 = BOXVAL(condF624);
  T26 = CALL1(1,CHKREF(Ylst),T27);
  T24 = CALL3(1,CHKREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_15));
  T32 = BOXVAL(messageF625);
  T31 = CALL1(1,CHKREF(Ylst),T32);
  T33 = BOXVAL(argsF626);
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

FUNCODEDEF(fun_77) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_76,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1190_78) {
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

FUNCODEDEF(fun_x_1192_79) {
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

FUNCODEDEF(fun_x_1194_80) {
  P msg_,args_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,CHKREF(Ylst),T3);
  T6 = CALL1(1,CHKREF(Ylst),CHKREF(lit_98));
  T7 = CALL1(1,CHKREF(Ylst),FREEREF(2));
  T8 = CALL1(1,CHKREF(Ylst),FREEREF(3));
  T5 = CALLN(1,CHKREF(YmacrosYcat),4,T6,T7,T8,Ynil);
  T4 = CALL1(1,CHKREF(Ylst),T5);
  T1 = CALL3(1,CHKREF(YmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P return_;
  P x_1193F637;
  P x_1193F636;
  P x_1193F635;
  P valF634;
  P keyF633;
  P x_1193F632;
  P x_1194F631;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1194_80,4);
  x_1194F631 = T1;
  FUNINIT(x_1194F631, 4,return_,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  x_1193F632 = T3;
  keyF633 = YPfalse;
  keyF633 = BOXFAB(keyF633);
  valF634 = YPfalse;
  valF634 = BOXFAB(valF634);
  T8 = CALL2(1,CHKREF(YisaQ),x_1193F632,CHKREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1193F632,CHKREF(lit_51),x_1194F631);
    x_1193F635 = T10;
    T12 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1193F635,x_1194F631);
    BOXVAL(keyF633) = T12;
    T13 = CALL1(1,CHKREF(Ytail),x_1193F635);
    x_1193F636 = T13;
    T15 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1193F636,x_1194F631);
    BOXVAL(valF634) = T15;
    T16 = CALL1(1,CHKREF(Ytail),x_1193F636);
    x_1193F637 = T16;
    T17 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1193F637,x_1194F631);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1194F631,CHKREF(lit_6),x_1193F632);
  }
  T22 = CALL1(1,CHKREF(Ylst),CHKREF(lit_51));
  T24 = BOXVAL(keyF633);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T26 = BOXVAL(valF634);
  T25 = CALL1(1,CHKREF(Ylst),T26);
  T21 = CALLN(1,CHKREF(YmacrosYcat),4,T22,T23,T25,Ynil);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_51));
  T32 = CALL1(1,CHKREF(Ylst),CHKREF(lit_99));
  T33 = CALL1(1,CHKREF(Ylst),FREEREF(1));
  T34 = CALL1(1,CHKREF(Ylst),FREEREF(2));
  T31 = CALLN(1,CHKREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T37 = CALL1(1,CHKREF(Ylst),CHKREF(lit_98));
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

FUNCODEDEF(fun_82) {
  P return_;
  P exp_tmpF645;
  P stateF644;
  P x_1191F643;
  P x_1191F642;
  P expF641;
  P varF640;
  P x_1191F639;
  P x_1192F638;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_79,1);
  x_1192F638 = T1;
  FUNINIT(x_1192F638, 1,return_);
  x_1191F639 = FREEREF(0);
  varF640 = YPfalse;
  varF640 = BOXFAB(varF640);
  expF641 = YPfalse;
  expF641 = BOXFAB(expF641);
  T7 = CALL2(1,CHKREF(YisaQ),x_1191F639,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1191F639,x_1192F638);
    BOXVAL(varF640) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1191F639);
    x_1191F642 = T10;
    T12 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1191F642,x_1192F638);
    BOXVAL(expF641) = T12;
    T13 = CALL1(1,CHKREF(Ytail),x_1191F642);
    x_1191F643 = T13;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1191F643,x_1192F638);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1192F638,CHKREF(lit_6),x_1191F639);
  }
  T17 = CALL0(1,CHKREF(YmacrosYgensym));
  stateF644 = T17;
  T19 = CALL0(1,CHKREF(YmacrosYgensym));
  exp_tmpF645 = T19;
  T21 = CALL1(1,CHKREF(Ytail),FREEREF(2));
  T24 = CALL1(1,CHKREF(Ylst),exp_tmpF645);
  T26 = BOXVAL(expF641);
  T25 = CALL1(1,CHKREF(Ylst),T26);
  T23 = CALL3(1,CHKREF(YmacrosYcat),T24,T25,Ynil);
  T22 = CALL2(1,CHKREF(YmacrosYpair),T23,FREEREF(3));
  T29 = CALL1(1,CHKREF(Ylst),stateF644);
  T32 = CALL1(1,CHKREF(Ylst),CHKREF(lit_95));
  T33 = CALL1(1,CHKREF(Ylst),exp_tmpF645);
  T31 = CALL3(1,CHKREF(YmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T28 = CALL3(1,CHKREF(YmacrosYcat),T29,T30,Ynil);
  T27 = CALL2(1,CHKREF(YmacrosYpair),T28,FREEREF(4));
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_96));
  T37 = CALL1(1,CHKREF(Ylst),exp_tmpF645);
  T38 = CALL1(1,CHKREF(Ylst),stateF644);
  T35 = CALLN(1,CHKREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL2(1,CHKREF(YmacrosYpair),T35,FREEREF(5));
  T41 = FUNFAB(fun_81,3,varF640,exp_tmpF645,stateF644);
  T40 = with_exit(T41);
  T39 = CALL2(1,CHKREF(YmacrosYpair),T40,FREEREF(6));
  T44 = CALL1(1,CHKREF(Ylst),CHKREF(lit_100));
  T45 = CALL1(1,CHKREF(Ylst),exp_tmpF645);
  T46 = CALL1(1,CHKREF(Ylst),stateF644);
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

FUNCODEDEF(fun_grok_83) {
  P clauses_,exps_,inits_,preds_,nows_,nexts_;
  P clauseF647;
  P loopF646;
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
    loopF646 = T3;
    T5 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
    T6 = CALL1(1,CHKREF(Ylst),exps_);
    T9 = CALL1(1,CHKREF(Ylst),CHKREF(lit_93));
    T10 = CALL1(1,CHKREF(Ylst),loopF646);
    T11 = CALL1(1,CHKREF(Ylst),inits_);
    T14 = CALL1(1,CHKREF(Ylst),CHKREF(lit_57));
    T17 = CALL1(1,CHKREF(Ylst),CHKREF(lit_63));
    T16 = CALL3(1,CHKREF(YmacrosYcat),T17,preds_,Ynil);
    T15 = CALL1(1,CHKREF(Ylst),T16);
    T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
    T21 = CALL1(1,CHKREF(Ylst),nows_);
    T22 = BOXVAL(FREEREF(0));
    T25 = CALL1(1,CHKREF(Ylst),loopF646);
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
    clauseF647 = T27;
    T29 = FUNFAB(fun_82,8,clauseF647,FREEREF(1),clauses_,exps_,inits_,preds_,nows_,nexts_);
    T28 = with_exit(T29);
    T26 = T28;
    T0 = T26;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P return_;
  P grokF657;
  P x_1189F656;
  P x_1189F655;
  P x_1189F654;
  P x_1189F653;
  P x_1189F652;
  P bodyF651;
  P clausesF650;
  P x_1189F649;
  P x_1190F648;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1190_78,1);
  x_1190F648 = T1;
  FUNINIT(x_1190F648, 1,return_);
  x_1189F649 = FREEREF(0);
  clausesF650 = YPfalse;
  clausesF650 = BOXFAB(clausesF650);
  bodyF651 = YPfalse;
  bodyF651 = BOXFAB(bodyF651);
  T7 = CALL2(1,CHKREF(YisaQ),x_1189F649,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1189F649,CHKREF(lit_85),x_1190F648);
    x_1189F652 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1189F652,x_1190F648);
    x_1189F653 = T11;
    BOXVAL(clausesF650) = x_1189F653;
    x_1189F654 = Ynil;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1189F654,x_1190F648);
    T12 = T13;
    T14 = CALL1(1,CHKREF(Ytail),x_1189F652);
    x_1189F655 = T14;
    BOXVAL(bodyF651) = x_1189F655;
    x_1189F656 = Ynil;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1189F656,x_1190F648);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1190F648,CHKREF(lit_6),x_1189F649);
  }
  T19 = FUNSHELL(1,fun_grok_83,2);
  grokF657 = T19;
  FUNINIT(grokF657, 2,bodyF651,grokF657);
  T21 = BOXVAL(clausesF650);
  T20 = CALLN(0,grokF657,6,T21,Ynil,Ynil,Ynil,Ynil,Ynil);
  T18 = T20;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_84,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1198_86) {
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

FUNCODEDEF(fun_87) {
  P return_;
  P x_1197F664;
  P x_1197F663;
  P x_1197F662;
  P expF661;
  P bindingF660;
  P x_1197F659;
  P x_1198F658;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1198_86,1);
  x_1198F658 = T1;
  FUNINIT(x_1198F658, 1,return_);
  x_1197F659 = FREEREF(0);
  bindingF660 = YPfalse;
  bindingF660 = BOXFAB(bindingF660);
  expF661 = YPfalse;
  expF661 = BOXFAB(expF661);
  T7 = CALL2(1,CHKREF(YisaQ),x_1197F659,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1197F659,CHKREF(lit_102),x_1198F658);
    x_1197F662 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1197F662,x_1198F658);
    BOXVAL(bindingF660) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1197F662);
    x_1197F663 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1197F663,x_1198F658);
    BOXVAL(expF661) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1197F663);
    x_1197F664 = T15;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1197F664,x_1198F658);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1198F658,CHKREF(lit_6),x_1197F659);
  }
  T19 = CALL1(1,CHKREF(Ylst),CHKREF(lit_103));
  T21 = BOXVAL(bindingF660);
  T20 = CALL1(1,CHKREF(Ylst),T21);
  T23 = BOXVAL(expF661);
  T22 = CALL1(1,CHKREF(Ylst),T23);
  T18 = CALLN(1,CHKREF(YmacrosYcat),4,T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_87,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1206_89) {
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

FUNCODEDEF(fun_x_1210_90) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_108),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P return_;
  P old_valueF676;
  P nameF675;
  P x_1209F674;
  P x_1209F673;
  P x_1209F672;
  P x_1209F671;
  P x_1209F670;
  P restF669;
  P valueF668;
  P varF667;
  P x_1209F666;
  P x_1210F665;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1210_90,2);
  x_1210F665 = T1;
  FUNINIT(x_1210F665, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  x_1209F666 = T3;
  varF667 = YPfalse;
  varF667 = BOXFAB(varF667);
  valueF668 = YPfalse;
  valueF668 = BOXFAB(valueF668);
  restF669 = YPfalse;
  restF669 = BOXFAB(restF669);
  T10 = CALL2(1,CHKREF(YisaQ),x_1209F666,CHKREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1209F666,x_1210F665);
    x_1209F670 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1209F670,x_1210F665);
    BOXVAL(varF667) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1209F670);
    x_1209F671 = T15;
    T17 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1209F671,x_1210F665);
    BOXVAL(valueF668) = T17;
    T18 = CALL1(1,CHKREF(Ytail),x_1209F671);
    x_1209F672 = T18;
    T19 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1209F672,x_1210F665);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,CHKREF(Ytail),x_1209F666);
    x_1209F673 = T20;
    BOXVAL(restF669) = x_1209F673;
    x_1209F674 = Ynil;
    T22 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1209F674,x_1210F665);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1210F665,CHKREF(lit_6),x_1209F666);
  }
  T26 = BOXVAL(varF667);
  T25 = CALL1(1,CHKREF(YmacrosYvar_name),T26);
  nameF675 = T25;
  T28 = CALL0(1,CHKREF(YmacrosYgensym));
  old_valueF676 = T28;
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T35 = CALL1(1,CHKREF(Ylst),old_valueF676);
  T36 = CALL1(1,CHKREF(Ylst),nameF675);
  T34 = CALL3(1,CHKREF(YmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,CHKREF(Ylst),T34);
  T32 = CALL2(1,CHKREF(YmacrosYcat),T33,Ynil);
  T31 = CALL1(1,CHKREF(Ylst),T32);
  T39 = CALL1(1,CHKREF(Ylst),CHKREF(lit_109));
  T42 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
  T45 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T46 = CALL1(1,CHKREF(Ylst),nameF675);
  T48 = BOXVAL(valueF668);
  T47 = CALL1(1,CHKREF(Ylst),T48);
  T44 = CALLN(1,CHKREF(YmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,CHKREF(Ylst),T44);
  T51 = CALL1(1,CHKREF(Ylst),CHKREF(lit_105));
  T54 = BOXVAL(restF669);
  T53 = CALL2(1,CHKREF(YmacrosYcat),T54,Ynil);
  T52 = CALL1(1,CHKREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALLN(1,CHKREF(YmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,CHKREF(Ylst),T50);
  T41 = CALLN(1,CHKREF(YmacrosYcat),4,T42,T43,T49,Ynil);
  T40 = CALL1(1,CHKREF(Ylst),T41);
  T58 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T59 = CALL1(1,CHKREF(Ylst),nameF675);
  T60 = CALL1(1,CHKREF(Ylst),old_valueF676);
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

FUNCODEDEF(fun_x_1208_92) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_91,2,FREEREF(1),FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P return_;
  P x_1207F678;
  P x_1208F677;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_92,3);
  x_1208F677 = T1;
  FUNINIT(x_1208F677, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1207F678 = T3;
  T4 = CALL2(1,CHKREF(YisaQ),x_1207F678,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1207F678,x_1208F677);
  } else {
    T6 = CALL2(1,x_1208F677,CHKREF(lit_6),x_1207F678);
  }
  T8 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,CHKREF(YmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P x_1205F685;
  P x_1205F684;
  P x_1205F683;
  P bodyF682;
  P bindingsF681;
  P x_1205F680;
  P x_1206F679;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_89,1);
  x_1206F679 = T1;
  FUNINIT(x_1206F679, 1,return_);
  x_1205F680 = FREEREF(0);
  bindingsF681 = YPfalse;
  bindingsF681 = BOXFAB(bindingsF681);
  bodyF682 = YPfalse;
  bodyF682 = BOXFAB(bodyF682);
  T7 = CALL2(1,CHKREF(YisaQ),x_1205F680,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1205F680,CHKREF(lit_105),x_1206F679);
    x_1205F683 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1205F683,x_1206F679);
    BOXVAL(bindingsF681) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1205F683);
    x_1205F684 = T12;
    BOXVAL(bodyF682) = x_1205F684;
    x_1205F685 = Ynil;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1205F685,x_1206F679);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1206F679,CHKREF(lit_6),x_1205F680);
  }
  T17 = FUNFAB(fun_93,2,bindingsF681,bodyF682);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1214_96) {
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

FUNCODEDEF(fun_97) {
  P return_;
  P vnamF695;
  P typF694;
  P namF693;
  P x_1213F692;
  P x_1213F691;
  P x_1213F690;
  P valueF689;
  P varF688;
  P x_1213F687;
  P x_1214F686;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1214_96,1);
  x_1214F686 = T1;
  FUNINIT(x_1214F686, 1,return_);
  x_1213F687 = FREEREF(0);
  varF688 = YPfalse;
  varF688 = BOXFAB(varF688);
  valueF689 = YPfalse;
  valueF689 = BOXFAB(valueF689);
  T7 = CALL2(1,CHKREF(YisaQ),x_1213F687,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1213F687,CHKREF(lit_111),x_1214F686);
    x_1213F690 = T9;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1213F690,x_1214F686);
    BOXVAL(varF688) = T11;
    T12 = CALL1(1,CHKREF(Ytail),x_1213F690);
    x_1213F691 = T12;
    T14 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1213F691,x_1214F686);
    BOXVAL(valueF689) = T14;
    T15 = CALL1(1,CHKREF(Ytail),x_1213F691);
    x_1213F692 = T15;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1213F692,x_1214F686);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1214F686,CHKREF(lit_6),x_1213F687);
  }
  T20 = BOXVAL(varF688);
  T19 = CALL1(1,CHKREF(YmacrosYvar_name),T20);
  namF693 = T19;
  T23 = BOXVAL(varF688);
  T22 = CALL1(1,CHKREF(YmacrosYvar_type),T23);
  typF694 = T22;
  T25 = CALL3(1,CHKREF(YmacrosYmake_sym),CHKREF(lit_112),namF693,CHKREF(lit_113));
  vnamF695 = T25;
  T27 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
  T30 = CALL1(1,CHKREF(Ylst),CHKREF(lit_103));
  T31 = CALL1(1,CHKREF(Ylst),vnamF695);
  T33 = BOXVAL(valueF689);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T29 = CALLN(1,CHKREF(YmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,CHKREF(Ylst),T29);
  T36 = CALL1(1,CHKREF(Ylst),CHKREF(lit_114));
  T37 = CALL1(1,CHKREF(Ylst),namF693);
  T40 = CALL1(1,CHKREF(Ylst),CHKREF(lit_115));
  T41 = CALL1(1,CHKREF(Ylst),typF694);
  T39 = CALL3(1,CHKREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,CHKREF(Ylst),T39);
  T42 = CALL1(1,CHKREF(Ylst),vnamF695);
  T35 = CALLN(1,CHKREF(YmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,CHKREF(Ylst),T35);
  T45 = CALL1(1,CHKREF(Ylst),CHKREF(lit_114));
  T47 = CALL1(1,CHKREF(YmacrosYmake_setter_name),namF693);
  T46 = CALL1(1,CHKREF(Ylst),T47);
  T52 = CALL1(1,CHKREF(Ylst),CHKREF(lit_116));
  T53 = CALL1(1,CHKREF(Ylst),typF694);
  T51 = CALL3(1,CHKREF(YmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,CHKREF(Ylst),T51);
  T49 = CALL2(1,CHKREF(YmacrosYcat),T50,Ynil);
  T48 = CALL1(1,CHKREF(Ylst),T49);
  T56 = CALL1(1,CHKREF(Ylst),CHKREF(lit_28));
  T57 = CALL1(1,CHKREF(Ylst),vnamF695);
  T58 = CALL1(1,CHKREF(Ylst),CHKREF(lit_116));
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

FUNCODEDEF(fun_98) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1218_99) {
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

FUNCODEDEF(fun_100) {
  P return_;
  P x_1217F700;
  P x_1217F699;
  P namesF698;
  P x_1217F697;
  P x_1218F696;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1218_99,1);
  x_1218F696 = T1;
  FUNINIT(x_1218F696, 1,return_);
  x_1217F697 = FREEREF(0);
  namesF698 = YPfalse;
  namesF698 = BOXFAB(namesF698);
  T5 = CALL2(1,CHKREF(YisaQ),x_1217F697,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1217F697,CHKREF(lit_118),x_1218F696);
    x_1217F699 = T7;
    BOXVAL(namesF698) = x_1217F699;
    x_1217F700 = Ynil;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1217F700,x_1218F696);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1218F696,CHKREF(lit_6),x_1217F697);
  }
  T13 = BOXVAL(namesF698);
  T12 = CALL1(1,CHKREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,CHKREF(Ylst),CHKREF(lit_59));
    T18 = CALL1(1,CHKREF(Ylst),CHKREF(lit_61));
    T19 = CALL1(1,CHKREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF698);
    T21 = CALL1(1,CHKREF(Yhead),T22);
    T20 = CALL1(1,CHKREF(Ylst),T21);
    T17 = CALLN(1,CHKREF(YmacrosYcat),4,T18,T19,T20,Ynil);
    T16 = CALL1(1,CHKREF(Ylst),T17);
    T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_119));
    T28 = BOXVAL(namesF698);
    T27 = CALL1(1,CHKREF(Yhead),T28);
    T26 = CALL1(1,CHKREF(Ylst),T27);
    T24 = CALL3(1,CHKREF(YmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,CHKREF(Ylst),T24);
    T31 = CALL1(1,CHKREF(Ylst),CHKREF(lit_118));
    T33 = BOXVAL(namesF698);
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

FUNCODEDEF(fun_101) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_100,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YmacrosY___main_0___() {
  P T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112;
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
  fun_x_1074_0 = YPmet(FUNCODEREF(fun_x_1074_0),CHKREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"next-method"),T3);
  lit_17 = YPPsym((P)"x-1078");
  lit_18 = YPPsym((P)"apply-next-method");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1078_3 = YPmet(FUNCODEREF(fun_x_1078_3),CHKREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"apply-next-method"),T7);
  lit_20 = YPPsym((P)"x-1082");
  lit_21 = YPPsym((P)"apply");
  T10 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1082_6 = YPmet(FUNCODEREF(fun_x_1082_6),CHKREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"apply"),T11);
  lit_22 = YPPsym((P)"x-1086");
  lit_23 = YPPsym((P)"collecting");
  lit_24 = YPPsym((P)"collector-");
  lit_25 = YPPsym((P)"collected");
  T14 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1086_9 = YPmet(FUNCODEREF(fun_x_1086_9),CHKREF(lit_22),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T15 = fun_11;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collecting"),T15);
  lit_26 = YPPsym((P)"x-1090");
  lit_27 = YPPsym((P)"collect");
  lit_28 = YPPsym((P)"set");
  lit_29 = YPPsym((P)"pair");
  T18 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1090_12 = YPmet(FUNCODEREF(fun_x_1090_12),CHKREF(lit_26),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T19 = fun_14;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collect"),T19);
  lit_30 = YPPsym((P)"x-1094");
  lit_31 = YPPsym((P)"rev!");
  T22 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),CHKREF(lit_30),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T23 = fun_17;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collected"),T23);
  lit_32 = YPPsym((P)"lift-place-subforms");
  lit_33 = YPPsym((P)"place");
  lit_34 = YPPsym((P)"munch");
  lit_35 = YPPsym((P)"subforms");
  T25 = YPsig(YPPlist(1,CHKREF(lit_35)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_munch_18 = YPmet(FUNCODEREF(fun_munch_18),CHKREF(lit_34),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,CHKREF(lit_33)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  YmacrosYlift_place_subforms = YPmet(FUNCODEREF(YmacrosYlift_place_subforms),CHKREF(lit_32),T24,ENVNUL,PNUL,YPfalse);
  T26 = YmacrosYlift_place_subforms;
  YmacrosYlift_place_subforms = T26;
  lit_36 = YPPsym((P)"x-1100");
  lit_37 = YPPsym((P)"inc");
  lit_38 = YPPsym((P)"x-1102");
  lit_39 = YPPsym((P)"+");
  T31 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1100_20 = YPmet(FUNCODEREF(fun_x_1100_20),CHKREF(lit_36),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1102_21 = YPmet(FUNCODEREF(fun_x_1102_21),CHKREF(lit_38),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T32 = fun_24;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"inc"),T32);
  lit_40 = YPPsym((P)"x-1108");
  lit_41 = YPPsym((P)"dec");
  lit_42 = YPPsym((P)"x-1110");
  lit_43 = YPPsym((P)"-");
  T37 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),CHKREF(lit_40),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1110_26 = YPmet(FUNCODEREF(fun_x_1110_26),CHKREF(lit_42),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T38 = fun_29;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dec"),T38);
  lit_44 = YPPsym((P)"x-1114");
  lit_45 = YPPsym((P)"pushf");
  lit_46 = YPPsym((P)"push");
  T41 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1114_30 = YPmet(FUNCODEREF(fun_x_1114_30),CHKREF(lit_44),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T42 = fun_32;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"pushf"),T42);
  lit_47 = YPPsym((P)"x-1118");
  lit_48 = YPPsym((P)"swapf");
  T45 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1118_33 = YPmet(FUNCODEREF(fun_x_1118_33),CHKREF(lit_47),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T46 = fun_35;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"swapf"),T46);
  lit_49 = YPPsym((P)"x-1122");
  lit_50 = YPPsym((P)"popf");
  lit_51 = YPPsym((P)"tup");
  lit_52 = YPPsym((P)"pop");
  T49 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1122_36 = YPmet(FUNCODEREF(fun_x_1122_36),CHKREF(lit_49),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T50 = fun_38;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"popf"),T50);
  lit_53 = YPPsym((P)"x-1126");
  lit_54 = YPPsym((P)"opf");
  lit_55 = YPPsym((P)"_");
  T53 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1126_39 = YPmet(FUNCODEREF(fun_x_1126_39),CHKREF(lit_53),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T54 = fun_41;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"opf"),T54);
  lit_56 = YPPsym((P)"x-1130");
  lit_57 = YPPsym((P)"unless");
  lit_58 = YPPsym((P)"not");
  lit_59 = YPPsym((P)"seq");
  T57 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1130_42 = YPmet(FUNCODEREF(fun_x_1130_42),CHKREF(lit_56),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T58 = fun_44;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"unless"),T58);
  lit_60 = YPPsym((P)"x-1134");
  lit_61 = YPPsym((P)"when");
  T61 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1134_45 = YPmet(FUNCODEREF(fun_x_1134_45),CHKREF(lit_60),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T62 = fun_47;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"when"),T62);
  lit_62 = YPPsym((P)"x-1142");
  lit_63 = YPPsym((P)"or");
  lit_64 = YPPsym((P)"x-1144");
  lit_65 = YPPsym((P)"x-1146");
  lit_66 = YPPsym((P)"tmp");
  T69 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1142_48 = YPmet(FUNCODEREF(fun_x_1142_48),CHKREF(lit_62),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1144_49 = YPmet(FUNCODEREF(fun_x_1144_49),CHKREF(lit_64),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1146_50 = YPmet(FUNCODEREF(fun_x_1146_50),CHKREF(lit_65),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T70 = fun_54;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"or"),T70);
  lit_67 = YPPsym((P)"x-1154");
  lit_68 = YPPsym((P)"and");
  lit_69 = YPPsym((P)"x-1156");
  lit_70 = YPPsym((P)"x-1158");
  T77 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1154_55 = YPmet(FUNCODEREF(fun_x_1154_55),CHKREF(lit_67),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1156_56 = YPmet(FUNCODEREF(fun_x_1156_56),CHKREF(lit_69),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1158_57 = YPmet(FUNCODEREF(fun_x_1158_57),CHKREF(lit_70),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T78 = fun_61;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"and"),T78);
  lit_71 = YPPsym((P)"x-1164");
  lit_72 = YPPsym((P)"case");
  lit_73 = YPPsym((P)"x-1166");
  lit_74 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  T83 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1164_62 = YPmet(FUNCODEREF(fun_x_1164_62),CHKREF(lit_71),T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1166_63 = YPmet(FUNCODEREF(fun_x_1166_63),CHKREF(lit_73),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T84 = fun_66;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case"),T84);
  lit_75 = YPPsym((P)"x-1174");
  lit_76 = YPPsym((P)"select");
  lit_77 = YPPsym((P)"x-1176");
  lit_78 = YPPsym((P)"x-1178");
  lit_79 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_80 = YPPsym((P)"x");
  lit_81 = YPPsym((P)"==");
  T92 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1174_67 = YPmet(FUNCODEREF(fun_x_1174_67),CHKREF(lit_75),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1176_68 = YPmet(FUNCODEREF(fun_x_1176_68),CHKREF(lit_77),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1178_69 = YPmet(FUNCODEREF(fun_x_1178_69),CHKREF(lit_78),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T93 = fun_74;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"select"),T93);
  lit_82 = YPPsym((P)"x-1182");
  lit_83 = YPPsym((P)"assert");
  T96 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1182_75 = YPmet(FUNCODEREF(fun_x_1182_75),CHKREF(lit_82),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T97 = fun_77;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"assert"),T97);
  lit_84 = YPPsym((P)"x-1190");
  lit_85 = YPPsym((P)"for");
  lit_86 = YPPsym((P)"grok");
  lit_87 = YPPsym((P)"clauses");
  lit_88 = YPPsym((P)"exps");
  lit_89 = YPPsym((P)"inits");
  lit_90 = YPPsym((P)"preds");
  lit_91 = YPPsym((P)"nows");
  lit_92 = YPPsym((P)"nexts");
  lit_93 = YPPsym((P)"rep");
  lit_94 = YPPsym((P)"x-1192");
  lit_95 = YPPsym((P)"ini-state");
  lit_96 = YPPsym((P)"fin-state?");
  lit_97 = YPPsym((P)"x-1194");
  lit_98 = YPPsym((P)"now-elt");
  lit_99 = YPPsym((P)"now-key");
  lit_100 = YPPsym((P)"nxt-state");
  T105 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1190_78 = YPmet(FUNCODEREF(fun_x_1190_78),CHKREF(lit_84),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1192_79 = YPmet(FUNCODEREF(fun_x_1192_79),CHKREF(lit_94),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1194_80 = YPmet(FUNCODEREF(fun_x_1194_80),CHKREF(lit_97),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(6,CHKREF(lit_87),CHKREF(lit_88),CHKREF(lit_89),CHKREF(lit_90),CHKREF(lit_91),CHKREF(lit_92)),YPPlist(6,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)6),CHKREF(YLanyG),Ynil);
  fun_grok_83 = YPmet(FUNCODEREF(fun_grok_83),CHKREF(lit_86),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T106 = fun_85;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"for"),T106);
  lit_101 = YPPsym((P)"x-1198");
  lit_102 = YPPsym((P)"ddv");
  lit_103 = YPPsym((P)"dv");
  T109 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1198_86 = YPmet(FUNCODEREF(fun_x_1198_86),CHKREF(lit_101),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T110 = fun_88;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"ddv"),T110);
  lit_104 = YPPsym((P)"x-1206");
  lit_105 = YPPsym((P)"dlet");
  lit_106 = YPPsym((P)"x-1208");
  lit_107 = YPPsym((P)"x-1210");
  lit_108 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_109 = YPPsym((P)"fin");
  T117 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1206_89 = YPmet(FUNCODEREF(fun_x_1206_89),CHKREF(lit_104),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1210_90 = YPmet(FUNCODEREF(fun_x_1210_90),CHKREF(lit_107),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1208_92 = YPmet(FUNCODEREF(fun_x_1208_92),CHKREF(lit_106),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T118 = fun_95;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dlet"),T118);
  lit_110 = YPPsym((P)"x-1214");
  lit_111 = YPPsym((P)"def-fun-var");
  lit_112 = YPsb((P)"*");
  lit_113 = YPsb((P)"*");
  lit_114 = YPPsym((P)"dm");
  lit_115 = YPPsym((P)"=>");
  lit_116 = YPPsym((P)"z");
  T121 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1214_96 = YPmet(FUNCODEREF(fun_x_1214_96),CHKREF(lit_110),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T122 = fun_98;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"def-fun-var"),T122);
  lit_117 = YPPsym((P)"x-1218");
  lit_118 = YPPsym((P)"need-implementation");
  lit_119 = YPPsym((P)"export");
  T125 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1218_99 = YPmet(FUNCODEREF(fun_x_1218_99),CHKREF(lit_117),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,CHKREF(lit_0)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T126 = fun_101;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"need-implementation"),T126);
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
  T127 = YPfalse;
  return T127;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%lb", &module_info_boot, "%lb"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"object-class", &module_info_boot, "object-class"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"nul", &module_info_boot, "nul"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"@+", &module_info_boot, "@+"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"%cb", &module_info_boot, "%cb"},
  {"%f*", &module_info_boot, "%f*"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"%i!", &module_info_boot, "%i!"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"%i<", &module_info_boot, "%i<"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"dss", &module_info_boot, "dss"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%slen", &module_info_boot, "%slen"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"%f=", &module_info_boot, "%f="},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa", &module_info_boot, "isa"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"tail", &module_info_boot, "tail"},
  {"%su", &module_info_boot, "%su"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"%ib", &module_info_boot, "%ib"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"<col>", &module_info_boot, "<col>"},
  {"%i^", &module_info_boot, "%i^"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"use", &module_info_boot, "use"},
  {"%vec", &module_info_boot, "%vec"},
  {"%str", &module_info_boot, "%str"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"type-error", &module_info_boot, "type-error"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"loc", &module_info_boot, "loc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c<", &module_info_boot, "%c<"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"ds", &module_info_boot, "ds"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%untag", &module_info_boot, "%untag"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%isa", &module_info_boot, "%isa"},
  {"%i?", &module_info_boot, "%i?"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%it/", &module_info_boot, "%it/"},
  {"%lu", &module_info_boot, "%lu"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"try", &module_info_boot, "try"},
  {"dv", &module_info_boot, "dv"},
  {"@<", &module_info_boot, "@<"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"export", &module_info_boot, "export"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"%ft", &module_info_boot, "%ft"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%slot", &module_info_boot, "%slot"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"set", &module_info_boot, "set"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"%cu", &module_info_boot, "%cu"},
  {"<log>", &module_info_boot, "<log>"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%f-", &module_info_boot, "%f-"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"@==", &module_info_boot, "@=="},
  {"%symbols", &module_info_boot, "%symbols"},
  {"not", &module_info_boot, "not"},
  {"@olen", &module_info_boot, "@olen"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"seq", &module_info_boot, "seq"},
  {"<any>", &module_info_boot, "<any>"},
  {"type-class", &module_info_boot, "type-class"},
  {"%iu", &module_info_boot, "%iu"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"rep", &module_info_boot, "rep"},
  {"error", &module_info_boot, "error"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%fu", &module_info_boot, "%fu"},
  {"%i=", &module_info_boot, "%i="},
  {"%pair", &module_info_boot, "%pair"},
  {"%i&", &module_info_boot, "%i&"},
  {"fun", &module_info_boot, "fun"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"bound?", &module_info_boot, "bound?"},
  {"quote", &module_info_boot, "quote"},
  {"ct", &module_info_boot, "ct"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"unexec", &module_info_boot, "unexec"},
  {"%fb", &module_info_boot, "%fb"},
  {"%f+", &module_info_boot, "%f+"},
  {"nil", &module_info_boot, "nil"},
  {"dg", &module_info_boot, "dg"},
  {"lst", &module_info_boot, "lst"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"dp", &module_info_boot, "dp"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%f<", &module_info_boot, "%f<"},
  {"if", &module_info_boot, "if"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"%snul", &module_info_boot, "%snul"},
  {"fin", &module_info_boot, "fin"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"isa?", &module_info_boot, "isa?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"type-object", &module_info_boot, "type-object"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"<class>", &module_info_boot, "<class>"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"mif", &module_info_boot, "mif"},
  {"%i+", &module_info_boot, "%i+"},
  {"let", &module_info_boot, "let"},
  {"%c=", &module_info_boot, "%c="},
  {"<type>", &module_info_boot, "<type>"},
  {"%i*", &module_info_boot, "%i*"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%selt", &module_info_boot, "%selt"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%raw", &module_info_boot, "%raw"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"lab", &module_info_boot, "lab"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"%velt", &module_info_boot, "%velt"},
  {"%bb", &module_info_boot, "%bb"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"%f/", &module_info_boot, "%f/"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%i-", &module_info_boot, "%i-"},
  {"df", &module_info_boot, "df"},
  {"<str>", &module_info_boot, "<str>"},
  {"%sb", &module_info_boot, "%sb"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"%im", &module_info_boot, "%im"},
  {"dc", &module_info_boot, "dc"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"dm", &module_info_boot, "dm"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"<met>", &module_info_boot, "<met>"},
  {"head-setter", &module_info_boot, "head-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"collecting", NULL},
  {"apply-next-method", NULL},
  {"make-sym", &YmacrosYmake_sym},
  {"def-fun-var", NULL},
  {"var-name", &YmacrosYvar_name},
  {"match-empty-list", &YmacrosYmatch_empty_list},
  {"==", &YmacrosYEE},
  {"map", &YmacrosYmap},
  {"opf", NULL},
  {"case", NULL},
  {"match-sublist", &YmacrosYmatch_sublist},
  {"inc", NULL},
  {"swapf", NULL},
  {"select", NULL},
  {"empty?", &YmacrosYemptyQ},
  {"---main-0---", NULL},
  {"gensym", &YmacrosYgensym},
  {"match-atom", &YmacrosYmatch_atom},
  {"pair", &YmacrosYpair},
  {"assert", NULL},
  {"match-unquote", &YmacrosYmatch_unquote},
  {"ddv", NULL},
  {"lift-place-subforms", &YmacrosYlift_place_subforms},
  {"need-implementation", NULL},
  {"or", NULL},
  {"collect", NULL},
  {"dec", NULL},
  {"apply", NULL},
  {"unless", NULL},
  {"and", NULL},
  {"napply", &YmacrosYnapply},
  {"tup", &YmacrosYtup},
  {"popf", NULL},
  {"cat", &YmacrosYcat},
  {"pushf", NULL},
  {"make-setter-name", &YmacrosYmake_setter_name},
  {"dlet", NULL},
  {"next-method", NULL},
  {"for", NULL},
  {"var-type", &YmacrosYvar_type},
  {"collected", NULL},
  {"when", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"collecting", "collecting"},
  {"apply-next-method", "apply-next-method"},
  {"make-sym", "make-sym"},
  {"def-fun-var", "def-fun-var"},
  {"var-name", "var-name"},
  {"==", "=="},
  {"map", "map"},
  {"opf", "opf"},
  {"match-sublist", "match-sublist"},
  {"inc", "inc"},
  {"swapf", "swapf"},
  {"select", "select"},
  {"empty?", "empty?"},
  {"gensym", "gensym"},
  {"match-atom", "match-atom"},
  {"pair", "pair"},
  {"assert", "assert"},
  {"match-unquote", "match-unquote"},
  {"ddv", "ddv"},
  {"need-implementation", "need-implementation"},
  {"or", "or"},
  {"collect", "collect"},
  {"dec", "dec"},
  {"apply", "apply"},
  {"error", "error"},
  {"unless", "unless"},
  {"match-empty-list", "match-empty-list"},
  {"lst", "lst"},
  {"and", "and"},
  {"napply", "napply"},
  {"tup", "tup"},
  {"popf", "popf"},
  {"cat", "cat"},
  {"pushf", "pushf"},
  {"make-setter-name", "make-setter-name"},
  {"dlet", "dlet"},
  {"next-method", "next-method"},
  {"case", "case"},
  {"for", "for"},
  {"var-type", "var-type"},
  {"collected", "collected"},
  {"when", "when"},
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
