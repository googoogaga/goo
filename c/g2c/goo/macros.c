/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YtT,"goo/boot","t*");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YPprop,"goo/boot","%prop");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLintG,"goo/boot","<int>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ynew,"goo/boot","new");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ynul,"goo/boot","nul");
EXT(YDmin_int,"goo/boot","$min-int");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_160);
DEFLIT(lit_37);
DEFLIT(lit_135);
DEFLIT(lit_58);
DEFLIT(lit_100);
DEFLIT(lit_151);
DEFLIT(lit_62);
DEFLIT(lit_110);
DEFLIT(lit_48);
DEFLIT(lit_41);
DEFLIT(lit_47);
DEFLIT(lit_49);
DEFLIT(lit_143);
DEFLIT(lit_86);
DEFLIT(lit_134);
DEFLIT(lit_56);
DEFLIT(lit_118);
DEFLIT(lit_92);
DEFLIT(lit_4);
DEFLIT(lit_121);
DEFLIT(lit_104);
DEFLIT(lit_98);
DEFLIT(lit_0);
DEFLIT(lit_113);
DEFLIT(lit_29);
DEFLIT(lit_7);
DEFLIT(lit_63);
DEFLIT(lit_161);
DEFLIT(lit_32);
DEFLIT(lit_71);
DEFLIT(lit_55);
DEFLIT(lit_19);
DEFLIT(lit_91);
DEFLIT(lit_36);
DEFLIT(lit_12);
DEFLIT(lit_108);
DEFLIT(lit_133);
DEFLIT(lit_2);
DEFLIT(lit_152);
DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_40);
DEFLIT(lit_84);
DEFLIT(lit_77);
DEFLIT(lit_132);
DEFLIT(lit_159);
DEFLIT(lit_138);
DEFLIT(lit_85);
DEFLIT(lit_16);
DEFLIT(lit_1);
DEFLIT(lit_117);
DEFLIT(lit_154);
DEFLIT(lit_24);
DEFLIT(lit_126);
DEFLIT(lit_103);
DEFLIT(lit_142);
DEFLIT(lit_149);
DEFLIT(lit_26);
DEFLIT(lit_163);
DEFLIT(lit_64);
DEFLIT(lit_28);
DEFLIT(lit_5);
DEFLIT(lit_125);
DEFLIT(lit_90);
DEFLIT(lit_127);
DEFLIT(lit_61);
DEFLIT(lit_128);
DEFLIT(lit_148);
DEFLIT(lit_96);
DEFLIT(lit_14);
DEFLIT(lit_23);
DEFLIT(lit_153);
DEFLIT(lit_158);
DEFLIT(lit_137);
DEFLIT(lit_136);
DEFLIT(lit_69);
DEFLIT(lit_97);
DEFLIT(lit_145);
DEFLIT(lit_147);
DEFLIT(lit_54);
DEFLIT(lit_53);
DEFLIT(lit_46);
DEFLIT(lit_139);
DEFLIT(lit_83);
DEFLIT(lit_75);
DEFLIT(lit_162);
DEFLIT(lit_6);
DEFLIT(lit_116);
DEFLIT(lit_21);
DEFLIT(lit_78);
DEFLIT(lit_66);
DEFLIT(lit_102);
DEFLIT(lit_35);
DEFLIT(lit_27);
DEFLIT(lit_88);
DEFLIT(lit_122);
DEFLIT(lit_39);
DEFLIT(lit_81);
DEFLIT(lit_72);
DEFLIT(lit_124);
DEFLIT(lit_95);
DEFLIT(lit_13);
DEFLIT(lit_60);
DEFLIT(lit_112);
DEFLIT(lit_157);
DEFLIT(lit_18);
DEFLIT(lit_3);
DEFLIT(lit_51);
DEFLIT(lit_44);
DEFLIT(lit_10);
DEFLIT(lit_52);
DEFLIT(lit_45);
DEFLIT(lit_68);
DEFLIT(lit_82);
DEFLIT(lit_74);
DEFLIT(lit_120);
DEFLIT(lit_80);
DEFLIT(lit_8);
DEFLIT(lit_115);
DEFLIT(lit_155);
DEFLIT(lit_20);
DEFLIT(lit_131);
DEFLIT(lit_65);
DEFLIT(lit_101);
DEFLIT(lit_94);
DEFLIT(lit_34);
DEFLIT(lit_99);
DEFLIT(lit_105);
DEFLIT(lit_17);
DEFLIT(lit_109);
DEFLIT(lit_38);
DEFLIT(lit_31);
DEFLIT(lit_59);
DEFLIT(lit_141);
DEFLIT(lit_150);
DEFLIT(lit_25);
DEFLIT(lit_111);
DEFLIT(lit_123);
DEFLIT(lit_42);
DEFLIT(lit_67);
DEFLIT(lit_50);
DEFLIT(lit_43);
DEFLIT(lit_87);
DEFLIT(lit_9);
DEFLIT(lit_119);
DEFLIT(lit_93);
DEFLIT(lit_89);
DEFLIT(lit_73);
DEFLIT(lit_106);
DEFLIT(lit_140);
DEFLIT(lit_107);
DEFLIT(lit_129);
DEFLIT(lit_114);
DEFLIT(lit_30);
DEFLIT(lit_130);
DEFLIT(lit_70);
DEFLIT(lit_76);
DEFLIT(lit_33);
DEFLIT(lit_22);
DEFLIT(lit_146);
DEFLIT(lit_156);
DEFLIT(lit_79);
DEFLIT(lit_57);
DEFLIT(lit_144);

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
LOCFOR(fun_loop_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_munch_13);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1094_15);
LOCFOR(fun_x_1096_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1102_20);
LOCFOR(fun_x_1104_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1108_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1112_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1116_31);
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
LOCFOR(fun_x_1136_43);
LOCFOR(fun_x_1138_44);
LOCFOR(fun_x_1140_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1148_50);
LOCFOR(fun_x_1150_51);
LOCFOR(fun_x_1152_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_x_1158_57);
LOCFOR(fun_x_1160_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1166_62);
LOCFOR(fun_x_1168_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1172_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1176_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1180_74);
LOCFOR(fun_75);
LOCFOR(fun_splice_76);
LOCFOR(fun_rest_opQ_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_walk_op_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1188_83);
LOCFOR(fun_x_1192_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1190_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1196_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_1204_93);
LOCFOR(fun_x_1206_94);
LOCFOR(fun_x_1208_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_1212_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_1216_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1224_107);
LOCFOR(fun_x_1228_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1226_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_x_1232_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_1236_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1240_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1262_123);
LOCFOR(fun_x_1280_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1277_126);
LOCFOR(fun_127);
LOCFOR(fun_x_1274_128);
LOCFOR(fun_129);
LOCFOR(fun_x_1271_130);
LOCFOR(fun_131);
LOCFOR(fun_x_1268_132);
LOCFOR(fun_133);
LOCFOR(fun_x_1265_134);
LOCFOR(fun_135);
LOCFOR(fun_136);
LOCFOR(fun_137);
LOCFOR(fun_x_1284_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_141);
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
  P x_1075F474;
  P x_1075F473;
  P argsF472;
  P x_1075F471;
  P x_1076F470;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_0,1);
  x_1076F470 = T1;
  FUNINIT(x_1076F470, 1,return_);
  x_1075F471 = FREEREF(0);
  argsF472 = YPfalse;
  argsF472 = BOXFAB(argsF472);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F471,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F471,LITREF(lit_5),x_1076F470);
    x_1075F473 = T7;
    BOXVAL(argsF472) = x_1075F473;
    x_1075F474 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F474,x_1076F470);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1076F470,LITREF(lit_6),x_1075F471);
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
  T36 = BOXVAL(argsF472);
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
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T25,T41,Ynil);
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
  P T0,T1;
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
  P x_1079F479;
  P x_1079F478;
  P argsF477;
  P x_1079F476;
  P x_1080F475;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_3,1);
  x_1080F475 = T1;
  FUNINIT(x_1080F475, 1,return_);
  x_1079F476 = FREEREF(0);
  argsF477 = YPfalse;
  argsF477 = BOXFAB(argsF477);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F476,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F476,LITREF(lit_18),x_1080F475);
    x_1079F478 = T7;
    BOXVAL(argsF477) = x_1079F478;
    x_1079F479 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F479,x_1080F475);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1080F475,LITREF(lit_6),x_1079F476);
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
  T36 = BOXVAL(argsF477);
  T26 = CALL5(1,VARREF(YgooSmacrosYcat),T27,T28,T32,T36,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T25,T37,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T21,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P exp_;
  P T0,T1;
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
  P x_1083F486;
  P x_1083F485;
  P x_1083F484;
  P argsF483;
  P fF482;
  P x_1083F481;
  P x_1084F480;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_6,1);
  x_1084F480 = T1;
  FUNINIT(x_1084F480, 1,return_);
  x_1083F481 = FREEREF(0);
  fF482 = YPfalse;
  fF482 = BOXFAB(fF482);
  argsF483 = YPfalse;
  argsF483 = BOXFAB(argsF483);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F481,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F481,LITREF(lit_21),x_1084F480);
    x_1083F484 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F484,x_1084F480);
    BOXVAL(fF482) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F484);
    x_1083F485 = T12;
    BOXVAL(argsF483) = x_1083F485;
    x_1083F486 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F486,x_1084F480);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1084F480,LITREF(lit_6),x_1083F481);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF482);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF483);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P exp_;
  P T0,T1;
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

FUNCODEDEF(fun_loop_10) {
  P sets_,inits_;
  P valF487;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
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
    valF487 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF487);
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

FUNCODEDEF(fun_11) {
  P return_;
  P setsF497;
  P loopF496;
  P varF495;
  P x_1087F494;
  P x_1087F493;
  P x_1087F492;
  P prop_initsF491;
  P xF490;
  P x_1087F489;
  P x_1088F488;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_9,1);
  x_1088F488 = T1;
  FUNINIT(x_1088F488, 1,return_);
  x_1087F489 = FREEREF(0);
  xF490 = YPfalse;
  xF490 = BOXFAB(xF490);
  prop_initsF491 = YPfalse;
  prop_initsF491 = BOXFAB(prop_initsF491);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F489,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F489,LITREF(lit_23),x_1088F488);
    x_1087F492 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F492,x_1088F488);
    BOXVAL(xF490) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F492);
    x_1087F493 = T12;
    BOXVAL(prop_initsF491) = x_1087F493;
    x_1087F494 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F494,x_1088F488);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1088F488,LITREF(lit_6),x_1087F489);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF495 = T17;
  T20 = FUNSHELL(1,fun_loop_10,2);
  loopF496 = T20;
  FUNINIT(loopF496, 2,varF495,loopF496);
  T22 = BOXVAL(prop_initsF491);
  T21 = CALL2(0,loopF496,Ynil,T22);
  T19 = T21;
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
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,setsF497,T32,Ynil);
  T18 = T23;
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_11,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_munch_13) {
  P subforms_;
  P gF501;
  P g_argsF500;
  P g_declsF499;
  P tup3F498;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
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
    tup3F498 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F498,YPint((P)0));
    g_declsF499 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F498,YPint((P)1));
    g_argsF500 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF502 = T1;
  FUNINIT(munchF502, 1,munchF502);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF502,T7);
    tup4F503 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F503,YPint((P)0));
    g_declsF504 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F503,YPint((P)1));
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

