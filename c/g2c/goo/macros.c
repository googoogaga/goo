/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(Yclass_props,"goo/boot","class-props");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ynul,"goo/boot","nul");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ytail,"goo/boot","tail");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yvec,"goo/boot","vec");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ynew,"goo/boot","new");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLintG,"goo/boot","<int>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yclass_descendents,"goo/boot","class-descendents");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_75);
DEFLIT(lit_28);
DEFLIT(lit_150);
DEFLIT(lit_106);
DEFLIT(lit_4);
DEFLIT(lit_60);
DEFLIT(lit_50);
DEFLIT(lit_85);
DEFLIT(lit_161);
DEFLIT(lit_68);
DEFLIT(lit_3);
DEFLIT(lit_35);
DEFLIT(lit_23);
DEFLIT(lit_53);
DEFLIT(lit_152);
DEFLIT(lit_154);
DEFLIT(lit_64);
DEFLIT(lit_55);
DEFLIT(lit_56);
DEFLIT(lit_169);
DEFLIT(lit_112);
DEFLIT(lit_146);
DEFLIT(lit_79);
DEFLIT(lit_104);
DEFLIT(lit_165);
DEFLIT(lit_83);
DEFLIT(lit_128);
DEFLIT(lit_41);
DEFLIT(lit_100);
DEFLIT(lit_166);
DEFLIT(lit_66);
DEFLIT(lit_141);
DEFLIT(lit_96);
DEFLIT(lit_63);
DEFLIT(lit_88);
DEFLIT(lit_157);
DEFLIT(lit_38);
DEFLIT(lit_30);
DEFLIT(lit_162);
DEFLIT(lit_71);
DEFLIT(lit_151);
DEFLIT(lit_126);
DEFLIT(lit_147);
DEFLIT(lit_120);
DEFLIT(lit_92);
DEFLIT(lit_163);
DEFLIT(lit_174);
DEFLIT(lit_74);
DEFLIT(lit_27);
DEFLIT(lit_22);
DEFLIT(lit_156);
DEFLIT(lit_139);
DEFLIT(lit_142);
DEFLIT(lit_59);
DEFLIT(lit_49);
DEFLIT(lit_44);
DEFLIT(lit_8);
DEFLIT(lit_122);
DEFLIT(lit_118);
DEFLIT(lit_67);
DEFLIT(lit_2);
DEFLIT(lit_103);
DEFLIT(lit_97);
DEFLIT(lit_87);
DEFLIT(lit_155);
DEFLIT(lit_7);
DEFLIT(lit_107);
DEFLIT(lit_129);
DEFLIT(lit_29);
DEFLIT(lit_11);
DEFLIT(lit_160);
DEFLIT(lit_145);
DEFLIT(lit_127);
DEFLIT(lit_115);
DEFLIT(lit_148);
DEFLIT(lit_82);
DEFLIT(lit_149);
DEFLIT(lit_158);
DEFLIT(lit_105);
DEFLIT(lit_37);
DEFLIT(lit_153);
DEFLIT(lit_46);
DEFLIT(lit_95);
DEFLIT(lit_84);
DEFLIT(lit_110);
DEFLIT(lit_77);
DEFLIT(lit_33);
DEFLIT(lit_125);
DEFLIT(lit_47);
DEFLIT(lit_70);
DEFLIT(lit_134);
DEFLIT(lit_62);
DEFLIT(lit_136);
DEFLIT(lit_21);
DEFLIT(lit_171);
DEFLIT(lit_19);
DEFLIT(lit_91);
DEFLIT(lit_121);
DEFLIT(lit_123);
DEFLIT(lit_15);
DEFLIT(lit_73);
DEFLIT(lit_102);
DEFLIT(lit_130);
DEFLIT(lit_133);
DEFLIT(lit_12);
DEFLIT(lit_111);
DEFLIT(lit_58);
DEFLIT(lit_86);
DEFLIT(lit_43);
DEFLIT(lit_36);
DEFLIT(lit_132);
DEFLIT(lit_168);
DEFLIT(lit_117);
DEFLIT(lit_170);
DEFLIT(lit_164);
DEFLIT(lit_167);
DEFLIT(lit_76);
DEFLIT(lit_78);
DEFLIT(lit_5);
DEFLIT(lit_25);
DEFLIT(lit_54);
DEFLIT(lit_173);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_172);
DEFLIT(lit_135);
DEFLIT(lit_90);
DEFLIT(lit_81);
DEFLIT(lit_40);
DEFLIT(lit_16);
DEFLIT(lit_94);
DEFLIT(lit_45);
DEFLIT(lit_98);
DEFLIT(lit_6);
DEFLIT(lit_99);
DEFLIT(lit_51);
DEFLIT(lit_52);
DEFLIT(lit_0);
DEFLIT(lit_32);
DEFLIT(lit_124);
DEFLIT(lit_17);
DEFLIT(lit_69);
DEFLIT(lit_61);
DEFLIT(lit_113);
DEFLIT(lit_20);
DEFLIT(lit_116);
DEFLIT(lit_109);
DEFLIT(lit_131);
DEFLIT(lit_57);
DEFLIT(lit_138);
DEFLIT(lit_13);
DEFLIT(lit_72);
DEFLIT(lit_101);
DEFLIT(lit_144);
DEFLIT(lit_26);
DEFLIT(lit_159);
DEFLIT(lit_65);
DEFLIT(lit_1);
DEFLIT(lit_24);
DEFLIT(lit_34);
DEFLIT(lit_42);
DEFLIT(lit_143);
DEFLIT(lit_48);
DEFLIT(lit_137);
DEFLIT(lit_89);
DEFLIT(lit_114);
DEFLIT(lit_39);
DEFLIT(lit_31);
DEFLIT(lit_9);
DEFLIT(lit_140);
DEFLIT(lit_18);
DEFLIT(lit_108);
DEFLIT(lit_119);
DEFLIT(lit_93);
DEFLIT(lit_80);

/* FUNCTIONS: */

LOCFOR(fun_x_1076_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1080_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1084_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1088_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_x_1092_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_x_1096_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_x_1100_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_munch_22);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1106_24);
LOCFOR(fun_x_1108_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_1114_29);
LOCFOR(fun_x_1116_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_1120_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1124_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1128_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1132_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1136_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_x_1140_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1148_52);
LOCFOR(fun_x_1150_53);
LOCFOR(fun_x_1152_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1160_59);
LOCFOR(fun_x_1162_60);
LOCFOR(fun_x_1164_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1170_66);
LOCFOR(fun_x_1172_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1178_71);
LOCFOR(fun_x_1180_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1184_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1188_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1192_83);
LOCFOR(fun_84);
LOCFOR(fun_splice_85);
LOCFOR(fun_rest_opQ_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_walk_op_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_x_1200_92);
LOCFOR(fun_x_1204_93);
LOCFOR(fun_94);
LOCFOR(fun_x_1202_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1208_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_x_1216_102);
LOCFOR(fun_x_1218_103);
LOCFOR(fun_x_1220_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_grok_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1224_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_x_1228_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_x_1232_116);
LOCFOR(fun_117);
LOCFOR(fun_118);
LOCFOR(fun_x_1240_119);
LOCFOR(fun_x_1244_120);
LOCFOR(fun_121);
LOCFOR(fun_x_1242_122);
LOCFOR(fun_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1248_126);
LOCFOR(fun_127);
LOCFOR(fun_128);
LOCFOR(fun_x_1252_129);
LOCFOR(fun_130);
LOCFOR(fun_131);
LOCFOR(fun_x_1256_132);
LOCFOR(fun_133);
LOCFOR(fun_134);
LOCFOR(fun_x_1278_135);
LOCFOR(fun_x_1296_136);
LOCFOR(fun_137);
LOCFOR(fun_x_1293_138);
LOCFOR(fun_139);
LOCFOR(fun_x_1290_140);
LOCFOR(fun_141);
LOCFOR(fun_x_1287_142);
LOCFOR(fun_143);
LOCFOR(fun_x_1284_144);
LOCFOR(fun_145);
LOCFOR(fun_x_1281_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_149);
LOCFOR(fun_x_1300_150);
LOCFOR(fun_151);
LOCFOR(fun_152);
LOCFOR(fun_153);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1076_0) {
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
  P x_1075F451;
  P x_1075F450;
  P argsF449;
  P x_1075F448;
  P x_1076F447;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_0,1);
  x_1076F447 = T1;
  FUNINIT(x_1076F447, 1,return_);
  x_1075F448 = FREEREF(0);
  argsF449 = YPfalse;
  argsF449 = BOXFAB(argsF449);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F448,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F448,LITREF(lit_5),x_1076F447);
    x_1075F450 = T7;
    BOXVAL(argsF449) = x_1075F450;
    x_1075F451 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F451,x_1076F447);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1076F447,LITREF(lit_6),x_1075F448);
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
  T36 = BOXVAL(argsF449);
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

FUNCODEDEF(fun_x_1080_3) {
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
  P x_1079F456;
  P x_1079F455;
  P argsF454;
  P x_1079F453;
  P x_1080F452;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_3,1);
  x_1080F452 = T1;
  FUNINIT(x_1080F452, 1,return_);
  x_1079F453 = FREEREF(0);
  argsF454 = YPfalse;
  argsF454 = BOXFAB(argsF454);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F453,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F453,LITREF(lit_18),x_1080F452);
    x_1079F455 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1079F455,x_1080F452);
    BOXVAL(argsF454) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1079F455);
    x_1079F456 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F456,x_1080F452);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1080F452,LITREF(lit_6),x_1079F453);
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
  T39 = BOXVAL(argsF454);
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

FUNCODEDEF(fun_x_1084_6) {
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
  P x_1083F463;
  P x_1083F462;
  P x_1083F461;
  P argsF460;
  P fF459;
  P x_1083F458;
  P x_1084F457;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_6,1);
  x_1084F457 = T1;
  FUNINIT(x_1084F457, 1,return_);
  x_1083F458 = FREEREF(0);
  fF459 = YPfalse;
  fF459 = BOXFAB(fF459);
  argsF460 = YPfalse;
  argsF460 = BOXFAB(argsF460);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F458,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F458,LITREF(lit_21),x_1084F457);
    x_1083F461 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F461,x_1084F457);
    BOXVAL(fF459) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F461);
    x_1083F462 = T12;
    BOXVAL(argsF460) = x_1083F462;
    x_1083F463 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F463,x_1084F457);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1084F457,LITREF(lit_6),x_1083F458);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF459);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF460);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T20,T21,Ynil);
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

FUNCODEDEF(fun_x_1088_9) {
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
  P nameF471;
  P x_1087F470;
  P x_1087F469;
  P x_1087F468;
  P x_1087F467;
  P bodyF466;
  P x_1087F465;
  P x_1088F464;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_9,1);
  x_1088F464 = T1;
  FUNINIT(x_1088F464, 1,return_);
  x_1087F465 = FREEREF(0);
  bodyF466 = YPfalse;
  bodyF466 = BOXFAB(bodyF466);
  T5 = CALL2(1,VARREF(YisaQ),x_1087F465,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F465,LITREF(lit_23),x_1088F464);
    x_1087F467 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1087F467,x_1088F464);
    x_1087F468 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F468,x_1088F464);
    T11 = CALL1(1,VARREF(Ytail),x_1087F467);
    x_1087F469 = T11;
    BOXVAL(bodyF466) = x_1087F469;
    x_1087F470 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F470,x_1088F464);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1088F464,LITREF(lit_6),x_1087F465);
  }
  nameF471 = LITREF(lit_24);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T22 = CALL1(1,VARREF(Ylst),nameF471);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T26 = CALL1(1,VARREF(Ylst),Ynil);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T27 = BOXVAL(bodyF466);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T31 = CALL1(1,VARREF(Ylst),nameF471);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T27,T28,Ynil);
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

