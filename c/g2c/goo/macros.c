/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ynul,"goo/boot","nul");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ylst,"goo/boot","lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhead,"goo/boot","head");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ynot,"goo/boot","not");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ynil,"goo/boot","nil");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ynew,"goo/boot","new");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YPprop,"goo/boot","%prop");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPisa,"goo/boot","%isa");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLflatG,"goo/boot","<flat>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_34);
DEFLIT(lit_164);
DEFLIT(lit_131);
DEFLIT(lit_24);
DEFLIT(lit_63);
DEFLIT(lit_22);
DEFLIT(lit_68);
DEFLIT(lit_15);
DEFLIT(lit_130);
DEFLIT(lit_92);
DEFLIT(lit_169);
DEFLIT(lit_61);
DEFLIT(lit_144);
DEFLIT(lit_71);
DEFLIT(lit_91);
DEFLIT(lit_127);
DEFLIT(lit_128);
DEFLIT(lit_134);
DEFLIT(lit_36);
DEFLIT(lit_110);
DEFLIT(lit_120);
DEFLIT(lit_170);
DEFLIT(lit_155);
DEFLIT(lit_18);
DEFLIT(lit_143);
DEFLIT(lit_126);
DEFLIT(lit_64);
DEFLIT(lit_5);
DEFLIT(lit_77);
DEFLIT(lit_28);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_23);
DEFLIT(lit_85);
DEFLIT(lit_106);
DEFLIT(lit_78);
DEFLIT(lit_82);
DEFLIT(lit_2);
DEFLIT(lit_27);
DEFLIT(lit_40);
DEFLIT(lit_168);
DEFLIT(lit_79);
DEFLIT(lit_132);
DEFLIT(lit_41);
DEFLIT(lit_31);
DEFLIT(lit_129);
DEFLIT(lit_73);
DEFLIT(lit_133);
DEFLIT(lit_72);
DEFLIT(lit_57);
DEFLIT(lit_109);
DEFLIT(lit_123);
DEFLIT(lit_62);
DEFLIT(lit_52);
DEFLIT(lit_147);
DEFLIT(lit_16);
DEFLIT(lit_138);
DEFLIT(lit_101);
DEFLIT(lit_14);
DEFLIT(lit_88);
DEFLIT(lit_105);
DEFLIT(lit_19);
DEFLIT(lit_6);
DEFLIT(lit_137);
DEFLIT(lit_86);
DEFLIT(lit_84);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_89);
DEFLIT(lit_49);
DEFLIT(lit_157);
DEFLIT(lit_94);
DEFLIT(lit_116);
DEFLIT(lit_107);
DEFLIT(lit_140);
DEFLIT(lit_141);
DEFLIT(lit_83);
DEFLIT(lit_39);
DEFLIT(lit_67);
DEFLIT(lit_46);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_76);
DEFLIT(lit_161);
DEFLIT(lit_117);
DEFLIT(lit_87);
DEFLIT(lit_152);
DEFLIT(lit_60);
DEFLIT(lit_119);
DEFLIT(lit_97);
DEFLIT(lit_153);
DEFLIT(lit_96);
DEFLIT(lit_172);
DEFLIT(lit_1);
DEFLIT(lit_30);
DEFLIT(lit_173);
DEFLIT(lit_174);
DEFLIT(lit_148);
DEFLIT(lit_125);
DEFLIT(lit_70);
DEFLIT(lit_42);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_98);
DEFLIT(lit_7);
DEFLIT(lit_102);
DEFLIT(lit_154);
DEFLIT(lit_54);
DEFLIT(lit_37);
DEFLIT(lit_121);
DEFLIT(lit_142);
DEFLIT(lit_156);
DEFLIT(lit_104);
DEFLIT(lit_66);
DEFLIT(lit_45);
DEFLIT(lit_115);
DEFLIT(lit_150);
DEFLIT(lit_151);
DEFLIT(lit_8);
DEFLIT(lit_112);
DEFLIT(lit_118);
DEFLIT(lit_21);
DEFLIT(lit_43);
DEFLIT(lit_167);
DEFLIT(lit_113);
DEFLIT(lit_38);
DEFLIT(lit_65);
DEFLIT(lit_111);
DEFLIT(lit_163);
DEFLIT(lit_159);
DEFLIT(lit_149);
DEFLIT(lit_139);
DEFLIT(lit_100);
DEFLIT(lit_146);
DEFLIT(lit_93);
DEFLIT(lit_95);
DEFLIT(lit_74);
DEFLIT(lit_51);
DEFLIT(lit_99);
DEFLIT(lit_44);
DEFLIT(lit_25);
DEFLIT(lit_53);
DEFLIT(lit_160);
DEFLIT(lit_103);
DEFLIT(lit_124);
DEFLIT(lit_55);
DEFLIT(lit_114);
DEFLIT(lit_69);
DEFLIT(lit_162);
DEFLIT(lit_50);
DEFLIT(lit_90);
DEFLIT(lit_20);
DEFLIT(lit_29);
DEFLIT(lit_32);
DEFLIT(lit_11);
DEFLIT(lit_26);
DEFLIT(lit_145);
DEFLIT(lit_12);
DEFLIT(lit_135);
DEFLIT(lit_17);
DEFLIT(lit_108);
DEFLIT(lit_166);
DEFLIT(lit_165);
DEFLIT(lit_171);
DEFLIT(lit_35);
DEFLIT(lit_158);
DEFLIT(lit_59);
DEFLIT(lit_13);
DEFLIT(lit_80);
DEFLIT(lit_56);
DEFLIT(lit_81);
DEFLIT(lit_33);
DEFLIT(lit_136);
DEFLIT(lit_122);
DEFLIT(lit_58);

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
  P x_1075F452;
  P x_1075F451;
  P argsF450;
  P x_1075F449;
  P x_1076F448;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_0,1);
  x_1076F448 = T1;
  FUNINIT(x_1076F448, 1,return_);
  x_1075F449 = FREEREF(0);
  argsF450 = YPfalse;
  argsF450 = BOXFAB(argsF450);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F449,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F449,LITREF(lit_5),x_1076F448);
    x_1075F451 = T7;
    BOXVAL(argsF450) = x_1075F451;
    x_1075F452 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F452,x_1076F448);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1076F448,LITREF(lit_6),x_1075F449);
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
  T36 = BOXVAL(argsF450);
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
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T21,Ynil);
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
  P x_1079F457;
  P x_1079F456;
  P argsF455;
  P x_1079F454;
  P x_1080F453;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_3,1);
  x_1080F453 = T1;
  FUNINIT(x_1080F453, 1,return_);
  x_1079F454 = FREEREF(0);
  argsF455 = YPfalse;
  argsF455 = BOXFAB(argsF455);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F454,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F454,LITREF(lit_18),x_1080F453);
    x_1079F456 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1079F456,x_1080F453);
    BOXVAL(argsF455) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1079F456);
    x_1079F457 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F457,x_1080F453);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1080F453,LITREF(lit_6),x_1079F454);
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
  T39 = BOXVAL(argsF455);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T28 = CALLN(1,VARREF(YgooSmacrosYcat),5,T29,T30,T34,T38,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T24 = CALLN(1,VARREF(YgooSmacrosYcat),5,T25,T26,T27,T40,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T23,Ynil);
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
  P x_1083F464;
  P x_1083F463;
  P x_1083F462;
  P argsF461;
  P fF460;
  P x_1083F459;
  P x_1084F458;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_6,1);
  x_1084F458 = T1;
  FUNINIT(x_1084F458, 1,return_);
  x_1083F459 = FREEREF(0);
  fF460 = YPfalse;
  fF460 = BOXFAB(fF460);
  argsF461 = YPfalse;
  argsF461 = BOXFAB(argsF461);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F459,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F459,LITREF(lit_21),x_1084F458);
    x_1083F462 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F462,x_1084F458);
    BOXVAL(fF460) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F462);
    x_1083F463 = T12;
    BOXVAL(argsF461) = x_1083F463;
    x_1083F464 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F464,x_1084F458);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1084F458,LITREF(lit_6),x_1083F459);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF460);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF461);
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
  P nameF472;
  P x_1087F471;
  P x_1087F470;
  P x_1087F469;
  P x_1087F468;
  P bodyF467;
  P x_1087F466;
  P x_1088F465;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_9,1);
  x_1088F465 = T1;
  FUNINIT(x_1088F465, 1,return_);
  x_1087F466 = FREEREF(0);
  bodyF467 = YPfalse;
  bodyF467 = BOXFAB(bodyF467);
  T5 = CALL2(1,VARREF(YisaQ),x_1087F466,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F466,LITREF(lit_23),x_1088F465);
    x_1087F468 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1087F468,x_1088F465);
    x_1087F469 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F469,x_1088F465);
    T11 = CALL1(1,VARREF(Ytail),x_1087F468);
    x_1087F470 = T11;
    BOXVAL(bodyF467) = x_1087F470;
    x_1087F471 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F471,x_1088F465);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1088F465,LITREF(lit_6),x_1087F466);
  }
  nameF472 = LITREF(lit_24);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T22 = CALL1(1,VARREF(Ylst),nameF472);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T26 = CALL1(1,VARREF(Ylst),Ynil);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T27 = BOXVAL(bodyF467);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T31 = CALL1(1,VARREF(Ylst),nameF472);
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
  P nameF478;
  P x_1091F477;
  P x_1091F476;
  P valueF475;
  P x_1091F474;
  P x_1092F473;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1092_12,1);
  x_1092F473 = T1;
  FUNINIT(x_1092F473, 1,return_);
  x_1091F474 = FREEREF(0);
  valueF475 = YPfalse;
  valueF475 = BOXFAB(valueF475);
  T5 = CALL2(1,VARREF(YisaQ),x_1091F474,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1091F474,LITREF(lit_27),x_1092F473);
    x_1091F476 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1091F476,x_1092F473);
    BOXVAL(valueF475) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1091F476);
    x_1091F477 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1091F477,x_1092F473);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1092F473,LITREF(lit_6),x_1091F474);
  }
  nameF478 = LITREF(lit_24);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T16 = CALL1(1,VARREF(Ylst),nameF478);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T21 = BOXVAL(valueF475);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),nameF478);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T17,Ynil);
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
  P x_1095F483;
  P x_1095F482;
  P nameF481;
  P x_1095F480;
  P x_1096F479;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_15,1);
  x_1096F479 = T1;
  FUNINIT(x_1096F479, 1,return_);
  x_1095F480 = FREEREF(0);
  nameF481 = YPfalse;
  nameF481 = BOXFAB(nameF481);
  T5 = CALL2(1,VARREF(YisaQ),x_1095F480,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1095F480,LITREF(lit_25),x_1096F479);
    x_1095F482 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F482,x_1096F479);
    BOXVAL(nameF481) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1095F482);
    x_1095F483 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F483,x_1096F479);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1096F479,LITREF(lit_6),x_1095F480);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T16 = BOXVAL(nameF481);
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
  P valF484;
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
    valF484 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(1));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF484);
    T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T15,Ynil);
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
  P setsF494;
  P loopF493;
  P varF492;
  P x_1099F491;
  P x_1099F490;
  P x_1099F489;
  P prop_initsF488;
  P xF487;
  P x_1099F486;
  P x_1100F485;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1100_18,1);
  x_1100F485 = T1;
  FUNINIT(x_1100F485, 1,return_);
  x_1099F486 = FREEREF(0);
  xF487 = YPfalse;
  xF487 = BOXFAB(xF487);
  prop_initsF488 = YPfalse;
  prop_initsF488 = BOXFAB(prop_initsF488);
  T7 = CALL2(1,VARREF(YisaQ),x_1099F486,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1099F486,LITREF(lit_33),x_1100F485);
    x_1099F489 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1099F489,x_1100F485);
    BOXVAL(xF487) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1099F489);
    x_1099F490 = T12;
    BOXVAL(prop_initsF488) = x_1099F490;
    x_1099F491 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1099F491,x_1100F485);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1100F485,LITREF(lit_6),x_1099F486);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF492 = T17;
  T20 = FUNSHELL(1,fun_loop_19,2);
  loopF493 = T20;
  FUNINIT(loopF493, 2,loopF493,varF492);
  T22 = BOXVAL(prop_initsF488);
  T21 = CALL2(0,loopF493,Ynil,T22);
  T19 = T21;
  setsF494 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF492);
  T31 = BOXVAL(xF487);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF492);
  T23 = CALLN(1,VARREF(YgooSmacrosYcat),5,T24,T25,setsF494,T32,Ynil);
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
  P gF498;
  P g_argsF497;
  P g_declsF496;
  P tup3F495;
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
    tup3F495 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F495,YPint((P)0));
    g_declsF496 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F495,YPint((P)1));
    g_argsF497 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF498 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF498);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF496);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF498,g_argsF497);
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
  P g_argsF502;
  P g_declsF501;
  P tup4F500;
  P munchF499;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_22,1);
  munchF499 = T1;
  FUNINIT(munchF499, 1,munchF499);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF499,T7);
    tup4F500 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F500,YPint((P)0));
    g_declsF501 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F500,YPint((P)1));
    g_argsF502 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF502);
    T12 = CALL2(1,VARREF(Ytup),g_declsF501,T13);
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
  P x_1107F506;
  P amountF505;
  P x_1107F504;
  P x_1108F503;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F503 = T1;
  FUNINIT(x_1108F503, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1107F504 = T3;
  amountF505 = YPfalse;
  amountF505 = BOXFAB(amountF505);
  T6 = CALL2(1,VARREF(YisaQ),x_1107F504,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F504,x_1108F503);
    BOXVAL(amountF505) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1107F504);
    x_1107F506 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F506,x_1108F503);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1108F503,LITREF(lit_6),x_1107F504);
  }
  T12 = BOXVAL(amountF505);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P amountF517;
  P g_placeF516;
  P g_declsF515;
  P tup6F514;
  P x_1105F513;
  P x_1105F512;
  P x_1105F511;
  P amountF510;
  P placeF509;
  P x_1105F508;
  P x_1106F507;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1106_24,1);
  x_1106F507 = T1;
  FUNINIT(x_1106F507, 1,return_);
  x_1105F508 = FREEREF(0);
  placeF509 = YPfalse;
  placeF509 = BOXFAB(placeF509);
  amountF510 = YPfalse;
  amountF510 = BOXFAB(amountF510);
  T7 = CALL2(1,VARREF(YisaQ),x_1105F508,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1105F508,LITREF(lit_42),x_1106F507);
    x_1105F511 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1105F511,x_1106F507);
    BOXVAL(placeF509) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1105F511);
    x_1105F512 = T12;
    BOXVAL(amountF510) = x_1105F512;
    x_1105F513 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1105F513,x_1106F507);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1106F507,LITREF(lit_6),x_1105F508);
  }
  T18 = BOXVAL(placeF509);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup6F514 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F514,YPint((P)0));
  g_declsF515 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F514,YPint((P)1));
  g_placeF516 = T22;
  T25 = FUNFAB(fun_26,1,amountF510);
  T24 = with_exit(T25);
  amountF517 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF515,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF516);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T37 = CALL1(1,VARREF(Ylst),g_placeF516);
  T38 = CALL1(1,VARREF(Ylst),amountF517);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T30,Ynil);
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
  P x_1115F521;
  P amountF520;
  P x_1115F519;
  P x_1116F518;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_30,1);
  x_1116F518 = T1;
  FUNINIT(x_1116F518, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1115F519 = T3;
  amountF520 = YPfalse;
  amountF520 = BOXFAB(amountF520);
  T6 = CALL2(1,VARREF(YisaQ),x_1115F519,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F519,x_1116F518);
    BOXVAL(amountF520) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1115F519);
    x_1115F521 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F521,x_1116F518);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1116F518,LITREF(lit_6),x_1115F519);
  }
  T12 = BOXVAL(amountF520);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P amountF532;
  P g_placeF531;
  P g_declsF530;
  P tup8F529;
  P x_1113F528;
  P x_1113F527;
  P x_1113F526;
  P amountF525;
  P placeF524;
  P x_1113F523;
  P x_1114F522;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1114_29,1);
  x_1114F522 = T1;
  FUNINIT(x_1114F522, 1,return_);
  x_1113F523 = FREEREF(0);
  placeF524 = YPfalse;
  placeF524 = BOXFAB(placeF524);
  amountF525 = YPfalse;
  amountF525 = BOXFAB(amountF525);
  T7 = CALL2(1,VARREF(YisaQ),x_1113F523,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1113F523,LITREF(lit_46),x_1114F522);
    x_1113F526 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1113F526,x_1114F522);
    BOXVAL(placeF524) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1113F526);
    x_1113F527 = T12;
    BOXVAL(amountF525) = x_1113F527;
    x_1113F528 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1113F528,x_1114F522);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1114F522,LITREF(lit_6),x_1113F523);
  }
  T18 = BOXVAL(placeF524);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup8F529 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F529,YPint((P)0));
  g_declsF530 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F529,YPint((P)1));
  g_placeF531 = T22;
  T25 = FUNFAB(fun_31,1,amountF525);
  T24 = with_exit(T25);
  amountF532 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF530,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF531);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T37 = CALL1(1,VARREF(Ylst),g_placeF531);
  T38 = CALL1(1,VARREF(Ylst),amountF532);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T30,Ynil);
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
  P g_placeF542;
  P g_declsF541;
  P tup10F540;
  P x_1119F539;
  P x_1119F538;
  P x_1119F537;
  P valueF536;
  P placeF535;
  P x_1119F534;
  P x_1120F533;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_34,1);
  x_1120F533 = T1;
  FUNINIT(x_1120F533, 1,return_);
  x_1119F534 = FREEREF(0);
  placeF535 = YPfalse;
  placeF535 = BOXFAB(placeF535);
  valueF536 = YPfalse;
  valueF536 = BOXFAB(valueF536);
  T7 = CALL2(1,VARREF(YisaQ),x_1119F534,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F534,LITREF(lit_50),x_1120F533);
    x_1119F537 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F537,x_1120F533);
    BOXVAL(placeF535) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1119F537);
    x_1119F538 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F538,x_1120F533);
    BOXVAL(valueF536) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1119F538);
    x_1119F539 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F539,x_1120F533);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1120F533,LITREF(lit_6),x_1119F534);
  }
  T20 = BOXVAL(placeF535);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup10F540 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F540,YPint((P)0));
  g_declsF541 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F540,YPint((P)1));
  g_placeF542 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF541,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T32 = CALL1(1,VARREF(Ylst),g_placeF542);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T36 = CALL1(1,VARREF(Ylst),g_placeF542);
  T38 = BOXVAL(valueF536);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T29,Ynil);
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
  P tmpF556;
  P yg_placeF555;
  P yg_declsF554;
  P tup14F553;
  P xg_placeF552;
  P xg_declsF551;
  P tup13F550;
  P x_1123F549;
  P x_1123F548;
  P x_1123F547;
  P yF546;
  P xF545;
  P x_1123F544;
  P x_1124F543;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_37,1);
  x_1124F543 = T1;
  FUNINIT(x_1124F543, 1,return_);
  x_1123F544 = FREEREF(0);
  xF545 = YPfalse;
  xF545 = BOXFAB(xF545);
  yF546 = YPfalse;
  yF546 = BOXFAB(yF546);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F544,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F544,LITREF(lit_53),x_1124F543);
    x_1123F547 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F547,x_1124F543);
    BOXVAL(xF545) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F547);
    x_1123F548 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F548,x_1124F543);
    BOXVAL(yF546) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1123F548);
    x_1123F549 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F549,x_1124F543);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1124F543,LITREF(lit_6),x_1123F544);
  }
  T20 = BOXVAL(xF545);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup13F550 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F550,YPint((P)0));
  xg_declsF551 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F550,YPint((P)1));
  xg_placeF552 = T24;
  T27 = BOXVAL(yF546);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup14F553 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F553,YPint((P)0));
  yg_declsF554 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F553,YPint((P)1));
  yg_placeF555 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF556 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF556);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF552);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF551,yg_declsF554,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF552);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF555);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF555);
  T51 = CALL1(1,VARREF(Ylst),tmpF556);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T51,Ynil);
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
  P valF566;
  P new_colF565;
  P g_placeF564;
  P g_declsF563;
  P tup16F562;
  P x_1127F561;
  P x_1127F560;
  P placeF559;
  P x_1127F558;
  P x_1128F557;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_40,1);
  x_1128F557 = T1;
  FUNINIT(x_1128F557, 1,return_);
  x_1127F558 = FREEREF(0);
  placeF559 = YPfalse;
  placeF559 = BOXFAB(placeF559);
  T5 = CALL2(1,VARREF(YisaQ),x_1127F558,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F558,LITREF(lit_55),x_1128F557);
    x_1127F560 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F560,x_1128F557);
    BOXVAL(placeF559) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1127F560);
    x_1127F561 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F561,x_1128F557);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1128F557,LITREF(lit_6),x_1127F558);
  }
  T15 = BOXVAL(placeF559);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup16F562 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F562,YPint((P)0));
  g_declsF563 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F562,YPint((P)1));
  g_placeF564 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF565 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF566 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T33 = CALL1(1,VARREF(Ylst),new_colF565);
  T34 = CALL1(1,VARREF(Ylst),valF566);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T38 = CALL1(1,VARREF(Ylst),g_placeF564);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF563,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T42 = CALL1(1,VARREF(Ylst),g_placeF564);
  T43 = CALL1(1,VARREF(Ylst),new_colF565);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF566);
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
  P g_placeF576;
  P g_declsF575;
  P tup18F574;
  P x_1131F573;
  P x_1131F572;
  P x_1131F571;
  P callF570;
  P placeF569;
  P x_1131F568;
  P x_1132F567;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1132_43,1);
  x_1132F567 = T1;
  FUNINIT(x_1132F567, 1,return_);
  x_1131F568 = FREEREF(0);
  placeF569 = YPfalse;
  placeF569 = BOXFAB(placeF569);
  callF570 = YPfalse;
  callF570 = BOXFAB(callF570);
  T7 = CALL2(1,VARREF(YisaQ),x_1131F568,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F568,LITREF(lit_59),x_1132F567);
    x_1131F571 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F571,x_1132F567);
    BOXVAL(placeF569) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1131F571);
    x_1131F572 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F572,x_1132F567);
    BOXVAL(callF570) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1131F572);
    x_1131F573 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F573,x_1132F567);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1132F567,LITREF(lit_6),x_1131F568);
  }
  T20 = BOXVAL(placeF569);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup18F574 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F574,YPint((P)0));
  g_declsF575 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F574,YPint((P)1));
  g_placeF576 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T32 = CALL1(1,VARREF(Ylst),g_placeF576);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF575,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T36 = CALL1(1,VARREF(Ylst),g_placeF576);
  T38 = BOXVAL(callF570);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T33,Ynil);
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
  P x_1135F583;
  P x_1135F582;
  P x_1135F581;
  P bodyF580;
  P testF579;
  P x_1135F578;
  P x_1136F577;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1136_46,1);
  x_1136F577 = T1;
  FUNINIT(x_1136F577, 1,return_);
  x_1135F578 = FREEREF(0);
  testF579 = YPfalse;
  testF579 = BOXFAB(testF579);
  bodyF580 = YPfalse;
  bodyF580 = BOXFAB(bodyF580);
  T7 = CALL2(1,VARREF(YisaQ),x_1135F578,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F578,LITREF(lit_62),x_1136F577);
    x_1135F581 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1135F581,x_1136F577);
    BOXVAL(testF579) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1135F581);
    x_1135F582 = T12;
    BOXVAL(bodyF580) = x_1135F582;
    x_1135F583 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F583,x_1136F577);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1136F577,LITREF(lit_6),x_1135F578);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T22 = BOXVAL(testF579);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T26 = BOXVAL(bodyF580);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T23,Ynil);
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
  P x_1139F590;
  P x_1139F589;
  P x_1139F588;
  P bodyF587;
  P testF586;
  P x_1139F585;
  P x_1140F584;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_49,1);
  x_1140F584 = T1;
  FUNINIT(x_1140F584, 1,return_);
  x_1139F585 = FREEREF(0);
  testF586 = YPfalse;
  testF586 = BOXFAB(testF586);
  bodyF587 = YPfalse;
  bodyF587 = BOXFAB(bodyF587);
  T7 = CALL2(1,VARREF(YisaQ),x_1139F585,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1139F585,LITREF(lit_66),x_1140F584);
    x_1139F588 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1139F588,x_1140F584);
    BOXVAL(testF586) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1139F588);
    x_1139F589 = T12;
    BOXVAL(bodyF587) = x_1139F589;
    x_1139F590 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F590,x_1140F584);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1140F584,LITREF(lit_6),x_1139F585);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF586);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF587);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
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
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1151F592;
  P x_1152F591;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_54,3);
  x_1152F591 = T1;
  FUNINIT(x_1152F591, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1151F592 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1151F592,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F592,x_1152F591);
  } else {
    T6 = CALL2(1,x_1152F591,LITREF(lit_6),x_1151F592);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1149F598;
  P x_1149F597;
  P restF596;
  P xF595;
  P x_1149F594;
  P x_1150F593;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_53,1);
  x_1150F593 = T1;
  FUNINIT(x_1150F593, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1149F594 = T3;
  xF595 = YPfalse;
  xF595 = BOXFAB(xF595);
  restF596 = YPfalse;
  restF596 = BOXFAB(restF596);
  T8 = CALL2(1,VARREF(YisaQ),x_1149F594,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1149F594,x_1150F593);
    BOXVAL(xF595) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1149F594);
    x_1149F597 = T11;
    BOXVAL(restF596) = x_1149F597;
    x_1149F598 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1149F598,x_1150F593);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1150F593,LITREF(lit_6),x_1149F594);
  }
  T16 = FUNFAB(fun_55,2,xF595,restF596);
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
  P x_1147F603;
  P x_1147F602;
  P restF601;
  P x_1147F600;
  P x_1148F599;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_52,1);
  x_1148F599 = T1;
  FUNINIT(x_1148F599, 1,return_);
  x_1147F600 = FREEREF(0);
  restF601 = YPfalse;
  restF601 = BOXFAB(restF601);
  T5 = CALL2(1,VARREF(YisaQ),x_1147F600,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F600,LITREF(lit_68),x_1148F599);
    x_1147F602 = T7;
    BOXVAL(restF601) = x_1147F602;
    x_1147F603 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F603,x_1148F599);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1148F599,LITREF(lit_6),x_1147F600);
  }
  T12 = FUNFAB(fun_56,1,restF601);
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
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1163F605;
  P x_1164F604;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1164_61,3);
  x_1164F604 = T1;
  FUNINIT(x_1164F604, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_1163F605 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1163F605,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1163F605,x_1164F604);
  } else {
    T6 = CALL2(1,x_1164F604,LITREF(lit_6),x_1163F605);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1161F611;
  P x_1161F610;
  P restF609;
  P xF608;
  P x_1161F607;
  P x_1162F606;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1162_60,1);
  x_1162F606 = T1;
  FUNINIT(x_1162F606, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1161F607 = T3;
  xF608 = YPfalse;
  xF608 = BOXFAB(xF608);
  restF609 = YPfalse;
  restF609 = BOXFAB(restF609);
  T8 = CALL2(1,VARREF(YisaQ),x_1161F607,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1161F607,x_1162F606);
    BOXVAL(xF608) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1161F607);
    x_1161F610 = T11;
    BOXVAL(restF609) = x_1161F610;
    x_1161F611 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F611,x_1162F606);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1162F606,LITREF(lit_6),x_1161F607);
  }
  T16 = FUNFAB(fun_62,2,xF608,restF609);
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
  P x_1159F616;
  P x_1159F615;
  P restF614;
  P x_1159F613;
  P x_1160F612;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_59,1);
  x_1160F612 = T1;
  FUNINIT(x_1160F612, 1,return_);
  x_1159F613 = FREEREF(0);
  restF614 = YPfalse;
  restF614 = BOXFAB(restF614);
  T5 = CALL2(1,VARREF(YisaQ),x_1159F613,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1159F613,LITREF(lit_73),x_1160F612);
    x_1159F615 = T7;
    BOXVAL(restF614) = x_1159F615;
    x_1159F616 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F616,x_1160F612);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1160F612,LITREF(lit_6),x_1159F613);
  }
  T12 = FUNFAB(fun_63,1,restF614);
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
  P x_1171F622;
  P x_1171F621;
  P bodyF620;
  P condF619;
  P x_1171F618;
  P x_1172F617;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_67,2);
  x_1172F617 = T1;
  FUNINIT(x_1172F617, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1171F618 = T3;
  condF619 = YPfalse;
  condF619 = BOXFAB(condF619);
  bodyF620 = YPfalse;
  bodyF620 = BOXFAB(bodyF620);
  T9 = CALL2(1,VARREF(YisaQ),x_1171F618,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F618,x_1172F617);
    BOXVAL(condF619) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1171F618);
    x_1171F621 = T12;
    BOXVAL(bodyF620) = x_1171F621;
    x_1171F622 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F622,x_1172F617);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1172F617,LITREF(lit_6),x_1171F618);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF619);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF620);
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
  P x_1169F627;
  P x_1169F626;
  P casesF625;
  P x_1169F624;
  P x_1170F623;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_66,1);
  x_1170F623 = T1;
  FUNINIT(x_1170F623, 1,return_);
  x_1169F624 = FREEREF(0);
  casesF625 = YPfalse;
  casesF625 = BOXFAB(casesF625);
  T5 = CALL2(1,VARREF(YisaQ),x_1169F624,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1169F624,LITREF(lit_77),x_1170F623);
    x_1169F626 = T7;
    BOXVAL(casesF625) = x_1169F626;
    x_1169F627 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F627,x_1170F623);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1170F623,LITREF(lit_6),x_1169F624);
  }
  T13 = BOXVAL(casesF625);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_68,1,casesF625);
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
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P x_1179F631;
  P valuesF630;
  P x_1179F629;
  P x_1180F628;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_72,2);
  x_1180F628 = T1;
  FUNINIT(x_1180F628, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  x_1179F629 = T3;
  valuesF630 = YPfalse;
  valuesF630 = BOXFAB(valuesF630);
  T6 = CALL2(1,VARREF(YisaQ),x_1179F629,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF630) = x_1179F629;
    x_1179F631 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F631,x_1180F628);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1180F628,LITREF(lit_6),x_1179F629);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T16 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF630);
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
  P x_1177F637;
  P x_1177F636;
  P bodyF635;
  P condF634;
  P x_1177F633;
  P x_1178F632;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1178_71,2);
  x_1178F632 = T1;
  FUNINIT(x_1178F632, 2,return_,FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1177F633 = T3;
  condF634 = YPfalse;
  condF634 = BOXFAB(condF634);
  bodyF635 = YPfalse;
  bodyF635 = BOXFAB(bodyF635);
  T8 = CALL2(1,VARREF(YisaQ),x_1177F633,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1177F633,x_1178F632);
    BOXVAL(condF634) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1177F633);
    x_1177F636 = T11;
    BOXVAL(bodyF635) = x_1177F636;
    x_1177F637 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1177F637,x_1178F632);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1178F632,LITREF(lit_6),x_1177F633);
  }
  T17 = BOXVAL(condF634);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T20 = BOXVAL(bodyF635);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_74,5,FREEREF(0),condF634,FREEREF(1),FREEREF(2),bodyF635);
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
  P tst_varF648;
  P val_varF647;
  P x_1183F646;
  P x_1183F645;
  P x_1183F644;
  P x_1183F643;
  P casesF642;
  P tstF641;
  P valF640;
  P x_1183F639;
  P x_1184F638;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1184_77,1);
  x_1184F638 = T1;
  FUNINIT(x_1184F638, 1,return_);
  x_1183F639 = FREEREF(0);
  valF640 = YPfalse;
  valF640 = BOXFAB(valF640);
  tstF641 = YPfalse;
  tstF641 = BOXFAB(tstF641);
  casesF642 = YPfalse;
  casesF642 = BOXFAB(casesF642);
  T9 = CALL2(1,VARREF(YisaQ),x_1183F639,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1183F639,LITREF(lit_90),x_1184F638);
    x_1183F643 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F643,x_1184F638);
    BOXVAL(valF640) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1183F643);
    x_1183F644 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F644,x_1184F638);
    BOXVAL(tstF641) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1183F644);
    x_1183F645 = T17;
    BOXVAL(casesF642) = x_1183F645;
    x_1183F646 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F646,x_1184F638);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1184F638,LITREF(lit_6),x_1183F639);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF647 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF648 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF647);
  T33 = BOXVAL(valF640);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF648);
  T38 = BOXVAL(tstF641);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF642);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF647,tst_varF648,T41);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T39,Ynil);
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
  P x_1187F655;
  P x_1187F654;
  P x_1187F653;
  P casesF652;
  P valF651;
  P x_1187F650;
  P x_1188F649;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_80,1);
  x_1188F649 = T1;
  FUNINIT(x_1188F649, 1,return_);
  x_1187F650 = FREEREF(0);
  valF651 = YPfalse;
  valF651 = BOXFAB(valF651);
  casesF652 = YPfalse;
  casesF652 = BOXFAB(casesF652);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F650,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F650,LITREF(lit_92),x_1188F649);
    x_1187F653 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F653,x_1188F649);
    BOXVAL(valF651) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F653);
    x_1187F654 = T12;
    BOXVAL(casesF652) = x_1187F654;
    x_1187F655 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F655,x_1188F649);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1188F649,LITREF(lit_6),x_1187F650);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T19 = BOXVAL(valF651);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T21 = BOXVAL(casesF652);
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
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T5,Ynil);
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
  P tmpF657;
  P tmpF656;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF656 = T2;
  if (tmpF656 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF657 = T1;
  if (tmpF657 != YPfalse) {
    T5 = tmpF657;
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
  P yF660;
  P spliceQF659;
  P varF658;
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
    varF658 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF658,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF658;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_87;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF659 = T10;
      T14 = FUNFAB(fun_88,2,FREEREF(0),vars_);
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF660 = T13;
      if (spliceQF659 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF660);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
        T24 = CALL1(1,VARREF(Ytail),yF660);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF660;
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
  P argsF673;
  P exprF672;
  P varsF671;
  P walk_opF670;
  P rest_opQF669;
  P spliceF668;
  P x_1191F667;
  P x_1191F666;
  P x_1191F665;
  P argsF664;
  P fF663;
  P x_1191F662;
  P x_1192F661;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_83,1);
  x_1192F661 = T1;
  FUNINIT(x_1192F661, 1,return_);
  x_1191F662 = FREEREF(0);
  fF663 = YPfalse;
  fF663 = BOXFAB(fF663);
  argsF664 = YPfalse;
  argsF664 = BOXFAB(argsF664);
  T7 = CALL2(1,VARREF(YisaQ),x_1191F662,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F662,LITREF(lit_95),x_1192F661);
    x_1191F665 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F665,x_1192F661);
    BOXVAL(fF663) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1191F665);
    x_1191F666 = T12;
    BOXVAL(argsF664) = x_1191F666;
    x_1191F667 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F667,x_1192F661);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1192F661,LITREF(lit_6),x_1191F662);
  }
  T17 = fun_splice_85;
  spliceF668 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_86,1);
  rest_opQF669 = T18;
  T19 = FUNSHELL(1,fun_walk_op_89,2);
  walk_opF670 = T19;
  FUNINIT(rest_opQF669, 1,rest_opQF669);
  FUNINIT(walk_opF670, 2,walk_opF670,spliceF668);
  T22 = BOXVAL(argsF664);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF663);
    T24 = CALL2(1,VARREF(YgooSmacrosYEE),T25,LITREF(lit_60));
    if (T24 != YPfalse) {
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T31 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T31,Ynil);
      T23 = T26;
    } else {
      T33 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
      T38 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
      T39 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
      T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T39,Ynil);
      T36 = CALL1(1,VARREF(Ylst),T37);
      T35 = CALL2(1,VARREF(YgooSmacrosYcat),T36,Ynil);
      T34 = CALL1(1,VARREF(Ylst),T35);
      T41 = BOXVAL(fF663);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF671 = T43;
    T48 = BOXVAL(fF663);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF664);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF670,varsF671,T46);
    exprF672 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF671);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF664);
    T55 = CALL1(1,rest_opQF669,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_109);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF673 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
    T59 = CALL1(1,VARREF(Ylst),argsF673);
    T60 = CALL1(1,VARREF(Ylst),exprF672);
    T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
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
  P varF684;
  P x_1203F683;
  P x_1203F682;
  P x_1203F681;
  P x_1203F680;
  P x_1203F679;
  P restF678;
  P thenF677;
  P patF676;
  P x_1203F675;
  P x_1204F674;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_93,1);
  x_1204F674 = T1;
  FUNINIT(x_1204F674, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1203F675 = T3;
  patF676 = YPfalse;
  patF676 = BOXFAB(patF676);
  thenF677 = YPfalse;
  thenF677 = BOXFAB(thenF677);
  restF678 = YPfalse;
  restF678 = BOXFAB(restF678);
  T10 = CALL2(1,VARREF(YisaQ),x_1203F675,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F675,x_1204F674);
    x_1203F679 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1203F679,x_1204F674);
    BOXVAL(patF676) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1203F679);
    x_1203F680 = T15;
    BOXVAL(thenF677) = x_1203F680;
    x_1203F681 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F681,x_1204F674);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1203F675);
    x_1203F682 = T18;
    BOXVAL(restF678) = x_1203F682;
    x_1203F683 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F683,x_1204F674);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1204F674,LITREF(lit_6),x_1203F675);
  }
  T24 = BOXVAL(patF676);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T27 = BOXVAL(thenF677);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF684 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF684);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
    T45 = BOXVAL(patF676);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF684);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T50 = BOXVAL(thenF677);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
    T54 = CALL1(1,VARREF(Ylst),varF684);
    T55 = BOXVAL(restF678);
    T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,Ynil);
    T51 = CALL1(1,VARREF(Ylst),T52);
    T40 = CALLN(1,VARREF(YgooSmacrosYcat),5,T41,T42,T47,T51,Ynil);
    T39 = CALL1(1,VARREF(Ylst),T40);
    T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T39,Ynil);
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
  P x_1201F686;
  P x_1202F685;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1202_95,3);
  x_1202F685 = T1;
  FUNINIT(x_1202F685, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1201F686 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1201F686,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1201F686,x_1202F685);
  } else {
    T6 = CALL2(1,x_1202F685,LITREF(lit_6),x_1201F686);
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
  P x_1199F693;
  P x_1199F692;
  P x_1199F691;
  P casesF690;
  P expF689;
  P x_1199F688;
  P x_1200F687;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1200_92,1);
  x_1200F687 = T1;
  FUNINIT(x_1200F687, 1,return_);
  x_1199F688 = FREEREF(0);
  expF689 = YPfalse;
  expF689 = BOXFAB(expF689);
  casesF690 = YPfalse;
  casesF690 = BOXFAB(casesF690);
  T7 = CALL2(1,VARREF(YisaQ),x_1199F688,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1199F688,LITREF(lit_111),x_1200F687);
    x_1199F691 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F691,x_1200F687);
    BOXVAL(expF689) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1199F691);
    x_1199F692 = T12;
    BOXVAL(casesF690) = x_1199F692;
    x_1199F693 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F693,x_1200F687);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1200F687,LITREF(lit_6),x_1199F688);
  }
  T17 = FUNFAB(fun_96,2,casesF690,expF689);
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
  P x_1207F702;
  P x_1207F701;
  P x_1207F700;
  P x_1207F699;
  P argsF698;
  P messageF697;
  P condF696;
  P x_1207F695;
  P x_1208F694;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_99,1);
  x_1208F694 = T1;
  FUNINIT(x_1208F694, 1,return_);
  x_1207F695 = FREEREF(0);
  condF696 = YPfalse;
  condF696 = BOXFAB(condF696);
  messageF697 = YPfalse;
  messageF697 = BOXFAB(messageF697);
  argsF698 = YPfalse;
  argsF698 = BOXFAB(argsF698);
  T9 = CALL2(1,VARREF(YisaQ),x_1207F695,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F695,LITREF(lit_118),x_1208F694);
    x_1207F699 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F699,x_1208F694);
    BOXVAL(condF696) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1207F699);
    x_1207F700 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F700,x_1208F694);
    BOXVAL(messageF697) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1207F700);
    x_1207F701 = T17;
    BOXVAL(argsF698) = x_1207F701;
    x_1207F702 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F702,x_1208F694);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1208F694,LITREF(lit_6),x_1207F695);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T27 = BOXVAL(condF696);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF697);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF698);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T33,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T28,Ynil);
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
  P x_1219F709;
  P x_1219F708;
  P x_1219F707;
  P valF706;
  P keyF705;
  P x_1219F704;
  P x_1220F703;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1220_104,3);
  x_1220F703 = T1;
  FUNINIT(x_1220F703, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1219F704 = T3;
  keyF705 = YPfalse;
  keyF705 = BOXFAB(keyF705);
  valF706 = YPfalse;
  valF706 = BOXFAB(valF706);
  T8 = CALL2(1,VARREF(YisaQ),x_1219F704,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F704,LITREF(lit_56),x_1220F703);
    x_1219F707 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F707,x_1220F703);
    BOXVAL(keyF705) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1219F707);
    x_1219F708 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F708,x_1220F703);
    BOXVAL(valF706) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1219F708);
    x_1219F709 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F709,x_1220F703);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1220F703,LITREF(lit_6),x_1219F704);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T24 = BOXVAL(keyF705);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF706);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T25,Ynil);
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
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T34,Ynil);
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
  P stateF716;
  P x_1217F715;
  P x_1217F714;
  P expF713;
  P varF712;
  P x_1217F711;
  P x_1218F710;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1218_103,1);
  x_1218F710 = T1;
  FUNINIT(x_1218F710, 1,return_);
  x_1217F711 = FREEREF(0);
  varF712 = YPfalse;
  varF712 = BOXFAB(varF712);
  expF713 = YPfalse;
  expF713 = BOXFAB(expF713);
  T7 = CALL2(1,VARREF(YisaQ),x_1217F711,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1217F711,x_1218F710);
    BOXVAL(varF712) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1217F711);
    x_1217F714 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1217F714,x_1218F710);
    BOXVAL(expF713) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1217F714);
    x_1217F715 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1217F715,x_1218F710);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1218F710,LITREF(lit_6),x_1217F711);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF716 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(2));
  T22 = CALL1(1,VARREF(Ylst),stateF716);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_128));
  T27 = BOXVAL(expF713);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(3));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_129));
  T31 = CALL1(1,VARREF(Ylst),stateF716);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(4));
  T34 = FUNFAB(fun_105,2,varF712,stateF716);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(5));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_133));
  T38 = CALL1(1,VARREF(Ylst),stateF716);
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
  P clauseF718;
  P loopF717;
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
    loopF717 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
    T6 = CALL1(1,VARREF(Ylst),loopF717);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF717);
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,nexts_,Ynil);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T15 = CALLN(1,VARREF(YgooSmacrosYcat),5,T16,T17,T18,T19,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T14,Ynil);
    T8 = CALL1(1,VARREF(Ylst),T9);
    T4 = CALLN(1,VARREF(YgooSmacrosYcat),5,T5,T6,T7,T8,Ynil);
    T2 = T4;
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF718 = T23;
    T25 = FUNFAB(fun_106,7,clauseF718,FREEREF(1),clauses_,inits_,preds_,nows_,nexts_);
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P return_;
  P grokF728;
  P x_1215F727;
  P x_1215F726;
  P x_1215F725;
  P x_1215F724;
  P x_1215F723;
  P bodyF722;
  P clausesF721;
  P x_1215F720;
  P x_1216F719;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_102,1);
  x_1216F719 = T1;
  FUNINIT(x_1216F719, 1,return_);
  x_1215F720 = FREEREF(0);
  clausesF721 = YPfalse;
  clausesF721 = BOXFAB(clausesF721);
  bodyF722 = YPfalse;
  bodyF722 = BOXFAB(bodyF722);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F720,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F720,LITREF(lit_120),x_1216F719);
    x_1215F723 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F723,x_1216F719);
    x_1215F724 = T11;
    BOXVAL(clausesF721) = x_1215F724;
    x_1215F725 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F725,x_1216F719);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1215F723);
    x_1215F726 = T14;
    BOXVAL(bodyF722) = x_1215F726;
    x_1215F727 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F727,x_1216F719);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1216F719,LITREF(lit_6),x_1215F720);
  }
  T19 = FUNSHELL(1,fun_grok_107,2);
  grokF728 = T19;
  FUNINIT(grokF728, 2,bodyF722,grokF728);
  T21 = BOXVAL(clausesF721);
  T20 = CALLN(0,grokF728,5,T21,Ynil,Ynil,Ynil,Ynil);
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
  P x_1223F735;
  P x_1223F734;
  P x_1223F733;
  P bodyF732;
  P testF731;
  P x_1223F730;
  P x_1224F729;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1224_110,1);
  x_1224F729 = T1;
  FUNINIT(x_1224F729, 1,return_);
  x_1223F730 = FREEREF(0);
  testF731 = YPfalse;
  testF731 = BOXFAB(testF731);
  bodyF732 = YPfalse;
  bodyF732 = BOXFAB(bodyF732);
  T7 = CALL2(1,VARREF(YisaQ),x_1223F730,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1223F730,LITREF(lit_135),x_1224F729);
    x_1223F733 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1223F733,x_1224F729);
    BOXVAL(testF731) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1223F733);
    x_1223F734 = T12;
    BOXVAL(bodyF732) = x_1223F734;
    x_1223F735 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F735,x_1224F729);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1224F729,LITREF(lit_6),x_1223F730);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T24 = BOXVAL(testF731);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF732);
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
  P x_1227F742;
  P x_1227F741;
  P x_1227F740;
  P bodyF739;
  P testF738;
  P x_1227F737;
  P x_1228F736;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_113,1);
  x_1228F736 = T1;
  FUNINIT(x_1228F736, 1,return_);
  x_1227F737 = FREEREF(0);
  testF738 = YPfalse;
  testF738 = BOXFAB(testF738);
  bodyF739 = YPfalse;
  bodyF739 = BOXFAB(bodyF739);
  T7 = CALL2(1,VARREF(YisaQ),x_1227F737,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F737,LITREF(lit_138),x_1228F736);
    x_1227F740 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F740,x_1228F736);
    BOXVAL(testF738) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1227F740);
    x_1227F741 = T12;
    BOXVAL(bodyF739) = x_1227F741;
    x_1227F742 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F742,x_1228F736);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1228F736,LITREF(lit_6),x_1227F737);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T24 = BOXVAL(testF738);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF739);
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
  P x_1231F749;
  P x_1231F748;
  P x_1231F747;
  P expF746;
  P bindingF745;
  P x_1231F744;
  P x_1232F743;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_116,1);
  x_1232F743 = T1;
  FUNINIT(x_1232F743, 1,return_);
  x_1231F744 = FREEREF(0);
  bindingF745 = YPfalse;
  bindingF745 = BOXFAB(bindingF745);
  expF746 = YPfalse;
  expF746 = BOXFAB(expF746);
  T7 = CALL2(1,VARREF(YisaQ),x_1231F744,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1231F744,LITREF(lit_140),x_1232F743);
    x_1231F747 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F747,x_1232F743);
    BOXVAL(bindingF745) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1231F747);
    x_1231F748 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F748,x_1232F743);
    BOXVAL(expF746) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F748);
    x_1231F749 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F749,x_1232F743);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1232F743,LITREF(lit_6),x_1231F744);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T21 = BOXVAL(bindingF745);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF746);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
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
  P old_valueF761;
  P nameF760;
  P x_1243F759;
  P x_1243F758;
  P x_1243F757;
  P x_1243F756;
  P x_1243F755;
  P restF754;
  P valueF753;
  P varF752;
  P x_1243F751;
  P x_1244F750;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1244_120,2);
  x_1244F750 = T1;
  FUNINIT(x_1244F750, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  x_1243F751 = T3;
  varF752 = YPfalse;
  varF752 = BOXFAB(varF752);
  valueF753 = YPfalse;
  valueF753 = BOXFAB(valueF753);
  restF754 = YPfalse;
  restF754 = BOXFAB(restF754);
  T10 = CALL2(1,VARREF(YisaQ),x_1243F751,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F751,x_1244F750);
    x_1243F755 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1243F755,x_1244F750);
    BOXVAL(varF752) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1243F755);
    x_1243F756 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1243F756,x_1244F750);
    BOXVAL(valueF753) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1243F756);
    x_1243F757 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F757,x_1244F750);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1243F751);
    x_1243F758 = T20;
    BOXVAL(restF754) = x_1243F758;
    x_1243F759 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F759,x_1244F750);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1244F750,LITREF(lit_6),x_1243F751);
  }
  T26 = BOXVAL(varF752);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF760 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF761 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF761);
  T36 = CALL1(1,VARREF(Ylst),nameF760);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_147));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T46 = CALL1(1,VARREF(Ylst),nameF760);
  T48 = BOXVAL(valueF753);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T54 = BOXVAL(restF754);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T59 = CALL1(1,VARREF(Ylst),nameF760);
  T60 = CALL1(1,VARREF(Ylst),old_valueF761);
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T56,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T37,Ynil);
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
  P x_1241F763;
  P x_1242F762;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1242_122,3);
  x_1242F762 = T1;
  FUNINIT(x_1242F762, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_1241F763 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1241F763,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1241F763,x_1242F762);
  } else {
    T6 = CALL2(1,x_1242F762,LITREF(lit_6),x_1241F763);
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
  P x_1239F770;
  P x_1239F769;
  P x_1239F768;
  P bodyF767;
  P bindingsF766;
  P x_1239F765;
  P x_1240F764;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_119,1);
  x_1240F764 = T1;
  FUNINIT(x_1240F764, 1,return_);
  x_1239F765 = FREEREF(0);
  bindingsF766 = YPfalse;
  bindingsF766 = BOXFAB(bindingsF766);
  bodyF767 = YPfalse;
  bodyF767 = BOXFAB(bodyF767);
  T7 = CALL2(1,VARREF(YisaQ),x_1239F765,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F765,LITREF(lit_143),x_1240F764);
    x_1239F768 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1239F768,x_1240F764);
    BOXVAL(bindingsF766) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1239F768);
    x_1239F769 = T12;
    BOXVAL(bodyF767) = x_1239F769;
    x_1239F770 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F770,x_1240F764);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1240F764,LITREF(lit_6),x_1239F765);
  }
  T17 = FUNFAB(fun_123,2,bindingsF766,bodyF767);
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
  P vnamF780;
  P typF779;
  P namF778;
  P x_1247F777;
  P x_1247F776;
  P x_1247F775;
  P valueF774;
  P varF773;
  P x_1247F772;
  P x_1248F771;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1248_126,1);
  x_1248F771 = T1;
  FUNINIT(x_1248F771, 1,return_);
  x_1247F772 = FREEREF(0);
  varF773 = YPfalse;
  varF773 = BOXFAB(varF773);
  valueF774 = YPfalse;
  valueF774 = BOXFAB(valueF774);
  T7 = CALL2(1,VARREF(YisaQ),x_1247F772,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1247F772,LITREF(lit_149),x_1248F771);
    x_1247F775 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F775,x_1248F771);
    BOXVAL(varF773) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1247F775);
    x_1247F776 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F776,x_1248F771);
    BOXVAL(valueF774) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1247F776);
    x_1247F777 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1247F777,x_1248F771);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1248F771,LITREF(lit_6),x_1247F772);
  }
  T20 = BOXVAL(varF773);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF778 = T19;
  T23 = BOXVAL(varF773);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF779 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_150),namF778,LITREF(lit_151));
  vnamF780 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T31 = CALL1(1,VARREF(Ylst),vnamF780);
  T33 = BOXVAL(valueF774);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T37 = CALL1(1,VARREF(Ylst),namF778);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T41 = CALL1(1,VARREF(Ylst),typF779);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF780);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF778);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T53 = CALL1(1,VARREF(Ylst),typF779);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T57 = CALL1(1,VARREF(Ylst),vnamF780);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
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
  P x_1251F785;
  P x_1251F784;
  P bodyF783;
  P x_1251F782;
  P x_1252F781;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1252_129,1);
  x_1252F781 = T1;
  FUNINIT(x_1252F781, 1,return_);
  x_1251F782 = FREEREF(0);
  bodyF783 = YPfalse;
  bodyF783 = BOXFAB(bodyF783);
  T5 = CALL2(1,VARREF(YisaQ),x_1251F782,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1251F782,LITREF(lit_156),x_1252F781);
    x_1251F784 = T7;
    BOXVAL(bodyF783) = x_1251F784;
    x_1251F785 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1251F785,x_1252F781);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1252F781,LITREF(lit_6),x_1251F782);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF783);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T19,Ynil);
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
  P x_1255F790;
  P x_1255F789;
  P namesF788;
  P x_1255F787;
  P x_1256F786;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1256_132,1);
  x_1256F786 = T1;
  FUNINIT(x_1256F786, 1,return_);
  x_1255F787 = FREEREF(0);
  namesF788 = YPfalse;
  namesF788 = BOXFAB(namesF788);
  T5 = CALL2(1,VARREF(YisaQ),x_1255F787,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1255F787,LITREF(lit_159),x_1256F786);
    x_1255F789 = T7;
    BOXVAL(namesF788) = x_1255F789;
    x_1255F790 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1255F790,x_1256F786);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1256F786,LITREF(lit_6),x_1255F787);
  }
  T13 = BOXVAL(namesF788);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF788);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
    T28 = BOXVAL(namesF788);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
    T33 = BOXVAL(namesF788);
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
  P x_1295F794;
  P nameF793;
  P x_1295F792;
  P x_1296F791;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1296_136,1);
  x_1296F791 = T1;
  FUNINIT(x_1296F791, 1,return_);
  x_1295F792 = FREEREF(0);
  nameF793 = YPfalse;
  nameF793 = BOXFAB(nameF793);
  T5 = CALL2(1,VARREF(YisaQ),x_1295F792,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1295F792,x_1296F791);
    BOXVAL(nameF793) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1295F792);
    x_1295F794 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1295F794,x_1296F791);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1296F791,LITREF(lit_6),x_1295F792);
  }
  T13 = BOXVAL(nameF793);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF793);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
    T21 = BOXVAL(nameF793);
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
  P x_1294F795;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1294F795 = FREEREF(1);
  T3 = FUNFAB(fun_137,1,x_1294F795);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P return_;
  P x_1292F802;
  P x_1292F801;
  P x_1292F800;
  P restF799;
  P nameF798;
  P x_1292F797;
  P x_1293F796;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1293_138,2);
  x_1293F796 = T1;
  FUNINIT(x_1293F796, 2,return_,FREEREF(0));
  x_1292F797 = FREEREF(0);
  nameF798 = YPfalse;
  nameF798 = BOXFAB(nameF798);
  restF799 = YPfalse;
  restF799 = BOXFAB(restF799);
  T7 = CALL2(1,VARREF(YisaQ),x_1292F797,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1292F797,LITREF(lit_169),x_1293F796);
    x_1292F800 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1292F800,x_1293F796);
    BOXVAL(nameF798) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1292F800);
    x_1292F801 = T12;
    BOXVAL(restF799) = x_1292F801;
    x_1292F802 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1292F802,x_1293F796);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1293F796,LITREF(lit_6),x_1292F797);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF798);
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
  P x_1291F803;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1291F803 = FREEREF(1);
  T3 = FUNFAB(fun_139,2,x_1291F803,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P return_;
  P x_1289F810;
  P x_1289F809;
  P x_1289F808;
  P restF807;
  P nameF806;
  P x_1289F805;
  P x_1290F804;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1290_140,3);
  x_1290F804 = T1;
  FUNINIT(x_1290F804, 3,return_,FREEREF(0),FREEREF(1));
  x_1289F805 = FREEREF(0);
  nameF806 = YPfalse;
  nameF806 = BOXFAB(nameF806);
  restF807 = YPfalse;
  restF807 = BOXFAB(restF807);
  T7 = CALL2(1,VARREF(YisaQ),x_1289F805,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1289F805,LITREF(lit_170),x_1290F804);
    x_1289F808 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1289F808,x_1290F804);
    BOXVAL(nameF806) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1289F808);
    x_1289F809 = T12;
    BOXVAL(restF807) = x_1289F809;
    x_1289F810 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1289F810,x_1290F804);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1290F804,LITREF(lit_6),x_1289F805);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF806);
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
  P x_1288F811;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1288F811 = FREEREF(1);
  T3 = FUNFAB(fun_141,2,x_1288F811,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P return_;
  P x_1286F818;
  P x_1286F817;
  P x_1286F816;
  P restF815;
  P nameF814;
  P x_1286F813;
  P x_1287F812;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1287_142,3);
  x_1287F812 = T1;
  FUNINIT(x_1287F812, 3,return_,FREEREF(0),FREEREF(1));
  x_1286F813 = FREEREF(0);
  nameF814 = YPfalse;
  nameF814 = BOXFAB(nameF814);
  restF815 = YPfalse;
  restF815 = BOXFAB(restF815);
  T7 = CALL2(1,VARREF(YisaQ),x_1286F813,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1286F813,LITREF(lit_141),x_1287F812);
    x_1286F816 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1286F816,x_1287F812);
    BOXVAL(nameF814) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1286F816);
    x_1286F817 = T12;
    BOXVAL(restF815) = x_1286F817;
    x_1286F818 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1286F818,x_1287F812);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1287F812,LITREF(lit_6),x_1286F813);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF814);
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
  P x_1285F819;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1285F819 = FREEREF(1);
  T3 = FUNFAB(fun_143,2,x_1285F819,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  P return_;
  P x_1283F826;
  P x_1283F825;
  P x_1283F824;
  P restF823;
  P nameF822;
  P x_1283F821;
  P x_1284F820;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_144,3);
  x_1284F820 = T1;
  FUNINIT(x_1284F820, 3,return_,FREEREF(0),FREEREF(1));
  x_1283F821 = FREEREF(0);
  nameF822 = YPfalse;
  nameF822 = BOXFAB(nameF822);
  restF823 = YPfalse;
  restF823 = BOXFAB(restF823);
  T7 = CALL2(1,VARREF(YisaQ),x_1283F821,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F821,LITREF(lit_171),x_1284F820);
    x_1283F824 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1283F824,x_1284F820);
    BOXVAL(nameF822) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1283F824);
    x_1283F825 = T12;
    BOXVAL(restF823) = x_1283F825;
    x_1283F826 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F826,x_1284F820);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1284F820,LITREF(lit_6),x_1283F821);
  }
  T18 = BOXVAL(nameF822);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF822);
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
  P x_1282F827;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1282F827 = FREEREF(1);
  T3 = FUNFAB(fun_145,2,x_1282F827,FREEREF(2));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_147) {
  P return_;
  P x_1280F834;
  P x_1280F833;
  P x_1280F832;
  P restF831;
  P nameF830;
  P x_1280F829;
  P x_1281F828;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1281_146,3);
  x_1281F828 = T1;
  FUNINIT(x_1281F828, 3,return_,FREEREF(0),FREEREF(1));
  x_1280F829 = FREEREF(0);
  nameF830 = YPfalse;
  nameF830 = BOXFAB(nameF830);
  restF831 = YPfalse;
  restF831 = BOXFAB(restF831);
  T7 = CALL2(1,VARREF(YisaQ),x_1280F829,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1280F829,LITREF(lit_172),x_1281F828);
    x_1280F832 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1280F832,x_1281F828);
    BOXVAL(nameF830) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1280F832);
    x_1280F833 = T12;
    BOXVAL(restF831) = x_1280F833;
    x_1280F834 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F834,x_1281F828);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1281F828,LITREF(lit_6),x_1280F829);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T23 = BOXVAL(nameF830);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T29 = BOXVAL(nameF830);
  T28 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T29);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T19,T24,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  P return_;
  P defsF841;
  P x_1279F840;
  P x_1277F839;
  P x_1277F838;
  P defF837;
  P x_1277F836;
  P x_1278F835;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1278_135,1);
  x_1278F835 = T1;
  FUNINIT(x_1278F835, 1,return_);
  x_1277F836 = FREEREF(0);
  defF837 = YPfalse;
  defF837 = BOXFAB(defF837);
  T5 = CALL2(1,VARREF(YisaQ),x_1277F836,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1277F836,LITREF(lit_162),x_1278F835);
    x_1277F838 = T7;
    BOXVAL(defF837) = x_1277F838;
    x_1277F839 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F839,x_1278F835);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1278F835,LITREF(lit_6),x_1277F836);
  }
  T13 = BOXVAL(defF837);
  x_1279F840 = T13;
  T15 = FUNFAB(fun_147,2,x_1279F840,defF837);
  T14 = with_exit(T15);
  T12 = T14;
  defsF841 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF841,Ynil);
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
  P xF842;
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
  xF842 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF842,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_152) {
  P return_;
  P x_1299F847;
  P x_1299F846;
  P defsF845;
  P x_1299F844;
  P x_1300F843;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1300_150,1);
  x_1300F843 = T1;
  FUNINIT(x_1300F843, 1,return_);
  x_1299F844 = FREEREF(0);
  defsF845 = YPfalse;
  defsF845 = BOXFAB(defsF845);
  T5 = CALL2(1,VARREF(YisaQ),x_1299F844,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1299F844,LITREF(lit_174),x_1300F843);
    x_1299F846 = T7;
    BOXVAL(defsF845) = x_1299F846;
    x_1299F847 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1299F847,x_1300F843);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1300F843,LITREF(lit_6),x_1299F844);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T14 = fun_151;
  T15 = BOXVAL(defsF845);
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
  P tmpF861;
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
  lit_51 = YPPsym((P)"push!");
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
  lit_57 = YPPsym((P)"pop!");
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
  tmpF848 = YPfalse;
  if (tmpF848 != YPfalse) {
    T189 = VARREF(YgooSmacrosYEE);
  } else {
    T189 = YPfalse;
  }
  tmpF849 = YPfalse;
  if (tmpF849 != YPfalse) {
    T190 = VARREF(YgooSmacrosYdo);
  } else {
    T190 = YPfalse;
  }
  tmpF850 = YPfalse;
  if (tmpF850 != YPfalse) {
    T191 = VARREF(YgooSmacrosYrevX);
  } else {
    T191 = YPfalse;
  }
  tmpF851 = YPfalse;
  if (tmpF851 != YPfalse) {
    T192 = VARREF(YgooSmacrosYcat);
  } else {
    T192 = YPfalse;
  }
  tmpF852 = YPfalse;
  if (tmpF852 != YPfalse) {
    T193 = VARREF(YgooSmacrosYelt);
  } else {
    T193 = YPfalse;
  }
  tmpF853 = YPfalse;
  if (tmpF853 != YPfalse) {
    T194 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T194 = YPfalse;
  }
  tmpF854 = YPfalse;
  if (tmpF854 != YPfalse) {
    T195 = VARREF(Yerror);
  } else {
    T195 = YPfalse;
  }
  tmpF855 = YPfalse;
  if (tmpF855 != YPfalse) {
    T196 = VARREF(YgooSmacrosYgensym);
  } else {
    T196 = YPfalse;
  }
  tmpF856 = YPfalse;
  if (tmpF856 != YPfalse) {
    T197 = VARREF(Ylst);
  } else {
    T197 = YPfalse;
  }
  tmpF857 = YPfalse;
  if (tmpF857 != YPfalse) {
    T198 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T198 = YPfalse;
  }
  tmpF858 = YPfalse;
  if (tmpF858 != YPfalse) {
    T199 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T199 = YPfalse;
  }
  tmpF859 = YPfalse;
  if (tmpF859 != YPfalse) {
    T200 = VARREF(YgooSmacrosYmap);
  } else {
    T200 = YPfalse;
  }
  tmpF860 = YPfalse;
  if (tmpF860 != YPfalse) {
    T201 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T201 = YPfalse;
  }
  tmpF861 = YPfalse;
  if (tmpF861 != YPfalse) {
    T202 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T202 = YPfalse;
  }
  T203 = YPfalse;
  return T203;
}

