/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(Ytype_class,"goo/boot","type-class");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yerror,"goo/boot","error");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Ynul,"goo/boot","nul");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yhead,"goo/boot","head");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ynil,"goo/boot","nil");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ynew,"goo/boot","new");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ynot,"goo/boot","not");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yprop_value,"goo/boot","prop-value");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_65);
DEFLIT(lit_31);
DEFLIT(lit_125);
DEFLIT(lit_163);
DEFLIT(lit_36);
DEFLIT(lit_112);
DEFLIT(lit_17);
DEFLIT(lit_53);
DEFLIT(lit_133);
DEFLIT(lit_26);
DEFLIT(lit_158);
DEFLIT(lit_108);
DEFLIT(lit_44);
DEFLIT(lit_49);
DEFLIT(lit_147);
DEFLIT(lit_42);
DEFLIT(lit_45);
DEFLIT(lit_123);
DEFLIT(lit_132);
DEFLIT(lit_33);
DEFLIT(lit_27);
DEFLIT(lit_61);
DEFLIT(lit_144);
DEFLIT(lit_136);
DEFLIT(lit_119);
DEFLIT(lit_57);
DEFLIT(lit_30);
DEFLIT(lit_130);
DEFLIT(lit_7);
DEFLIT(lit_39);
DEFLIT(lit_135);
DEFLIT(lit_11);
DEFLIT(lit_96);
DEFLIT(lit_71);
DEFLIT(lit_139);
DEFLIT(lit_103);
DEFLIT(lit_94);
DEFLIT(lit_75);
DEFLIT(lit_67);
DEFLIT(lit_22);
DEFLIT(lit_12);
DEFLIT(lit_150);
DEFLIT(lit_48);
DEFLIT(lit_128);
DEFLIT(lit_115);
DEFLIT(lit_154);
DEFLIT(lit_114);
DEFLIT(lit_159);
DEFLIT(lit_81);
DEFLIT(lit_82);
DEFLIT(lit_84);
DEFLIT(lit_79);
DEFLIT(lit_78);
DEFLIT(lit_52);
DEFLIT(lit_107);
DEFLIT(lit_83);
DEFLIT(lit_157);
DEFLIT(lit_87);
DEFLIT(lit_100);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_41);
DEFLIT(lit_104);
DEFLIT(lit_2);
DEFLIT(lit_32);
DEFLIT(lit_19);
DEFLIT(lit_60);
DEFLIT(lit_143);
DEFLIT(lit_54);
DEFLIT(lit_161);
DEFLIT(lit_118);
DEFLIT(lit_21);
DEFLIT(lit_56);
DEFLIT(lit_29);
DEFLIT(lit_153);
DEFLIT(lit_148);
DEFLIT(lit_5);
DEFLIT(lit_38);
DEFLIT(lit_160);
DEFLIT(lit_91);
DEFLIT(lit_10);
DEFLIT(lit_95);
DEFLIT(lit_13);
DEFLIT(lit_97);
DEFLIT(lit_51);
DEFLIT(lit_74);
DEFLIT(lit_140);
DEFLIT(lit_47);
DEFLIT(lit_24);
DEFLIT(lit_25);
DEFLIT(lit_142);
DEFLIT(lit_35);
DEFLIT(lit_126);
DEFLIT(lit_149);
DEFLIT(lit_165);
DEFLIT(lit_86);
DEFLIT(lit_121);
DEFLIT(lit_110);
DEFLIT(lit_76);
DEFLIT(lit_111);
DEFLIT(lit_90);
DEFLIT(lit_16);
DEFLIT(lit_156);
DEFLIT(lit_92);
DEFLIT(lit_55);
DEFLIT(lit_88);
DEFLIT(lit_141);
DEFLIT(lit_14);
DEFLIT(lit_40);
DEFLIT(lit_151);
DEFLIT(lit_162);
DEFLIT(lit_85);
DEFLIT(lit_101);
DEFLIT(lit_69);
DEFLIT(lit_64);
DEFLIT(lit_59);
DEFLIT(lit_4);
DEFLIT(lit_66);
DEFLIT(lit_117);
DEFLIT(lit_20);
DEFLIT(lit_28);
DEFLIT(lit_152);
DEFLIT(lit_164);
DEFLIT(lit_37);
DEFLIT(lit_105);
DEFLIT(lit_145);
DEFLIT(lit_9);
DEFLIT(lit_134);
DEFLIT(lit_137);
DEFLIT(lit_109);
DEFLIT(lit_99);
DEFLIT(lit_50);
DEFLIT(lit_73);
DEFLIT(lit_106);
DEFLIT(lit_46);
DEFLIT(lit_124);
DEFLIT(lit_113);
DEFLIT(lit_18);
DEFLIT(lit_131);
DEFLIT(lit_72);
DEFLIT(lit_34);
DEFLIT(lit_127);
DEFLIT(lit_62);
DEFLIT(lit_1);
DEFLIT(lit_98);
DEFLIT(lit_70);
DEFLIT(lit_120);
DEFLIT(lit_146);
DEFLIT(lit_3);
DEFLIT(lit_89);
DEFLIT(lit_155);
DEFLIT(lit_43);
DEFLIT(lit_93);
DEFLIT(lit_0);
DEFLIT(lit_138);
DEFLIT(lit_80);
DEFLIT(lit_122);
DEFLIT(lit_102);
DEFLIT(lit_77);
DEFLIT(lit_68);
DEFLIT(lit_63);
DEFLIT(lit_58);
DEFLIT(lit_8);
DEFLIT(lit_23);
DEFLIT(lit_129);
DEFLIT(lit_116);

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
LOCFOR(fun_x_1220_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1228_110);
LOCFOR(fun_x_1232_111);
LOCFOR(fun_112);
LOCFOR(fun_x_1230_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_1236_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1240_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1244_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1266_126);
LOCFOR(fun_x_1284_127);
LOCFOR(fun_128);
LOCFOR(fun_x_1281_129);
LOCFOR(fun_130);
LOCFOR(fun_x_1278_131);
LOCFOR(fun_132);
LOCFOR(fun_x_1275_133);
LOCFOR(fun_134);
LOCFOR(fun_x_1272_135);
LOCFOR(fun_136);
LOCFOR(fun_x_1269_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_x_1288_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
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
  P x_1075F454;
  P x_1075F453;
  P argsF452;
  P x_1075F451;
  P x_1076F450;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_0,1);
  x_1076F450 = T1;
  FUNINIT(x_1076F450, 1,return_);
  x_1075F451 = FREEREF(0);
  argsF452 = YPfalse;
  argsF452 = BOXFAB(argsF452);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F451,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F451,LITREF(lit_5),x_1076F450);
    x_1075F453 = T7;
    BOXVAL(argsF452) = x_1075F453;
    x_1075F454 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F454,x_1076F450);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1076F450,LITREF(lit_6),x_1075F451);
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
  T36 = BOXVAL(argsF452);
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
  P x_1079F459;
  P x_1079F458;
  P argsF457;
  P x_1079F456;
  P x_1080F455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_3,1);
  x_1080F455 = T1;
  FUNINIT(x_1080F455, 1,return_);
  x_1079F456 = FREEREF(0);
  argsF457 = YPfalse;
  argsF457 = BOXFAB(argsF457);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F456,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F456,LITREF(lit_18),x_1080F455);
    x_1079F458 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1079F458,x_1080F455);
    BOXVAL(argsF457) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1079F458);
    x_1079F459 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F459,x_1080F455);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1080F455,LITREF(lit_6),x_1079F456);
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
  T39 = BOXVAL(argsF457);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T34,T38,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T24 = CALL5(1,VARREF(YgooSmacrosYcat),T25,T26,T27,T40,Ynil);
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
  P x_1083F466;
  P x_1083F465;
  P x_1083F464;
  P argsF463;
  P fF462;
  P x_1083F461;
  P x_1084F460;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_6,1);
  x_1084F460 = T1;
  FUNINIT(x_1084F460, 1,return_);
  x_1083F461 = FREEREF(0);
  fF462 = YPfalse;
  fF462 = BOXFAB(fF462);
  argsF463 = YPfalse;
  argsF463 = BOXFAB(argsF463);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F461,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F461,LITREF(lit_21),x_1084F460);
    x_1083F464 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F464,x_1084F460);
    BOXVAL(fF462) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F464);
    x_1083F465 = T12;
    BOXVAL(argsF463) = x_1083F465;
    x_1083F466 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F466,x_1084F460);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1084F460,LITREF(lit_6),x_1083F461);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF462);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF463);
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
  P valF467;
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
    valF467 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF467);
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
  P setsF477;
  P loopF476;
  P varF475;
  P x_1087F474;
  P x_1087F473;
  P x_1087F472;
  P prop_initsF471;
  P xF470;
  P x_1087F469;
  P x_1088F468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_9,1);
  x_1088F468 = T1;
  FUNINIT(x_1088F468, 1,return_);
  x_1087F469 = FREEREF(0);
  xF470 = YPfalse;
  xF470 = BOXFAB(xF470);
  prop_initsF471 = YPfalse;
  prop_initsF471 = BOXFAB(prop_initsF471);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F469,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F469,LITREF(lit_23),x_1088F468);
    x_1087F472 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F472,x_1088F468);
    BOXVAL(xF470) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F472);
    x_1087F473 = T12;
    BOXVAL(prop_initsF471) = x_1087F473;
    x_1087F474 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F474,x_1088F468);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1088F468,LITREF(lit_6),x_1087F469);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF475 = T17;
  T20 = FUNSHELL(1,fun_loop_10,2);
  loopF476 = T20;
  FUNINIT(loopF476, 2,varF475,loopF476);
  T22 = BOXVAL(prop_initsF471);
  T21 = CALL2(0,loopF476,Ynil,T22);
  T19 = T21;
  setsF477 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF475);
  T31 = BOXVAL(xF470);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF475);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,setsF477,T32,Ynil);
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
  P gF481;
  P g_argsF480;
  P g_declsF479;
  P tup3F478;
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
    tup3F478 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F478,YPint((P)0));
    g_declsF479 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F478,YPint((P)1));
    g_argsF480 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF481 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF481);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF479);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF481,g_argsF480);
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
  P g_argsF485;
  P g_declsF484;
  P tup4F483;
  P munchF482;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF482 = T1;
  FUNINIT(munchF482, 1,munchF482);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF482,T7);
    tup4F483 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F483,YPint((P)0));
    g_declsF484 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F483,YPint((P)1));
    g_argsF485 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF485);
    T12 = CALL2(1,VARREF(Ytup),g_declsF484,T13);
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
  P x_1095F489;
  P amountF488;
  P x_1095F487;
  P x_1096F486;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_16,1);
  x_1096F486 = T1;
  FUNINIT(x_1096F486, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1095F487 = T3;
  amountF488 = YPfalse;
  amountF488 = BOXFAB(amountF488);
  T6 = CALL2(1,VARREF(YisaQ),x_1095F487,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F487,x_1096F486);
    BOXVAL(amountF488) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1095F487);
    x_1095F489 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F489,x_1096F486);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1096F486,LITREF(lit_6),x_1095F487);
  }
  T12 = BOXVAL(amountF488);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF500;
  P g_placeF499;
  P g_declsF498;
  P tup6F497;
  P x_1093F496;
  P x_1093F495;
  P x_1093F494;
  P amountF493;
  P placeF492;
  P x_1093F491;
  P x_1094F490;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F490 = T1;
  FUNINIT(x_1094F490, 1,return_);
  x_1093F491 = FREEREF(0);
  placeF492 = YPfalse;
  placeF492 = BOXFAB(placeF492);
  amountF493 = YPfalse;
  amountF493 = BOXFAB(amountF493);
  T7 = CALL2(1,VARREF(YisaQ),x_1093F491,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F491,LITREF(lit_33),x_1094F490);
    x_1093F494 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F494,x_1094F490);
    BOXVAL(placeF492) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1093F494);
    x_1093F495 = T12;
    BOXVAL(amountF493) = x_1093F495;
    x_1093F496 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F496,x_1094F490);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1094F490,LITREF(lit_6),x_1093F491);
  }
  T18 = BOXVAL(placeF492);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup6F497 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F497,YPint((P)0));
  g_declsF498 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F497,YPint((P)1));
  g_placeF499 = T22;
  T25 = FUNFAB(fun_17,1,amountF493);
  T24 = with_exit(T25);
  amountF500 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF498,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF499);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T37 = CALL1(1,VARREF(Ylst),g_placeF499);
  T38 = CALL1(1,VARREF(Ylst),amountF500);
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
  P x_1103F504;
  P amountF503;
  P x_1103F502;
  P x_1104F501;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_21,1);
  x_1104F501 = T1;
  FUNINIT(x_1104F501, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1103F502 = T3;
  amountF503 = YPfalse;
  amountF503 = BOXFAB(amountF503);
  T6 = CALL2(1,VARREF(YisaQ),x_1103F502,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F502,x_1104F501);
    BOXVAL(amountF503) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1103F502);
    x_1103F504 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F504,x_1104F501);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1104F501,LITREF(lit_6),x_1103F502);
  }
  T12 = BOXVAL(amountF503);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF515;
  P g_placeF514;
  P g_declsF513;
  P tup8F512;
  P x_1101F511;
  P x_1101F510;
  P x_1101F509;
  P amountF508;
  P placeF507;
  P x_1101F506;
  P x_1102F505;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_20,1);
  x_1102F505 = T1;
  FUNINIT(x_1102F505, 1,return_);
  x_1101F506 = FREEREF(0);
  placeF507 = YPfalse;
  placeF507 = BOXFAB(placeF507);
  amountF508 = YPfalse;
  amountF508 = BOXFAB(amountF508);
  T7 = CALL2(1,VARREF(YisaQ),x_1101F506,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F506,LITREF(lit_37),x_1102F505);
    x_1101F509 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F509,x_1102F505);
    BOXVAL(placeF507) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1101F509);
    x_1101F510 = T12;
    BOXVAL(amountF508) = x_1101F510;
    x_1101F511 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F511,x_1102F505);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1102F505,LITREF(lit_6),x_1101F506);
  }
  T18 = BOXVAL(placeF507);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup8F512 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F512,YPint((P)0));
  g_declsF513 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F512,YPint((P)1));
  g_placeF514 = T22;
  T25 = FUNFAB(fun_22,1,amountF508);
  T24 = with_exit(T25);
  amountF515 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF513,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF514);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T37 = CALL1(1,VARREF(Ylst),g_placeF514);
  T38 = CALL1(1,VARREF(Ylst),amountF515);
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
  P g_placeF525;
  P g_declsF524;
  P tup10F523;
  P x_1107F522;
  P x_1107F521;
  P x_1107F520;
  P valueF519;
  P placeF518;
  P x_1107F517;
  P x_1108F516;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F516 = T1;
  FUNINIT(x_1108F516, 1,return_);
  x_1107F517 = FREEREF(0);
  placeF518 = YPfalse;
  placeF518 = BOXFAB(placeF518);
  valueF519 = YPfalse;
  valueF519 = BOXFAB(valueF519);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F517,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F517,LITREF(lit_41),x_1108F516);
    x_1107F520 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F520,x_1108F516);
    BOXVAL(placeF518) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F520);
    x_1107F521 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F521,x_1108F516);
    BOXVAL(valueF519) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1107F521);
    x_1107F522 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F522,x_1108F516);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1108F516,LITREF(lit_6),x_1107F517);
  }
  T20 = BOXVAL(placeF518);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup10F523 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F523,YPint((P)0));
  g_declsF524 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F523,YPint((P)1));
  g_placeF525 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF524,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T32 = CALL1(1,VARREF(Ylst),g_placeF525);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T36 = CALL1(1,VARREF(Ylst),g_placeF525);
  T38 = BOXVAL(valueF519);
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
  P tmpF539;
  P yg_placeF538;
  P yg_declsF537;
  P tup14F536;
  P xg_placeF535;
  P xg_declsF534;
  P tup13F533;
  P x_1111F532;
  P x_1111F531;
  P x_1111F530;
  P yF529;
  P xF528;
  P x_1111F527;
  P x_1112F526;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_28,1);
  x_1112F526 = T1;
  FUNINIT(x_1112F526, 1,return_);
  x_1111F527 = FREEREF(0);
  xF528 = YPfalse;
  xF528 = BOXFAB(xF528);
  yF529 = YPfalse;
  yF529 = BOXFAB(yF529);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F527,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F527,LITREF(lit_44),x_1112F526);
    x_1111F530 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F530,x_1112F526);
    BOXVAL(xF528) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F530);
    x_1111F531 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F531,x_1112F526);
    BOXVAL(yF529) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F531);
    x_1111F532 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F532,x_1112F526);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1112F526,LITREF(lit_6),x_1111F527);
  }
  T20 = BOXVAL(xF528);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup13F533 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F533,YPint((P)0));
  xg_declsF534 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F533,YPint((P)1));
  xg_placeF535 = T24;
  T27 = BOXVAL(yF529);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup14F536 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F536,YPint((P)0));
  yg_declsF537 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F536,YPint((P)1));
  yg_placeF538 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF539 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF539);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF535);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF534,yg_declsF537,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF535);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF538);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF538);
  T51 = CALL1(1,VARREF(Ylst),tmpF539);
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
  P valF549;
  P new_colF548;
  P g_placeF547;
  P g_declsF546;
  P tup16F545;
  P x_1115F544;
  P x_1115F543;
  P placeF542;
  P x_1115F541;
  P x_1116F540;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_31,1);
  x_1116F540 = T1;
  FUNINIT(x_1116F540, 1,return_);
  x_1115F541 = FREEREF(0);
  placeF542 = YPfalse;
  placeF542 = BOXFAB(placeF542);
  T5 = CALL2(1,VARREF(YisaQ),x_1115F541,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F541,LITREF(lit_46),x_1116F540);
    x_1115F543 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F543,x_1116F540);
    BOXVAL(placeF542) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1115F543);
    x_1115F544 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F544,x_1116F540);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1116F540,LITREF(lit_6),x_1115F541);
  }
  T15 = BOXVAL(placeF542);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup16F545 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F545,YPint((P)0));
  g_declsF546 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F545,YPint((P)1));
  g_placeF547 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF548 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF549 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T33 = CALL1(1,VARREF(Ylst),new_colF548);
  T34 = CALL1(1,VARREF(Ylst),valF549);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T38 = CALL1(1,VARREF(Ylst),g_placeF547);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF546,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T42 = CALL1(1,VARREF(Ylst),g_placeF547);
  T43 = CALL1(1,VARREF(Ylst),new_colF548);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF549);
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
  P g_placeF559;
  P g_declsF558;
  P tup18F557;
  P x_1119F556;
  P x_1119F555;
  P x_1119F554;
  P callF553;
  P placeF552;
  P x_1119F551;
  P x_1120F550;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_34,1);
  x_1120F550 = T1;
  FUNINIT(x_1120F550, 1,return_);
  x_1119F551 = FREEREF(0);
  placeF552 = YPfalse;
  placeF552 = BOXFAB(placeF552);
  callF553 = YPfalse;
  callF553 = BOXFAB(callF553);
  T7 = CALL2(1,VARREF(YisaQ),x_1119F551,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F551,LITREF(lit_50),x_1120F550);
    x_1119F554 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F554,x_1120F550);
    BOXVAL(placeF552) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1119F554);
    x_1119F555 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F555,x_1120F550);
    BOXVAL(callF553) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1119F555);
    x_1119F556 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F556,x_1120F550);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1120F550,LITREF(lit_6),x_1119F551);
  }
  T20 = BOXVAL(placeF552);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup18F557 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F557,YPint((P)0));
  g_declsF558 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F557,YPint((P)1));
  g_placeF559 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),g_placeF559);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF558,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T36 = CALL1(1,VARREF(Ylst),g_placeF559);
  T38 = BOXVAL(callF553);
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
  P x_1123F566;
  P x_1123F565;
  P x_1123F564;
  P bodyF563;
  P testF562;
  P x_1123F561;
  P x_1124F560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_37,1);
  x_1124F560 = T1;
  FUNINIT(x_1124F560, 1,return_);
  x_1123F561 = FREEREF(0);
  testF562 = YPfalse;
  testF562 = BOXFAB(testF562);
  bodyF563 = YPfalse;
  bodyF563 = BOXFAB(bodyF563);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F561,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F561,LITREF(lit_53),x_1124F560);
    x_1123F564 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F564,x_1124F560);
    BOXVAL(testF562) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F564);
    x_1123F565 = T12;
    BOXVAL(bodyF563) = x_1123F565;
    x_1123F566 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F566,x_1124F560);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1124F560,LITREF(lit_6),x_1123F561);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = BOXVAL(testF562);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T26 = BOXVAL(bodyF563);
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
  P x_1127F573;
  P x_1127F572;
  P x_1127F571;
  P bodyF570;
  P testF569;
  P x_1127F568;
  P x_1128F567;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_40,1);
  x_1128F567 = T1;
  FUNINIT(x_1128F567, 1,return_);
  x_1127F568 = FREEREF(0);
  testF569 = YPfalse;
  testF569 = BOXFAB(testF569);
  bodyF570 = YPfalse;
  bodyF570 = BOXFAB(bodyF570);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F568,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F568,LITREF(lit_57),x_1128F567);
    x_1127F571 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F571,x_1128F567);
    BOXVAL(testF569) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F571);
    x_1127F572 = T12;
    BOXVAL(bodyF570) = x_1127F572;
    x_1127F573 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F573,x_1128F567);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1128F567,LITREF(lit_6),x_1127F568);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF569);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF570);
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
  P x_1139F575;
  P x_1140F574;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_45,3);
  x_1140F574 = T1;
  FUNINIT(x_1140F574, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1139F575 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1139F575,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F575,x_1140F574);
  } else {
    T6 = CALL2(1,x_1140F574,LITREF(lit_6),x_1139F575);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1137F581;
  P x_1137F580;
  P restF579;
  P xF578;
  P x_1137F577;
  P x_1138F576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1138_44,1);
  x_1138F576 = T1;
  FUNINIT(x_1138F576, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1137F577 = T3;
  xF578 = YPfalse;
  xF578 = BOXFAB(xF578);
  restF579 = YPfalse;
  restF579 = BOXFAB(restF579);
  T8 = CALL2(1,VARREF(YisaQ),x_1137F577,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1137F577,x_1138F576);
    BOXVAL(xF578) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1137F577);
    x_1137F580 = T11;
    BOXVAL(restF579) = x_1137F580;
    x_1137F581 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1137F581,x_1138F576);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1138F576,LITREF(lit_6),x_1137F577);
  }
  T16 = FUNFAB(fun_46,2,xF578,restF579);
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
  P x_1135F586;
  P x_1135F585;
  P restF584;
  P x_1135F583;
  P x_1136F582;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1136_43,1);
  x_1136F582 = T1;
  FUNINIT(x_1136F582, 1,return_);
  x_1135F583 = FREEREF(0);
  restF584 = YPfalse;
  restF584 = BOXFAB(restF584);
  T5 = CALL2(1,VARREF(YisaQ),x_1135F583,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F583,LITREF(lit_59),x_1136F582);
    x_1135F585 = T7;
    BOXVAL(restF584) = x_1135F585;
    x_1135F586 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F586,x_1136F582);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1136F582,LITREF(lit_6),x_1135F583);
  }
  T12 = FUNFAB(fun_47,1,restF584);
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
  P x_1151F588;
  P x_1152F587;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_52,3);
  x_1152F587 = T1;
  FUNINIT(x_1152F587, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1151F588 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1151F588,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F588,x_1152F587);
  } else {
    T6 = CALL2(1,x_1152F587,LITREF(lit_6),x_1151F588);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1149F594;
  P x_1149F593;
  P restF592;
  P xF591;
  P x_1149F590;
  P x_1150F589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_51,1);
  x_1150F589 = T1;
  FUNINIT(x_1150F589, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1149F590 = T3;
  xF591 = YPfalse;
  xF591 = BOXFAB(xF591);
  restF592 = YPfalse;
  restF592 = BOXFAB(restF592);
  T8 = CALL2(1,VARREF(YisaQ),x_1149F590,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1149F590,x_1150F589);
    BOXVAL(xF591) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1149F590);
    x_1149F593 = T11;
    BOXVAL(restF592) = x_1149F593;
    x_1149F594 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1149F594,x_1150F589);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1150F589,LITREF(lit_6),x_1149F590);
  }
  T16 = FUNFAB(fun_53,2,xF591,restF592);
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
  P x_1147F599;
  P x_1147F598;
  P restF597;
  P x_1147F596;
  P x_1148F595;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_50,1);
  x_1148F595 = T1;
  FUNINIT(x_1148F595, 1,return_);
  x_1147F596 = FREEREF(0);
  restF597 = YPfalse;
  restF597 = BOXFAB(restF597);
  T5 = CALL2(1,VARREF(YisaQ),x_1147F596,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F596,LITREF(lit_64),x_1148F595);
    x_1147F598 = T7;
    BOXVAL(restF597) = x_1147F598;
    x_1147F599 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F599,x_1148F595);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1148F595,LITREF(lit_6),x_1147F596);
  }
  T12 = FUNFAB(fun_54,1,restF597);
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
  P x_1159F605;
  P x_1159F604;
  P bodyF603;
  P condF602;
  P x_1159F601;
  P x_1160F600;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_58,2);
  x_1160F600 = T1;
  FUNINIT(x_1160F600, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1159F601 = T3;
  condF602 = YPfalse;
  condF602 = BOXFAB(condF602);
  bodyF603 = YPfalse;
  bodyF603 = BOXFAB(bodyF603);
  T9 = CALL2(1,VARREF(YisaQ),x_1159F601,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F601,x_1160F600);
    BOXVAL(condF602) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1159F601);
    x_1159F604 = T12;
    BOXVAL(bodyF603) = x_1159F604;
    x_1159F605 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F605,x_1160F600);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1160F600,LITREF(lit_6),x_1159F601);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF602);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF603);
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
  P x_1157F610;
  P x_1157F609;
  P casesF608;
  P x_1157F607;
  P x_1158F606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_57,1);
  x_1158F606 = T1;
  FUNINIT(x_1158F606, 1,return_);
  x_1157F607 = FREEREF(0);
  casesF608 = YPfalse;
  casesF608 = BOXFAB(casesF608);
  T5 = CALL2(1,VARREF(YisaQ),x_1157F607,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1157F607,LITREF(lit_68),x_1158F606);
    x_1157F609 = T7;
    BOXVAL(casesF608) = x_1157F609;
    x_1157F610 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F610,x_1158F606);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1158F606,LITREF(lit_6),x_1157F607);
  }
  T13 = BOXVAL(casesF608);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_59,1,casesF608);
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
  P x_1167F614;
  P valuesF613;
  P x_1167F612;
  P x_1168F611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1168_63,2);
  x_1168F611 = T1;
  FUNINIT(x_1168F611, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1167F612 = T3;
  valuesF613 = YPfalse;
  valuesF613 = BOXFAB(valuesF613);
  T6 = CALL2(1,VARREF(YisaQ),x_1167F612,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF613) = x_1167F612;
    x_1167F614 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F614,x_1168F611);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1168F611,LITREF(lit_6),x_1167F612);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T16 = FUNFAB(fun_64,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF613);
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
  P x_1165F620;
  P x_1165F619;
  P bodyF618;
  P condF617;
  P x_1165F616;
  P x_1166F615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1166_62,2);
  x_1166F615 = T1;
  FUNINIT(x_1166F615, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1165F616 = T3;
  condF617 = YPfalse;
  condF617 = BOXFAB(condF617);
  bodyF618 = YPfalse;
  bodyF618 = BOXFAB(bodyF618);
  T8 = CALL2(1,VARREF(YisaQ),x_1165F616,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1165F616,x_1166F615);
    BOXVAL(condF617) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1165F616);
    x_1165F619 = T11;
    BOXVAL(bodyF618) = x_1165F619;
    x_1165F620 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F620,x_1166F615);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1166F615,LITREF(lit_6),x_1165F616);
  }
  T17 = BOXVAL(condF617);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T20 = BOXVAL(bodyF618);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_65,5,FREEREF(0),condF617,FREEREF(1),FREEREF(2),bodyF618);
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
  P tst_varF631;
  P val_varF630;
  P x_1171F629;
  P x_1171F628;
  P x_1171F627;
  P x_1171F626;
  P casesF625;
  P tstF624;
  P valF623;
  P x_1171F622;
  P x_1172F621;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_68,1);
  x_1172F621 = T1;
  FUNINIT(x_1172F621, 1,return_);
  x_1171F622 = FREEREF(0);
  valF623 = YPfalse;
  valF623 = BOXFAB(valF623);
  tstF624 = YPfalse;
  tstF624 = BOXFAB(tstF624);
  casesF625 = YPfalse;
  casesF625 = BOXFAB(casesF625);
  T9 = CALL2(1,VARREF(YisaQ),x_1171F622,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1171F622,LITREF(lit_81),x_1172F621);
    x_1171F626 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F626,x_1172F621);
    BOXVAL(valF623) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1171F626);
    x_1171F627 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F627,x_1172F621);
    BOXVAL(tstF624) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1171F627);
    x_1171F628 = T17;
    BOXVAL(casesF625) = x_1171F628;
    x_1171F629 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F629,x_1172F621);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1172F621,LITREF(lit_6),x_1171F622);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF630 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF631 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF630);
  T33 = BOXVAL(valF623);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF631);
  T38 = BOXVAL(tstF624);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF625);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF630,tst_varF631,T41);
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
  P x_1175F638;
  P x_1175F637;
  P x_1175F636;
  P casesF635;
  P valF634;
  P x_1175F633;
  P x_1176F632;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_71,1);
  x_1176F632 = T1;
  FUNINIT(x_1176F632, 1,return_);
  x_1175F633 = FREEREF(0);
  valF634 = YPfalse;
  valF634 = BOXFAB(valF634);
  casesF635 = YPfalse;
  casesF635 = BOXFAB(casesF635);
  T7 = CALL2(1,VARREF(YisaQ),x_1175F633,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1175F633,LITREF(lit_83),x_1176F632);
    x_1175F636 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F636,x_1176F632);
    BOXVAL(valF634) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1175F636);
    x_1175F637 = T12;
    BOXVAL(casesF635) = x_1175F637;
    x_1175F638 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F638,x_1176F632);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1176F632,LITREF(lit_6),x_1175F633);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T19 = BOXVAL(valF634);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T21 = BOXVAL(casesF635);
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
  P tmpF640;
  P tmpF639;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF639 = T2;
  if (tmpF639 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF640 = T1;
  if (tmpF640 != YPfalse) {
    T5 = tmpF640;
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
  P yF643;
  P spliceQF642;
  P varF641;
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
    varF641 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF641,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF641;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_78;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF642 = T10;
      T14 = FUNFAB(fun_79,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF643 = T13;
      if (spliceQF642 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF643);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
        T24 = CALL1(1,VARREF(Ytail),yF643);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF643;
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
  P argsF656;
  P exprF655;
  P varsF654;
  P walk_opF653;
  P rest_opQF652;
  P spliceF651;
  P x_1179F650;
  P x_1179F649;
  P x_1179F648;
  P argsF647;
  P fF646;
  P x_1179F645;
  P x_1180F644;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_74,1);
  x_1180F644 = T1;
  FUNINIT(x_1180F644, 1,return_);
  x_1179F645 = FREEREF(0);
  fF646 = YPfalse;
  fF646 = BOXFAB(fF646);
  argsF647 = YPfalse;
  argsF647 = BOXFAB(argsF647);
  T7 = CALL2(1,VARREF(YisaQ),x_1179F645,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F645,LITREF(lit_86),x_1180F644);
    x_1179F648 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F648,x_1180F644);
    BOXVAL(fF646) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1179F648);
    x_1179F649 = T12;
    BOXVAL(argsF647) = x_1179F649;
    x_1179F650 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F650,x_1180F644);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1180F644,LITREF(lit_6),x_1179F645);
  }
  T17 = fun_splice_76;
  spliceF651 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_77,1);
  rest_opQF652 = T18;
  T19 = FUNSHELL(1,fun_walk_op_80,2);
  walk_opF653 = T19;
  FUNINIT(rest_opQF652, 1,rest_opQF652);
  FUNINIT(walk_opF653, 2,walk_opF653,spliceF651);
  T22 = BOXVAL(argsF647);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF646);
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
      T41 = BOXVAL(fF646);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF654 = T43;
    T48 = BOXVAL(fF646);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF647);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF653,varsF654,T46);
    exprF655 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF654);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF647);
    T55 = CALL1(1,rest_opQF652,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_100);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF656 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T59 = CALL1(1,VARREF(Ylst),argsF656);
    T60 = CALL1(1,VARREF(Ylst),exprF655);
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
  P varF667;
  P x_1191F666;
  P x_1191F665;
  P x_1191F664;
  P x_1191F663;
  P x_1191F662;
  P restF661;
  P thenF660;
  P patF659;
  P x_1191F658;
  P x_1192F657;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_84,1);
  x_1192F657 = T1;
  FUNINIT(x_1192F657, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1191F658 = T3;
  patF659 = YPfalse;
  patF659 = BOXFAB(patF659);
  thenF660 = YPfalse;
  thenF660 = BOXFAB(thenF660);
  restF661 = YPfalse;
  restF661 = BOXFAB(restF661);
  T10 = CALL2(1,VARREF(YisaQ),x_1191F658,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F658,x_1192F657);
    x_1191F662 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F662,x_1192F657);
    BOXVAL(patF659) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1191F662);
    x_1191F663 = T15;
    BOXVAL(thenF660) = x_1191F663;
    x_1191F664 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F664,x_1192F657);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1191F658);
    x_1191F665 = T18;
    BOXVAL(restF661) = x_1191F665;
    x_1191F666 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F666,x_1192F657);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1192F657,LITREF(lit_6),x_1191F658);
  }
  T24 = BOXVAL(patF659);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T27 = BOXVAL(thenF660);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF667 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF667);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
    T45 = BOXVAL(patF659);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF667);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T50 = BOXVAL(thenF660);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
    T54 = CALL1(1,VARREF(Ylst),varF667);
    T55 = BOXVAL(restF661);
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
  P x_1189F669;
  P x_1190F668;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1190_86,3);
  x_1190F668 = T1;
  FUNINIT(x_1190F668, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1189F669 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1189F669,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1189F669,x_1190F668);
  } else {
    T6 = CALL2(1,x_1190F668,LITREF(lit_6),x_1189F669);
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
  P x_1187F676;
  P x_1187F675;
  P x_1187F674;
  P casesF673;
  P expF672;
  P x_1187F671;
  P x_1188F670;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_83,1);
  x_1188F670 = T1;
  FUNINIT(x_1188F670, 1,return_);
  x_1187F671 = FREEREF(0);
  expF672 = YPfalse;
  expF672 = BOXFAB(expF672);
  casesF673 = YPfalse;
  casesF673 = BOXFAB(casesF673);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F671,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F671,LITREF(lit_102),x_1188F670);
    x_1187F674 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F674,x_1188F670);
    BOXVAL(expF672) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F674);
    x_1187F675 = T12;
    BOXVAL(casesF673) = x_1187F675;
    x_1187F676 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F676,x_1188F670);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1188F670,LITREF(lit_6),x_1187F671);
  }
  T17 = FUNFAB(fun_87,2,casesF673,expF672);
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
  P x_1195F685;
  P x_1195F684;
  P x_1195F683;
  P x_1195F682;
  P argsF681;
  P messageF680;
  P condF679;
  P x_1195F678;
  P x_1196F677;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_90,1);
  x_1196F677 = T1;
  FUNINIT(x_1196F677, 1,return_);
  x_1195F678 = FREEREF(0);
  condF679 = YPfalse;
  condF679 = BOXFAB(condF679);
  messageF680 = YPfalse;
  messageF680 = BOXFAB(messageF680);
  argsF681 = YPfalse;
  argsF681 = BOXFAB(argsF681);
  T9 = CALL2(1,VARREF(YisaQ),x_1195F678,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1195F678,LITREF(lit_109),x_1196F677);
    x_1195F682 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F682,x_1196F677);
    BOXVAL(condF679) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1195F682);
    x_1195F683 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F683,x_1196F677);
    BOXVAL(messageF680) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1195F683);
    x_1195F684 = T17;
    BOXVAL(argsF681) = x_1195F684;
    x_1195F685 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F685,x_1196F677);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1196F677,LITREF(lit_6),x_1195F678);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T27 = BOXVAL(condF679);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF680);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF681);
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
  P x_1207F692;
  P x_1207F691;
  P x_1207F690;
  P valF689;
  P keyF688;
  P x_1207F687;
  P x_1208F686;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_95,3);
  x_1208F686 = T1;
  FUNINIT(x_1208F686, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1207F687 = T3;
  keyF688 = YPfalse;
  keyF688 = BOXFAB(keyF688);
  valF689 = YPfalse;
  valF689 = BOXFAB(valF689);
  T8 = CALL2(1,VARREF(YisaQ),x_1207F687,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F687,LITREF(lit_47),x_1208F686);
    x_1207F690 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F690,x_1208F686);
    BOXVAL(keyF688) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1207F690);
    x_1207F691 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F691,x_1208F686);
    BOXVAL(valF689) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1207F691);
    x_1207F692 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F692,x_1208F686);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1208F686,LITREF(lit_6),x_1207F687);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T24 = BOXVAL(keyF688);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF689);
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
  P stateF699;
  P x_1205F698;
  P x_1205F697;
  P expF696;
  P varF695;
  P x_1205F694;
  P x_1206F693;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_94,1);
  x_1206F693 = T1;
  FUNINIT(x_1206F693, 1,return_);
  x_1205F694 = FREEREF(0);
  varF695 = YPfalse;
  varF695 = BOXFAB(varF695);
  expF696 = YPfalse;
  expF696 = BOXFAB(expF696);
  T7 = CALL2(1,VARREF(YisaQ),x_1205F694,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F694,x_1206F693);
    BOXVAL(varF695) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1205F694);
    x_1205F697 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F697,x_1206F693);
    BOXVAL(expF696) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1205F697);
    x_1205F698 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1205F698,x_1206F693);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1206F693,LITREF(lit_6),x_1205F694);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF699 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T22 = CALL1(1,VARREF(Ylst),stateF699);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_119));
  T27 = BOXVAL(expF696);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(2));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T31 = CALL1(1,VARREF(Ylst),stateF699);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(3));
  T34 = FUNFAB(fun_96,2,varF695,stateF699);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(4));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
  T38 = CALL1(1,VARREF(Ylst),stateF699);
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
  P clauseF701;
  P loopF700;
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
    loopF700 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
    T6 = CALL1(1,VARREF(Ylst),loopF700);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF700);
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
    clauseF701 = T23;
    T25 = FUNFAB(fun_97,7,clauseF701,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF711;
  P x_1203F710;
  P x_1203F709;
  P x_1203F708;
  P x_1203F707;
  P x_1203F706;
  P bodyF705;
  P clausesF704;
  P x_1203F703;
  P x_1204F702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_93,1);
  x_1204F702 = T1;
  FUNINIT(x_1204F702, 1,return_);
  x_1203F703 = FREEREF(0);
  clausesF704 = YPfalse;
  clausesF704 = BOXFAB(clausesF704);
  bodyF705 = YPfalse;
  bodyF705 = BOXFAB(bodyF705);
  T7 = CALL2(1,VARREF(YisaQ),x_1203F703,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1203F703,LITREF(lit_111),x_1204F702);
    x_1203F706 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F706,x_1204F702);
    x_1203F707 = T11;
    BOXVAL(clausesF704) = x_1203F707;
    x_1203F708 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F708,x_1204F702);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1203F706);
    x_1203F709 = T14;
    BOXVAL(bodyF705) = x_1203F709;
    x_1203F710 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F710,x_1204F702);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1204F702,LITREF(lit_6),x_1203F703);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF711 = T19;
  FUNINIT(grokF711, 2,bodyF705,grokF711);
  T21 = BOXVAL(clausesF704);
  T20 = CALL5(0,grokF711,T21,Ynil,Ynil,Ynil,Ynil);
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
  P x_1211F718;
  P x_1211F717;
  P x_1211F716;
  P bodyF715;
  P testF714;
  P x_1211F713;
  P x_1212F712;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_101,1);
  x_1212F712 = T1;
  FUNINIT(x_1212F712, 1,return_);
  x_1211F713 = FREEREF(0);
  testF714 = YPfalse;
  testF714 = BOXFAB(testF714);
  bodyF715 = YPfalse;
  bodyF715 = BOXFAB(bodyF715);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F713,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F713,LITREF(lit_126),x_1212F712);
    x_1211F716 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F716,x_1212F712);
    BOXVAL(testF714) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1211F716);
    x_1211F717 = T12;
    BOXVAL(bodyF715) = x_1211F717;
    x_1211F718 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F718,x_1212F712);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1212F712,LITREF(lit_6),x_1211F713);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T24 = BOXVAL(testF714);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF715);
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
  P x_1215F725;
  P x_1215F724;
  P x_1215F723;
  P bodyF722;
  P testF721;
  P x_1215F720;
  P x_1216F719;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_104,1);
  x_1216F719 = T1;
  FUNINIT(x_1216F719, 1,return_);
  x_1215F720 = FREEREF(0);
  testF721 = YPfalse;
  testF721 = BOXFAB(testF721);
  bodyF722 = YPfalse;
  bodyF722 = BOXFAB(bodyF722);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F720,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F720,LITREF(lit_129),x_1216F719);
    x_1215F723 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F723,x_1216F719);
    BOXVAL(testF721) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1215F723);
    x_1215F724 = T12;
    BOXVAL(bodyF722) = x_1215F724;
    x_1215F725 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F725,x_1216F719);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1216F719,LITREF(lit_6),x_1215F720);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T24 = BOXVAL(testF721);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF722);
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

