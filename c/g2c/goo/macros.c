/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Ynot,"goo/boot","not");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yhead,"goo/boot","head");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YPisa,"goo/boot","%isa");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLunionG,"goo/boot","<union>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yerror,"goo/boot","error");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ynew,"goo/boot","new");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ytail,"goo/boot","tail");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfind_getter,"goo/boot","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_47);
DEFLIT(lit_61);
DEFLIT(lit_15);
DEFLIT(lit_33);
DEFLIT(lit_122);
DEFLIT(lit_25);
DEFLIT(lit_133);
DEFLIT(lit_84);
DEFLIT(lit_147);
DEFLIT(lit_112);
DEFLIT(lit_38);
DEFLIT(lit_18);
DEFLIT(lit_148);
DEFLIT(lit_131);
DEFLIT(lit_36);
DEFLIT(lit_107);
DEFLIT(lit_134);
DEFLIT(lit_99);
DEFLIT(lit_143);
DEFLIT(lit_80);
DEFLIT(lit_103);
DEFLIT(lit_153);
DEFLIT(lit_50);
DEFLIT(lit_140);
DEFLIT(lit_75);
DEFLIT(lit_54);
DEFLIT(lit_164);
DEFLIT(lit_124);
DEFLIT(lit_10);
DEFLIT(lit_76);
DEFLIT(lit_87);
DEFLIT(lit_104);
DEFLIT(lit_52);
DEFLIT(lit_149);
DEFLIT(lit_27);
DEFLIT(lit_127);
DEFLIT(lit_118);
DEFLIT(lit_152);
DEFLIT(lit_57);
DEFLIT(lit_111);
DEFLIT(lit_59);
DEFLIT(lit_42);
DEFLIT(lit_155);
DEFLIT(lit_69);
DEFLIT(lit_48);
DEFLIT(lit_26);
DEFLIT(lit_98);
DEFLIT(lit_65);
DEFLIT(lit_7);
DEFLIT(lit_51);
DEFLIT(lit_53);
DEFLIT(lit_121);
DEFLIT(lit_46);
DEFLIT(lit_150);
DEFLIT(lit_34);
DEFLIT(lit_30);
DEFLIT(lit_114);
DEFLIT(lit_21);
DEFLIT(lit_132);
DEFLIT(lit_117);
DEFLIT(lit_141);
DEFLIT(lit_22);
DEFLIT(lit_19);
DEFLIT(lit_40);
DEFLIT(lit_83);
DEFLIT(lit_12);
DEFLIT(lit_102);
DEFLIT(lit_3);
DEFLIT(lit_108);
DEFLIT(lit_74);
DEFLIT(lit_110);
DEFLIT(lit_97);
DEFLIT(lit_28);
DEFLIT(lit_64);
DEFLIT(lit_119);
DEFLIT(lit_86);
DEFLIT(lit_123);
DEFLIT(lit_71);
DEFLIT(lit_90);
DEFLIT(lit_126);
DEFLIT(lit_142);
DEFLIT(lit_106);
DEFLIT(lit_94);
DEFLIT(lit_56);
DEFLIT(lit_146);
DEFLIT(lit_100);
DEFLIT(lit_128);
DEFLIT(lit_68);
DEFLIT(lit_162);
DEFLIT(lit_129);
DEFLIT(lit_163);
DEFLIT(lit_0);
DEFLIT(lit_41);
DEFLIT(lit_17);
DEFLIT(lit_120);
DEFLIT(lit_6);
DEFLIT(lit_113);
DEFLIT(lit_37);
DEFLIT(lit_35);
DEFLIT(lit_72);
DEFLIT(lit_88);
DEFLIT(lit_45);
DEFLIT(lit_16);
DEFLIT(lit_13);
DEFLIT(lit_160);
DEFLIT(lit_9);
DEFLIT(lit_23);
DEFLIT(lit_165);
DEFLIT(lit_82);
DEFLIT(lit_43);
DEFLIT(lit_11);
DEFLIT(lit_154);
DEFLIT(lit_24);
DEFLIT(lit_31);
DEFLIT(lit_73);
DEFLIT(lit_1);
DEFLIT(lit_93);
DEFLIT(lit_32);
DEFLIT(lit_63);
DEFLIT(lit_62);
DEFLIT(lit_85);
DEFLIT(lit_78);
DEFLIT(lit_109);
DEFLIT(lit_89);
DEFLIT(lit_125);
DEFLIT(lit_116);
DEFLIT(lit_5);
DEFLIT(lit_159);
DEFLIT(lit_135);
DEFLIT(lit_157);
DEFLIT(lit_55);
DEFLIT(lit_67);
DEFLIT(lit_66);
DEFLIT(lit_29);
DEFLIT(lit_20);
DEFLIT(lit_115);
DEFLIT(lit_14);
DEFLIT(lit_139);
DEFLIT(lit_138);
DEFLIT(lit_96);
DEFLIT(lit_91);
DEFLIT(lit_77);
DEFLIT(lit_39);
DEFLIT(lit_151);
DEFLIT(lit_79);
DEFLIT(lit_137);
DEFLIT(lit_130);
DEFLIT(lit_81);
DEFLIT(lit_161);
DEFLIT(lit_58);
DEFLIT(lit_156);
DEFLIT(lit_44);
DEFLIT(lit_70);
DEFLIT(lit_158);
DEFLIT(lit_136);
DEFLIT(lit_92);
DEFLIT(lit_95);
DEFLIT(lit_105);
DEFLIT(lit_49);
DEFLIT(lit_101);
DEFLIT(lit_2);
DEFLIT(lit_144);
DEFLIT(lit_145);
DEFLIT(lit_60);
DEFLIT(lit_8);

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
  P x_1075F455;
  P x_1075F454;
  P argsF453;
  P x_1075F452;
  P x_1076F451;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_0,1);
  x_1076F451 = T1;
  FUNINIT(x_1076F451, 1,return_);
  x_1075F452 = FREEREF(0);
  argsF453 = YPfalse;
  argsF453 = BOXFAB(argsF453);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F452,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F452,LITREF(lit_5),x_1076F451);
    x_1075F454 = T7;
    BOXVAL(argsF453) = x_1075F454;
    x_1075F455 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F455,x_1076F451);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1076F451,LITREF(lit_6),x_1075F452);
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
  P x_1079F460;
  P x_1079F459;
  P argsF458;
  P x_1079F457;
  P x_1080F456;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_3,1);
  x_1080F456 = T1;
  FUNINIT(x_1080F456, 1,return_);
  x_1079F457 = FREEREF(0);
  argsF458 = YPfalse;
  argsF458 = BOXFAB(argsF458);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F457,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F457,LITREF(lit_18),x_1080F456);
    x_1079F459 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1079F459,x_1080F456);
    BOXVAL(argsF458) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1079F459);
    x_1079F460 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F460,x_1080F456);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1080F456,LITREF(lit_6),x_1079F457);
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
  P x_1083F467;
  P x_1083F466;
  P x_1083F465;
  P argsF464;
  P fF463;
  P x_1083F462;
  P x_1084F461;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_6,1);
  x_1084F461 = T1;
  FUNINIT(x_1084F461, 1,return_);
  x_1083F462 = FREEREF(0);
  fF463 = YPfalse;
  fF463 = BOXFAB(fF463);
  argsF464 = YPfalse;
  argsF464 = BOXFAB(argsF464);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F462,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F462,LITREF(lit_21),x_1084F461);
    x_1083F465 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F465,x_1084F461);
    BOXVAL(fF463) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F465);
    x_1083F466 = T12;
    BOXVAL(argsF464) = x_1083F466;
    x_1083F467 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F467,x_1084F461);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1084F461,LITREF(lit_6),x_1083F462);
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