FUNCODEDEF(fun_x_1096_16) {
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

FUNCODEDEF(fun_17) {
  P return_;
  P x_1095F509;
  P amountF508;
  P x_1095F507;
  P x_1096F506;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_16,1);
  x_1096F506 = T1;
  FUNINIT(x_1096F506, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1095F507 = T3;
  amountF508 = YPfalse;
  amountF508 = BOXFAB(amountF508);
  T6 = CALL2(1,VARREF(YisaQ),x_1095F507,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F507,x_1096F506);
    BOXVAL(amountF508) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1095F507);
    x_1095F509 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F509,x_1096F506);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1096F506,LITREF(lit_6),x_1095F507);
  }
  T12 = BOXVAL(amountF508);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF520;
  P g_placeF519;
  P g_declsF518;
  P tup6F517;
  P x_1093F516;
  P x_1093F515;
  P x_1093F514;
  P amountF513;
  P placeF512;
  P x_1093F511;
  P x_1094F510;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F510 = T1;
  FUNINIT(x_1094F510, 1,return_);
  x_1093F511 = FREEREF(0);
  placeF512 = YPfalse;
  placeF512 = BOXFAB(placeF512);
  amountF513 = YPfalse;
  amountF513 = BOXFAB(amountF513);
  T7 = CALL2(1,VARREF(YisaQ),x_1093F511,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F511,LITREF(lit_33),x_1094F510);
    x_1093F514 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F514,x_1094F510);
    BOXVAL(placeF512) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1093F514);
    x_1093F515 = T12;
    BOXVAL(amountF513) = x_1093F515;
    x_1093F516 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F516,x_1094F510);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1094F510,LITREF(lit_6),x_1093F511);
  }
  T18 = BOXVAL(placeF512);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup6F517 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F517,YPint((P)0));
  g_declsF518 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F517,YPint((P)1));
  g_placeF519 = T22;
  T25 = FUNFAB(fun_17,1,amountF513);
  T24 = with_exit(T25);
  amountF520 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF518,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF519);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T37 = CALL1(1,VARREF(Ylst),g_placeF519);
  T38 = CALL1(1,VARREF(Ylst),amountF520);
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

FUNCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1102_20) {
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

FUNCODEDEF(fun_x_1104_21) {
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
  P x_1103F524;
  P amountF523;
  P x_1103F522;
  P x_1104F521;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_21,1);
  x_1104F521 = T1;
  FUNINIT(x_1104F521, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1103F522 = T3;
  amountF523 = YPfalse;
  amountF523 = BOXFAB(amountF523);
  T6 = CALL2(1,VARREF(YisaQ),x_1103F522,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F522,x_1104F521);
    BOXVAL(amountF523) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1103F522);
    x_1103F524 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F524,x_1104F521);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1104F521,LITREF(lit_6),x_1103F522);
  }
  T12 = BOXVAL(amountF523);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF535;
  P g_placeF534;
  P g_declsF533;
  P tup8F532;
  P x_1101F531;
  P x_1101F530;
  P x_1101F529;
  P amountF528;
  P placeF527;
  P x_1101F526;
  P x_1102F525;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_20,1);
  x_1102F525 = T1;
  FUNINIT(x_1102F525, 1,return_);
  x_1101F526 = FREEREF(0);
  placeF527 = YPfalse;
  placeF527 = BOXFAB(placeF527);
  amountF528 = YPfalse;
  amountF528 = BOXFAB(amountF528);
  T7 = CALL2(1,VARREF(YisaQ),x_1101F526,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F526,LITREF(lit_37),x_1102F525);
    x_1101F529 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F529,x_1102F525);
    BOXVAL(placeF527) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1101F529);
    x_1101F530 = T12;
    BOXVAL(amountF528) = x_1101F530;
    x_1101F531 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F531,x_1102F525);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1102F525,LITREF(lit_6),x_1101F526);
  }
  T18 = BOXVAL(placeF527);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup8F532 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F532,YPint((P)0));
  g_declsF533 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F532,YPint((P)1));
  g_placeF534 = T22;
  T25 = FUNFAB(fun_22,1,amountF528);
  T24 = with_exit(T25);
  amountF535 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF533,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF534);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T37 = CALL1(1,VARREF(Ylst),g_placeF534);
  T38 = CALL1(1,VARREF(Ylst),amountF535);
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

FUNCODEDEF(fun_24) {
  P exp_;
  P T0,T1;
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

FUNCODEDEF(fun_26) {
  P return_;
  P g_placeF545;
  P g_declsF544;
  P tup10F543;
  P x_1107F542;
  P x_1107F541;
  P x_1107F540;
  P valueF539;
  P placeF538;
  P x_1107F537;
  P x_1108F536;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F536 = T1;
  FUNINIT(x_1108F536, 1,return_);
  x_1107F537 = FREEREF(0);
  placeF538 = YPfalse;
  placeF538 = BOXFAB(placeF538);
  valueF539 = YPfalse;
  valueF539 = BOXFAB(valueF539);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F537,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F537,LITREF(lit_41),x_1108F536);
    x_1107F540 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F540,x_1108F536);
    BOXVAL(placeF538) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F540);
    x_1107F541 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F541,x_1108F536);
    BOXVAL(valueF539) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1107F541);
    x_1107F542 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F542,x_1108F536);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1108F536,LITREF(lit_6),x_1107F537);
  }
  T20 = BOXVAL(placeF538);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup10F543 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F543,YPint((P)0));
  g_declsF544 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F543,YPint((P)1));
  g_placeF545 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF544,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T32 = CALL1(1,VARREF(Ylst),g_placeF545);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T36 = CALL1(1,VARREF(Ylst),g_placeF545);
  T38 = BOXVAL(valueF539);
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

FUNCODEDEF(fun_27) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_26,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1112_28) {
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

FUNCODEDEF(fun_29) {
  P return_;
  P tmpF559;
  P yg_placeF558;
  P yg_declsF557;
  P tup14F556;
  P xg_placeF555;
  P xg_declsF554;
  P tup13F553;
  P x_1111F552;
  P x_1111F551;
  P x_1111F550;
  P yF549;
  P xF548;
  P x_1111F547;
  P x_1112F546;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_28,1);
  x_1112F546 = T1;
  FUNINIT(x_1112F546, 1,return_);
  x_1111F547 = FREEREF(0);
  xF548 = YPfalse;
  xF548 = BOXFAB(xF548);
  yF549 = YPfalse;
  yF549 = BOXFAB(yF549);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F547,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F547,LITREF(lit_44),x_1112F546);
    x_1111F550 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F550,x_1112F546);
    BOXVAL(xF548) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F550);
    x_1111F551 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F551,x_1112F546);
    BOXVAL(yF549) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F551);
    x_1111F552 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F552,x_1112F546);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1112F546,LITREF(lit_6),x_1111F547);
  }
  T20 = BOXVAL(xF548);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup13F553 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F553,YPint((P)0));
  xg_declsF554 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F553,YPint((P)1));
  xg_placeF555 = T24;
  T27 = BOXVAL(yF549);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup14F556 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F556,YPint((P)0));
  yg_declsF557 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F556,YPint((P)1));
  yg_placeF558 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF559 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF559);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF555);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF554,yg_declsF557,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF555);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF558);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF558);
  T51 = CALL1(1,VARREF(Ylst),tmpF559);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T51,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T34 = CALL5(1,VARREF(YgooSmacrosYcat),T35,T36,T42,T47,Ynil);
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

FUNCODEDEF(fun_30) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_29,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1116_31) {
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

FUNCODEDEF(fun_32) {
  P return_;
  P valF569;
  P new_colF568;
  P g_placeF567;
  P g_declsF566;
  P tup16F565;
  P x_1115F564;
  P x_1115F563;
  P placeF562;
  P x_1115F561;
  P x_1116F560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_31,1);
  x_1116F560 = T1;
  FUNINIT(x_1116F560, 1,return_);
  x_1115F561 = FREEREF(0);
  placeF562 = YPfalse;
  placeF562 = BOXFAB(placeF562);
  T5 = CALL2(1,VARREF(YisaQ),x_1115F561,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F561,LITREF(lit_46),x_1116F560);
    x_1115F563 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F563,x_1116F560);
    BOXVAL(placeF562) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1115F563);
    x_1115F564 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F564,x_1116F560);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1116F560,LITREF(lit_6),x_1115F561);
  }
  T15 = BOXVAL(placeF562);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup16F565 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F565,YPint((P)0));
  g_declsF566 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F565,YPint((P)1));
  g_placeF567 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF568 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF569 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T33 = CALL1(1,VARREF(Ylst),new_colF568);
  T34 = CALL1(1,VARREF(Ylst),valF569);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T38 = CALL1(1,VARREF(Ylst),g_placeF567);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF566,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T42 = CALL1(1,VARREF(Ylst),g_placeF567);
  T43 = CALL1(1,VARREF(Ylst),new_colF568);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF569);
  T24 = CALL5(1,VARREF(YgooSmacrosYcat),T25,T26,T39,T44,Ynil);
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

FUNCODEDEF(fun_33) {
  P exp_;
  P T0,T1;
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
  P g_placeF579;
  P g_declsF578;
  P tup18F577;
  P x_1119F576;
  P x_1119F575;
  P x_1119F574;
  P callF573;
  P placeF572;
  P x_1119F571;
  P x_1120F570;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_34,1);
  x_1120F570 = T1;
  FUNINIT(x_1120F570, 1,return_);
  x_1119F571 = FREEREF(0);
  placeF572 = YPfalse;
  placeF572 = BOXFAB(placeF572);
  callF573 = YPfalse;
  callF573 = BOXFAB(callF573);
  T7 = CALL2(1,VARREF(YisaQ),x_1119F571,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F571,LITREF(lit_50),x_1120F570);
    x_1119F574 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F574,x_1120F570);
    BOXVAL(placeF572) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1119F574);
    x_1119F575 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F575,x_1120F570);
    BOXVAL(callF573) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1119F575);
    x_1119F576 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F576,x_1120F570);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1120F570,LITREF(lit_6),x_1119F571);
  }
  T20 = BOXVAL(placeF572);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup18F577 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F577,YPint((P)0));
  g_declsF578 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F577,YPint((P)1));
  g_placeF579 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),g_placeF579);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF578,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T36 = CALL1(1,VARREF(Ylst),g_placeF579);
  T38 = BOXVAL(callF573);
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

