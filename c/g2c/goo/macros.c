/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YOlst,"boot","@lst");
EXT(Yprop_type,"boot","prop-type");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YLfunG,"boot","<fun>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yprop_boundQ,"boot","prop-bound?");
DEF(YmacrosYcat_sym,"macros","cat-sym");
EXT(Ysig_val,"boot","sig-val");
EXT(YLlstG,"boot","<lst>");
EXT(Yfab_class,"boot","fab-class");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLlogG,"boot","<log>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Ysym_name,"boot","sym-name");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yfun_name,"boot","fun-name");
EXT(Yadd_prop,"boot","add-prop");
EXT(Yobject_class,"boot","object-class");
EXT(Yprop_owner,"boot","prop-owner");
EXT(Yprop_value,"boot","prop-value");
EXT(Yclass_parents,"boot","class-parents");
EXT(YDmax_int,"boot","$max-int");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YmacrosYdo_case_by,"macros","do-case-by");
EXT(YLseqG,"boot","<seq>");
EXT(Ynil,"boot","nil");
EXT(YLanyG,"boot","<any>");
EXT(Yclass_props,"boot","class-props");
EXT(Yerror,"boot","error");
DEF(YmacrosYmap,"macros","map");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YLsigG,"boot","<sig>");
EXT(Yfun_names,"boot","fun-names");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
EXT(YLcolG,"boot","<col>");
EXT(Ysig_names,"boot","sig-names");
EXT(YLclassG,"boot","<class>");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yfind_setter,"boot","find-setter");
DEF(YmacrosYvar_name,"macros","var-name");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Ytail_setter,"boot","tail-setter");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ysig_arity,"boot","sig-arity");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YmacrosYcat,"macros","cat");
EXT(YLoptsG,"boot","<opts>");
DEF(YmacrosYnapp,"macros","napp");
EXT(Ytail,"boot","tail");
EXT(YLtypeG,"boot","<type>");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(YLlocG,"boot","<loc>");
EXT(Ytype_elts,"boot","type-elts");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yclass_name,"boot","class-name");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(YmacrosYemptyQ,"macros","empty?");
DEF(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Yfun_val,"boot","fun-val");
EXT(YDmin_int,"boot","$min-int");
EXT(Yclass_ancestors,"boot","class-ancestors");
DEF(YmacrosYelt,"macros","elt");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(Ymet_appQ,"boot","met-app?");
EXT(Yobject_parents,"boot","object-parents");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YOisaQ,"boot","@isa?");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YPvnul,"boot","%vnul");
DEF(YmacrosYdo,"macros","do");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(YLpropG,"boot","<prop>");
EXT(YPsymbols,"boot","%symbols");
EXT(Ynew,"boot","new");
EXT(YLgenG,"boot","<gen>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(Ynul,"boot","nul");
EXT(Ygen_src,"boot","gen-src");
EXT(Yobject_props,"boot","object-props");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(Ytype_error,"boot","type-error");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLintG,"boot","<int>");
EXT(YLstrG,"boot","<str>");
EXT(Yfun_arity,"boot","fun-arity");
EXT(Yvec,"boot","vec");
EXT(Ylst,"boot","lst");
DEF(YmacrosYEE,"macros","==");
DEF(YmacrosYrevX,"macros","rev!");
EXT(YLtupG,"boot","<tup>");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Ytup,"boot","tup");
EXT(YisaQ,"boot","isa?");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YPsnul,"boot","%snul");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YPprop,"boot","%prop");
EXT(YLunionG,"boot","<union>");
EXT(YPisa,"boot","%isa");
EXT(Yhead,"boot","head");
EXT(YLmagG,"boot","<mag>");
EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(Yprop_getter,"boot","prop-getter");
DEF(YmacrosYpair,"macros","pair");
EXT(Yunexec,"boot","unexec");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YLmetG,"boot","<met>");
EXT(YPPmacro,"boot","%%macro");
EXT(Yprop_init,"boot","prop-init");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YLflatG,"boot","<flat>");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
DEF(YmacrosYgensym,"macros","gensym");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_138);
DEFLIT(lit_2);
DEFLIT(lit_84);
DEFLIT(lit_37);
DEFLIT(lit_141);
DEFLIT(lit_40);
DEFLIT(lit_7);
DEFLIT(lit_42);
DEFLIT(lit_128);
DEFLIT(lit_11);
DEFLIT(lit_98);
DEFLIT(lit_30);
DEFLIT(lit_50);
DEFLIT(lit_20);
DEFLIT(lit_67);
DEFLIT(lit_29);
DEFLIT(lit_144);
DEFLIT(lit_53);
DEFLIT(lit_135);
DEFLIT(lit_149);
DEFLIT(lit_110);
DEFLIT(lit_31);
DEFLIT(lit_55);
DEFLIT(lit_130);
DEFLIT(lit_78);
DEFLIT(lit_82);
DEFLIT(lit_105);
DEFLIT(lit_15);
DEFLIT(lit_38);
DEFLIT(lit_88);
DEFLIT(lit_12);
DEFLIT(lit_93);
DEFLIT(lit_116);
DEFLIT(lit_16);
DEFLIT(lit_17);
DEFLIT(lit_104);
DEFLIT(lit_56);
DEFLIT(lit_68);
DEFLIT(lit_66);
DEFLIT(lit_64);
DEFLIT(lit_112);
DEFLIT(lit_72);
DEFLIT(lit_33);
DEFLIT(lit_45);
DEFLIT(lit_87);
DEFLIT(lit_121);
DEFLIT(lit_10);
DEFLIT(lit_63);
DEFLIT(lit_120);
DEFLIT(lit_65);
DEFLIT(lit_28);
DEFLIT(lit_122);
DEFLIT(lit_19);
DEFLIT(lit_99);
DEFLIT(lit_54);
DEFLIT(lit_143);
DEFLIT(lit_77);
DEFLIT(lit_108);
DEFLIT(lit_154);
DEFLIT(lit_48);
DEFLIT(lit_0);
DEFLIT(lit_80);
DEFLIT(lit_71);
DEFLIT(lit_123);
DEFLIT(lit_4);
DEFLIT(lit_81);
DEFLIT(lit_32);
DEFLIT(lit_102);
DEFLIT(lit_90);
DEFLIT(lit_140);
DEFLIT(lit_137);
DEFLIT(lit_115);
DEFLIT(lit_14);
DEFLIT(lit_6);
DEFLIT(lit_114);
DEFLIT(lit_101);
DEFLIT(lit_25);
DEFLIT(lit_92);
DEFLIT(lit_95);
DEFLIT(lit_100);
DEFLIT(lit_145);
DEFLIT(lit_86);
DEFLIT(lit_111);
DEFLIT(lit_119);
DEFLIT(lit_147);
DEFLIT(lit_113);
DEFLIT(lit_153);
DEFLIT(lit_118);
DEFLIT(lit_109);
DEFLIT(lit_69);
DEFLIT(lit_103);
DEFLIT(lit_43);
DEFLIT(lit_126);
DEFLIT(lit_9);
DEFLIT(lit_85);
DEFLIT(lit_151);
DEFLIT(lit_156);
DEFLIT(lit_148);
DEFLIT(lit_61);
DEFLIT(lit_27);
DEFLIT(lit_127);
DEFLIT(lit_125);
DEFLIT(lit_89);
DEFLIT(lit_76);
DEFLIT(lit_97);
DEFLIT(lit_107);
DEFLIT(lit_62);
DEFLIT(lit_60);
DEFLIT(lit_94);
DEFLIT(lit_96);
DEFLIT(lit_24);
DEFLIT(lit_75);
DEFLIT(lit_3);
DEFLIT(lit_73);
DEFLIT(lit_44);
DEFLIT(lit_13);
DEFLIT(lit_132);
DEFLIT(lit_155);
DEFLIT(lit_136);
DEFLIT(lit_22);
DEFLIT(lit_26);
DEFLIT(lit_49);
DEFLIT(lit_51);
DEFLIT(lit_133);
DEFLIT(lit_18);
DEFLIT(lit_52);
DEFLIT(lit_35);
DEFLIT(lit_47);
DEFLIT(lit_8);
DEFLIT(lit_1);
DEFLIT(lit_150);
DEFLIT(lit_142);
DEFLIT(lit_74);
DEFLIT(lit_134);
DEFLIT(lit_21);
DEFLIT(lit_58);
DEFLIT(lit_79);
DEFLIT(lit_5);
DEFLIT(lit_139);
DEFLIT(lit_129);
DEFLIT(lit_41);
DEFLIT(lit_83);
DEFLIT(lit_34);
DEFLIT(lit_146);
DEFLIT(lit_91);
DEFLIT(lit_36);
DEFLIT(lit_23);
DEFLIT(lit_124);
DEFLIT(lit_39);
DEFLIT(lit_152);
DEFLIT(lit_70);
DEFLIT(lit_131);
DEFLIT(lit_117);
DEFLIT(lit_106);
DEFLIT(lit_46);
DEFLIT(lit_59);
DEFLIT(lit_57);

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
LOCFOR(fun_x_1098_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_munch_22);
FUNFOR(YmacrosYlift_place_subforms);
LOCFOR(fun_x_1104_24);
LOCFOR(fun_x_1106_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_1112_29);
LOCFOR(fun_x_1114_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_1118_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1122_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1126_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1130_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1134_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_x_1138_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1146_52);
LOCFOR(fun_x_1148_53);
LOCFOR(fun_x_1150_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1158_59);
LOCFOR(fun_x_1160_60);
LOCFOR(fun_x_1162_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1168_66);
LOCFOR(fun_x_1170_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1176_71);
LOCFOR(fun_x_1178_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YmacrosYdo_case_by);
LOCFOR(fun_x_1182_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1186_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1194_83);
LOCFOR(fun_x_1198_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1196_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1202_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_1210_93);
LOCFOR(fun_x_1212_94);
LOCFOR(fun_x_1214_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_1218_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_1222_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1226_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1234_110);
LOCFOR(fun_x_1238_111);
LOCFOR(fun_112);
LOCFOR(fun_x_1236_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_1242_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1246_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1250_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1264_126);
LOCFOR(fun_x_1266_127);
LOCFOR(fun_128);
LOCFOR(fun_x_1268_129);
LOCFOR(fun_130);
LOCFOR(fun_x_1270_131);
LOCFOR(fun_132);
LOCFOR(fun_x_1272_133);
LOCFOR(fun_134);
LOCFOR(fun_x_1274_135);
LOCFOR(fun_136);
LOCFOR(fun_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
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
  P x_1073F450;
  P x_1073F449;
  P argsF448;
  P x_1073F447;
  P x_1074F446;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1074_0,1);
  x_1074F446 = T1;
  FUNINIT(x_1074F446, 1,return_);
  x_1073F447 = FREEREF(0);
  argsF448 = YPfalse;
  argsF448 = BOXFAB(argsF448);
  T5 = CALL2(1,VARREF(YisaQ),x_1073F447,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1073F447,LITREF(lit_5),x_1074F446);
    x_1073F449 = T7;
    BOXVAL(argsF448) = x_1073F449;
    x_1073F450 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1073F450,x_1074F446);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1074F446,LITREF(lit_6),x_1073F447);
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
  T36 = BOXVAL(argsF448);
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
  P x_1077F455;
  P x_1077F454;
  P argsF453;
  P x_1077F452;
  P x_1078F451;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1078_3,1);
  x_1078F451 = T1;
  FUNINIT(x_1078F451, 1,return_);
  x_1077F452 = FREEREF(0);
  argsF453 = YPfalse;
  argsF453 = BOXFAB(argsF453);
  T5 = CALL2(1,VARREF(YisaQ),x_1077F452,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1077F452,LITREF(lit_18),x_1078F451);
    x_1077F454 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1077F454,x_1078F451);
    BOXVAL(argsF453) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1077F454);
    x_1077F455 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1077F455,x_1078F451);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1078F451,LITREF(lit_6),x_1077F452);
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
  T39 = BOXVAL(argsF453);
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
  P x_1081F462;
  P x_1081F461;
  P x_1081F460;
  P argsF459;
  P fF458;
  P x_1081F457;
  P x_1082F456;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1082_6,1);
  x_1082F456 = T1;
  FUNINIT(x_1082F456, 1,return_);
  x_1081F457 = FREEREF(0);
  fF458 = YPfalse;
  fF458 = BOXFAB(fF458);
  argsF459 = YPfalse;
  argsF459 = BOXFAB(argsF459);
  T7 = CALL2(1,VARREF(YisaQ),x_1081F457,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1081F457,LITREF(lit_21),x_1082F456);
    x_1081F460 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1081F460,x_1082F456);
    BOXVAL(fF458) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1081F460);
    x_1081F461 = T12;
    BOXVAL(argsF459) = x_1081F461;
    x_1081F462 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1081F462,x_1082F456);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1082F456,LITREF(lit_6),x_1081F457);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF458);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF459);
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
  P nameF470;
  P x_1085F469;
  P x_1085F468;
  P x_1085F467;
  P x_1085F466;
  P bodyF465;
  P x_1085F464;
  P x_1086F463;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1086_9,1);
  x_1086F463 = T1;
  FUNINIT(x_1086F463, 1,return_);
  x_1085F464 = FREEREF(0);
  bodyF465 = YPfalse;
  bodyF465 = BOXFAB(bodyF465);
  T5 = CALL2(1,VARREF(YisaQ),x_1085F464,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1085F464,LITREF(lit_23),x_1086F463);
    x_1085F466 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1085F466,x_1086F463);
    x_1085F467 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1085F467,x_1086F463);
    T11 = CALL1(1,VARREF(Ytail),x_1085F466);
    x_1085F468 = T11;
    BOXVAL(bodyF465) = x_1085F468;
    x_1085F469 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1085F469,x_1086F463);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1086F463,LITREF(lit_6),x_1085F464);
  }
  nameF470 = LITREF(lit_24);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T22 = CALL1(1,VARREF(Ylst),nameF470);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T26 = CALL1(1,VARREF(Ylst),Ynil);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T27 = BOXVAL(bodyF465);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T31 = CALL1(1,VARREF(Ylst),nameF470);
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
  P nameF476;
  P x_1089F475;
  P x_1089F474;
  P valueF473;
  P x_1089F472;
  P x_1090F471;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1090_12,1);
  x_1090F471 = T1;
  FUNINIT(x_1090F471, 1,return_);
  x_1089F472 = FREEREF(0);
  valueF473 = YPfalse;
  valueF473 = BOXFAB(valueF473);
  T5 = CALL2(1,VARREF(YisaQ),x_1089F472,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1089F472,LITREF(lit_27),x_1090F471);
    x_1089F474 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1089F474,x_1090F471);
    BOXVAL(valueF473) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1089F474);
    x_1089F475 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1089F475,x_1090F471);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1090F471,LITREF(lit_6),x_1089F472);
  }
  nameF476 = LITREF(lit_24);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T16 = CALL1(1,VARREF(Ylst),nameF476);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T21 = BOXVAL(valueF473);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),nameF476);
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
  P x_1093F481;
  P x_1093F480;
  P nameF479;
  P x_1093F478;
  P x_1094F477;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F477 = T1;
  FUNINIT(x_1094F477, 1,return_);
  x_1093F478 = FREEREF(0);
  nameF479 = YPfalse;
  nameF479 = BOXFAB(nameF479);
  T5 = CALL2(1,VARREF(YisaQ),x_1093F478,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1093F478,LITREF(lit_25),x_1094F477);
    x_1093F480 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1093F480,x_1094F477);
    BOXVAL(nameF479) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1093F480);
    x_1093F481 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1093F481,x_1094F477);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1094F477,LITREF(lit_6),x_1093F478);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T16 = BOXVAL(nameF479);
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