FUNCODEDEF(fun_loop_10) {
  P sets_,inits_;
  P valF468;
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
    valF468 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF468);
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
  P setsF478;
  P loopF477;
  P varF476;
  P x_1087F475;
  P x_1087F474;
  P x_1087F473;
  P prop_initsF472;
  P xF471;
  P x_1087F470;
  P x_1088F469;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_9,1);
  x_1088F469 = T1;
  FUNINIT(x_1088F469, 1,return_);
  x_1087F470 = FREEREF(0);
  xF471 = YPfalse;
  xF471 = BOXFAB(xF471);
  prop_initsF472 = YPfalse;
  prop_initsF472 = BOXFAB(prop_initsF472);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F470,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F470,LITREF(lit_23),x_1088F469);
    x_1087F473 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F473,x_1088F469);
    BOXVAL(xF471) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F473);
    x_1087F474 = T12;
    BOXVAL(prop_initsF472) = x_1087F474;
    x_1087F475 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F475,x_1088F469);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1088F469,LITREF(lit_6),x_1087F470);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF476 = T17;
  T20 = FUNSHELL(1,fun_loop_10,2);
  loopF477 = T20;
  FUNINIT(loopF477, 2,varF476,loopF477);
  T22 = BOXVAL(prop_initsF472);
  T21 = CALL2(0,loopF477,Ynil,T22);
  T19 = T21;
  setsF478 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF476);
  T31 = BOXVAL(xF471);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF476);
  T23 = CALLN(1,VARREF(YgooSmacrosYcat),5,T24,T25,setsF478,T32,Ynil);
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
  P T1,T0;
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
  P gF482;
  P g_argsF481;
  P g_declsF480;
  P tup3F479;
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
    tup3F479 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F479,YPint((P)0));
    g_declsF480 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F479,YPint((P)1));
    g_argsF481 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF482 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF482);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF480);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF482,g_argsF481);
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
  P g_argsF486;
  P g_declsF485;
  P tup4F484;
  P munchF483;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF483 = T1;
  FUNINIT(munchF483, 1,munchF483);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF483,T7);
    tup4F484 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F484,YPint((P)0));
    g_declsF485 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F484,YPint((P)1));
    g_argsF486 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF486);
    T12 = CALL2(1,VARREF(Ytup),g_declsF485,T13);
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
  P x_1095F490;
  P amountF489;
  P x_1095F488;
  P x_1096F487;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_16,1);
  x_1096F487 = T1;
  FUNINIT(x_1096F487, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1095F488 = T3;
  amountF489 = YPfalse;
  amountF489 = BOXFAB(amountF489);
  T6 = CALL2(1,VARREF(YisaQ),x_1095F488,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F488,x_1096F487);
    BOXVAL(amountF489) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1095F488);
    x_1095F490 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F490,x_1096F487);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1096F487,LITREF(lit_6),x_1095F488);
  }
  T12 = BOXVAL(amountF489);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF501;
  P g_placeF500;
  P g_declsF499;
  P tup6F498;
  P x_1093F497;
  P x_1093F496;
  P x_1093F495;
  P amountF494;
  P placeF493;
  P x_1093F492;
  P x_1094F491;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,1);
  x_1094F491 = T1;
  FUNINIT(x_1094F491, 1,return_);
  x_1093F492 = FREEREF(0);
  placeF493 = YPfalse;
  placeF493 = BOXFAB(placeF493);
  amountF494 = YPfalse;
  amountF494 = BOXFAB(amountF494);
  T7 = CALL2(1,VARREF(YisaQ),x_1093F492,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F492,LITREF(lit_33),x_1094F491);
    x_1093F495 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F495,x_1094F491);
    BOXVAL(placeF493) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1093F495);
    x_1093F496 = T12;
    BOXVAL(amountF494) = x_1093F496;
    x_1093F497 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F497,x_1094F491);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1094F491,LITREF(lit_6),x_1093F492);
  }
  T18 = BOXVAL(placeF493);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup6F498 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F498,YPint((P)0));
  g_declsF499 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F498,YPint((P)1));
  g_placeF500 = T22;
  T25 = FUNFAB(fun_17,1,amountF494);
  T24 = with_exit(T25);
  amountF501 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF499,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF500);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T37 = CALL1(1,VARREF(Ylst),g_placeF500);
  T38 = CALL1(1,VARREF(Ylst),amountF501);
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
  P T1,T0;
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
  P x_1103F505;
  P amountF504;
  P x_1103F503;
  P x_1104F502;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_21,1);
  x_1104F502 = T1;
  FUNINIT(x_1104F502, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1103F503 = T3;
  amountF504 = YPfalse;
  amountF504 = BOXFAB(amountF504);
  T6 = CALL2(1,VARREF(YisaQ),x_1103F503,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F503,x_1104F502);
    BOXVAL(amountF504) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1103F503);
    x_1103F505 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F505,x_1104F502);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1104F502,LITREF(lit_6),x_1103F503);
  }
  T12 = BOXVAL(amountF504);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF516;
  P g_placeF515;
  P g_declsF514;
  P tup8F513;
  P x_1101F512;
  P x_1101F511;
  P x_1101F510;
  P amountF509;
  P placeF508;
  P x_1101F507;
  P x_1102F506;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_20,1);
  x_1102F506 = T1;
  FUNINIT(x_1102F506, 1,return_);
  x_1101F507 = FREEREF(0);
  placeF508 = YPfalse;
  placeF508 = BOXFAB(placeF508);
  amountF509 = YPfalse;
  amountF509 = BOXFAB(amountF509);
  T7 = CALL2(1,VARREF(YisaQ),x_1101F507,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F507,LITREF(lit_37),x_1102F506);
    x_1101F510 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F510,x_1102F506);
    BOXVAL(placeF508) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1101F510);
    x_1101F511 = T12;
    BOXVAL(amountF509) = x_1101F511;
    x_1101F512 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F512,x_1102F506);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1102F506,LITREF(lit_6),x_1101F507);
  }
  T18 = BOXVAL(placeF508);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup8F513 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F513,YPint((P)0));
  g_declsF514 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F513,YPint((P)1));
  g_placeF515 = T22;
  T25 = FUNFAB(fun_22,1,amountF509);
  T24 = with_exit(T25);
  amountF516 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF514,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF515);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T37 = CALL1(1,VARREF(Ylst),g_placeF515);
  T38 = CALL1(1,VARREF(Ylst),amountF516);
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

FUNCODEDEF(fun_26) {
  P return_;
  P g_placeF526;
  P g_declsF525;
  P tup10F524;
  P x_1107F523;
  P x_1107F522;
  P x_1107F521;
  P valueF520;
  P placeF519;
  P x_1107F518;
  P x_1108F517;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,1);
  x_1108F517 = T1;
  FUNINIT(x_1108F517, 1,return_);
  x_1107F518 = FREEREF(0);
  placeF519 = YPfalse;
  placeF519 = BOXFAB(placeF519);
  valueF520 = YPfalse;
  valueF520 = BOXFAB(valueF520);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F518,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F518,LITREF(lit_41),x_1108F517);
    x_1107F521 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F521,x_1108F517);
    BOXVAL(placeF519) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F521);
    x_1107F522 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F522,x_1108F517);
    BOXVAL(valueF520) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1107F522);
    x_1107F523 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F523,x_1108F517);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1108F517,LITREF(lit_6),x_1107F518);
  }
  T20 = BOXVAL(placeF519);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup10F524 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F524,YPint((P)0));
  g_declsF525 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F524,YPint((P)1));
  g_placeF526 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF525,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T32 = CALL1(1,VARREF(Ylst),g_placeF526);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T36 = CALL1(1,VARREF(Ylst),g_placeF526);
  T38 = BOXVAL(valueF520);
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
  P T1,T0;
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
  P tmpF540;
  P yg_placeF539;
  P yg_declsF538;
  P tup14F537;
  P xg_placeF536;
  P xg_declsF535;
  P tup13F534;
  P x_1111F533;
  P x_1111F532;
  P x_1111F531;
  P yF530;
  P xF529;
  P x_1111F528;
  P x_1112F527;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_28,1);
  x_1112F527 = T1;
  FUNINIT(x_1112F527, 1,return_);
  x_1111F528 = FREEREF(0);
  xF529 = YPfalse;
  xF529 = BOXFAB(xF529);
  yF530 = YPfalse;
  yF530 = BOXFAB(yF530);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F528,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F528,LITREF(lit_44),x_1112F527);
    x_1111F531 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F531,x_1112F527);
    BOXVAL(xF529) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F531);
    x_1111F532 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F532,x_1112F527);
    BOXVAL(yF530) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F532);
    x_1111F533 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F533,x_1112F527);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1112F527,LITREF(lit_6),x_1111F528);
  }
  T20 = BOXVAL(xF529);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup13F534 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F534,YPint((P)0));
  xg_declsF535 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F534,YPint((P)1));
  xg_placeF536 = T24;
  T27 = BOXVAL(yF530);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup14F537 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F537,YPint((P)0));
  yg_declsF538 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F537,YPint((P)1));
  yg_placeF539 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF540 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF540);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF536);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF535,yg_declsF538,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF536);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF539);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF539);
  T51 = CALL1(1,VARREF(Ylst),tmpF540);
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