P YgooSmacrosY___main_1___() {
  P tmpF868;
  P tmpF867;
  P tmpF866;
  P tmpF865;
  P tmpF864;
  P tmpF863;
  P tmpF862;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  tmpF862 = YPfalse;
  if (tmpF862 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T0 = YPfalse;
  }
  tmpF863 = YPfalse;
  if (tmpF863 != YPfalse) {
    T1 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T1 = YPfalse;
  }
  tmpF864 = YPfalse;
  if (tmpF864 != YPfalse) {
    T2 = VARREF(YgooSmacrosYpair);
  } else {
    T2 = YPfalse;
  }
  tmpF865 = YPfalse;
  if (tmpF865 != YPfalse) {
    T3 = VARREF(Ytup);
  } else {
    T3 = YPfalse;
  }
  tmpF866 = YPfalse;
  if (tmpF866 != YPfalse) {
    T4 = VARREF(YgooSmacrosYvar_name);
  } else {
    T4 = YPfalse;
  }
  tmpF867 = YPfalse;
  if (tmpF867 != YPfalse) {
    T5 = VARREF(YgooSmacrosYvar_type);
  } else {
    T5 = YPfalse;
  }
  tmpF868 = YPfalse;
  if (tmpF868 != YPfalse) {
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
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"tup", &module_info_gooSboot, "tup"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"ct", &module_info_gooSboot, "ct"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"seq", &module_info_gooSboot, "seq"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"@<", &module_info_gooSboot, "@<"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"head", &module_info_gooSboot, "head"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%get", &module_info_gooSboot, "%get"},
  {"def", &module_info_gooSboot, "def"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"if", &module_info_gooSboot, "if"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"not", &module_info_gooSboot, "not"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"try", &module_info_gooSboot, "try"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"df", &module_info_gooSboot, "df"},
  {"let", &module_info_gooSboot, "let"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"isa", &module_info_gooSboot, "isa"},
  {"dv", &module_info_gooSboot, "dv"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"dg", &module_info_gooSboot, "dg"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ds", &module_info_gooSboot, "ds"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"dc", &module_info_gooSboot, "dc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"export", &module_info_gooSboot, "export"},
  {"new", &module_info_gooSboot, "new"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fin", &module_info_gooSboot, "fin"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"collect", NULL},
  {"while", NULL},
  {"swapf", NULL},
  {"match-atom", &YgooSmacrosYmatch_atom},
  {"lift-place-subforms", &YgooSmacrosYlift_place_subforms},
  {"dlet", NULL},
  {"fab-setter-name", &YgooSmacrosYfab_setter_name},
  {"app", NULL},
  {"popf", NULL},
  {"cond", NULL},
  {"match-unquote", &YgooSmacrosYmatch_unquote},
  {"and", NULL},
  {"match", NULL},
  {"def-fun-var", NULL},
  {"when", NULL},
  {"---main-1---", NULL},
  {"pub", NULL},
  {"assert", NULL},
  {"incf", NULL},
  {"rev!", &YgooSmacrosYrevX},
  {"until", NULL},
  {"elt", &YgooSmacrosYelt},
  {"==", &YgooSmacrosYEE},
  {"match-empty-list", &YgooSmacrosYmatch_empty_list},
  {"case", NULL},
  {"do-case-by", &YgooSmacrosYdo_case_by},
  {"napp", &YgooSmacrosYnapp},
  {"decf", NULL},
  {"empty?", &YgooSmacrosYemptyQ},
  {"without-prop-unbound-errors", NULL},
  {"unless", NULL},
  {"---main-0---", NULL},
  {"collected", NULL},
  {"cat", &YgooSmacrosYcat},
  {"exported", NULL},
  {"collecting", NULL},
  {"do", &YgooSmacrosYdo},
  {"for", NULL},
  {"cat-sym", &YgooSmacrosYcat_sym},
  {"app-sup", NULL},
  {"sup", NULL},
  {"var-name", &YgooSmacrosYvar_name},
  {"map", &YgooSmacrosYmap},
  {"ddv", NULL},
  {"renew", NULL},
  {"op", NULL},
  {"gensym", &YgooSmacrosYgensym},
  {"var-type", &YgooSmacrosYvar_type},
  {"match-sublist", &YgooSmacrosYmatch_sublist},
  {"opf", NULL},
  {"pair", &YgooSmacrosYpair},
  {"need-implementation", NULL},
  {"pushf", NULL},
  {"case-by", NULL},
  {"or", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"collect", "collect"},
  {"while", "while"},
  {"tup", "tup"},
  {"swapf", "swapf"},
  {"match-atom", "match-atom"},
  {"dlet", "dlet"},
  {"fab-setter-name", "fab-setter-name"},
  {"popf", "popf"},
  {"app", "app"},
  {"cond", "cond"},
  {"match-unquote", "match-unquote"},
  {"and", "and"},
  {"match", "match"},
  {"def-fun-var", "def-fun-var"},
  {"when", "when"},
  {"pub", "pub"},
  {"error", "error"},
  {"assert", "assert"},
  {"incf", "incf"},
  {"rev!", "rev!"},
  {"until", "until"},
  {"elt", "elt"},
  {"==", "=="},
  {"match-empty-list", "match-empty-list"},
  {"lst", "lst"},
  {"case", "case"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"napp", "napp"},
  {"decf", "decf"},
  {"empty?", "empty?"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"unless", "unless"},
  {"collected", "collected"},
  {"cat", "cat"},
  {"exported", "exported"},
  {"collecting", "collecting"},
  {"do", "do"},
  {"for", "for"},
  {"cat-sym", "cat-sym"},
  {"app-sup", "app-sup"},
  {"sup", "sup"},
  {"var-name", "var-name"},
  {"map", "map"},
  {"ddv", "ddv"},
  {"renew", "renew"},
  {"op", "op"},
  {"gensym", "gensym"},
  {"var-type", "var-type"},
  {"match-sublist", "match-sublist"},
  {"opf", "opf"},
  {"pair", "pair"},
  {"need-implementation", "need-implementation"},
  {"pushf", "pushf"},
  {"case-by", "case-by"},
  {"or", "or"},
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