FUNCODEDEF(fun_x_1098_18) {
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

FUNCODEDEF(fun_loop_19) {
  P sets_,inits_;
  P valF482;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sets_, 0);
  ARG(inits_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),inits_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),sets_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),inits_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    valF482 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(1));
    T11 = CALL3(1,VARREF(YmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF482);
    T8 = CALLN(1,VARREF(YmacrosYcat),4,T9,T10,T15,Ynil);
    T7 = CALL2(1,VARREF(YmacrosYpair),T8,sets_);
    T17 = CALL1(1,VARREF(Ytail),inits_);
    T16 = CALL1(1,VARREF(Ytail),T17);
    a1 = T7;
    a2 = T16;
    sets_ = a1;
    inits_ = a2;
    goto loop;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P setsF492;
  P loopF491;
  P varF490;
  P x_1097F489;
  P x_1097F488;
  P x_1097F487;
  P prop_initsF486;
  P xF485;
  P x_1097F484;
  P x_1098F483;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1098_18,1);
  x_1098F483 = T1;
  FUNINIT(x_1098F483, 1,return_);
  x_1097F484 = FREEREF(0);
  xF485 = YPfalse;
  xF485 = BOXFAB(xF485);
  prop_initsF486 = YPfalse;
  prop_initsF486 = BOXFAB(prop_initsF486);
  T7 = CALL2(1,VARREF(YisaQ),x_1097F484,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1097F484,LITREF(lit_33),x_1098F483);
    x_1097F487 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1097F487,x_1098F483);
    BOXVAL(xF485) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1097F487);
    x_1097F488 = T12;
    BOXVAL(prop_initsF486) = x_1097F488;
    x_1097F489 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1097F489,x_1098F483);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1098F483,LITREF(lit_6),x_1097F484);
  }
  T17 = CALL0(1,VARREF(YmacrosYgensym));
  varF490 = T17;
  T20 = FUNSHELL(1,fun_loop_19,2);
  loopF491 = T20;
  FUNINIT(loopF491, 2,loopF491,varF490);
  T22 = BOXVAL(prop_initsF486);
  T21 = CALL2(0,loopF491,Ynil,T22);
  T19 = T21;
  setsF492 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF490);
  T31 = BOXVAL(xF485);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF490);
  T23 = CALLN(1,VARREF(YmacrosYcat),5,T24,T25,setsF492,T32,Ynil);
  T18 = T23;
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_munch_22) {
  P subforms_;
  P gF496;
  P g_argsF495;
  P g_declsF494;
  P tup3F493;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(subforms_, 0);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),subforms_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,Ynil);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),subforms_);
    T4 = CALL1(1,FREEREF(0),T5);
    tup3F493 = T4;
    T7 = CALL2(1,VARREF(YmacrosYelt),tup3F493,YPint((P)0));
    g_declsF494 = T7;
    T9 = CALL2(1,VARREF(YmacrosYelt),tup3F493,YPint((P)1));
    g_argsF495 = T9;
    T11 = CALL0(1,VARREF(YmacrosYgensym));
    gF496 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF496);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YmacrosYpair),T14,g_declsF494);
    T18 = CALL2(1,VARREF(YmacrosYpair),gF496,g_argsF495);
    T12 = CALL2(1,VARREF(Ytup),T13,T18);
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
  P g_argsF500;
  P g_declsF499;
  P tup4F498;
  P munchF497;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_22,1);
  munchF497 = T1;
  FUNINIT(munchF497, 1,munchF497);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF497,T7);
    tup4F498 = T6;
    T9 = CALL2(1,VARREF(YmacrosYelt),tup4F498,YPint((P)0));
    g_declsF499 = T9;
    T11 = CALL2(1,VARREF(YmacrosYelt),tup4F498,YPint((P)1));
    g_argsF500 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YmacrosYpair),T14,g_argsF500);
    T12 = CALL2(1,VARREF(Ytup),g_declsF499,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1104_24) {
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

FUNCODEDEF(fun_x_1106_25) {
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

FUNCODEDEF(fun_26) {
  P return_;
  P x_1105F504;
  P amountF503;
  P x_1105F502;
  P x_1106F501;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1106_25,1);
  x_1106F501 = T1;
  FUNINIT(x_1106F501, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1105F502 = T3;
  amountF503 = YPfalse;
  amountF503 = BOXFAB(amountF503);
  T6 = CALL2(1,VARREF(YisaQ),x_1105F502,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1105F502,x_1106F501);
    BOXVAL(amountF503) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1105F502);
    x_1105F504 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1105F504,x_1106F501);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1106F501,LITREF(lit_6),x_1105F502);
  }
  T12 = BOXVAL(amountF503);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P amountF515;
  P g_placeF514;
  P g_declsF513;
  P tup6F512;
  P x_1103F511;
  P x_1103F510;
  P x_1103F509;
  P amountF508;
  P placeF507;
  P x_1103F506;
  P x_1104F505;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_24,1);
  x_1104F505 = T1;
  FUNINIT(x_1104F505, 1,return_);
  x_1103F506 = FREEREF(0);
  placeF507 = YPfalse;
  placeF507 = BOXFAB(placeF507);
  amountF508 = YPfalse;
  amountF508 = BOXFAB(amountF508);
  T7 = CALL2(1,VARREF(YisaQ),x_1103F506,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1103F506,LITREF(lit_42),x_1104F505);
    x_1103F509 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1103F509,x_1104F505);
    BOXVAL(placeF507) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1103F509);
    x_1103F510 = T12;
    BOXVAL(amountF508) = x_1103F510;
    x_1103F511 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1103F511,x_1104F505);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1104F505,LITREF(lit_6),x_1103F506);
  }
  T18 = BOXVAL(placeF507);
  T17 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T18);
  tup6F512 = T17;
  T20 = CALL2(1,VARREF(YmacrosYelt),tup6F512,YPint((P)0));
  g_declsF513 = T20;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup6F512,YPint((P)1));
  g_placeF514 = T22;
  T25 = FUNFAB(fun_26,1,amountF508);
  T24 = with_exit(T25);
  amountF515 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YmacrosYcat),g_declsF513,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF514);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T37 = CALL1(1,VARREF(Ylst),g_placeF514);
  T38 = CALL1(1,VARREF(Ylst),amountF515);
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

FUNCODEDEF(fun_28) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1112_29) {
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

FUNCODEDEF(fun_x_1114_30) {
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

FUNCODEDEF(fun_31) {
  P return_;
  P x_1113F519;
  P amountF518;
  P x_1113F517;
  P x_1114F516;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1114_30,1);
  x_1114F516 = T1;
  FUNINIT(x_1114F516, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1113F517 = T3;
  amountF518 = YPfalse;
  amountF518 = BOXFAB(amountF518);
  T6 = CALL2(1,VARREF(YisaQ),x_1113F517,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1113F517,x_1114F516);
    BOXVAL(amountF518) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1113F517);
    x_1113F519 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1113F519,x_1114F516);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1114F516,LITREF(lit_6),x_1113F517);
  }
  T12 = BOXVAL(amountF518);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P amountF530;
  P g_placeF529;
  P g_declsF528;
  P tup8F527;
  P x_1111F526;
  P x_1111F525;
  P x_1111F524;
  P amountF523;
  P placeF522;
  P x_1111F521;
  P x_1112F520;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_29,1);
  x_1112F520 = T1;
  FUNINIT(x_1112F520, 1,return_);
  x_1111F521 = FREEREF(0);
  placeF522 = YPfalse;
  placeF522 = BOXFAB(placeF522);
  amountF523 = YPfalse;
  amountF523 = BOXFAB(amountF523);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F521,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1111F521,LITREF(lit_46),x_1112F520);
    x_1111F524 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1111F524,x_1112F520);
    BOXVAL(placeF522) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F524);
    x_1111F525 = T12;
    BOXVAL(amountF523) = x_1111F525;
    x_1111F526 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1111F526,x_1112F520);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1112F520,LITREF(lit_6),x_1111F521);
  }
  T18 = BOXVAL(placeF522);
  T17 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T18);
  tup8F527 = T17;
  T20 = CALL2(1,VARREF(YmacrosYelt),tup8F527,YPint((P)0));
  g_declsF528 = T20;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup8F527,YPint((P)1));
  g_placeF529 = T22;
  T25 = FUNFAB(fun_31,1,amountF523);
  T24 = with_exit(T25);
  amountF530 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YmacrosYcat),g_declsF528,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF529);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T37 = CALL1(1,VARREF(Ylst),g_placeF529);
  T38 = CALL1(1,VARREF(Ylst),amountF530);
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

FUNCODEDEF(fun_33) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1118_34) {
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

FUNCODEDEF(fun_35) {
  P return_;
  P g_placeF540;
  P g_declsF539;
  P tup10F538;
  P x_1117F537;
  P x_1117F536;
  P x_1117F535;
  P valueF534;
  P placeF533;
  P x_1117F532;
  P x_1118F531;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1118_34,1);
  x_1118F531 = T1;
  FUNINIT(x_1118F531, 1,return_);
  x_1117F532 = FREEREF(0);
  placeF533 = YPfalse;
  placeF533 = BOXFAB(placeF533);
  valueF534 = YPfalse;
  valueF534 = BOXFAB(valueF534);
  T7 = CALL2(1,VARREF(YisaQ),x_1117F532,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1117F532,LITREF(lit_50),x_1118F531);
    x_1117F535 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1117F535,x_1118F531);
    BOXVAL(placeF533) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1117F535);
    x_1117F536 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1117F536,x_1118F531);
    BOXVAL(valueF534) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1117F536);
    x_1117F537 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1117F537,x_1118F531);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1118F531,LITREF(lit_6),x_1117F532);
  }
  T20 = BOXVAL(placeF533);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup10F538 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup10F538,YPint((P)0));
  g_declsF539 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup10F538,YPint((P)1));
  g_placeF540 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YmacrosYcat),g_declsF539,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T32 = CALL1(1,VARREF(Ylst),g_placeF540);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T36 = CALL1(1,VARREF(Ylst),g_placeF540);
  T38 = BOXVAL(valueF534);
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