FUNCODEDEF(fun_30) {
  P exp_;
  P T1,T0;
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
  P valF550;
  P new_colF549;
  P g_placeF548;
  P g_declsF547;
  P tup16F546;
  P x_1115F545;
  P x_1115F544;
  P placeF543;
  P x_1115F542;
  P x_1116F541;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_31,1);
  x_1116F541 = T1;
  FUNINIT(x_1116F541, 1,return_);
  x_1115F542 = FREEREF(0);
  placeF543 = YPfalse;
  placeF543 = BOXFAB(placeF543);
  T5 = CALL2(1,VARREF(YisaQ),x_1115F542,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F542,LITREF(lit_46),x_1116F541);
    x_1115F544 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F544,x_1116F541);
    BOXVAL(placeF543) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1115F544);
    x_1115F545 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F545,x_1116F541);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1116F541,LITREF(lit_6),x_1115F542);
  }
  T15 = BOXVAL(placeF543);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup16F546 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F546,YPint((P)0));
  g_declsF547 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F546,YPint((P)1));
  g_placeF548 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF549 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF550 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T33 = CALL1(1,VARREF(Ylst),new_colF549);
  T34 = CALL1(1,VARREF(Ylst),valF550);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T38 = CALL1(1,VARREF(Ylst),g_placeF548);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF547,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T42 = CALL1(1,VARREF(Ylst),g_placeF548);
  T43 = CALL1(1,VARREF(Ylst),new_colF549);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF550);
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
  P g_placeF560;
  P g_declsF559;
  P tup18F558;
  P x_1119F557;
  P x_1119F556;
  P x_1119F555;
  P callF554;
  P placeF553;
  P x_1119F552;
  P x_1120F551;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_34,1);
  x_1120F551 = T1;
  FUNINIT(x_1120F551, 1,return_);
  x_1119F552 = FREEREF(0);
  placeF553 = YPfalse;
  placeF553 = BOXFAB(placeF553);
  callF554 = YPfalse;
  callF554 = BOXFAB(callF554);
  T7 = CALL2(1,VARREF(YisaQ),x_1119F552,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F552,LITREF(lit_50),x_1120F551);
    x_1119F555 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F555,x_1120F551);
    BOXVAL(placeF553) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1119F555);
    x_1119F556 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F556,x_1120F551);
    BOXVAL(callF554) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1119F556);
    x_1119F557 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F557,x_1120F551);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1120F551,LITREF(lit_6),x_1119F552);
  }
  T20 = BOXVAL(placeF553);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup18F558 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F558,YPint((P)0));
  g_declsF559 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F558,YPint((P)1));
  g_placeF560 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),g_placeF560);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF559,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T36 = CALL1(1,VARREF(Ylst),g_placeF560);
  T38 = BOXVAL(callF554);
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
  P x_1123F567;
  P x_1123F566;
  P x_1123F565;
  P bodyF564;
  P testF563;
  P x_1123F562;
  P x_1124F561;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_37,1);
  x_1124F561 = T1;
  FUNINIT(x_1124F561, 1,return_);
  x_1123F562 = FREEREF(0);
  testF563 = YPfalse;
  testF563 = BOXFAB(testF563);
  bodyF564 = YPfalse;
  bodyF564 = BOXFAB(bodyF564);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F562,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F562,LITREF(lit_53),x_1124F561);
    x_1123F565 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F565,x_1124F561);
    BOXVAL(testF563) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F565);
    x_1123F566 = T12;
    BOXVAL(bodyF564) = x_1123F566;
    x_1123F567 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F567,x_1124F561);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1124F561,LITREF(lit_6),x_1123F562);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = BOXVAL(testF563);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T26 = BOXVAL(bodyF564);
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
  P x_1127F574;
  P x_1127F573;
  P x_1127F572;
  P bodyF571;
  P testF570;
  P x_1127F569;
  P x_1128F568;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_40,1);
  x_1128F568 = T1;
  FUNINIT(x_1128F568, 1,return_);
  x_1127F569 = FREEREF(0);
  testF570 = YPfalse;
  testF570 = BOXFAB(testF570);
  bodyF571 = YPfalse;
  bodyF571 = BOXFAB(bodyF571);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F569,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F569,LITREF(lit_57),x_1128F568);
    x_1127F572 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F572,x_1128F568);
    BOXVAL(testF570) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F572);
    x_1127F573 = T12;
    BOXVAL(bodyF571) = x_1127F573;
    x_1127F574 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F574,x_1128F568);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1128F568,LITREF(lit_6),x_1127F569);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF570);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF571);
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
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
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
  T11 = CALLN(1,VARREF(YgooSmacrosYcat),5,T12,T13,T14,T15,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P return_;
  P x_1139F576;
  P x_1140F575;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_45,3);
  x_1140F575 = T1;
  FUNINIT(x_1140F575, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1139F576 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1139F576,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F576,x_1140F575);
  } else {
    T6 = CALL2(1,x_1140F575,LITREF(lit_6),x_1139F576);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1137F582;
  P x_1137F581;
  P restF580;
  P xF579;
  P x_1137F578;
  P x_1138F577;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1138_44,1);
  x_1138F577 = T1;
  FUNINIT(x_1138F577, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1137F578 = T3;
  xF579 = YPfalse;
  xF579 = BOXFAB(xF579);
  restF580 = YPfalse;
  restF580 = BOXFAB(restF580);
  T8 = CALL2(1,VARREF(YisaQ),x_1137F578,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1137F578,x_1138F577);
    BOXVAL(xF579) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1137F578);
    x_1137F581 = T11;
    BOXVAL(restF580) = x_1137F581;
    x_1137F582 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1137F582,x_1138F577);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1138F577,LITREF(lit_6),x_1137F578);
  }
  T16 = FUNFAB(fun_46,2,xF579,restF580);
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
  P x_1135F587;
  P x_1135F586;
  P restF585;
  P x_1135F584;
  P x_1136F583;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1136_43,1);
  x_1136F583 = T1;
  FUNINIT(x_1136F583, 1,return_);
  x_1135F584 = FREEREF(0);
  restF585 = YPfalse;
  restF585 = BOXFAB(restF585);
  T5 = CALL2(1,VARREF(YisaQ),x_1135F584,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F584,LITREF(lit_59),x_1136F583);
    x_1135F586 = T7;
    BOXVAL(restF585) = x_1135F586;
    x_1135F587 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F587,x_1136F583);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1136F583,LITREF(lit_6),x_1135F584);
  }
  T12 = FUNFAB(fun_47,1,restF585);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P exp_;
  P T1,T0;
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
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
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
  T11 = CALLN(1,VARREF(YgooSmacrosYcat),5,T12,T13,T14,T18,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1151F589;
  P x_1152F588;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_52,3);
  x_1152F588 = T1;
  FUNINIT(x_1152F588, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1151F589 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1151F589,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F589,x_1152F588);
  } else {
    T6 = CALL2(1,x_1152F588,LITREF(lit_6),x_1151F589);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1149F595;
  P x_1149F594;
  P restF593;
  P xF592;
  P x_1149F591;
  P x_1150F590;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1150_51,1);
  x_1150F590 = T1;
  FUNINIT(x_1150F590, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1149F591 = T3;
  xF592 = YPfalse;
  xF592 = BOXFAB(xF592);
  restF593 = YPfalse;
  restF593 = BOXFAB(restF593);
  T8 = CALL2(1,VARREF(YisaQ),x_1149F591,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1149F591,x_1150F590);
    BOXVAL(xF592) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1149F591);
    x_1149F594 = T11;
    BOXVAL(restF593) = x_1149F594;
    x_1149F595 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1149F595,x_1150F590);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1150F590,LITREF(lit_6),x_1149F591);
  }
  T16 = FUNFAB(fun_53,2,xF592,restF593);
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
  P x_1147F600;
  P x_1147F599;
  P restF598;
  P x_1147F597;
  P x_1148F596;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_50,1);
  x_1148F596 = T1;
  FUNINIT(x_1148F596, 1,return_);
  x_1147F597 = FREEREF(0);
  restF598 = YPfalse;
  restF598 = BOXFAB(restF598);
  T5 = CALL2(1,VARREF(YisaQ),x_1147F597,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F597,LITREF(lit_64),x_1148F596);
    x_1147F599 = T7;
    BOXVAL(restF598) = x_1147F599;
    x_1147F600 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F600,x_1148F596);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1148F596,LITREF(lit_6),x_1147F597);
  }
  T12 = FUNFAB(fun_54,1,restF598);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P exp_;
  P T1,T0;
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
  P T3,T2,T1,T0;
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
  P x_1159F606;
  P x_1159F605;
  P bodyF604;
  P condF603;
  P x_1159F602;
  P x_1160F601;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_58,2);
  x_1160F601 = T1;
  FUNINIT(x_1160F601, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1159F602 = T3;
  condF603 = YPfalse;
  condF603 = BOXFAB(condF603);
  bodyF604 = YPfalse;
  bodyF604 = BOXFAB(bodyF604);
  T9 = CALL2(1,VARREF(YisaQ),x_1159F602,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F602,x_1160F601);
    BOXVAL(condF603) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1159F602);
    x_1159F605 = T12;
    BOXVAL(bodyF604) = x_1159F605;
    x_1159F606 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F606,x_1160F601);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1160F601,LITREF(lit_6),x_1159F602);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF603);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF604);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
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