FUNCODEDEF(fun_x_1220_107) {
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
  P x_1219F732;
  P x_1219F731;
  P x_1219F730;
  P expF729;
  P bindingF728;
  P x_1219F727;
  P x_1220F726;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1220_107,1);
  x_1220F726 = T1;
  FUNINIT(x_1220F726, 1,return_);
  x_1219F727 = FREEREF(0);
  bindingF728 = YPfalse;
  bindingF728 = BOXFAB(bindingF728);
  expF729 = YPfalse;
  expF729 = BOXFAB(expF729);
  T7 = CALL2(1,VARREF(YisaQ),x_1219F727,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F727,LITREF(lit_131),x_1220F726);
    x_1219F730 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F730,x_1220F726);
    BOXVAL(bindingF728) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1219F730);
    x_1219F731 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F731,x_1220F726);
    BOXVAL(expF729) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1219F731);
    x_1219F732 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F732,x_1220F726);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1220F726,LITREF(lit_6),x_1219F727);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T21 = BOXVAL(bindingF728);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF729);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_108,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1228_110) {
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

FUNCODEDEF(fun_x_1232_111) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_137),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P return_;
  P old_valueF744;
  P nameF743;
  P x_1231F742;
  P x_1231F741;
  P x_1231F740;
  P x_1231F739;
  P x_1231F738;
  P restF737;
  P valueF736;
  P varF735;
  P x_1231F734;
  P x_1232F733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_111,2);
  x_1232F733 = T1;
  FUNINIT(x_1232F733, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1231F734 = T3;
  varF735 = YPfalse;
  varF735 = BOXFAB(varF735);
  valueF736 = YPfalse;
  valueF736 = BOXFAB(valueF736);
  restF737 = YPfalse;
  restF737 = BOXFAB(restF737);
  T10 = CALL2(1,VARREF(YisaQ),x_1231F734,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F734,x_1232F733);
    x_1231F738 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F738,x_1232F733);
    BOXVAL(varF735) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F738);
    x_1231F739 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F739,x_1232F733);
    BOXVAL(valueF736) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1231F739);
    x_1231F740 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F740,x_1232F733);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1231F734);
    x_1231F741 = T20;
    BOXVAL(restF737) = x_1231F741;
    x_1231F742 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F742,x_1232F733);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1232F733,LITREF(lit_6),x_1231F734);
  }
  T26 = BOXVAL(varF735);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF743 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF744 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF744);
  T36 = CALL1(1,VARREF(Ylst),nameF743);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T46 = CALL1(1,VARREF(Ylst),nameF743);
  T48 = BOXVAL(valueF736);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T54 = BOXVAL(restF737);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T59 = CALL1(1,VARREF(Ylst),nameF743);
  T60 = CALL1(1,VARREF(Ylst),old_valueF744);
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