FUNCODEDEF(fun_x_1092_12) {
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
  P nameF477;
  P x_1091F476;
  P x_1091F475;
  P valueF474;
  P x_1091F473;
  P x_1092F472;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1092_12,1);
  x_1092F472 = T1;
  FUNINIT(x_1092F472, 1,return_);
  x_1091F473 = FREEREF(0);
  valueF474 = YPfalse;
  valueF474 = BOXFAB(valueF474);
  T5 = CALL2(1,VARREF(YisaQ),x_1091F473,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1091F473,LITREF(lit_27),x_1092F472);
    x_1091F475 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1091F475,x_1092F472);
    BOXVAL(valueF474) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1091F475);
    x_1091F476 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1091F476,x_1092F472);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1092F472,LITREF(lit_6),x_1091F473);
  }
  nameF477 = LITREF(lit_24);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T16 = CALL1(1,VARREF(Ylst),nameF477);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T21 = BOXVAL(valueF474);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),nameF477);
  T18 = CALLN(1,VARREF(YgooSmacrosYcat),4,T19,T20,T22,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),4,T15,T16,T17,Ynil);
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

FUNCODEDEF(fun_x_1096_15) {
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
  P x_1095F482;
  P x_1095F481;
  P nameF480;
  P x_1095F479;
  P x_1096F478;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_15,1);
  x_1096F478 = T1;
  FUNINIT(x_1096F478, 1,return_);
  x_1095F479 = FREEREF(0);
  nameF480 = YPfalse;
  nameF480 = BOXFAB(nameF480);
  T5 = CALL2(1,VARREF(YisaQ),x_1095F479,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1095F479,LITREF(lit_25),x_1096F478);
    x_1095F481 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F481,x_1096F478);
    BOXVAL(nameF480) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1095F481);
    x_1095F482 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F482,x_1096F478);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1096F478,LITREF(lit_6),x_1095F479);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T16 = BOXVAL(nameF480);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,Ynil);
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

FUNCODEDEF(fun_x_1100_18) {
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
  P valF483;
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
    valF483 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(1));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF483);
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
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P setsF493;
  P loopF492;
  P varF491;
  P x_1099F490;
  P x_1099F489;
  P x_1099F488;
  P prop_initsF487;
  P xF486;
  P x_1099F485;
  P x_1100F484;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1100_18,1);
  x_1100F484 = T1;
  FUNINIT(x_1100F484, 1,return_);
  x_1099F485 = FREEREF(0);
  xF486 = YPfalse;
  xF486 = BOXFAB(xF486);
  prop_initsF487 = YPfalse;
  prop_initsF487 = BOXFAB(prop_initsF487);
  T7 = CALL2(1,VARREF(YisaQ),x_1099F485,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1099F485,LITREF(lit_33),x_1100F484);
    x_1099F488 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1099F488,x_1100F484);
    BOXVAL(xF486) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1099F488);
    x_1099F489 = T12;
    BOXVAL(prop_initsF487) = x_1099F489;
    x_1099F490 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1099F490,x_1100F484);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1100F484,LITREF(lit_6),x_1099F485);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF491 = T17;
  T20 = FUNSHELL(1,fun_loop_19,2);
  loopF492 = T20;
  FUNINIT(loopF492, 2,loopF492,varF491);
  T22 = BOXVAL(prop_initsF487);
  T21 = CALL2(0,loopF492,Ynil,T22);
  T19 = T21;
  setsF493 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF491);
  T31 = BOXVAL(xF486);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF491);
  T23 = CALLN(1,VARREF(YgooSmacrosYcat),5,T24,T25,setsF493,T32,Ynil);
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
  P gF497;
  P g_argsF496;
  P g_declsF495;
  P tup3F494;
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
    tup3F494 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F494,YPint((P)0));
    g_declsF495 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F494,YPint((P)1));
    g_argsF496 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF497 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF497);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF495);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF497,g_argsF496);
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
  P g_argsF501;
  P g_declsF500;
  P tup4F499;
  P munchF498;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_22,1);
  munchF498 = T1;
  FUNINIT(munchF498, 1,munchF498);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF498,T7);
    tup4F499 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F499,YPint((P)0));
    g_declsF500 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F499,YPint((P)1));
    g_argsF501 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF501);
    T12 = CALL2(1,VARREF(Ytup),g_declsF500,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1106_24) {
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

FUNCODEDEF(fun_x_1108_25) {
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
  P x_1107F505;
  P amountF504;
  P x_1107F503;
  P x_1108F502;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F502 = T1;
  FUNINIT(x_1108F502, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1107F503 = T3;
  amountF504 = YPfalse;
  amountF504 = BOXFAB(amountF504);
  T6 = CALL2(1,VARREF(YisaQ),x_1107F503,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F503,x_1108F502);
    BOXVAL(amountF504) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1107F503);
    x_1107F505 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F505,x_1108F502);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1108F502,LITREF(lit_6),x_1107F503);
  }
  T12 = BOXVAL(amountF504);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P amountF516;
  P g_placeF515;
  P g_declsF514;
  P tup6F513;
  P x_1105F512;
  P x_1105F511;
  P x_1105F510;
  P amountF509;
  P placeF508;
  P x_1105F507;
  P x_1106F506;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1106_24,1);
  x_1106F506 = T1;
  FUNINIT(x_1106F506, 1,return_);
  x_1105F507 = FREEREF(0);
  placeF508 = YPfalse;
  placeF508 = BOXFAB(placeF508);
  amountF509 = YPfalse;
  amountF509 = BOXFAB(amountF509);
  T7 = CALL2(1,VARREF(YisaQ),x_1105F507,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1105F507,LITREF(lit_42),x_1106F506);
    x_1105F510 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1105F510,x_1106F506);
    BOXVAL(placeF508) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1105F510);
    x_1105F511 = T12;
    BOXVAL(amountF509) = x_1105F511;
    x_1105F512 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1105F512,x_1106F506);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1106F506,LITREF(lit_6),x_1105F507);
  }
  T18 = BOXVAL(placeF508);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup6F513 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F513,YPint((P)0));
  g_declsF514 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F513,YPint((P)1));
  g_placeF515 = T22;
  T25 = FUNFAB(fun_26,1,amountF509);
  T24 = with_exit(T25);
  amountF516 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF514,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF515);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T37 = CALL1(1,VARREF(Ylst),g_placeF515);
  T38 = CALL1(1,VARREF(Ylst),amountF516);
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

FUNCODEDEF(fun_x_1114_29) {
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

FUNCODEDEF(fun_x_1116_30) {
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
  P x_1115F520;
  P amountF519;
  P x_1115F518;
  P x_1116F517;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_30,1);
  x_1116F517 = T1;
  FUNINIT(x_1116F517, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1115F518 = T3;
  amountF519 = YPfalse;
  amountF519 = BOXFAB(amountF519);
  T6 = CALL2(1,VARREF(YisaQ),x_1115F518,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F518,x_1116F517);
    BOXVAL(amountF519) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1115F518);
    x_1115F520 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F520,x_1116F517);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1116F517,LITREF(lit_6),x_1115F518);
  }
  T12 = BOXVAL(amountF519);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P amountF531;
  P g_placeF530;
  P g_declsF529;
  P tup8F528;
  P x_1113F527;
  P x_1113F526;
  P x_1113F525;
  P amountF524;
  P placeF523;
  P x_1113F522;
  P x_1114F521;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1114_29,1);
  x_1114F521 = T1;
  FUNINIT(x_1114F521, 1,return_);
  x_1113F522 = FREEREF(0);
  placeF523 = YPfalse;
  placeF523 = BOXFAB(placeF523);
  amountF524 = YPfalse;
  amountF524 = BOXFAB(amountF524);
  T7 = CALL2(1,VARREF(YisaQ),x_1113F522,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1113F522,LITREF(lit_46),x_1114F521);
    x_1113F525 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1113F525,x_1114F521);
    BOXVAL(placeF523) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1113F525);
    x_1113F526 = T12;
    BOXVAL(amountF524) = x_1113F526;
    x_1113F527 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1113F527,x_1114F521);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1114F521,LITREF(lit_6),x_1113F522);
  }
  T18 = BOXVAL(placeF523);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup8F528 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F528,YPint((P)0));
  g_declsF529 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F528,YPint((P)1));
  g_placeF530 = T22;
  T25 = FUNFAB(fun_31,1,amountF524);
  T24 = with_exit(T25);
  amountF531 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF529,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF530);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T37 = CALL1(1,VARREF(Ylst),g_placeF530);
  T38 = CALL1(1,VARREF(Ylst),amountF531);
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

FUNCODEDEF(fun_x_1120_34) {
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
  P g_placeF541;
  P g_declsF540;
  P tup10F539;
  P x_1119F538;
  P x_1119F537;
  P x_1119F536;
  P valueF535;
  P placeF534;
  P x_1119F533;
  P x_1120F532;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_34,1);
  x_1120F532 = T1;
  FUNINIT(x_1120F532, 1,return_);
  x_1119F533 = FREEREF(0);
  placeF534 = YPfalse;
  placeF534 = BOXFAB(placeF534);
  valueF535 = YPfalse;
  valueF535 = BOXFAB(valueF535);
  T7 = CALL2(1,VARREF(YisaQ),x_1119F533,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F533,LITREF(lit_50),x_1120F532);
    x_1119F536 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F536,x_1120F532);
    BOXVAL(placeF534) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1119F536);
    x_1119F537 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F537,x_1120F532);
    BOXVAL(valueF535) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1119F537);
    x_1119F538 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F538,x_1120F532);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1120F532,LITREF(lit_6),x_1119F533);
  }
  T20 = BOXVAL(placeF534);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup10F539 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F539,YPint((P)0));
  g_declsF540 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F539,YPint((P)1));
  g_placeF541 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF540,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T32 = CALL1(1,VARREF(Ylst),g_placeF541);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T36 = CALL1(1,VARREF(Ylst),g_placeF541);
  T38 = BOXVAL(valueF535);
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

FUNCODEDEF(fun_x_1124_37) {
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
  P tmpF555;
  P yg_placeF554;
  P yg_declsF553;
  P tup14F552;
  P xg_placeF551;
  P xg_declsF550;
  P tup13F549;
  P x_1123F548;
  P x_1123F547;
  P x_1123F546;
  P yF545;
  P xF544;
  P x_1123F543;
  P x_1124F542;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_37,1);
  x_1124F542 = T1;
  FUNINIT(x_1124F542, 1,return_);
  x_1123F543 = FREEREF(0);
  xF544 = YPfalse;
  xF544 = BOXFAB(xF544);
  yF545 = YPfalse;
  yF545 = BOXFAB(yF545);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F543,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F543,LITREF(lit_53),x_1124F542);
    x_1123F546 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F546,x_1124F542);
    BOXVAL(xF544) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F546);
    x_1123F547 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F547,x_1124F542);
    BOXVAL(yF545) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1123F547);
    x_1123F548 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F548,x_1124F542);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1124F542,LITREF(lit_6),x_1123F543);
  }
  T20 = BOXVAL(xF544);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup13F549 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F549,YPint((P)0));
  xg_declsF550 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F549,YPint((P)1));
  xg_placeF551 = T24;
  T27 = BOXVAL(yF545);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup14F552 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F552,YPint((P)0));
  yg_declsF553 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F552,YPint((P)1));
  yg_placeF554 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF555 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF555);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF551);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),4,xg_declsF550,yg_declsF553,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF551);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF554);
  T43 = CALLN(1,VARREF(YgooSmacrosYcat),4,T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF554);
  T51 = CALL1(1,VARREF(Ylst),tmpF555);
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