FUNCODEDEF(fun_60) {
  P return_;
  P x_1157F611;
  P x_1157F610;
  P casesF609;
  P x_1157F608;
  P x_1158F607;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_57,1);
  x_1158F607 = T1;
  FUNINIT(x_1158F607, 1,return_);
  x_1157F608 = FREEREF(0);
  casesF609 = YPfalse;
  casesF609 = BOXFAB(casesF609);
  T5 = CALL2(1,VARREF(YisaQ),x_1157F608,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1157F608,LITREF(lit_68),x_1158F607);
    x_1157F610 = T7;
    BOXVAL(casesF609) = x_1157F610;
    x_1157F611 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F611,x_1158F607);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1158F607,LITREF(lit_6),x_1157F608);
  }
  T13 = BOXVAL(casesF609);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_59,1,casesF609);
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

FUNCODEDEF(fun_x_1166_62) {
  P msg_,args_;
  P T2,T1,T0;
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
  P T2,T1,T0;
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

FUNCODEDEF(fun_65) {
  P return_;
  P x_1167F615;
  P valuesF614;
  P x_1167F613;
  P x_1168F612;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1168_63,2);
  x_1168F612 = T1;
  FUNINIT(x_1168F612, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1167F613 = T3;
  valuesF614 = YPfalse;
  valuesF614 = BOXFAB(valuesF614);
  T6 = CALL2(1,VARREF(YisaQ),x_1167F613,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF614) = x_1167F613;
    x_1167F615 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F615,x_1168F612);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1168F612,LITREF(lit_6),x_1167F613);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T16 = FUNFAB(fun_64,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF614);
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
  T10 = CALLN(1,VARREF(YgooSmacrosYcat),5,T11,T12,T18,T22,Ynil);
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P x_1165F621;
  P x_1165F620;
  P bodyF619;
  P condF618;
  P x_1165F617;
  P x_1166F616;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1166_62,2);
  x_1166F616 = T1;
  FUNINIT(x_1166F616, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1165F617 = T3;
  condF618 = YPfalse;
  condF618 = BOXFAB(condF618);
  bodyF619 = YPfalse;
  bodyF619 = BOXFAB(bodyF619);
  T8 = CALL2(1,VARREF(YisaQ),x_1165F617,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1165F617,x_1166F616);
    BOXVAL(condF618) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1165F617);
    x_1165F620 = T11;
    BOXVAL(bodyF619) = x_1165F620;
    x_1165F621 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F621,x_1166F616);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1166F616,LITREF(lit_6),x_1165F617);
  }
  T17 = BOXVAL(condF618);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T20 = BOXVAL(bodyF619);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_65,5,FREEREF(0),condF618,FREEREF(1),FREEREF(2),bodyF619);
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
  P tst_varF632;
  P val_varF631;
  P x_1171F630;
  P x_1171F629;
  P x_1171F628;
  P x_1171F627;
  P casesF626;
  P tstF625;
  P valF624;
  P x_1171F623;
  P x_1172F622;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_68,1);
  x_1172F622 = T1;
  FUNINIT(x_1172F622, 1,return_);
  x_1171F623 = FREEREF(0);
  valF624 = YPfalse;
  valF624 = BOXFAB(valF624);
  tstF625 = YPfalse;
  tstF625 = BOXFAB(tstF625);
  casesF626 = YPfalse;
  casesF626 = BOXFAB(casesF626);
  T9 = CALL2(1,VARREF(YisaQ),x_1171F623,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1171F623,LITREF(lit_81),x_1172F622);
    x_1171F627 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F627,x_1172F622);
    BOXVAL(valF624) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1171F627);
    x_1171F628 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F628,x_1172F622);
    BOXVAL(tstF625) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1171F628);
    x_1171F629 = T17;
    BOXVAL(casesF626) = x_1171F629;
    x_1171F630 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F630,x_1172F622);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1172F622,LITREF(lit_6),x_1171F623);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF631 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF632 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF631);
  T33 = BOXVAL(valF624);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF632);
  T38 = BOXVAL(tstF625);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF626);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF631,tst_varF632,T41);
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
  P x_1175F639;
  P x_1175F638;
  P x_1175F637;
  P casesF636;
  P valF635;
  P x_1175F634;
  P x_1176F633;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_71,1);
  x_1176F633 = T1;
  FUNINIT(x_1176F633, 1,return_);
  x_1175F634 = FREEREF(0);
  valF635 = YPfalse;
  valF635 = BOXFAB(valF635);
  casesF636 = YPfalse;
  casesF636 = BOXFAB(casesF636);
  T7 = CALL2(1,VARREF(YisaQ),x_1175F634,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1175F634,LITREF(lit_83),x_1176F633);
    x_1175F637 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F637,x_1176F633);
    BOXVAL(valF635) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1175F637);
    x_1175F638 = T12;
    BOXVAL(casesF636) = x_1175F638;
    x_1175F639 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F639,x_1176F633);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1176F633,LITREF(lit_6),x_1175F634);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T19 = BOXVAL(valF635);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T21 = BOXVAL(casesF636);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),5,T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P exp_;
  P T1,T0;
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
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  P T1,T0;
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
  P tmpF641;
  P tmpF640;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF640 = T2;
  if (tmpF640 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF641 = T1;
  if (tmpF641 != YPfalse) {
    T5 = tmpF641;
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
  P yF644;
  P spliceQF643;
  P varF642;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(vars_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_51));
  if (T1 != YPfalse) {
    T4 = (P)YOlen(vars_);
    T3 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_97),T4);
    varF642 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF642,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF642;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_78;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF643 = T10;
      T14 = FUNFAB(fun_79,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF644 = T13;
      if (spliceQF643 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF644);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
        T24 = CALL1(1,VARREF(Ytail),yF644);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF644;
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
  P argsF657;
  P exprF656;
  P varsF655;
  P walk_opF654;
  P rest_opQF653;
  P spliceF652;
  P x_1179F651;
  P x_1179F650;
  P x_1179F649;
  P argsF648;
  P fF647;
  P x_1179F646;
  P x_1180F645;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_74,1);
  x_1180F645 = T1;
  FUNINIT(x_1180F645, 1,return_);
  x_1179F646 = FREEREF(0);
  fF647 = YPfalse;
  fF647 = BOXFAB(fF647);
  argsF648 = YPfalse;
  argsF648 = BOXFAB(argsF648);
  T7 = CALL2(1,VARREF(YisaQ),x_1179F646,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F646,LITREF(lit_86),x_1180F645);
    x_1179F649 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F649,x_1180F645);
    BOXVAL(fF647) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1179F649);
    x_1179F650 = T12;
    BOXVAL(argsF648) = x_1179F650;
    x_1179F651 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F651,x_1180F645);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1180F645,LITREF(lit_6),x_1179F646);
  }
  T17 = fun_splice_76;
  spliceF652 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_77,1);
  rest_opQF653 = T18;
  T19 = FUNSHELL(1,fun_walk_op_80,2);
  walk_opF654 = T19;
  FUNINIT(rest_opQF653, 1,rest_opQF653);
  FUNINIT(walk_opF654, 2,walk_opF654,spliceF652);
  T22 = BOXVAL(argsF648);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF647);
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
      T41 = BOXVAL(fF647);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF655 = T43;
    T48 = BOXVAL(fF647);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF648);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF654,varsF655,T46);
    exprF656 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF655);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF648);
    T55 = CALL1(1,rest_opQF653,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_100);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF657 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T59 = CALL1(1,VARREF(Ylst),argsF657);
    T60 = CALL1(1,VARREF(Ylst),exprF656);
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
  P T1,T0;
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
  P varF668;
  P x_1191F667;
  P x_1191F666;
  P x_1191F665;
  P x_1191F664;
  P x_1191F663;
  P restF662;
  P thenF661;
  P patF660;
  P x_1191F659;
  P x_1192F658;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_84,1);
  x_1192F658 = T1;
  FUNINIT(x_1192F658, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1191F659 = T3;
  patF660 = YPfalse;
  patF660 = BOXFAB(patF660);
  thenF661 = YPfalse;
  thenF661 = BOXFAB(thenF661);
  restF662 = YPfalse;
  restF662 = BOXFAB(restF662);
  T10 = CALL2(1,VARREF(YisaQ),x_1191F659,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F659,x_1192F658);
    x_1191F663 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F663,x_1192F658);
    BOXVAL(patF660) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1191F663);
    x_1191F664 = T15;
    BOXVAL(thenF661) = x_1191F664;
    x_1191F665 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F665,x_1192F658);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1191F659);
    x_1191F666 = T18;
    BOXVAL(restF662) = x_1191F666;
    x_1191F667 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F667,x_1192F658);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1192F658,LITREF(lit_6),x_1191F659);
  }
  T24 = BOXVAL(patF660);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T27 = BOXVAL(thenF661);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF668 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF668);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
    T45 = BOXVAL(patF660);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF668);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T50 = BOXVAL(thenF661);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
    T54 = CALL1(1,VARREF(Ylst),varF668);
    T55 = BOXVAL(restF662);
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

