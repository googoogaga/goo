/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(Ylst,"runtime/boot","lst");
EXT(YPisa,"runtime/boot","%isa");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(Yhead,"runtime/boot","head");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YLmetG,"runtime/boot","<met>");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(Yfab_sym,"runtime/boot","fab-sym");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YOlst,"runtime/boot","@lst");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Ynil,"runtime/boot","nil");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(Ynul,"runtime/boot","nul");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yvec,"runtime/boot","vec");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yclass_props,"runtime/boot","class-props");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YLsigG,"runtime/boot","<sig>");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YOall2Q,"runtime/boot","@all2?");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Ytail_setter,"runtime/boot","tail-setter");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ytail,"runtime/boot","tail");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YLlocG,"runtime/boot","<loc>");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytype_elts,"runtime/boot","type-elts");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YPsnul,"runtime/boot","%snul");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ytup,"runtime/boot","tup");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YLpropG,"runtime/boot","<prop>");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(Yadd_prop,"runtime/boot","add-prop");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_49);
DEFLIT(lit_21);
DEFLIT(lit_153);
DEFLIT(lit_144);
DEFLIT(lit_83);
DEFLIT(lit_85);
DEFLIT(lit_141);
DEFLIT(lit_142);
DEFLIT(lit_23);
DEFLIT(lit_102);
DEFLIT(lit_65);
DEFLIT(lit_151);
DEFLIT(lit_15);
DEFLIT(lit_129);
DEFLIT(lit_90);
DEFLIT(lit_81);
DEFLIT(lit_112);
DEFLIT(lit_155);
DEFLIT(lit_59);
DEFLIT(lit_31);
DEFLIT(lit_52);
DEFLIT(lit_137);
DEFLIT(lit_36);
DEFLIT(lit_130);
DEFLIT(lit_96);
DEFLIT(lit_100);
DEFLIT(lit_117);
DEFLIT(lit_106);
DEFLIT(lit_5);
DEFLIT(lit_35);
DEFLIT(lit_86);
DEFLIT(lit_27);
DEFLIT(lit_147);
DEFLIT(lit_46);
DEFLIT(lit_68);
DEFLIT(lit_126);
DEFLIT(lit_113);
DEFLIT(lit_116);
DEFLIT(lit_125);
DEFLIT(lit_13);
DEFLIT(lit_79);
DEFLIT(lit_45);
DEFLIT(lit_38);
DEFLIT(lit_6);
DEFLIT(lit_132);
DEFLIT(lit_22);
DEFLIT(lit_154);
DEFLIT(lit_0);
DEFLIT(lit_89);
DEFLIT(lit_140);
DEFLIT(lit_156);
DEFLIT(lit_110);
DEFLIT(lit_109);
DEFLIT(lit_149);
DEFLIT(lit_127);
DEFLIT(lit_150);
DEFLIT(lit_14);
DEFLIT(lit_71);
DEFLIT(lit_47);
DEFLIT(lit_80);
DEFLIT(lit_42);
DEFLIT(lit_105);
DEFLIT(lit_34);
DEFLIT(lit_58);
DEFLIT(lit_30);
DEFLIT(lit_26);
DEFLIT(lit_133);
DEFLIT(lit_138);
DEFLIT(lit_51);
DEFLIT(lit_54);
DEFLIT(lit_55);
DEFLIT(lit_121);
DEFLIT(lit_114);
DEFLIT(lit_143);
DEFLIT(lit_123);
DEFLIT(lit_146);
DEFLIT(lit_9);
DEFLIT(lit_67);
DEFLIT(lit_61);
DEFLIT(lit_1);
DEFLIT(lit_62);
DEFLIT(lit_128);
DEFLIT(lit_124);
DEFLIT(lit_91);
DEFLIT(lit_76);
DEFLIT(lit_75);
DEFLIT(lit_37);
DEFLIT(lit_99);
DEFLIT(lit_25);
DEFLIT(lit_136);
DEFLIT(lit_118);
DEFLIT(lit_139);
DEFLIT(lit_98);
DEFLIT(lit_92);
DEFLIT(lit_3);
DEFLIT(lit_33);
DEFLIT(lit_94);
DEFLIT(lit_108);
DEFLIT(lit_95);
DEFLIT(lit_135);
DEFLIT(lit_29);
DEFLIT(lit_17);
DEFLIT(lit_48);
DEFLIT(lit_70);
DEFLIT(lit_41);
DEFLIT(lit_101);
DEFLIT(lit_44);
DEFLIT(lit_19);
DEFLIT(lit_120);
DEFLIT(lit_43);
DEFLIT(lit_104);
DEFLIT(lit_145);
DEFLIT(lit_8);
DEFLIT(lit_57);
DEFLIT(lit_50);
DEFLIT(lit_88);
DEFLIT(lit_134);
DEFLIT(lit_87);
DEFLIT(lit_77);
DEFLIT(lit_115);
DEFLIT(lit_40);
DEFLIT(lit_119);
DEFLIT(lit_20);
DEFLIT(lit_111);
DEFLIT(lit_84);
DEFLIT(lit_66);
DEFLIT(lit_152);
DEFLIT(lit_74);
DEFLIT(lit_131);
DEFLIT(lit_97);
DEFLIT(lit_82);
DEFLIT(lit_73);
DEFLIT(lit_63);
DEFLIT(lit_64);
DEFLIT(lit_60);
DEFLIT(lit_53);
DEFLIT(lit_24);
DEFLIT(lit_2);
DEFLIT(lit_32);
DEFLIT(lit_122);
DEFLIT(lit_107);
DEFLIT(lit_7);
DEFLIT(lit_16);
DEFLIT(lit_28);
DEFLIT(lit_148);
DEFLIT(lit_11);
DEFLIT(lit_69);
DEFLIT(lit_10);
DEFLIT(lit_4);
DEFLIT(lit_103);
DEFLIT(lit_72);
DEFLIT(lit_93);
DEFLIT(lit_78);
DEFLIT(lit_18);
DEFLIT(lit_39);
DEFLIT(lit_56);
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
LOCFOR(fun_x_1098_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_munch_22);
FUNFOR(YgooSmacrosYlift_place_subforms);
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
FUNFOR(YgooSmacrosYdo_case_by);
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
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

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
  RET(T0);
}