FUNCODEDEF(fun_x_1128_40) {
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
  P valF565;
  P new_colF564;
  P g_placeF563;
  P g_declsF562;
  P tup16F561;
  P x_1127F560;
  P x_1127F559;
  P placeF558;
  P x_1127F557;
  P x_1128F556;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_40,1);
  x_1128F556 = T1;
  FUNINIT(x_1128F556, 1,return_);
  x_1127F557 = FREEREF(0);
  placeF558 = YPfalse;
  placeF558 = BOXFAB(placeF558);
  T5 = CALL2(1,VARREF(YisaQ),x_1127F557,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F557,LITREF(lit_55),x_1128F556);
    x_1127F559 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F559,x_1128F556);
    BOXVAL(placeF558) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1127F559);
    x_1127F560 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F560,x_1128F556);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1128F556,LITREF(lit_6),x_1127F557);
  }
  T15 = BOXVAL(placeF558);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup16F561 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F561,YPint((P)0));
  g_declsF562 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F561,YPint((P)1));
  g_placeF563 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF564 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF565 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T33 = CALL1(1,VARREF(Ylst),new_colF564);
  T34 = CALL1(1,VARREF(Ylst),valF565);
  T31 = CALLN(1,VARREF(YgooSmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T38 = CALL1(1,VARREF(Ylst),g_placeF563);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF562,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T42 = CALL1(1,VARREF(Ylst),g_placeF563);
  T43 = CALL1(1,VARREF(Ylst),new_colF564);
  T40 = CALLN(1,VARREF(YgooSmacrosYcat),4,T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF565);
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

FUNCODEDEF(fun_x_1132_43) {
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
  P g_placeF575;
  P g_declsF574;
  P tup18F573;
  P x_1131F572;
  P x_1131F571;
  P x_1131F570;
  P callF569;
  P placeF568;
  P x_1131F567;
  P x_1132F566;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1132_43,1);
  x_1132F566 = T1;
  FUNINIT(x_1132F566, 1,return_);
  x_1131F567 = FREEREF(0);
  placeF568 = YPfalse;
  placeF568 = BOXFAB(placeF568);
  callF569 = YPfalse;
  callF569 = BOXFAB(callF569);
  T7 = CALL2(1,VARREF(YisaQ),x_1131F567,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F567,LITREF(lit_59),x_1132F566);
    x_1131F570 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F570,x_1132F566);
    BOXVAL(placeF568) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1131F570);
    x_1131F571 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F571,x_1132F566);
    BOXVAL(callF569) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1131F571);
    x_1131F572 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F572,x_1132F566);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1132F566,LITREF(lit_6),x_1131F567);
  }
  T20 = BOXVAL(placeF568);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup18F573 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F573,YPint((P)0));
  g_declsF574 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F573,YPint((P)1));
  g_placeF575 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T32 = CALL1(1,VARREF(Ylst),g_placeF575);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF574,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T36 = CALL1(1,VARREF(Ylst),g_placeF575);
  T38 = BOXVAL(callF569);
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

FUNCODEDEF(fun_x_1136_46) {
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
  P x_1135F582;
  P x_1135F581;
  P x_1135F580;
  P bodyF579;
  P testF578;
  P x_1135F577;
  P x_1136F576;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1136_46,1);
  x_1136F576 = T1;
  FUNINIT(x_1136F576, 1,return_);
  x_1135F577 = FREEREF(0);
  testF578 = YPfalse;
  testF578 = BOXFAB(testF578);
  bodyF579 = YPfalse;
  bodyF579 = BOXFAB(bodyF579);
  T7 = CALL2(1,VARREF(YisaQ),x_1135F577,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F577,LITREF(lit_62),x_1136F576);
    x_1135F580 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1135F580,x_1136F576);
    BOXVAL(testF578) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1135F580);
    x_1135F581 = T12;
    BOXVAL(bodyF579) = x_1135F581;
    x_1135F582 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F582,x_1136F576);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1136F576,LITREF(lit_6),x_1135F577);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T22 = BOXVAL(testF578);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T26 = BOXVAL(bodyF579);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),4,T17,T18,T23,Ynil);
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

FUNCODEDEF(fun_x_1140_49) {
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
  P x_1139F589;
  P x_1139F588;
  P x_1139F587;
  P bodyF586;
  P testF585;
  P x_1139F584;
  P x_1140F583;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_49,1);
  x_1140F583 = T1;
  FUNINIT(x_1140F583, 1,return_);
  x_1139F584 = FREEREF(0);
  testF585 = YPfalse;
  testF585 = BOXFAB(testF585);
  bodyF586 = YPfalse;
  bodyF586 = BOXFAB(bodyF586);
  T7 = CALL2(1,VARREF(YisaQ),x_1139F584,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1139F584,LITREF(lit_66),x_1140F583);
    x_1139F587 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1139F587,x_1140F583);
    BOXVAL(testF585) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1139F587);
    x_1139F588 = T12;
    BOXVAL(bodyF586) = x_1139F588;
    x_1139F589 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F589,x_1140F583);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1140F583,LITREF(lit_6),x_1139F584);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF585);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF586);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),4,T17,T18,T20,Ynil);
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

FUNCODEDEF(fun_x_1148_52) {
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

FUNCODEDEF(fun_x_1150_53) {
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

FUNCODEDEF(fun_x_1152_54) {
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
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1151F591;
  P x_1152F590;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_54,3);
  x_1152F590 = T1;
  FUNINIT(x_1152F590, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1151F591 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1151F591,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F591,x_1152F590);
  } else {
    T6 = CALL2(1,x_1152F590,LITREF(lit_6),x_1151F591);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1149F597;
  P x_1149F596;
  P restF595;
  P xF594;
  P x_1149F593;
  P x_1150F592;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_53,1);
  x_1150F592 = T1;
  FUNINIT(x_1150F592, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1149F593 = T3;
  xF594 = YPfalse;
  xF594 = BOXFAB(xF594);
  restF595 = YPfalse;
  restF595 = BOXFAB(restF595);
  T8 = CALL2(1,VARREF(YisaQ),x_1149F593,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1149F593,x_1150F592);
    BOXVAL(xF594) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1149F593);
    x_1149F596 = T11;
    BOXVAL(restF595) = x_1149F596;
    x_1149F597 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1149F597,x_1150F592);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1150F592,LITREF(lit_6),x_1149F593);
  }
  T16 = FUNFAB(fun_55,2,xF594,restF595);
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
  P x_1147F602;
  P x_1147F601;
  P restF600;
  P x_1147F599;
  P x_1148F598;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_52,1);
  x_1148F598 = T1;
  FUNINIT(x_1148F598, 1,return_);
  x_1147F599 = FREEREF(0);
  restF600 = YPfalse;
  restF600 = BOXFAB(restF600);
  T5 = CALL2(1,VARREF(YisaQ),x_1147F599,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F599,LITREF(lit_68),x_1148F598);
    x_1147F601 = T7;
    BOXVAL(restF600) = x_1147F601;
    x_1147F602 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F602,x_1148F598);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1148F598,LITREF(lit_6),x_1147F599);
  }
  T12 = FUNFAB(fun_56,1,restF600);
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

FUNCODEDEF(fun_x_1160_59) {
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

FUNCODEDEF(fun_x_1162_60) {
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

FUNCODEDEF(fun_x_1164_61) {
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
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1163F604;
  P x_1164F603;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1164_61,3);
  x_1164F603 = T1;
  FUNINIT(x_1164F603, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1163F604 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1163F604,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1163F604,x_1164F603);
  } else {
    T6 = CALL2(1,x_1164F603,LITREF(lit_6),x_1163F604);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1161F610;
  P x_1161F609;
  P restF608;
  P xF607;
  P x_1161F606;
  P x_1162F605;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1162_60,1);
  x_1162F605 = T1;
  FUNINIT(x_1162F605, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1161F606 = T3;
  xF607 = YPfalse;
  xF607 = BOXFAB(xF607);
  restF608 = YPfalse;
  restF608 = BOXFAB(restF608);
  T8 = CALL2(1,VARREF(YisaQ),x_1161F606,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1161F606,x_1162F605);
    BOXVAL(xF607) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1161F606);
    x_1161F609 = T11;
    BOXVAL(restF608) = x_1161F609;
    x_1161F610 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F610,x_1162F605);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1162F605,LITREF(lit_6),x_1161F606);
  }
  T16 = FUNFAB(fun_62,2,xF607,restF608);
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
  P x_1159F615;
  P x_1159F614;
  P restF613;
  P x_1159F612;
  P x_1160F611;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_59,1);
  x_1160F611 = T1;
  FUNINIT(x_1160F611, 1,return_);
  x_1159F612 = FREEREF(0);
  restF613 = YPfalse;
  restF613 = BOXFAB(restF613);
  T5 = CALL2(1,VARREF(YisaQ),x_1159F612,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1159F612,LITREF(lit_73),x_1160F611);
    x_1159F614 = T7;
    BOXVAL(restF613) = x_1159F614;
    x_1159F615 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F615,x_1160F611);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1160F611,LITREF(lit_6),x_1159F612);
  }
  T12 = FUNFAB(fun_63,1,restF613);
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

FUNCODEDEF(fun_x_1170_66) {
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

FUNCODEDEF(fun_x_1172_67) {
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
  P x_1171F621;
  P x_1171F620;
  P bodyF619;
  P condF618;
  P x_1171F617;
  P x_1172F616;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_67,2);
  x_1172F616 = T1;
  FUNINIT(x_1172F616, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1171F617 = T3;
  condF618 = YPfalse;
  condF618 = BOXFAB(condF618);
  bodyF619 = YPfalse;
  bodyF619 = BOXFAB(bodyF619);
  T9 = CALL2(1,VARREF(YisaQ),x_1171F617,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F617,x_1172F616);
    BOXVAL(condF618) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1171F617);
    x_1171F620 = T12;
    BOXVAL(bodyF619) = x_1171F620;
    x_1171F621 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F621,x_1172F616);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1172F616,LITREF(lit_6),x_1171F617);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF618);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF619);
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
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1169F626;
  P x_1169F625;
  P casesF624;
  P x_1169F623;
  P x_1170F622;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_66,1);
  x_1170F622 = T1;
  FUNINIT(x_1170F622, 1,return_);
  x_1169F623 = FREEREF(0);
  casesF624 = YPfalse;
  casesF624 = BOXFAB(casesF624);
  T5 = CALL2(1,VARREF(YisaQ),x_1169F623,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1169F623,LITREF(lit_77),x_1170F622);
    x_1169F625 = T7;
    BOXVAL(casesF624) = x_1169F625;
    x_1169F626 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F626,x_1170F622);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1170F622,LITREF(lit_6),x_1169F623);
  }
  T13 = BOXVAL(casesF624);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_68,1,casesF624);
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

FUNCODEDEF(fun_x_1178_71) {
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

FUNCODEDEF(fun_x_1180_72) {
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
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),4,T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P x_1179F630;
  P valuesF629;
  P x_1179F628;
  P x_1180F627;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_72,2);
  x_1180F627 = T1;
  FUNINIT(x_1180F627, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  x_1179F628 = T3;
  valuesF629 = YPfalse;
  valuesF629 = BOXFAB(valuesF629);
  T6 = CALL2(1,VARREF(YisaQ),x_1179F628,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF629) = x_1179F628;
    x_1179F630 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F630,x_1180F627);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1180F627,LITREF(lit_6),x_1179F628);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T16 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF629);
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
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1177F636;
  P x_1177F635;
  P bodyF634;
  P condF633;
  P x_1177F632;
  P x_1178F631;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1178_71,2);
  x_1178F631 = T1;
  FUNINIT(x_1178F631, 2,return_,FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1177F632 = T3;
  condF633 = YPfalse;
  condF633 = BOXFAB(condF633);
  bodyF634 = YPfalse;
  bodyF634 = BOXFAB(bodyF634);
  T8 = CALL2(1,VARREF(YisaQ),x_1177F632,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1177F632,x_1178F631);
    BOXVAL(condF633) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1177F632);
    x_1177F635 = T11;
    BOXVAL(bodyF634) = x_1177F635;
    x_1177F636 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1177F636,x_1178F631);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1178F631,LITREF(lit_6),x_1177F632);
  }
  T17 = BOXVAL(condF633);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T20 = BOXVAL(bodyF634);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_74,5,FREEREF(0),condF633,FREEREF(1),FREEREF(2),bodyF634);
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
  QRET(T0);
}