FUNCODEDEF(fun_x_1190_86) {
  P msg_,args_;
  P T2,T1,T0;
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
  P x_1189F670;
  P x_1190F669;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1190_86,3);
  x_1190F669 = T1;
  FUNINIT(x_1190F669, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1189F670 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1189F670,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1189F670,x_1190F669);
  } else {
    T6 = CALL2(1,x_1190F669,LITREF(lit_6),x_1189F670);
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
  P x_1187F677;
  P x_1187F676;
  P x_1187F675;
  P casesF674;
  P expF673;
  P x_1187F672;
  P x_1188F671;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_83,1);
  x_1188F671 = T1;
  FUNINIT(x_1188F671, 1,return_);
  x_1187F672 = FREEREF(0);
  expF673 = YPfalse;
  expF673 = BOXFAB(expF673);
  casesF674 = YPfalse;
  casesF674 = BOXFAB(casesF674);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F672,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F672,LITREF(lit_102),x_1188F671);
    x_1187F675 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F675,x_1188F671);
    BOXVAL(expF673) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F675);
    x_1187F676 = T12;
    BOXVAL(casesF674) = x_1187F676;
    x_1187F677 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F677,x_1188F671);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1188F671,LITREF(lit_6),x_1187F672);
  }
  T17 = FUNFAB(fun_87,2,casesF674,expF673);
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
  P x_1195F686;
  P x_1195F685;
  P x_1195F684;
  P x_1195F683;
  P argsF682;
  P messageF681;
  P condF680;
  P x_1195F679;
  P x_1196F678;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_90,1);
  x_1196F678 = T1;
  FUNINIT(x_1196F678, 1,return_);
  x_1195F679 = FREEREF(0);
  condF680 = YPfalse;
  condF680 = BOXFAB(condF680);
  messageF681 = YPfalse;
  messageF681 = BOXFAB(messageF681);
  argsF682 = YPfalse;
  argsF682 = BOXFAB(argsF682);
  T9 = CALL2(1,VARREF(YisaQ),x_1195F679,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1195F679,LITREF(lit_109),x_1196F678);
    x_1195F683 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F683,x_1196F678);
    BOXVAL(condF680) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1195F683);
    x_1195F684 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F684,x_1196F678);
    BOXVAL(messageF681) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1195F684);
    x_1195F685 = T17;
    BOXVAL(argsF682) = x_1195F685;
    x_1195F686 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F686,x_1196F678);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1196F678,LITREF(lit_6),x_1195F679);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T27 = BOXVAL(condF680);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF681);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF682);
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
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P x_1207F693;
  P x_1207F692;
  P x_1207F691;
  P valF690;
  P keyF689;
  P x_1207F688;
  P x_1208F687;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_95,3);
  x_1208F687 = T1;
  FUNINIT(x_1208F687, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1207F688 = T3;
  keyF689 = YPfalse;
  keyF689 = BOXFAB(keyF689);
  valF690 = YPfalse;
  valF690 = BOXFAB(valF690);
  T8 = CALL2(1,VARREF(YisaQ),x_1207F688,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F688,LITREF(lit_47),x_1208F687);
    x_1207F691 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F691,x_1208F687);
    BOXVAL(keyF689) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1207F691);
    x_1207F692 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1207F692,x_1208F687);
    BOXVAL(valF690) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1207F692);
    x_1207F693 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F693,x_1208F687);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1208F687,LITREF(lit_6),x_1207F688);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T24 = BOXVAL(keyF689);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF690);
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
  P stateF700;
  P x_1205F699;
  P x_1205F698;
  P expF697;
  P varF696;
  P x_1205F695;
  P x_1206F694;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1206_94,1);
  x_1206F694 = T1;
  FUNINIT(x_1206F694, 1,return_);
  x_1205F695 = FREEREF(0);
  varF696 = YPfalse;
  varF696 = BOXFAB(varF696);
  expF697 = YPfalse;
  expF697 = BOXFAB(expF697);
  T7 = CALL2(1,VARREF(YisaQ),x_1205F695,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F695,x_1206F694);
    BOXVAL(varF696) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1205F695);
    x_1205F698 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1205F698,x_1206F694);
    BOXVAL(expF697) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1205F698);
    x_1205F699 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1205F699,x_1206F694);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1206F694,LITREF(lit_6),x_1205F695);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF700 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T22 = CALL1(1,VARREF(Ylst),stateF700);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_119));
  T27 = BOXVAL(expF697);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(2));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T31 = CALL1(1,VARREF(Ylst),stateF700);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(3));
  T34 = FUNFAB(fun_96,2,varF696,stateF700);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(4));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
  T38 = CALL1(1,VARREF(Ylst),stateF700);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,FREEREF(5));
  T18 = CALLN(0,FREEREF(6),5,T19,T20,T28,T32,T35);
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
  P clauseF702;
  P loopF701;
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
    loopF701 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
    T6 = CALL1(1,VARREF(Ylst),loopF701);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF701);
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
    clauseF702 = T23;
    T25 = FUNFAB(fun_97,7,clauseF702,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF712;
  P x_1203F711;
  P x_1203F710;
  P x_1203F709;
  P x_1203F708;
  P x_1203F707;
  P bodyF706;
  P clausesF705;
  P x_1203F704;
  P x_1204F703;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_93,1);
  x_1204F703 = T1;
  FUNINIT(x_1204F703, 1,return_);
  x_1203F704 = FREEREF(0);
  clausesF705 = YPfalse;
  clausesF705 = BOXFAB(clausesF705);
  bodyF706 = YPfalse;
  bodyF706 = BOXFAB(bodyF706);
  T7 = CALL2(1,VARREF(YisaQ),x_1203F704,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1203F704,LITREF(lit_111),x_1204F703);
    x_1203F707 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F707,x_1204F703);
    x_1203F708 = T11;
    BOXVAL(clausesF705) = x_1203F708;
    x_1203F709 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F709,x_1204F703);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1203F707);
    x_1203F710 = T14;
    BOXVAL(bodyF706) = x_1203F710;
    x_1203F711 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F711,x_1204F703);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1204F703,LITREF(lit_6),x_1203F704);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF712 = T19;
  FUNINIT(grokF712, 2,bodyF706,grokF712);
  T21 = BOXVAL(clausesF705);
  T20 = CALLN(0,grokF712,5,T21,Ynil,Ynil,Ynil,Ynil);
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
  P x_1211F719;
  P x_1211F718;
  P x_1211F717;
  P bodyF716;
  P testF715;
  P x_1211F714;
  P x_1212F713;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_101,1);
  x_1212F713 = T1;
  FUNINIT(x_1212F713, 1,return_);
  x_1211F714 = FREEREF(0);
  testF715 = YPfalse;
  testF715 = BOXFAB(testF715);
  bodyF716 = YPfalse;
  bodyF716 = BOXFAB(bodyF716);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F714,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F714,LITREF(lit_126),x_1212F713);
    x_1211F717 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F717,x_1212F713);
    BOXVAL(testF715) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1211F717);
    x_1211F718 = T12;
    BOXVAL(bodyF716) = x_1211F718;
    x_1211F719 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F719,x_1212F713);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1212F713,LITREF(lit_6),x_1211F714);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T24 = BOXVAL(testF715);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF716);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
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
  P x_1215F726;
  P x_1215F725;
  P x_1215F724;
  P bodyF723;
  P testF722;
  P x_1215F721;
  P x_1216F720;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_104,1);
  x_1216F720 = T1;
  FUNINIT(x_1216F720, 1,return_);
  x_1215F721 = FREEREF(0);
  testF722 = YPfalse;
  testF722 = BOXFAB(testF722);
  bodyF723 = YPfalse;
  bodyF723 = BOXFAB(bodyF723);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F721,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F721,LITREF(lit_129),x_1216F720);
    x_1215F724 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F724,x_1216F720);
    BOXVAL(testF722) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1215F724);
    x_1215F725 = T12;
    BOXVAL(bodyF723) = x_1215F725;
    x_1215F726 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F726,x_1216F720);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1216F720,LITREF(lit_6),x_1215F721);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T24 = BOXVAL(testF722);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF723);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
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
  P x_1219F733;
  P x_1219F732;
  P x_1219F731;
  P expF730;
  P bindingF729;
  P x_1219F728;
  P x_1220F727;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1220_107,1);
  x_1220F727 = T1;
  FUNINIT(x_1220F727, 1,return_);
  x_1219F728 = FREEREF(0);
  bindingF729 = YPfalse;
  bindingF729 = BOXFAB(bindingF729);
  expF730 = YPfalse;
  expF730 = BOXFAB(expF730);
  T7 = CALL2(1,VARREF(YisaQ),x_1219F728,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F728,LITREF(lit_131),x_1220F727);
    x_1219F731 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F731,x_1220F727);
    BOXVAL(bindingF729) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1219F731);
    x_1219F732 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F732,x_1220F727);
    BOXVAL(expF730) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1219F732);
    x_1219F733 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F733,x_1220F727);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1220F727,LITREF(lit_6),x_1219F728);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T21 = BOXVAL(bindingF729);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF730);
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
  P T2,T1,T0;
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
  P old_valueF745;
  P nameF744;
  P x_1231F743;
  P x_1231F742;
  P x_1231F741;
  P x_1231F740;
  P x_1231F739;
  P restF738;
  P valueF737;
  P varF736;
  P x_1231F735;
  P x_1232F734;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_111,2);
  x_1232F734 = T1;
  FUNINIT(x_1232F734, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1231F735 = T3;
  varF736 = YPfalse;
  varF736 = BOXFAB(varF736);
  valueF737 = YPfalse;
  valueF737 = BOXFAB(valueF737);
  restF738 = YPfalse;
  restF738 = BOXFAB(restF738);
  T10 = CALL2(1,VARREF(YisaQ),x_1231F735,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F735,x_1232F734);
    x_1231F739 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F739,x_1232F734);
    BOXVAL(varF736) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F739);
    x_1231F740 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F740,x_1232F734);
    BOXVAL(valueF737) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1231F740);
    x_1231F741 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F741,x_1232F734);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1231F735);
    x_1231F742 = T20;
    BOXVAL(restF738) = x_1231F742;
    x_1231F743 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F743,x_1232F734);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1232F734,LITREF(lit_6),x_1231F735);
  }
  T26 = BOXVAL(varF736);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF744 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF745 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF745);
  T36 = CALL1(1,VARREF(Ylst),nameF744);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T46 = CALL1(1,VARREF(Ylst),nameF744);
  T48 = BOXVAL(valueF737);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T54 = BOXVAL(restF738);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T59 = CALL1(1,VARREF(Ylst),nameF744);
  T60 = CALL1(1,VARREF(Ylst),old_valueF745);
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
  P T2,T1,T0;
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
  P x_1229F747;
  P x_1230F746;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1230_113,3);
  x_1230F746 = T1;
  FUNINIT(x_1230F746, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1229F747 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1229F747,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1229F747,x_1230F746);
  } else {
    T6 = CALL2(1,x_1230F746,LITREF(lit_6),x_1229F747);
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
  P x_1227F754;
  P x_1227F753;
  P x_1227F752;
  P bodyF751;
  P bindingsF750;
  P x_1227F749;
  P x_1228F748;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_110,1);
  x_1228F748 = T1;
  FUNINIT(x_1228F748, 1,return_);
  x_1227F749 = FREEREF(0);
  bindingsF750 = YPfalse;
  bindingsF750 = BOXFAB(bindingsF750);
  bodyF751 = YPfalse;
  bodyF751 = BOXFAB(bodyF751);
  T7 = CALL2(1,VARREF(YisaQ),x_1227F749,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F749,LITREF(lit_134),x_1228F748);
    x_1227F752 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F752,x_1228F748);
    BOXVAL(bindingsF750) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1227F752);
    x_1227F753 = T12;
    BOXVAL(bodyF751) = x_1227F753;
    x_1227F754 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F754,x_1228F748);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1228F748,LITREF(lit_6),x_1227F749);
  }
  T17 = FUNFAB(fun_114,2,bindingsF750,bodyF751);
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
  P vnamF764;
  P typF763;
  P namF762;
  P x_1235F761;
  P x_1235F760;
  P x_1235F759;
  P valueF758;
  P varF757;
  P x_1235F756;
  P x_1236F755;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_117,1);
  x_1236F755 = T1;
  FUNINIT(x_1236F755, 1,return_);
  x_1235F756 = FREEREF(0);
  varF757 = YPfalse;
  varF757 = BOXFAB(varF757);
  valueF758 = YPfalse;
  valueF758 = BOXFAB(valueF758);
  T7 = CALL2(1,VARREF(YisaQ),x_1235F756,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F756,LITREF(lit_140),x_1236F755);
    x_1235F759 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F759,x_1236F755);
    BOXVAL(varF757) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1235F759);
    x_1235F760 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F760,x_1236F755);
    BOXVAL(valueF758) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1235F760);
    x_1235F761 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F761,x_1236F755);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1236F755,LITREF(lit_6),x_1235F756);
  }
  T20 = BOXVAL(varF757);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF762 = T19;
  T23 = BOXVAL(varF757);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF763 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_141),namF762,LITREF(lit_142));
  vnamF764 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T31 = CALL1(1,VARREF(Ylst),vnamF764);
  T33 = BOXVAL(valueF758);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T37 = CALL1(1,VARREF(Ylst),namF762);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T41 = CALL1(1,VARREF(Ylst),typF763);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF764);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF762);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T53 = CALL1(1,VARREF(Ylst),typF763);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T57 = CALL1(1,VARREF(Ylst),vnamF764);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
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
  P x_1239F769;
  P x_1239F768;
  P bodyF767;
  P x_1239F766;
  P x_1240F765;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_120,1);
  x_1240F765 = T1;
  FUNINIT(x_1240F765, 1,return_);
  x_1239F766 = FREEREF(0);
  bodyF767 = YPfalse;
  bodyF767 = BOXFAB(bodyF767);
  T5 = CALL2(1,VARREF(YisaQ),x_1239F766,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F766,LITREF(lit_147),x_1240F765);
    x_1239F768 = T7;
    BOXVAL(bodyF767) = x_1239F768;
    x_1239F769 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F769,x_1240F765);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1240F765,LITREF(lit_6),x_1239F766);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF767);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T19,Ynil);
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
  P x_1243F774;
  P x_1243F773;
  P namesF772;
  P x_1243F771;
  P x_1244F770;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1244_123,1);
  x_1244F770 = T1;
  FUNINIT(x_1244F770, 1,return_);
  x_1243F771 = FREEREF(0);
  namesF772 = YPfalse;
  namesF772 = BOXFAB(namesF772);
  T5 = CALL2(1,VARREF(YisaQ),x_1243F771,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F771,LITREF(lit_150),x_1244F770);
    x_1243F773 = T7;
    BOXVAL(namesF772) = x_1243F773;
    x_1243F774 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F774,x_1244F770);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1244F770,LITREF(lit_6),x_1243F771);
  }
  T13 = BOXVAL(namesF772);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF772);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T28 = BOXVAL(namesF772);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
    T33 = BOXVAL(namesF772);
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
  P T1,T0;
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
  P x_1283F778;
  P nameF777;
  P x_1283F776;
  P x_1284F775;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_127,1);
  x_1284F775 = T1;
  FUNINIT(x_1284F775, 1,return_);
  x_1283F776 = FREEREF(0);
  nameF777 = YPfalse;
  nameF777 = BOXFAB(nameF777);
  T5 = CALL2(1,VARREF(YisaQ),x_1283F776,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1283F776,x_1284F775);
    BOXVAL(nameF777) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1283F776);
    x_1283F778 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F778,x_1284F775);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1284F775,LITREF(lit_6),x_1283F776);
  }
  T13 = BOXVAL(nameF777);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF777);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T21 = BOXVAL(nameF777);
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
  P x_1282F779;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1282F779 = FREEREF(0);
  T3 = FUNFAB(fun_128,1,x_1282F779);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  P return_;
  P x_1280F786;
  P x_1280F785;
  P x_1280F784;
  P restF783;
  P nameF782;
  P x_1280F781;
  P x_1281F780;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1281_129,2);
  x_1281F780 = T1;
  FUNINIT(x_1281F780, 2,FREEREF(0),return_);
  x_1280F781 = FREEREF(0);
  nameF782 = YPfalse;
  nameF782 = BOXFAB(nameF782);
  restF783 = YPfalse;
  restF783 = BOXFAB(restF783);
  T7 = CALL2(1,VARREF(YisaQ),x_1280F781,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1280F781,LITREF(lit_160),x_1281F780);
    x_1280F784 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1280F784,x_1281F780);
    BOXVAL(nameF782) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1280F784);
    x_1280F785 = T12;
    BOXVAL(restF783) = x_1280F785;
    x_1280F786 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F786,x_1281F780);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1281F780,LITREF(lit_6),x_1280F781);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF782);
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
  P x_1279F787;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1279F787 = FREEREF(0);
  T3 = FUNFAB(fun_130,2,x_1279F787,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_132) {
  P return_;
  P x_1277F794;
  P x_1277F793;
  P x_1277F792;
  P restF791;
  P nameF790;
  P x_1277F789;
  P x_1278F788;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1278_131,3);
  x_1278F788 = T1;
  FUNINIT(x_1278F788, 3,FREEREF(0),FREEREF(1),return_);
  x_1277F789 = FREEREF(0);
  nameF790 = YPfalse;
  nameF790 = BOXFAB(nameF790);
  restF791 = YPfalse;
  restF791 = BOXFAB(restF791);
  T7 = CALL2(1,VARREF(YisaQ),x_1277F789,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1277F789,LITREF(lit_161),x_1278F788);
    x_1277F792 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1277F792,x_1278F788);
    BOXVAL(nameF790) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1277F792);
    x_1277F793 = T12;
    BOXVAL(restF791) = x_1277F793;
    x_1277F794 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F794,x_1278F788);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1278F788,LITREF(lit_6),x_1277F789);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF790);
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
  P x_1276F795;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1276F795 = FREEREF(0);
  T3 = FUNFAB(fun_132,2,x_1276F795,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  P return_;
  P x_1274F802;
  P x_1274F801;
  P x_1274F800;
  P restF799;
  P nameF798;
  P x_1274F797;
  P x_1275F796;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1275_133,3);
  x_1275F796 = T1;
  FUNINIT(x_1275F796, 3,FREEREF(0),FREEREF(1),return_);
  x_1274F797 = FREEREF(0);
  nameF798 = YPfalse;
  nameF798 = BOXFAB(nameF798);
  restF799 = YPfalse;
  restF799 = BOXFAB(restF799);
  T7 = CALL2(1,VARREF(YisaQ),x_1274F797,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1274F797,LITREF(lit_132),x_1275F796);
    x_1274F800 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1274F800,x_1275F796);
    BOXVAL(nameF798) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1274F800);
    x_1274F801 = T12;
    BOXVAL(restF799) = x_1274F801;
    x_1274F802 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1274F802,x_1275F796);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1275F796,LITREF(lit_6),x_1274F797);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
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