FUNCODEDEF(fun_36) {
  P exp_;
  P T0,T1;
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
  P x_1123F586;
  P x_1123F585;
  P x_1123F584;
  P bodyF583;
  P testF582;
  P x_1123F581;
  P x_1124F580;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_37,1);
  x_1124F580 = T1;
  FUNINIT(x_1124F580, 1,return_);
  x_1123F581 = FREEREF(0);
  testF582 = YPfalse;
  testF582 = BOXFAB(testF582);
  bodyF583 = YPfalse;
  bodyF583 = BOXFAB(bodyF583);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F581,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F581,LITREF(lit_53),x_1124F580);
    x_1123F584 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F584,x_1124F580);
    BOXVAL(testF582) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F584);
    x_1123F585 = T12;
    BOXVAL(bodyF583) = x_1123F585;
    x_1123F586 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F586,x_1124F580);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1124F580,LITREF(lit_6),x_1123F581);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = BOXVAL(testF582);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T26 = BOXVAL(bodyF583);
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

FUNCODEDEF(fun_39) {
  P exp_;
  P T0,T1;
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
  P x_1127F593;
  P x_1127F592;
  P x_1127F591;
  P bodyF590;
  P testF589;
  P x_1127F588;
  P x_1128F587;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_40,1);
  x_1128F587 = T1;
  FUNINIT(x_1128F587, 1,return_);
  x_1127F588 = FREEREF(0);
  testF589 = YPfalse;
  testF589 = BOXFAB(testF589);
  bodyF590 = YPfalse;
  bodyF590 = BOXFAB(bodyF590);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F588,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F588,LITREF(lit_57),x_1128F587);
    x_1127F591 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F591,x_1128F587);
    BOXVAL(testF589) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F591);
    x_1127F592 = T12;
    BOXVAL(bodyF590) = x_1127F592;
    x_1127F593 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F593,x_1128F587);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1128F587,LITREF(lit_6),x_1127F588);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF589);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF590);
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

FUNCODEDEF(fun_42) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_41,1,exp_);
  T0 = with_exit(T1);
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

FUNCODEDEF(fun_x_1140_45) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T18 = BOXVAL(FREEREF(1));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P return_;
  P x_1139F595;
  P x_1140F594;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_45,3);
  x_1140F594 = T1;
  FUNINIT(x_1140F594, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1139F595 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1139F595,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F595,x_1140F594);
  } else {
    T6 = CALL2(1,x_1140F594,LITREF(lit_6),x_1139F595);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1137F601;
  P x_1137F600;
  P restF599;
  P xF598;
  P x_1137F597;
  P x_1138F596;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1138_44,1);
  x_1138F596 = T1;
  FUNINIT(x_1138F596, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1137F597 = T3;
  xF598 = YPfalse;
  xF598 = BOXFAB(xF598);
  restF599 = YPfalse;
  restF599 = BOXFAB(restF599);
  T8 = CALL2(1,VARREF(YisaQ),x_1137F597,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1137F597,x_1138F596);
    BOXVAL(xF598) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1137F597);
    x_1137F600 = T11;
    BOXVAL(restF599) = x_1137F600;
    x_1137F601 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1137F601,x_1138F596);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1138F596,LITREF(lit_6),x_1137F597);
  }
  T16 = FUNFAB(fun_46,2,xF598,restF599);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P return_;
  P x_1135F606;
  P x_1135F605;
  P restF604;
  P x_1135F603;
  P x_1136F602;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1136_43,1);
  x_1136F602 = T1;
  FUNINIT(x_1136F602, 1,return_);
  x_1135F603 = FREEREF(0);
  restF604 = YPfalse;
  restF604 = BOXFAB(restF604);
  T5 = CALL2(1,VARREF(YisaQ),x_1135F603,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F603,LITREF(lit_59),x_1136F602);
    x_1135F605 = T7;
    BOXVAL(restF604) = x_1135F605;
    x_1135F606 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F606,x_1136F602);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1136F602,LITREF(lit_6),x_1135F603);
  }
  T12 = FUNFAB(fun_47,1,restF604);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_48,1,exp_);
  T0 = with_exit(T1);
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
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1150_51) {
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

FUNCODEDEF(fun_x_1152_52) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T17 = BOXVAL(FREEREF(1));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,Ynil);
  T14 = CALL1(1,VARREF(Ylst),T15);
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T18,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1151F608;
  P x_1152F607;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_52,3);
  x_1152F607 = T1;
  FUNINIT(x_1152F607, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1151F608 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1151F608,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F608,x_1152F607);
  } else {
    T6 = CALL2(1,x_1152F607,LITREF(lit_6),x_1151F608);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1149F614;
  P x_1149F613;
  P restF612;
  P xF611;
  P x_1149F610;
  P x_1150F609;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_51,1);
  x_1150F609 = T1;
  FUNINIT(x_1150F609, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1149F610 = T3;
  xF611 = YPfalse;
  xF611 = BOXFAB(xF611);
  restF612 = YPfalse;
  restF612 = BOXFAB(restF612);
  T8 = CALL2(1,VARREF(YisaQ),x_1149F610,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1149F610,x_1150F609);
    BOXVAL(xF611) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1149F610);
    x_1149F613 = T11;
    BOXVAL(restF612) = x_1149F613;
    x_1149F614 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1149F614,x_1150F609);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1150F609,LITREF(lit_6),x_1149F610);
  }
  T16 = FUNFAB(fun_53,2,xF611,restF612);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1147F619;
  P x_1147F618;
  P restF617;
  P x_1147F616;
  P x_1148F615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_50,1);
  x_1148F615 = T1;
  FUNINIT(x_1148F615, 1,return_);
  x_1147F616 = FREEREF(0);
  restF617 = YPfalse;
  restF617 = BOXFAB(restF617);
  T5 = CALL2(1,VARREF(YisaQ),x_1147F616,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F616,LITREF(lit_64),x_1148F615);
    x_1147F618 = T7;
    BOXVAL(restF617) = x_1147F618;
    x_1147F619 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F619,x_1148F615);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1148F615,LITREF(lit_6),x_1147F616);
  }
  T12 = FUNFAB(fun_54,1,restF617);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_55,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1158_57) {
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

FUNCODEDEF(fun_x_1160_58) {
  P msg_,args_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_70),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1159F625;
  P x_1159F624;
  P bodyF623;
  P condF622;
  P x_1159F621;
  P x_1160F620;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_58,2);
  x_1160F620 = T1;
  FUNINIT(x_1160F620, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1159F621 = T3;
  condF622 = YPfalse;
  condF622 = BOXFAB(condF622);
  bodyF623 = YPfalse;
  bodyF623 = BOXFAB(bodyF623);
  T9 = CALL2(1,VARREF(YisaQ),x_1159F621,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F621,x_1160F620);
    BOXVAL(condF622) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1159F621);
    x_1159F624 = T12;
    BOXVAL(bodyF623) = x_1159F624;
    x_1159F625 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F625,x_1160F620);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1160F620,LITREF(lit_6),x_1159F621);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF622);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF623);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL1(1,VARREF(Ytail),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T24,Ynil);
  T7 = T16;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1157F630;
  P x_1157F629;
  P casesF628;
  P x_1157F627;
  P x_1158F626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_57,1);
  x_1158F626 = T1;
  FUNINIT(x_1158F626, 1,return_);
  x_1157F627 = FREEREF(0);
  casesF628 = YPfalse;
  casesF628 = BOXFAB(casesF628);
  T5 = CALL2(1,VARREF(YisaQ),x_1157F627,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1157F627,LITREF(lit_68),x_1158F626);
    x_1157F629 = T7;
    BOXVAL(casesF628) = x_1157F629;
    x_1157F630 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F630,x_1158F626);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1158F626,LITREF(lit_6),x_1157F627);
  }
  T13 = BOXVAL(casesF628);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_59,1,casesF628);
    T14 = with_exit(T15);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_60,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1166_62) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_76),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1168_63) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_78),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P x_;
  P T0,T1,T2,T3;
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

FUNCODEDEF(fun_65) {
  P return_;
  P x_1167F634;
  P valuesF633;
  P x_1167F632;
  P x_1168F631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1168_63,2);
  x_1168F631 = T1;
  FUNINIT(x_1168F631, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1167F632 = T3;
  valuesF633 = YPfalse;
  valuesF633 = BOXFAB(valuesF633);
  T6 = CALL2(1,VARREF(YisaQ),x_1167F632,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF633) = x_1167F632;
    x_1167F634 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F634,x_1168F631);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1168F631,LITREF(lit_6),x_1167F632);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T16 = FUNFAB(fun_64,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF633);
  T15 = CALL2(1,VARREF(YgooSmacrosYmap),T16,T17);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,Ynil);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T21 = BOXVAL(FREEREF(4));
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T24 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T23 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),FREEREF(3),FREEREF(2),T24);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T18,T22,Ynil);
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P x_1165F640;
  P x_1165F639;
  P bodyF638;
  P condF637;
  P x_1165F636;
  P x_1166F635;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1166_62,2);
  x_1166F635 = T1;
  FUNINIT(x_1166F635, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1165F636 = T3;
  condF637 = YPfalse;
  condF637 = BOXFAB(condF637);
  bodyF638 = YPfalse;
  bodyF638 = BOXFAB(bodyF638);
  T8 = CALL2(1,VARREF(YisaQ),x_1165F636,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1165F636,x_1166F635);
    BOXVAL(condF637) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1165F636);
    x_1165F639 = T11;
    BOXVAL(bodyF638) = x_1165F639;
    x_1165F640 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F640,x_1166F635);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1166F635,LITREF(lit_6),x_1165F636);
  }
  T17 = BOXVAL(condF637);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T20 = BOXVAL(bodyF638);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_65,5,FREEREF(0),condF637,FREEREF(1),FREEREF(2),bodyF638);
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
  P T0,T1,T2,T3;
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
    T3 = FUNFAB(fun_66,3,cases_,tst_,val_);
    T2 = with_exit(T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1172_68) {
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

FUNCODEDEF(fun_69) {
  P return_;
  P tst_varF651;
  P val_varF650;
  P x_1171F649;
  P x_1171F648;
  P x_1171F647;
  P x_1171F646;
  P casesF645;
  P tstF644;
  P valF643;
  P x_1171F642;
  P x_1172F641;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_68,1);
  x_1172F641 = T1;
  FUNINIT(x_1172F641, 1,return_);
  x_1171F642 = FREEREF(0);
  valF643 = YPfalse;
  valF643 = BOXFAB(valF643);
  tstF644 = YPfalse;
  tstF644 = BOXFAB(tstF644);
  casesF645 = YPfalse;
  casesF645 = BOXFAB(casesF645);
  T9 = CALL2(1,VARREF(YisaQ),x_1171F642,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1171F642,LITREF(lit_81),x_1172F641);
    x_1171F646 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F646,x_1172F641);
    BOXVAL(valF643) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1171F646);
    x_1171F647 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F647,x_1172F641);
    BOXVAL(tstF644) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1171F647);
    x_1171F648 = T17;
    BOXVAL(casesF645) = x_1171F648;
    x_1171F649 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F649,x_1172F641);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1172F641,LITREF(lit_6),x_1171F642);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF650 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
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