FUNCODEDEF(fun_x_1230_113) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_112,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P return_;
  P x_1229F746;
  P x_1230F745;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1230_113,3);
  x_1230F745 = T1;
  FUNINIT(x_1230F745, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1229F746 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1229F746,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1229F746,x_1230F745);
  } else {
    T6 = CALL2(1,x_1230F745,LITREF(lit_6),x_1229F746);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P return_;
  P x_1227F753;
  P x_1227F752;
  P x_1227F751;
  P bodyF750;
  P bindingsF749;
  P x_1227F748;
  P x_1228F747;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_110,1);
  x_1228F747 = T1;
  FUNINIT(x_1228F747, 1,return_);
  x_1227F748 = FREEREF(0);
  bindingsF749 = YPfalse;
  bindingsF749 = BOXFAB(bindingsF749);
  bodyF750 = YPfalse;
  bodyF750 = BOXFAB(bodyF750);
  T7 = CALL2(1,VARREF(YisaQ),x_1227F748,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F748,LITREF(lit_134),x_1228F747);
    x_1227F751 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F751,x_1228F747);
    BOXVAL(bindingsF749) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1227F751);
    x_1227F752 = T12;
    BOXVAL(bodyF750) = x_1227F752;
    x_1227F753 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F753,x_1228F747);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1228F747,LITREF(lit_6),x_1227F748);
  }
  T17 = FUNFAB(fun_114,2,bindingsF749,bodyF750);
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
  P vnamF763;
  P typF762;
  P namF761;
  P x_1235F760;
  P x_1235F759;
  P x_1235F758;
  P valueF757;
  P varF756;
  P x_1235F755;
  P x_1236F754;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_117,1);
  x_1236F754 = T1;
  FUNINIT(x_1236F754, 1,return_);
  x_1235F755 = FREEREF(0);
  varF756 = YPfalse;
  varF756 = BOXFAB(varF756);
  valueF757 = YPfalse;
  valueF757 = BOXFAB(valueF757);
  T7 = CALL2(1,VARREF(YisaQ),x_1235F755,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F755,LITREF(lit_140),x_1236F754);
    x_1235F758 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F758,x_1236F754);
    BOXVAL(varF756) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1235F758);
    x_1235F759 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F759,x_1236F754);
    BOXVAL(valueF757) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1235F759);
    x_1235F760 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F760,x_1236F754);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1236F754,LITREF(lit_6),x_1235F755);
  }
  T20 = BOXVAL(varF756);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF761 = T19;
  T23 = BOXVAL(varF756);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF762 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_141),namF761,LITREF(lit_142));
  vnamF763 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T31 = CALL1(1,VARREF(Ylst),vnamF763);
  T33 = BOXVAL(valueF757);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T37 = CALL1(1,VARREF(Ylst),namF761);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T41 = CALL1(1,VARREF(Ylst),typF762);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF763);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF761);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T53 = CALL1(1,VARREF(Ylst),typF762);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T57 = CALL1(1,VARREF(Ylst),vnamF763);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
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
  P x_1239F768;
  P x_1239F767;
  P bodyF766;
  P x_1239F765;
  P x_1240F764;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_120,1);
  x_1240F764 = T1;
  FUNINIT(x_1240F764, 1,return_);
  x_1239F765 = FREEREF(0);
  bodyF766 = YPfalse;
  bodyF766 = BOXFAB(bodyF766);
  T5 = CALL2(1,VARREF(YisaQ),x_1239F765,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F765,LITREF(lit_147),x_1240F764);
    x_1239F767 = T7;
    BOXVAL(bodyF766) = x_1239F767;
    x_1239F768 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F768,x_1240F764);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1240F764,LITREF(lit_6),x_1239F765);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF766);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T19,Ynil);
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