FUNCODEDEF(fun_x_1272_135) {
  P msg_,args_;
  P x_1273F803;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1273F803 = FREEREF(0);
  T3 = FUNFAB(fun_134,2,x_1273F803,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  P return_;
  P x_1271F810;
  P x_1271F809;
  P x_1271F808;
  P restF807;
  P nameF806;
  P x_1271F805;
  P x_1272F804;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1272_135,3);
  x_1272F804 = T1;
  FUNINIT(x_1272F804, 3,FREEREF(0),FREEREF(1),return_);
  x_1271F805 = FREEREF(0);
  nameF806 = YPfalse;
  nameF806 = BOXFAB(nameF806);
  restF807 = YPfalse;
  restF807 = BOXFAB(restF807);
  T7 = CALL2(1,VARREF(YisaQ),x_1271F805,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1271F805,LITREF(lit_162),x_1272F804);
    x_1271F808 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F808,x_1272F804);
    BOXVAL(nameF806) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1271F808);
    x_1271F809 = T12;
    BOXVAL(restF807) = x_1271F809;
    x_1271F810 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F810,x_1272F804);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1272F804,LITREF(lit_6),x_1271F805);
  }
  T18 = BOXVAL(nameF806);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
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

FUNCODEDEF(fun_x_1269_137) {
  P msg_,args_;
  P x_1270F811;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1270F811 = FREEREF(0);
  T3 = FUNFAB(fun_136,2,x_1270F811,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P x_1268F818;
  P x_1268F817;
  P x_1268F816;
  P restF815;
  P nameF814;
  P x_1268F813;
  P x_1269F812;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1269_137,3);
  x_1269F812 = T1;
  FUNINIT(x_1269F812, 3,FREEREF(0),FREEREF(1),return_);
  x_1268F813 = FREEREF(0);
  nameF814 = YPfalse;
  nameF814 = BOXFAB(nameF814);
  restF815 = YPfalse;
  restF815 = BOXFAB(restF815);
  T7 = CALL2(1,VARREF(YisaQ),x_1268F813,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1268F813,LITREF(lit_163),x_1269F812);
    x_1268F816 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1268F816,x_1269F812);
    BOXVAL(nameF814) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1268F816);
    x_1268F817 = T12;
    BOXVAL(restF815) = x_1268F817;
    x_1268F818 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1268F818,x_1269F812);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1269F812,LITREF(lit_6),x_1268F813);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF814);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T29 = BOXVAL(nameF814);
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
  P defsF825;
  P x_1267F824;
  P x_1265F823;
  P x_1265F822;
  P defF821;
  P x_1265F820;
  P x_1266F819;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1266_126,1);
  x_1266F819 = T1;
  FUNINIT(x_1266F819, 1,return_);
  x_1265F820 = FREEREF(0);
  defF821 = YPfalse;
  defF821 = BOXFAB(defF821);
  T5 = CALL2(1,VARREF(YisaQ),x_1265F820,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F820,LITREF(lit_153),x_1266F819);
    x_1265F822 = T7;
    BOXVAL(defF821) = x_1265F822;
    x_1265F823 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F823,x_1266F819);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1266F819,LITREF(lit_6),x_1265F820);
  }
  T13 = BOXVAL(defF821);
  x_1267F824 = T13;
  T15 = FUNFAB(fun_138,2,x_1267F824,defF821);
  T14 = with_exit(T15);
  T12 = T14;
  defsF825 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF825,Ynil);
  T11 = T16;
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  P exp_;
  P T1,T0;
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
  P xF826;
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
  xF826 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF826,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P return_;
  P x_1287F831;
  P x_1287F830;
  P defsF829;
  P x_1287F828;
  P x_1288F827;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1288_141,1);
  x_1288F827 = T1;
  FUNINIT(x_1288F827, 1,return_);
  x_1287F828 = FREEREF(0);
  defsF829 = YPfalse;
  defsF829 = BOXFAB(defsF829);
  T5 = CALL2(1,VARREF(YisaQ),x_1287F828,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1287F828,LITREF(lit_165),x_1288F827);
    x_1287F830 = T7;
    BOXVAL(defsF829) = x_1287F830;
    x_1287F831 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F831,x_1288F827);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1288F827,LITREF(lit_6),x_1287F828);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T14 = fun_142;
  T15 = BOXVAL(defsF829);
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
  P T1,T0;
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
  P tmpF847;
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
  P T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179;
  P T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163;
  P T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147;
  P T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131;
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
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
  tmpF832 = YPfalse;
  if (tmpF832 != YPfalse) {
    T177 = VARREF(YgooSmacrosYEE);
  } else {
    T177 = YPfalse;
  }
  tmpF833 = YPfalse;
  if (tmpF833 != YPfalse) {
    T178 = VARREF(YgooSmacrosYdo);
  } else {
    T178 = YPfalse;
  }
  tmpF834 = YPfalse;
  if (tmpF834 != YPfalse) {
    T179 = VARREF(YgooSmacrosYrevX);
  } else {
    T179 = YPfalse;
  }
  tmpF835 = YPfalse;
  if (tmpF835 != YPfalse) {
    T180 = VARREF(YgooSmacrosYcat);
  } else {
    T180 = YPfalse;
  }
  tmpF836 = YPfalse;
  if (tmpF836 != YPfalse) {
    T181 = VARREF(YgooSmacrosYelt);
  } else {
    T181 = YPfalse;
  }
  tmpF837 = YPfalse;
  if (tmpF837 != YPfalse) {
    T182 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T182 = YPfalse;
  }
  tmpF838 = YPfalse;
  if (tmpF838 != YPfalse) {
    T183 = VARREF(Yerror);
  } else {
    T183 = YPfalse;
  }
  tmpF839 = YPfalse;
  if (tmpF839 != YPfalse) {
    T184 = VARREF(YgooSmacrosYgensym);
  } else {
    T184 = YPfalse;
  }
  tmpF840 = YPfalse;
  if (tmpF840 != YPfalse) {
    T185 = VARREF(Ylst);
  } else {
    T185 = YPfalse;
  }
  tmpF841 = YPfalse;
  if (tmpF841 != YPfalse) {
    T186 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T186 = YPfalse;
  }
  tmpF842 = YPfalse;
  if (tmpF842 != YPfalse) {
    T187 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T187 = YPfalse;
  }
  tmpF843 = YPfalse;
  if (tmpF843 != YPfalse) {
    T188 = VARREF(YgooSmacrosYmap);
  } else {
    T188 = YPfalse;
  }
  tmpF844 = YPfalse;
  if (tmpF844 != YPfalse) {
    T189 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T189 = YPfalse;
  }
  tmpF845 = YPfalse;
  if (tmpF845 != YPfalse) {
    T190 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T190 = YPfalse;
  }
  tmpF846 = YPfalse;
  if (tmpF846 != YPfalse) {
    T191 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T191 = YPfalse;
  }
  tmpF847 = YPfalse;
  if (tmpF847 != YPfalse) {
    T194 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T194 = YPfalse;
  }
  T193 = T194;
  T192 = T193;
  return T192;
}

