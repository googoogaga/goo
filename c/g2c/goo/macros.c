/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

DEF(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
DEF(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLintG,"boot","<int>");
EXT(YLnumG,"boot","<num>");
EXT(Yfun_value,"boot","fun-value");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YLchrG,"boot","<chr>");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(YPslot,"boot","%slot");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(Ysig_names,"boot","sig-names");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YDmin_int,"boot","$min-int");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLlogG,"boot","<log>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YLslotG,"boot","<slot>");
EXT(YsubtypeQ,"boot","subtype?");
DEF(YmacrosYpair,"macros","pair");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ynot,"boot","not");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YLanyG,"boot","<any>");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YLunionG,"boot","<union>");
EXT(Ylst,"boot","lst");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YmacrosYcat,"macros","cat");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
DEF(YmacrosYvar_name,"macros","var-name");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(Yunexec,"boot","unexec");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YPsnul,"boot","%snul");
EXT(Yerror,"boot","error");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YPvnul,"boot","%vnul");
EXT(Yadd_slot,"boot","add-slot");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YLoptsG,"boot","<opts>");
DEF(YmacrosYnapply,"macros","napply");
DEF(YmacrosYtup,"macros","tup");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
DEF(YmacrosYgensym,"macros","gensym");
EXT(Ytype_object,"boot","type-object");
EXT(YLclassG,"boot","<class>");
EXT(YLtypeG,"boot","<type>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(YPsymbols,"boot","%symbols");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yobject_slots,"boot","object-slots");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
DEF(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YLstrG,"boot","<str>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(Yhead_setter,"boot","head-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(Yobject_class,"boot","object-class");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfunG,"boot","<fun>");
EXT(YLlstG,"boot","<lst>");
DEF(YmacrosYmake_sym,"macros","make-sym");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YLtupG,"boot","<tup>");
EXT(Ytype_error,"boot","type-error");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YLseqG,"boot","<seq>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ytail,"boot","tail");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(YmacrosYEE,"macros","==");
EXT(Yclass_slots,"boot","class-slots");
EXT(YLcolG,"boot","<col>");
EXT(Yfab_class,"boot","fab-class");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLsigG,"boot","<sig>");
EXT(Ynil,"boot","nil");
EXT(YLlocG,"boot","<loc>");
EXT(YPPmacro,"boot","%%macro");
EXT(Ytype_elts,"boot","type-elts");
EXT(YisaQ,"boot","isa?");
EXT(Ymet_appQ,"boot","met-app?");
DEF(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_52);
DEFLIT(lit_111);
DEFLIT(lit_16);
DEFLIT(lit_76);
DEFLIT(lit_46);
DEFLIT(lit_44);
DEFLIT(lit_93);
DEFLIT(lit_101);
DEFLIT(lit_29);
DEFLIT(lit_67);
DEFLIT(lit_113);
DEFLIT(lit_74);
DEFLIT(lit_35);
DEFLIT(lit_88);
DEFLIT(lit_78);
DEFLIT(lit_69);
DEFLIT(lit_4);
DEFLIT(lit_56);
DEFLIT(lit_107);
DEFLIT(lit_21);
DEFLIT(lit_12);
DEFLIT(lit_5);
DEFLIT(lit_80);
DEFLIT(lit_42);
DEFLIT(lit_49);
DEFLIT(lit_108);
DEFLIT(lit_34);
DEFLIT(lit_45);
DEFLIT(lit_61);
DEFLIT(lit_1);
DEFLIT(lit_11);
DEFLIT(lit_28);
DEFLIT(lit_13);
DEFLIT(lit_104);
DEFLIT(lit_87);
DEFLIT(lit_68);
DEFLIT(lit_66);
DEFLIT(lit_20);
DEFLIT(lit_81);
DEFLIT(lit_58);
DEFLIT(lit_17);
DEFLIT(lit_41);
DEFLIT(lit_53);
DEFLIT(lit_3);
DEFLIT(lit_37);
DEFLIT(lit_18);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_55);
DEFLIT(lit_33);
DEFLIT(lit_86);
DEFLIT(lit_115);
DEFLIT(lit_82);
DEFLIT(lit_47);
DEFLIT(lit_91);
DEFLIT(lit_71);
DEFLIT(lit_10);
DEFLIT(lit_75);
DEFLIT(lit_117);
DEFLIT(lit_118);
DEFLIT(lit_73);
DEFLIT(lit_79);
DEFLIT(lit_77);
DEFLIT(lit_110);
DEFLIT(lit_98);
DEFLIT(lit_65);
DEFLIT(lit_102);
DEFLIT(lit_96);
DEFLIT(lit_6);
DEFLIT(lit_105);
DEFLIT(lit_27);
DEFLIT(lit_22);
DEFLIT(lit_60);
DEFLIT(lit_62);
DEFLIT(lit_94);
DEFLIT(lit_70);
DEFLIT(lit_26);
DEFLIT(lit_32);
DEFLIT(lit_25);
DEFLIT(lit_114);
DEFLIT(lit_119);
DEFLIT(lit_90);
DEFLIT(lit_2);
DEFLIT(lit_9);
DEFLIT(lit_54);
DEFLIT(lit_15);
DEFLIT(lit_84);
DEFLIT(lit_48);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_106);
DEFLIT(lit_36);
DEFLIT(lit_116);
DEFLIT(lit_8);
DEFLIT(lit_31);
DEFLIT(lit_57);
DEFLIT(lit_112);
DEFLIT(lit_85);
DEFLIT(lit_92);
DEFLIT(lit_95);
DEFLIT(lit_0);
DEFLIT(lit_89);
DEFLIT(lit_99);
DEFLIT(lit_72);
DEFLIT(lit_43);
DEFLIT(lit_64);
DEFLIT(lit_40);
DEFLIT(lit_103);
DEFLIT(lit_14);
DEFLIT(lit_100);
DEFLIT(lit_23);
DEFLIT(lit_30);
DEFLIT(lit_109);
DEFLIT(lit_63);
DEFLIT(lit_97);
DEFLIT(lit_83);
DEFLIT(lit_38);
DEFLIT(lit_7);
DEFLIT(lit_39);
DEFLIT(lit_59);

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
extern P YmacrosY___main_1___ ();

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
  P x_1073F422;
  P x_1073F421;
  P argsF420;
  P x_1073F419;
  P x_1074F418;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1074_0,1);
  x_1074F418 = T1;
  FUNINIT(x_1074F418, 1,return_);
  x_1073F419 = FREEREF(0);
  argsF420 = YPfalse;
  argsF420 = BOXFAB(argsF420);
  T5 = CALL2(1,VARREF(YisaQ),x_1073F419,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1073F419,LITREF(lit_5),x_1074F418);
    x_1073F421 = T7;
    BOXVAL(argsF420) = x_1073F421;
    x_1073F422 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1073F422,x_1074F418);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1074F418,LITREF(lit_6),x_1073F419);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T19 = CALL2(1,VARREF(YmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T33 = CALL3(1,VARREF(YmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = BOXVAL(argsF420);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T40 = CALL1(1,VARREF(Ylst),Ynil);
  T38 = CALL3(1,VARREF(YmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T26 = CALLN(1,VARREF(YmacrosYcat),6,T27,T28,T32,T36,T37,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T42 = CALL3(1,VARREF(YmacrosYcat),T43,T44,Ynil);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T22 = CALLN(1,VARREF(YmacrosYcat),5,T23,T24,T25,T41,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T11 = CALLN(1,VARREF(YmacrosYcat),4,T12,T13,T21,Ynil);
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
  P x_1077F427;
  P x_1077F426;
  P argsF425;
  P x_1077F424;
  P x_1078F423;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1078_3,1);
  x_1078F423 = T1;
  FUNINIT(x_1078F423, 1,return_);
  x_1077F424 = FREEREF(0);
  argsF425 = YPfalse;
  argsF425 = BOXFAB(argsF425);
  T5 = CALL2(1,VARREF(YisaQ),x_1077F424,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1077F424,LITREF(lit_18),x_1078F423);
    x_1077F426 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1077F426,x_1078F423);
    BOXVAL(argsF425) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1077F426);
    x_1077F427 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1077F427,x_1078F423);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1078F423,LITREF(lit_6),x_1077F424);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T21 = CALL2(1,VARREF(YmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T18 = CALL3(1,VARREF(YmacrosYcat),T19,T20,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL2(1,VARREF(YmacrosYcat),T17,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T31 = CALL3(1,VARREF(YmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = CALL3(1,VARREF(YmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T39 = BOXVAL(argsF425);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T28 = CALLN(1,VARREF(YmacrosYcat),5,T29,T30,T34,T38,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T41 = CALL3(1,VARREF(YmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T24 = CALLN(1,VARREF(YmacrosYcat),5,T25,T26,T27,T40,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T13 = CALLN(1,VARREF(YmacrosYcat),4,T14,T15,T23,Ynil);
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
  P x_1081F434;
  P x_1081F433;
  P x_1081F432;
  P argsF431;
  P fF430;
  P x_1081F429;
  P x_1082F428;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1082_6,1);
  x_1082F428 = T1;
  FUNINIT(x_1082F428, 1,return_);
  x_1081F429 = FREEREF(0);
  fF430 = YPfalse;
  fF430 = BOXFAB(fF430);
  argsF431 = YPfalse;
  argsF431 = BOXFAB(argsF431);
  T7 = CALL2(1,VARREF(YisaQ),x_1081F429,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1081F429,LITREF(lit_21),x_1082F428);
    x_1081F432 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1081F432,x_1082F428);
    BOXVAL(fF430) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1081F432);
    x_1081F433 = T12;
    BOXVAL(argsF431) = x_1081F433;
    x_1081F434 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1081F434,x_1082F428);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1082F428,LITREF(lit_6),x_1081F429);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF430);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF431);
  T16 = CALLN(1,VARREF(YmacrosYcat),5,T17,T18,T20,T21,Ynil);
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
  P nameF442;
  P x_1085F441;
  P x_1085F440;
  P x_1085F439;
  P x_1085F438;
  P bodyF437;
  P x_1085F436;
  P x_1086F435;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1086_9,1);
  x_1086F435 = T1;
  FUNINIT(x_1086F435, 1,return_);
  x_1085F436 = FREEREF(0);
  bodyF437 = YPfalse;
  bodyF437 = BOXFAB(bodyF437);
  T5 = CALL2(1,VARREF(YisaQ),x_1085F436,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1085F436,LITREF(lit_23),x_1086F435);
    x_1085F438 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1085F438,x_1086F435);
    x_1085F439 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1085F439,x_1086F435);
    T11 = CALL1(1,VARREF(Ytail),x_1085F438);
    x_1085F440 = T11;
    BOXVAL(bodyF437) = x_1085F440;
    x_1085F441 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1085F441,x_1086F435);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1086F435,LITREF(lit_6),x_1085F436);
  }
  nameF442 = LITREF(lit_24);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T22 = CALL1(1,VARREF(Ylst),nameF442);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T26 = CALL1(1,VARREF(Ylst),Ynil);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T27 = BOXVAL(bodyF437);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T31 = CALL1(1,VARREF(Ylst),nameF442);
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T16 = CALLN(1,VARREF(YmacrosYcat),5,T17,T18,T27,T28,Ynil);
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
  P nameF448;
  P x_1089F447;
  P x_1089F446;
  P valueF445;
  P x_1089F444;
  P x_1090F443;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1090_12,1);
  x_1090F443 = T1;
  FUNINIT(x_1090F443, 1,return_);
  x_1089F444 = FREEREF(0);
  valueF445 = YPfalse;
  valueF445 = BOXFAB(valueF445);
  T5 = CALL2(1,VARREF(YisaQ),x_1089F444,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1089F444,LITREF(lit_27),x_1090F443);
    x_1089F446 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1089F446,x_1090F443);
    BOXVAL(valueF445) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1089F446);
    x_1089F447 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1089F447,x_1090F443);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1090F443,LITREF(lit_6),x_1089F444);
  }
  nameF448 = LITREF(lit_24);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T16 = CALL1(1,VARREF(Ylst),nameF448);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T21 = BOXVAL(valueF445);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),nameF448);
  T18 = CALLN(1,VARREF(YmacrosYcat),4,T19,T20,T22,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T14 = CALLN(1,VARREF(YmacrosYcat),4,T15,T16,T17,Ynil);
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
  P x_1093F453;
  P x_1093F452;
  P nameF451;
  P x_1093F450;
  P x_1094F449;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F449 = T1;
  FUNINIT(x_1094F449, 1,return_);
  x_1093F450 = FREEREF(0);
  nameF451 = YPfalse;
  nameF451 = BOXFAB(nameF451);
  T5 = CALL2(1,VARREF(YisaQ),x_1093F450,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1093F450,LITREF(lit_25),x_1094F449);
    x_1093F452 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1093F452,x_1094F449);
    BOXVAL(nameF451) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1093F452);
    x_1093F453 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1093F453,x_1094F449);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1094F449,LITREF(lit_6),x_1093F450);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T16 = BOXVAL(nameF451);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YmacrosYcat),T14,T15,Ynil);
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
  P gF457;
  P g_argsF456;
  P g_declsF455;
  P tup3F454;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(subforms_, 0);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),subforms_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YmacrosYtup),Ynil,Ynil);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),subforms_);
    T4 = CALL1(1,FREEREF(0),T5);
    tup3F454 = T4;
    T7 = CALL2(1,VARREF(YmacrosYelt),tup3F454,YPint((P)0));
    g_declsF455 = T7;
    T9 = CALL2(1,VARREF(YmacrosYelt),tup3F454,YPint((P)1));
    g_argsF456 = T9;
    T11 = CALL0(1,VARREF(YmacrosYgensym));
    gF457 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF457);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YmacrosYpair),T14,g_declsF455);
    T18 = CALL2(1,VARREF(YmacrosYpair),gF457,g_argsF456);
    T12 = CALL2(1,VARREF(YmacrosYtup),T13,T18);
    T10 = T12;
    T8 = T10;
    T6 = T8;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YmacrosYlift_place_subforms) {
  P place_;
  P g_argsF461;
  P g_declsF460;
  P tup4F459;
  P munchF458;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_18,1);
  munchF458 = T1;
  FUNINIT(munchF458, 1,munchF458);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YmacrosYtup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF458,T7);
    tup4F459 = T6;
    T9 = CALL2(1,VARREF(YmacrosYelt),tup4F459,YPint((P)0));
    g_declsF460 = T9;
    T11 = CALL2(1,VARREF(YmacrosYelt),tup4F459,YPint((P)1));
    g_argsF461 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YmacrosYpair),T14,g_argsF461);
    T12 = CALL2(1,VARREF(YmacrosYtup),g_declsF460,T13);
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
  P x_1101F465;
  P amountF464;
  P x_1101F463;
  P x_1102F462;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_21,1);
  x_1102F462 = T1;
  FUNINIT(x_1102F462, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1101F463 = T3;
  amountF464 = YPfalse;
  amountF464 = BOXFAB(amountF464);
  T6 = CALL2(1,VARREF(YisaQ),x_1101F463,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1101F463,x_1102F462);
    BOXVAL(amountF464) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1101F463);
    x_1101F465 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1101F465,x_1102F462);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1102F462,LITREF(lit_6),x_1101F463);
  }
  T12 = BOXVAL(amountF464);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF476;
  P g_placeF475;
  P g_declsF474;
  P tup6F473;
  P x_1099F472;
  P x_1099F471;
  P x_1099F470;
  P amountF469;
  P placeF468;
  P x_1099F467;
  P x_1100F466;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1100_20,1);
  x_1100F466 = T1;
  FUNINIT(x_1100F466, 1,return_);
  x_1099F467 = FREEREF(0);
  placeF468 = YPfalse;
  placeF468 = BOXFAB(placeF468);
  amountF469 = YPfalse;
  amountF469 = BOXFAB(amountF469);
  T7 = CALL2(1,VARREF(YisaQ),x_1099F467,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1099F467,LITREF(lit_37),x_1100F466);
    x_1099F470 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1099F470,x_1100F466);
    BOXVAL(placeF468) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1099F470);
    x_1099F471 = T12;
    BOXVAL(amountF469) = x_1099F471;
    x_1099F472 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1099F472,x_1100F466);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1100F466,LITREF(lit_6),x_1099F467);
  }
  T18 = BOXVAL(placeF468);
  T17 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T18);
  tup6F473 = T17;
  T20 = CALL2(1,VARREF(YmacrosYelt),tup6F473,YPint((P)0));
  g_declsF474 = T20;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup6F473,YPint((P)1));
  g_placeF475 = T22;
  T25 = FUNFAB(fun_22,1,amountF469);
  T24 = with_exit(T25);
  amountF476 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YmacrosYcat),g_declsF474,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF475);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T37 = CALL1(1,VARREF(Ylst),g_placeF475);
  T38 = CALL1(1,VARREF(Ylst),amountF476);
  T35 = CALLN(1,VARREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALLN(1,VARREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALLN(1,VARREF(YmacrosYcat),4,T27,T28,T30,Ynil);
  T23 = T26;
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
  P x_1109F480;
  P amountF479;
  P x_1109F478;
  P x_1110F477;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1110_26,1);
  x_1110F477 = T1;
  FUNINIT(x_1110F477, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1109F478 = T3;
  amountF479 = YPfalse;
  amountF479 = BOXFAB(amountF479);
  T6 = CALL2(1,VARREF(YisaQ),x_1109F478,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1109F478,x_1110F477);
    BOXVAL(amountF479) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1109F478);
    x_1109F480 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1109F480,x_1110F477);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1110F477,LITREF(lit_6),x_1109F478);
  }
  T12 = BOXVAL(amountF479);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P amountF491;
  P g_placeF490;
  P g_declsF489;
  P tup8F488;
  P x_1107F487;
  P x_1107F486;
  P x_1107F485;
  P amountF484;
  P placeF483;
  P x_1107F482;
  P x_1108F481;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F481 = T1;
  FUNINIT(x_1108F481, 1,return_);
  x_1107F482 = FREEREF(0);
  placeF483 = YPfalse;
  placeF483 = BOXFAB(placeF483);
  amountF484 = YPfalse;
  amountF484 = BOXFAB(amountF484);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F482,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1107F482,LITREF(lit_41),x_1108F481);
    x_1107F485 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1107F485,x_1108F481);
    BOXVAL(placeF483) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F485);
    x_1107F486 = T12;
    BOXVAL(amountF484) = x_1107F486;
    x_1107F487 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1107F487,x_1108F481);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1108F481,LITREF(lit_6),x_1107F482);
  }
  T18 = BOXVAL(placeF483);
  T17 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T18);
  tup8F488 = T17;
  T20 = CALL2(1,VARREF(YmacrosYelt),tup8F488,YPint((P)0));
  g_declsF489 = T20;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup8F488,YPint((P)1));
  g_placeF490 = T22;
  T25 = FUNFAB(fun_27,1,amountF484);
  T24 = with_exit(T25);
  amountF491 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YmacrosYcat),g_declsF489,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF490);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T37 = CALL1(1,VARREF(Ylst),g_placeF490);
  T38 = CALL1(1,VARREF(Ylst),amountF491);
  T35 = CALLN(1,VARREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALLN(1,VARREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALLN(1,VARREF(YmacrosYcat),4,T27,T28,T30,Ynil);
  T23 = T26;
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
  P g_placeF501;
  P g_declsF500;
  P tup10F499;
  P x_1113F498;
  P x_1113F497;
  P x_1113F496;
  P valueF495;
  P placeF494;
  P x_1113F493;
  P x_1114F492;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1114_30,1);
  x_1114F492 = T1;
  FUNINIT(x_1114F492, 1,return_);
  x_1113F493 = FREEREF(0);
  placeF494 = YPfalse;
  placeF494 = BOXFAB(placeF494);
  valueF495 = YPfalse;
  valueF495 = BOXFAB(valueF495);
  T7 = CALL2(1,VARREF(YisaQ),x_1113F493,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1113F493,LITREF(lit_45),x_1114F492);
    x_1113F496 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1113F496,x_1114F492);
    BOXVAL(placeF494) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1113F496);
    x_1113F497 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1113F497,x_1114F492);
    BOXVAL(valueF495) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1113F497);
    x_1113F498 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1113F498,x_1114F492);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1114F492,LITREF(lit_6),x_1113F493);
  }
  T20 = BOXVAL(placeF494);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup10F499 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup10F499,YPint((P)0));
  g_declsF500 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup10F499,YPint((P)1));
  g_placeF501 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YmacrosYcat),g_declsF500,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T32 = CALL1(1,VARREF(Ylst),g_placeF501);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_46));
  T36 = CALL1(1,VARREF(Ylst),g_placeF501);
  T38 = BOXVAL(valueF495);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALLN(1,VARREF(YmacrosYcat),4,T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T30 = CALLN(1,VARREF(YmacrosYcat),4,T31,T32,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALLN(1,VARREF(YmacrosYcat),4,T26,T27,T29,Ynil);
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
  P tmpF515;
  P yg_placeF514;
  P yg_declsF513;
  P tup14F512;
  P xg_placeF511;
  P xg_declsF510;
  P tup13F509;
  P x_1117F508;
  P x_1117F507;
  P x_1117F506;
  P yF505;
  P xF504;
  P x_1117F503;
  P x_1118F502;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1118_33,1);
  x_1118F502 = T1;
  FUNINIT(x_1118F502, 1,return_);
  x_1117F503 = FREEREF(0);
  xF504 = YPfalse;
  xF504 = BOXFAB(xF504);
  yF505 = YPfalse;
  yF505 = BOXFAB(yF505);
  T7 = CALL2(1,VARREF(YisaQ),x_1117F503,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1117F503,LITREF(lit_48),x_1118F502);
    x_1117F506 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1117F506,x_1118F502);
    BOXVAL(xF504) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1117F506);
    x_1117F507 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1117F507,x_1118F502);
    BOXVAL(yF505) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1117F507);
    x_1117F508 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1117F508,x_1118F502);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1118F502,LITREF(lit_6),x_1117F503);
  }
  T20 = BOXVAL(xF504);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup13F509 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup13F509,YPint((P)0));
  xg_declsF510 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup13F509,YPint((P)1));
  xg_placeF511 = T24;
  T27 = BOXVAL(yF505);
  T26 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T27);
  tup14F512 = T26;
  T29 = CALL2(1,VARREF(YmacrosYelt),tup14F512,YPint((P)0));
  yg_declsF513 = T29;
  T31 = CALL2(1,VARREF(YmacrosYelt),tup14F512,YPint((P)1));
  yg_placeF514 = T31;
  T33 = CALL0(1,VARREF(YmacrosYgensym));
  tmpF515 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF515);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF511);
  T39 = CALL3(1,VARREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALLN(1,VARREF(YmacrosYcat),4,xg_declsF510,yg_declsF513,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF511);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF514);
  T43 = CALLN(1,VARREF(YmacrosYcat),4,T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF514);
  T51 = CALL1(1,VARREF(Ylst),tmpF515);
  T48 = CALLN(1,VARREF(YmacrosYcat),4,T49,T50,T51,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T34 = CALLN(1,VARREF(YmacrosYcat),5,T35,T36,T42,T47,Ynil);
  T32 = T34;
  T30 = T32;
  T28 = T30;
  T25 = T28;
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
  P valF525;
  P new_colF524;
  P g_placeF523;
  P g_declsF522;
  P tup16F521;
  P x_1121F520;
  P x_1121F519;
  P placeF518;
  P x_1121F517;
  P x_1122F516;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1122_36,1);
  x_1122F516 = T1;
  FUNINIT(x_1122F516, 1,return_);
  x_1121F517 = FREEREF(0);
  placeF518 = YPfalse;
  placeF518 = BOXFAB(placeF518);
  T5 = CALL2(1,VARREF(YisaQ),x_1121F517,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1121F517,LITREF(lit_50),x_1122F516);
    x_1121F519 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1121F519,x_1122F516);
    BOXVAL(placeF518) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1121F519);
    x_1121F520 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1121F520,x_1122F516);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1122F516,LITREF(lit_6),x_1121F517);
  }
  T15 = BOXVAL(placeF518);
  T14 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T15);
  tup16F521 = T14;
  T17 = CALL2(1,VARREF(YmacrosYelt),tup16F521,YPint((P)0));
  g_declsF522 = T17;
  T19 = CALL2(1,VARREF(YmacrosYelt),tup16F521,YPint((P)1));
  g_placeF523 = T19;
  T21 = CALL0(1,VARREF(YmacrosYgensym));
  new_colF524 = T21;
  T23 = CALL0(1,VARREF(YmacrosYgensym));
  valF525 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T33 = CALL1(1,VARREF(Ylst),new_colF524);
  T34 = CALL1(1,VARREF(Ylst),valF525);
  T31 = CALLN(1,VARREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T38 = CALL1(1,VARREF(Ylst),g_placeF523);
  T36 = CALL3(1,VARREF(YmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YmacrosYcat),g_declsF522,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T42 = CALL1(1,VARREF(Ylst),g_placeF523);
  T43 = CALL1(1,VARREF(Ylst),new_colF524);
  T40 = CALLN(1,VARREF(YmacrosYcat),4,T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF525);
  T24 = CALLN(1,VARREF(YmacrosYcat),5,T25,T26,T39,T44,Ynil);
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
  P g_placeF535;
  P g_declsF534;
  P tup18F533;
  P x_1125F532;
  P x_1125F531;
  P x_1125F530;
  P callF529;
  P placeF528;
  P x_1125F527;
  P x_1126F526;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1126_39,1);
  x_1126F526 = T1;
  FUNINIT(x_1126F526, 1,return_);
  x_1125F527 = FREEREF(0);
  placeF528 = YPfalse;
  placeF528 = BOXFAB(placeF528);
  callF529 = YPfalse;
  callF529 = BOXFAB(callF529);
  T7 = CALL2(1,VARREF(YisaQ),x_1125F527,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1125F527,LITREF(lit_54),x_1126F526);
    x_1125F530 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1125F530,x_1126F526);
    BOXVAL(placeF528) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1125F530);
    x_1125F531 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1125F531,x_1126F526);
    BOXVAL(callF529) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1125F531);
    x_1125F532 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1125F532,x_1126F526);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1126F526,LITREF(lit_6),x_1125F527);
  }
  T20 = BOXVAL(placeF528);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup18F533 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup18F533,YPint((P)0));
  g_declsF534 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup18F533,YPint((P)1));
  g_placeF535 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T32 = CALL1(1,VARREF(Ylst),g_placeF535);
  T30 = CALL3(1,VARREF(YmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YmacrosYcat),g_declsF534,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T36 = CALL1(1,VARREF(Ylst),g_placeF535);
  T38 = BOXVAL(callF529);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALLN(1,VARREF(YmacrosYcat),4,T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T25 = CALLN(1,VARREF(YmacrosYcat),4,T26,T27,T33,Ynil);
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
  P x_1129F542;
  P x_1129F541;
  P x_1129F540;
  P bodyF539;
  P testF538;
  P x_1129F537;
  P x_1130F536;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1130_42,1);
  x_1130F536 = T1;
  FUNINIT(x_1130F536, 1,return_);
  x_1129F537 = FREEREF(0);
  testF538 = YPfalse;
  testF538 = BOXFAB(testF538);
  bodyF539 = YPfalse;
  bodyF539 = BOXFAB(bodyF539);
  T7 = CALL2(1,VARREF(YisaQ),x_1129F537,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1129F537,LITREF(lit_57),x_1130F536);
    x_1129F540 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1129F540,x_1130F536);
    BOXVAL(testF538) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1129F540);
    x_1129F541 = T12;
    BOXVAL(bodyF539) = x_1129F541;
    x_1129F542 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1129F542,x_1130F536);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1130F536,LITREF(lit_6),x_1129F537);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T22 = BOXVAL(testF538);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T26 = BOXVAL(bodyF539);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T16 = CALLN(1,VARREF(YmacrosYcat),4,T17,T18,T23,Ynil);
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
  P x_1133F549;
  P x_1133F548;
  P x_1133F547;
  P bodyF546;
  P testF545;
  P x_1133F544;
  P x_1134F543;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1134_45,1);
  x_1134F543 = T1;
  FUNINIT(x_1134F543, 1,return_);
  x_1133F544 = FREEREF(0);
  testF545 = YPfalse;
  testF545 = BOXFAB(testF545);
  bodyF546 = YPfalse;
  bodyF546 = BOXFAB(bodyF546);
  T7 = CALL2(1,VARREF(YisaQ),x_1133F544,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1133F544,LITREF(lit_61),x_1134F543);
    x_1133F547 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1133F547,x_1134F543);
    BOXVAL(testF545) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1133F547);
    x_1133F548 = T12;
    BOXVAL(bodyF546) = x_1133F548;
    x_1133F549 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1133F549,x_1134F543);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1134F543,LITREF(lit_6),x_1133F544);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF545);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T23 = BOXVAL(bodyF546);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALLN(1,VARREF(YmacrosYcat),4,T17,T18,T20,Ynil);
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
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T18 = BOXVAL(FREEREF(2));
  T16 = CALL3(1,VARREF(YmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALLN(1,VARREF(YmacrosYcat),5,T12,T13,T14,T15,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALLN(1,VARREF(YmacrosYcat),4,T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P x_1145F551;
  P x_1146F550;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1146_50,3);
  x_1146F550 = T1;
  FUNINIT(x_1146F550, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1145F551 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1145F551,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1145F551,x_1146F550);
  } else {
    T6 = CALL2(1,x_1146F550,LITREF(lit_6),x_1145F551);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1143F557;
  P x_1143F556;
  P restF555;
  P xF554;
  P x_1143F553;
  P x_1144F552;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1144_49,1);
  x_1144F552 = T1;
  FUNINIT(x_1144F552, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1143F553 = T3;
  xF554 = YPfalse;
  xF554 = BOXFAB(xF554);
  restF555 = YPfalse;
  restF555 = BOXFAB(restF555);
  T8 = CALL2(1,VARREF(YisaQ),x_1143F553,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1143F553,x_1144F552);
    BOXVAL(xF554) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1143F553);
    x_1143F556 = T11;
    BOXVAL(restF555) = x_1143F556;
    x_1143F557 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1143F557,x_1144F552);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1144F552,LITREF(lit_6),x_1143F553);
  }
  T16 = FUNFAB(fun_51,2,xF554,restF555);
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
  P x_1141F562;
  P x_1141F561;
  P restF560;
  P x_1141F559;
  P x_1142F558;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1142_48,1);
  x_1142F558 = T1;
  FUNINIT(x_1142F558, 1,return_);
  x_1141F559 = FREEREF(0);
  restF560 = YPfalse;
  restF560 = BOXFAB(restF560);
  T5 = CALL2(1,VARREF(YisaQ),x_1141F559,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1141F559,LITREF(lit_63),x_1142F558);
    x_1141F561 = T7;
    BOXVAL(restF560) = x_1141F561;
    x_1141F562 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1141F562,x_1142F558);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1142F558,LITREF(lit_6),x_1141F559);
  }
  T12 = FUNFAB(fun_52,1,restF560);
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
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T17 = BOXVAL(FREEREF(2));
  T15 = CALL3(1,VARREF(YmacrosYcat),T16,T17,Ynil);
  T14 = CALL1(1,VARREF(Ylst),T15);
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T11 = CALLN(1,VARREF(YmacrosYcat),5,T12,T13,T14,T18,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALLN(1,VARREF(YmacrosYcat),4,T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1157F564;
  P x_1158F563;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_57,3);
  x_1158F563 = T1;
  FUNINIT(x_1158F563, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1157F564 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1157F564,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1157F564,x_1158F563);
  } else {
    T6 = CALL2(1,x_1158F563,LITREF(lit_6),x_1157F564);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1155F570;
  P x_1155F569;
  P restF568;
  P xF567;
  P x_1155F566;
  P x_1156F565;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1156_56,1);
  x_1156F565 = T1;
  FUNINIT(x_1156F565, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1155F566 = T3;
  xF567 = YPfalse;
  xF567 = BOXFAB(xF567);
  restF568 = YPfalse;
  restF568 = BOXFAB(restF568);
  T8 = CALL2(1,VARREF(YisaQ),x_1155F566,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1155F566,x_1156F565);
    BOXVAL(xF567) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1155F566);
    x_1155F569 = T11;
    BOXVAL(restF568) = x_1155F569;
    x_1155F570 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1155F570,x_1156F565);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1156F565,LITREF(lit_6),x_1155F566);
  }
  T16 = FUNFAB(fun_58,2,xF567,restF568);
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
  P x_1153F575;
  P x_1153F574;
  P restF573;
  P x_1153F572;
  P x_1154F571;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1154_55,1);
  x_1154F571 = T1;
  FUNINIT(x_1154F571, 1,return_);
  x_1153F572 = FREEREF(0);
  restF573 = YPfalse;
  restF573 = BOXFAB(restF573);
  T5 = CALL2(1,VARREF(YisaQ),x_1153F572,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1153F572,LITREF(lit_68),x_1154F571);
    x_1153F574 = T7;
    BOXVAL(restF573) = x_1153F574;
    x_1153F575 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1153F575,x_1154F571);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1154F571,LITREF(lit_6),x_1153F572);
  }
  T12 = FUNFAB(fun_59,1,restF573);
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
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_74),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1165F581;
  P x_1165F580;
  P bodyF579;
  P condF578;
  P x_1165F577;
  P x_1166F576;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1166_63,2);
  x_1166F576 = T1;
  FUNINIT(x_1166F576, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1165F577 = T3;
  condF578 = YPfalse;
  condF578 = BOXFAB(condF578);
  bodyF579 = YPfalse;
  bodyF579 = BOXFAB(bodyF579);
  T9 = CALL2(1,VARREF(YisaQ),x_1165F577,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1165F577,x_1166F576);
    BOXVAL(condF578) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1165F577);
    x_1165F580 = T12;
    BOXVAL(bodyF579) = x_1165F580;
    x_1165F581 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1165F581,x_1166F576);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1166F576,LITREF(lit_6),x_1165F577);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF578);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T23 = BOXVAL(bodyF579);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL1(1,VARREF(Ytail),T28);
  T25 = CALL3(1,VARREF(YmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T16 = CALLN(1,VARREF(YmacrosYcat),5,T17,T18,T20,T24,Ynil);
  T7 = T16;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1163F586;
  P x_1163F585;
  P casesF584;
  P x_1163F583;
  P x_1164F582;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1164_62,1);
  x_1164F582 = T1;
  FUNINIT(x_1164F582, 1,return_);
  x_1163F583 = FREEREF(0);
  casesF584 = YPfalse;
  casesF584 = BOXFAB(casesF584);
  T5 = CALL2(1,VARREF(YisaQ),x_1163F583,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1163F583,LITREF(lit_72),x_1164F582);
    x_1163F585 = T7;
    BOXVAL(casesF584) = x_1163F585;
    x_1163F586 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1163F586,x_1164F582);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1164F582,LITREF(lit_6),x_1163F583);
  }
  T13 = BOXVAL(casesF584);
  T12 = CALL1(1,VARREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_64,1,casesF584);
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
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_79),T2);
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
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T3 = CALL1(1,VARREF(Ylst),x_);
  T0 = CALLN(1,VARREF(YmacrosYcat),4,T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1177F590;
  P valuesF589;
  P x_1177F588;
  P x_1178F587;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1178_69,2);
  x_1178F587 = T1;
  FUNINIT(x_1178F587, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  x_1177F588 = T3;
  valuesF589 = YPfalse;
  valuesF589 = BOXFAB(valuesF589);
  T6 = CALL2(1,VARREF(YisaQ),x_1177F588,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF589) = x_1177F588;
    x_1177F590 = Ynil;
    T8 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1177F590,x_1178F587);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1178F587,LITREF(lit_6),x_1177F588);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T16 = CALL1(1,VARREF(Ylst),FREEREF(2));
  T18 = BOXVAL(FREEREF(3));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YmacrosYcat),T16,T17,Ynil);
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL2(1,VARREF(YmacrosYcat),T14,Ynil);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T26 = FUNFAB(fun_70,1,FREEREF(2));
  T27 = BOXVAL(valuesF589);
  T25 = CALL2(1,VARREF(YmacrosYmap),T26,T27);
  T23 = CALL3(1,VARREF(YmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T31 = BOXVAL(FREEREF(4));
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T35 = CALL1(1,VARREF(Ylst),FREEREF(2));
  T37 = BOXVAL(FREEREF(0));
  T36 = CALL1(1,VARREF(Ytail),T37);
  T33 = CALLN(1,VARREF(YmacrosYcat),4,T34,T35,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T20 = CALLN(1,VARREF(YmacrosYcat),5,T21,T22,T28,T32,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T10 = CALLN(1,VARREF(YmacrosYcat),4,T11,T12,T19,Ynil);
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P return_;
  P bvF597;
  P x_1175F596;
  P x_1175F595;
  P bodyF594;
  P condF593;
  P x_1175F592;
  P x_1176F591;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_68,1);
  x_1176F591 = T1;
  FUNINIT(x_1176F591, 1,return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1175F592 = T3;
  condF593 = YPfalse;
  condF593 = BOXFAB(condF593);
  bodyF594 = YPfalse;
  bodyF594 = BOXFAB(bodyF594);
  T9 = CALL2(1,VARREF(YisaQ),x_1175F592,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1175F592,x_1176F591);
    BOXVAL(condF593) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1175F592);
    x_1175F595 = T12;
    BOXVAL(bodyF594) = x_1175F595;
    x_1175F596 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1175F596,x_1176F591);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1176F591,LITREF(lit_6),x_1175F592);
  }
  T18 = BOXVAL(condF593);
  T17 = CALL2(1,VARREF(YmacrosYEE),T18,YPtrue);
  if (T17 != YPfalse) {
    T20 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T21 = BOXVAL(bodyF594);
    T19 = CALL3(1,VARREF(YmacrosYcat),T20,T21,Ynil);
    T16 = T19;
  } else {
    T23 = CALL0(1,VARREF(YmacrosYgensym));
    bvF597 = T23;
    T25 = FUNFAB(fun_71,5,FREEREF(0),condF593,bvF597,FREEREF(1),bodyF594);
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
  P x_1173F604;
  P x_1173F603;
  P x_1173F602;
  P casesF601;
  P valF600;
  P x_1173F599;
  P x_1174F598;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1174_67,1);
  x_1174F598 = T1;
  FUNINIT(x_1174F598, 1,return_);
  x_1173F599 = FREEREF(0);
  valF600 = YPfalse;
  valF600 = BOXFAB(valF600);
  casesF601 = YPfalse;
  casesF601 = BOXFAB(casesF601);
  T7 = CALL2(1,VARREF(YisaQ),x_1173F599,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1173F599,LITREF(lit_76),x_1174F598);
    x_1173F602 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1173F602,x_1174F598);
    BOXVAL(valF600) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1173F602);
    x_1173F603 = T12;
    BOXVAL(casesF601) = x_1173F603;
    x_1173F604 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1173F604,x_1174F598);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1174F598,LITREF(lit_6),x_1173F599);
  }
  T18 = BOXVAL(casesF601);
  T17 = CALL1(1,VARREF(YmacrosYemptyQ),T18);
  if (T17 != YPfalse) {
    T16 = YPfalse;
  } else {
    T20 = FUNFAB(fun_72,2,casesF601,valF600);
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
  P x_1181F613;
  P x_1181F612;
  P x_1181F611;
  P x_1181F610;
  P argsF609;
  P messageF608;
  P condF607;
  P x_1181F606;
  P x_1182F605;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1182_75,1);
  x_1182F605 = T1;
  FUNINIT(x_1182F605, 1,return_);
  x_1181F606 = FREEREF(0);
  condF607 = YPfalse;
  condF607 = BOXFAB(condF607);
  messageF608 = YPfalse;
  messageF608 = BOXFAB(messageF608);
  argsF609 = YPfalse;
  argsF609 = BOXFAB(argsF609);
  T9 = CALL2(1,VARREF(YisaQ),x_1181F606,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1181F606,LITREF(lit_83),x_1182F605);
    x_1181F610 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1181F610,x_1182F605);
    BOXVAL(condF607) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1181F610);
    x_1181F611 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1181F611,x_1182F605);
    BOXVAL(messageF608) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1181F611);
    x_1181F612 = T17;
    BOXVAL(argsF609) = x_1181F612;
    x_1181F613 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1181F613,x_1182F605);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1182F605,LITREF(lit_6),x_1181F606);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T27 = BOXVAL(condF607);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF608);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF609);
  T29 = CALLN(1,VARREF(YmacrosYcat),4,T30,T31,T33,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T21 = CALLN(1,VARREF(YmacrosYcat),4,T22,T23,T28,Ynil);
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
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(2));
  T8 = CALL1(1,VARREF(Ylst),FREEREF(3));
  T5 = CALLN(1,VARREF(YmacrosYcat),4,T6,T7,T8,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P return_;
  P x_1193F620;
  P x_1193F619;
  P x_1193F618;
  P valF617;
  P keyF616;
  P x_1193F615;
  P x_1194F614;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1194_80,4);
  x_1194F614 = T1;
  FUNINIT(x_1194F614, 4,return_,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  x_1193F615 = T3;
  keyF616 = YPfalse;
  keyF616 = BOXFAB(keyF616);
  valF617 = YPfalse;
  valF617 = BOXFAB(valF617);
  T8 = CALL2(1,VARREF(YisaQ),x_1193F615,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1193F615,LITREF(lit_51),x_1194F614);
    x_1193F618 = T10;
    T12 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1193F618,x_1194F614);
    BOXVAL(keyF616) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1193F618);
    x_1193F619 = T13;
    T15 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1193F619,x_1194F614);
    BOXVAL(valF617) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1193F619);
    x_1193F620 = T16;
    T17 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1193F620,x_1194F614);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1194F614,LITREF(lit_6),x_1193F615);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T24 = BOXVAL(keyF616);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF617);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALLN(1,VARREF(YmacrosYcat),4,T22,T23,T25,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T33 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T34 = CALL1(1,VARREF(Ylst),FREEREF(2));
  T31 = CALLN(1,VARREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T38 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T39 = CALL1(1,VARREF(Ylst),FREEREF(2));
  T36 = CALLN(1,VARREF(YmacrosYcat),4,T37,T38,T39,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T28 = CALLN(1,VARREF(YmacrosYcat),4,T29,T30,T35,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T19 = CALL3(1,VARREF(YmacrosYcat),T20,T27,Ynil);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P return_;
  P exp_tmpF628;
  P stateF627;
  P x_1191F626;
  P x_1191F625;
  P expF624;
  P varF623;
  P x_1191F622;
  P x_1192F621;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_79,1);
  x_1192F621 = T1;
  FUNINIT(x_1192F621, 1,return_);
  x_1191F622 = FREEREF(0);
  varF623 = YPfalse;
  varF623 = BOXFAB(varF623);
  expF624 = YPfalse;
  expF624 = BOXFAB(expF624);
  T7 = CALL2(1,VARREF(YisaQ),x_1191F622,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1191F622,x_1192F621);
    BOXVAL(varF623) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1191F622);
    x_1191F625 = T10;
    T12 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1191F625,x_1192F621);
    BOXVAL(expF624) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1191F625);
    x_1191F626 = T13;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1191F626,x_1192F621);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1192F621,LITREF(lit_6),x_1191F622);
  }
  T17 = CALL0(1,VARREF(YmacrosYgensym));
  stateF627 = T17;
  T19 = CALL0(1,VARREF(YmacrosYgensym));
  exp_tmpF628 = T19;
  T21 = CALL1(1,VARREF(Ytail),FREEREF(2));
  T24 = CALL1(1,VARREF(Ylst),exp_tmpF628);
  T26 = BOXVAL(expF624);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YmacrosYcat),T24,T25,Ynil);
  T22 = CALL2(1,VARREF(YmacrosYpair),T23,FREEREF(3));
  T29 = CALL1(1,VARREF(Ylst),stateF627);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T33 = CALL1(1,VARREF(Ylst),exp_tmpF628);
  T31 = CALL3(1,VARREF(YmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YmacrosYcat),T29,T30,Ynil);
  T27 = CALL2(1,VARREF(YmacrosYpair),T28,FREEREF(4));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T37 = CALL1(1,VARREF(Ylst),exp_tmpF628);
  T38 = CALL1(1,VARREF(Ylst),stateF627);
  T35 = CALLN(1,VARREF(YmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL2(1,VARREF(YmacrosYpair),T35,FREEREF(5));
  T41 = FUNFAB(fun_81,3,varF623,exp_tmpF628,stateF627);
  T40 = with_exit(T41);
  T39 = CALL2(1,VARREF(YmacrosYpair),T40,FREEREF(6));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T45 = CALL1(1,VARREF(Ylst),exp_tmpF628);
  T46 = CALL1(1,VARREF(Ylst),stateF627);
  T43 = CALLN(1,VARREF(YmacrosYcat),4,T44,T45,T46,Ynil);
  T42 = CALL2(1,VARREF(YmacrosYpair),T43,FREEREF(7));
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
  P clauseF630;
  P loopF629;
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),clauses_);
  if (T1 != YPfalse) {
    T3 = CALL0(1,VARREF(YmacrosYgensym));
    loopF629 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T6 = CALL1(1,VARREF(Ylst),exps_);
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
    T10 = CALL1(1,VARREF(Ylst),loopF629);
    T11 = CALL1(1,VARREF(Ylst),inits_);
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
    T17 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
    T16 = CALL3(1,VARREF(YmacrosYcat),T17,preds_,Ynil);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T20 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T21 = CALL1(1,VARREF(Ylst),nows_);
    T22 = BOXVAL(FREEREF(0));
    T25 = CALL1(1,VARREF(Ylst),loopF629);
    T24 = CALL3(1,VARREF(YmacrosYcat),T25,nexts_,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T19 = CALLN(1,VARREF(YmacrosYcat),5,T20,T21,T22,T23,Ynil);
    T18 = CALL1(1,VARREF(Ylst),T19);
    T13 = CALLN(1,VARREF(YmacrosYcat),4,T14,T15,T18,Ynil);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T8 = CALLN(1,VARREF(YmacrosYcat),5,T9,T10,T11,T12,Ynil);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T4 = CALLN(1,VARREF(YmacrosYcat),4,T5,T6,T7,Ynil);
    T2 = T4;
    T0 = T2;
  } else {
    T27 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF630 = T27;
    T29 = FUNFAB(fun_82,8,clauseF630,FREEREF(1),clauses_,exps_,inits_,preds_,nows_,nexts_);
    T28 = with_exit(T29);
    T26 = T28;
    T0 = T26;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P return_;
  P grokF640;
  P x_1189F639;
  P x_1189F638;
  P x_1189F637;
  P x_1189F636;
  P x_1189F635;
  P bodyF634;
  P clausesF633;
  P x_1189F632;
  P x_1190F631;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1190_78,1);
  x_1190F631 = T1;
  FUNINIT(x_1190F631, 1,return_);
  x_1189F632 = FREEREF(0);
  clausesF633 = YPfalse;
  clausesF633 = BOXFAB(clausesF633);
  bodyF634 = YPfalse;
  bodyF634 = BOXFAB(bodyF634);
  T7 = CALL2(1,VARREF(YisaQ),x_1189F632,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1189F632,LITREF(lit_85),x_1190F631);
    x_1189F635 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1189F635,x_1190F631);
    x_1189F636 = T11;
    BOXVAL(clausesF633) = x_1189F636;
    x_1189F637 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1189F637,x_1190F631);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1189F635);
    x_1189F638 = T14;
    BOXVAL(bodyF634) = x_1189F638;
    x_1189F639 = Ynil;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1189F639,x_1190F631);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1190F631,LITREF(lit_6),x_1189F632);
  }
  T19 = FUNSHELL(1,fun_grok_83,2);
  grokF640 = T19;
  FUNINIT(grokF640, 2,bodyF634,grokF640);
  T21 = BOXVAL(clausesF633);
  T20 = CALLN(0,grokF640,6,T21,Ynil,Ynil,Ynil,Ynil,Ynil);
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
  P x_1197F647;
  P x_1197F646;
  P x_1197F645;
  P expF644;
  P bindingF643;
  P x_1197F642;
  P x_1198F641;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1198_86,1);
  x_1198F641 = T1;
  FUNINIT(x_1198F641, 1,return_);
  x_1197F642 = FREEREF(0);
  bindingF643 = YPfalse;
  bindingF643 = BOXFAB(bindingF643);
  expF644 = YPfalse;
  expF644 = BOXFAB(expF644);
  T7 = CALL2(1,VARREF(YisaQ),x_1197F642,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1197F642,LITREF(lit_102),x_1198F641);
    x_1197F645 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1197F645,x_1198F641);
    BOXVAL(bindingF643) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1197F645);
    x_1197F646 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1197F646,x_1198F641);
    BOXVAL(expF644) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1197F646);
    x_1197F647 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1197F647,x_1198F641);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1198F641,LITREF(lit_6),x_1197F642);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T21 = BOXVAL(bindingF643);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF644);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALLN(1,VARREF(YmacrosYcat),4,T19,T20,T22,Ynil);
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
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_108),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P return_;
  P old_valueF659;
  P nameF658;
  P x_1209F657;
  P x_1209F656;
  P x_1209F655;
  P x_1209F654;
  P x_1209F653;
  P restF652;
  P valueF651;
  P varF650;
  P x_1209F649;
  P x_1210F648;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1210_90,2);
  x_1210F648 = T1;
  FUNINIT(x_1210F648, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  x_1209F649 = T3;
  varF650 = YPfalse;
  varF650 = BOXFAB(varF650);
  valueF651 = YPfalse;
  valueF651 = BOXFAB(valueF651);
  restF652 = YPfalse;
  restF652 = BOXFAB(restF652);
  T10 = CALL2(1,VARREF(YisaQ),x_1209F649,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1209F649,x_1210F648);
    x_1209F653 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1209F653,x_1210F648);
    BOXVAL(varF650) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1209F653);
    x_1209F654 = T15;
    T17 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1209F654,x_1210F648);
    BOXVAL(valueF651) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1209F654);
    x_1209F655 = T18;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1209F655,x_1210F648);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1209F649);
    x_1209F656 = T20;
    BOXVAL(restF652) = x_1209F656;
    x_1209F657 = Ynil;
    T22 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1209F657,x_1210F648);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1210F648,LITREF(lit_6),x_1209F649);
  }
  T26 = BOXVAL(varF650);
  T25 = CALL1(1,VARREF(YmacrosYvar_name),T26);
  nameF658 = T25;
  T28 = CALL0(1,VARREF(YmacrosYgensym));
  old_valueF659 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF659);
  T36 = CALL1(1,VARREF(Ylst),nameF658);
  T34 = CALL3(1,VARREF(YmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T46 = CALL1(1,VARREF(Ylst),nameF658);
  T48 = BOXVAL(valueF651);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALLN(1,VARREF(YmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T54 = BOXVAL(restF652);
  T53 = CALL2(1,VARREF(YmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALLN(1,VARREF(YmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALLN(1,VARREF(YmacrosYcat),4,T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T59 = CALL1(1,VARREF(Ylst),nameF658);
  T60 = CALL1(1,VARREF(Ylst),old_valueF659);
  T57 = CALLN(1,VARREF(YmacrosYcat),4,T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T38 = CALLN(1,VARREF(YmacrosYcat),4,T39,T40,T56,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T29 = CALLN(1,VARREF(YmacrosYcat),4,T30,T31,T37,Ynil);
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
  P x_1207F661;
  P x_1208F660;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_92,3);
  x_1208F660 = T1;
  FUNINIT(x_1208F660, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1207F661 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1207F661,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1207F661,x_1208F660);
  } else {
    T6 = CALL2(1,x_1208F660,LITREF(lit_6),x_1207F661);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P x_1205F668;
  P x_1205F667;
  P x_1205F666;
  P bodyF665;
  P bindingsF664;
  P x_1205F663;
  P x_1206F662;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_89,1);
  x_1206F662 = T1;
  FUNINIT(x_1206F662, 1,return_);
  x_1205F663 = FREEREF(0);
  bindingsF664 = YPfalse;
  bindingsF664 = BOXFAB(bindingsF664);
  bodyF665 = YPfalse;
  bodyF665 = BOXFAB(bodyF665);
  T7 = CALL2(1,VARREF(YisaQ),x_1205F663,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1205F663,LITREF(lit_105),x_1206F662);
    x_1205F666 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1205F666,x_1206F662);
    BOXVAL(bindingsF664) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1205F666);
    x_1205F667 = T12;
    BOXVAL(bodyF665) = x_1205F667;
    x_1205F668 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1205F668,x_1206F662);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1206F662,LITREF(lit_6),x_1205F663);
  }
  T17 = FUNFAB(fun_93,2,bindingsF664,bodyF665);
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
  P vnamF678;
  P typF677;
  P namF676;
  P x_1213F675;
  P x_1213F674;
  P x_1213F673;
  P valueF672;
  P varF671;
  P x_1213F670;
  P x_1214F669;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1214_96,1);
  x_1214F669 = T1;
  FUNINIT(x_1214F669, 1,return_);
  x_1213F670 = FREEREF(0);
  varF671 = YPfalse;
  varF671 = BOXFAB(varF671);
  valueF672 = YPfalse;
  valueF672 = BOXFAB(valueF672);
  T7 = CALL2(1,VARREF(YisaQ),x_1213F670,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1213F670,LITREF(lit_111),x_1214F669);
    x_1213F673 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1213F673,x_1214F669);
    BOXVAL(varF671) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1213F673);
    x_1213F674 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1213F674,x_1214F669);
    BOXVAL(valueF672) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1213F674);
    x_1213F675 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1213F675,x_1214F669);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1214F669,LITREF(lit_6),x_1213F670);
  }
  T20 = BOXVAL(varF671);
  T19 = CALL1(1,VARREF(YmacrosYvar_name),T20);
  namF676 = T19;
  T23 = BOXVAL(varF671);
  T22 = CALL1(1,VARREF(YmacrosYvar_type),T23);
  typF677 = T22;
  T25 = CALL3(1,VARREF(YmacrosYmake_sym),LITREF(lit_112),namF676,LITREF(lit_113));
  vnamF678 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T31 = CALL1(1,VARREF(Ylst),vnamF678);
  T33 = BOXVAL(valueF672);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALLN(1,VARREF(YmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_114));
  T37 = CALL1(1,VARREF(Ylst),namF676);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T41 = CALL1(1,VARREF(Ylst),typF677);
  T39 = CALL3(1,VARREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF678);
  T35 = CALLN(1,VARREF(YmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_114));
  T47 = CALL1(1,VARREF(YmacrosYmake_setter_name),namF676);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T53 = CALL1(1,VARREF(Ylst),typF677);
  T51 = CALL3(1,VARREF(YmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T57 = CALL1(1,VARREF(Ylst),vnamF678);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T55 = CALLN(1,VARREF(YmacrosYcat),4,T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T44 = CALLN(1,VARREF(YmacrosYcat),5,T45,T46,T48,T54,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T26 = CALLN(1,VARREF(YmacrosYcat),5,T27,T28,T34,T43,Ynil);
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
  P x_1217F683;
  P x_1217F682;
  P namesF681;
  P x_1217F680;
  P x_1218F679;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1218_99,1);
  x_1218F679 = T1;
  FUNINIT(x_1218F679, 1,return_);
  x_1217F680 = FREEREF(0);
  namesF681 = YPfalse;
  namesF681 = BOXFAB(namesF681);
  T5 = CALL2(1,VARREF(YisaQ),x_1217F680,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1217F680,LITREF(lit_118),x_1218F679);
    x_1217F682 = T7;
    BOXVAL(namesF681) = x_1217F682;
    x_1217F683 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1217F683,x_1218F679);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1218F679,LITREF(lit_6),x_1217F680);
  }
  T13 = BOXVAL(namesF681);
  T12 = CALL1(1,VARREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF681);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALLN(1,VARREF(YmacrosYcat),4,T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_119));
    T28 = BOXVAL(namesF681);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_118));
    T33 = BOXVAL(namesF681);
    T32 = CALL1(1,VARREF(Ytail),T33);
    T30 = CALL3(1,VARREF(YmacrosYcat),T31,T32,Ynil);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T14 = CALLN(1,VARREF(YmacrosYcat),5,T15,T16,T23,T29,Ynil);
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
  T2 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1074_0 = YPmet(FUNCODEREF(fun_x_1074_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"next-method"),T3);
  lit_17 = YPPsym((P)"x-1078");
  lit_18 = YPPsym((P)"apply-next-method");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1078_3 = YPmet(FUNCODEREF(fun_x_1078_3),LITREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"apply-next-method"),T7);
  lit_20 = YPPsym((P)"x-1082");
  lit_21 = YPPsym((P)"apply");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1082_6 = YPmet(FUNCODEREF(fun_x_1082_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"apply"),T11);
  lit_22 = YPPsym((P)"x-1086");
  lit_23 = YPPsym((P)"collecting");
  lit_24 = YPPsym((P)"collector-");
  lit_25 = YPPsym((P)"collected");
  T14 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1086_9 = YPmet(FUNCODEREF(fun_x_1086_9),LITREF(lit_22),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T15 = fun_11;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collecting"),T15);
  lit_26 = YPPsym((P)"x-1090");
  lit_27 = YPPsym((P)"collect");
  lit_28 = YPPsym((P)"set");
  lit_29 = YPPsym((P)"pair");
  T18 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1090_12 = YPmet(FUNCODEREF(fun_x_1090_12),LITREF(lit_26),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T19 = fun_14;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collect"),T19);
  lit_30 = YPPsym((P)"x-1094");
  lit_31 = YPPsym((P)"rev!");
  T22 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),LITREF(lit_30),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T23 = fun_17;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collected"),T23);
  lit_32 = YPPsym((P)"lift-place-subforms");
  lit_33 = YPPsym((P)"place");
  lit_34 = YPPsym((P)"munch");
  lit_35 = YPPsym((P)"subforms");
  T25 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_munch_18 = YPmet(FUNCODEREF(fun_munch_18),LITREF(lit_34),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  YmacrosYlift_place_subforms = YPmet(FUNCODEREF(YmacrosYlift_place_subforms),LITREF(lit_32),T24,ENVNUL,PNUL,YPfalse);
  T26 = YmacrosYlift_place_subforms;
  VARSET(YmacrosYlift_place_subforms,T26);
  lit_36 = YPPsym((P)"x-1100");
  lit_37 = YPPsym((P)"inc");
  lit_38 = YPPsym((P)"x-1102");
  lit_39 = YPPsym((P)"+");
  T31 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1100_20 = YPmet(FUNCODEREF(fun_x_1100_20),LITREF(lit_36),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1102_21 = YPmet(FUNCODEREF(fun_x_1102_21),LITREF(lit_38),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T32 = fun_24;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"inc"),T32);
  lit_40 = YPPsym((P)"x-1108");
  lit_41 = YPPsym((P)"dec");
  lit_42 = YPPsym((P)"x-1110");
  lit_43 = YPPsym((P)"-");
  T37 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),LITREF(lit_40),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1110_26 = YPmet(FUNCODEREF(fun_x_1110_26),LITREF(lit_42),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T38 = fun_29;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dec"),T38);
  lit_44 = YPPsym((P)"x-1114");
  lit_45 = YPPsym((P)"pushf");
  lit_46 = YPPsym((P)"push");
  T41 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1114_30 = YPmet(FUNCODEREF(fun_x_1114_30),LITREF(lit_44),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T42 = fun_32;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"pushf"),T42);
  lit_47 = YPPsym((P)"x-1118");
  lit_48 = YPPsym((P)"swapf");
  T45 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1118_33 = YPmet(FUNCODEREF(fun_x_1118_33),LITREF(lit_47),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T46 = fun_35;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"swapf"),T46);
  lit_49 = YPPsym((P)"x-1122");
  lit_50 = YPPsym((P)"popf");
  lit_51 = YPPsym((P)"tup");
  lit_52 = YPPsym((P)"pop");
  T49 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1122_36 = YPmet(FUNCODEREF(fun_x_1122_36),LITREF(lit_49),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T50 = fun_38;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"popf"),T50);
  lit_53 = YPPsym((P)"x-1126");
  lit_54 = YPPsym((P)"opf");
  lit_55 = YPPsym((P)"_");
  T53 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1126_39 = YPmet(FUNCODEREF(fun_x_1126_39),LITREF(lit_53),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T54 = fun_41;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"opf"),T54);
  lit_56 = YPPsym((P)"x-1130");
  lit_57 = YPPsym((P)"unless");
  lit_58 = YPPsym((P)"not");
  lit_59 = YPPsym((P)"seq");
  T57 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1130_42 = YPmet(FUNCODEREF(fun_x_1130_42),LITREF(lit_56),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T58 = fun_44;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"unless"),T58);
  lit_60 = YPPsym((P)"x-1134");
  lit_61 = YPPsym((P)"when");
  T61 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1134_45 = YPmet(FUNCODEREF(fun_x_1134_45),LITREF(lit_60),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T62 = fun_47;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"when"),T62);
  lit_62 = YPPsym((P)"x-1142");
  lit_63 = YPPsym((P)"or");
  lit_64 = YPPsym((P)"x-1144");
  lit_65 = YPPsym((P)"x-1146");
  lit_66 = YPPsym((P)"tmp");
  T69 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1142_48 = YPmet(FUNCODEREF(fun_x_1142_48),LITREF(lit_62),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_49 = YPmet(FUNCODEREF(fun_x_1144_49),LITREF(lit_64),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1146_50 = YPmet(FUNCODEREF(fun_x_1146_50),LITREF(lit_65),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T70 = fun_54;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"or"),T70);
  lit_67 = YPPsym((P)"x-1154");
  lit_68 = YPPsym((P)"and");
  lit_69 = YPPsym((P)"x-1156");
  lit_70 = YPPsym((P)"x-1158");
  T77 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1154_55 = YPmet(FUNCODEREF(fun_x_1154_55),LITREF(lit_67),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1156_56 = YPmet(FUNCODEREF(fun_x_1156_56),LITREF(lit_69),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1158_57 = YPmet(FUNCODEREF(fun_x_1158_57),LITREF(lit_70),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T78 = fun_61;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"and"),T78);
  lit_71 = YPPsym((P)"x-1164");
  lit_72 = YPPsym((P)"case");
  lit_73 = YPPsym((P)"x-1166");
  lit_74 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  T83 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1164_62 = YPmet(FUNCODEREF(fun_x_1164_62),LITREF(lit_71),T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1166_63 = YPmet(FUNCODEREF(fun_x_1166_63),LITREF(lit_73),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  T92 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1174_67 = YPmet(FUNCODEREF(fun_x_1174_67),LITREF(lit_75),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_68 = YPmet(FUNCODEREF(fun_x_1176_68),LITREF(lit_77),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1178_69 = YPmet(FUNCODEREF(fun_x_1178_69),LITREF(lit_78),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T93 = fun_74;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"select"),T93);
  lit_82 = YPPsym((P)"x-1182");
  lit_83 = YPPsym((P)"assert");
  T96 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1182_75 = YPmet(FUNCODEREF(fun_x_1182_75),LITREF(lit_82),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  T105 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1190_78 = YPmet(FUNCODEREF(fun_x_1190_78),LITREF(lit_84),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_79 = YPmet(FUNCODEREF(fun_x_1192_79),LITREF(lit_94),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1194_80 = YPmet(FUNCODEREF(fun_x_1194_80),LITREF(lit_97),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(6,LITREF(lit_87),LITREF(lit_88),LITREF(lit_89),LITREF(lit_90),LITREF(lit_91),LITREF(lit_92)),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_grok_83 = YPmet(FUNCODEREF(fun_grok_83),LITREF(lit_86),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T106 = fun_85;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"for"),T106);
  lit_101 = YPPsym((P)"x-1198");
  lit_102 = YPPsym((P)"ddv");
  lit_103 = YPPsym((P)"dv");
  T109 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1198_86 = YPmet(FUNCODEREF(fun_x_1198_86),LITREF(lit_101),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T110 = fun_88;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"ddv"),T110);
  lit_104 = YPPsym((P)"x-1206");
  lit_105 = YPPsym((P)"dlet");
  lit_106 = YPPsym((P)"x-1208");
  lit_107 = YPPsym((P)"x-1210");
  lit_108 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_109 = YPPsym((P)"fin");
  T117 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1206_89 = YPmet(FUNCODEREF(fun_x_1206_89),LITREF(lit_104),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1210_90 = YPmet(FUNCODEREF(fun_x_1210_90),LITREF(lit_107),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_92 = YPmet(FUNCODEREF(fun_x_1208_92),LITREF(lit_106),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  T121 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1214_96 = YPmet(FUNCODEREF(fun_x_1214_96),LITREF(lit_110),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T122 = fun_98;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"def-fun-var"),T122);
  lit_117 = YPPsym((P)"x-1218");
  lit_118 = YPPsym((P)"need-implementation");
  lit_119 = YPPsym((P)"export");
  T125 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1218_99 = YPmet(FUNCODEREF(fun_x_1218_99),LITREF(lit_117),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  if (YPfalse != YPfalse) {
  } else {
  }
  T127 = YPfalse;
  return T127;
}

P YmacrosY___main_1___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"nul", &module_info_boot, "nul"},
  {"%i<", &module_info_boot, "%i<"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<int>", &module_info_boot, "<int>"},
  {"<num>", &module_info_boot, "<num>"},
  {"%i^", &module_info_boot, "%i^"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%i-", &module_info_boot, "%i-"},
  {"loc", &module_info_boot, "loc"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%selt", &module_info_boot, "%selt"},
  {"%cu", &module_info_boot, "%cu"},
  {"%slot", &module_info_boot, "%slot"},
  {"%fu", &module_info_boot, "%fu"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"dg", &module_info_boot, "dg"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"dss", &module_info_boot, "dss"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"dp", &module_info_boot, "dp"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%sb", &module_info_boot, "%sb"},
  {"<log>", &module_info_boot, "<log>"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"dv", &module_info_boot, "dv"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"not", &module_info_boot, "not"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%f*", &module_info_boot, "%f*"},
  {"<any>", &module_info_boot, "<any>"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%su", &module_info_boot, "%su"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"<union>", &module_info_boot, "<union>"},
  {"%bb", &module_info_boot, "%bb"},
  {"lst", &module_info_boot, "lst"},
  {"%ft", &module_info_boot, "%ft"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"isa", &module_info_boot, "isa"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"fun", &module_info_boot, "fun"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"@+", &module_info_boot, "@+"},
  {"seq", &module_info_boot, "seq"},
  {"unexec", &module_info_boot, "unexec"},
  {"%pair", &module_info_boot, "%pair"},
  {"%c=", &module_info_boot, "%c="},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%vec", &module_info_boot, "%vec"},
  {"%snul", &module_info_boot, "%snul"},
  {"error", &module_info_boot, "error"},
  {"rep", &module_info_boot, "rep"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"try", &module_info_boot, "try"},
  {"%i*", &module_info_boot, "%i*"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"%ib", &module_info_boot, "%ib"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"quote", &module_info_boot, "quote"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%fb", &module_info_boot, "%fb"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"%f=", &module_info_boot, "%f="},
  {"%process-module", &module_info_boot, "%process-module"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%str", &module_info_boot, "%str"},
  {"@<", &module_info_boot, "@<"},
  {"%lb", &module_info_boot, "%lb"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"type-object", &module_info_boot, "type-object"},
  {"if", &module_info_boot, "if"},
  {"<class>", &module_info_boot, "<class>"},
  {"fin", &module_info_boot, "fin"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<type>", &module_info_boot, "<type>"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%iu", &module_info_boot, "%iu"},
  {"%slen", &module_info_boot, "%slen"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"dc", &module_info_boot, "dc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%iv", &module_info_boot, "%iv"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"let", &module_info_boot, "let"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"%i+", &module_info_boot, "%i+"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%raw", &module_info_boot, "%raw"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"%im", &module_info_boot, "%im"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<str>", &module_info_boot, "<str>"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"bound?", &module_info_boot, "bound?"},
  {"%f+", &module_info_boot, "%f+"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%lu", &module_info_boot, "%lu"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<met>", &module_info_boot, "<met>"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"@olen", &module_info_boot, "@olen"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%it/", &module_info_boot, "%it/"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"use", &module_info_boot, "use"},
  {"df", &module_info_boot, "df"},
  {"object-class", &module_info_boot, "object-class"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"dm", &module_info_boot, "dm"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"%velt", &module_info_boot, "%velt"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%untag", &module_info_boot, "%untag"},
  {"%i=", &module_info_boot, "%i="},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"type-error", &module_info_boot, "type-error"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"ct", &module_info_boot, "ct"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"tail", &module_info_boot, "tail"},
  {"%f<", &module_info_boot, "%f<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%i!", &module_info_boot, "%i!"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"<col>", &module_info_boot, "<col>"},
  {"@==", &module_info_boot, "@=="},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"lab", &module_info_boot, "lab"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%cb", &module_info_boot, "%cb"},
  {"mif", &module_info_boot, "mif"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"nil", &module_info_boot, "nil"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%f/", &module_info_boot, "%f/"},
  {"%f-", &module_info_boot, "%f-"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"isa?", &module_info_boot, "isa?"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"%i?", &module_info_boot, "%i?"},
  {"%isa", &module_info_boot, "%isa"},
  {"%i&", &module_info_boot, "%i&"},
  {"<flo>", &module_info_boot, "<flo>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"map", &YmacrosYmap},
  {"swapf", NULL},
  {"make-setter-name", &YmacrosYmake_setter_name},
  {"select", NULL},
  {"match-atom", &YmacrosYmatch_atom},
  {"var-type", &YmacrosYvar_type},
  {"pair", &YmacrosYpair},
  {"match-unquote", &YmacrosYmatch_unquote},
  {"assert", NULL},
  {"ddv", NULL},
  {"cat", &YmacrosYcat},
  {"lift-place-subforms", &YmacrosYlift_place_subforms},
  {"var-name", &YmacrosYvar_name},
  {"collect", NULL},
  {"need-implementation", NULL},
  {"or", NULL},
  {"dec", NULL},
  {"apply", NULL},
  {"match-empty-list", &YmacrosYmatch_empty_list},
  {"unless", NULL},
  {"napply", &YmacrosYnapply},
  {"and", NULL},
  {"tup", &YmacrosYtup},
  {"gensym", &YmacrosYgensym},
  {"popf", NULL},
  {"pushf", NULL},
  {"elt", &YmacrosYelt},
  {"dlet", NULL},
  {"next-method", NULL},
  {"case", NULL},
  {"for", NULL},
  {"collected", NULL},
  {"when", NULL},
  {"collecting", NULL},
  {"apply-next-method", NULL},
  {"make-sym", &YmacrosYmake_sym},
  {"def-fun-var", NULL},
  {"==", &YmacrosYEE},
  {"opf", NULL},
  {"match-sublist", &YmacrosYmatch_sublist},
  {"---main-1---", NULL},
  {"inc", NULL},
  {"empty?", &YmacrosYemptyQ},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"map", "map"},
  {"swapf", "swapf"},
  {"make-setter-name", "make-setter-name"},
  {"select", "select"},
  {"match-atom", "match-atom"},
  {"var-type", "var-type"},
  {"pair", "pair"},
  {"match-unquote", "match-unquote"},
  {"assert", "assert"},
  {"ddv", "ddv"},
  {"lst", "lst"},
  {"cat", "cat"},
  {"var-name", "var-name"},
  {"collect", "collect"},
  {"need-implementation", "need-implementation"},
  {"or", "or"},
  {"dec", "dec"},
  {"apply", "apply"},
  {"error", "error"},
  {"match-empty-list", "match-empty-list"},
  {"unless", "unless"},
  {"napply", "napply"},
  {"and", "and"},
  {"tup", "tup"},
  {"gensym", "gensym"},
  {"popf", "popf"},
  {"pushf", "pushf"},
  {"elt", "elt"},
  {"dlet", "dlet"},
  {"next-method", "next-method"},
  {"case", "case"},
  {"for", "for"},
  {"collected", "collected"},
  {"when", "when"},
  {"collecting", "collecting"},
  {"apply-next-method", "apply-next-method"},
  {"make-sym", "make-sym"},
  {"def-fun-var", "def-fun-var"},
  {"==", "=="},
  {"opf", "opf"},
  {"match-sublist", "match-sublist"},
  {"inc", "inc"},
  {"empty?", "empty?"},
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
  (P)YmacrosY___main_1___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