FUNCODEDEF(fun_x_1244_123) {
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
  P x_1243F773;
  P x_1243F772;
  P namesF771;
  P x_1243F770;
  P x_1244F769;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1244_123,1);
  x_1244F769 = T1;
  FUNINIT(x_1244F769, 1,return_);
  x_1243F770 = FREEREF(0);
  namesF771 = YPfalse;
  namesF771 = BOXFAB(namesF771);
  T5 = CALL2(1,VARREF(YisaQ),x_1243F770,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F770,LITREF(lit_150),x_1244F769);
    x_1243F772 = T7;
    BOXVAL(namesF771) = x_1243F772;
    x_1243F773 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F773,x_1244F769);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1244F769,LITREF(lit_6),x_1243F770);
  }
  T13 = BOXVAL(namesF771);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF771);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T28 = BOXVAL(namesF771);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
    T33 = BOXVAL(namesF771);
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

FUNCODEDEF(fun_125) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_124,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1266_126) {
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

FUNCODEDEF(fun_x_1284_127) {
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

FUNCODEDEF(fun_128) {
  P return_;
  P x_1283F777;
  P nameF776;
  P x_1283F775;
  P x_1284F774;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_127,1);
  x_1284F774 = T1;
  FUNINIT(x_1284F774, 1,return_);
  x_1283F775 = FREEREF(0);
  nameF776 = YPfalse;
  nameF776 = BOXFAB(nameF776);
  T5 = CALL2(1,VARREF(YisaQ),x_1283F775,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1283F775,x_1284F774);
    BOXVAL(nameF776) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1283F775);
    x_1283F777 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F777,x_1284F774);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1284F774,LITREF(lit_6),x_1283F775);
  }
  T13 = BOXVAL(nameF776);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF776);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T21 = BOXVAL(nameF776);
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