FUNCODEDEF(fun_70) {
  P exp_;
  P T0,T1;
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

FUNCODEDEF(fun_72) {
  P return_;
  P x_1175F658;
  P x_1175F657;
  P x_1175F656;
  P casesF655;
  P valF654;
  P x_1175F653;
  P x_1176F652;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_71,1);
  x_1176F652 = T1;
  FUNINIT(x_1176F652, 1,return_);
  x_1175F653 = FREEREF(0);
  valF654 = YPfalse;
  valF654 = BOXFAB(valF654);
  casesF655 = YPfalse;
  casesF655 = BOXFAB(casesF655);
  T7 = CALL2(1,VARREF(YisaQ),x_1175F653,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1175F653,LITREF(lit_83),x_1176F652);
    x_1175F656 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F656,x_1176F652);
    BOXVAL(valF654) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1175F656);
    x_1175F657 = T12;
    BOXVAL(casesF655) = x_1175F657;
    x_1175F658 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F658,x_1176F652);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1176F652,LITREF(lit_6),x_1175F653);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T19 = BOXVAL(valF654);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T21 = BOXVAL(casesF655);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_72,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1180_74) {
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

FUNCODEDEF(fun_75) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_89));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T5,Ynil);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
    T8 = CALL1(1,VARREF(Ylst),x_);
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_splice_76) {
  P y_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = fun_75;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rest_opQ_77) {
  P x_;
  P tmpF660;
  P tmpF659;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF659 = T2;
  if (tmpF659 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF660 = T1;
  if (tmpF660 != YPfalse) {
    T5 = tmpF660;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_89));
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_78) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,LITREF(lit_89));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,FREEREF(1),FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_walk_op_80) {
  P vars_,x_;
  P yF663;
  P spliceQF662;
  P varF661;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(vars_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_51));
  if (T1 != YPfalse) {
    T4 = (P)YOlen(vars_);
    T3 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_97),T4);
    varF661 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF661,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF661;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_78;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF662 = T10;
      T14 = FUNFAB(fun_79,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF663 = T13;
      if (spliceQF662 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF663);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
        T24 = CALL1(1,VARREF(Ytail),yF663);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF663;
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

FUNCODEDEF(fun_81) {
  P return_;
  P argsF676;
  P exprF675;
  P varsF674;
  P walk_opF673;
  P rest_opQF672;
  P spliceF671;
  P x_1179F670;
  P x_1179F669;
  P x_1179F668;
  P argsF667;
  P fF666;
  P x_1179F665;
  P x_1180F664;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_74,1);
  x_1180F664 = T1;
  FUNINIT(x_1180F664, 1,return_);
  x_1179F665 = FREEREF(0);
  fF666 = YPfalse;
  fF666 = BOXFAB(fF666);
  argsF667 = YPfalse;
  argsF667 = BOXFAB(argsF667);
  T7 = CALL2(1,VARREF(YisaQ),x_1179F665,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F665,LITREF(lit_86),x_1180F664);
    x_1179F668 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F668,x_1180F664);
    BOXVAL(fF666) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1179F668);
    x_1179F669 = T12;
    BOXVAL(argsF667) = x_1179F669;
    x_1179F670 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F670,x_1180F664);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1180F664,LITREF(lit_6),x_1179F665);
  }
  T17 = fun_splice_76;
  spliceF671 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_77,1);
  rest_opQF672 = T18;
  T19 = FUNSHELL(1,fun_walk_op_80,2);
  walk_opF673 = T19;
  FUNINIT(rest_opQF672, 1,rest_opQF672);
  FUNINIT(walk_opF673, 2,walk_opF673,spliceF671);
  T22 = BOXVAL(argsF667);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF666);
    T24 = CALL2(1,VARREF(YgooSmacrosYEE),T25,LITREF(lit_51));
    if (T24 != YPfalse) {
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T31 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T31,Ynil);
      T23 = T26;
    } else {
      T33 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
      T38 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
      T39 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
      T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T39,Ynil);
      T36 = CALL1(1,VARREF(Ylst),T37);
      T35 = CALL2(1,VARREF(YgooSmacrosYcat),T36,Ynil);
      T34 = CALL1(1,VARREF(Ylst),T35);
      T41 = BOXVAL(fF666);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF674 = T43;
    T48 = BOXVAL(fF666);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF667);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF673,varsF674,T46);
    exprF675 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF674);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF667);
    T55 = CALL1(1,rest_opQF672,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_100);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF676 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T59 = CALL1(1,VARREF(Ylst),argsF676);
    T60 = CALL1(1,VARREF(Ylst),exprF675);
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

FUNCODEDEF(fun_82) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_81,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1188_83) {
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

FUNCODEDEF(fun_x_1192_84) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_105));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P return_;
  P varF687;
  P x_1191F686;
  P x_1191F685;
  P x_1191F684;
  P x_1191F683;
  P x_1191F682;
  P restF681;
  P thenF680;
  P patF679;
  P x_1191F678;
  P x_1192F677;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_84,1);
  x_1192F677 = T1;
  FUNINIT(x_1192F677, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1191F678 = T3;
  patF679 = YPfalse;
  patF679 = BOXFAB(patF679);
  thenF680 = YPfalse;
  thenF680 = BOXFAB(thenF680);
  restF681 = YPfalse;
  restF681 = BOXFAB(restF681);
  T10 = CALL2(1,VARREF(YisaQ),x_1191F678,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F678,x_1192F677);
    x_1191F682 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F682,x_1192F677);
    BOXVAL(patF679) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1191F682);
    x_1191F683 = T15;
    BOXVAL(thenF680) = x_1191F683;
    x_1191F684 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F684,x_1192F677);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1191F678);
    x_1191F685 = T18;
    BOXVAL(restF681) = x_1191F685;
    x_1191F686 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F686,x_1192F677);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1192F677,LITREF(lit_6),x_1191F678);
  }
  T24 = BOXVAL(patF679);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T27 = BOXVAL(thenF680);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF687 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF687);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
    T45 = BOXVAL(patF679);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF687);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T50 = BOXVAL(thenF680);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
    T54 = CALL1(1,VARREF(Ylst),varF687);
    T55 = BOXVAL(restF681);
    T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,Ynil);
    T51 = CALL1(1,VARREF(Ylst),T52);
    T40 = CALL5(1,VARREF(YgooSmacrosYcat),T41,T42,T47,T51,Ynil);
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

FUNCODEDEF(fun_x_1190_86) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_85,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P return_;
  P x_1189F689;
  P x_1190F688;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1190_86,3);
  x_1190F688 = T1;
  FUNINIT(x_1190F688, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1189F689 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1189F689,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1189F689,x_1190F688);
  } else {
    T6 = CALL2(1,x_1190F688,LITREF(lit_6),x_1189F689);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P return_;
  P x_1187F696;
  P x_1187F695;
  P x_1187F694;
  P casesF693;
  P expF692;
  P x_1187F691;
  P x_1188F690;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_83,1);
  x_1188F690 = T1;
  FUNINIT(x_1188F690, 1,return_);
  x_1187F691 = FREEREF(0);
  expF692 = YPfalse;
  expF692 = BOXFAB(expF692);
  casesF693 = YPfalse;
  casesF693 = BOXFAB(casesF693);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F691,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F691,LITREF(lit_102),x_1188F690);
    x_1187F694 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F694,x_1188F690);
    BOXVAL(expF692) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F694);
    x_1187F695 = T12;
    BOXVAL(casesF693) = x_1187F695;
    x_1187F696 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F696,x_1188F690);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1188F690,LITREF(lit_6),x_1187F691);
  }
  T17 = FUNFAB(fun_87,2,casesF693,expF692);
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
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_88,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1196_90) {
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
  P x_1195F705;
  P x_1195F704;
  P x_1195F703;
  P x_1195F702;
  P argsF701;
  P messageF700;
  P condF699;
  P x_1195F698;
  P x_1196F697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_90,1);
  x_1196F697 = T1;
  FUNINIT(x_1196F697, 1,return_);
  x_1195F698 = FREEREF(0);
  condF699 = YPfalse;
  condF699 = BOXFAB(condF699);
  messageF700 = YPfalse;
  messageF700 = BOXFAB(messageF700);
  argsF701 = YPfalse;
  argsF701 = BOXFAB(argsF701);
  T9 = CALL2(1,VARREF(YisaQ),x_1195F698,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1195F698,LITREF(lit_109),x_1196F697);
    x_1195F702 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F702,x_1196F697);
    BOXVAL(condF699) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1195F702);
    x_1195F703 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F703,x_1196F697);
    BOXVAL(messageF700) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1195F703);
    x_1195F704 = T17;
    BOXVAL(argsF701) = x_1195F704;
    x_1195F705 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F705,x_1196F697);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1196F697,LITREF(lit_6),x_1195F698);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T27 = BOXVAL(condF699);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF700);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF701);
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

FUNCODEDEF(fun_92) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_91,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1204_93) {
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

FUNCODEDEF(fun_x_1206_94) {
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

FUNCODEDEF(fun_x_1208_95) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_122));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  P return_;
  P x_1207F712;
  P x_1207F711;
  P x_1207F710;
  P valF709;
  P keyF708;
  P x_1207F707;
  P x_1208F706;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_95,3);
  x_1208F706 = T1;
  FUNINIT(x_1208F706, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1207F707 = T3;
  keyF708 = YPfalse;
  keyF708 = BOXFAB(keyF708);
  valF709 = YPfalse;
  valF709 = BOXFAB(valF709);
  T8 = CALL2(1,VARREF(YisaQ),x_1207F707,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F707,LITREF(lit_47),x_1208F706);
    x_1207F710 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F710,x_1208F706);
    BOXVAL(keyF708) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1207F710);
    x_1207F711 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F711,x_1208F706);
    BOXVAL(valF709) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1207F711);
    x_1207F712 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F712,x_1208F706);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1208F706,LITREF(lit_6),x_1207F707);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T24 = BOXVAL(keyF708);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF709);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T25,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_123));
  T33 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_122));
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