FUNCODEDEF(fun_x_1184_77) {
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
  P tst_varF647;
  P val_varF646;
  P x_1183F645;
  P x_1183F644;
  P x_1183F643;
  P x_1183F642;
  P casesF641;
  P tstF640;
  P valF639;
  P x_1183F638;
  P x_1184F637;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1184_77,1);
  x_1184F637 = T1;
  FUNINIT(x_1184F637, 1,return_);
  x_1183F638 = FREEREF(0);
  valF639 = YPfalse;
  valF639 = BOXFAB(valF639);
  tstF640 = YPfalse;
  tstF640 = BOXFAB(tstF640);
  casesF641 = YPfalse;
  casesF641 = BOXFAB(casesF641);
  T9 = CALL2(1,VARREF(YisaQ),x_1183F638,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1183F638,LITREF(lit_90),x_1184F637);
    x_1183F642 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F642,x_1184F637);
    BOXVAL(valF639) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1183F642);
    x_1183F643 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F643,x_1184F637);
    BOXVAL(tstF640) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1183F643);
    x_1183F644 = T17;
    BOXVAL(casesF641) = x_1183F644;
    x_1183F645 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F645,x_1184F637);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1184F637,LITREF(lit_6),x_1183F638);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF646 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF647 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF646);
  T33 = BOXVAL(valF639);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF647);
  T38 = BOXVAL(tstF640);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF641);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF646,tst_varF647,T41);
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

FUNCODEDEF(fun_x_1188_80) {
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
  P x_1187F654;
  P x_1187F653;
  P x_1187F652;
  P casesF651;
  P valF650;
  P x_1187F649;
  P x_1188F648;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_80,1);
  x_1188F648 = T1;
  FUNINIT(x_1188F648, 1,return_);
  x_1187F649 = FREEREF(0);
  valF650 = YPfalse;
  valF650 = BOXFAB(valF650);
  casesF651 = YPfalse;
  casesF651 = BOXFAB(casesF651);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F649,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F649,LITREF(lit_92),x_1188F648);
    x_1187F652 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F652,x_1188F648);
    BOXVAL(valF650) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F652);
    x_1187F653 = T12;
    BOXVAL(casesF651) = x_1187F653;
    x_1187F654 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F654,x_1188F648);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1188F648,LITREF(lit_6),x_1187F649);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T19 = BOXVAL(valF650);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T21 = BOXVAL(casesF651);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T20,T21,Ynil);
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

FUNCODEDEF(fun_x_1192_83) {
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

FUNCODEDEF(fun_84) {
  P x_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_98));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
    T2 = CALLN(1,VARREF(YgooSmacrosYcat),4,T3,T4,T5,Ynil);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
    T8 = CALL1(1,VARREF(Ylst),x_);
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_splice_85) {
  P y_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = fun_84;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rest_opQ_86) {
  P x_;
  P tmpF656;
  P tmpF655;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF655 = T2;
  if (tmpF655 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF656 = T1;
  if (tmpF656 != YPfalse) {
    T5 = tmpF656;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_98));
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_87) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,LITREF(lit_98));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,FREEREF(0),FREEREF(1),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_walk_op_89) {
  P vars_,x_;
  P yF659;
  P spliceQF658;
  P varF657;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(vars_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_60));
  if (T1 != YPfalse) {
    T4 = (P)YOlen(vars_);
    T3 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_106),T4);
    varF657 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF657,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF657;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_87;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF658 = T10;
      T14 = FUNFAB(fun_88,2,FREEREF(0),vars_);
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF659 = T13;
      if (spliceQF658 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF659);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
        T24 = CALL1(1,VARREF(Ytail),yF659);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALLN(1,VARREF(YgooSmacrosYcat),4,T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF659;
      }
      T12 = T15;
      T9 = T12;
      T7 = T9;
    } else {
      if (YPtrue != YPfalse) {
        T25 = x_;
      } else {
        T25 = YPfalse;
      }
      T7 = T25;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  P return_;
  P argsF672;
  P exprF671;
  P varsF670;
  P walk_opF669;
  P rest_opQF668;
  P spliceF667;
  P x_1191F666;
  P x_1191F665;
  P x_1191F664;
  P argsF663;
  P fF662;
  P x_1191F661;
  P x_1192F660;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_83,1);
  x_1192F660 = T1;
  FUNINIT(x_1192F660, 1,return_);
  x_1191F661 = FREEREF(0);
  fF662 = YPfalse;
  fF662 = BOXFAB(fF662);
  argsF663 = YPfalse;
  argsF663 = BOXFAB(argsF663);
  T7 = CALL2(1,VARREF(YisaQ),x_1191F661,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F661,LITREF(lit_95),x_1192F660);
    x_1191F664 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F664,x_1192F660);
    BOXVAL(fF662) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1191F664);
    x_1191F665 = T12;
    BOXVAL(argsF663) = x_1191F665;
    x_1191F666 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F666,x_1192F660);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1192F660,LITREF(lit_6),x_1191F661);
  }
  T17 = fun_splice_85;
  spliceF667 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_86,1);
  rest_opQF668 = T18;
  T19 = FUNSHELL(1,fun_walk_op_89,2);
  walk_opF669 = T19;
  FUNINIT(rest_opQF668, 1,rest_opQF668);
  FUNINIT(walk_opF669, 2,walk_opF669,spliceF667);
  T22 = BOXVAL(argsF663);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF662);
    T24 = CALL2(1,VARREF(YgooSmacrosYEE),T25,LITREF(lit_60));
    if (T24 != YPfalse) {
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T31 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
      T26 = CALLN(1,VARREF(YgooSmacrosYcat),4,T27,T28,T31,Ynil);
      T23 = T26;
    } else {
      T33 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
      T38 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
      T39 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
      T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T39,Ynil);
      T36 = CALL1(1,VARREF(Ylst),T37);
      T35 = CALL2(1,VARREF(YgooSmacrosYcat),T36,Ynil);
      T34 = CALL1(1,VARREF(Ylst),T35);
      T41 = BOXVAL(fF662);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALLN(1,VARREF(YgooSmacrosYcat),4,T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF670 = T43;
    T48 = BOXVAL(fF662);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF663);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF669,varsF670,T46);
    exprF671 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF670);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF663);
    T55 = CALL1(1,rest_opQF668,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_109);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF672 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
    T59 = CALL1(1,VARREF(Ylst),argsF672);
    T60 = CALL1(1,VARREF(Ylst),exprF671);
    T57 = CALLN(1,VARREF(YgooSmacrosYcat),4,T58,T59,T60,Ynil);
    T50 = T57;
    T44 = T50;
    T42 = T44;
    T20 = T42;
  }
  T16 = T20;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_90,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1200_92) {
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

FUNCODEDEF(fun_x_1204_93) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_114));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P varF683;
  P x_1203F682;
  P x_1203F681;
  P x_1203F680;
  P x_1203F679;
  P x_1203F678;
  P restF677;
  P thenF676;
  P patF675;
  P x_1203F674;
  P x_1204F673;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_93,1);
  x_1204F673 = T1;
  FUNINIT(x_1204F673, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1203F674 = T3;
  patF675 = YPfalse;
  patF675 = BOXFAB(patF675);
  thenF676 = YPfalse;
  thenF676 = BOXFAB(thenF676);
  restF677 = YPfalse;
  restF677 = BOXFAB(restF677);
  T10 = CALL2(1,VARREF(YisaQ),x_1203F674,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F674,x_1204F673);
    x_1203F678 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1203F678,x_1204F673);
    BOXVAL(patF675) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1203F678);
    x_1203F679 = T15;
    BOXVAL(thenF676) = x_1203F679;
    x_1203F680 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F680,x_1204F673);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1203F674);
    x_1203F681 = T18;
    BOXVAL(restF677) = x_1203F681;
    x_1203F682 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F682,x_1204F673);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1204F673,LITREF(lit_6),x_1203F674);
  }
  T24 = BOXVAL(patF675);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T27 = BOXVAL(thenF676);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF683 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF683);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
    T45 = BOXVAL(patF675);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF683);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T50 = BOXVAL(thenF676);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
    T54 = CALL1(1,VARREF(Ylst),varF683);
    T55 = BOXVAL(restF677);
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
  QRET(T0);
}

FUNCODEDEF(fun_x_1202_95) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_94,2,FREEREF(1),FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  P return_;
  P x_1201F685;
  P x_1202F684;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1202_95,3);
  x_1202F684 = T1;
  FUNINIT(x_1202F684, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1201F685 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1201F685,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1201F685,x_1202F684);
  } else {
    T6 = CALL2(1,x_1202F684,LITREF(lit_6),x_1201F685);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P x_1199F692;
  P x_1199F691;
  P x_1199F690;
  P casesF689;
  P expF688;
  P x_1199F687;
  P x_1200F686;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1200_92,1);
  x_1200F686 = T1;
  FUNINIT(x_1200F686, 1,return_);
  x_1199F687 = FREEREF(0);
  expF688 = YPfalse;
  expF688 = BOXFAB(expF688);
  casesF689 = YPfalse;
  casesF689 = BOXFAB(casesF689);
  T7 = CALL2(1,VARREF(YisaQ),x_1199F687,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1199F687,LITREF(lit_111),x_1200F686);
    x_1199F690 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F690,x_1200F686);
    BOXVAL(expF688) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1199F690);
    x_1199F691 = T12;
    BOXVAL(casesF689) = x_1199F691;
    x_1199F692 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F692,x_1200F686);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1200F686,LITREF(lit_6),x_1199F687);
  }
  T17 = FUNFAB(fun_96,2,casesF689,expF688);
  T16 = with_exit(T17);
  T5 = T16;
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