FUNCODEDEF(fun_x_1281_129) {
  P msg_,args_;
  P x_1282F778;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1282F778 = FREEREF(0);
  T3 = FUNFAB(fun_128,1,x_1282F778);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  P return_;
  P x_1280F785;
  P x_1280F784;
  P x_1280F783;
  P restF782;
  P nameF781;
  P x_1280F780;
  P x_1281F779;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1281_129,2);
  x_1281F779 = T1;
  FUNINIT(x_1281F779, 2,FREEREF(0),return_);
  x_1280F780 = FREEREF(0);
  nameF781 = YPfalse;
  nameF781 = BOXFAB(nameF781);
  restF782 = YPfalse;
  restF782 = BOXFAB(restF782);
  T7 = CALL2(1,VARREF(YisaQ),x_1280F780,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1280F780,LITREF(lit_160),x_1281F779);
    x_1280F783 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1280F783,x_1281F779);
    BOXVAL(nameF781) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1280F783);
    x_1280F784 = T12;
    BOXVAL(restF782) = x_1280F784;
    x_1280F785 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F785,x_1281F779);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1281F779,LITREF(lit_6),x_1280F780);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF781);
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

FUNCODEDEF(fun_x_1278_131) {
  P msg_,args_;
  P x_1279F786;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1279F786 = FREEREF(0);
  T3 = FUNFAB(fun_130,2,x_1279F786,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_132) {
  P return_;
  P x_1277F793;
  P x_1277F792;
  P x_1277F791;
  P restF790;
  P nameF789;
  P x_1277F788;
  P x_1278F787;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1278_131,3);
  x_1278F787 = T1;
  FUNINIT(x_1278F787, 3,FREEREF(0),FREEREF(1),return_);
  x_1277F788 = FREEREF(0);
  nameF789 = YPfalse;
  nameF789 = BOXFAB(nameF789);
  restF790 = YPfalse;
  restF790 = BOXFAB(restF790);
  T7 = CALL2(1,VARREF(YisaQ),x_1277F788,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1277F788,LITREF(lit_161),x_1278F787);
    x_1277F791 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1277F791,x_1278F787);
    BOXVAL(nameF789) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1277F791);
    x_1277F792 = T12;
    BOXVAL(restF790) = x_1277F792;
    x_1277F793 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F793,x_1278F787);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1278F787,LITREF(lit_6),x_1277F788);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF789);
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