FUNCODEDEF(fun_97) {
  P return_;
  P stateF719;
  P x_1205F718;
  P x_1205F717;
  P expF716;
  P varF715;
  P x_1205F714;
  P x_1206F713;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_94,1);
  x_1206F713 = T1;
  FUNINIT(x_1206F713, 1,return_);
  x_1205F714 = FREEREF(0);
  varF715 = YPfalse;
  varF715 = BOXFAB(varF715);
  expF716 = YPfalse;
  expF716 = BOXFAB(expF716);
  T7 = CALL2(1,VARREF(YisaQ),x_1205F714,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F714,x_1206F713);
    BOXVAL(varF715) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1205F714);
    x_1205F717 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F717,x_1206F713);
    BOXVAL(expF716) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1205F717);
    x_1205F718 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1205F718,x_1206F713);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1206F713,LITREF(lit_6),x_1205F714);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF719 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T22 = CALL1(1,VARREF(Ylst),stateF719);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_119));
  T27 = BOXVAL(expF716);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(2));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T31 = CALL1(1,VARREF(Ylst),stateF719);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(3));
  T34 = FUNFAB(fun_96,2,varF715,stateF719);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(4));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
  T38 = CALL1(1,VARREF(Ylst),stateF719);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,FREEREF(5));
  T18 = CALL5(0,FREEREF(6),T19,T20,T28,T32,T35);
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
  P clauseF721;
  P loopF720;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
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
    loopF720 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
    T6 = CALL1(1,VARREF(Ylst),loopF720);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF720);
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,nexts_,Ynil);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T14,Ynil);
    T8 = CALL1(1,VARREF(Ylst),T9);
    T4 = CALL5(1,VARREF(YgooSmacrosYcat),T5,T6,T7,T8,Ynil);
    T2 = T4;
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF721 = T23;
    T25 = FUNFAB(fun_97,7,clauseF721,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF731;
  P x_1203F730;
  P x_1203F729;
  P x_1203F728;
  P x_1203F727;
  P x_1203F726;
  P bodyF725;
  P clausesF724;
  P x_1203F723;
  P x_1204F722;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_93,1);
  x_1204F722 = T1;
  FUNINIT(x_1204F722, 1,return_);
  x_1203F723 = FREEREF(0);
  clausesF724 = YPfalse;
  clausesF724 = BOXFAB(clausesF724);
  bodyF725 = YPfalse;
  bodyF725 = BOXFAB(bodyF725);
  T7 = CALL2(1,VARREF(YisaQ),x_1203F723,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1203F723,LITREF(lit_111),x_1204F722);
    x_1203F726 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F726,x_1204F722);
    x_1203F727 = T11;
    BOXVAL(clausesF724) = x_1203F727;
    x_1203F728 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F728,x_1204F722);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1203F726);
    x_1203F729 = T14;
    BOXVAL(bodyF725) = x_1203F729;
    x_1203F730 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F730,x_1204F722);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1204F722,LITREF(lit_6),x_1203F723);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF731 = T19;
  FUNINIT(grokF731, 2,bodyF725,grokF731);
  T21 = BOXVAL(clausesF724);
  T20 = CALL5(0,grokF731,T21,Ynil,Ynil,Ynil,Ynil);
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
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_99,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1212_101) {
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
  P x_1211F738;
  P x_1211F737;
  P x_1211F736;
  P bodyF735;
  P testF734;
  P x_1211F733;
  P x_1212F732;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_101,1);
  x_1212F732 = T1;
  FUNINIT(x_1212F732, 1,return_);
  x_1211F733 = FREEREF(0);
  testF734 = YPfalse;
  testF734 = BOXFAB(testF734);
  bodyF735 = YPfalse;
  bodyF735 = BOXFAB(bodyF735);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F733,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F733,LITREF(lit_126),x_1212F732);
    x_1211F736 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F736,x_1212F732);
    BOXVAL(testF734) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1211F736);
    x_1211F737 = T12;
    BOXVAL(bodyF735) = x_1211F737;
    x_1211F738 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F738,x_1212F732);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1212F732,LITREF(lit_6),x_1211F733);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T24 = BOXVAL(testF734);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF735);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALL5(1,VARREF(YgooSmacrosYcat),T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_103) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_102,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1216_104) {
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
  P x_1215F745;
  P x_1215F744;
  P x_1215F743;
  P bodyF742;
  P testF741;
  P x_1215F740;
  P x_1216F739;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_104,1);
  x_1216F739 = T1;
  FUNINIT(x_1216F739, 1,return_);
  x_1215F740 = FREEREF(0);
  testF741 = YPfalse;
  testF741 = BOXFAB(testF741);
  bodyF742 = YPfalse;
  bodyF742 = BOXFAB(bodyF742);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F740,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F740,LITREF(lit_129),x_1216F739);
    x_1215F743 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F743,x_1216F739);
    BOXVAL(testF741) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1215F743);
    x_1215F744 = T12;
    BOXVAL(bodyF742) = x_1215F744;
    x_1215F745 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F745,x_1216F739);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1216F739,LITREF(lit_6),x_1215F740);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T24 = BOXVAL(testF741);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF742);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALL5(1,VARREF(YgooSmacrosYcat),T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_105,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1224_107) {
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

FUNCODEDEF(fun_x_1228_108) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_134),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P return_;
  P old_valueF757;
  P nameF756;
  P x_1227F755;
  P x_1227F754;
  P x_1227F753;
  P x_1227F752;
  P x_1227F751;
  P restF750;
  P valueF749;
  P varF748;
  P x_1227F747;
  P x_1228F746;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_108,2);
  x_1228F746 = T1;
  FUNINIT(x_1228F746, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1227F747 = T3;
  varF748 = YPfalse;
  varF748 = BOXFAB(varF748);
  valueF749 = YPfalse;
  valueF749 = BOXFAB(valueF749);
  restF750 = YPfalse;
  restF750 = BOXFAB(restF750);
  T10 = CALL2(1,VARREF(YisaQ),x_1227F747,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F747,x_1228F746);
    x_1227F751 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F751,x_1228F746);
    BOXVAL(varF748) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1227F751);
    x_1227F752 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F752,x_1228F746);
    BOXVAL(valueF749) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1227F752);
    x_1227F753 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F753,x_1228F746);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1227F747);
    x_1227F754 = T20;
    BOXVAL(restF750) = x_1227F754;
    x_1227F755 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F755,x_1228F746);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1228F746,LITREF(lit_6),x_1227F747);
  }
  T26 = BOXVAL(varF748);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF756 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF757 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF757);
  T36 = CALL1(1,VARREF(Ylst),nameF756);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_135));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T46 = CALL1(1,VARREF(Ylst),nameF756);
  T48 = BOXVAL(valueF749);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T54 = BOXVAL(restF750);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T59 = CALL1(1,VARREF(Ylst),nameF756);
  T60 = CALL1(1,VARREF(Ylst),old_valueF757);
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

FUNCODEDEF(fun_x_1226_110) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_109,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P return_;
  P x_1225F759;
  P x_1226F758;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1226_110,3);
  x_1226F758 = T1;
  FUNINIT(x_1226F758, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1225F759 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1225F759,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1225F759,x_1226F758);
  } else {
    T6 = CALL2(1,x_1226F758,LITREF(lit_6),x_1225F759);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P return_;
  P x_1223F766;
  P x_1223F765;
  P x_1223F764;
  P bodyF763;
  P bindingsF762;
  P x_1223F761;
  P x_1224F760;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1224_107,1);
  x_1224F760 = T1;
  FUNINIT(x_1224F760, 1,return_);
  x_1223F761 = FREEREF(0);
  bindingsF762 = YPfalse;
  bindingsF762 = BOXFAB(bindingsF762);
  bodyF763 = YPfalse;
  bodyF763 = BOXFAB(bodyF763);
  T7 = CALL2(1,VARREF(YisaQ),x_1223F761,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1223F761,LITREF(lit_131),x_1224F760);
    x_1223F764 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1223F764,x_1224F760);
    BOXVAL(bindingsF762) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1223F764);
    x_1223F765 = T12;
    BOXVAL(bodyF763) = x_1223F765;
    x_1223F766 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F766,x_1224F760);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1224F760,LITREF(lit_6),x_1223F761);
  }
  T17 = FUNFAB(fun_111,2,bindingsF762,bodyF763);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_112,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1232_114) {
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

FUNCODEDEF(fun_115) {
  P return_;
  P vnamF776;
  P typF775;
  P namF774;
  P x_1231F773;
  P x_1231F772;
  P x_1231F771;
  P valueF770;
  P varF769;
  P x_1231F768;
  P x_1232F767;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_114,1);
  x_1232F767 = T1;
  FUNINIT(x_1232F767, 1,return_);
  x_1231F768 = FREEREF(0);
  varF769 = YPfalse;
  varF769 = BOXFAB(varF769);
  valueF770 = YPfalse;
  valueF770 = BOXFAB(valueF770);
  T7 = CALL2(1,VARREF(YisaQ),x_1231F768,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1231F768,LITREF(lit_137),x_1232F767);
    x_1231F771 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F771,x_1232F767);
    BOXVAL(varF769) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1231F771);
    x_1231F772 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F772,x_1232F767);
    BOXVAL(valueF770) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F772);
    x_1231F773 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F773,x_1232F767);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1232F767,LITREF(lit_6),x_1231F768);
  }
  T20 = BOXVAL(varF769);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF774 = T19;
  T23 = BOXVAL(varF769);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF775 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_138),namF774,LITREF(lit_139));
  vnamF776 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_140));
  T31 = CALL1(1,VARREF(Ylst),vnamF776);
  T33 = BOXVAL(valueF770);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T37 = CALL1(1,VARREF(Ylst),namF774);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T41 = CALL1(1,VARREF(Ylst),typF775);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF776);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF774);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T53 = CALL1(1,VARREF(Ylst),typF775);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T57 = CALL1(1,VARREF(Ylst),vnamF776);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T44 = CALL5(1,VARREF(YgooSmacrosYcat),T45,T46,T48,T54,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T26 = CALL5(1,VARREF(YgooSmacrosYcat),T27,T28,T34,T43,Ynil);
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

FUNCODEDEF(fun_116) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_115,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_117) {
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
  P x_1235F781;
  P x_1235F780;
  P bodyF779;
  P x_1235F778;
  P x_1236F777;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_117,1);
  x_1236F777 = T1;
  FUNINIT(x_1236F777, 1,return_);
  x_1235F778 = FREEREF(0);
  bodyF779 = YPfalse;
  bodyF779 = BOXFAB(bodyF779);
  T5 = CALL2(1,VARREF(YisaQ),x_1235F778,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F778,LITREF(lit_145),x_1236F777);
    x_1235F780 = T7;
    BOXVAL(bodyF779) = x_1235F780;
    x_1235F781 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F781,x_1236F777);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1236F777,LITREF(lit_6),x_1235F778);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF779);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T19,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_118,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_120) {
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
  P x_1239F786;
  P x_1239F785;
  P namesF784;
  P x_1239F783;
  P x_1240F782;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_120,1);
  x_1240F782 = T1;
  FUNINIT(x_1240F782, 1,return_);
  x_1239F783 = FREEREF(0);
  namesF784 = YPfalse;
  namesF784 = BOXFAB(namesF784);
  T5 = CALL2(1,VARREF(YisaQ),x_1239F783,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F783,LITREF(lit_148),x_1240F782);
    x_1239F785 = T7;
    BOXVAL(namesF784) = x_1239F785;
    x_1239F786 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F786,x_1240F782);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1240F782,LITREF(lit_6),x_1239F783);
  }
  T13 = BOXVAL(namesF784);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF784);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
    T28 = BOXVAL(namesF784);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
    T33 = BOXVAL(namesF784);
    T32 = CALL1(1,VARREF(Ytail),T33);
    T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T14 = CALL5(1,VARREF(YgooSmacrosYcat),T15,T16,T23,T29,Ynil);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_121,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1262_123) {
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

FUNCODEDEF(fun_x_1280_124) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_107));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_125) {
  P return_;
  P x_1279F790;
  P nameF789;
  P x_1279F788;
  P x_1280F787;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1280_124,1);
  x_1280F787 = T1;
  FUNINIT(x_1280F787, 1,return_);
  x_1279F788 = FREEREF(0);
  nameF789 = YPfalse;
  nameF789 = BOXFAB(nameF789);
  T5 = CALL2(1,VARREF(YisaQ),x_1279F788,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1279F788,x_1280F787);
    BOXVAL(nameF789) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1279F788);
    x_1279F790 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1279F790,x_1280F787);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1280F787,LITREF(lit_6),x_1279F788);
  }
  T13 = BOXVAL(nameF789);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF789);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
    T21 = BOXVAL(nameF789);
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