FUNCODEDEF(fun_x_1208_99) {
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
  P x_1207F701;
  P x_1207F700;
  P x_1207F699;
  P x_1207F698;
  P argsF697;
  P messageF696;
  P condF695;
  P x_1207F694;
  P x_1208F693;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_99,1);
  x_1208F693 = T1;
  FUNINIT(x_1208F693, 1,return_);
  x_1207F694 = FREEREF(0);
  condF695 = YPfalse;
  condF695 = BOXFAB(condF695);
  messageF696 = YPfalse;
  messageF696 = BOXFAB(messageF696);
  argsF697 = YPfalse;
  argsF697 = BOXFAB(argsF697);
  T9 = CALL2(1,VARREF(YisaQ),x_1207F694,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F694,LITREF(lit_118),x_1208F693);
    x_1207F698 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F698,x_1208F693);
    BOXVAL(condF695) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1207F698);
    x_1207F699 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F699,x_1208F693);
    BOXVAL(messageF696) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1207F699);
    x_1207F700 = T17;
    BOXVAL(argsF697) = x_1207F700;
    x_1207F701 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F701,x_1208F693);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1208F693,LITREF(lit_6),x_1207F694);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T27 = BOXVAL(condF695);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF696);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF697);
  T29 = CALLN(1,VARREF(YgooSmacrosYcat),4,T30,T31,T33,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T21 = CALLN(1,VARREF(YgooSmacrosYcat),4,T22,T23,T28,Ynil);
  T7 = T21;
  T5 = T7;
  T3 = T5;
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

FUNCODEDEF(fun_x_1216_102) {
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

FUNCODEDEF(fun_x_1218_103) {
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

FUNCODEDEF(fun_x_1220_104) {
  P msg_,args_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(2));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P return_;
  P x_1219F708;
  P x_1219F707;
  P x_1219F706;
  P valF705;
  P keyF704;
  P x_1219F703;
  P x_1220F702;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1220_104,3);
  x_1220F702 = T1;
  FUNINIT(x_1220F702, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1219F703 = T3;
  keyF704 = YPfalse;
  keyF704 = BOXFAB(keyF704);
  valF705 = YPfalse;
  valF705 = BOXFAB(valF705);
  T8 = CALL2(1,VARREF(YisaQ),x_1219F703,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F703,LITREF(lit_56),x_1220F702);
    x_1219F706 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F706,x_1220F702);
    BOXVAL(keyF704) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1219F706);
    x_1219F707 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F707,x_1220F702);
    BOXVAL(valF705) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1219F707);
    x_1219F708 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F708,x_1220F702);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1220F702,LITREF(lit_6),x_1219F703);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T24 = BOXVAL(keyF704);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF705);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALLN(1,VARREF(YgooSmacrosYcat),4,T22,T23,T25,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T33 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
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
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P return_;
  P stateF715;
  P x_1217F714;
  P x_1217F713;
  P expF712;
  P varF711;
  P x_1217F710;
  P x_1218F709;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1218_103,1);
  x_1218F709 = T1;
  FUNINIT(x_1218F709, 1,return_);
  x_1217F710 = FREEREF(0);
  varF711 = YPfalse;
  varF711 = BOXFAB(varF711);
  expF712 = YPfalse;
  expF712 = BOXFAB(expF712);
  T7 = CALL2(1,VARREF(YisaQ),x_1217F710,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1217F710,x_1218F709);
    BOXVAL(varF711) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1217F710);
    x_1217F713 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1217F713,x_1218F709);
    BOXVAL(expF712) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1217F713);
    x_1217F714 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1217F714,x_1218F709);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1218F709,LITREF(lit_6),x_1217F710);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF715 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(2));
  T22 = CALL1(1,VARREF(Ylst),stateF715);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_128));
  T27 = BOXVAL(expF712);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(3));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_129));
  T31 = CALL1(1,VARREF(Ylst),stateF715);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(4));
  T34 = FUNFAB(fun_105,2,varF711,stateF715);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(5));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_133));
  T38 = CALL1(1,VARREF(Ylst),stateF715);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,FREEREF(6));
  T18 = CALLN(0,FREEREF(1),5,T19,T20,T28,T32,T35);
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grok_107) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF717;
  P loopF716;
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
    loopF716 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
    T6 = CALL1(1,VARREF(Ylst),loopF716);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF716);
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
    clauseF717 = T23;
    T25 = FUNFAB(fun_106,7,clauseF717,FREEREF(1),clauses_,inits_,preds_,nows_,nexts_);
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P return_;
  P grokF727;
  P x_1215F726;
  P x_1215F725;
  P x_1215F724;
  P x_1215F723;
  P x_1215F722;
  P bodyF721;
  P clausesF720;
  P x_1215F719;
  P x_1216F718;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_102,1);
  x_1216F718 = T1;
  FUNINIT(x_1216F718, 1,return_);
  x_1215F719 = FREEREF(0);
  clausesF720 = YPfalse;
  clausesF720 = BOXFAB(clausesF720);
  bodyF721 = YPfalse;
  bodyF721 = BOXFAB(bodyF721);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F719,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F719,LITREF(lit_120),x_1216F718);
    x_1215F722 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F722,x_1216F718);
    x_1215F723 = T11;
    BOXVAL(clausesF720) = x_1215F723;
    x_1215F724 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F724,x_1216F718);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1215F722);
    x_1215F725 = T14;
    BOXVAL(bodyF721) = x_1215F725;
    x_1215F726 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F726,x_1216F718);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1216F718,LITREF(lit_6),x_1215F719);
  }
  T19 = FUNSHELL(1,fun_grok_107,2);
  grokF727 = T19;
  FUNINIT(grokF727, 2,bodyF721,grokF727);
  T21 = BOXVAL(clausesF720);
  T20 = CALLN(0,grokF727,5,T21,Ynil,Ynil,Ynil,Ynil);
  T18 = T20;
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

FUNCODEDEF(fun_x_1224_110) {
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

FUNCODEDEF(fun_111) {
  P return_;
  P x_1223F734;
  P x_1223F733;
  P x_1223F732;
  P bodyF731;
  P testF730;
  P x_1223F729;
  P x_1224F728;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1224_110,1);
  x_1224F728 = T1;
  FUNINIT(x_1224F728, 1,return_);
  x_1223F729 = FREEREF(0);
  testF730 = YPfalse;
  testF730 = BOXFAB(testF730);
  bodyF731 = YPfalse;
  bodyF731 = BOXFAB(bodyF731);
  T7 = CALL2(1,VARREF(YisaQ),x_1223F729,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1223F729,LITREF(lit_135),x_1224F728);
    x_1223F732 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1223F732,x_1224F728);
    BOXVAL(testF730) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1223F732);
    x_1223F733 = T12;
    BOXVAL(bodyF731) = x_1223F733;
    x_1223F734 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F734,x_1224F728);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1224F728,LITREF(lit_6),x_1223F729);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T24 = BOXVAL(testF730);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF731);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
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
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_111,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1228_113) {
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

FUNCODEDEF(fun_114) {
  P return_;
  P x_1227F741;
  P x_1227F740;
  P x_1227F739;
  P bodyF738;
  P testF737;
  P x_1227F736;
  P x_1228F735;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_113,1);
  x_1228F735 = T1;
  FUNINIT(x_1228F735, 1,return_);
  x_1227F736 = FREEREF(0);
  testF737 = YPfalse;
  testF737 = BOXFAB(testF737);
  bodyF738 = YPfalse;
  bodyF738 = BOXFAB(bodyF738);
  T7 = CALL2(1,VARREF(YisaQ),x_1227F736,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F736,LITREF(lit_138),x_1228F735);
    x_1227F739 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F739,x_1228F735);
    BOXVAL(testF737) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1227F739);
    x_1227F740 = T12;
    BOXVAL(bodyF738) = x_1227F740;
    x_1227F741 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F741,x_1228F735);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1228F735,LITREF(lit_6),x_1227F736);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T24 = BOXVAL(testF737);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF738);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
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
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_114,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1232_116) {
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

FUNCODEDEF(fun_117) {
  P return_;
  P x_1231F748;
  P x_1231F747;
  P x_1231F746;
  P expF745;
  P bindingF744;
  P x_1231F743;
  P x_1232F742;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_116,1);
  x_1232F742 = T1;
  FUNINIT(x_1232F742, 1,return_);
  x_1231F743 = FREEREF(0);
  bindingF744 = YPfalse;
  bindingF744 = BOXFAB(bindingF744);
  expF745 = YPfalse;
  expF745 = BOXFAB(expF745);
  T7 = CALL2(1,VARREF(YisaQ),x_1231F743,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1231F743,LITREF(lit_140),x_1232F742);
    x_1231F746 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F746,x_1232F742);
    BOXVAL(bindingF744) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1231F746);
    x_1231F747 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F747,x_1232F742);
    BOXVAL(expF745) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F747);
    x_1231F748 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F748,x_1232F742);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1232F742,LITREF(lit_6),x_1231F743);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T21 = BOXVAL(bindingF744);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF745);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALLN(1,VARREF(YgooSmacrosYcat),4,T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_117,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_119) {
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

FUNCODEDEF(fun_x_1244_120) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_146),T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P return_;
  P old_valueF760;
  P nameF759;
  P x_1243F758;
  P x_1243F757;
  P x_1243F756;
  P x_1243F755;
  P x_1243F754;
  P restF753;
  P valueF752;
  P varF751;
  P x_1243F750;
  P x_1244F749;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1244_120,2);
  x_1244F749 = T1;
  FUNINIT(x_1244F749, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  x_1243F750 = T3;
  varF751 = YPfalse;
  varF751 = BOXFAB(varF751);
  valueF752 = YPfalse;
  valueF752 = BOXFAB(valueF752);
  restF753 = YPfalse;
  restF753 = BOXFAB(restF753);
  T10 = CALL2(1,VARREF(YisaQ),x_1243F750,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F750,x_1244F749);
    x_1243F754 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1243F754,x_1244F749);
    BOXVAL(varF751) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1243F754);
    x_1243F755 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1243F755,x_1244F749);
    BOXVAL(valueF752) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1243F755);
    x_1243F756 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F756,x_1244F749);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1243F750);
    x_1243F757 = T20;
    BOXVAL(restF753) = x_1243F757;
    x_1243F758 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F758,x_1244F749);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1244F749,LITREF(lit_6),x_1243F750);
  }
  T26 = BOXVAL(varF751);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF759 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF760 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF760);
  T36 = CALL1(1,VARREF(Ylst),nameF759);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_147));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T46 = CALL1(1,VARREF(Ylst),nameF759);
  T48 = BOXVAL(valueF752);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T54 = BOXVAL(restF753);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALLN(1,VARREF(YgooSmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALLN(1,VARREF(YgooSmacrosYcat),4,T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T59 = CALL1(1,VARREF(Ylst),nameF759);
  T60 = CALL1(1,VARREF(Ylst),old_valueF760);
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
  QRET(T0);
}

FUNCODEDEF(fun_x_1242_122) {
  P msg_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_121,2,FREEREF(1),FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_123) {
  P return_;
  P x_1241F762;
  P x_1242F761;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1242_122,3);
  x_1242F761 = T1;
  FUNINIT(x_1242F761, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1241F762 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1241F762,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1241F762,x_1242F761);
  } else {
    T6 = CALL2(1,x_1242F761,LITREF(lit_6),x_1241F762);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P return_;
  P x_1239F769;
  P x_1239F768;
  P x_1239F767;
  P bodyF766;
  P bindingsF765;
  P x_1239F764;
  P x_1240F763;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_119,1);
  x_1240F763 = T1;
  FUNINIT(x_1240F763, 1,return_);
  x_1239F764 = FREEREF(0);
  bindingsF765 = YPfalse;
  bindingsF765 = BOXFAB(bindingsF765);
  bodyF766 = YPfalse;
  bodyF766 = BOXFAB(bodyF766);
  T7 = CALL2(1,VARREF(YisaQ),x_1239F764,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F764,LITREF(lit_143),x_1240F763);
    x_1239F767 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1239F767,x_1240F763);
    BOXVAL(bindingsF765) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1239F767);
    x_1239F768 = T12;
    BOXVAL(bodyF766) = x_1239F768;
    x_1239F769 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F769,x_1240F763);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1240F763,LITREF(lit_6),x_1239F764);
  }
  T17 = FUNFAB(fun_123,2,bindingsF765,bodyF766);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
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

FUNCODEDEF(fun_x_1248_126) {
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

FUNCODEDEF(fun_127) {
  P return_;
  P vnamF779;
  P typF778;
  P namF777;
  P x_1247F776;
  P x_1247F775;
  P x_1247F774;
  P valueF773;
  P varF772;
  P x_1247F771;
  P x_1248F770;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1248_126,1);
  x_1248F770 = T1;
  FUNINIT(x_1248F770, 1,return_);
  x_1247F771 = FREEREF(0);
  varF772 = YPfalse;
  varF772 = BOXFAB(varF772);
  valueF773 = YPfalse;
  valueF773 = BOXFAB(valueF773);
  T7 = CALL2(1,VARREF(YisaQ),x_1247F771,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1247F771,LITREF(lit_149),x_1248F770);
    x_1247F774 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F774,x_1248F770);
    BOXVAL(varF772) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1247F774);
    x_1247F775 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F775,x_1248F770);
    BOXVAL(valueF773) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1247F775);
    x_1247F776 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1247F776,x_1248F770);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1248F770,LITREF(lit_6),x_1247F771);
  }
  T20 = BOXVAL(varF772);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF777 = T19;
  T23 = BOXVAL(varF772);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF778 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_150),namF777,LITREF(lit_151));
  vnamF779 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T31 = CALL1(1,VARREF(Ylst),vnamF779);
  T33 = BOXVAL(valueF773);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALLN(1,VARREF(YgooSmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T37 = CALL1(1,VARREF(Ylst),namF777);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T41 = CALL1(1,VARREF(Ylst),typF778);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF779);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF777);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T53 = CALL1(1,VARREF(Ylst),typF778);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T57 = CALL1(1,VARREF(Ylst),vnamF779);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
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
  QRET(T0);
}