FUNCODEDEF(fun_36) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_35,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1122_37) {
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

FUNCODEDEF(fun_38) {
  P return_;
  P tmpF554;
  P yg_placeF553;
  P yg_declsF552;
  P tup14F551;
  P xg_placeF550;
  P xg_declsF549;
  P tup13F548;
  P x_1121F547;
  P x_1121F546;
  P x_1121F545;
  P yF544;
  P xF543;
  P x_1121F542;
  P x_1122F541;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1122_37,1);
  x_1122F541 = T1;
  FUNINIT(x_1122F541, 1,return_);
  x_1121F542 = FREEREF(0);
  xF543 = YPfalse;
  xF543 = BOXFAB(xF543);
  yF544 = YPfalse;
  yF544 = BOXFAB(yF544);
  T7 = CALL2(1,VARREF(YisaQ),x_1121F542,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1121F542,LITREF(lit_53),x_1122F541);
    x_1121F545 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1121F545,x_1122F541);
    BOXVAL(xF543) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1121F545);
    x_1121F546 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1121F546,x_1122F541);
    BOXVAL(yF544) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1121F546);
    x_1121F547 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1121F547,x_1122F541);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1122F541,LITREF(lit_6),x_1121F542);
  }
  T20 = BOXVAL(xF543);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup13F548 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup13F548,YPint((P)0));
  xg_declsF549 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup13F548,YPint((P)1));
  xg_placeF550 = T24;
  T27 = BOXVAL(yF544);
  T26 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T27);
  tup14F551 = T26;
  T29 = CALL2(1,VARREF(YmacrosYelt),tup14F551,YPint((P)0));
  yg_declsF552 = T29;
  T31 = CALL2(1,VARREF(YmacrosYelt),tup14F551,YPint((P)1));
  yg_placeF553 = T31;
  T33 = CALL0(1,VARREF(YmacrosYgensym));
  tmpF554 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF554);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF550);
  T39 = CALL3(1,VARREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALLN(1,VARREF(YmacrosYcat),4,xg_declsF549,yg_declsF552,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF550);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF553);
  T43 = CALLN(1,VARREF(YmacrosYcat),4,T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF553);
  T51 = CALL1(1,VARREF(Ylst),tmpF554);
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

FUNCODEDEF(fun_39) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_38,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1126_40) {
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

FUNCODEDEF(fun_41) {
  P return_;
  P valF564;
  P new_colF563;
  P g_placeF562;
  P g_declsF561;
  P tup16F560;
  P x_1125F559;
  P x_1125F558;
  P placeF557;
  P x_1125F556;
  P x_1126F555;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1126_40,1);
  x_1126F555 = T1;
  FUNINIT(x_1126F555, 1,return_);
  x_1125F556 = FREEREF(0);
  placeF557 = YPfalse;
  placeF557 = BOXFAB(placeF557);
  T5 = CALL2(1,VARREF(YisaQ),x_1125F556,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1125F556,LITREF(lit_55),x_1126F555);
    x_1125F558 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1125F558,x_1126F555);
    BOXVAL(placeF557) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1125F558);
    x_1125F559 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1125F559,x_1126F555);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1126F555,LITREF(lit_6),x_1125F556);
  }
  T15 = BOXVAL(placeF557);
  T14 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T15);
  tup16F560 = T14;
  T17 = CALL2(1,VARREF(YmacrosYelt),tup16F560,YPint((P)0));
  g_declsF561 = T17;
  T19 = CALL2(1,VARREF(YmacrosYelt),tup16F560,YPint((P)1));
  g_placeF562 = T19;
  T21 = CALL0(1,VARREF(YmacrosYgensym));
  new_colF563 = T21;
  T23 = CALL0(1,VARREF(YmacrosYgensym));
  valF564 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T33 = CALL1(1,VARREF(Ylst),new_colF563);
  T34 = CALL1(1,VARREF(Ylst),valF564);
  T31 = CALLN(1,VARREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T38 = CALL1(1,VARREF(Ylst),g_placeF562);
  T36 = CALL3(1,VARREF(YmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YmacrosYcat),g_declsF561,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T42 = CALL1(1,VARREF(Ylst),g_placeF562);
  T43 = CALL1(1,VARREF(Ylst),new_colF563);
  T40 = CALLN(1,VARREF(YmacrosYcat),4,T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF564);
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

FUNCODEDEF(fun_42) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_41,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1130_43) {
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

FUNCODEDEF(fun_44) {
  P return_;
  P g_placeF574;
  P g_declsF573;
  P tup18F572;
  P x_1129F571;
  P x_1129F570;
  P x_1129F569;
  P callF568;
  P placeF567;
  P x_1129F566;
  P x_1130F565;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1130_43,1);
  x_1130F565 = T1;
  FUNINIT(x_1130F565, 1,return_);
  x_1129F566 = FREEREF(0);
  placeF567 = YPfalse;
  placeF567 = BOXFAB(placeF567);
  callF568 = YPfalse;
  callF568 = BOXFAB(callF568);
  T7 = CALL2(1,VARREF(YisaQ),x_1129F566,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1129F566,LITREF(lit_59),x_1130F565);
    x_1129F569 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1129F569,x_1130F565);
    BOXVAL(placeF567) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1129F569);
    x_1129F570 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1129F570,x_1130F565);
    BOXVAL(callF568) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1129F570);
    x_1129F571 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1129F571,x_1130F565);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1130F565,LITREF(lit_6),x_1129F566);
  }
  T20 = BOXVAL(placeF567);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup18F572 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup18F572,YPint((P)0));
  g_declsF573 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup18F572,YPint((P)1));
  g_placeF574 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T32 = CALL1(1,VARREF(Ylst),g_placeF574);
  T30 = CALL3(1,VARREF(YmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YmacrosYcat),g_declsF573,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T36 = CALL1(1,VARREF(Ylst),g_placeF574);
  T38 = BOXVAL(callF568);
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

FUNCODEDEF(fun_45) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_44,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1134_46) {
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

FUNCODEDEF(fun_47) {
  P return_;
  P x_1133F581;
  P x_1133F580;
  P x_1133F579;
  P bodyF578;
  P testF577;
  P x_1133F576;
  P x_1134F575;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1134_46,1);
  x_1134F575 = T1;
  FUNINIT(x_1134F575, 1,return_);
  x_1133F576 = FREEREF(0);
  testF577 = YPfalse;
  testF577 = BOXFAB(testF577);
  bodyF578 = YPfalse;
  bodyF578 = BOXFAB(bodyF578);
  T7 = CALL2(1,VARREF(YisaQ),x_1133F576,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1133F576,LITREF(lit_62),x_1134F575);
    x_1133F579 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1133F579,x_1134F575);
    BOXVAL(testF577) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1133F579);
    x_1133F580 = T12;
    BOXVAL(bodyF578) = x_1133F580;
    x_1133F581 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1133F581,x_1134F575);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1134F575,LITREF(lit_6),x_1133F576);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T22 = BOXVAL(testF577);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T26 = BOXVAL(bodyF578);
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

FUNCODEDEF(fun_x_1138_49) {
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

FUNCODEDEF(fun_50) {
  P return_;
  P x_1137F588;
  P x_1137F587;
  P x_1137F586;
  P bodyF585;
  P testF584;
  P x_1137F583;
  P x_1138F582;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1138_49,1);
  x_1138F582 = T1;
  FUNINIT(x_1138F582, 1,return_);
  x_1137F583 = FREEREF(0);
  testF584 = YPfalse;
  testF584 = BOXFAB(testF584);
  bodyF585 = YPfalse;
  bodyF585 = BOXFAB(bodyF585);
  T7 = CALL2(1,VARREF(YisaQ),x_1137F583,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1137F583,LITREF(lit_66),x_1138F582);
    x_1137F586 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1137F586,x_1138F582);
    BOXVAL(testF584) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1137F586);
    x_1137F587 = T12;
    BOXVAL(bodyF585) = x_1137F587;
    x_1137F588 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1137F588,x_1138F582);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1138F582,LITREF(lit_6),x_1137F583);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF584);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF585);
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

FUNCODEDEF(fun_51) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_50,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1146_52) {
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

FUNCODEDEF(fun_x_1148_53) {
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

FUNCODEDEF(fun_x_1150_54) {
  P msg_,args_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
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

FUNCODEDEF(fun_55) {
  P return_;
  P x_1149F590;
  P x_1150F589;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_54,3);
  x_1150F589 = T1;
  FUNINIT(x_1150F589, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1149F590 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1149F590,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1149F590,x_1150F589);
  } else {
    T6 = CALL2(1,x_1150F589,LITREF(lit_6),x_1149F590);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1147F596;
  P x_1147F595;
  P restF594;
  P xF593;
  P x_1147F592;
  P x_1148F591;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_53,1);
  x_1148F591 = T1;
  FUNINIT(x_1148F591, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1147F592 = T3;
  xF593 = YPfalse;
  xF593 = BOXFAB(xF593);
  restF594 = YPfalse;
  restF594 = BOXFAB(restF594);
  T8 = CALL2(1,VARREF(YisaQ),x_1147F592,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1147F592,x_1148F591);
    BOXVAL(xF593) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1147F592);
    x_1147F595 = T11;
    BOXVAL(restF594) = x_1147F595;
    x_1147F596 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1147F596,x_1148F591);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1148F591,LITREF(lit_6),x_1147F592);
  }
  T16 = FUNFAB(fun_55,2,xF593,restF594);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1145F601;
  P x_1145F600;
  P restF599;
  P x_1145F598;
  P x_1146F597;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1146_52,1);
  x_1146F597 = T1;
  FUNINIT(x_1146F597, 1,return_);
  x_1145F598 = FREEREF(0);
  restF599 = YPfalse;
  restF599 = BOXFAB(restF599);
  T5 = CALL2(1,VARREF(YisaQ),x_1145F598,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1145F598,LITREF(lit_68),x_1146F597);
    x_1145F600 = T7;
    BOXVAL(restF599) = x_1145F600;
    x_1145F601 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1145F601,x_1146F597);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1146F597,LITREF(lit_6),x_1145F598);
  }
  T12 = FUNFAB(fun_56,1,restF599);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_57,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1158_59) {
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

FUNCODEDEF(fun_x_1160_60) {
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

FUNCODEDEF(fun_x_1162_61) {
  P msg_,args_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T9 = BOXVAL(FREEREF(1));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
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

FUNCODEDEF(fun_62) {
  P return_;
  P x_1161F603;
  P x_1162F602;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1162_61,3);
  x_1162F602 = T1;
  FUNINIT(x_1162F602, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1161F603 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1161F603,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1161F603,x_1162F602);
  } else {
    T6 = CALL2(1,x_1162F602,LITREF(lit_6),x_1161F603);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1159F609;
  P x_1159F608;
  P restF607;
  P xF606;
  P x_1159F605;
  P x_1160F604;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_60,1);
  x_1160F604 = T1;
  FUNINIT(x_1160F604, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1159F605 = T3;
  xF606 = YPfalse;
  xF606 = BOXFAB(xF606);
  restF607 = YPfalse;
  restF607 = BOXFAB(restF607);
  T8 = CALL2(1,VARREF(YisaQ),x_1159F605,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1159F605,x_1160F604);
    BOXVAL(xF606) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1159F605);
    x_1159F608 = T11;
    BOXVAL(restF607) = x_1159F608;
    x_1159F609 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1159F609,x_1160F604);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1160F604,LITREF(lit_6),x_1159F605);
  }
  T16 = FUNFAB(fun_62,2,xF606,restF607);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1157F614;
  P x_1157F613;
  P restF612;
  P x_1157F611;
  P x_1158F610;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_59,1);
  x_1158F610 = T1;
  FUNINIT(x_1158F610, 1,return_);
  x_1157F611 = FREEREF(0);
  restF612 = YPfalse;
  restF612 = BOXFAB(restF612);
  T5 = CALL2(1,VARREF(YisaQ),x_1157F611,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1157F611,LITREF(lit_73),x_1158F610);
    x_1157F613 = T7;
    BOXVAL(restF612) = x_1157F613;
    x_1157F614 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1157F614,x_1158F610);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1158F610,LITREF(lit_6),x_1157F611);
  }
  T12 = FUNFAB(fun_63,1,restF612);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_64,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1168_66) {
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

FUNCODEDEF(fun_x_1170_67) {
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

FUNCODEDEF(fun_68) {
  P return_;
  P x_1169F620;
  P x_1169F619;
  P bodyF618;
  P condF617;
  P x_1169F616;
  P x_1170F615;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_67,2);
  x_1170F615 = T1;
  FUNINIT(x_1170F615, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1169F616 = T3;
  condF617 = YPfalse;
  condF617 = BOXFAB(condF617);
  bodyF618 = YPfalse;
  bodyF618 = BOXFAB(bodyF618);
  T9 = CALL2(1,VARREF(YisaQ),x_1169F616,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1169F616,x_1170F615);
    BOXVAL(condF617) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1169F616);
    x_1169F619 = T12;
    BOXVAL(bodyF618) = x_1169F619;
    x_1169F620 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1169F620,x_1170F615);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1170F615,LITREF(lit_6),x_1169F616);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF617);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF618);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
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