FUNCODEDEF(fun_x_1277_126) {
  P msg_,args_;
  P x_1278F791;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1278F791 = FREEREF(0);
  T3 = FUNFAB(fun_125,1,x_1278F791);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P return_;
  P x_1276F798;
  P x_1276F797;
  P x_1276F796;
  P restF795;
  P nameF794;
  P x_1276F793;
  P x_1277F792;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1277_126,2);
  x_1277F792 = T1;
  FUNINIT(x_1277F792, 2,FREEREF(0),return_);
  x_1276F793 = FREEREF(0);
  nameF794 = YPfalse;
  nameF794 = BOXFAB(nameF794);
  restF795 = YPfalse;
  restF795 = BOXFAB(restF795);
  T7 = CALL2(1,VARREF(YisaQ),x_1276F793,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1276F793,LITREF(lit_158),x_1277F792);
    x_1276F796 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1276F796,x_1277F792);
    BOXVAL(nameF794) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1276F796);
    x_1276F797 = T12;
    BOXVAL(restF795) = x_1276F797;
    x_1276F798 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1276F798,x_1277F792);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1277F792,LITREF(lit_6),x_1276F793);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T23 = BOXVAL(nameF794);
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

FUNCODEDEF(fun_x_1274_128) {
  P msg_,args_;
  P x_1275F799;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1275F799 = FREEREF(0);
  T3 = FUNFAB(fun_127,2,x_1275F799,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  P return_;
  P x_1273F806;
  P x_1273F805;
  P x_1273F804;
  P restF803;
  P nameF802;
  P x_1273F801;
  P x_1274F800;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1274_128,3);
  x_1274F800 = T1;
  FUNINIT(x_1274F800, 3,FREEREF(0),FREEREF(1),return_);
  x_1273F801 = FREEREF(0);
  nameF802 = YPfalse;
  nameF802 = BOXFAB(nameF802);
  restF803 = YPfalse;
  restF803 = BOXFAB(restF803);
  T7 = CALL2(1,VARREF(YisaQ),x_1273F801,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1273F801,LITREF(lit_159),x_1274F800);
    x_1273F804 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1273F804,x_1274F800);
    BOXVAL(nameF802) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1273F804);
    x_1273F805 = T12;
    BOXVAL(restF803) = x_1273F805;
    x_1273F806 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1273F806,x_1274F800);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1274F800,LITREF(lit_6),x_1273F801);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T23 = BOXVAL(nameF802);
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

FUNCODEDEF(fun_x_1271_130) {
  P msg_,args_;
  P x_1272F807;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1272F807 = FREEREF(0);
  T3 = FUNFAB(fun_129,2,x_1272F807,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P return_;
  P x_1270F814;
  P x_1270F813;
  P x_1270F812;
  P restF811;
  P nameF810;
  P x_1270F809;
  P x_1271F808;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1271_130,3);
  x_1271F808 = T1;
  FUNINIT(x_1271F808, 3,FREEREF(0),FREEREF(1),return_);
  x_1270F809 = FREEREF(0);
  nameF810 = YPfalse;
  nameF810 = BOXFAB(nameF810);
  restF811 = YPfalse;
  restF811 = BOXFAB(restF811);
  T7 = CALL2(1,VARREF(YisaQ),x_1270F809,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1270F809,LITREF(lit_140),x_1271F808);
    x_1270F812 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1270F812,x_1271F808);
    BOXVAL(nameF810) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1270F812);
    x_1270F813 = T12;
    BOXVAL(restF811) = x_1270F813;
    x_1270F814 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1270F814,x_1271F808);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1271F808,LITREF(lit_6),x_1270F809);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T23 = BOXVAL(nameF810);
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

FUNCODEDEF(fun_x_1268_132) {
  P msg_,args_;
  P x_1269F815;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1269F815 = FREEREF(0);
  T3 = FUNFAB(fun_131,2,x_1269F815,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P x_1267F822;
  P x_1267F821;
  P x_1267F820;
  P restF819;
  P nameF818;
  P x_1267F817;
  P x_1268F816;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1268_132,3);
  x_1268F816 = T1;
  FUNINIT(x_1268F816, 3,FREEREF(0),FREEREF(1),return_);
  x_1267F817 = FREEREF(0);
  nameF818 = YPfalse;
  nameF818 = BOXFAB(nameF818);
  restF819 = YPfalse;
  restF819 = BOXFAB(restF819);
  T7 = CALL2(1,VARREF(YisaQ),x_1267F817,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1267F817,LITREF(lit_160),x_1268F816);
    x_1267F820 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1267F820,x_1268F816);
    BOXVAL(nameF818) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1267F820);
    x_1267F821 = T12;
    BOXVAL(restF819) = x_1267F821;
    x_1267F822 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1267F822,x_1268F816);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1268F816,LITREF(lit_6),x_1267F817);
  }
  T18 = BOXVAL(nameF818);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T23 = BOXVAL(nameF818);
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

FUNCODEDEF(fun_x_1265_134) {
  P msg_,args_;
  P x_1266F823;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1266F823 = FREEREF(0);
  T3 = FUNFAB(fun_133,2,x_1266F823,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P return_;
  P x_1264F830;
  P x_1264F829;
  P x_1264F828;
  P restF827;
  P nameF826;
  P x_1264F825;
  P x_1265F824;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1265_134,3);
  x_1265F824 = T1;
  FUNINIT(x_1265F824, 3,FREEREF(0),FREEREF(1),return_);
  x_1264F825 = FREEREF(0);
  nameF826 = YPfalse;
  nameF826 = BOXFAB(nameF826);
  restF827 = YPfalse;
  restF827 = BOXFAB(restF827);
  T7 = CALL2(1,VARREF(YisaQ),x_1264F825,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1264F825,LITREF(lit_161),x_1265F824);
    x_1264F828 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1264F828,x_1265F824);
    BOXVAL(nameF826) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1264F828);
    x_1264F829 = T12;
    BOXVAL(restF827) = x_1264F829;
    x_1264F830 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1264F830,x_1265F824);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1265F824,LITREF(lit_6),x_1264F825);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T23 = BOXVAL(nameF826);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T29 = BOXVAL(nameF826);
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

FUNCODEDEF(fun_136) {
  P return_;
  P defsF837;
  P x_1263F836;
  P x_1261F835;
  P x_1261F834;
  P defF833;
  P x_1261F832;
  P x_1262F831;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1262_123,1);
  x_1262F831 = T1;
  FUNINIT(x_1262F831, 1,return_);
  x_1261F832 = FREEREF(0);
  defF833 = YPfalse;
  defF833 = BOXFAB(defF833);
  T5 = CALL2(1,VARREF(YisaQ),x_1261F832,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1261F832,LITREF(lit_151),x_1262F831);
    x_1261F834 = T7;
    BOXVAL(defF833) = x_1261F834;
    x_1261F835 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1261F835,x_1262F831);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1262F831,LITREF(lit_6),x_1261F832);
  }
  T13 = BOXVAL(defF833);
  x_1263F836 = T13;
  T15 = FUNFAB(fun_135,2,x_1263F836,defF833);
  T14 = with_exit(T15);
  T12 = T14;
  defsF837 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF837,Ynil);
  T11 = T16;
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_136,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1284_138) {
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

FUNCODEDEF(fun_139) {
  P x_;
  P xF838;
  P T0,T1,T2,T3,T4,T5;
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
  xF838 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF838,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  P return_;
  P x_1283F843;
  P x_1283F842;
  P defsF841;
  P x_1283F840;
  P x_1284F839;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_138,1);
  x_1284F839 = T1;
  FUNINIT(x_1284F839, 1,return_);
  x_1283F840 = FREEREF(0);
  defsF841 = YPfalse;
  defsF841 = BOXFAB(defsF841);
  T5 = CALL2(1,VARREF(YisaQ),x_1283F840,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F840,LITREF(lit_163),x_1284F839);
    x_1283F842 = T7;
    BOXVAL(defsF841) = x_1283F842;
    x_1283F843 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F843,x_1284F839);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1284F839,LITREF(lit_6),x_1283F840);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T14 = fun_139;
  T15 = BOXVAL(defsF841);
  T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_140,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
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
  P tmpF846;
  P tmpF845;
  P tmpF844;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