P YgooSmacrosY___main_1___() {
  P tmpF852;
  P tmpF851;
  P tmpF850;
  P tmpF849;
  P tmpF848;
  P T5,T4,T3,T2,T1,T0;
loop:
  tmpF848 = YPfalse;
  if (tmpF848 != YPfalse) {
    T0 = VARREF(YgooSmacrosYpair);
  } else {
    T0 = YPfalse;
  }
  tmpF849 = YPfalse;
  if (tmpF849 != YPfalse) {
    T1 = VARREF(Ytup);
  } else {
    T1 = YPfalse;
  }
  tmpF850 = YPfalse;
  if (tmpF850 != YPfalse) {
    T2 = VARREF(YgooSmacrosYvar_name);
  } else {
    T2 = YPfalse;
  }
  tmpF851 = YPfalse;
  if (tmpF851 != YPfalse) {
    T3 = VARREF(YgooSmacrosYvar_type);
  } else {
    T3 = YPfalse;
  }
  tmpF852 = YPfalse;
  if (tmpF852 != YPfalse) {
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
  {"<class>", &module_info_gooSboot, "<class>"},
  {"df", &module_info_gooSboot, "df"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"not", &module_info_gooSboot, "not"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"set", &module_info_gooSboot, "set"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"export", &module_info_gooSboot, "export"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"head", &module_info_gooSboot, "head"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%su", &module_info_gooSboot, "%su"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%str", &module_info_gooSboot, "%str"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@+", &module_info_gooSboot, "@+"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"dm", &module_info_gooSboot, "dm"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"def", &module_info_gooSboot, "def"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"isa", &module_info_gooSboot, "isa"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"error", &module_info_gooSboot, "error"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"loc", &module_info_gooSboot, "loc"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"new", &module_info_gooSboot, "new"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"@len", &module_info_gooSboot, "@len"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"try", &module_info_gooSboot, "try"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"if", &module_info_gooSboot, "if"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"var-type", &YgooSmacrosYvar_type},
  {"for", NULL},
  {"lift-place-subforms", &YgooSmacrosYlift_place_subforms},
  {"do-case-by", &YgooSmacrosYdo_case_by},
  {"when", NULL},
  {"op", NULL},
  {"gensym", &YgooSmacrosYgensym},
  {"match-atom", &YgooSmacrosYmatch_atom},
  {"need-implementation", NULL},
  {"swapf", NULL},
  {"map", &YgooSmacrosYmap},
  {"fab-setter-name", &YgooSmacrosYfab_setter_name},
  {"rev!", &YgooSmacrosYrevX},
  {"match-unquote", &YgooSmacrosYmatch_unquote},
  {"elt", &YgooSmacrosYelt},
  {"incf", NULL},
  {"do", &YgooSmacrosYdo},
  {"while", NULL},
  {"case-by", NULL},
  {"sup", NULL},
  {"---main-1---", NULL},
  {"decf", NULL},
  {"opf", NULL},
  {"renew", NULL},
  {"dlet", NULL},
  {"ddv", NULL},
  {"match", NULL},
  {"def-fun-var", NULL},
  {"---main-0---", NULL},
  {"app", NULL},
  {"or", NULL},
  {"var-name", &YgooSmacrosYvar_name},
  {"pub", NULL},
  {"cat", &YgooSmacrosYcat},
  {"and", NULL},
  {"cat-sym", &YgooSmacrosYcat_sym},
  {"app-sup", NULL},
  {"match-empty-list", &YgooSmacrosYmatch_empty_list},
  {"pushf", NULL},
  {"assert", NULL},
  {"pair", &YgooSmacrosYpair},
  {"until", NULL},
  {"==", &YgooSmacrosYEE},
  {"cond", NULL},
  {"case", NULL},
  {"empty?", &YgooSmacrosYemptyQ},
  {"unless", NULL},
  {"without-prop-unbound-errors", NULL},
  {"popf", NULL},
  {"napp", &YgooSmacrosYnapp},
  {"match-sublist", &YgooSmacrosYmatch_sublist},
  {"exported", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"for", "for"},
  {"var-type", "var-type"},
  {"when", "when"},
  {"op", "op"},
  {"gensym", "gensym"},
  {"ddv", "ddv"},
  {"match-atom", "match-atom"},
  {"need-implementation", "need-implementation"},
  {"map", "map"},
  {"fab-setter-name", "fab-setter-name"},
  {"rev!", "rev!"},
  {"match-unquote", "match-unquote"},
  {"elt", "elt"},
  {"incf", "incf"},
  {"do", "do"},
  {"while", "while"},
  {"case-by", "case-by"},
  {"sup", "sup"},
  {"tup", "tup"},
  {"decf", "decf"},
  {"opf", "opf"},
  {"renew", "renew"},
  {"dlet", "dlet"},
  {"or", "or"},
  {"match", "match"},
  {"def-fun-var", "def-fun-var"},
  {"app", "app"},
  {"var-name", "var-name"},
  {"pub", "pub"},
  {"cat", "cat"},
  {"and", "and"},
  {"cat-sym", "cat-sym"},
  {"error", "error"},
  {"app-sup", "app-sup"},
  {"swapf", "swapf"},
  {"match-empty-list", "match-empty-list"},
  {"pushf", "pushf"},
  {"assert", "assert"},
  {"pair", "pair"},
  {"until", "until"},
  {"==", "=="},
  {"cond", "cond"},
  {"lst", "lst"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"case", "case"},
  {"empty?", "empty?"},
  {"unless", "unless"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"popf", "popf"},
  {"napp", "napp"},
  {"match-sublist", "match-sublist"},
  {"exported", "exported"},
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