FUNCODEDEF(fun_x_1275_133) {
  P msg_,args_;
  P x_1276F794;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1276F794 = FREEREF(0);
  T3 = FUNFAB(fun_132,2,x_1276F794,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  P return_;
  P x_1274F801;
  P x_1274F800;
  P x_1274F799;
  P restF798;
  P nameF797;
  P x_1274F796;
  P x_1275F795;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1275_133,3);
  x_1275F795 = T1;
  FUNINIT(x_1275F795, 3,FREEREF(0),FREEREF(1),return_);
  x_1274F796 = FREEREF(0);
  nameF797 = YPfalse;
  nameF797 = BOXFAB(nameF797);
  restF798 = YPfalse;
  restF798 = BOXFAB(restF798);
  T7 = CALL2(1,VARREF(YisaQ),x_1274F796,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1274F796,LITREF(lit_132),x_1275F795);
    x_1274F799 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1274F799,x_1275F795);
    BOXVAL(nameF797) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1274F799);
    x_1274F800 = T12;
    BOXVAL(restF798) = x_1274F800;
    x_1274F801 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1274F801,x_1275F795);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1275F795,LITREF(lit_6),x_1274F796);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
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

FUNCODEDEF(fun_x_1272_135) {
  P msg_,args_;
  P x_1273F802;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1273F802 = FREEREF(0);
  T3 = FUNFAB(fun_134,2,x_1273F802,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  P return_;
  P x_1271F809;
  P x_1271F808;
  P x_1271F807;
  P restF806;
  P nameF805;
  P x_1271F804;
  P x_1272F803;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1272_135,3);
  x_1272F803 = T1;
  FUNINIT(x_1272F803, 3,FREEREF(0),FREEREF(1),return_);
  x_1271F804 = FREEREF(0);
  nameF805 = YPfalse;
  nameF805 = BOXFAB(nameF805);
  restF806 = YPfalse;
  restF806 = BOXFAB(restF806);
  T7 = CALL2(1,VARREF(YisaQ),x_1271F804,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1271F804,LITREF(lit_162),x_1272F803);
    x_1271F807 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F807,x_1272F803);
    BOXVAL(nameF805) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1271F807);
    x_1271F808 = T12;
    BOXVAL(restF806) = x_1271F808;
    x_1271F809 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F809,x_1272F803);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1272F803,LITREF(lit_6),x_1271F804);
  }
  T18 = BOXVAL(nameF805);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
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

FUNCODEDEF(fun_x_1269_137) {
  P msg_,args_;
  P x_1270F810;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1270F810 = FREEREF(0);
  T3 = FUNFAB(fun_136,2,x_1270F810,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P x_1268F817;
  P x_1268F816;
  P x_1268F815;
  P restF814;
  P nameF813;
  P x_1268F812;
  P x_1269F811;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1269_137,3);
  x_1269F811 = T1;
  FUNINIT(x_1269F811, 3,FREEREF(0),FREEREF(1),return_);
  x_1268F812 = FREEREF(0);
  nameF813 = YPfalse;
  nameF813 = BOXFAB(nameF813);
  restF814 = YPfalse;
  restF814 = BOXFAB(restF814);
  T7 = CALL2(1,VARREF(YisaQ),x_1268F812,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1268F812,LITREF(lit_163),x_1269F811);
    x_1268F815 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1268F815,x_1269F811);
    BOXVAL(nameF813) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1268F815);
    x_1268F816 = T12;
    BOXVAL(restF814) = x_1268F816;
    x_1268F817 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1268F817,x_1269F811);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1269F811,LITREF(lit_6),x_1268F812);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF813);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T29 = BOXVAL(nameF813);
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