DEFCREGS();
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
  lit_23 = YPPsym((P)"renew");
  lit_24 = YPPsym((P)"loop");
  lit_25 = YPPsym((P)"sets");
  lit_26 = YPPsym((P)"inits");
  lit_27 = YPPsym((P)"set");
  T15 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1088_9 = YPmet(FUNCODEREF(fun_x_1088_9),LITREF(lit_22),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(2,LITREF(lit_25),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_10 = YPmet(FUNCODEREF(fun_loop_10),LITREF(lit_24),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T16 = fun_12;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T16);
  lit_28 = YPPsym((P)"lift-place-subforms");
  lit_29 = YPPsym((P)"place");
  lit_30 = YPPsym((P)"munch");
  lit_31 = YPPsym((P)"subforms");
  T20 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T19 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T20,Ynil);
  fun_munch_13 = YPmet(FUNCODEREF(fun_munch_13),LITREF(lit_30),T19,ENVNUL,PNUL,YPfalse);
  T18 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T17 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T18,Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_28),T17,ENVNUL,PNUL,YPfalse);
  T21 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T21);
  lit_32 = YPPsym((P)"x-1094");
  lit_33 = YPPsym((P)"incf");
  lit_34 = YPPsym((P)"x-1096");
  lit_35 = YPPsym((P)"+");
  T26 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),LITREF(lit_32),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1096_16 = YPmet(FUNCODEREF(fun_x_1096_16),LITREF(lit_34),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T27 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T27);
  lit_36 = YPPsym((P)"x-1102");
  lit_37 = YPPsym((P)"decf");
  lit_38 = YPPsym((P)"x-1104");
  lit_39 = YPPsym((P)"-");
  T32 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1102_20 = YPmet(FUNCODEREF(fun_x_1102_20),LITREF(lit_36),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1104_21 = YPmet(FUNCODEREF(fun_x_1104_21),LITREF(lit_38),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T33 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T33);
  lit_40 = YPPsym((P)"x-1108");
  lit_41 = YPPsym((P)"pushf");
  lit_42 = YPPsym((P)"push!");
  T36 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),LITREF(lit_40),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T37 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T37);
  lit_43 = YPPsym((P)"x-1112");
  lit_44 = YPPsym((P)"swapf");
  T40 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_28 = YPmet(FUNCODEREF(fun_x_1112_28),LITREF(lit_43),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T41 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T41);
  lit_45 = YPPsym((P)"x-1116");
  lit_46 = YPPsym((P)"popf");
  lit_47 = YPPsym((P)"tup");
  lit_48 = YPPsym((P)"pop!");
  T44 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_31 = YPmet(FUNCODEREF(fun_x_1116_31),LITREF(lit_45),T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T45 = fun_33;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T45);
  lit_49 = YPPsym((P)"x-1120");
  lit_50 = YPPsym((P)"opf");
  lit_51 = YPPsym((P)"_");
  T48 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_34 = YPmet(FUNCODEREF(fun_x_1120_34),LITREF(lit_49),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T49 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T49);
  lit_52 = YPPsym((P)"x-1124");
  lit_53 = YPPsym((P)"unless");
  lit_54 = YPPsym((P)"not");
  lit_55 = YPPsym((P)"seq");
  T52 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_37 = YPmet(FUNCODEREF(fun_x_1124_37),LITREF(lit_52),T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T53 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T53);
  lit_56 = YPPsym((P)"x-1128");
  lit_57 = YPPsym((P)"when");
  T56 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_40 = YPmet(FUNCODEREF(fun_x_1128_40),LITREF(lit_56),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T57 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T57);
  lit_58 = YPPsym((P)"x-1136");
  lit_59 = YPPsym((P)"or");
  lit_60 = YPPsym((P)"x-1138");
  lit_61 = YPPsym((P)"x-1140");
  lit_62 = YPPsym((P)"tmp");
  T64 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1136_43 = YPmet(FUNCODEREF(fun_x_1136_43),LITREF(lit_58),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1138_44 = YPmet(FUNCODEREF(fun_x_1138_44),LITREF(lit_60),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_45 = YPmet(FUNCODEREF(fun_x_1140_45),LITREF(lit_61),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T65 = fun_49;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T65);
  lit_63 = YPPsym((P)"x-1148");
  lit_64 = YPPsym((P)"and");
  lit_65 = YPPsym((P)"x-1150");
  lit_66 = YPPsym((P)"x-1152");
  T72 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_50 = YPmet(FUNCODEREF(fun_x_1148_50),LITREF(lit_63),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1150_51 = YPmet(FUNCODEREF(fun_x_1150_51),LITREF(lit_65),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1152_52 = YPmet(FUNCODEREF(fun_x_1152_52),LITREF(lit_66),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T73 = fun_56;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T73);
  lit_67 = YPPsym((P)"x-1158");
  lit_68 = YPPsym((P)"cond");
  lit_69 = YPPsym((P)"x-1160");
  lit_70 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T78 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1158_57 = YPmet(FUNCODEREF(fun_x_1158_57),LITREF(lit_67),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_58 = YPmet(FUNCODEREF(fun_x_1160_58),LITREF(lit_69),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T79 = fun_61;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T79);
  lit_71 = YPPsym((P)"do-case-by");
  lit_72 = YPPsym((P)"val");
  lit_73 = YPPsym((P)"tst");
  lit_74 = YPPsym((P)"cases");
  lit_75 = YPPsym((P)"x-1166");
  lit_76 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_77 = YPPsym((P)"x-1168");
  lit_78 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_79 = YPPsym((P)"x");
  T85 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1166_62 = YPmet(FUNCODEREF(fun_x_1166_62),LITREF(lit_75),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1168_63 = YPmet(FUNCODEREF(fun_x_1168_63),LITREF(lit_77),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(3,LITREF(lit_72),LITREF(lit_73),LITREF(lit_74)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_71),T80,ENVNUL,PNUL,YPfalse);
  T86 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T86);
  lit_80 = YPPsym((P)"x-1172");
  lit_81 = YPPsym((P)"case-by");
  T89 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_68 = YPmet(FUNCODEREF(fun_x_1172_68),LITREF(lit_80),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T90 = fun_70;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T90);
  lit_82 = YPPsym((P)"x-1176");
  lit_83 = YPPsym((P)"case");
  lit_84 = YPPsym((P)"==");
  T93 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_71 = YPmet(FUNCODEREF(fun_x_1176_71),LITREF(lit_82),T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T94 = fun_73;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T94);
  lit_85 = YPPsym((P)"x-1180");
  lit_86 = YPPsym((P)"op");
  lit_87 = YPPsym((P)"splice");
  lit_88 = YPPsym((P)"y");
  lit_89 = YPPsym((P)"...");
  lit_90 = YPPsym((P)"as");
  lit_91 = YPPsym((P)"<lst>");
  lit_92 = YPPsym((P)"_*");
  lit_93 = YPPsym((P)"lst");
  lit_94 = YPPsym((P)"rest-op?");
  lit_95 = YPPsym((P)"walk-op");
  lit_96 = YPPsym((P)"vars");
  lit_97 = YPsb((P)"_");
  lit_98 = YPPsym((P)"cat!");
  lit_99 = YPPsym((P)"fun");
  lit_100 = YPPlist(1,YPPlist(2,YPPsym((P)"_*"),YPPsym((P)"...")));
  T103 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_74 = YPmet(FUNCODEREF(fun_x_1180_74),LITREF(lit_85),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_splice_76 = YPmet(FUNCODEREF(fun_splice_76),LITREF(lit_87),T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_rest_opQ_77 = YPmet(FUNCODEREF(fun_rest_opQ_77),LITREF(lit_94),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(2,LITREF(lit_96),LITREF(lit_79)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_walk_op_80 = YPmet(FUNCODEREF(fun_walk_op_80),LITREF(lit_95),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T104 = fun_82;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"op"),T104);
  lit_101 = YPPsym((P)"x-1188");
  lit_102 = YPPsym((P)"match");
  lit_103 = YPPsym((P)"x-1190");
  lit_104 = YPPsym((P)"x-1192");
  lit_105 = YPsb((P)"Invalid match syntax.");
  lit_106 = YPPsym((P)"mif");
  lit_107 = YPsb((P)"Failed to match.");
  T111 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1188_83 = YPmet(FUNCODEREF(fun_x_1188_83),LITREF(lit_101),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_84 = YPmet(FUNCODEREF(fun_x_1192_84),LITREF(lit_104),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1190_86 = YPmet(FUNCODEREF(fun_x_1190_86),LITREF(lit_103),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T112 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T112);
  lit_108 = YPPsym((P)"x-1196");
  lit_109 = YPPsym((P)"assert");
  T115 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_90 = YPmet(FUNCODEREF(fun_x_1196_90),LITREF(lit_108),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T116 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T116);
  lit_110 = YPPsym((P)"x-1204");
  lit_111 = YPPsym((P)"for");
  lit_112 = YPPsym((P)"grok");
  lit_113 = YPPsym((P)"clauses");
  lit_114 = YPPsym((P)"preds");
  lit_115 = YPPsym((P)"nows");
  lit_116 = YPPsym((P)"nexts");
  lit_117 = YPPsym((P)"rep");
  lit_118 = YPPsym((P)"x-1206");
  lit_119 = YPPsym((P)"enum");
  lit_120 = YPPsym((P)"fin?");
  lit_121 = YPPsym((P)"x-1208");
  lit_122 = YPPsym((P)"now");
  lit_123 = YPPsym((P)"now-key");
  lit_124 = YPPsym((P)"nxt");
  T124 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_93 = YPmet(FUNCODEREF(fun_x_1204_93),LITREF(lit_110),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1206_94 = YPmet(FUNCODEREF(fun_x_1206_94),LITREF(lit_118),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_95 = YPmet(FUNCODEREF(fun_x_1208_95),LITREF(lit_121),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(5,LITREF(lit_113),LITREF(lit_26),LITREF(lit_114),LITREF(lit_115),LITREF(lit_116)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_98 = YPmet(FUNCODEREF(fun_grok_98),LITREF(lit_112),T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T125 = fun_100;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T125);
  lit_125 = YPPsym((P)"x-1212");
  lit_126 = YPPsym((P)"while");
  lit_127 = YPPsym((P)"_loop");
  T128 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_101 = YPmet(FUNCODEREF(fun_x_1212_101),LITREF(lit_125),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T129 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T129);
  lit_128 = YPPsym((P)"x-1216");
  lit_129 = YPPsym((P)"until");
  T132 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_104 = YPmet(FUNCODEREF(fun_x_1216_104),LITREF(lit_128),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T133);
  lit_130 = YPPsym((P)"x-1224");
  lit_131 = YPPsym((P)"dlet");
  lit_132 = YPPsym((P)"x-1226");
  lit_133 = YPPsym((P)"x-1228");
  lit_134 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_135 = YPPsym((P)"fin");
  T140 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1224_107 = YPmet(FUNCODEREF(fun_x_1224_107),LITREF(lit_130),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_108 = YPmet(FUNCODEREF(fun_x_1228_108),LITREF(lit_133),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1226_110 = YPmet(FUNCODEREF(fun_x_1226_110),LITREF(lit_132),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T141 = fun_113;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T141);
  lit_136 = YPPsym((P)"x-1232");
  lit_137 = YPPsym((P)"def-fun-var");
  lit_138 = YPsb((P)"*");
  lit_139 = YPsb((P)"*");
  lit_140 = YPPsym((P)"dv");
  lit_141 = YPPsym((P)"dm");
  lit_142 = YPPsym((P)"=>");
  lit_143 = YPPsym((P)"z");
  T144 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_114 = YPmet(FUNCODEREF(fun_x_1232_114),LITREF(lit_136),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T145 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T145);
  lit_144 = YPPsym((P)"x-1236");
  lit_145 = YPPsym((P)"without-prop-unbound-errors");
  lit_146 = YPPsym((P)"*report-prop-unbound-errors?*");
  T148 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_117 = YPmet(FUNCODEREF(fun_x_1236_117),LITREF(lit_144),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T149 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T149);
  lit_147 = YPPsym((P)"x-1240");
  lit_148 = YPPsym((P)"need-implementation");
  lit_149 = YPPsym((P)"export");
  T152 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_120 = YPmet(FUNCODEREF(fun_x_1240_120),LITREF(lit_147),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T153 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T153);
  lit_150 = YPPsym((P)"x-1262");
  lit_151 = YPPsym((P)"pub");
  lit_152 = YPPsym((P)"x-1265");
  lit_153 = YPPsym((P)"x-1268");
  lit_154 = YPPsym((P)"x-1271");
  lit_155 = YPPsym((P)"x-1274");
  lit_156 = YPPsym((P)"x-1277");
  lit_157 = YPPsym((P)"x-1280");
  lit_158 = YPPsym((P)"dc");
  lit_159 = YPPsym((P)"dg");
  lit_160 = YPPsym((P)"df");
  lit_161 = YPPsym((P)"dp");
  T168 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1262_123 = YPmet(FUNCODEREF(fun_x_1262_123),LITREF(lit_150),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1280_124 = YPmet(FUNCODEREF(fun_x_1280_124),LITREF(lit_157),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1277_126 = YPmet(FUNCODEREF(fun_x_1277_126),LITREF(lit_156),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1274_128 = YPmet(FUNCODEREF(fun_x_1274_128),LITREF(lit_155),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1271_130 = YPmet(FUNCODEREF(fun_x_1271_130),LITREF(lit_154),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1268_132 = YPmet(FUNCODEREF(fun_x_1268_132),LITREF(lit_153),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1265_134 = YPmet(FUNCODEREF(fun_x_1265_134),LITREF(lit_152),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T169 = fun_137;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T169);
  lit_162 = YPPsym((P)"x-1284");
  lit_163 = YPPsym((P)"exported");
  T173 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_138 = YPmet(FUNCODEREF(fun_x_1284_138),LITREF(lit_162),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T174 = fun_141;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T174);
  tmpF844 = YPfalse;
  if (tmpF844 != YPfalse) {
    T175 = VARREF(YgooSmacrosYEE);
  } else {
    T175 = YPfalse;
  }
  tmpF845 = YPfalse;
  if (tmpF845 != YPfalse) {
    T176 = VARREF(YgooSmacrosYdo);
  } else {
    T176 = YPfalse;
  }
  tmpF846 = YPfalse;
  if (tmpF846 != YPfalse) {
    T177 = VARREF(YgooSmacrosYrevX);
  } else {
    T177 = YPfalse;
  }
  tmpF847 = YPfalse;
  if (tmpF847 != YPfalse) {
    T178 = VARREF(YgooSmacrosYcat);
  } else {
    T178 = YPfalse;
  }
  tmpF848 = YPfalse;
  if (tmpF848 != YPfalse) {
    T179 = VARREF(YgooSmacrosYelt);
  } else {
    T179 = YPfalse;
  }
  tmpF849 = YPfalse;
  if (tmpF849 != YPfalse) {
    T180 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T180 = YPfalse;
  }
  tmpF850 = YPfalse;
  if (tmpF850 != YPfalse) {
    T181 = VARREF(Yerror);
  } else {
    T181 = YPfalse;
  }
  tmpF851 = YPfalse;
  if (tmpF851 != YPfalse) {
    T182 = VARREF(YgooSmacrosYgensym);
  } else {
    T182 = YPfalse;
  }
  tmpF852 = YPfalse;
  if (tmpF852 != YPfalse) {
    T183 = VARREF(Ylst);
  } else {
    T183 = YPfalse;
  }
  tmpF853 = YPfalse;
  if (tmpF853 != YPfalse) {
    T184 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T184 = YPfalse;
  }
  tmpF854 = YPfalse;
  if (tmpF854 != YPfalse) {
    T185 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T185 = YPfalse;
  }
  tmpF855 = YPfalse;
  if (tmpF855 != YPfalse) {
    T186 = VARREF(YgooSmacrosYmap);
  } else {
    T186 = YPfalse;
  }
  tmpF856 = YPfalse;
  if (tmpF856 != YPfalse) {
    T187 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T187 = YPfalse;
  }
  tmpF857 = YPfalse;
  if (tmpF857 != YPfalse) {
    T188 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T188 = YPfalse;
  }
  tmpF858 = YPfalse;
  if (tmpF858 != YPfalse) {
    T189 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T189 = YPfalse;
  }
  tmpF859 = YPfalse;
  if (tmpF859 != YPfalse) {
    T190 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T190 = YPfalse;
  }
  T191 = YPfalse;
  return T191;
}

P YgooSmacrosY___main_1___() {
  P tmpF864;
  P tmpF863;
  P tmpF862;
  P tmpF861;
  P tmpF860;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
loop:
  tmpF860 = YPfalse;
  if (tmpF860 != YPfalse) {
    T0 = VARREF(YgooSmacrosYpair);
  } else {
    T0 = YPfalse;
  }
  tmpF861 = YPfalse;
  if (tmpF861 != YPfalse) {
    T1 = VARREF(Ytup);
  } else {
    T1 = YPfalse;
  }
  tmpF862 = YPfalse;
  if (tmpF862 != YPfalse) {
    T2 = VARREF(YgooSmacrosYvar_name);
  } else {
    T2 = YPfalse;
  }
  tmpF863 = YPfalse;
  if (tmpF863 != YPfalse) {
    T3 = VARREF(YgooSmacrosYvar_type);
  } else {
    T3 = YPfalse;
  }
  tmpF864 = YPfalse;
  if (tmpF864 != YPfalse) {
    T4 = VARREF(YgooSmacrosYnapp);
  } else {
    T4 = YPfalse;
  }
  T5 = YPfalse;
  return T5;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%str", &module_info_gooSboot, "%str"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"if", &module_info_gooSboot, "if"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"export", &module_info_gooSboot, "export"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"@<", &module_info_gooSboot, "@<"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fin", &module_info_gooSboot, "fin"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"not", &module_info_gooSboot, "not"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"df", &module_info_gooSboot, "df"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"nul", &module_info_gooSboot, "nul"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"pair", CVAR, &YgooSmacrosYpair},
  {"until", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"when", PVAR, NULL},
  {"popf", PVAR, NULL},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"decf", PVAR, NULL},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"def-fun-var", PVAR, NULL},
  {"pub", PVAR, NULL},
  {"do", CVAR, &YgooSmacrosYdo},
  {"renew", PVAR, NULL},
  {"match", PVAR, NULL},
  {"and", PVAR, NULL},
  {"op", PVAR, NULL},
  {"while", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"sup", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"unless", PVAR, NULL},
  {"for", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"or", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"map", CVAR, &YgooSmacrosYmap},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"---main-0---", PVAR, NULL},
  {"app", PVAR, NULL},
  {"need-implementation", PVAR, NULL},
  {"incf", PVAR, NULL},
  {"==", CVAR, &YgooSmacrosYEE},
  {"match-empty-list", CVAR, &YgooSmacrosYmatch_empty_list},
  {"case", PVAR, NULL},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"pushf", PVAR, NULL},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"assert", PVAR, NULL},
  {"opf", PVAR, NULL},
  {"app-sup", PVAR, NULL},
  {"dlet", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"case-by", PVAR, NULL},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"pair", "pair"},
  {"until", "until"},
  {"error", "error"},
  {"lst", "lst"},
  {"tup", "tup"},
  {"exported", "exported"},
  {"when", "when"},
  {"popf", "popf"},
  {"cat-sym", "cat-sym"},
  {"elt", "elt"},
  {"decf", "decf"},
  {"napp", "napp"},
  {"match-sublist", "match-sublist"},
  {"def-fun-var", "def-fun-var"},
  {"pub", "pub"},
  {"do", "do"},
  {"renew", "renew"},
  {"match", "match"},
  {"and", "and"},
  {"op", "op"},
  {"while", "while"},
  {"swapf", "swapf"},
  {"sup", "sup"},
  {"match-atom", "match-atom"},
  {"unless", "unless"},
  {"var-type", "var-type"},
  {"for", "for"},
  {"match-unquote", "match-unquote"},
  {"map", "map"},
  {"empty?", "empty?"},
  {"app", "app"},
  {"need-implementation", "need-implementation"},
  {"incf", "incf"},
  {"==", "=="},
  {"match-empty-list", "match-empty-list"},
  {"case", "case"},
  {"cat", "cat"},
  {"pushf", "pushf"},
  {"var-name", "var-name"},
  {"rev!", "rev!"},
  {"assert", "assert"},
  {"opf", "opf"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"app-sup", "app-sup"},
  {"dlet", "dlet"},
  {"cond", "cond"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"or", "or"},
  {"fab-setter-name", "fab-setter-name"},
  {"case-by", "case-by"},
  {"gensym", "gensym"},
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