FUNCODEDEF(fun_69) {
  P return_;
  P x_1167F625;
  P x_1167F624;
  P casesF623;
  P x_1167F622;
  P x_1168F621;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1168_66,1);
  x_1168F621 = T1;
  FUNINIT(x_1168F621, 1,return_);
  x_1167F622 = FREEREF(0);
  casesF623 = YPfalse;
  casesF623 = BOXFAB(casesF623);
  T5 = CALL2(1,VARREF(YisaQ),x_1167F622,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1167F622,LITREF(lit_77),x_1168F621);
    x_1167F624 = T7;
    BOXVAL(casesF623) = x_1167F624;
    x_1167F625 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1167F625,x_1168F621);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1168F621,LITREF(lit_6),x_1167F622);
  }
  T13 = BOXVAL(casesF623);
  T12 = CALL1(1,VARREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_68,1,casesF623);
    T14 = with_exit(T15);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_69,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1176_71) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(1));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_85),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1178_72) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(1));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_87),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T3 = CALL1(1,VARREF(Ylst),x_);
  T0 = CALLN(1,VARREF(YmacrosYcat),4,T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P x_1177F629;
  P valuesF628;
  P x_1177F627;
  P x_1178F626;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1178_72,2);
  x_1178F626 = T1;
  FUNINIT(x_1178F626, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  x_1177F627 = T3;
  valuesF628 = YPfalse;
  valuesF628 = BOXFAB(valuesF628);
  T6 = CALL2(1,VARREF(YisaQ),x_1177F627,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF628) = x_1177F627;
    x_1177F629 = Ynil;
    T8 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1177F629,x_1178F626);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1178F626,LITREF(lit_6),x_1177F627);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T16 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF628);
  T15 = CALL2(1,VARREF(YmacrosYmap),T16,T17);
  T13 = CALL3(1,VARREF(YmacrosYcat),T14,T15,Ynil);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T21 = BOXVAL(FREEREF(4));
  T19 = CALL3(1,VARREF(YmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T24 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T23 = CALL3(1,VARREF(YmacrosYdo_case_by),FREEREF(3),FREEREF(2),T24);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T10 = CALLN(1,VARREF(YmacrosYcat),5,T11,T12,T18,T22,Ynil);
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1175F635;
  P x_1175F634;
  P bodyF633;
  P condF632;
  P x_1175F631;
  P x_1176F630;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_71,2);
  x_1176F630 = T1;
  FUNINIT(x_1176F630, 2,return_,FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1175F631 = T3;
  condF632 = YPfalse;
  condF632 = BOXFAB(condF632);
  bodyF633 = YPfalse;
  bodyF633 = BOXFAB(bodyF633);
  T8 = CALL2(1,VARREF(YisaQ),x_1175F631,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1175F631,x_1176F630);
    BOXVAL(condF632) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1175F631);
    x_1175F634 = T11;
    BOXVAL(bodyF633) = x_1175F634;
    x_1175F635 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1175F635,x_1176F630);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1176F630,LITREF(lit_6),x_1175F631);
  }
  T17 = BOXVAL(condF632);
  T16 = CALL2(1,VARREF(YmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T20 = BOXVAL(bodyF633);
    T18 = CALL3(1,VARREF(YmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_74,5,FREEREF(0),condF632,FREEREF(1),FREEREF(2),bodyF633);
    T21 = with_exit(T22);
    T15 = T21;
  }
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YmacrosYdo_case_by) {
  P val_,tst_,cases_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(tst_, 1);
  ARG(cases_, 2);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),cases_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = FUNFAB(fun_75,3,cases_,tst_,val_);
    T2 = with_exit(T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1182_77) {
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

FUNCODEDEF(fun_78) {
  P return_;
  P tst_varF646;
  P val_varF645;
  P x_1181F644;
  P x_1181F643;
  P x_1181F642;
  P x_1181F641;
  P casesF640;
  P tstF639;
  P valF638;
  P x_1181F637;
  P x_1182F636;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1182_77,1);
  x_1182F636 = T1;
  FUNINIT(x_1182F636, 1,return_);
  x_1181F637 = FREEREF(0);
  valF638 = YPfalse;
  valF638 = BOXFAB(valF638);
  tstF639 = YPfalse;
  tstF639 = BOXFAB(tstF639);
  casesF640 = YPfalse;
  casesF640 = BOXFAB(casesF640);
  T9 = CALL2(1,VARREF(YisaQ),x_1181F637,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1181F637,LITREF(lit_90),x_1182F636);
    x_1181F641 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1181F641,x_1182F636);
    BOXVAL(valF638) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1181F641);
    x_1181F642 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1181F642,x_1182F636);
    BOXVAL(tstF639) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1181F642);
    x_1181F643 = T17;
    BOXVAL(casesF640) = x_1181F643;
    x_1181F644 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1181F644,x_1182F636);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1182F636,LITREF(lit_6),x_1181F637);
  }
  T22 = CALL0(1,VARREF(YmacrosYgensym));
  val_varF645 = T22;
  T24 = CALL0(1,VARREF(YmacrosYgensym));
  tst_varF646 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF645);
  T33 = BOXVAL(valF638);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF646);
  T38 = BOXVAL(tstF639);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF640);
  T40 = CALL3(1,VARREF(YmacrosYdo_case_by),val_varF645,tst_varF646,T41);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T25 = CALLN(1,VARREF(YmacrosYcat),4,T26,T27,T39,Ynil);
  T23 = T25;
  T21 = T23;
  T7 = T21;
  T5 = T7;
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

FUNCODEDEF(fun_x_1186_80) {
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

FUNCODEDEF(fun_81) {
  P return_;
  P x_1185F653;
  P x_1185F652;
  P x_1185F651;
  P casesF650;
  P valF649;
  P x_1185F648;
  P x_1186F647;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1186_80,1);
  x_1186F647 = T1;
  FUNINIT(x_1186F647, 1,return_);
  x_1185F648 = FREEREF(0);
  valF649 = YPfalse;
  valF649 = BOXFAB(valF649);
  casesF650 = YPfalse;
  casesF650 = BOXFAB(casesF650);
  T7 = CALL2(1,VARREF(YisaQ),x_1185F648,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1185F648,LITREF(lit_92),x_1186F647);
    x_1185F651 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1185F651,x_1186F647);
    BOXVAL(valF649) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1185F651);
    x_1185F652 = T12;
    BOXVAL(casesF650) = x_1185F652;
    x_1185F653 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1185F653,x_1186F647);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1186F647,LITREF(lit_6),x_1185F648);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T19 = BOXVAL(valF649);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T21 = BOXVAL(casesF650);
  T16 = CALLN(1,VARREF(YmacrosYcat),5,T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_81,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1194_83) {
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

FUNCODEDEF(fun_x_1198_84) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_98));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P return_;
  P varF664;
  P x_1197F663;
  P x_1197F662;
  P x_1197F661;
  P x_1197F660;
  P x_1197F659;
  P restF658;
  P thenF657;
  P patF656;
  P x_1197F655;
  P x_1198F654;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1198_84,1);
  x_1198F654 = T1;
  FUNINIT(x_1198F654, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1197F655 = T3;
  patF656 = YPfalse;
  patF656 = BOXFAB(patF656);
  thenF657 = YPfalse;
  thenF657 = BOXFAB(thenF657);
  restF658 = YPfalse;
  restF658 = BOXFAB(restF658);
  T10 = CALL2(1,VARREF(YisaQ),x_1197F655,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1197F655,x_1198F654);
    x_1197F659 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1197F659,x_1198F654);
    BOXVAL(patF656) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1197F659);
    x_1197F660 = T15;
    BOXVAL(thenF657) = x_1197F660;
    x_1197F661 = Ynil;
    T17 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1197F661,x_1198F654);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1197F655);
    x_1197F662 = T18;
    BOXVAL(restF658) = x_1197F662;
    x_1197F663 = Ynil;
    T20 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1197F663,x_1198F654);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1198F654,LITREF(lit_6),x_1197F655);
  }
  T24 = BOXVAL(patF656);
  T23 = CALL2(1,VARREF(YmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T27 = BOXVAL(thenF657);
    T25 = CALL3(1,VARREF(YmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YmacrosYgensym));
    varF664 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF664);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T45 = BOXVAL(patF656);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF664);
    T43 = CALL3(1,VARREF(YmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T50 = BOXVAL(thenF657);
    T48 = CALL3(1,VARREF(YmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
    T54 = CALL1(1,VARREF(Ylst),varF664);
    T55 = BOXVAL(restF658);
    T52 = CALLN(1,VARREF(YmacrosYcat),4,T53,T54,T55,Ynil);
    T51 = CALL1(1,VARREF(Ylst),T52);
    T40 = CALLN(1,VARREF(YmacrosYcat),5,T41,T42,T47,T51,Ynil);
    T39 = CALL1(1,VARREF(Ylst),T40);
    T30 = CALLN(1,VARREF(YmacrosYcat),4,T31,T32,T39,Ynil);
    T28 = T30;
    T22 = T28;
  }
  T8 = T22;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1196_86) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_85,2,FREEREF(1),FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P return_;
  P x_1195F666;
  P x_1196F665;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_86,3);
  x_1196F665 = T1;
  FUNINIT(x_1196F665, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1195F666 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1195F666,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1195F666,x_1196F665);
  } else {
    T6 = CALL2(1,x_1196F665,LITREF(lit_6),x_1195F666);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T7 = CALL3(1,VARREF(YmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P return_;
  P x_1193F673;
  P x_1193F672;
  P x_1193F671;
  P casesF670;
  P expF669;
  P x_1193F668;
  P x_1194F667;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1194_83,1);
  x_1194F667 = T1;
  FUNINIT(x_1194F667, 1,return_);
  x_1193F668 = FREEREF(0);
  expF669 = YPfalse;
  expF669 = BOXFAB(expF669);
  casesF670 = YPfalse;
  casesF670 = BOXFAB(casesF670);
  T7 = CALL2(1,VARREF(YisaQ),x_1193F668,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1193F668,LITREF(lit_95),x_1194F667);
    x_1193F671 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1193F671,x_1194F667);
    BOXVAL(expF669) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1193F671);
    x_1193F672 = T12;
    BOXVAL(casesF670) = x_1193F672;
    x_1193F673 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1193F673,x_1194F667);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1194F667,LITREF(lit_6),x_1193F668);
  }
  T17 = FUNFAB(fun_87,2,casesF670,expF669);
  T16 = with_exit(T17);
  T5 = T16;
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

FUNCODEDEF(fun_x_1202_90) {
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
  P x_1201F682;
  P x_1201F681;
  P x_1201F680;
  P x_1201F679;
  P argsF678;
  P messageF677;
  P condF676;
  P x_1201F675;
  P x_1202F674;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1202_90,1);
  x_1202F674 = T1;
  FUNINIT(x_1202F674, 1,return_);
  x_1201F675 = FREEREF(0);
  condF676 = YPfalse;
  condF676 = BOXFAB(condF676);
  messageF677 = YPfalse;
  messageF677 = BOXFAB(messageF677);
  argsF678 = YPfalse;
  argsF678 = BOXFAB(argsF678);
  T9 = CALL2(1,VARREF(YisaQ),x_1201F675,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1201F675,LITREF(lit_102),x_1202F674);
    x_1201F679 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1201F679,x_1202F674);
    BOXVAL(condF676) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1201F679);
    x_1201F680 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1201F680,x_1202F674);
    BOXVAL(messageF677) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1201F680);
    x_1201F681 = T17;
    BOXVAL(argsF678) = x_1201F681;
    x_1201F682 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1201F682,x_1202F674);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1202F674,LITREF(lit_6),x_1201F675);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T27 = BOXVAL(condF676);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF677);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF678);
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