FUNCODEDEF(fun_139) {
  P return_;
  P defsF824;
  P x_1267F823;
  P x_1265F822;
  P x_1265F821;
  P defF820;
  P x_1265F819;
  P x_1266F818;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1266_126,1);
  x_1266F818 = T1;
  FUNINIT(x_1266F818, 1,return_);
  x_1265F819 = FREEREF(0);
  defF820 = YPfalse;
  defF820 = BOXFAB(defF820);
  T5 = CALL2(1,VARREF(YisaQ),x_1265F819,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F819,LITREF(lit_153),x_1266F818);
    x_1265F821 = T7;
    BOXVAL(defF820) = x_1265F821;
    x_1265F822 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F822,x_1266F818);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1266F818,LITREF(lit_6),x_1265F819);
  }
  T13 = BOXVAL(defF820);
  x_1267F823 = T13;
  T15 = FUNFAB(fun_138,2,x_1267F823,defF820);
  T14 = with_exit(T15);
  T12 = T14;
  defsF824 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF824,Ynil);
  T11 = T16;
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_139,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1288_141) {
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

FUNCODEDEF(fun_142) {
  P x_;
  P xF825;
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
  xF825 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF825,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P return_;
  P x_1287F830;
  P x_1287F829;
  P defsF828;
  P x_1287F827;
  P x_1288F826;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1288_141,1);
  x_1288F826 = T1;
  FUNINIT(x_1288F826, 1,return_);
  x_1287F827 = FREEREF(0);
  defsF828 = YPfalse;
  defsF828 = BOXFAB(defsF828);
  T5 = CALL2(1,VARREF(YisaQ),x_1287F827,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1287F827,LITREF(lit_165),x_1288F826);
    x_1287F829 = T7;
    BOXVAL(defsF828) = x_1287F829;
    x_1287F830 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F830,x_1288F826);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1288F826,LITREF(lit_6),x_1287F827);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T14 = fun_142;
  T15 = BOXVAL(defsF828);
  T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_144) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_143,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
  P tmpF846;
  P tmpF845;
  P tmpF844;
  P tmpF843;
  P tmpF842;
  P tmpF841;
  P tmpF840;
  P tmpF839;
  P tmpF838;
  P tmpF837;
  P tmpF836;
  P tmpF835;
  P tmpF834;
  P tmpF833;
  P tmpF832;
  P tmpF831;
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
  P T192,T193,T194;
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
  T18 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_munch_13 = YPmet(FUNCODEREF(fun_munch_13),LITREF(lit_30),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_28),T17,ENVNUL,PNUL,YPfalse);
  T19 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T19);
  lit_32 = YPPsym((P)"x-1094");
  lit_33 = YPPsym((P)"incf");
  lit_34 = YPPsym((P)"x-1096");
  lit_35 = YPPsym((P)"+");
  T24 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),LITREF(lit_32),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1096_16 = YPmet(FUNCODEREF(fun_x_1096_16),LITREF(lit_34),T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T25 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T25);
  lit_36 = YPPsym((P)"x-1102");
  lit_37 = YPPsym((P)"decf");
  lit_38 = YPPsym((P)"x-1104");
  lit_39 = YPPsym((P)"-");
  T30 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1102_20 = YPmet(FUNCODEREF(fun_x_1102_20),LITREF(lit_36),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1104_21 = YPmet(FUNCODEREF(fun_x_1104_21),LITREF(lit_38),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T31 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T31);
  lit_40 = YPPsym((P)"x-1108");
  lit_41 = YPPsym((P)"pushf");
  lit_42 = YPPsym((P)"push!");
  T34 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),LITREF(lit_40),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T35 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T35);
  lit_43 = YPPsym((P)"x-1112");
  lit_44 = YPPsym((P)"swapf");
  T38 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_28 = YPmet(FUNCODEREF(fun_x_1112_28),LITREF(lit_43),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T39 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T39);
  lit_45 = YPPsym((P)"x-1116");
  lit_46 = YPPsym((P)"popf");
  lit_47 = YPPsym((P)"tup");
  lit_48 = YPPsym((P)"pop!");
  T42 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_31 = YPmet(FUNCODEREF(fun_x_1116_31),LITREF(lit_45),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T43 = fun_33;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T43);
  lit_49 = YPPsym((P)"x-1120");
  lit_50 = YPPsym((P)"opf");
  lit_51 = YPPsym((P)"_");
  T46 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_34 = YPmet(FUNCODEREF(fun_x_1120_34),LITREF(lit_49),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T47 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T47);
  lit_52 = YPPsym((P)"x-1124");
  lit_53 = YPPsym((P)"unless");
  lit_54 = YPPsym((P)"not");
  lit_55 = YPPsym((P)"seq");
  T50 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_37 = YPmet(FUNCODEREF(fun_x_1124_37),LITREF(lit_52),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T51);
  lit_56 = YPPsym((P)"x-1128");
  lit_57 = YPPsym((P)"when");
  T54 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_40 = YPmet(FUNCODEREF(fun_x_1128_40),LITREF(lit_56),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T55 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T55);
  lit_58 = YPPsym((P)"x-1136");
  lit_59 = YPPsym((P)"or");
  lit_60 = YPPsym((P)"x-1138");
  lit_61 = YPPsym((P)"x-1140");
  lit_62 = YPPsym((P)"tmp");
  T62 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1136_43 = YPmet(FUNCODEREF(fun_x_1136_43),LITREF(lit_58),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1138_44 = YPmet(FUNCODEREF(fun_x_1138_44),LITREF(lit_60),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_45 = YPmet(FUNCODEREF(fun_x_1140_45),LITREF(lit_61),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T63 = fun_49;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T63);
  lit_63 = YPPsym((P)"x-1148");
  lit_64 = YPPsym((P)"and");
  lit_65 = YPPsym((P)"x-1150");
  lit_66 = YPPsym((P)"x-1152");
  T70 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_50 = YPmet(FUNCODEREF(fun_x_1148_50),LITREF(lit_63),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1150_51 = YPmet(FUNCODEREF(fun_x_1150_51),LITREF(lit_65),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1152_52 = YPmet(FUNCODEREF(fun_x_1152_52),LITREF(lit_66),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T71 = fun_56;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T71);
  lit_67 = YPPsym((P)"x-1158");
  lit_68 = YPPsym((P)"cond");
  lit_69 = YPPsym((P)"x-1160");
  lit_70 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T76 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1158_57 = YPmet(FUNCODEREF(fun_x_1158_57),LITREF(lit_67),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_58 = YPmet(FUNCODEREF(fun_x_1160_58),LITREF(lit_69),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T77 = fun_61;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T77);
  lit_71 = YPPsym((P)"do-case-by");
  lit_72 = YPPsym((P)"val");
  lit_73 = YPPsym((P)"tst");
  lit_74 = YPPsym((P)"cases");
  lit_75 = YPPsym((P)"x-1166");
  lit_76 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_77 = YPPsym((P)"x-1168");
  lit_78 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_79 = YPPsym((P)"x");
  T83 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1166_62 = YPmet(FUNCODEREF(fun_x_1166_62),LITREF(lit_75),T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1168_63 = YPmet(FUNCODEREF(fun_x_1168_63),LITREF(lit_77),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(3,LITREF(lit_72),LITREF(lit_73),LITREF(lit_74)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_71),T78,ENVNUL,PNUL,YPfalse);
  T84 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T84);
  lit_80 = YPPsym((P)"x-1172");
  lit_81 = YPPsym((P)"case-by");
  T87 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_68 = YPmet(FUNCODEREF(fun_x_1172_68),LITREF(lit_80),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T88 = fun_70;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T88);
  lit_82 = YPPsym((P)"x-1176");
  lit_83 = YPPsym((P)"case");
  lit_84 = YPPsym((P)"==");
  T91 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_71 = YPmet(FUNCODEREF(fun_x_1176_71),LITREF(lit_82),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_73;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T92);
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
  T101 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_74 = YPmet(FUNCODEREF(fun_x_1180_74),LITREF(lit_85),T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_splice_76 = YPmet(FUNCODEREF(fun_splice_76),LITREF(lit_87),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_rest_opQ_77 = YPmet(FUNCODEREF(fun_rest_opQ_77),LITREF(lit_94),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(2,LITREF(lit_96),LITREF(lit_79)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_walk_op_80 = YPmet(FUNCODEREF(fun_walk_op_80),LITREF(lit_95),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T102 = fun_82;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"op"),T102);
  lit_101 = YPPsym((P)"x-1188");
  lit_102 = YPPsym((P)"match");
  lit_103 = YPPsym((P)"x-1190");
  lit_104 = YPPsym((P)"x-1192");
  lit_105 = YPsb((P)"Invalid match syntax.");
  lit_106 = YPPsym((P)"mif");
  lit_107 = YPsb((P)"Failed to match.");
  T109 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1188_83 = YPmet(FUNCODEREF(fun_x_1188_83),LITREF(lit_101),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_84 = YPmet(FUNCODEREF(fun_x_1192_84),LITREF(lit_104),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1190_86 = YPmet(FUNCODEREF(fun_x_1190_86),LITREF(lit_103),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T110 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T110);
  lit_108 = YPPsym((P)"x-1196");
  lit_109 = YPPsym((P)"assert");
  T113 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_90 = YPmet(FUNCODEREF(fun_x_1196_90),LITREF(lit_108),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T114 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T114);
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
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_93 = YPmet(FUNCODEREF(fun_x_1204_93),LITREF(lit_110),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1206_94 = YPmet(FUNCODEREF(fun_x_1206_94),LITREF(lit_118),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_95 = YPmet(FUNCODEREF(fun_x_1208_95),LITREF(lit_121),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(5,LITREF(lit_113),LITREF(lit_26),LITREF(lit_114),LITREF(lit_115),LITREF(lit_116)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_98 = YPmet(FUNCODEREF(fun_grok_98),LITREF(lit_112),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T123 = fun_100;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T123);
  lit_125 = YPPsym((P)"x-1212");
  lit_126 = YPPsym((P)"while");
  lit_127 = YPPsym((P)"_loop");
  T126 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_101 = YPmet(FUNCODEREF(fun_x_1212_101),LITREF(lit_125),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T127 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T127);
  lit_128 = YPPsym((P)"x-1216");
  lit_129 = YPPsym((P)"until");
  T130 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_104 = YPmet(FUNCODEREF(fun_x_1216_104),LITREF(lit_128),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T131 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T131);
  lit_130 = YPPsym((P)"x-1220");
  lit_131 = YPPsym((P)"ddv");
  lit_132 = YPPsym((P)"dv");
  T134 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1220_107 = YPmet(FUNCODEREF(fun_x_1220_107),LITREF(lit_130),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_109;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"ddv"),T135);
  lit_133 = YPPsym((P)"x-1228");
  lit_134 = YPPsym((P)"dlet");
  lit_135 = YPPsym((P)"x-1230");
  lit_136 = YPPsym((P)"x-1232");
  lit_137 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_138 = YPPsym((P)"fin");
  T142 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_110 = YPmet(FUNCODEREF(fun_x_1228_110),LITREF(lit_133),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_111 = YPmet(FUNCODEREF(fun_x_1232_111),LITREF(lit_136),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1230_113 = YPmet(FUNCODEREF(fun_x_1230_113),LITREF(lit_135),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T143 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T143);
  lit_139 = YPPsym((P)"x-1236");
  lit_140 = YPPsym((P)"def-fun-var");
  lit_141 = YPsb((P)"*");
  lit_142 = YPsb((P)"*");
  lit_143 = YPPsym((P)"dm");
  lit_144 = YPPsym((P)"=>");
  lit_145 = YPPsym((P)"z");
  T146 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_117 = YPmet(FUNCODEREF(fun_x_1236_117),LITREF(lit_139),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T147 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T147);
  lit_146 = YPPsym((P)"x-1240");
  lit_147 = YPPsym((P)"without-prop-unbound-errors");
  lit_148 = YPPsym((P)"*report-prop-unbound-errors?*");
  T150 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_120 = YPmet(FUNCODEREF(fun_x_1240_120),LITREF(lit_146),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T151 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T151);
  lit_149 = YPPsym((P)"x-1244");
  lit_150 = YPPsym((P)"need-implementation");
  lit_151 = YPPsym((P)"export");
  T154 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1244_123 = YPmet(FUNCODEREF(fun_x_1244_123),LITREF(lit_149),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T155 = fun_125;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T155);
  lit_152 = YPPsym((P)"x-1266");
  lit_153 = YPPsym((P)"pub");
  lit_154 = YPPsym((P)"x-1269");
  lit_155 = YPPsym((P)"x-1272");
  lit_156 = YPPsym((P)"x-1275");
  lit_157 = YPPsym((P)"x-1278");
  lit_158 = YPPsym((P)"x-1281");
  lit_159 = YPPsym((P)"x-1284");
  lit_160 = YPPsym((P)"dc");
  lit_161 = YPPsym((P)"dg");
  lit_162 = YPPsym((P)"df");
  lit_163 = YPPsym((P)"dp");
  T170 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1266_126 = YPmet(FUNCODEREF(fun_x_1266_126),LITREF(lit_152),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_127 = YPmet(FUNCODEREF(fun_x_1284_127),LITREF(lit_159),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1281_129 = YPmet(FUNCODEREF(fun_x_1281_129),LITREF(lit_158),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1278_131 = YPmet(FUNCODEREF(fun_x_1278_131),LITREF(lit_157),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1275_133 = YPmet(FUNCODEREF(fun_x_1275_133),LITREF(lit_156),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1272_135 = YPmet(FUNCODEREF(fun_x_1272_135),LITREF(lit_155),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1269_137 = YPmet(FUNCODEREF(fun_x_1269_137),LITREF(lit_154),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T171 = fun_140;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T171);
  lit_164 = YPPsym((P)"x-1288");
  lit_165 = YPPsym((P)"exported");
  T175 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1288_141 = YPmet(FUNCODEREF(fun_x_1288_141),LITREF(lit_164),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T176 = fun_144;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T176);
  tmpF831 = YPfalse;
  if (tmpF831 != YPfalse) {
    T177 = VARREF(YgooSmacrosYEE);
  } else {
    T177 = YPfalse;
  }
  tmpF832 = YPfalse;
  if (tmpF832 != YPfalse) {
    T178 = VARREF(YgooSmacrosYdo);
  } else {
    T178 = YPfalse;
  }
  tmpF833 = YPfalse;
  if (tmpF833 != YPfalse) {
    T179 = VARREF(YgooSmacrosYrevX);
  } else {
    T179 = YPfalse;
  }
  tmpF834 = YPfalse;
  if (tmpF834 != YPfalse) {
    T180 = VARREF(YgooSmacrosYcat);
  } else {
    T180 = YPfalse;
  }
  tmpF835 = YPfalse;
  if (tmpF835 != YPfalse) {
    T181 = VARREF(YgooSmacrosYelt);
  } else {
    T181 = YPfalse;
  }
  tmpF836 = YPfalse;
  if (tmpF836 != YPfalse) {
    T182 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T182 = YPfalse;
  }
  tmpF837 = YPfalse;
  if (tmpF837 != YPfalse) {
    T183 = VARREF(Yerror);
  } else {
    T183 = YPfalse;
  }
  tmpF838 = YPfalse;
  if (tmpF838 != YPfalse) {
    T184 = VARREF(YgooSmacrosYgensym);
  } else {
    T184 = YPfalse;
  }
  tmpF839 = YPfalse;
  if (tmpF839 != YPfalse) {
    T185 = VARREF(Ylst);
  } else {
    T185 = YPfalse;
  }
  tmpF840 = YPfalse;
  if (tmpF840 != YPfalse) {
    T186 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T186 = YPfalse;
  }
  tmpF841 = YPfalse;
  if (tmpF841 != YPfalse) {
    T187 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T187 = YPfalse;
  }
  tmpF842 = YPfalse;
  if (tmpF842 != YPfalse) {
    T188 = VARREF(YgooSmacrosYmap);
  } else {
    T188 = YPfalse;
  }
  tmpF843 = YPfalse;
  if (tmpF843 != YPfalse) {
    T189 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T189 = YPfalse;
  }
  tmpF844 = YPfalse;
  if (tmpF844 != YPfalse) {
    T190 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T190 = YPfalse;
  }
  tmpF845 = YPfalse;
  if (tmpF845 != YPfalse) {
    T191 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T191 = YPfalse;
  }
  tmpF846 = YPfalse;
  if (tmpF846 != YPfalse) {
    T194 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T194 = YPfalse;
  }
  T193 = T194;
  T192 = T193;
  return T192;
}

P YgooSmacrosY___main_1___() {
  P tmpF851;
  P tmpF850;
  P tmpF849;
  P tmpF848;
  P tmpF847;
  P T0,T1,T2,T3,T4,T5;
loop:
  tmpF847 = YPfalse;
  if (tmpF847 != YPfalse) {
    T0 = VARREF(YgooSmacrosYpair);
  } else {
    T0 = YPfalse;
  }
  tmpF848 = YPfalse;
  if (tmpF848 != YPfalse) {
    T1 = VARREF(Ytup);
  } else {
    T1 = YPfalse;
  }
  tmpF849 = YPfalse;
  if (tmpF849 != YPfalse) {
    T2 = VARREF(YgooSmacrosYvar_name);
  } else {
    T2 = YPfalse;
  }
  tmpF850 = YPfalse;
  if (tmpF850 != YPfalse) {
    T3 = VARREF(YgooSmacrosYvar_type);
  } else {
    T3 = YPfalse;
  }
  tmpF851 = YPfalse;
  if (tmpF851 != YPfalse) {
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
  {"%i+", &module_info_gooSboot, "%i+"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"try", &module_info_gooSboot, "try"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%get", &module_info_gooSboot, "%get"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"def", &module_info_gooSboot, "def"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"@len", &module_info_gooSboot, "@len"},
  {"head", &module_info_gooSboot, "head"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"if", &module_info_gooSboot, "if"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dss", &module_info_gooSboot, "dss"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"lst", &module_info_gooSboot, "lst"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"@+", &module_info_gooSboot, "@+"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"df", &module_info_gooSboot, "df"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"new", &module_info_gooSboot, "new"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"not", &module_info_gooSboot, "not"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", NULL},
  {"pair", &YgooSmacrosYpair},
  {"dlet", NULL},
  {"do", &YgooSmacrosYdo},
  {"opf", NULL},
  {"cat-sym", &YgooSmacrosYcat_sym},
  {"map", &YgooSmacrosYmap},
  {"renew", NULL},
  {"incf", NULL},
  {"while", NULL},
  {"rev!", &YgooSmacrosYrevX},
  {"pub", NULL},
  {"---main-0---", NULL},
  {"==", &YgooSmacrosYEE},
  {"pushf", NULL},
  {"do-case-by", &YgooSmacrosYdo_case_by},
  {"and", NULL},
  {"when", NULL},
  {"case", NULL},
  {"match-sublist", &YgooSmacrosYmatch_sublist},
  {"elt", &YgooSmacrosYelt},
  {"napp", &YgooSmacrosYnapp},
  {"def-fun-var", NULL},
  {"empty?", &YgooSmacrosYemptyQ},
  {"ddv", NULL},
  {"fab-setter-name", &YgooSmacrosYfab_setter_name},
  {"app", NULL},
  {"match-atom", &YgooSmacrosYmatch_atom},
  {"var-name", &YgooSmacrosYvar_name},
  {"popf", NULL},
  {"need-implementation", NULL},
  {"for", NULL},
  {"match", NULL},
  {"case-by", NULL},
  {"sup", NULL},
  {"gensym", &YgooSmacrosYgensym},
  {"match-unquote", &YgooSmacrosYmatch_unquote},
  {"lift-place-subforms", &YgooSmacrosYlift_place_subforms},
  {"cond", NULL},
  {"unless", NULL},
  {"var-type", &YgooSmacrosYvar_type},
  {"decf", NULL},
  {"until", NULL},
  {"match-empty-list", &YgooSmacrosYmatch_empty_list},
  {"app-sup", NULL},
  {"cat", &YgooSmacrosYcat},
  {"swapf", NULL},
  {"exported", NULL},
  {"op", NULL},
  {"assert", NULL},
  {"without-prop-unbound-errors", NULL},
  {"or", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"pair", "pair"},
  {"do", "do"},
  {"opf", "opf"},
  {"while", "while"},
  {"cat-sym", "cat-sym"},
  {"dlet", "dlet"},
  {"error", "error"},
  {"map", "map"},
  {"renew", "renew"},
  {"var-name", "var-name"},
  {"rev!", "rev!"},
  {"pub", "pub"},
  {"==", "=="},
  {"pushf", "pushf"},
  {"and", "and"},
  {"when", "when"},
  {"case", "case"},
  {"incf", "incf"},
  {"match-sublist", "match-sublist"},
  {"elt", "elt"},
  {"napp", "napp"},
  {"def-fun-var", "def-fun-var"},
  {"empty?", "empty?"},
  {"ddv", "ddv"},
  {"fab-setter-name", "fab-setter-name"},
  {"tup", "tup"},
  {"app", "app"},
  {"lst", "lst"},
  {"match-atom", "match-atom"},
  {"popf", "popf"},
  {"need-implementation", "need-implementation"},
  {"for", "for"},
  {"match", "match"},
  {"case-by", "case-by"},
  {"sup", "sup"},
  {"gensym", "gensym"},
  {"match-unquote", "match-unquote"},
  {"cond", "cond"},
  {"unless", "unless"},
  {"var-type", "var-type"},
  {"decf", "decf"},
  {"until", "until"},
  {"match-empty-list", "match-empty-list"},
  {"app-sup", "app-sup"},
  {"cat", "cat"},
  {"swapf", "swapf"},
  {"exported", "exported"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"op", "op"},
  {"assert", "assert"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
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