FUNCODEDEF(fun_1) {
  P return_;
  P x_1073F455;
  P x_1073F454;
  P argsF453;
  P x_1073F452;
  P x_1074F451;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1074_0,1);
  x_1074F451 = T1;
  FUNINIT(x_1074F451, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1073F452 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  argsF453 = YPfalse;
  argsF453 = BOXFAB(argsF453);
  T5 = CALL2(1,VARREF(YisaQ),x_1073F452,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1073F452,LITREF(lit_5),x_1074F451);
    check_type(T7,VARREF(YLanyG));
    x_1073F454 = T7;
    BOXVAL(argsF453) = x_1073F454;
    check_type(Ynil,VARREF(YLanyG));
    x_1073F455 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1073F455,x_1074F451);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1074F451,LITREF(lit_6),x_1073F452);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = BOXVAL(argsF453);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T40 = CALL1(1,VARREF(Ylst),Ynil);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T26 = CALLN(1,VARREF(YgooSmacrosYcat),6,T27,T28,T32,T36,T37,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T42 = CALL3(1,VARREF(YgooSmacrosYcat),T43,T44,Ynil);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),5,T23,T24,T25,T41,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T11 = CALLN(1,VARREF(YgooSmacrosYcat),4,T12,T13,T21,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_4) {
  P return_;
  P x_1077F460;
  P x_1077F459;
  P argsF458;
  P x_1077F457;
  P x_1078F456;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1078_3,1);
  x_1078F456 = T1;
  FUNINIT(x_1078F456, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1077F457 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  argsF458 = YPfalse;
  argsF458 = BOXFAB(argsF458);
  T5 = CALL2(1,VARREF(YisaQ),x_1077F457,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1077F457,LITREF(lit_18),x_1078F456);
    check_type(T7,VARREF(YLanyG));
    x_1077F459 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1077F459,x_1078F456);
    BOXVAL(argsF458) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1077F459);
    check_type(T10,VARREF(YLanyG));
    x_1077F460 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1077F460,x_1078F456);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1078F456,LITREF(lit_6),x_1077F457);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T39 = BOXVAL(argsF458);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T28 = CALLN(1,VARREF(YgooSmacrosYcat),5,T29,T30,T34,T38,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T24 = CALLN(1,VARREF(YgooSmacrosYcat),5,T25,T26,T27,T40,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T13 = CALLN(1,VARREF(YgooSmacrosYcat),4,T14,T15,T23,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_7) {
  P return_;
  P x_1081F467;
  P x_1081F466;
  P x_1081F465;
  P argsF464;
  P fF463;
  P x_1081F462;
  P x_1082F461;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1082_6,1);
  x_1082F461 = T1;
  FUNINIT(x_1082F461, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1081F462 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  fF463 = YPfalse;
  fF463 = BOXFAB(fF463);
  check_type(YPfalse,VARREF(YLanyG));
  argsF464 = YPfalse;
  argsF464 = BOXFAB(argsF464);
  T7 = CALL2(1,VARREF(YisaQ),x_1081F462,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1081F462,LITREF(lit_21),x_1082F461);
    check_type(T9,VARREF(YLanyG));
    x_1081F465 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1081F465,x_1082F461);
    BOXVAL(fF463) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1081F465);
    check_type(T12,VARREF(YLanyG));
    x_1081F466 = T12;
    BOXVAL(argsF464) = x_1081F466;
    check_type(Ynil,VARREF(YLanyG));
    x_1081F467 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1081F467,x_1082F461);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1082F461,LITREF(lit_6),x_1081F462);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF463);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF464);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_10) {
  P return_;
  P nameF475;
  P x_1085F474;
  P x_1085F473;
  P x_1085F472;
  P x_1085F471;
  P bodyF470;
  P x_1085F469;
  P x_1086F468;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1086_9,1);
  x_1086F468 = T1;
  FUNINIT(x_1086F468, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1085F469 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF470 = YPfalse;
  bodyF470 = BOXFAB(bodyF470);
  T5 = CALL2(1,VARREF(YisaQ),x_1085F469,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1085F469,LITREF(lit_23),x_1086F468);
    check_type(T7,VARREF(YLanyG));
    x_1085F471 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1085F471,x_1086F468);
    check_type(T9,VARREF(YLanyG));
    x_1085F472 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1085F472,x_1086F468);
    T11 = CALL1(1,VARREF(Ytail),x_1085F471);
    check_type(T11,VARREF(YLanyG));
    x_1085F473 = T11;
    BOXVAL(bodyF470) = x_1085F473;
    check_type(Ynil,VARREF(YLanyG));
    x_1085F474 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1085F474,x_1086F468);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1086F468,LITREF(lit_6),x_1085F469);
  }
  check_type(LITREF(lit_24),VARREF(YLanyG));
  nameF475 = LITREF(lit_24);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T22 = CALL1(1,VARREF(Ylst),nameF475);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T26 = CALL1(1,VARREF(Ylst),Ynil);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T27 = BOXVAL(bodyF470);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T31 = CALL1(1,VARREF(Ylst),nameF475);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T27,T28,Ynil);
  T15 = T16;
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P return_;
  P nameF481;
  P x_1089F480;
  P x_1089F479;
  P valueF478;
  P x_1089F477;
  P x_1090F476;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1090_12,1);
  x_1090F476 = T1;
  FUNINIT(x_1090F476, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1089F477 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  valueF478 = YPfalse;
  valueF478 = BOXFAB(valueF478);
  T5 = CALL2(1,VARREF(YisaQ),x_1089F477,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1089F477,LITREF(lit_27),x_1090F476);
    check_type(T7,VARREF(YLanyG));
    x_1089F479 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1089F479,x_1090F476);
    BOXVAL(valueF478) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1089F479);
    check_type(T10,VARREF(YLanyG));
    x_1089F480 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1089F480,x_1090F476);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1090F476,LITREF(lit_6),x_1089F477);
  }
  check_type(LITREF(lit_24),VARREF(YLanyG));
  nameF481 = LITREF(lit_24);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T16 = CALL1(1,VARREF(Ylst),nameF481);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T21 = BOXVAL(valueF478);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),nameF481);
  T18 = CALLN(1,VARREF(YgooSmacrosYcat),4,T19,T20,T22,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),4,T15,T16,T17,Ynil);
  T13 = T14;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_16) {
  P return_;
  P x_1093F486;
  P x_1093F485;
  P nameF484;
  P x_1093F483;
  P x_1094F482;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F482 = T1;
  FUNINIT(x_1094F482, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1093F483 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  nameF484 = YPfalse;
  nameF484 = BOXFAB(nameF484);
  T5 = CALL2(1,VARREF(YisaQ),x_1093F483,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F483,LITREF(lit_25),x_1094F482);
    check_type(T7,VARREF(YLanyG));
    x_1093F485 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F485,x_1094F482);
    BOXVAL(nameF484) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1093F485);
    check_type(T10,VARREF(YLanyG));
    x_1093F486 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F486,x_1094F482);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1094F482,LITREF(lit_6),x_1093F483);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T16 = BOXVAL(nameF484);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_loop_19) {
  P sets_,inits_;
  P valF487;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sets_, 0);
  ARG(inits_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),inits_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),sets_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),inits_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    check_type(T4,VARREF(YLanyG));
    valF487 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(1));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF487);
    T8 = CALLN(1,VARREF(YgooSmacrosYcat),4,T9,T10,T15,Ynil);
    T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,sets_);
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
  RET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P setsF497;
  P loopF496;
  P varF495;
  P x_1097F494;
  P x_1097F493;
  P x_1097F492;
  P prop_initsF491;
  P xF490;
  P x_1097F489;
  P x_1098F488;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1098_18,1);
  x_1098F488 = T1;
  FUNINIT(x_1098F488, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1097F489 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  xF490 = YPfalse;
  xF490 = BOXFAB(xF490);
  check_type(YPfalse,VARREF(YLanyG));
  prop_initsF491 = YPfalse;
  prop_initsF491 = BOXFAB(prop_initsF491);
  T7 = CALL2(1,VARREF(YisaQ),x_1097F489,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1097F489,LITREF(lit_33),x_1098F488);
    check_type(T9,VARREF(YLanyG));
    x_1097F492 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1097F492,x_1098F488);
    BOXVAL(xF490) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1097F492);
    check_type(T12,VARREF(YLanyG));
    x_1097F493 = T12;
    BOXVAL(prop_initsF491) = x_1097F493;
    check_type(Ynil,VARREF(YLanyG));
    x_1097F494 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1097F494,x_1098F488);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1098F488,LITREF(lit_6),x_1097F489);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T17,VARREF(YLanyG));
  varF495 = T17;
  T20 = FUNSHELL(1,fun_loop_19,2);
  loopF496 = T20;
  FUNINIT(loopF496, 2,loopF496,varF495);
  T22 = BOXVAL(prop_initsF491);
  T21 = CALL2(1,loopF496,Ynil,T22);
  T19 = T21;
  check_type(T19,VARREF(YLanyG));
  setsF497 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF495);
  T31 = BOXVAL(xF490);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF495);
  T23 = CALLN(1,VARREF(YgooSmacrosYcat),5,T24,T25,setsF497,T32,Ynil);
  T18 = T23;
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_munch_22) {
  P subforms_;
  P gF501;
  P g_argsF500;
  P g_declsF499;
  P tup3F498;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(subforms_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),subforms_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,Ynil);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),subforms_);
    T4 = CALL1(1,FREEREF(0),T5);
    check_type(T4,VARREF(YLanyG));
    tup3F498 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F498,YPint((P)0));
    check_type(T7,VARREF(YLanyG));
    g_declsF499 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F498,YPint((P)1));
    check_type(T9,VARREF(YLanyG));
    g_argsF500 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    check_type(T11,VARREF(YLanyG));
    gF501 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF501);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF499);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF501,g_argsF500);
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

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF505;
  P g_declsF504;
  P tup4F503;
  P munchF502;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_22,1);
  munchF502 = T1;
  FUNINIT(munchF502, 1,munchF502);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF502,T7);
    check_type(T6,VARREF(YLanyG));
    tup4F503 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F503,YPint((P)0));
    check_type(T9,VARREF(YLanyG));
    g_declsF504 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F503,YPint((P)1));
    check_type(T11,VARREF(YLanyG));
    g_argsF505 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF505);
    T12 = CALL2(1,VARREF(Ytup),g_declsF504,T13);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P x_1105F509;
  P amountF508;
  P x_1105F507;
  P x_1106F506;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1106_25,1);
  x_1106F506 = T1;
  FUNINIT(x_1106F506, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1105F507 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  amountF508 = YPfalse;
  amountF508 = BOXFAB(amountF508);
  T6 = CALL2(1,VARREF(YisaQ),x_1105F507,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1105F507,x_1106F506);
    BOXVAL(amountF508) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1105F507);
    check_type(T9,VARREF(YLanyG));
    x_1105F509 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1105F509,x_1106F506);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1106F506,LITREF(lit_6),x_1105F507);
  }
  T12 = BOXVAL(amountF508);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P amountF520;
  P g_placeF519;
  P g_declsF518;
  P tup6F517;
  P x_1103F516;
  P x_1103F515;
  P x_1103F514;
  P amountF513;
  P placeF512;
  P x_1103F511;
  P x_1104F510;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_24,1);
  x_1104F510 = T1;
  FUNINIT(x_1104F510, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1103F511 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  placeF512 = YPfalse;
  placeF512 = BOXFAB(placeF512);
  check_type(YPfalse,VARREF(YLanyG));
  amountF513 = YPfalse;
  amountF513 = BOXFAB(amountF513);
  T7 = CALL2(1,VARREF(YisaQ),x_1103F511,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1103F511,LITREF(lit_42),x_1104F510);
    check_type(T9,VARREF(YLanyG));
    x_1103F514 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F514,x_1104F510);
    BOXVAL(placeF512) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1103F514);
    check_type(T12,VARREF(YLanyG));
    x_1103F515 = T12;
    BOXVAL(amountF513) = x_1103F515;
    check_type(Ynil,VARREF(YLanyG));
    x_1103F516 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F516,x_1104F510);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1104F510,LITREF(lit_6),x_1103F511);
  }
  T18 = BOXVAL(placeF512);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  check_type(T17,VARREF(YLanyG));
  tup6F517 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F517,YPint((P)0));
  check_type(T20,VARREF(YLanyG));
  g_declsF518 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F517,YPint((P)1));
  check_type(T22,VARREF(YLanyG));
  g_placeF519 = T22;
  T25 = FUNFAB(fun_26,1,amountF513);
  T24 = with_exit(T25);
  check_type(T24,VARREF(YLanyG));
  amountF520 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF518,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF519);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T37 = CALL1(1,VARREF(Ylst),g_placeF519);
  T38 = CALL1(1,VARREF(Ylst),amountF520);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALLN(1,VARREF(YgooSmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALLN(1,VARREF(YgooSmacrosYcat),4,T27,T28,T30,Ynil);
  T23 = T26;
  T21 = T23;
  T19 = T21;
  T16 = T19;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_31) {
  P return_;
  P x_1113F524;
  P amountF523;
  P x_1113F522;
  P x_1114F521;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1114_30,1);
  x_1114F521 = T1;
  FUNINIT(x_1114F521, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1113F522 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  amountF523 = YPfalse;
  amountF523 = BOXFAB(amountF523);
  T6 = CALL2(1,VARREF(YisaQ),x_1113F522,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1113F522,x_1114F521);
    BOXVAL(amountF523) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1113F522);
    check_type(T9,VARREF(YLanyG));
    x_1113F524 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1113F524,x_1114F521);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1114F521,LITREF(lit_6),x_1113F522);
  }
  T12 = BOXVAL(amountF523);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P amountF535;
  P g_placeF534;
  P g_declsF533;
  P tup8F532;
  P x_1111F531;
  P x_1111F530;
  P x_1111F529;
  P amountF528;
  P placeF527;
  P x_1111F526;
  P x_1112F525;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_29,1);
  x_1112F525 = T1;
  FUNINIT(x_1112F525, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1111F526 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  placeF527 = YPfalse;
  placeF527 = BOXFAB(placeF527);
  check_type(YPfalse,VARREF(YLanyG));
  amountF528 = YPfalse;
  amountF528 = BOXFAB(amountF528);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F526,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F526,LITREF(lit_46),x_1112F525);
    check_type(T9,VARREF(YLanyG));
    x_1111F529 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F529,x_1112F525);
    BOXVAL(placeF527) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F529);
    check_type(T12,VARREF(YLanyG));
    x_1111F530 = T12;
    BOXVAL(amountF528) = x_1111F530;
    check_type(Ynil,VARREF(YLanyG));
    x_1111F531 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F531,x_1112F525);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1112F525,LITREF(lit_6),x_1111F526);
  }
  T18 = BOXVAL(placeF527);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  check_type(T17,VARREF(YLanyG));
  tup8F532 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F532,YPint((P)0));
  check_type(T20,VARREF(YLanyG));
  g_declsF533 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F532,YPint((P)1));
  check_type(T22,VARREF(YLanyG));
  g_placeF534 = T22;
  T25 = FUNFAB(fun_31,1,amountF528);
  T24 = with_exit(T25);
  check_type(T24,VARREF(YLanyG));
  amountF535 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF533,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF534);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T37 = CALL1(1,VARREF(Ylst),g_placeF534);
  T38 = CALL1(1,VARREF(Ylst),amountF535);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),4,T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALLN(1,VARREF(YgooSmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALLN(1,VARREF(YgooSmacrosYcat),4,T27,T28,T30,Ynil);
  T23 = T26;
  T21 = T23;
  T19 = T21;
  T16 = T19;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_35) {
  P return_;
  P g_placeF545;
  P g_declsF544;
  P tup10F543;
  P x_1117F542;
  P x_1117F541;
  P x_1117F540;
  P valueF539;
  P placeF538;
  P x_1117F537;
  P x_1118F536;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1118_34,1);
  x_1118F536 = T1;
  FUNINIT(x_1118F536, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1117F537 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  placeF538 = YPfalse;
  placeF538 = BOXFAB(placeF538);
  check_type(YPfalse,VARREF(YLanyG));
  valueF539 = YPfalse;
  valueF539 = BOXFAB(valueF539);
  T7 = CALL2(1,VARREF(YisaQ),x_1117F537,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1117F537,LITREF(lit_50),x_1118F536);
    check_type(T9,VARREF(YLanyG));
    x_1117F540 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1117F540,x_1118F536);
    BOXVAL(placeF538) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1117F540);
    check_type(T12,VARREF(YLanyG));
    x_1117F541 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1117F541,x_1118F536);
    BOXVAL(valueF539) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1117F541);
    check_type(T15,VARREF(YLanyG));
    x_1117F542 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1117F542,x_1118F536);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1118F536,LITREF(lit_6),x_1117F537);
  }
  T20 = BOXVAL(placeF538);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  check_type(T19,VARREF(YLanyG));
  tup10F543 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F543,YPint((P)0));
  check_type(T22,VARREF(YLanyG));
  g_declsF544 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F543,YPint((P)1));
  check_type(T24,VARREF(YLanyG));
  g_placeF545 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF544,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T32 = CALL1(1,VARREF(Ylst),g_placeF545);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T36 = CALL1(1,VARREF(Ylst),g_placeF545);
  T38 = BOXVAL(valueF539);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),4,T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),4,T31,T32,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T29,Ynil);
  T23 = T25;
  T21 = T23;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P tmpF559;
  P yg_placeF558;
  P yg_declsF557;
  P tup14F556;
  P xg_placeF555;
  P xg_declsF554;
  P tup13F553;
  P x_1121F552;
  P x_1121F551;
  P x_1121F550;
  P yF549;
  P xF548;
  P x_1121F547;
  P x_1122F546;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1122_37,1);
  x_1122F546 = T1;
  FUNINIT(x_1122F546, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1121F547 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  xF548 = YPfalse;
  xF548 = BOXFAB(xF548);
  check_type(YPfalse,VARREF(YLanyG));
  yF549 = YPfalse;
  yF549 = BOXFAB(yF549);
  T7 = CALL2(1,VARREF(YisaQ),x_1121F547,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1121F547,LITREF(lit_53),x_1122F546);
    check_type(T9,VARREF(YLanyG));
    x_1121F550 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1121F550,x_1122F546);
    BOXVAL(xF548) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1121F550);
    check_type(T12,VARREF(YLanyG));
    x_1121F551 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1121F551,x_1122F546);
    BOXVAL(yF549) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1121F551);
    check_type(T15,VARREF(YLanyG));
    x_1121F552 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1121F552,x_1122F546);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1122F546,LITREF(lit_6),x_1121F547);
  }
  T20 = BOXVAL(xF548);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  check_type(T19,VARREF(YLanyG));
  tup13F553 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F553,YPint((P)0));
  check_type(T22,VARREF(YLanyG));
  xg_declsF554 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F553,YPint((P)1));
  check_type(T24,VARREF(YLanyG));
  xg_placeF555 = T24;
  T27 = BOXVAL(yF549);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  check_type(T26,VARREF(YLanyG));
  tup14F556 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F556,YPint((P)0));
  check_type(T29,VARREF(YLanyG));
  yg_declsF557 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F556,YPint((P)1));
  check_type(T31,VARREF(YLanyG));
  yg_placeF558 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T33,VARREF(YLanyG));
  tmpF559 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF559);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF555);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),4,xg_declsF554,yg_declsF557,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF555);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF558);
  T43 = CALLN(1,VARREF(YgooSmacrosYcat),4,T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF558);
  T51 = CALL1(1,VARREF(Ylst),tmpF559);
  T48 = CALLN(1,VARREF(YgooSmacrosYcat),4,T49,T50,T51,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),5,T35,T36,T42,T47,Ynil);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_41) {
  P return_;
  P valF569;
  P new_colF568;
  P g_placeF567;
  P g_declsF566;
  P tup16F565;
  P x_1125F564;
  P x_1125F563;
  P placeF562;
  P x_1125F561;
  P x_1126F560;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1126_40,1);
  x_1126F560 = T1;
  FUNINIT(x_1126F560, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1125F561 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  placeF562 = YPfalse;
  placeF562 = BOXFAB(placeF562);
  T5 = CALL2(1,VARREF(YisaQ),x_1125F561,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1125F561,LITREF(lit_55),x_1126F560);
    check_type(T7,VARREF(YLanyG));
    x_1125F563 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1125F563,x_1126F560);
    BOXVAL(placeF562) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1125F563);
    check_type(T10,VARREF(YLanyG));
    x_1125F564 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1125F564,x_1126F560);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1126F560,LITREF(lit_6),x_1125F561);
  }
  T15 = BOXVAL(placeF562);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  check_type(T14,VARREF(YLanyG));
  tup16F565 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F565,YPint((P)0));
  check_type(T17,VARREF(YLanyG));
  g_declsF566 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F565,YPint((P)1));
  check_type(T19,VARREF(YLanyG));
  g_placeF567 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T21,VARREF(YLanyG));
  new_colF568 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T23,VARREF(YLanyG));
  valF569 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T33 = CALL1(1,VARREF(Ylst),new_colF568);
  T34 = CALL1(1,VARREF(Ylst),valF569);
  T31 = CALLN(1,VARREF(YgooSmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T38 = CALL1(1,VARREF(Ylst),g_placeF567);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF566,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T42 = CALL1(1,VARREF(Ylst),g_placeF567);
  T43 = CALL1(1,VARREF(Ylst),new_colF568);
  T40 = CALLN(1,VARREF(YgooSmacrosYcat),4,T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF569);
  T24 = CALLN(1,VARREF(YgooSmacrosYcat),5,T25,T26,T39,T44,Ynil);
  T22 = T24;
  T20 = T22;
  T18 = T20;
  T16 = T18;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_44) {
  P return_;
  P g_placeF579;
  P g_declsF578;
  P tup18F577;
  P x_1129F576;
  P x_1129F575;
  P x_1129F574;
  P callF573;
  P placeF572;
  P x_1129F571;
  P x_1130F570;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1130_43,1);
  x_1130F570 = T1;
  FUNINIT(x_1130F570, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1129F571 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  placeF572 = YPfalse;
  placeF572 = BOXFAB(placeF572);
  check_type(YPfalse,VARREF(YLanyG));
  callF573 = YPfalse;
  callF573 = BOXFAB(callF573);
  T7 = CALL2(1,VARREF(YisaQ),x_1129F571,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1129F571,LITREF(lit_59),x_1130F570);
    check_type(T9,VARREF(YLanyG));
    x_1129F574 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1129F574,x_1130F570);
    BOXVAL(placeF572) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1129F574);
    check_type(T12,VARREF(YLanyG));
    x_1129F575 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1129F575,x_1130F570);
    BOXVAL(callF573) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1129F575);
    check_type(T15,VARREF(YLanyG));
    x_1129F576 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1129F576,x_1130F570);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1130F570,LITREF(lit_6),x_1129F571);
  }
  T20 = BOXVAL(placeF572);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  check_type(T19,VARREF(YLanyG));
  tup18F577 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F577,YPint((P)0));
  check_type(T22,VARREF(YLanyG));
  g_declsF578 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F577,YPint((P)1));
  check_type(T24,VARREF(YLanyG));
  g_placeF579 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T32 = CALL1(1,VARREF(Ylst),g_placeF579);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF578,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T36 = CALL1(1,VARREF(Ylst),g_placeF579);
  T38 = BOXVAL(callF573);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),4,T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T33,Ynil);
  T23 = T25;
  T21 = T23;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1133F586;
  P x_1133F585;
  P x_1133F584;
  P bodyF583;
  P testF582;
  P x_1133F581;
  P x_1134F580;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1134_46,1);
  x_1134F580 = T1;
  FUNINIT(x_1134F580, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1133F581 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  testF582 = YPfalse;
  testF582 = BOXFAB(testF582);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF583 = YPfalse;
  bodyF583 = BOXFAB(bodyF583);
  T7 = CALL2(1,VARREF(YisaQ),x_1133F581,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1133F581,LITREF(lit_62),x_1134F580);
    check_type(T9,VARREF(YLanyG));
    x_1133F584 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1133F584,x_1134F580);
    BOXVAL(testF582) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1133F584);
    check_type(T12,VARREF(YLanyG));
    x_1133F585 = T12;
    BOXVAL(bodyF583) = x_1133F585;
    check_type(Ynil,VARREF(YLanyG));
    x_1133F586 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1133F586,x_1134F580);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1134F580,LITREF(lit_6),x_1133F581);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T22 = BOXVAL(testF582);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T26 = BOXVAL(bodyF583);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),4,T17,T18,T23,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_50) {
  P return_;
  P x_1137F593;
  P x_1137F592;
  P x_1137F591;
  P bodyF590;
  P testF589;
  P x_1137F588;
  P x_1138F587;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1138_49,1);
  x_1138F587 = T1;
  FUNINIT(x_1138F587, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1137F588 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  testF589 = YPfalse;
  testF589 = BOXFAB(testF589);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF590 = YPfalse;
  bodyF590 = BOXFAB(bodyF590);
  T7 = CALL2(1,VARREF(YisaQ),x_1137F588,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1137F588,LITREF(lit_66),x_1138F587);
    check_type(T9,VARREF(YLanyG));
    x_1137F591 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1137F591,x_1138F587);
    BOXVAL(testF589) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1137F591);
    check_type(T12,VARREF(YLanyG));
    x_1137F592 = T12;
    BOXVAL(bodyF590) = x_1137F592;
    check_type(Ynil,VARREF(YLanyG));
    x_1137F593 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1137F593,x_1138F587);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1138F587,LITREF(lit_6),x_1137F588);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF589);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF590);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),4,T17,T18,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T18 = BOXVAL(FREEREF(2));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALLN(1,VARREF(YgooSmacrosYcat),5,T12,T13,T14,T15,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALLN(1,VARREF(YgooSmacrosYcat),4,T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1149F595;
  P x_1150F594;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_54,3);
  x_1150F594 = T1;
  FUNINIT(x_1150F594, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  check_type(T3,VARREF(YLanyG));
  x_1149F595 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1149F595,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1149F595,x_1150F594);
  } else {
    T6 = CALL2(1,x_1150F594,LITREF(lit_6),x_1149F595);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1147F601;
  P x_1147F600;
  P restF599;
  P xF598;
  P x_1147F597;
  P x_1148F596;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_53,1);
  x_1148F596 = T1;
  FUNINIT(x_1148F596, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1147F597 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  xF598 = YPfalse;
  xF598 = BOXFAB(xF598);
  check_type(YPfalse,VARREF(YLanyG));
  restF599 = YPfalse;
  restF599 = BOXFAB(restF599);
  T8 = CALL2(1,VARREF(YisaQ),x_1147F597,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1147F597,x_1148F596);
    BOXVAL(xF598) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1147F597);
    check_type(T11,VARREF(YLanyG));
    x_1147F600 = T11;
    BOXVAL(restF599) = x_1147F600;
    check_type(Ynil,VARREF(YLanyG));
    x_1147F601 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F601,x_1148F596);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1148F596,LITREF(lit_6),x_1147F597);
  }
  T16 = FUNFAB(fun_55,2,xF598,restF599);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1145F606;
  P x_1145F605;
  P restF604;
  P x_1145F603;
  P x_1146F602;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1146_52,1);
  x_1146F602 = T1;
  FUNINIT(x_1146F602, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1145F603 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  restF604 = YPfalse;
  restF604 = BOXFAB(restF604);
  T5 = CALL2(1,VARREF(YisaQ),x_1145F603,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1145F603,LITREF(lit_68),x_1146F602);
    check_type(T7,VARREF(YLanyG));
    x_1145F605 = T7;
    BOXVAL(restF604) = x_1145F605;
    check_type(Ynil,VARREF(YLanyG));
    x_1145F606 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1145F606,x_1146F602);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1146F602,LITREF(lit_6),x_1145F603);
  }
  T12 = FUNFAB(fun_56,1,restF604);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T17 = BOXVAL(FREEREF(2));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,Ynil);
  T14 = CALL1(1,VARREF(Ylst),T15);
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T11 = CALLN(1,VARREF(YgooSmacrosYcat),5,T12,T13,T14,T18,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALLN(1,VARREF(YgooSmacrosYcat),4,T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1161F608;
  P x_1162F607;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1162_61,3);
  x_1162F607 = T1;
  FUNINIT(x_1162F607, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  check_type(T3,VARREF(YLanyG));
  x_1161F608 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1161F608,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F608,x_1162F607);
  } else {
    T6 = CALL2(1,x_1162F607,LITREF(lit_6),x_1161F608);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1159F614;
  P x_1159F613;
  P restF612;
  P xF611;
  P x_1159F610;
  P x_1160F609;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_60,1);
  x_1160F609 = T1;
  FUNINIT(x_1160F609, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1159F610 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  xF611 = YPfalse;
  xF611 = BOXFAB(xF611);
  check_type(YPfalse,VARREF(YLanyG));
  restF612 = YPfalse;
  restF612 = BOXFAB(restF612);
  T8 = CALL2(1,VARREF(YisaQ),x_1159F610,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F610,x_1160F609);
    BOXVAL(xF611) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1159F610);
    check_type(T11,VARREF(YLanyG));
    x_1159F613 = T11;
    BOXVAL(restF612) = x_1159F613;
    check_type(Ynil,VARREF(YLanyG));
    x_1159F614 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F614,x_1160F609);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1160F609,LITREF(lit_6),x_1159F610);
  }
  T16 = FUNFAB(fun_62,2,xF611,restF612);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1157F619;
  P x_1157F618;
  P restF617;
  P x_1157F616;
  P x_1158F615;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_59,1);
  x_1158F615 = T1;
  FUNINIT(x_1158F615, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1157F616 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  restF617 = YPfalse;
  restF617 = BOXFAB(restF617);
  T5 = CALL2(1,VARREF(YisaQ),x_1157F616,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1157F616,LITREF(lit_73),x_1158F615);
    check_type(T7,VARREF(YLanyG));
    x_1157F618 = T7;
    BOXVAL(restF617) = x_1157F618;
    check_type(Ynil,VARREF(YLanyG));
    x_1157F619 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F619,x_1158F615);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1158F615,LITREF(lit_6),x_1157F616);
  }
  T12 = FUNFAB(fun_63,1,restF617);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_68) {
  P return_;
  P x_1169F625;
  P x_1169F624;
  P bodyF623;
  P condF622;
  P x_1169F621;
  P x_1170F620;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_67,2);
  x_1170F620 = T1;
  FUNINIT(x_1170F620, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  check_type(T3,VARREF(YLanyG));
  x_1169F621 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  condF622 = YPfalse;
  condF622 = BOXFAB(condF622);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF623 = YPfalse;
  bodyF623 = BOXFAB(bodyF623);
  T9 = CALL2(1,VARREF(YisaQ),x_1169F621,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1169F621,x_1170F620);
    BOXVAL(condF622) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1169F621);
    check_type(T12,VARREF(YLanyG));
    x_1169F624 = T12;
    BOXVAL(bodyF623) = x_1169F624;
    check_type(Ynil,VARREF(YLanyG));
    x_1169F625 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F625,x_1170F620);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1170F620,LITREF(lit_6),x_1169F621);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF622);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF623);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL1(1,VARREF(Ytail),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T20,T24,Ynil);
  T7 = T16;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1167F630;
  P x_1167F629;
  P casesF628;
  P x_1167F627;
  P x_1168F626;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1168_66,1);
  x_1168F626 = T1;
  FUNINIT(x_1168F626, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1167F627 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  casesF628 = YPfalse;
  casesF628 = BOXFAB(casesF628);
  T5 = CALL2(1,VARREF(YisaQ),x_1167F627,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1167F627,LITREF(lit_77),x_1168F626);
    check_type(T7,VARREF(YLanyG));
    x_1167F629 = T7;
    BOXVAL(casesF628) = x_1167F629;
    check_type(Ynil,VARREF(YLanyG));
    x_1167F630 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F630,x_1168F626);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1168F626,LITREF(lit_6),x_1167F627);
  }
  T13 = BOXVAL(casesF628);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_68,1,casesF628);
    T14 = with_exit(T15);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),4,T1,T2,T3,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P x_1177F634;
  P valuesF633;
  P x_1177F632;
  P x_1178F631;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1178_72,2);
  x_1178F631 = T1;
  FUNINIT(x_1178F631, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  check_type(T3,VARREF(YLanyG));
  x_1177F632 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  valuesF633 = YPfalse;
  valuesF633 = BOXFAB(valuesF633);
  T6 = CALL2(1,VARREF(YisaQ),x_1177F632,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF633) = x_1177F632;
    check_type(Ynil,VARREF(YLanyG));
    x_1177F634 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1177F634,x_1178F631);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1178F631,LITREF(lit_6),x_1177F632);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T16 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF633);
  T15 = CALL2(1,VARREF(YgooSmacrosYmap),T16,T17);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,Ynil);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T21 = BOXVAL(FREEREF(4));
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T24 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T23 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),FREEREF(3),FREEREF(2),T24);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T10 = CALLN(1,VARREF(YgooSmacrosYcat),5,T11,T12,T18,T22,Ynil);
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1175F640;
  P x_1175F639;
  P bodyF638;
  P condF637;
  P x_1175F636;
  P x_1176F635;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_71,2);
  x_1176F635 = T1;
  FUNINIT(x_1176F635, 2,return_,FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1175F636 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  condF637 = YPfalse;
  condF637 = BOXFAB(condF637);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF638 = YPfalse;
  bodyF638 = BOXFAB(bodyF638);
  T8 = CALL2(1,VARREF(YisaQ),x_1175F636,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F636,x_1176F635);
    BOXVAL(condF637) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1175F636);
    check_type(T11,VARREF(YLanyG));
    x_1175F639 = T11;
    BOXVAL(bodyF638) = x_1175F639;
    check_type(Ynil,VARREF(YLanyG));
    x_1175F640 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F640,x_1176F635);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1176F635,LITREF(lit_6),x_1175F636);
  }
  T17 = BOXVAL(condF637);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T20 = BOXVAL(bodyF638);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_74,5,FREEREF(0),condF637,FREEREF(1),FREEREF(2),bodyF638);
    T21 = with_exit(T22);
    T15 = T21;
  }
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmacrosYdo_case_by) {
  P val_,tst_,cases_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(tst_, 1);
  ARG(cases_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),cases_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = FUNFAB(fun_75,3,cases_,tst_,val_);
    T2 = with_exit(T3);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P tst_varF651;
  P val_varF650;
  P x_1181F649;
  P x_1181F648;
  P x_1181F647;
  P x_1181F646;
  P casesF645;
  P tstF644;
  P valF643;
  P x_1181F642;
  P x_1182F641;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1182_77,1);
  x_1182F641 = T1;
  FUNINIT(x_1182F641, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1181F642 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  valF643 = YPfalse;
  valF643 = BOXFAB(valF643);
  check_type(YPfalse,VARREF(YLanyG));
  tstF644 = YPfalse;
  tstF644 = BOXFAB(tstF644);
  check_type(YPfalse,VARREF(YLanyG));
  casesF645 = YPfalse;
  casesF645 = BOXFAB(casesF645);
  T9 = CALL2(1,VARREF(YisaQ),x_1181F642,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1181F642,LITREF(lit_90),x_1182F641);
    check_type(T11,VARREF(YLanyG));
    x_1181F646 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1181F646,x_1182F641);
    BOXVAL(valF643) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1181F646);
    check_type(T14,VARREF(YLanyG));
    x_1181F647 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1181F647,x_1182F641);
    BOXVAL(tstF644) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1181F647);
    check_type(T17,VARREF(YLanyG));
    x_1181F648 = T17;
    BOXVAL(casesF645) = x_1181F648;
    check_type(Ynil,VARREF(YLanyG));
    x_1181F649 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1181F649,x_1182F641);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1182F641,LITREF(lit_6),x_1181F642);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T22,VARREF(YLanyG));
  val_varF650 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T24,VARREF(YLanyG));
  tst_varF651 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF650);
  T33 = BOXVAL(valF643);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF651);
  T38 = BOXVAL(tstF644);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF645);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF650,tst_varF651,T41);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T39,Ynil);
  T23 = T25;
  T21 = T23;
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_81) {
  P return_;
  P x_1185F658;
  P x_1185F657;
  P x_1185F656;
  P casesF655;
  P valF654;
  P x_1185F653;
  P x_1186F652;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1186_80,1);
  x_1186F652 = T1;
  FUNINIT(x_1186F652, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1185F653 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  valF654 = YPfalse;
  valF654 = BOXFAB(valF654);
  check_type(YPfalse,VARREF(YLanyG));
  casesF655 = YPfalse;
  casesF655 = BOXFAB(casesF655);
  T7 = CALL2(1,VARREF(YisaQ),x_1185F653,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1185F653,LITREF(lit_92),x_1186F652);
    check_type(T9,VARREF(YLanyG));
    x_1185F656 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1185F656,x_1186F652);
    BOXVAL(valF654) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1185F656);
    check_type(T12,VARREF(YLanyG));
    x_1185F657 = T12;
    BOXVAL(casesF655) = x_1185F657;
    check_type(Ynil,VARREF(YLanyG));
    x_1185F658 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1185F658,x_1186F652);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1186F652,LITREF(lit_6),x_1185F653);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T19 = BOXVAL(valF654);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T21 = BOXVAL(casesF655);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_85) {
  P return_;
  P varF669;
  P x_1197F668;
  P x_1197F667;
  P x_1197F666;
  P x_1197F665;
  P x_1197F664;
  P restF663;
  P thenF662;
  P patF661;
  P x_1197F660;
  P x_1198F659;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1198_84,1);
  x_1198F659 = T1;
  FUNINIT(x_1198F659, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1197F660 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  patF661 = YPfalse;
  patF661 = BOXFAB(patF661);
  check_type(YPfalse,VARREF(YLanyG));
  thenF662 = YPfalse;
  thenF662 = BOXFAB(thenF662);
  check_type(YPfalse,VARREF(YLanyG));
  restF663 = YPfalse;
  restF663 = BOXFAB(restF663);
  T10 = CALL2(1,VARREF(YisaQ),x_1197F660,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1197F660,x_1198F659);
    check_type(T12,VARREF(YLanyG));
    x_1197F664 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1197F664,x_1198F659);
    BOXVAL(patF661) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1197F664);
    check_type(T15,VARREF(YLanyG));
    x_1197F665 = T15;
    BOXVAL(thenF662) = x_1197F665;
    check_type(Ynil,VARREF(YLanyG));
    x_1197F666 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1197F666,x_1198F659);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1197F660);
    check_type(T18,VARREF(YLanyG));
    x_1197F667 = T18;
    BOXVAL(restF663) = x_1197F667;
    check_type(Ynil,VARREF(YLanyG));
    x_1197F668 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1197F668,x_1198F659);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1198F659,LITREF(lit_6),x_1197F660);
  }
  T24 = BOXVAL(patF661);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T27 = BOXVAL(thenF662);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    check_type(T29,VARREF(YLanyG));
    varF669 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF669);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T45 = BOXVAL(patF661);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF669);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T50 = BOXVAL(thenF662);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
    T54 = CALL1(1,VARREF(Ylst),varF669);
    T55 = BOXVAL(restF663);
    T52 = CALLN(1,VARREF(YgooSmacrosYcat),4,T53,T54,T55,Ynil);
    T51 = CALL1(1,VARREF(Ylst),T52);
    T40 = CALLN(1,VARREF(YgooSmacrosYcat),5,T41,T42,T47,T51,Ynil);
    T39 = CALL1(1,VARREF(Ylst),T40);
    T30 = CALLN(1,VARREF(YgooSmacrosYcat),4,T31,T32,T39,Ynil);
    T28 = T30;
    T22 = T28;
  }
  T8 = T22;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_87) {
  P return_;
  P x_1195F671;
  P x_1196F670;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_86,3);
  x_1196F670 = T1;
  FUNINIT(x_1196F670, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1195F671 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1195F671,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F671,x_1196F670);
  } else {
    T6 = CALL2(1,x_1196F670,LITREF(lit_6),x_1195F671);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_88) {
  P return_;
  P x_1193F678;
  P x_1193F677;
  P x_1193F676;
  P casesF675;
  P expF674;
  P x_1193F673;
  P x_1194F672;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1194_83,1);
  x_1194F672 = T1;
  FUNINIT(x_1194F672, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1193F673 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  expF674 = YPfalse;
  expF674 = BOXFAB(expF674);
  check_type(YPfalse,VARREF(YLanyG));
  casesF675 = YPfalse;
  casesF675 = BOXFAB(casesF675);
  T7 = CALL2(1,VARREF(YisaQ),x_1193F673,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1193F673,LITREF(lit_95),x_1194F672);
    check_type(T9,VARREF(YLanyG));
    x_1193F676 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1193F676,x_1194F672);
    BOXVAL(expF674) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1193F676);
    check_type(T12,VARREF(YLanyG));
    x_1193F677 = T12;
    BOXVAL(casesF675) = x_1193F677;
    check_type(Ynil,VARREF(YLanyG));
    x_1193F678 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1193F678,x_1194F672);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1194F672,LITREF(lit_6),x_1193F673);
  }
  T17 = FUNFAB(fun_87,2,casesF675,expF674);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_91) {
  P return_;
  P x_1201F687;
  P x_1201F686;
  P x_1201F685;
  P x_1201F684;
  P argsF683;
  P messageF682;
  P condF681;
  P x_1201F680;
  P x_1202F679;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1202_90,1);
  x_1202F679 = T1;
  FUNINIT(x_1202F679, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1201F680 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  condF681 = YPfalse;
  condF681 = BOXFAB(condF681);
  check_type(YPfalse,VARREF(YLanyG));
  messageF682 = YPfalse;
  messageF682 = BOXFAB(messageF682);
  check_type(YPfalse,VARREF(YLanyG));
  argsF683 = YPfalse;
  argsF683 = BOXFAB(argsF683);
  T9 = CALL2(1,VARREF(YisaQ),x_1201F680,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1201F680,LITREF(lit_102),x_1202F679);
    check_type(T11,VARREF(YLanyG));
    x_1201F684 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1201F684,x_1202F679);
    BOXVAL(condF681) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1201F684);
    check_type(T14,VARREF(YLanyG));
    x_1201F685 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1201F685,x_1202F679);
    BOXVAL(messageF682) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1201F685);
    check_type(T17,VARREF(YLanyG));
    x_1201F686 = T17;
    BOXVAL(argsF683) = x_1201F686;
    check_type(Ynil,VARREF(YLanyG));
    x_1201F687 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1201F687,x_1202F679);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1202F679,LITREF(lit_6),x_1201F680);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T27 = BOXVAL(condF681);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF682);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF683);
  T29 = CALLN(1,VARREF(YgooSmacrosYcat),4,T30,T31,T33,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T21 = CALLN(1,VARREF(YgooSmacrosYcat),4,T22,T23,T28,Ynil);
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_96) {
  P return_;
  P x_1213F694;
  P x_1213F693;
  P x_1213F692;
  P valF691;
  P keyF690;
  P x_1213F689;
  P x_1214F688;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1214_95,3);
  x_1214F688 = T1;
  FUNINIT(x_1214F688, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1213F689 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  keyF690 = YPfalse;
  keyF690 = BOXFAB(keyF690);
  check_type(YPfalse,VARREF(YLanyG));
  valF691 = YPfalse;
  valF691 = BOXFAB(valF691);
  T8 = CALL2(1,VARREF(YisaQ),x_1213F689,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1213F689,LITREF(lit_56),x_1214F688);
    check_type(T10,VARREF(YLanyG));
    x_1213F692 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1213F692,x_1214F688);
    BOXVAL(keyF690) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1213F692);
    check_type(T13,VARREF(YLanyG));
    x_1213F693 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1213F693,x_1214F688);
    BOXVAL(valF691) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1213F693);
    check_type(T16,VARREF(YLanyG));
    x_1213F694 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1213F694,x_1214F688);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1214F688,LITREF(lit_6),x_1213F689);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T24 = BOXVAL(keyF690);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF691);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALLN(1,VARREF(YgooSmacrosYcat),4,T22,T23,T25,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T33 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T37 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALLN(1,VARREF(YgooSmacrosYcat),4,T29,T30,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T27,Ynil);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P stateF701;
  P x_1211F700;
  P x_1211F699;
  P expF698;
  P varF697;
  P x_1211F696;
  P x_1212F695;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_94,1);
  x_1212F695 = T1;
  FUNINIT(x_1212F695, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1211F696 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  varF697 = YPfalse;
  varF697 = BOXFAB(varF697);
  check_type(YPfalse,VARREF(YLanyG));
  expF698 = YPfalse;
  expF698 = BOXFAB(expF698);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F696,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F696,x_1212F695);
    BOXVAL(varF697) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1211F696);
    check_type(T10,VARREF(YLanyG));
    x_1211F699 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F699,x_1212F695);
    BOXVAL(expF698) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1211F699);
    check_type(T13,VARREF(YLanyG));
    x_1211F700 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F700,x_1212F695);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1212F695,LITREF(lit_6),x_1211F696);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T17,VARREF(YLanyG));
  stateF701 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(2));
  T22 = CALL1(1,VARREF(Ylst),stateF701);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_112));
  T27 = BOXVAL(expF698);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(3));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T31 = CALL1(1,VARREF(Ylst),stateF701);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(4));
  T34 = FUNFAB(fun_96,2,varF697,stateF701);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(5));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T38 = CALL1(1,VARREF(Ylst),stateF701);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,FREEREF(6));
  T18 = CALLN(1,FREEREF(1),5,T19,T20,T28,T32,T35);
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF703;
  P loopF702;
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
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),clauses_);
  if (T1 != YPfalse) {
    T3 = CALL0(1,VARREF(YgooSmacrosYgensym));
    check_type(T3,VARREF(YLanyG));
    loopF702 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
    T6 = CALL1(1,VARREF(Ylst),loopF702);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF702);
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,nexts_,Ynil);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T15 = CALLN(1,VARREF(YgooSmacrosYcat),5,T16,T17,T18,T19,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T9 = CALLN(1,VARREF(YgooSmacrosYcat),4,T10,T11,T14,Ynil);
    T8 = CALL1(1,VARREF(Ylst),T9);
    T4 = CALLN(1,VARREF(YgooSmacrosYcat),5,T5,T6,T7,T8,Ynil);
    T2 = T4;
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    check_type(T23,VARREF(YLanyG));
    clauseF703 = T23;
    T25 = FUNFAB(fun_97,7,clauseF703,FREEREF(1),clauses_,inits_,preds_,nows_,nexts_);
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF713;
  P x_1209F712;
  P x_1209F711;
  P x_1209F710;
  P x_1209F709;
  P x_1209F708;
  P bodyF707;
  P clausesF706;
  P x_1209F705;
  P x_1210F704;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1210_93,1);
  x_1210F704 = T1;
  FUNINIT(x_1210F704, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1209F705 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  clausesF706 = YPfalse;
  clausesF706 = BOXFAB(clausesF706);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF707 = YPfalse;
  bodyF707 = BOXFAB(bodyF707);
  T7 = CALL2(1,VARREF(YisaQ),x_1209F705,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1209F705,LITREF(lit_104),x_1210F704);
    check_type(T9,VARREF(YLanyG));
    x_1209F708 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1209F708,x_1210F704);
    check_type(T11,VARREF(YLanyG));
    x_1209F709 = T11;
    BOXVAL(clausesF706) = x_1209F709;
    check_type(Ynil,VARREF(YLanyG));
    x_1209F710 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1209F710,x_1210F704);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1209F708);
    check_type(T14,VARREF(YLanyG));
    x_1209F711 = T14;
    BOXVAL(bodyF707) = x_1209F711;
    check_type(Ynil,VARREF(YLanyG));
    x_1209F712 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1209F712,x_1210F704);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1210F704,LITREF(lit_6),x_1209F705);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF713 = T19;
  FUNINIT(grokF713, 2,bodyF707,grokF713);
  T21 = BOXVAL(clausesF706);
  T20 = CALLN(1,grokF713,5,T21,Ynil,Ynil,Ynil,Ynil);
  T18 = T20;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_102) {
  P return_;
  P x_1217F720;
  P x_1217F719;
  P x_1217F718;
  P bodyF717;
  P testF716;
  P x_1217F715;
  P x_1218F714;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1218_101,1);
  x_1218F714 = T1;
  FUNINIT(x_1218F714, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1217F715 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  testF716 = YPfalse;
  testF716 = BOXFAB(testF716);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF717 = YPfalse;
  bodyF717 = BOXFAB(bodyF717);
  T7 = CALL2(1,VARREF(YisaQ),x_1217F715,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1217F715,LITREF(lit_119),x_1218F714);
    check_type(T9,VARREF(YLanyG));
    x_1217F718 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1217F718,x_1218F714);
    BOXVAL(testF716) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1217F718);
    check_type(T12,VARREF(YLanyG));
    x_1217F719 = T12;
    BOXVAL(bodyF717) = x_1217F719;
    check_type(Ynil,VARREF(YLanyG));
    x_1217F720 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1217F720,x_1218F714);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1218F714,LITREF(lit_6),x_1217F715);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T24 = BOXVAL(testF716);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF717);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALLN(1,VARREF(YgooSmacrosYcat),5,T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_105) {
  P return_;
  P x_1221F727;
  P x_1221F726;
  P x_1221F725;
  P bodyF724;
  P testF723;
  P x_1221F722;
  P x_1222F721;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1222_104,1);
  x_1222F721 = T1;
  FUNINIT(x_1222F721, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1221F722 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  testF723 = YPfalse;
  testF723 = BOXFAB(testF723);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF724 = YPfalse;
  bodyF724 = BOXFAB(bodyF724);
  T7 = CALL2(1,VARREF(YisaQ),x_1221F722,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1221F722,LITREF(lit_122),x_1222F721);
    check_type(T9,VARREF(YLanyG));
    x_1221F725 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1221F725,x_1222F721);
    BOXVAL(testF723) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1221F725);
    check_type(T12,VARREF(YLanyG));
    x_1221F726 = T12;
    BOXVAL(bodyF724) = x_1221F726;
    check_type(Ynil,VARREF(YLanyG));
    x_1221F727 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1221F727,x_1222F721);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1222F721,LITREF(lit_6),x_1221F722);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T24 = BOXVAL(testF723);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF724);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALLN(1,VARREF(YgooSmacrosYcat),5,T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_108) {
  P return_;
  P x_1225F734;
  P x_1225F733;
  P x_1225F732;
  P expF731;
  P bindingF730;
  P x_1225F729;
  P x_1226F728;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1226_107,1);
  x_1226F728 = T1;
  FUNINIT(x_1226F728, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1225F729 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  bindingF730 = YPfalse;
  bindingF730 = BOXFAB(bindingF730);
  check_type(YPfalse,VARREF(YLanyG));
  expF731 = YPfalse;
  expF731 = BOXFAB(expF731);
  T7 = CALL2(1,VARREF(YisaQ),x_1225F729,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1225F729,LITREF(lit_124),x_1226F728);
    check_type(T9,VARREF(YLanyG));
    x_1225F732 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1225F732,x_1226F728);
    BOXVAL(bindingF730) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1225F732);
    check_type(T12,VARREF(YLanyG));
    x_1225F733 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1225F733,x_1226F728);
    BOXVAL(expF731) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1225F733);
    check_type(T15,VARREF(YLanyG));
    x_1225F734 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1225F734,x_1226F728);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1226F728,LITREF(lit_6),x_1225F729);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_125));
  T21 = BOXVAL(bindingF730);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF731);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALLN(1,VARREF(YgooSmacrosYcat),4,T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_112) {
  P return_;
  P old_valueF746;
  P nameF745;
  P x_1237F744;
  P x_1237F743;
  P x_1237F742;
  P x_1237F741;
  P x_1237F740;
  P restF739;
  P valueF738;
  P varF737;
  P x_1237F736;
  P x_1238F735;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1238_111,2);
  x_1238F735 = T1;
  FUNINIT(x_1238F735, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1237F736 = T3;
  check_type(YPfalse,VARREF(YLanyG));
  varF737 = YPfalse;
  varF737 = BOXFAB(varF737);
  check_type(YPfalse,VARREF(YLanyG));
  valueF738 = YPfalse;
  valueF738 = BOXFAB(valueF738);
  check_type(YPfalse,VARREF(YLanyG));
  restF739 = YPfalse;
  restF739 = BOXFAB(restF739);
  T10 = CALL2(1,VARREF(YisaQ),x_1237F736,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1237F736,x_1238F735);
    check_type(T12,VARREF(YLanyG));
    x_1237F740 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1237F740,x_1238F735);
    BOXVAL(varF737) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1237F740);
    check_type(T15,VARREF(YLanyG));
    x_1237F741 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1237F741,x_1238F735);
    BOXVAL(valueF738) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1237F741);
    check_type(T18,VARREF(YLanyG));
    x_1237F742 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1237F742,x_1238F735);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1237F736);
    check_type(T20,VARREF(YLanyG));
    x_1237F743 = T20;
    BOXVAL(restF739) = x_1237F743;
    check_type(Ynil,VARREF(YLanyG));
    x_1237F744 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1237F744,x_1238F735);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1238F735,LITREF(lit_6),x_1237F736);
  }
  T26 = BOXVAL(varF737);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  check_type(T25,VARREF(YLanyG));
  nameF745 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  check_type(T28,VARREF(YLanyG));
  old_valueF746 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF746);
  T36 = CALL1(1,VARREF(Ylst),nameF745);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T46 = CALL1(1,VARREF(Ylst),nameF745);
  T48 = BOXVAL(valueF738);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T54 = BOXVAL(restF739);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALLN(1,VARREF(YgooSmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALLN(1,VARREF(YgooSmacrosYcat),4,T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T59 = CALL1(1,VARREF(Ylst),nameF745);
  T60 = CALL1(1,VARREF(Ylst),old_valueF746);
  T57 = CALLN(1,VARREF(YgooSmacrosYcat),4,T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),4,T39,T40,T56,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T29 = CALLN(1,VARREF(YgooSmacrosYcat),4,T30,T31,T37,Ynil);
  T27 = T29;
  T24 = T27;
  T8 = T24;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_114) {
  P return_;
  P x_1235F748;
  P x_1236F747;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_113,3);
  x_1236F747 = T1;
  FUNINIT(x_1236F747, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  x_1235F748 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1235F748,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F748,x_1236F747);
  } else {
    T6 = CALL2(1,x_1236F747,LITREF(lit_6),x_1235F748);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_115) {
  P return_;
  P x_1233F755;
  P x_1233F754;
  P x_1233F753;
  P bodyF752;
  P bindingsF751;
  P x_1233F750;
  P x_1234F749;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1234_110,1);
  x_1234F749 = T1;
  FUNINIT(x_1234F749, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1233F750 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  bindingsF751 = YPfalse;
  bindingsF751 = BOXFAB(bindingsF751);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF752 = YPfalse;
  bodyF752 = BOXFAB(bodyF752);
  T7 = CALL2(1,VARREF(YisaQ),x_1233F750,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1233F750,LITREF(lit_127),x_1234F749);
    check_type(T9,VARREF(YLanyG));
    x_1233F753 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1233F753,x_1234F749);
    BOXVAL(bindingsF751) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1233F753);
    check_type(T12,VARREF(YLanyG));
    x_1233F754 = T12;
    BOXVAL(bodyF752) = x_1233F754;
    check_type(Ynil,VARREF(YLanyG));
    x_1233F755 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1233F755,x_1234F749);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1234F749,LITREF(lit_6),x_1233F750);
  }
  T17 = FUNFAB(fun_114,2,bindingsF751,bodyF752);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_118) {
  P return_;
  P vnamF765;
  P typF764;
  P namF763;
  P x_1241F762;
  P x_1241F761;
  P x_1241F760;
  P valueF759;
  P varF758;
  P x_1241F757;
  P x_1242F756;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1242_117,1);
  x_1242F756 = T1;
  FUNINIT(x_1242F756, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1241F757 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  varF758 = YPfalse;
  varF758 = BOXFAB(varF758);
  check_type(YPfalse,VARREF(YLanyG));
  valueF759 = YPfalse;
  valueF759 = BOXFAB(valueF759);
  T7 = CALL2(1,VARREF(YisaQ),x_1241F757,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1241F757,LITREF(lit_133),x_1242F756);
    check_type(T9,VARREF(YLanyG));
    x_1241F760 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1241F760,x_1242F756);
    BOXVAL(varF758) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1241F760);
    check_type(T12,VARREF(YLanyG));
    x_1241F761 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1241F761,x_1242F756);
    BOXVAL(valueF759) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1241F761);
    check_type(T15,VARREF(YLanyG));
    x_1241F762 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1241F762,x_1242F756);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1242F756,LITREF(lit_6),x_1241F757);
  }
  T20 = BOXVAL(varF758);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  check_type(T19,VARREF(YLanyG));
  namF763 = T19;
  T23 = BOXVAL(varF758);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  check_type(T22,VARREF(YLanyG));
  typF764 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_134),namF763,LITREF(lit_135));
  check_type(T25,VARREF(YLanyG));
  vnamF765 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_125));
  T31 = CALL1(1,VARREF(Ylst),vnamF765);
  T33 = BOXVAL(valueF759);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALLN(1,VARREF(YgooSmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T37 = CALL1(1,VARREF(Ylst),namF763);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_137));
  T41 = CALL1(1,VARREF(Ylst),typF764);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF765);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF763);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T53 = CALL1(1,VARREF(Ylst),typF764);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T57 = CALL1(1,VARREF(Ylst),vnamF765);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T55 = CALLN(1,VARREF(YgooSmacrosYcat),4,T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),5,T45,T46,T48,T54,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T26 = CALLN(1,VARREF(YgooSmacrosYcat),5,T27,T28,T34,T43,Ynil);
  T24 = T26;
  T21 = T24;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_121) {
  P return_;
  P x_1245F770;
  P x_1245F769;
  P bodyF768;
  P x_1245F767;
  P x_1246F766;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1246_120,1);
  x_1246F766 = T1;
  FUNINIT(x_1246F766, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1245F767 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF768 = YPfalse;
  bodyF768 = BOXFAB(bodyF768);
  T5 = CALL2(1,VARREF(YisaQ),x_1245F767,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1245F767,LITREF(lit_140),x_1246F766);
    check_type(T7,VARREF(YLanyG));
    x_1245F769 = T7;
    BOXVAL(bodyF768) = x_1245F769;
    check_type(Ynil,VARREF(YLanyG));
    x_1245F770 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1245F770,x_1246F766);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1246F766,LITREF(lit_6),x_1245F767);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF768);
  T11 = CALLN(1,VARREF(YgooSmacrosYcat),4,T12,T13,T19,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_124) {
  P return_;
  P x_1249F775;
  P x_1249F774;
  P namesF773;
  P x_1249F772;
  P x_1250F771;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1250_123,1);
  x_1250F771 = T1;
  FUNINIT(x_1250F771, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1249F772 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  namesF773 = YPfalse;
  namesF773 = BOXFAB(namesF773);
  T5 = CALL2(1,VARREF(YisaQ),x_1249F772,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1249F772,LITREF(lit_143),x_1250F771);
    check_type(T7,VARREF(YLanyG));
    x_1249F774 = T7;
    BOXVAL(namesF773) = x_1249F774;
    check_type(Ynil,VARREF(YLanyG));
    x_1249F775 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1249F775,x_1250F771);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1250F771,LITREF(lit_6),x_1249F772);
  }
  T13 = BOXVAL(namesF773);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF773);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALLN(1,VARREF(YgooSmacrosYcat),4,T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
    T28 = BOXVAL(namesF773);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
    T33 = BOXVAL(namesF773);
    T32 = CALL1(1,VARREF(Ytail),T33);
    T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T14 = CALLN(1,VARREF(YgooSmacrosYcat),5,T15,T16,T23,T29,Ynil);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_128) {
  P return_;
  P x_1265F782;
  P x_1265F781;
  P x_1265F780;
  P restF779;
  P nameF778;
  P x_1265F777;
  P x_1266F776;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1266_127,1);
  x_1266F776 = T1;
  FUNINIT(x_1266F776, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1265F777 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  nameF778 = YPfalse;
  nameF778 = BOXFAB(nameF778);
  check_type(YPfalse,VARREF(YLanyG));
  restF779 = YPfalse;
  restF779 = BOXFAB(restF779);
  T7 = CALL2(1,VARREF(YisaQ),x_1265F777,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F777,LITREF(lit_149),x_1266F776);
    check_type(T9,VARREF(YLanyG));
    x_1265F780 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1265F780,x_1266F776);
    BOXVAL(nameF778) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1265F780);
    check_type(T12,VARREF(YLanyG));
    x_1265F781 = T12;
    BOXVAL(restF779) = x_1265F781;
    check_type(Ynil,VARREF(YLanyG));
    x_1265F782 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F782,x_1266F776);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1266F776,LITREF(lit_6),x_1265F777);
  }
  T17 = BOXVAL(nameF778);
  T18 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YgooSmacrosYpair),T17,T18);
  BOXVAL(FREEREF(1)) = T16;
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T24 = BOXVAL(nameF778);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T25 = BOXVAL(FREEREF(1));
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,T25);
  T19 = BOXVAL(FREEREF(1)) = T20;
  T5 = T19;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_130) {
  P return_;
  P x_1267F789;
  P x_1267F788;
  P x_1267F787;
  P restF786;
  P nameF785;
  P x_1267F784;
  P x_1268F783;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1268_129,1);
  x_1268F783 = T1;
  FUNINIT(x_1268F783, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1267F784 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  nameF785 = YPfalse;
  nameF785 = BOXFAB(nameF785);
  check_type(YPfalse,VARREF(YLanyG));
  restF786 = YPfalse;
  restF786 = BOXFAB(restF786);
  T7 = CALL2(1,VARREF(YisaQ),x_1267F784,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1267F784,LITREF(lit_151),x_1268F783);
    check_type(T9,VARREF(YLanyG));
    x_1267F787 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1267F787,x_1268F783);
    BOXVAL(nameF785) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1267F787);
    check_type(T12,VARREF(YLanyG));
    x_1267F788 = T12;
    BOXVAL(restF786) = x_1267F788;
    check_type(Ynil,VARREF(YLanyG));
    x_1267F789 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1267F789,x_1268F783);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1268F783,LITREF(lit_6),x_1267F784);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF785);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T24 = BOXVAL(FREEREF(1));
  T19 = CALL2(1,VARREF(YgooSmacrosYpair),T20,T24);
  T18 = BOXVAL(FREEREF(1)) = T19;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_132) {
  P return_;
  P x_1269F796;
  P x_1269F795;
  P x_1269F794;
  P restF793;
  P nameF792;
  P x_1269F791;
  P x_1270F790;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1270_131,1);
  x_1270F790 = T1;
  FUNINIT(x_1270F790, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1269F791 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  nameF792 = YPfalse;
  nameF792 = BOXFAB(nameF792);
  check_type(YPfalse,VARREF(YLanyG));
  restF793 = YPfalse;
  restF793 = BOXFAB(restF793);
  T7 = CALL2(1,VARREF(YisaQ),x_1269F791,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1269F791,LITREF(lit_153),x_1270F790);
    check_type(T9,VARREF(YLanyG));
    x_1269F794 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1269F794,x_1270F790);
    BOXVAL(nameF792) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1269F794);
    check_type(T12,VARREF(YLanyG));
    x_1269F795 = T12;
    BOXVAL(restF793) = x_1269F795;
    check_type(Ynil,VARREF(YLanyG));
    x_1269F796 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1269F796,x_1270F790);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1270F790,LITREF(lit_6),x_1269F791);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF792);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T24 = BOXVAL(FREEREF(1));
  T19 = CALL2(1,VARREF(YgooSmacrosYpair),T20,T24);
  T18 = BOXVAL(FREEREF(1)) = T19;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_134) {
  P return_;
  P x_1271F803;
  P x_1271F802;
  P x_1271F801;
  P restF800;
  P nameF799;
  P x_1271F798;
  P x_1272F797;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1272_133,1);
  x_1272F797 = T1;
  FUNINIT(x_1272F797, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1271F798 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  nameF799 = YPfalse;
  nameF799 = BOXFAB(nameF799);
  check_type(YPfalse,VARREF(YLanyG));
  restF800 = YPfalse;
  restF800 = BOXFAB(restF800);
  T7 = CALL2(1,VARREF(YisaQ),x_1271F798,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1271F798,LITREF(lit_125),x_1272F797);
    check_type(T9,VARREF(YLanyG));
    x_1271F801 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F801,x_1272F797);
    BOXVAL(nameF799) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1271F801);
    check_type(T12,VARREF(YLanyG));
    x_1271F802 = T12;
    BOXVAL(restF800) = x_1271F802;
    check_type(Ynil,VARREF(YLanyG));
    x_1271F803 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F803,x_1272F797);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1272F797,LITREF(lit_6),x_1271F798);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF799);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T24 = BOXVAL(FREEREF(1));
  T19 = CALL2(1,VARREF(YgooSmacrosYpair),T20,T24);
  T18 = BOXVAL(FREEREF(1)) = T19;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_136) {
  P return_;
  P x_1273F814;
  P x_1273F813;
  P x_1273F812;
  P x_1273F811;
  P x_1273F810;
  P x_1273F809;
  P defaultF808;
  P paramsF807;
  P nameF806;
  P x_1273F805;
  P x_1274F804;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1274_135,1);
  x_1274F804 = T1;
  FUNINIT(x_1274F804, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1273F805 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  nameF806 = YPfalse;
  nameF806 = BOXFAB(nameF806);
  check_type(YPfalse,VARREF(YLanyG));
  paramsF807 = YPfalse;
  paramsF807 = BOXFAB(paramsF807);
  check_type(YPfalse,VARREF(YLanyG));
  defaultF808 = YPfalse;
  defaultF808 = BOXFAB(defaultF808);
  T9 = CALL2(1,VARREF(YisaQ),x_1273F805,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1273F805,LITREF(lit_156),x_1274F804);
    check_type(T11,VARREF(YLanyG));
    x_1273F809 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1273F809,x_1274F804);
    BOXVAL(nameF806) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1273F809);
    check_type(T14,VARREF(YLanyG));
    x_1273F810 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1273F810,x_1274F804);
    check_type(T16,VARREF(YLanyG));
    x_1273F811 = T16;
    BOXVAL(paramsF807) = x_1273F811;
    check_type(Ynil,VARREF(YLanyG));
    x_1273F812 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1273F812,x_1274F804);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1273F810);
    check_type(T19,VARREF(YLanyG));
    x_1273F813 = T19;
    BOXVAL(defaultF808) = x_1273F813;
    check_type(Ynil,VARREF(YLanyG));
    x_1273F814 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1273F814,x_1274F804);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1274F804,LITREF(lit_6),x_1273F805);
  }
  T24 = BOXVAL(FREEREF(1));
  T23 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),T24);
  BOXVAL(FREEREF(1)) = T23;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T29 = BOXVAL(nameF806);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,Ynil);
  T30 = BOXVAL(FREEREF(1));
  T25 = CALL2(1,VARREF(YgooSmacrosYpair),T26,T30);
  BOXVAL(FREEREF(1)) = T25;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T37 = BOXVAL(nameF806);
  T36 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T37);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T38 = BOXVAL(FREEREF(1));
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,T38);
  T31 = BOXVAL(FREEREF(1)) = T32;
  T7 = T31;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),d_,T3);
    BOXVAL(FREEREF(0)) = T2;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
    T8 = CALL1(1,VARREF(Ylst),d_);
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
    T9 = BOXVAL(FREEREF(0));
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),T6,T9);
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
  RET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P collector_F820;
  P x_1263F819;
  P x_1263F818;
  P defsF817;
  P x_1263F816;
  P x_1264F815;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1264_126,1);
  x_1264F815 = T1;
  FUNINIT(x_1264F815, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1263F816 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  defsF817 = YPfalse;
  defsF817 = BOXFAB(defsF817);
  T5 = CALL2(1,VARREF(YisaQ),x_1263F816,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1263F816,LITREF(lit_146),x_1264F815);
    check_type(T7,VARREF(YLanyG));
    x_1263F818 = T7;
    BOXVAL(defsF817) = x_1263F818;
    check_type(Ynil,VARREF(YLanyG));
    x_1263F819 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1263F819,x_1264F815);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1264F815,LITREF(lit_6),x_1263F816);
  }
  check_type(Ynil,VARREF(YLanyG));
  collector_F820 = Ynil;
  collector_F820 = BOXFAB(collector_F820);
  T14 = FUNFAB(fun_137,1,collector_F820);
  T15 = BOXVAL(defsF817);
  CALL2(1,VARREF(YgooSmacrosYdo),T14,T15);
  T17 = BOXVAL(collector_F820);
  T16 = CALL1(1,VARREF(YgooSmacrosYrevX),T17);
  T12 = T16;
  T11 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_64),T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