FUNCODEDEF(fun_128) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_127,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1252_129) {
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
  P x_1251F784;
  P x_1251F783;
  P bodyF782;
  P x_1251F781;
  P x_1252F780;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1252_129,1);
  x_1252F780 = T1;
  FUNINIT(x_1252F780, 1,return_);
  x_1251F781 = FREEREF(0);
  bodyF782 = YPfalse;
  bodyF782 = BOXFAB(bodyF782);
  T5 = CALL2(1,VARREF(YisaQ),x_1251F781,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1251F781,LITREF(lit_156),x_1252F780);
    x_1251F783 = T7;
    BOXVAL(bodyF782) = x_1251F783;
    x_1251F784 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1251F784,x_1252F780);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1252F780,LITREF(lit_6),x_1251F781);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF782);
  T11 = CALLN(1,VARREF(YgooSmacrosYcat),4,T12,T13,T19,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_130,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1256_132) {
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

FUNCODEDEF(fun_133) {
  P return_;
  P x_1255F789;
  P x_1255F788;
  P namesF787;
  P x_1255F786;
  P x_1256F785;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1256_132,1);
  x_1256F785 = T1;
  FUNINIT(x_1256F785, 1,return_);
  x_1255F786 = FREEREF(0);
  namesF787 = YPfalse;
  namesF787 = BOXFAB(namesF787);
  T5 = CALL2(1,VARREF(YisaQ),x_1255F786,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1255F786,LITREF(lit_159),x_1256F785);
    x_1255F788 = T7;
    BOXVAL(namesF787) = x_1255F788;
    x_1255F789 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1255F789,x_1256F785);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1256F785,LITREF(lit_6),x_1255F786);
  }
  T13 = BOXVAL(namesF787);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF787);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALLN(1,VARREF(YgooSmacrosYcat),4,T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
    T28 = BOXVAL(namesF787);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
    T33 = BOXVAL(namesF787);
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
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_133,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1278_135) {
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

FUNCODEDEF(fun_x_1296_136) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_116));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P return_;
  P x_1295F793;
  P nameF792;
  P x_1295F791;
  P x_1296F790;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1296_136,1);
  x_1296F790 = T1;
  FUNINIT(x_1296F790, 1,return_);
  x_1295F791 = FREEREF(0);
  nameF792 = YPfalse;
  nameF792 = BOXFAB(nameF792);
  T5 = CALL2(1,VARREF(YisaQ),x_1295F791,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F791,x_1296F790);
    BOXVAL(nameF792) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1295F791);
    x_1295F793 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F793,x_1296F790);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1296F790,LITREF(lit_6),x_1295F791);
  }
  T13 = BOXVAL(nameF792);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF792);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
    T21 = BOXVAL(nameF792);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T17 = CALL1(1,VARREF(Ylst),T18);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T17,Ynil);
    T11 = T14;
  } else {
    T11 = Ynil;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1293_138) {
  P msg_,args_;
  P x_1294F794;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1294F794 = FREEREF(1);
  T3 = FUNFAB(fun_137,1,x_1294F794);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P return_;
  P x_1292F801;
  P x_1292F800;
  P x_1292F799;
  P restF798;
  P nameF797;
  P x_1292F796;
  P x_1293F795;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1293_138,2);
  x_1293F795 = T1;
  FUNINIT(x_1293F795, 2,return_,FREEREF(0));
  x_1292F796 = FREEREF(0);
  nameF797 = YPfalse;
  nameF797 = BOXFAB(nameF797);
  restF798 = YPfalse;
  restF798 = BOXFAB(restF798);
  T7 = CALL2(1,VARREF(YisaQ),x_1292F796,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1292F796,LITREF(lit_169),x_1293F795);
    x_1292F799 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1292F799,x_1293F795);
    BOXVAL(nameF797) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1292F799);
    x_1292F800 = T12;
    BOXVAL(restF798) = x_1292F800;
    x_1292F801 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1292F801,x_1293F795);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1293F795,LITREF(lit_6),x_1292F796);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF797);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1290_140) {
  P msg_,args_;
  P x_1291F802;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1291F802 = FREEREF(1);
  T3 = FUNFAB(fun_139,2,x_1291F802,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P return_;
  P x_1289F809;
  P x_1289F808;
  P x_1289F807;
  P restF806;
  P nameF805;
  P x_1289F804;
  P x_1290F803;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1290_140,3);
  x_1290F803 = T1;
  FUNINIT(x_1290F803, 3,return_,FREEREF(0),FREEREF(1));
  x_1289F804 = FREEREF(0);
  nameF805 = YPfalse;
  nameF805 = BOXFAB(nameF805);
  restF806 = YPfalse;
  restF806 = BOXFAB(restF806);
  T7 = CALL2(1,VARREF(YisaQ),x_1289F804,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1289F804,LITREF(lit_170),x_1290F803);
    x_1289F807 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1289F807,x_1290F803);
    BOXVAL(nameF805) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1289F807);
    x_1289F808 = T12;
    BOXVAL(restF806) = x_1289F808;
    x_1289F809 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1289F809,x_1290F803);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1290F803,LITREF(lit_6),x_1289F804);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF805);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1287_142) {
  P msg_,args_;
  P x_1288F810;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1288F810 = FREEREF(1);
  T3 = FUNFAB(fun_141,2,x_1288F810,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P return_;
  P x_1286F817;
  P x_1286F816;
  P x_1286F815;
  P restF814;
  P nameF813;
  P x_1286F812;
  P x_1287F811;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1287_142,3);
  x_1287F811 = T1;
  FUNINIT(x_1287F811, 3,return_,FREEREF(0),FREEREF(1));
  x_1286F812 = FREEREF(0);
  nameF813 = YPfalse;
  nameF813 = BOXFAB(nameF813);
  restF814 = YPfalse;
  restF814 = BOXFAB(restF814);
  T7 = CALL2(1,VARREF(YisaQ),x_1286F812,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1286F812,LITREF(lit_141),x_1287F811);
    x_1286F815 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1286F815,x_1287F811);
    BOXVAL(nameF813) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1286F815);
    x_1286F816 = T12;
    BOXVAL(restF814) = x_1286F816;
    x_1286F817 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1286F817,x_1287F811);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1287F811,LITREF(lit_6),x_1286F812);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF813);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1284_144) {
  P msg_,args_;
  P x_1285F818;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1285F818 = FREEREF(1);
  T3 = FUNFAB(fun_143,2,x_1285F818,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  P return_;
  P x_1283F825;
  P x_1283F824;
  P x_1283F823;
  P restF822;
  P nameF821;
  P x_1283F820;
  P x_1284F819;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_144,3);
  x_1284F819 = T1;
  FUNINIT(x_1284F819, 3,return_,FREEREF(0),FREEREF(1));
  x_1283F820 = FREEREF(0);
  nameF821 = YPfalse;
  nameF821 = BOXFAB(nameF821);
  restF822 = YPfalse;
  restF822 = BOXFAB(restF822);
  T7 = CALL2(1,VARREF(YisaQ),x_1283F820,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F820,LITREF(lit_171),x_1284F819);
    x_1283F823 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1283F823,x_1284F819);
    BOXVAL(nameF821) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1283F823);
    x_1283F824 = T12;
    BOXVAL(restF822) = x_1283F824;
    x_1283F825 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F825,x_1284F819);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1284F819,LITREF(lit_6),x_1283F820);
  }
  T18 = BOXVAL(nameF821);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF821);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1281_146) {
  P msg_,args_;
  P x_1282F826;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1282F826 = FREEREF(1);
  T3 = FUNFAB(fun_145,2,x_1282F826,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_147) {
  P return_;
  P x_1280F833;
  P x_1280F832;
  P x_1280F831;
  P restF830;
  P nameF829;
  P x_1280F828;
  P x_1281F827;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1281_146,3);
  x_1281F827 = T1;
  FUNINIT(x_1281F827, 3,return_,FREEREF(0),FREEREF(1));
  x_1280F828 = FREEREF(0);
  nameF829 = YPfalse;
  nameF829 = BOXFAB(nameF829);
  restF830 = YPfalse;
  restF830 = BOXFAB(restF830);
  T7 = CALL2(1,VARREF(YisaQ),x_1280F828,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1280F828,LITREF(lit_172),x_1281F827);
    x_1280F831 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1280F831,x_1281F827);
    BOXVAL(nameF829) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1280F831);
    x_1280F832 = T12;
    BOXVAL(restF830) = x_1280F832;
    x_1280F833 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F833,x_1281F827);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1281F827,LITREF(lit_6),x_1280F828);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF829);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T29 = BOXVAL(nameF829);
  T28 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T29);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),4,T17,T19,T24,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  P return_;
  P defsF840;
  P x_1279F839;
  P x_1277F838;
  P x_1277F837;
  P defF836;
  P x_1277F835;
  P x_1278F834;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1278_135,1);
  x_1278F834 = T1;
  FUNINIT(x_1278F834, 1,return_);
  x_1277F835 = FREEREF(0);
  defF836 = YPfalse;
  defF836 = BOXFAB(defF836);
  T5 = CALL2(1,VARREF(YisaQ),x_1277F835,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1277F835,LITREF(lit_162),x_1278F834);
    x_1277F837 = T7;
    BOXVAL(defF836) = x_1277F837;
    x_1277F838 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F838,x_1278F834);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1278F834,LITREF(lit_6),x_1277F835);
  }
  T13 = BOXVAL(defF836);
  x_1279F839 = T13;
  T15 = FUNFAB(fun_147,2,x_1279F839,defF836);
  T14 = with_exit(T15);
  T12 = T14;
  defsF840 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF840,Ynil);
  T11 = T16;
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_149) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_148,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1300_150) {
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

FUNCODEDEF(fun_151) {
  P x_;
  P xF841;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T1 = x_;
  } else {
    T3 = CALL1(1,VARREF(Ylst),x_);
    T1 = T3;
  }
  xF841 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF841,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_152) {
  P return_;
  P x_1299F846;
  P x_1299F845;
  P defsF844;
  P x_1299F843;
  P x_1300F842;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1300_150,1);
  x_1300F842 = T1;
  FUNINIT(x_1300F842, 1,return_);
  x_1299F843 = FREEREF(0);
  defsF844 = YPfalse;
  defsF844 = BOXFAB(defsF844);
  T5 = CALL2(1,VARREF(YisaQ),x_1299F843,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1299F843,LITREF(lit_174),x_1300F842);
    x_1299F845 = T7;
    BOXVAL(defsF844) = x_1299F845;
    x_1299F846 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F846,x_1300F842);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1300F842,LITREF(lit_6),x_1299F843);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T14 = fun_151;
  T15 = BOXVAL(defsF844);
  T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_153) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_152,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
  P tmpF860;
  P tmpF859;
  P tmpF858;
  P tmpF857;
  P tmpF856;
  P tmpF855;
  P tmpF854;
  P tmpF853;
  P tmpF852;
  P tmpF851;
  P tmpF850;
  P tmpF849;
  P tmpF848;
  P tmpF847;
  P T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188;
  P T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172;
  P T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156;
  P T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140;
  P T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124;
  P T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108;
  P T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92;
  P T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76;
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"exp");
  lit_1 = YPPsym((P)"return");
  lit_2 = YPPsym((P)"x-1076");
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
  fun_x_1076_0 = YPmet(FUNCODEREF(fun_x_1076_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T3);
  lit_17 = YPPsym((P)"x-1080");
  lit_18 = YPPsym((P)"app-sup");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1080_3 = YPmet(FUNCODEREF(fun_x_1080_3),LITREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T7);
  lit_20 = YPPsym((P)"x-1084");
  lit_21 = YPPsym((P)"app");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1084_6 = YPmet(FUNCODEREF(fun_x_1084_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T11);
  lit_22 = YPPsym((P)"x-1088");
  lit_23 = YPPsym((P)"collecting");
  lit_24 = YPPsym((P)"collector-");
  lit_25 = YPPsym((P)"collected");
  T14 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1088_9 = YPmet(FUNCODEREF(fun_x_1088_9),LITREF(lit_22),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T15 = fun_11;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"collecting"),T15);
  lit_26 = YPPsym((P)"x-1092");
  lit_27 = YPPsym((P)"collect");
  lit_28 = YPPsym((P)"set");
  lit_29 = YPPsym((P)"pair");
  T18 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1092_12 = YPmet(FUNCODEREF(fun_x_1092_12),LITREF(lit_26),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T19 = fun_14;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"collect"),T19);
  lit_30 = YPPsym((P)"x-1096");
  lit_31 = YPPsym((P)"rev!");
  T22 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1096_15 = YPmet(FUNCODEREF(fun_x_1096_15),LITREF(lit_30),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T23 = fun_17;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"collected"),T23);
  lit_32 = YPPsym((P)"x-1100");
  lit_33 = YPPsym((P)"renew");
  lit_34 = YPPsym((P)"loop");
  lit_35 = YPPsym((P)"sets");
  lit_36 = YPPsym((P)"inits");
  T27 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1100_18 = YPmet(FUNCODEREF(fun_x_1100_18),LITREF(lit_32),T27,ENVNUL,PNUL,YPfalse);
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
  lit_41 = YPPsym((P)"x-1106");
  lit_42 = YPPsym((P)"incf");
  lit_43 = YPPsym((P)"x-1108");
  lit_44 = YPPsym((P)"+");
  T36 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1106_24 = YPmet(FUNCODEREF(fun_x_1106_24),LITREF(lit_41),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),LITREF(lit_43),T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T37 = fun_28;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T37);
  lit_45 = YPPsym((P)"x-1114");
  lit_46 = YPPsym((P)"decf");
  lit_47 = YPPsym((P)"x-1116");
  lit_48 = YPPsym((P)"-");
  T42 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1114_29 = YPmet(FUNCODEREF(fun_x_1114_29),LITREF(lit_45),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_30 = YPmet(FUNCODEREF(fun_x_1116_30),LITREF(lit_47),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T43 = fun_33;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T43);
  lit_49 = YPPsym((P)"x-1120");
  lit_50 = YPPsym((P)"pushf");
  lit_51 = YPPsym((P)"push");
  T46 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_34 = YPmet(FUNCODEREF(fun_x_1120_34),LITREF(lit_49),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T47 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T47);
  lit_52 = YPPsym((P)"x-1124");
  lit_53 = YPPsym((P)"swapf");
  T50 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_37 = YPmet(FUNCODEREF(fun_x_1124_37),LITREF(lit_52),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T51);
  lit_54 = YPPsym((P)"x-1128");
  lit_55 = YPPsym((P)"popf");
  lit_56 = YPPsym((P)"tup");
  lit_57 = YPPsym((P)"pop");
  T54 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_40 = YPmet(FUNCODEREF(fun_x_1128_40),LITREF(lit_54),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T55 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T55);
  lit_58 = YPPsym((P)"x-1132");
  lit_59 = YPPsym((P)"opf");
  lit_60 = YPPsym((P)"_");
  T58 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_43 = YPmet(FUNCODEREF(fun_x_1132_43),LITREF(lit_58),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T59 = fun_45;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T59);
  lit_61 = YPPsym((P)"x-1136");
  lit_62 = YPPsym((P)"unless");
  lit_63 = YPPsym((P)"not");
  lit_64 = YPPsym((P)"seq");
  T62 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1136_46 = YPmet(FUNCODEREF(fun_x_1136_46),LITREF(lit_61),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T63 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T63);
  lit_65 = YPPsym((P)"x-1140");
  lit_66 = YPPsym((P)"when");
  T66 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_49 = YPmet(FUNCODEREF(fun_x_1140_49),LITREF(lit_65),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T67 = fun_51;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T67);
  lit_67 = YPPsym((P)"x-1148");
  lit_68 = YPPsym((P)"or");
  lit_69 = YPPsym((P)"x-1150");
  lit_70 = YPPsym((P)"x-1152");
  lit_71 = YPPsym((P)"tmp");
  T74 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_52 = YPmet(FUNCODEREF(fun_x_1148_52),LITREF(lit_67),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1150_53 = YPmet(FUNCODEREF(fun_x_1150_53),LITREF(lit_69),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1152_54 = YPmet(FUNCODEREF(fun_x_1152_54),LITREF(lit_70),T72,ENVNUL,PNUL,YPfalse);
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
  lit_72 = YPPsym((P)"x-1160");
  lit_73 = YPPsym((P)"and");
  lit_74 = YPPsym((P)"x-1162");
  lit_75 = YPPsym((P)"x-1164");
  T82 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_59 = YPmet(FUNCODEREF(fun_x_1160_59),LITREF(lit_72),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1162_60 = YPmet(FUNCODEREF(fun_x_1162_60),LITREF(lit_74),T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1164_61 = YPmet(FUNCODEREF(fun_x_1164_61),LITREF(lit_75),T80,ENVNUL,PNUL,YPfalse);
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
  lit_76 = YPPsym((P)"x-1170");
  lit_77 = YPPsym((P)"cond");
  lit_78 = YPPsym((P)"x-1172");
  lit_79 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T88 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1170_66 = YPmet(FUNCODEREF(fun_x_1170_66),LITREF(lit_76),T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_67 = YPmet(FUNCODEREF(fun_x_1172_67),LITREF(lit_78),T87,ENVNUL,PNUL,YPfalse);
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
  lit_84 = YPPsym((P)"x-1178");
  lit_85 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_86 = YPPsym((P)"x-1180");
  lit_87 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_88 = YPPsym((P)"x");
  T95 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1178_71 = YPmet(FUNCODEREF(fun_x_1178_71),LITREF(lit_84),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_72 = YPmet(FUNCODEREF(fun_x_1180_72),LITREF(lit_86),T94,ENVNUL,PNUL,YPfalse);
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
  lit_89 = YPPsym((P)"x-1184");
  lit_90 = YPPsym((P)"case-by");
  T99 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1184_77 = YPmet(FUNCODEREF(fun_x_1184_77),LITREF(lit_89),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T100 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T100);
  lit_91 = YPPsym((P)"x-1188");
  lit_92 = YPPsym((P)"case");
  lit_93 = YPPsym((P)"==");
  T103 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1188_80 = YPmet(FUNCODEREF(fun_x_1188_80),LITREF(lit_91),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T104 = fun_82;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T104);
  lit_94 = YPPsym((P)"x-1192");
  lit_95 = YPPsym((P)"op");
  lit_96 = YPPsym((P)"splice");
  lit_97 = YPPsym((P)"y");
  lit_98 = YPPsym((P)"...");
  lit_99 = YPPsym((P)"as");
  lit_100 = YPPsym((P)"<lst>");
  lit_101 = YPPsym((P)"_*");
  lit_102 = YPPsym((P)"lst");
  lit_103 = YPPsym((P)"rest-op?");
  lit_104 = YPPsym((P)"walk-op");
  lit_105 = YPPsym((P)"vars");
  lit_106 = YPsb((P)"_");
  lit_107 = YPPsym((P)"cat!");
  lit_108 = YPPsym((P)"fun");
  lit_109 = YPPlist(1,YPPlist(2,YPPsym((P)"_*"),YPPsym((P)"...")));
  T113 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_83 = YPmet(FUNCODEREF(fun_x_1192_83),LITREF(lit_94),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_splice_85 = YPmet(FUNCODEREF(fun_splice_85),LITREF(lit_96),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_rest_opQ_86 = YPmet(FUNCODEREF(fun_rest_opQ_86),LITREF(lit_103),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(2,LITREF(lit_105),LITREF(lit_88)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_walk_op_89 = YPmet(FUNCODEREF(fun_walk_op_89),LITREF(lit_104),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T114 = fun_91;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"op"),T114);
  lit_110 = YPPsym((P)"x-1200");
  lit_111 = YPPsym((P)"match");
  lit_112 = YPPsym((P)"x-1202");
  lit_113 = YPPsym((P)"x-1204");
  lit_114 = YPsb((P)"Invalid match syntax.");
  lit_115 = YPPsym((P)"mif");
  lit_116 = YPsb((P)"Failed to match.");
  T121 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1200_92 = YPmet(FUNCODEREF(fun_x_1200_92),LITREF(lit_110),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_93 = YPmet(FUNCODEREF(fun_x_1204_93),LITREF(lit_113),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1202_95 = YPmet(FUNCODEREF(fun_x_1202_95),LITREF(lit_112),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T122 = fun_98;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T122);
  lit_117 = YPPsym((P)"x-1208");
  lit_118 = YPPsym((P)"assert");
  T125 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_99 = YPmet(FUNCODEREF(fun_x_1208_99),LITREF(lit_117),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T126 = fun_101;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T126);
  lit_119 = YPPsym((P)"x-1216");
  lit_120 = YPPsym((P)"for");
  lit_121 = YPPsym((P)"grok");
  lit_122 = YPPsym((P)"clauses");
  lit_123 = YPPsym((P)"preds");
  lit_124 = YPPsym((P)"nows");
  lit_125 = YPPsym((P)"nexts");
  lit_126 = YPPsym((P)"rep");
  lit_127 = YPPsym((P)"x-1218");
  lit_128 = YPPsym((P)"enum");
  lit_129 = YPPsym((P)"fin?");
  lit_130 = YPPsym((P)"x-1220");
  lit_131 = YPPsym((P)"now");
  lit_132 = YPPsym((P)"now-key");
  lit_133 = YPPsym((P)"nxt");
  T134 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_102 = YPmet(FUNCODEREF(fun_x_1216_102),LITREF(lit_119),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1218_103 = YPmet(FUNCODEREF(fun_x_1218_103),LITREF(lit_127),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1220_104 = YPmet(FUNCODEREF(fun_x_1220_104),LITREF(lit_130),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(5,LITREF(lit_122),LITREF(lit_36),LITREF(lit_123),LITREF(lit_124),LITREF(lit_125)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_107 = YPmet(FUNCODEREF(fun_grok_107),LITREF(lit_121),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T135 = fun_109;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T135);
  lit_134 = YPPsym((P)"x-1224");
  lit_135 = YPPsym((P)"while");
  lit_136 = YPPsym((P)"_loop");
  T138 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1224_110 = YPmet(FUNCODEREF(fun_x_1224_110),LITREF(lit_134),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T139 = fun_112;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T139);
  lit_137 = YPPsym((P)"x-1228");
  lit_138 = YPPsym((P)"until");
  T142 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_113 = YPmet(FUNCODEREF(fun_x_1228_113),LITREF(lit_137),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T143 = fun_115;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T143);
  lit_139 = YPPsym((P)"x-1232");
  lit_140 = YPPsym((P)"ddv");
  lit_141 = YPPsym((P)"dv");
  T146 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_116 = YPmet(FUNCODEREF(fun_x_1232_116),LITREF(lit_139),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T147 = fun_118;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"ddv"),T147);
  lit_142 = YPPsym((P)"x-1240");
  lit_143 = YPPsym((P)"dlet");
  lit_144 = YPPsym((P)"x-1242");
  lit_145 = YPPsym((P)"x-1244");
  lit_146 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_147 = YPPsym((P)"fin");
  T154 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_119 = YPmet(FUNCODEREF(fun_x_1240_119),LITREF(lit_142),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1244_120 = YPmet(FUNCODEREF(fun_x_1244_120),LITREF(lit_145),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1242_122 = YPmet(FUNCODEREF(fun_x_1242_122),LITREF(lit_144),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T155 = fun_125;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T155);
  lit_148 = YPPsym((P)"x-1248");
  lit_149 = YPPsym((P)"def-fun-var");
  lit_150 = YPsb((P)"*");
  lit_151 = YPsb((P)"*");
  lit_152 = YPPsym((P)"dm");
  lit_153 = YPPsym((P)"=>");
  lit_154 = YPPsym((P)"z");
  T158 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1248_126 = YPmet(FUNCODEREF(fun_x_1248_126),LITREF(lit_148),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T159 = fun_128;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T159);
  lit_155 = YPPsym((P)"x-1252");
  lit_156 = YPPsym((P)"without-prop-unbound-errors");
  lit_157 = YPPsym((P)"*report-prop-unbound-errors?*");
  T162 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1252_129 = YPmet(FUNCODEREF(fun_x_1252_129),LITREF(lit_155),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_131;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T163);
  lit_158 = YPPsym((P)"x-1256");
  lit_159 = YPPsym((P)"need-implementation");
  lit_160 = YPPsym((P)"export");
  T166 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1256_132 = YPmet(FUNCODEREF(fun_x_1256_132),LITREF(lit_158),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_134;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T167);
  lit_161 = YPPsym((P)"x-1278");
  lit_162 = YPPsym((P)"pub");
  lit_163 = YPPsym((P)"x-1281");
  lit_164 = YPPsym((P)"x-1284");
  lit_165 = YPPsym((P)"x-1287");
  lit_166 = YPPsym((P)"x-1290");
  lit_167 = YPPsym((P)"x-1293");
  lit_168 = YPPsym((P)"x-1296");
  lit_169 = YPPsym((P)"dc");
  lit_170 = YPPsym((P)"dg");
  lit_171 = YPPsym((P)"df");
  lit_172 = YPPsym((P)"dp");
  T182 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1278_135 = YPmet(FUNCODEREF(fun_x_1278_135),LITREF(lit_161),T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1296_136 = YPmet(FUNCODEREF(fun_x_1296_136),LITREF(lit_168),T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1293_138 = YPmet(FUNCODEREF(fun_x_1293_138),LITREF(lit_167),T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1290_140 = YPmet(FUNCODEREF(fun_x_1290_140),LITREF(lit_166),T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1287_142 = YPmet(FUNCODEREF(fun_x_1287_142),LITREF(lit_165),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_144 = YPmet(FUNCODEREF(fun_x_1284_144),LITREF(lit_164),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPmet(FUNCODEREF(fun_145),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1281_146 = YPmet(FUNCODEREF(fun_x_1281_146),LITREF(lit_163),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T183 = fun_149;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T183);
  lit_173 = YPPsym((P)"x-1300");
  lit_174 = YPPsym((P)"exported");
  T187 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_150 = YPmet(FUNCODEREF(fun_x_1300_150),LITREF(lit_173),T187,ENVNUL,PNUL,YPfalse);
  T186 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_151 = YPmet(FUNCODEREF(fun_151),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_152 = YPmet(FUNCODEREF(fun_152),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T188 = fun_153;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T188);
  tmpF847 = YPfalse;
  if (tmpF847 != YPfalse) {
    T189 = VARREF(YgooSmacrosYEE);
  } else {
    T189 = YPfalse;
  }
  tmpF848 = YPfalse;
  if (tmpF848 != YPfalse) {
    T190 = VARREF(YgooSmacrosYdo);
  } else {
    T190 = YPfalse;
  }
  tmpF849 = YPfalse;
  if (tmpF849 != YPfalse) {
    T191 = VARREF(YgooSmacrosYrevX);
  } else {
    T191 = YPfalse;
  }
  tmpF850 = YPfalse;
  if (tmpF850 != YPfalse) {
    T192 = VARREF(YgooSmacrosYcat);
  } else {
    T192 = YPfalse;
  }
  tmpF851 = YPfalse;
  if (tmpF851 != YPfalse) {
    T193 = VARREF(YgooSmacrosYelt);
  } else {
    T193 = YPfalse;
  }
  tmpF852 = YPfalse;
  if (tmpF852 != YPfalse) {
    T194 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T194 = YPfalse;
  }
  tmpF853 = YPfalse;
  if (tmpF853 != YPfalse) {
    T195 = VARREF(Yerror);
  } else {
    T195 = YPfalse;
  }
  tmpF854 = YPfalse;
  if (tmpF854 != YPfalse) {
    T196 = VARREF(YgooSmacrosYgensym);
  } else {
    T196 = YPfalse;
  }
  tmpF855 = YPfalse;
  if (tmpF855 != YPfalse) {
    T197 = VARREF(Ylst);
  } else {
    T197 = YPfalse;
  }
  tmpF856 = YPfalse;
  if (tmpF856 != YPfalse) {
    T198 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T198 = YPfalse;
  }
  tmpF857 = YPfalse;
  if (tmpF857 != YPfalse) {
    T199 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T199 = YPfalse;
  }
  tmpF858 = YPfalse;
  if (tmpF858 != YPfalse) {
    T200 = VARREF(YgooSmacrosYmap);
  } else {
    T200 = YPfalse;
  }
  tmpF859 = YPfalse;
  if (tmpF859 != YPfalse) {
    T201 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T201 = YPfalse;
  }
  tmpF860 = YPfalse;
  if (tmpF860 != YPfalse) {
    T202 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T202 = YPfalse;
  }
  T203 = YPfalse;
  return T203;
}

P YgooSmacrosY___main_1___() {
  P tmpF867;
  P tmpF866;
  P tmpF865;
  P tmpF864;
  P tmpF863;
  P tmpF862;
  P tmpF861;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  tmpF861 = YPfalse;
  if (tmpF861 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T0 = YPfalse;
  }
  tmpF862 = YPfalse;
  if (tmpF862 != YPfalse) {
    T1 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T1 = YPfalse;
  }
  tmpF863 = YPfalse;
  if (tmpF863 != YPfalse) {
    T2 = VARREF(YgooSmacrosYpair);
  } else {
    T2 = YPfalse;
  }
  tmpF864 = YPfalse;
  if (tmpF864 != YPfalse) {
    T3 = VARREF(Ytup);
  } else {
    T3 = YPfalse;
  }
  tmpF865 = YPfalse;
  if (tmpF865 != YPfalse) {
    T4 = VARREF(YgooSmacrosYvar_name);
  } else {
    T4 = YPfalse;
  }
  tmpF866 = YPfalse;
  if (tmpF866 != YPfalse) {
    T5 = VARREF(YgooSmacrosYvar_type);
  } else {
    T5 = YPfalse;
  }
  tmpF867 = YPfalse;
  if (tmpF867 != YPfalse) {
    T6 = VARREF(YgooSmacrosYnapp);
  } else {
    T6 = YPfalse;
  }
  T7 = YPfalse;
  return T7;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"nul", &module_info_gooSboot, "nul"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fin", &module_info_gooSboot, "fin"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"vec", &module_info_gooSboot, "vec"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"new", &module_info_gooSboot, "new"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"df", &module_info_gooSboot, "df"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"set", &module_info_gooSboot, "set"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"rep", &module_info_gooSboot, "rep"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"def", &module_info_gooSboot, "def"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"isa", &module_info_gooSboot, "isa"},
  {"head", &module_info_gooSboot, "head"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"esc", &module_info_gooSboot, "esc"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%su", &module_info_gooSboot, "%su"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dl", &module_info_gooSboot, "dl"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"try", &module_info_gooSboot, "try"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"use", &module_info_gooSboot, "use"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"export", &module_info_gooSboot, "export"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"match-empty-list", &YgooSmacrosYmatch_empty_list},
  {"case-by", NULL},
  {"napp", &YgooSmacrosYnapp},
  {"match-atom", &YgooSmacrosYmatch_atom},
  {"collected", NULL},
  {"or", NULL},
  {"without-prop-unbound-errors", NULL},
  {"do", &YgooSmacrosYdo},
  {"exported", NULL},
  {"collecting", NULL},
  {"swapf", NULL},
  {"and", NULL},
  {"app-sup", NULL},
  {"match-unquote", &YgooSmacrosYmatch_unquote},
  {"unless", NULL},
  {"incf", NULL},
  {"match", NULL},
  {"renew", NULL},
  {"sup", NULL},
  {"cond", NULL},
  {"==", &YgooSmacrosYEE},
  {"---main-0---", NULL},
  {"assert", NULL},
  {"pair", &YgooSmacrosYpair},
  {"var-name", &YgooSmacrosYvar_name},
  {"case", NULL},
  {"fab-setter-name", &YgooSmacrosYfab_setter_name},
  {"gensym", &YgooSmacrosYgensym},
  {"empty?", &YgooSmacrosYemptyQ},
  {"cat-sym", &YgooSmacrosYcat_sym},
  {"ddv", NULL},
  {"elt", &YgooSmacrosYelt},
  {"collect", NULL},
  {"decf", NULL},
  {"dlet", NULL},
  {"map", &YgooSmacrosYmap},
  {"pub", NULL},
  {"popf", NULL},
  {"when", NULL},
  {"---main-1---", NULL},
  {"lift-place-subforms", &YgooSmacrosYlift_place_subforms},
  {"until", NULL},
  {"app", NULL},
  {"do-case-by", &YgooSmacrosYdo_case_by},
  {"match-sublist", &YgooSmacrosYmatch_sublist},
  {"pushf", NULL},
  {"def-fun-var", NULL},
  {"cat", &YgooSmacrosYcat},
  {"op", NULL},
  {"for", NULL},
  {"var-type", &YgooSmacrosYvar_type},
  {"rev!", &YgooSmacrosYrevX},
  {"while", NULL},
  {"opf", NULL},
  {"need-implementation", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"match-empty-list", "match-empty-list"},
  {"case-by", "case-by"},
  {"napp", "napp"},
  {"match-atom", "match-atom"},
  {"collected", "collected"},
  {"or", "or"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"do", "do"},
  {"exported", "exported"},
  {"collecting", "collecting"},
  {"swapf", "swapf"},
  {"and", "and"},
  {"app-sup", "app-sup"},
  {"match-unquote", "match-unquote"},
  {"unless", "unless"},
  {"sup", "sup"},
  {"incf", "incf"},
  {"match", "match"},
  {"renew", "renew"},
  {"cond", "cond"},
  {"==", "=="},
  {"assert", "assert"},
  {"pair", "pair"},
  {"case", "case"},
  {"lst", "lst"},
  {"fab-setter-name", "fab-setter-name"},
  {"gensym", "gensym"},
  {"empty?", "empty?"},
  {"cat-sym", "cat-sym"},
  {"ddv", "ddv"},
  {"elt", "elt"},
  {"collect", "collect"},
  {"decf", "decf"},
  {"dlet", "dlet"},
  {"tup", "tup"},
  {"map", "map"},
  {"pub", "pub"},
  {"popf", "popf"},
  {"when", "when"},
  {"until", "until"},
  {"app", "app"},
  {"match-sublist", "match-sublist"},
  {"pushf", "pushf"},
  {"def-fun-var", "def-fun-var"},
  {"cat", "cat"},
  {"var-name", "var-name"},
  {"op", "op"},
  {"error", "error"},
  {"for", "for"},
  {"var-type", "var-type"},
  {"rev!", "rev!"},
  {"while", "while"},
  {"opf", "opf"},
  {"need-implementation", "need-implementation"},
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

extern void load_module_gooSboot (void);

/* EXPRESSION: */

extern void load_module_gooSmacros (void);

void load_module_gooSmacros (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();

  (P)YgooSmacrosY___main_0___();
  (P)YgooSmacrosY___main_1___();

}

/* END OF GENERATED CODE. */