FUNCODEDEF(fun_x_1210_93) {
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

FUNCODEDEF(fun_x_1212_94) {
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

FUNCODEDEF(fun_x_1214_95) {
  P msg_,args_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(2));
  T5 = CALL3(1,VARREF(YmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  P return_;
  P x_1213F689;
  P x_1213F688;
  P x_1213F687;
  P valF686;
  P keyF685;
  P x_1213F684;
  P x_1214F683;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1214_95,3);
  x_1214F683 = T1;
  FUNINIT(x_1214F683, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1213F684 = T3;
  keyF685 = YPfalse;
  keyF685 = BOXFAB(keyF685);
  valF686 = YPfalse;
  valF686 = BOXFAB(valF686);
  T8 = CALL2(1,VARREF(YisaQ),x_1213F684,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1213F684,LITREF(lit_56),x_1214F683);
    x_1213F687 = T10;
    T12 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1213F687,x_1214F683);
    BOXVAL(keyF685) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1213F687);
    x_1213F688 = T13;
    T15 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1213F688,x_1214F683);
    BOXVAL(valF686) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1213F688);
    x_1213F689 = T16;
    T17 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1213F689,x_1214F683);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1214F683,LITREF(lit_6),x_1213F684);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T24 = BOXVAL(keyF685);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF686);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALLN(1,VARREF(YmacrosYcat),4,T22,T23,T25,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T33 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T31 = CALL3(1,VARREF(YmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T37 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T35 = CALL3(1,VARREF(YmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALLN(1,VARREF(YmacrosYcat),4,T29,T30,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T19 = CALL3(1,VARREF(YmacrosYcat),T20,T27,Ynil);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P stateF696;
  P x_1211F695;
  P x_1211F694;
  P expF693;
  P varF692;
  P x_1211F691;
  P x_1212F690;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_94,1);
  x_1212F690 = T1;
  FUNINIT(x_1212F690, 1,return_);
  x_1211F691 = FREEREF(0);
  varF692 = YPfalse;
  varF692 = BOXFAB(varF692);
  expF693 = YPfalse;
  expF693 = BOXFAB(expF693);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F691,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1211F691,x_1212F690);
    BOXVAL(varF692) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1211F691);
    x_1211F694 = T10;
    T12 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1211F694,x_1212F690);
    BOXVAL(expF693) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1211F694);
    x_1211F695 = T13;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1211F695,x_1212F690);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1212F690,LITREF(lit_6),x_1211F691);
  }
  T17 = CALL0(1,VARREF(YmacrosYgensym));
  stateF696 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(2));
  T22 = CALL1(1,VARREF(Ylst),stateF696);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_112));
  T27 = BOXVAL(expF693);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YmacrosYpair),T21,FREEREF(3));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T31 = CALL1(1,VARREF(Ylst),stateF696);
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YmacrosYpair),T29,FREEREF(4));
  T34 = FUNFAB(fun_96,2,varF692,stateF696);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YmacrosYpair),T33,FREEREF(5));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T38 = CALL1(1,VARREF(Ylst),stateF696);
  T36 = CALL3(1,VARREF(YmacrosYcat),T37,T38,Ynil);
  T35 = CALL2(1,VARREF(YmacrosYpair),T36,FREEREF(6));
  T18 = CALLN(0,FREEREF(1),5,T19,T20,T28,T32,T35);
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF698;
  P loopF697;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(clauses_, 0);
  ARG(inits_, 1);
  ARG(preds_, 2);
  ARG(nows_, 3);
  ARG(nexts_, 4);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),clauses_);
  if (T1 != YPfalse) {
    T3 = CALL0(1,VARREF(YmacrosYgensym));
    loopF697 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
    T6 = CALL1(1,VARREF(Ylst),loopF697);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
    T12 = CALL3(1,VARREF(YmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF697);
    T20 = CALL3(1,VARREF(YmacrosYcat),T21,nexts_,Ynil);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T15 = CALLN(1,VARREF(YmacrosYcat),5,T16,T17,T18,T19,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T9 = CALLN(1,VARREF(YmacrosYcat),4,T10,T11,T14,Ynil);
    T8 = CALL1(1,VARREF(Ylst),T9);
    T4 = CALLN(1,VARREF(YmacrosYcat),5,T5,T6,T7,T8,Ynil);
    T2 = T4;
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF698 = T23;
    T25 = FUNFAB(fun_97,7,clauseF698,FREEREF(1),clauses_,inits_,preds_,nows_,nexts_);
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF708;
  P x_1209F707;
  P x_1209F706;
  P x_1209F705;
  P x_1209F704;
  P x_1209F703;
  P bodyF702;
  P clausesF701;
  P x_1209F700;
  P x_1210F699;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1210_93,1);
  x_1210F699 = T1;
  FUNINIT(x_1210F699, 1,return_);
  x_1209F700 = FREEREF(0);
  clausesF701 = YPfalse;
  clausesF701 = BOXFAB(clausesF701);
  bodyF702 = YPfalse;
  bodyF702 = BOXFAB(bodyF702);
  T7 = CALL2(1,VARREF(YisaQ),x_1209F700,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1209F700,LITREF(lit_104),x_1210F699);
    x_1209F703 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1209F703,x_1210F699);
    x_1209F704 = T11;
    BOXVAL(clausesF701) = x_1209F704;
    x_1209F705 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1209F705,x_1210F699);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1209F703);
    x_1209F706 = T14;
    BOXVAL(bodyF702) = x_1209F706;
    x_1209F707 = Ynil;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1209F707,x_1210F699);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1210F699,LITREF(lit_6),x_1209F700);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF708 = T19;
  FUNINIT(grokF708, 2,bodyF702,grokF708);
  T21 = BOXVAL(clausesF701);
  T20 = CALLN(0,grokF708,5,T21,Ynil,Ynil,Ynil,Ynil);
  T18 = T20;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_99,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1218_101) {
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

FUNCODEDEF(fun_102) {
  P return_;
  P x_1217F715;
  P x_1217F714;
  P x_1217F713;
  P bodyF712;
  P testF711;
  P x_1217F710;
  P x_1218F709;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1218_101,1);
  x_1218F709 = T1;
  FUNINIT(x_1218F709, 1,return_);
  x_1217F710 = FREEREF(0);
  testF711 = YPfalse;
  testF711 = BOXFAB(testF711);
  bodyF712 = YPfalse;
  bodyF712 = BOXFAB(bodyF712);
  T7 = CALL2(1,VARREF(YisaQ),x_1217F710,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1217F710,LITREF(lit_119),x_1218F709);
    x_1217F713 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1217F713,x_1218F709);
    BOXVAL(testF711) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1217F713);
    x_1217F714 = T12;
    BOXVAL(bodyF712) = x_1217F714;
    x_1217F715 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1217F715,x_1218F709);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1218F709,LITREF(lit_6),x_1217F710);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T24 = BOXVAL(testF711);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF712);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T27 = CALL2(1,VARREF(YmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALLN(1,VARREF(YmacrosYcat),5,T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALLN(1,VARREF(YmacrosYcat),5,T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_103) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_102,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1222_104) {
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

FUNCODEDEF(fun_105) {
  P return_;
  P x_1221F722;
  P x_1221F721;
  P x_1221F720;
  P bodyF719;
  P testF718;
  P x_1221F717;
  P x_1222F716;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1222_104,1);
  x_1222F716 = T1;
  FUNINIT(x_1222F716, 1,return_);
  x_1221F717 = FREEREF(0);
  testF718 = YPfalse;
  testF718 = BOXFAB(testF718);
  bodyF719 = YPfalse;
  bodyF719 = BOXFAB(bodyF719);
  T7 = CALL2(1,VARREF(YisaQ),x_1221F717,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1221F717,LITREF(lit_122),x_1222F716);
    x_1221F720 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1221F720,x_1222F716);
    BOXVAL(testF718) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1221F720);
    x_1221F721 = T12;
    BOXVAL(bodyF719) = x_1221F721;
    x_1221F722 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1221F722,x_1222F716);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1222F716,LITREF(lit_6),x_1221F717);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T24 = BOXVAL(testF718);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF719);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T27 = CALL2(1,VARREF(YmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALLN(1,VARREF(YmacrosYcat),5,T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALLN(1,VARREF(YmacrosYcat),5,T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_105,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1226_107) {
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

FUNCODEDEF(fun_108) {
  P return_;
  P x_1225F729;
  P x_1225F728;
  P x_1225F727;
  P expF726;
  P bindingF725;
  P x_1225F724;
  P x_1226F723;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1226_107,1);
  x_1226F723 = T1;
  FUNINIT(x_1226F723, 1,return_);
  x_1225F724 = FREEREF(0);
  bindingF725 = YPfalse;
  bindingF725 = BOXFAB(bindingF725);
  expF726 = YPfalse;
  expF726 = BOXFAB(expF726);
  T7 = CALL2(1,VARREF(YisaQ),x_1225F724,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1225F724,LITREF(lit_124),x_1226F723);
    x_1225F727 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1225F727,x_1226F723);
    BOXVAL(bindingF725) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1225F727);
    x_1225F728 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1225F728,x_1226F723);
    BOXVAL(expF726) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1225F728);
    x_1225F729 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1225F729,x_1226F723);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1226F723,LITREF(lit_6),x_1225F724);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_125));
  T21 = BOXVAL(bindingF725);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF726);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALLN(1,VARREF(YmacrosYcat),4,T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_108,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1234_110) {
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

FUNCODEDEF(fun_x_1238_111) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_130),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P return_;
  P old_valueF741;
  P nameF740;
  P x_1237F739;
  P x_1237F738;
  P x_1237F737;
  P x_1237F736;
  P x_1237F735;
  P restF734;
  P valueF733;
  P varF732;
  P x_1237F731;
  P x_1238F730;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1238_111,2);
  x_1238F730 = T1;
  FUNINIT(x_1238F730, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  x_1237F731 = T3;
  varF732 = YPfalse;
  varF732 = BOXFAB(varF732);
  valueF733 = YPfalse;
  valueF733 = BOXFAB(valueF733);
  restF734 = YPfalse;
  restF734 = BOXFAB(restF734);
  T10 = CALL2(1,VARREF(YisaQ),x_1237F731,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1237F731,x_1238F730);
    x_1237F735 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1237F735,x_1238F730);
    BOXVAL(varF732) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1237F735);
    x_1237F736 = T15;
    T17 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1237F736,x_1238F730);
    BOXVAL(valueF733) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1237F736);
    x_1237F737 = T18;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1237F737,x_1238F730);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1237F731);
    x_1237F738 = T20;
    BOXVAL(restF734) = x_1237F738;
    x_1237F739 = Ynil;
    T22 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1237F739,x_1238F730);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1238F730,LITREF(lit_6),x_1237F731);
  }
  T26 = BOXVAL(varF732);
  T25 = CALL1(1,VARREF(YmacrosYvar_name),T26);
  nameF740 = T25;
  T28 = CALL0(1,VARREF(YmacrosYgensym));
  old_valueF741 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF741);
  T36 = CALL1(1,VARREF(Ylst),nameF740);
  T34 = CALL3(1,VARREF(YmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T46 = CALL1(1,VARREF(Ylst),nameF740);
  T48 = BOXVAL(valueF733);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALLN(1,VARREF(YmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T54 = BOXVAL(restF734);
  T53 = CALL2(1,VARREF(YmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALLN(1,VARREF(YmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALLN(1,VARREF(YmacrosYcat),4,T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T59 = CALL1(1,VARREF(Ylst),nameF740);
  T60 = CALL1(1,VARREF(Ylst),old_valueF741);
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

FUNCODEDEF(fun_x_1236_113) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_112,2,FREEREF(1),FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P return_;
  P x_1235F743;
  P x_1236F742;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_113,3);
  x_1236F742 = T1;
  FUNINIT(x_1236F742, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1235F743 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1235F743,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1235F743,x_1236F742);
  } else {
    T6 = CALL2(1,x_1236F742,LITREF(lit_6),x_1235F743);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P return_;
  P x_1233F750;
  P x_1233F749;
  P x_1233F748;
  P bodyF747;
  P bindingsF746;
  P x_1233F745;
  P x_1234F744;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1234_110,1);
  x_1234F744 = T1;
  FUNINIT(x_1234F744, 1,return_);
  x_1233F745 = FREEREF(0);
  bindingsF746 = YPfalse;
  bindingsF746 = BOXFAB(bindingsF746);
  bodyF747 = YPfalse;
  bodyF747 = BOXFAB(bodyF747);
  T7 = CALL2(1,VARREF(YisaQ),x_1233F745,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1233F745,LITREF(lit_127),x_1234F744);
    x_1233F748 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1233F748,x_1234F744);
    BOXVAL(bindingsF746) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1233F748);
    x_1233F749 = T12;
    BOXVAL(bodyF747) = x_1233F749;
    x_1233F750 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1233F750,x_1234F744);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1234F744,LITREF(lit_6),x_1233F745);
  }
  T17 = FUNFAB(fun_114,2,bindingsF746,bodyF747);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_116) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_115,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1242_117) {
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

FUNCODEDEF(fun_118) {
  P return_;
  P vnamF760;
  P typF759;
  P namF758;
  P x_1241F757;
  P x_1241F756;
  P x_1241F755;
  P valueF754;
  P varF753;
  P x_1241F752;
  P x_1242F751;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1242_117,1);
  x_1242F751 = T1;
  FUNINIT(x_1242F751, 1,return_);
  x_1241F752 = FREEREF(0);
  varF753 = YPfalse;
  varF753 = BOXFAB(varF753);
  valueF754 = YPfalse;
  valueF754 = BOXFAB(valueF754);
  T7 = CALL2(1,VARREF(YisaQ),x_1241F752,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1241F752,LITREF(lit_133),x_1242F751);
    x_1241F755 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1241F755,x_1242F751);
    BOXVAL(varF753) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1241F755);
    x_1241F756 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1241F756,x_1242F751);
    BOXVAL(valueF754) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1241F756);
    x_1241F757 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1241F757,x_1242F751);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1242F751,LITREF(lit_6),x_1241F752);
  }
  T20 = BOXVAL(varF753);
  T19 = CALL1(1,VARREF(YmacrosYvar_name),T20);
  namF758 = T19;
  T23 = BOXVAL(varF753);
  T22 = CALL1(1,VARREF(YmacrosYvar_type),T23);
  typF759 = T22;
  T25 = CALL3(1,VARREF(YmacrosYcat_sym),LITREF(lit_134),namF758,LITREF(lit_135));
  vnamF760 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_125));
  T31 = CALL1(1,VARREF(Ylst),vnamF760);
  T33 = BOXVAL(valueF754);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALLN(1,VARREF(YmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T37 = CALL1(1,VARREF(Ylst),namF758);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_137));
  T41 = CALL1(1,VARREF(Ylst),typF759);
  T39 = CALL3(1,VARREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF760);
  T35 = CALLN(1,VARREF(YmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T47 = CALL1(1,VARREF(YmacrosYfab_setter_name),namF758);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T53 = CALL1(1,VARREF(Ylst),typF759);
  T51 = CALL3(1,VARREF(YmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T57 = CALL1(1,VARREF(Ylst),vnamF760);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
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

FUNCODEDEF(fun_119) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_118,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1246_120) {
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

FUNCODEDEF(fun_121) {
  P return_;
  P x_1245F765;
  P x_1245F764;
  P bodyF763;
  P x_1245F762;
  P x_1246F761;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1246_120,1);
  x_1246F761 = T1;
  FUNINIT(x_1246F761, 1,return_);
  x_1245F762 = FREEREF(0);
  bodyF763 = YPfalse;
  bodyF763 = BOXFAB(bodyF763);
  T5 = CALL2(1,VARREF(YisaQ),x_1245F762,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1245F762,LITREF(lit_140),x_1246F761);
    x_1245F764 = T7;
    BOXVAL(bodyF763) = x_1245F764;
    x_1245F765 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1245F765,x_1246F761);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1246F761,LITREF(lit_6),x_1245F762);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF763);
  T11 = CALLN(1,VARREF(YmacrosYcat),4,T12,T13,T19,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_121,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1250_123) {
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

FUNCODEDEF(fun_124) {
  P return_;
  P x_1249F770;
  P x_1249F769;
  P namesF768;
  P x_1249F767;
  P x_1250F766;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1250_123,1);
  x_1250F766 = T1;
  FUNINIT(x_1250F766, 1,return_);
  x_1249F767 = FREEREF(0);
  namesF768 = YPfalse;
  namesF768 = BOXFAB(namesF768);
  T5 = CALL2(1,VARREF(YisaQ),x_1249F767,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1249F767,LITREF(lit_143),x_1250F766);
    x_1249F769 = T7;
    BOXVAL(namesF768) = x_1249F769;
    x_1249F770 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1249F770,x_1250F766);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1250F766,LITREF(lit_6),x_1249F767);
  }
  T13 = BOXVAL(namesF768);
  T12 = CALL1(1,VARREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF768);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALLN(1,VARREF(YmacrosYcat),4,T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
    T28 = BOXVAL(namesF768);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
    T33 = BOXVAL(namesF768);
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

FUNCODEDEF(fun_125) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_124,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1264_126) {
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

FUNCODEDEF(fun_x_1266_127) {
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

FUNCODEDEF(fun_128) {
  P return_;
  P x_1265F777;
  P x_1265F776;
  P x_1265F775;
  P restF774;
  P nameF773;
  P x_1265F772;
  P x_1266F771;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1266_127,1);
  x_1266F771 = T1;
  FUNINIT(x_1266F771, 1,return_);
  x_1265F772 = FREEREF(0);
  nameF773 = YPfalse;
  nameF773 = BOXFAB(nameF773);
  restF774 = YPfalse;
  restF774 = BOXFAB(restF774);
  T7 = CALL2(1,VARREF(YisaQ),x_1265F772,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1265F772,LITREF(lit_149),x_1266F771);
    x_1265F775 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1265F775,x_1266F771);
    BOXVAL(nameF773) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1265F775);
    x_1265F776 = T12;
    BOXVAL(restF774) = x_1265F776;
    x_1265F777 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1265F777,x_1266F771);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1266F771,LITREF(lit_6),x_1265F772);
  }
  T17 = BOXVAL(nameF773);
  T18 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),T17,T18);
  BOXVAL(FREEREF(1)) = T16;
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T24 = BOXVAL(nameF773);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T25 = BOXVAL(FREEREF(1));
  T20 = CALL2(1,VARREF(YmacrosYpair),T21,T25);
  T19 = BOXVAL(FREEREF(1)) = T20;
  T5 = T19;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1268_129) {
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

FUNCODEDEF(fun_130) {
  P return_;
  P x_1267F784;
  P x_1267F783;
  P x_1267F782;
  P restF781;
  P nameF780;
  P x_1267F779;
  P x_1268F778;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1268_129,1);
  x_1268F778 = T1;
  FUNINIT(x_1268F778, 1,return_);
  x_1267F779 = FREEREF(0);
  nameF780 = YPfalse;
  nameF780 = BOXFAB(nameF780);
  restF781 = YPfalse;
  restF781 = BOXFAB(restF781);
  T7 = CALL2(1,VARREF(YisaQ),x_1267F779,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1267F779,LITREF(lit_151),x_1268F778);
    x_1267F782 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1267F782,x_1268F778);
    BOXVAL(nameF780) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1267F782);
    x_1267F783 = T12;
    BOXVAL(restF781) = x_1267F783;
    x_1267F784 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1267F784,x_1268F778);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1268F778,LITREF(lit_6),x_1267F779);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF780);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YmacrosYcat),T21,T22,Ynil);
  T24 = BOXVAL(FREEREF(1));
  T19 = CALL2(1,VARREF(YmacrosYpair),T20,T24);
  T18 = BOXVAL(FREEREF(1)) = T19;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1270_131) {
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

FUNCODEDEF(fun_132) {
  P return_;
  P x_1269F791;
  P x_1269F790;
  P x_1269F789;
  P restF788;
  P nameF787;
  P x_1269F786;
  P x_1270F785;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1270_131,1);
  x_1270F785 = T1;
  FUNINIT(x_1270F785, 1,return_);
  x_1269F786 = FREEREF(0);
  nameF787 = YPfalse;
  nameF787 = BOXFAB(nameF787);
  restF788 = YPfalse;
  restF788 = BOXFAB(restF788);
  T7 = CALL2(1,VARREF(YisaQ),x_1269F786,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1269F786,LITREF(lit_153),x_1270F785);
    x_1269F789 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1269F789,x_1270F785);
    BOXVAL(nameF787) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1269F789);
    x_1269F790 = T12;
    BOXVAL(restF788) = x_1269F790;
    x_1269F791 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1269F791,x_1270F785);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1270F785,LITREF(lit_6),x_1269F786);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF787);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YmacrosYcat),T21,T22,Ynil);
  T24 = BOXVAL(FREEREF(1));
  T19 = CALL2(1,VARREF(YmacrosYpair),T20,T24);
  T18 = BOXVAL(FREEREF(1)) = T19;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1272_133) {
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

FUNCODEDEF(fun_134) {
  P return_;
  P x_1271F798;
  P x_1271F797;
  P x_1271F796;
  P restF795;
  P nameF794;
  P x_1271F793;
  P x_1272F792;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1272_133,1);
  x_1272F792 = T1;
  FUNINIT(x_1272F792, 1,return_);
  x_1271F793 = FREEREF(0);
  nameF794 = YPfalse;
  nameF794 = BOXFAB(nameF794);
  restF795 = YPfalse;
  restF795 = BOXFAB(restF795);
  T7 = CALL2(1,VARREF(YisaQ),x_1271F793,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1271F793,LITREF(lit_125),x_1272F792);
    x_1271F796 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1271F796,x_1272F792);
    BOXVAL(nameF794) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1271F796);
    x_1271F797 = T12;
    BOXVAL(restF795) = x_1271F797;
    x_1271F798 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1271F798,x_1272F792);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1272F792,LITREF(lit_6),x_1271F793);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF794);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YmacrosYcat),T21,T22,Ynil);
  T24 = BOXVAL(FREEREF(1));
  T19 = CALL2(1,VARREF(YmacrosYpair),T20,T24);
  T18 = BOXVAL(FREEREF(1)) = T19;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1274_135) {
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

FUNCODEDEF(fun_136) {
  P return_;
  P x_1273F809;
  P x_1273F808;
  P x_1273F807;
  P x_1273F806;
  P x_1273F805;
  P x_1273F804;
  P defaultF803;
  P paramsF802;
  P nameF801;
  P x_1273F800;
  P x_1274F799;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1274_135,1);
  x_1274F799 = T1;
  FUNINIT(x_1274F799, 1,return_);
  x_1273F800 = FREEREF(0);
  nameF801 = YPfalse;
  nameF801 = BOXFAB(nameF801);
  paramsF802 = YPfalse;
  paramsF802 = BOXFAB(paramsF802);
  defaultF803 = YPfalse;
  defaultF803 = BOXFAB(defaultF803);
  T9 = CALL2(1,VARREF(YisaQ),x_1273F800,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1273F800,LITREF(lit_156),x_1274F799);
    x_1273F804 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1273F804,x_1274F799);
    BOXVAL(nameF801) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1273F804);
    x_1273F805 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_1273F805,x_1274F799);
    x_1273F806 = T16;
    BOXVAL(paramsF802) = x_1273F806;
    x_1273F807 = Ynil;
    T18 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1273F807,x_1274F799);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1273F805);
    x_1273F808 = T19;
    BOXVAL(defaultF803) = x_1273F808;
    x_1273F809 = Ynil;
    T21 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1273F809,x_1274F799);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1274F799,LITREF(lit_6),x_1273F800);
  }
  T24 = BOXVAL(FREEREF(1));
  T23 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T24);
  BOXVAL(FREEREF(1)) = T23;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T29 = BOXVAL(nameF801);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YmacrosYcat),T27,T28,Ynil);
  T30 = BOXVAL(FREEREF(1));
  T25 = CALL2(1,VARREF(YmacrosYpair),T26,T30);
  BOXVAL(FREEREF(1)) = T25;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T37 = BOXVAL(nameF801);
  T36 = CALL1(1,VARREF(YmacrosYfab_setter_name),T37);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YmacrosYcat),T34,T35,Ynil);
  T38 = BOXVAL(FREEREF(1));
  T32 = CALL2(1,VARREF(YmacrosYpair),T33,T38);
  T31 = BOXVAL(FREEREF(1)) = T32;
  T7 = T31;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P d_;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),d_,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    T2 = CALL2(1,VARREF(YmacrosYpair),d_,T3);
    BOXVAL(FREEREF(0)) = T2;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
    T8 = CALL1(1,VARREF(Ylst),d_);
    T6 = CALL3(1,VARREF(YmacrosYcat),T7,T8,Ynil);
    T9 = BOXVAL(FREEREF(0));
    T5 = CALL2(1,VARREF(YmacrosYpair),T6,T9);
    T4 = BOXVAL(FREEREF(0)) = T5;
    T0 = T4;
  } else {
    T12 = FUNFAB(fun_128,2,d_,FREEREF(0));
    T11 = with_exit(T12);
    if (T11 != YPfalse) {
      T10 = YPfalse;
    } else {
      T15 = FUNFAB(fun_130,2,d_,FREEREF(0));
      T14 = with_exit(T15);
      if (T14 != YPfalse) {
        T13 = YPfalse;
      } else {
        T18 = FUNFAB(fun_132,2,d_,FREEREF(0));
        T17 = with_exit(T18);
        if (T17 != YPfalse) {
          T16 = YPfalse;
        } else {
          T21 = FUNFAB(fun_134,2,d_,FREEREF(0));
          T20 = with_exit(T21);
          if (T20 != YPfalse) {
            T19 = YPfalse;
          } else {
            T24 = FUNFAB(fun_136,2,d_,FREEREF(0));
            T23 = with_exit(T24);
            if (T23 != YPfalse) {
              T22 = YPfalse;
            } else {
              if (YPtrue != YPfalse) {
                T25 = YPint((P)5);
              } else {
                T25 = YPfalse;
              }
              T22 = T25;
            }
            T19 = T22;
          }
          T16 = T19;
        }
        T13 = T16;
      }
      T10 = T13;
    }
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P collector_F815;
  P x_1263F814;
  P x_1263F813;
  P defsF812;
  P x_1263F811;
  P x_1264F810;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1264_126,1);
  x_1264F810 = T1;
  FUNINIT(x_1264F810, 1,return_);
  x_1263F811 = FREEREF(0);
  defsF812 = YPfalse;
  defsF812 = BOXFAB(defsF812);
  T5 = CALL2(1,VARREF(YisaQ),x_1263F811,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1263F811,LITREF(lit_146),x_1264F810);
    x_1263F813 = T7;
    BOXVAL(defsF812) = x_1263F813;
    x_1263F814 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1263F814,x_1264F810);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1264F810,LITREF(lit_6),x_1263F811);
  }
  collector_F815 = Ynil;
  collector_F815 = BOXFAB(collector_F815);
  T14 = FUNFAB(fun_137,1,collector_F815);
  T15 = BOXVAL(defsF812);
  CALL2(1,VARREF(YmacrosYdo),T14,T15);
  T17 = BOXVAL(collector_F815);
  T16 = CALL1(1,VARREF(YmacrosYrevX),T17);
  T12 = T16;
  T11 = CALL2(1,VARREF(YmacrosYpair),LITREF(lit_64),T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_138,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YmacrosY___main_0___() {
  P tmpF830;
  P tmpF829;
  P tmpF828;
  P tmpF827;
  P tmpF826;
  P tmpF825;
  P tmpF824;
  P tmpF823;
  P tmpF822;
  P tmpF821;
  P tmpF820;
  P tmpF819;
  P tmpF818;
  P tmpF817;
  P tmpF816;
  P T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173;
  P T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157;
  P T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141;
  P T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125;
  P T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109;
  P T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93;
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"exp");
  lit_1 = YPPsym((P)"return");
  lit_2 = YPPsym((P)"x-1074");
  lit_3 = YPPsym((P)"msg");
  lit_4 = YPPsym((P)"args");
  lit_5 = YPPsym((P)"sup");
  lit_6 = YPsb((P)"Match Pattern Failure");
  lit_7 = YPPsym((P)"let");
  lit_8 = YPPsym((P)"next-mets");
  lit_9 = YPPsym((P)"%next-methods");
  lit_10 = YPPsym((P)"if");
  lit_11 = YPPsym((P)"napp");
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
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"sup"),T3);
  lit_17 = YPPsym((P)"x-1078");
  lit_18 = YPPsym((P)"app-sup");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1078_3 = YPmet(FUNCODEREF(fun_x_1078_3),LITREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"app-sup"),T7);
  lit_20 = YPPsym((P)"x-1082");
  lit_21 = YPPsym((P)"app");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1082_6 = YPmet(FUNCODEREF(fun_x_1082_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"app"),T11);
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
  lit_32 = YPPsym((P)"x-1098");
  lit_33 = YPPsym((P)"renew");
  lit_34 = YPPsym((P)"loop");
  lit_35 = YPPsym((P)"sets");
  lit_36 = YPPsym((P)"inits");
  T27 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1098_18 = YPmet(FUNCODEREF(fun_x_1098_18),LITREF(lit_32),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_36)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_34),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T28 = fun_21;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"renew"),T28);
  lit_37 = YPPsym((P)"lift-place-subforms");
  lit_38 = YPPsym((P)"place");
  lit_39 = YPPsym((P)"munch");
  lit_40 = YPPsym((P)"subforms");
  T30 = YPsig(YPPlist(1,LITREF(lit_40)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_munch_22 = YPmet(FUNCODEREF(fun_munch_22),LITREF(lit_39),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  YmacrosYlift_place_subforms = YPmet(FUNCODEREF(YmacrosYlift_place_subforms),LITREF(lit_37),T29,ENVNUL,PNUL,YPfalse);
  T31 = YmacrosYlift_place_subforms;
  VARSET(YmacrosYlift_place_subforms,T31);
  lit_41 = YPPsym((P)"x-1104");
  lit_42 = YPPsym((P)"incf");
  lit_43 = YPPsym((P)"x-1106");
  lit_44 = YPPsym((P)"+");
  T36 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1104_24 = YPmet(FUNCODEREF(fun_x_1104_24),LITREF(lit_41),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1106_25 = YPmet(FUNCODEREF(fun_x_1106_25),LITREF(lit_43),T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T37 = fun_28;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"incf"),T37);
  lit_45 = YPPsym((P)"x-1112");
  lit_46 = YPPsym((P)"decf");
  lit_47 = YPPsym((P)"x-1114");
  lit_48 = YPPsym((P)"-");
  T42 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_29 = YPmet(FUNCODEREF(fun_x_1112_29),LITREF(lit_45),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1114_30 = YPmet(FUNCODEREF(fun_x_1114_30),LITREF(lit_47),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T43 = fun_33;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"decf"),T43);
  lit_49 = YPPsym((P)"x-1118");
  lit_50 = YPPsym((P)"pushf");
  lit_51 = YPPsym((P)"push");
  T46 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1118_34 = YPmet(FUNCODEREF(fun_x_1118_34),LITREF(lit_49),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T47 = fun_36;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"pushf"),T47);
  lit_52 = YPPsym((P)"x-1122");
  lit_53 = YPPsym((P)"swapf");
  T50 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1122_37 = YPmet(FUNCODEREF(fun_x_1122_37),LITREF(lit_52),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_39;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"swapf"),T51);
  lit_54 = YPPsym((P)"x-1126");
  lit_55 = YPPsym((P)"popf");
  lit_56 = YPPsym((P)"tup");
  lit_57 = YPPsym((P)"pop");
  T54 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1126_40 = YPmet(FUNCODEREF(fun_x_1126_40),LITREF(lit_54),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T55 = fun_42;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"popf"),T55);
  lit_58 = YPPsym((P)"x-1130");
  lit_59 = YPPsym((P)"opf");
  lit_60 = YPPsym((P)"_");
  T58 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1130_43 = YPmet(FUNCODEREF(fun_x_1130_43),LITREF(lit_58),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T59 = fun_45;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"opf"),T59);
  lit_61 = YPPsym((P)"x-1134");
  lit_62 = YPPsym((P)"unless");
  lit_63 = YPPsym((P)"not");
  lit_64 = YPPsym((P)"seq");
  T62 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1134_46 = YPmet(FUNCODEREF(fun_x_1134_46),LITREF(lit_61),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T63 = fun_48;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"unless"),T63);
  lit_65 = YPPsym((P)"x-1138");
  lit_66 = YPPsym((P)"when");
  T66 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1138_49 = YPmet(FUNCODEREF(fun_x_1138_49),LITREF(lit_65),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T67 = fun_51;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"when"),T67);
  lit_67 = YPPsym((P)"x-1146");
  lit_68 = YPPsym((P)"or");
  lit_69 = YPPsym((P)"x-1148");
  lit_70 = YPPsym((P)"x-1150");
  lit_71 = YPPsym((P)"tmp");
  T74 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1146_52 = YPmet(FUNCODEREF(fun_x_1146_52),LITREF(lit_67),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_53 = YPmet(FUNCODEREF(fun_x_1148_53),LITREF(lit_69),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1150_54 = YPmet(FUNCODEREF(fun_x_1150_54),LITREF(lit_70),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T75 = fun_58;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"or"),T75);
  lit_72 = YPPsym((P)"x-1158");
  lit_73 = YPPsym((P)"and");
  lit_74 = YPPsym((P)"x-1160");
  lit_75 = YPPsym((P)"x-1162");
  T82 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1158_59 = YPmet(FUNCODEREF(fun_x_1158_59),LITREF(lit_72),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_60 = YPmet(FUNCODEREF(fun_x_1160_60),LITREF(lit_74),T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1162_61 = YPmet(FUNCODEREF(fun_x_1162_61),LITREF(lit_75),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T83 = fun_65;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"and"),T83);
  lit_76 = YPPsym((P)"x-1168");
  lit_77 = YPPsym((P)"cond");
  lit_78 = YPPsym((P)"x-1170");
  lit_79 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T88 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1168_66 = YPmet(FUNCODEREF(fun_x_1168_66),LITREF(lit_76),T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1170_67 = YPmet(FUNCODEREF(fun_x_1170_67),LITREF(lit_78),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T89 = fun_70;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"cond"),T89);
  lit_80 = YPPsym((P)"do-case-by");
  lit_81 = YPPsym((P)"val");
  lit_82 = YPPsym((P)"tst");
  lit_83 = YPPsym((P)"cases");
  lit_84 = YPPsym((P)"x-1176");
  lit_85 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_86 = YPPsym((P)"x-1178");
  lit_87 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_88 = YPPsym((P)"x");
  T95 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_71 = YPmet(FUNCODEREF(fun_x_1176_71),LITREF(lit_84),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1178_72 = YPmet(FUNCODEREF(fun_x_1178_72),LITREF(lit_86),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(3,LITREF(lit_81),LITREF(lit_82),LITREF(lit_83)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YmacrosYdo_case_by = YPmet(FUNCODEREF(YmacrosYdo_case_by),LITREF(lit_80),T90,ENVNUL,PNUL,YPfalse);
  T96 = YmacrosYdo_case_by;
  VARSET(YmacrosYdo_case_by,T96);
  lit_89 = YPPsym((P)"x-1182");
  lit_90 = YPPsym((P)"case-by");
  T99 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1182_77 = YPmet(FUNCODEREF(fun_x_1182_77),LITREF(lit_89),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T100 = fun_79;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case-by"),T100);
  lit_91 = YPPsym((P)"x-1186");
  lit_92 = YPPsym((P)"case");
  lit_93 = YPPsym((P)"==");
  T103 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1186_80 = YPmet(FUNCODEREF(fun_x_1186_80),LITREF(lit_91),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T104 = fun_82;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case"),T104);
  lit_94 = YPPsym((P)"x-1194");
  lit_95 = YPPsym((P)"match");
  lit_96 = YPPsym((P)"x-1196");
  lit_97 = YPPsym((P)"x-1198");
  lit_98 = YPsb((P)"Invalid match syntax.");
  lit_99 = YPPsym((P)"mif");
  lit_100 = YPsb((P)"Failed to match.");
  T111 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1194_83 = YPmet(FUNCODEREF(fun_x_1194_83),LITREF(lit_94),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1198_84 = YPmet(FUNCODEREF(fun_x_1198_84),LITREF(lit_97),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_86 = YPmet(FUNCODEREF(fun_x_1196_86),LITREF(lit_96),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T112 = fun_89;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"match"),T112);
  lit_101 = YPPsym((P)"x-1202");
  lit_102 = YPPsym((P)"assert");
  T115 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1202_90 = YPmet(FUNCODEREF(fun_x_1202_90),LITREF(lit_101),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T116 = fun_92;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"assert"),T116);
  lit_103 = YPPsym((P)"x-1210");
  lit_104 = YPPsym((P)"for");
  lit_105 = YPPsym((P)"grok");
  lit_106 = YPPsym((P)"clauses");
  lit_107 = YPPsym((P)"preds");
  lit_108 = YPPsym((P)"nows");
  lit_109 = YPPsym((P)"nexts");
  lit_110 = YPPsym((P)"rep");
  lit_111 = YPPsym((P)"x-1212");
  lit_112 = YPPsym((P)"enum");
  lit_113 = YPPsym((P)"fin?");
  lit_114 = YPPsym((P)"x-1214");
  lit_115 = YPPsym((P)"now");
  lit_116 = YPPsym((P)"now-key");
  lit_117 = YPPsym((P)"nxt");
  T124 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1210_93 = YPmet(FUNCODEREF(fun_x_1210_93),LITREF(lit_103),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_94 = YPmet(FUNCODEREF(fun_x_1212_94),LITREF(lit_111),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1214_95 = YPmet(FUNCODEREF(fun_x_1214_95),LITREF(lit_114),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(5,LITREF(lit_106),LITREF(lit_36),LITREF(lit_107),LITREF(lit_108),LITREF(lit_109)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_98 = YPmet(FUNCODEREF(fun_grok_98),LITREF(lit_105),T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T125 = fun_100;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"for"),T125);
  lit_118 = YPPsym((P)"x-1218");
  lit_119 = YPPsym((P)"while");
  lit_120 = YPPsym((P)"_loop");
  T128 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1218_101 = YPmet(FUNCODEREF(fun_x_1218_101),LITREF(lit_118),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T129 = fun_103;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"while"),T129);
  lit_121 = YPPsym((P)"x-1222");
  lit_122 = YPPsym((P)"until");
  T132 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1222_104 = YPmet(FUNCODEREF(fun_x_1222_104),LITREF(lit_121),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_106;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"until"),T133);
  lit_123 = YPPsym((P)"x-1226");
  lit_124 = YPPsym((P)"ddv");
  lit_125 = YPPsym((P)"dv");
  T136 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1226_107 = YPmet(FUNCODEREF(fun_x_1226_107),LITREF(lit_123),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_109;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"ddv"),T137);
  lit_126 = YPPsym((P)"x-1234");
  lit_127 = YPPsym((P)"dlet");
  lit_128 = YPPsym((P)"x-1236");
  lit_129 = YPPsym((P)"x-1238");
  lit_130 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_131 = YPPsym((P)"fin");
  T144 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1234_110 = YPmet(FUNCODEREF(fun_x_1234_110),LITREF(lit_126),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1238_111 = YPmet(FUNCODEREF(fun_x_1238_111),LITREF(lit_129),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_113 = YPmet(FUNCODEREF(fun_x_1236_113),LITREF(lit_128),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T145 = fun_116;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dlet"),T145);
  lit_132 = YPPsym((P)"x-1242");
  lit_133 = YPPsym((P)"def-fun-var");
  lit_134 = YPsb((P)"*");
  lit_135 = YPsb((P)"*");
  lit_136 = YPPsym((P)"dm");
  lit_137 = YPPsym((P)"=>");
  lit_138 = YPPsym((P)"z");
  T148 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1242_117 = YPmet(FUNCODEREF(fun_x_1242_117),LITREF(lit_132),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T149 = fun_119;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"def-fun-var"),T149);
  lit_139 = YPPsym((P)"x-1246");
  lit_140 = YPPsym((P)"without-prop-unbound-errors");
  lit_141 = YPPsym((P)"*report-prop-unbound-errors?*");
  T152 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1246_120 = YPmet(FUNCODEREF(fun_x_1246_120),LITREF(lit_139),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T153 = fun_122;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"without-prop-unbound-errors"),T153);
  lit_142 = YPPsym((P)"x-1250");
  lit_143 = YPPsym((P)"need-implementation");
  lit_144 = YPPsym((P)"export");
  T156 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1250_123 = YPmet(FUNCODEREF(fun_x_1250_123),LITREF(lit_142),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T157 = fun_125;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"need-implementation"),T157);
  lit_145 = YPPsym((P)"x-1264");
  lit_146 = YPPsym((P)"exported");
  lit_147 = YPPsym((P)"d");
  lit_148 = YPPsym((P)"x-1266");
  lit_149 = YPPsym((P)"df");
  lit_150 = YPPsym((P)"x-1268");
  lit_151 = YPPsym((P)"dg");
  lit_152 = YPPsym((P)"x-1270");
  lit_153 = YPPsym((P)"dc");
  lit_154 = YPPsym((P)"x-1272");
  lit_155 = YPPsym((P)"x-1274");
  lit_156 = YPPsym((P)"dp");
  T171 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1264_126 = YPmet(FUNCODEREF(fun_x_1264_126),LITREF(lit_145),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1266_127 = YPmet(FUNCODEREF(fun_x_1266_127),LITREF(lit_148),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1268_129 = YPmet(FUNCODEREF(fun_x_1268_129),LITREF(lit_150),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1270_131 = YPmet(FUNCODEREF(fun_x_1270_131),LITREF(lit_152),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1272_133 = YPmet(FUNCODEREF(fun_x_1272_133),LITREF(lit_154),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1274_135 = YPmet(FUNCODEREF(fun_x_1274_135),LITREF(lit_155),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_147)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T172 = fun_139;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"exported"),T172);
  tmpF816 = YPfalse;
  if (tmpF816 != YPfalse) {
    T173 = VARREF(YmacrosYEE);
  } else {
    T173 = YPfalse;
  }
  tmpF817 = YPfalse;
  if (tmpF817 != YPfalse) {
    T174 = VARREF(YmacrosYdo);
  } else {
    T174 = YPfalse;
  }
  tmpF818 = YPfalse;
  if (tmpF818 != YPfalse) {
    T175 = VARREF(YmacrosYrevX);
  } else {
    T175 = YPfalse;
  }
  tmpF819 = YPfalse;
  if (tmpF819 != YPfalse) {
    T176 = VARREF(YmacrosYcat);
  } else {
    T176 = YPfalse;
  }
  tmpF820 = YPfalse;
  if (tmpF820 != YPfalse) {
    T177 = VARREF(YmacrosYelt);
  } else {
    T177 = YPfalse;
  }
  tmpF821 = YPfalse;
  if (tmpF821 != YPfalse) {
    T178 = VARREF(YmacrosYemptyQ);
  } else {
    T178 = YPfalse;
  }
  tmpF822 = YPfalse;
  if (tmpF822 != YPfalse) {
    T179 = VARREF(Yerror);
  } else {
    T179 = YPfalse;
  }
  tmpF823 = YPfalse;
  if (tmpF823 != YPfalse) {
    T180 = VARREF(YmacrosYgensym);
  } else {
    T180 = YPfalse;
  }
  tmpF824 = YPfalse;
  if (tmpF824 != YPfalse) {
    T181 = VARREF(Ylst);
  } else {
    T181 = YPfalse;
  }
  tmpF825 = YPfalse;
  if (tmpF825 != YPfalse) {
    T182 = VARREF(YmacrosYfab_setter_name);
  } else {
    T182 = YPfalse;
  }
  tmpF826 = YPfalse;
  if (tmpF826 != YPfalse) {
    T183 = VARREF(YmacrosYcat_sym);
  } else {
    T183 = YPfalse;
  }
  tmpF827 = YPfalse;
  if (tmpF827 != YPfalse) {
    T184 = VARREF(YmacrosYmap);
  } else {
    T184 = YPfalse;
  }
  tmpF828 = YPfalse;
  if (tmpF828 != YPfalse) {
    T185 = VARREF(YmacrosYmatch_atom);
  } else {
    T185 = YPfalse;
  }
  tmpF829 = YPfalse;
  if (tmpF829 != YPfalse) {
    T186 = VARREF(YmacrosYmatch_empty_list);
  } else {
    T186 = YPfalse;
  }
  tmpF830 = YPfalse;
  if (tmpF830 != YPfalse) {
    T187 = VARREF(YmacrosYmatch_sublist);
  } else {
    T187 = YPfalse;
  }
  T188 = YPfalse;
  return T188;
}

P YmacrosY___main_1___() {
  P tmpF836;
  P tmpF835;
  P tmpF834;
  P tmpF833;
  P tmpF832;
  P tmpF831;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  tmpF831 = YPfalse;
  if (tmpF831 != YPfalse) {
    T0 = VARREF(YmacrosYmatch_unquote);
  } else {
    T0 = YPfalse;
  }
  tmpF832 = YPfalse;
  if (tmpF832 != YPfalse) {
    T1 = VARREF(YmacrosYpair);
  } else {
    T1 = YPfalse;
  }
  tmpF833 = YPfalse;
  if (tmpF833 != YPfalse) {
    T2 = VARREF(Ytup);
  } else {
    T2 = YPfalse;
  }
  tmpF834 = YPfalse;
  if (tmpF834 != YPfalse) {
    T3 = VARREF(YmacrosYvar_name);
  } else {
    T3 = YPfalse;
  }
  tmpF835 = YPfalse;
  if (tmpF835 != YPfalse) {
    T4 = VARREF(YmacrosYvar_type);
  } else {
    T4 = YPfalse;
  }
  tmpF836 = YPfalse;
  if (tmpF836 != YPfalse) {
    T5 = VARREF(YmacrosYnapp);
  } else {
    T5 = YPfalse;
  }
  T6 = YPfalse;
  return T6;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"dg", &module_info_boot, "dg"},
  {"%f-", &module_info_boot, "%f-"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"dss", &module_info_boot, "dss"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"@lst", &module_info_boot, "@lst"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"%f/", &module_info_boot, "%f/"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"rep", &module_info_boot, "rep"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"@<", &module_info_boot, "@<"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%iu", &module_info_boot, "%iu"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%pair", &module_info_boot, "%pair"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%f=", &module_info_boot, "%f="},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%lu", &module_info_boot, "%lu"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"%f<", &module_info_boot, "%f<"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"@len", &module_info_boot, "@len"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<log>", &module_info_boot, "<log>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"type-object", &module_info_boot, "type-object"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%fu", &module_info_boot, "%fu"},
  {"%f+", &module_info_boot, "%f+"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"%str", &module_info_boot, "%str"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"%i^", &module_info_boot, "%i^"},
  {"df", &module_info_boot, "df"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"object-class", &module_info_boot, "object-class"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"@==", &module_info_boot, "@=="},
  {"%fb", &module_info_boot, "%fb"},
  {"%i=", &module_info_boot, "%i="},
  {"prop-value", &module_info_boot, "prop-value"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"dv", &module_info_boot, "dv"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"%i<", &module_info_boot, "%i<"},
  {"seq", &module_info_boot, "seq"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"nil", &module_info_boot, "nil"},
  {"<any>", &module_info_boot, "<any>"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"%get", &module_info_boot, "%get"},
  {"%put", &module_info_boot, "%put"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"class-props", &module_info_boot, "class-props"},
  {"error", &module_info_boot, "error"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"esc", &module_info_boot, "esc"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%i*", &module_info_boot, "%i*"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"quote", &module_info_boot, "quote"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"fin", &module_info_boot, "fin"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%os-val", &module_info_boot, "%os-val"},
  {"<col>", &module_info_boot, "<col>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<class>", &module_info_boot, "<class>"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"loc", &module_info_boot, "loc"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"%untag", &module_info_boot, "%untag"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"ct", &module_info_boot, "ct"},
  {"dm", &module_info_boot, "dm"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"use", &module_info_boot, "use"},
  {"tail", &module_info_boot, "tail"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"<type>", &module_info_boot, "<type>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"try", &module_info_boot, "try"},
  {"%f*", &module_info_boot, "%f*"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"%i-", &module_info_boot, "%i-"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"set", &module_info_boot, "set"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%bb", &module_info_boot, "%bb"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"class-name", &module_info_boot, "class-name"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%peek", &module_info_boot, "%peek"},
  {"def", &module_info_boot, "def"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%ft", &module_info_boot, "%ft"},
  {"%cb", &module_info_boot, "%cb"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"bound?", &module_info_boot, "bound?"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%vec", &module_info_boot, "%vec"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"%i!", &module_info_boot, "%i!"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"%i+", &module_info_boot, "%i+"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"%facos", &module_info_boot, "%facos"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"let", &module_info_boot, "let"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"new", &module_info_boot, "new"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"nul", &module_info_boot, "nul"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"object-props", &module_info_boot, "object-props"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"isa", &module_info_boot, "isa"},
  {"dp", &module_info_boot, "dp"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"%lb", &module_info_boot, "%lb"},
  {"type-error", &module_info_boot, "type-error"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"@olen", &module_info_boot, "@olen"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<int>", &module_info_boot, "<int>"},
  {"<str>", &module_info_boot, "<str>"},
  {"%it/", &module_info_boot, "%it/"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%velt", &module_info_boot, "%velt"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"vec", &module_info_boot, "vec"},
  {"%ib", &module_info_boot, "%ib"},
  {"use/export", &module_info_boot, "use/export"},
  {"lst", &module_info_boot, "lst"},
  {"%iv", &module_info_boot, "%iv"},
  {"%sb", &module_info_boot, "%sb"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%su", &module_info_boot, "%su"},
  {"%i?", &module_info_boot, "%i?"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"tup", &module_info_boot, "tup"},
  {"isa?", &module_info_boot, "isa?"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%snul", &module_info_boot, "%snul"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"ds", &module_info_boot, "ds"},
  {"type-class", &module_info_boot, "type-class"},
  {"@+", &module_info_boot, "@+"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%prop", &module_info_boot, "%prop"},
  {"<union>", &module_info_boot, "<union>"},
  {"%i&", &module_info_boot, "%i&"},
  {"%isa", &module_info_boot, "%isa"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"%raw", &module_info_boot, "%raw"},
  {"head", &module_info_boot, "head"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"unexec", &module_info_boot, "unexec"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"if", &module_info_boot, "if"},
  {"%flog", &module_info_boot, "%flog"},
  {"%c<", &module_info_boot, "%c<"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"%slen", &module_info_boot, "%slen"},
  {"mif", &module_info_boot, "mif"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"dc", &module_info_boot, "dc"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"<met>", &module_info_boot, "<met>"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%cu", &module_info_boot, "%cu"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"export", &module_info_boot, "export"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"%puts", &module_info_boot, "%puts"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"%im", &module_info_boot, "%im"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%selt", &module_info_boot, "%selt"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"fun", &module_info_boot, "fun"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"dl", &module_info_boot, "dl"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%c=", &module_info_boot, "%c="},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"not", &module_info_boot, "not"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"opf", NULL},
  {"match", NULL},
  {"assert", NULL},
  {"cat-sym", &YmacrosYcat_sym},
  {"renew", NULL},
  {"decf", NULL},
  {"collected", NULL},
  {"match-sublist", &YmacrosYmatch_sublist},
  {"do-case-by", &YmacrosYdo_case_by},
  {"pushf", NULL},
  {"map", &YmacrosYmap},
  {"ddv", NULL},
  {"---main-0---", NULL},
  {"collecting", NULL},
  {"unless", NULL},
  {"exported", NULL},
  {"lift-place-subforms", &YmacrosYlift_place_subforms},
  {"var-name", &YmacrosYvar_name},
  {"match-atom", &YmacrosYmatch_atom},
  {"cat", &YmacrosYcat},
  {"napp", &YmacrosYnapp},
  {"case-by", NULL},
  {"swapf", NULL},
  {"match-unquote", &YmacrosYmatch_unquote},
  {"empty?", &YmacrosYemptyQ},
  {"def-fun-var", NULL},
  {"dlet", NULL},
  {"fab-setter-name", &YmacrosYfab_setter_name},
  {"when", NULL},
  {"collect", NULL},
  {"elt", &YmacrosYelt},
  {"app-sup", NULL},
  {"while", NULL},
  {"do", &YmacrosYdo},
  {"without-prop-unbound-errors", NULL},
  {"var-type", &YmacrosYvar_type},
  {"match-empty-list", &YmacrosYmatch_empty_list},
  {"sup", NULL},
  {"---main-1---", NULL},
  {"==", &YmacrosYEE},
  {"rev!", &YmacrosYrevX},
  {"for", NULL},
  {"case", NULL},
  {"popf", NULL},
  {"and", NULL},
  {"pair", &YmacrosYpair},
  {"or", NULL},
  {"until", NULL},
  {"cond", NULL},
  {"app", NULL},
  {"incf", NULL},
  {"need-implementation", NULL},
  {"gensym", &YmacrosYgensym},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"opf", "opf"},
  {"match", "match"},
  {"assert", "assert"},
  {"cat-sym", "cat-sym"},
  {"renew", "renew"},
  {"decf", "decf"},
  {"collected", "collected"},
  {"match-sublist", "match-sublist"},
  {"gensym", "gensym"},
  {"pushf", "pushf"},
  {"error", "error"},
  {"ddv", "ddv"},
  {"collecting", "collecting"},
  {"unless", "unless"},
  {"exported", "exported"},
  {"var-name", "var-name"},
  {"match-atom", "match-atom"},
  {"for", "for"},
  {"pair", "pair"},
  {"napp", "napp"},
  {"case-by", "case-by"},
  {"swapf", "swapf"},
  {"match-unquote", "match-unquote"},
  {"empty?", "empty?"},
  {"fab-setter-name", "fab-setter-name"},
  {"cat", "cat"},
  {"when", "when"},
  {"collect", "collect"},
  {"elt", "elt"},
  {"map", "map"},
  {"app-sup", "app-sup"},
  {"while", "while"},
  {"do", "do"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"var-type", "var-type"},
  {"match-empty-list", "match-empty-list"},
  {"sup", "sup"},
  {"lst", "lst"},
  {"==", "=="},
  {"rev!", "rev!"},
  {"tup", "tup"},
  {"dlet", "dlet"},
  {"def-fun-var", "def-fun-var"},
  {"case", "case"},
  {"popf", "popf"},
  {"and", "and"},
  {"or", "or"},
  {"until", "until"},
  {"cond", "cond"},
  {"app", "app"},
  {"incf", "incf"},
  {"need-implementation", "need-implementation"},
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

}

/* END OF GENERATED CODE. */