P YgooSmacrosY___main_0___() {
  P tmpF835;
  P tmpF834;
  P tmpF833;
  P tmpF832;
  P tmpF831;
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T3);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T7);
  lit_20 = YPPsym((P)"x-1082");
  lit_21 = YPPsym((P)"app");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1082_6 = YPmet(FUNCODEREF(fun_x_1082_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T11);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"collecting"),T15);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"collect"),T19);
  lit_30 = YPPsym((P)"x-1094");
  lit_31 = YPPsym((P)"rev!");
  T22 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),LITREF(lit_30),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T23 = fun_17;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"collected"),T23);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T28);
  lit_37 = YPPsym((P)"lift-place-subforms");
  lit_38 = YPPsym((P)"place");
  lit_39 = YPPsym((P)"munch");
  lit_40 = YPPsym((P)"subforms");
  T30 = YPsig(YPPlist(1,LITREF(lit_40)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_munch_22 = YPmet(FUNCODEREF(fun_munch_22),LITREF(lit_39),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_37),T29,ENVNUL,PNUL,YPfalse);
  T31 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T31);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T37);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T43);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T47);
  lit_52 = YPPsym((P)"x-1122");
  lit_53 = YPPsym((P)"swapf");
  T50 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1122_37 = YPmet(FUNCODEREF(fun_x_1122_37),LITREF(lit_52),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T51);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T55);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T59);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T63);
  lit_65 = YPPsym((P)"x-1138");
  lit_66 = YPPsym((P)"when");
  T66 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1138_49 = YPmet(FUNCODEREF(fun_x_1138_49),LITREF(lit_65),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T67 = fun_51;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T67);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T75);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T83);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T89);
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
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_80),T90,ENVNUL,PNUL,YPfalse);
  T96 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T96);
  lit_89 = YPPsym((P)"x-1182");
  lit_90 = YPPsym((P)"case-by");
  T99 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1182_77 = YPmet(FUNCODEREF(fun_x_1182_77),LITREF(lit_89),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T100 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T100);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T104);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T112);
  lit_101 = YPPsym((P)"x-1202");
  lit_102 = YPPsym((P)"assert");
  T115 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1202_90 = YPmet(FUNCODEREF(fun_x_1202_90),LITREF(lit_101),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T116 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T116);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T125);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T129);
  lit_121 = YPPsym((P)"x-1222");
  lit_122 = YPPsym((P)"until");
  T132 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1222_104 = YPmet(FUNCODEREF(fun_x_1222_104),LITREF(lit_121),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T133);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"ddv"),T137);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T145);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T149);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T153);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T157);
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
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T172);
  check_type(YPfalse,VARREF(YLanyG));
  tmpF821 = YPfalse;
  if (tmpF821 != YPfalse) {
    T173 = VARREF(YgooSmacrosYEE);
  } else {
    T173 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF822 = YPfalse;
  if (tmpF822 != YPfalse) {
    T174 = VARREF(YgooSmacrosYdo);
  } else {
    T174 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF823 = YPfalse;
  if (tmpF823 != YPfalse) {
    T175 = VARREF(YgooSmacrosYrevX);
  } else {
    T175 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF824 = YPfalse;
  if (tmpF824 != YPfalse) {
    T176 = VARREF(YgooSmacrosYcat);
  } else {
    T176 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF825 = YPfalse;
  if (tmpF825 != YPfalse) {
    T177 = VARREF(YgooSmacrosYelt);
  } else {
    T177 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF826 = YPfalse;
  if (tmpF826 != YPfalse) {
    T178 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T178 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF827 = YPfalse;
  if (tmpF827 != YPfalse) {
    T179 = VARREF(Yerror);
  } else {
    T179 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF828 = YPfalse;
  if (tmpF828 != YPfalse) {
    T180 = VARREF(YgooSmacrosYgensym);
  } else {
    T180 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF829 = YPfalse;
  if (tmpF829 != YPfalse) {
    T181 = VARREF(Ylst);
  } else {
    T181 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF830 = YPfalse;
  if (tmpF830 != YPfalse) {
    T182 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T182 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF831 = YPfalse;
  if (tmpF831 != YPfalse) {
    T183 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T183 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF832 = YPfalse;
  if (tmpF832 != YPfalse) {
    T184 = VARREF(YgooSmacrosYmap);
  } else {
    T184 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF833 = YPfalse;
  if (tmpF833 != YPfalse) {
    T185 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T185 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF834 = YPfalse;
  if (tmpF834 != YPfalse) {
    T186 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T186 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF835 = YPfalse;
  if (tmpF835 != YPfalse) {
    T187 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T187 = YPfalse;
  }
  T188 = YPfalse;
  return T188;
}

P YgooSmacrosY___main_1___() {
  P tmpF841;
  P tmpF840;
  P tmpF839;
  P tmpF838;
  P tmpF837;
  P tmpF836;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  check_type(YPfalse,VARREF(YLanyG));
  tmpF836 = YPfalse;
  if (tmpF836 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T0 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF837 = YPfalse;
  if (tmpF837 != YPfalse) {
    T1 = VARREF(YgooSmacrosYpair);
  } else {
    T1 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF838 = YPfalse;
  if (tmpF838 != YPfalse) {
    T2 = VARREF(Ytup);
  } else {
    T2 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF839 = YPfalse;
  if (tmpF839 != YPfalse) {
    T3 = VARREF(YgooSmacrosYvar_name);
  } else {
    T3 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF840 = YPfalse;
  if (tmpF840 != YPfalse) {
    T4 = VARREF(YgooSmacrosYvar_type);
  } else {
    T4 = YPfalse;
  }
  check_type(YPfalse,VARREF(YLanyG));
  tmpF841 = YPfalse;
  if (tmpF841 != YPfalse) {
    T5 = VARREF(YgooSmacrosYnapp);
  } else {
    T5 = YPfalse;
  }
  T6 = YPfalse;
  return T6;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_runtimeSboot;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"df", &module_info_runtimeSboot, "df"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"try", &module_info_runtimeSboot, "try"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"def", &module_info_runtimeSboot, "def"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"match", NULL},
  {"lift-place-subforms", &YgooSmacrosYlift_place_subforms},
  {"match-empty-list", &YgooSmacrosYmatch_empty_list},
  {"---main-1---", NULL},
  {"def-fun-var", NULL},
  {"assert", NULL},
  {"pushf", NULL},
  {"app", NULL},
  {"fab-setter-name", &YgooSmacrosYfab_setter_name},
  {"case-by", NULL},
  {"exported", NULL},
  {"opf", NULL},
  {"until", NULL},
  {"var-name", &YgooSmacrosYvar_name},
  {"rev!", &YgooSmacrosYrevX},
  {"without-prop-unbound-errors", NULL},
  {"or", NULL},
  {"cat-sym", &YgooSmacrosYcat_sym},
  {"and", NULL},
  {"swapf", NULL},
  {"napp", &YgooSmacrosYnapp},
  {"for", NULL},
  {"match-sublist", &YgooSmacrosYmatch_sublist},
  {"collected", NULL},
  {"elt", &YgooSmacrosYelt},
  {"unless", NULL},
  {"cond", NULL},
  {"==", &YgooSmacrosYEE},
  {"collecting", NULL},
  {"ddv", NULL},
  {"case", NULL},
  {"cat", &YgooSmacrosYcat},
  {"incf", NULL},
  {"empty?", &YgooSmacrosYemptyQ},
  {"gensym", &YgooSmacrosYgensym},
  {"app-sup", NULL},
  {"renew", NULL},
  {"match-atom", &YgooSmacrosYmatch_atom},
  {"map", &YgooSmacrosYmap},
  {"---main-0---", NULL},
  {"sup", NULL},
  {"need-implementation", NULL},
  {"var-type", &YgooSmacrosYvar_type},
  {"match-unquote", &YgooSmacrosYmatch_unquote},
  {"pair", &YgooSmacrosYpair},
  {"while", NULL},
  {"do", &YgooSmacrosYdo},
  {"popf", NULL},
  {"decf", NULL},
  {"do-case-by", &YgooSmacrosYdo_case_by},
  {"when", NULL},
  {"collect", NULL},
  {"dlet", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"lst", "lst"},
  {"match", "match"},
  {"match-empty-list", "match-empty-list"},
  {"def-fun-var", "def-fun-var"},
  {"assert", "assert"},
  {"pushf", "pushf"},
  {"app", "app"},
  {"fab-setter-name", "fab-setter-name"},
  {"case-by", "case-by"},
  {"exported", "exported"},
  {"opf", "opf"},
  {"until", "until"},
  {"var-name", "var-name"},
  {"rev!", "rev!"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"error", "error"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"or", "or"},
  {"cat-sym", "cat-sym"},
  {"and", "and"},
  {"swapf", "swapf"},
  {"napp", "napp"},
  {"for", "for"},
  {"match-sublist", "match-sublist"},
  {"collected", "collected"},
  {"elt", "elt"},
  {"unless", "unless"},
  {"cond", "cond"},
  {"==", "=="},
  {"collecting", "collecting"},
  {"ddv", "ddv"},
  {"case", "case"},
  {"cat", "cat"},
  {"incf", "incf"},
  {"empty?", "empty?"},
  {"gensym", "gensym"},
  {"app-sup", "app-sup"},
  {"renew", "renew"},
  {"match-atom", "match-atom"},
  {"map", "map"},
  {"sup", "sup"},
  {"need-implementation", "need-implementation"},
  {"var-type", "var-type"},
  {"match-unquote", "match-unquote"},
  {"tup", "tup"},
  {"pair", "pair"},
  {"while", "while"},
  {"do", "do"},
  {"popf", "popf"},
  {"decf", "decf"},
  {"when", "when"},
  {"collect", "collect"},
  {"dlet", "dlet"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSmacros;
MODULE_INFO module_info_gooSmacros = {
  "goo/macros",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);

/* EXPRESSION: */

extern void load_module_gooSmacros (void);

void load_module_gooSmacros (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();

  (P)YgooSmacrosY___main_0___();
  (P)YgooSmacrosY___main_1___();

}

/* END OF GENERATED CODE. */
