/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ynew,"goo/boot","new");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YisaQ,"goo/boot","isa?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ylst,"goo/boot","lst");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yerror,"goo/boot","error");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ynil,"goo/boot","nil");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_91);
DEFLIT(lit_76);
DEFLIT(lit_66);
DEFLIT(lit_54);
DEFLIT(lit_121);
DEFLIT(lit_36);
DEFLIT(lit_160);
DEFLIT(lit_138);
DEFLIT(lit_128);
DEFLIT(lit_29);
DEFLIT(lit_0);
DEFLIT(lit_16);
DEFLIT(lit_33);
DEFLIT(lit_111);
DEFLIT(lit_10);
DEFLIT(lit_89);
DEFLIT(lit_21);
DEFLIT(lit_48);
DEFLIT(lit_125);
DEFLIT(lit_154);
DEFLIT(lit_97);
DEFLIT(lit_12);
DEFLIT(lit_159);
DEFLIT(lit_161);
DEFLIT(lit_114);
DEFLIT(lit_57);
DEFLIT(lit_112);
DEFLIT(lit_41);
DEFLIT(lit_122);
DEFLIT(lit_120);
DEFLIT(lit_75);
DEFLIT(lit_163);
DEFLIT(lit_140);
DEFLIT(lit_167);
DEFLIT(lit_39);
DEFLIT(lit_28);
DEFLIT(lit_65);
DEFLIT(lit_145);
DEFLIT(lit_94);
DEFLIT(lit_143);
DEFLIT(lit_153);
DEFLIT(lit_151);
DEFLIT(lit_9);
DEFLIT(lit_32);
DEFLIT(lit_105);
DEFLIT(lit_136);
DEFLIT(lit_24);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_110);
DEFLIT(lit_47);
DEFLIT(lit_59);
DEFLIT(lit_69);
DEFLIT(lit_49);
DEFLIT(lit_27);
DEFLIT(lit_61);
DEFLIT(lit_164);
DEFLIT(lit_156);
DEFLIT(lit_126);
DEFLIT(lit_73);
DEFLIT(lit_71);
DEFLIT(lit_60);
DEFLIT(lit_134);
DEFLIT(lit_8);
DEFLIT(lit_62);
DEFLIT(lit_109);
DEFLIT(lit_64);
DEFLIT(lit_68);
DEFLIT(lit_118);
DEFLIT(lit_158);
DEFLIT(lit_132);
DEFLIT(lit_116);
DEFLIT(lit_119);
DEFLIT(lit_104);
DEFLIT(lit_101);
DEFLIT(lit_25);
DEFLIT(lit_70);
DEFLIT(lit_56);
DEFLIT(lit_37);
DEFLIT(lit_31);
DEFLIT(lit_148);
DEFLIT(lit_141);
DEFLIT(lit_58);
DEFLIT(lit_84);
DEFLIT(lit_7);
DEFLIT(lit_149);
DEFLIT(lit_20);
DEFLIT(lit_17);
DEFLIT(lit_34);
DEFLIT(lit_77);
DEFLIT(lit_131);
DEFLIT(lit_46);
DEFLIT(lit_162);
DEFLIT(lit_18);
DEFLIT(lit_129);
DEFLIT(lit_133);
DEFLIT(lit_102);
DEFLIT(lit_107);
DEFLIT(lit_63);
DEFLIT(lit_103);
DEFLIT(lit_135);
DEFLIT(lit_53);
DEFLIT(lit_117);
DEFLIT(lit_23);
DEFLIT(lit_55);
DEFLIT(lit_124);
DEFLIT(lit_86);
DEFLIT(lit_95);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_150);
DEFLIT(lit_166);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_130);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_127);
DEFLIT(lit_100);
DEFLIT(lit_146);
DEFLIT(lit_96);
DEFLIT(lit_42);
DEFLIT(lit_13);
DEFLIT(lit_79);
DEFLIT(lit_165);
DEFLIT(lit_44);
DEFLIT(lit_123);
DEFLIT(lit_108);
DEFLIT(lit_74);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_147);
DEFLIT(lit_35);
DEFLIT(lit_14);
DEFLIT(lit_139);
DEFLIT(lit_90);
DEFLIT(lit_81);
DEFLIT(lit_92);
DEFLIT(lit_99);
DEFLIT(lit_113);
DEFLIT(lit_155);
DEFLIT(lit_93);
DEFLIT(lit_106);
DEFLIT(lit_51);
DEFLIT(lit_115);
DEFLIT(lit_78);
DEFLIT(lit_22);
DEFLIT(lit_52);
DEFLIT(lit_137);
DEFLIT(lit_72);
DEFLIT(lit_157);
DEFLIT(lit_50);
DEFLIT(lit_82);
DEFLIT(lit_30);
DEFLIT(lit_26);
DEFLIT(lit_19);
DEFLIT(lit_80);
DEFLIT(lit_142);
DEFLIT(lit_87);
DEFLIT(lit_38);
DEFLIT(lit_11);
DEFLIT(lit_152);
DEFLIT(lit_67);
DEFLIT(lit_98);
DEFLIT(lit_85);
DEFLIT(lit_144);
DEFLIT(lit_88);
DEFLIT(lit_83);

/* FUNCTIONS: */

LOCFOR(fun_x_1080_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1084_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1088_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1092_9);
LOCFOR(fun_loop_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_munch_13);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1098_15);
LOCFOR(fun_x_1100_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1106_20);
LOCFOR(fun_x_1108_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1112_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1116_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1120_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
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
LOCFOR(fun_x_1144_49);
LOCFOR(fun_x_1146_50);
LOCFOR(fun_x_1148_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1156_56);
LOCFOR(fun_x_1158_57);
LOCFOR(fun_x_1160_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1166_63);
LOCFOR(fun_x_1168_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1174_68);
LOCFOR(fun_x_1176_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1180_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_x_1184_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1188_80);
LOCFOR(fun_81);
LOCFOR(fun_splice_82);
LOCFOR(fun_rest_opQ_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_walk_op_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_x_1196_89);
LOCFOR(fun_x_1200_90);
LOCFOR(fun_91);
LOCFOR(fun_x_1198_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1204_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1212_99);
LOCFOR(fun_x_1214_100);
LOCFOR(fun_x_1216_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_grok_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1220_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1224_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_x_1232_113);
LOCFOR(fun_x_1236_114);
LOCFOR(fun_115);
LOCFOR(fun_x_1234_116);
LOCFOR(fun_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1240_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1244_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1248_126);
LOCFOR(fun_127);
LOCFOR(fun_128);
LOCFOR(fun_x_1270_129);
LOCFOR(fun_x_1288_130);
LOCFOR(fun_131);
LOCFOR(fun_x_1285_132);
LOCFOR(fun_133);
LOCFOR(fun_x_1282_134);
LOCFOR(fun_135);
LOCFOR(fun_x_1279_136);
LOCFOR(fun_137);
LOCFOR(fun_x_1276_138);
LOCFOR(fun_139);
LOCFOR(fun_x_1273_140);
LOCFOR(fun_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_x_1292_144);
LOCFOR(fun_145);
LOCFOR(fun_146);
LOCFOR(fun_147);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1080_0) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_5));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P return_;
  P x_1079F969;
  P x_1079F968;
  P argsF967;
  P x_1079F966;
  P x_1080F965;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_0,1);
  x_1080F965 = T1;
  FUNINIT(x_1080F965, 1,return_);
  x_1079F966 = FREEREF(0);
  argsF967 = YPfalse;
  argsF967 = BOXFAB(argsF967);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F966,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F966,LITREF(lit_5),x_1080F965);
    x_1079F968 = T7;
    BOXVAL(argsF967) = x_1079F968;
    x_1079F969 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F969,x_1080F965);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1080F965,LITREF(lit_6),x_1079F966);
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
  T36 = BOXVAL(argsF967);
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

FUNCODEDEF(fun_x_1084_3) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_18));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P return_;
  P x_1083F974;
  P x_1083F973;
  P argsF972;
  P x_1083F971;
  P x_1084F970;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_3,1);
  x_1084F970 = T1;
  FUNINIT(x_1084F970, 1,return_);
  x_1083F971 = FREEREF(0);
  argsF972 = YPfalse;
  argsF972 = BOXFAB(argsF972);
  T5 = CALL2(1,VARREF(YisaQ),x_1083F971,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F971,LITREF(lit_18),x_1084F970);
    x_1083F973 = T7;
    BOXVAL(argsF972) = x_1083F973;
    x_1083F974 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F974,x_1084F970);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1084F970,LITREF(lit_6),x_1083F971);
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
  T36 = BOXVAL(argsF972);
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

FUNCODEDEF(fun_x_1088_6) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_21));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P return_;
  P x_1087F981;
  P x_1087F980;
  P x_1087F979;
  P argsF978;
  P fF977;
  P x_1087F976;
  P x_1088F975;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_6,1);
  x_1088F975 = T1;
  FUNINIT(x_1088F975, 1,return_);
  x_1087F976 = FREEREF(0);
  fF977 = YPfalse;
  fF977 = BOXFAB(fF977);
  argsF978 = YPfalse;
  argsF978 = BOXFAB(argsF978);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F976,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F976,LITREF(lit_21),x_1088F975);
    x_1087F979 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F979,x_1088F975);
    BOXVAL(fF977) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F979);
    x_1087F980 = T12;
    BOXVAL(argsF978) = x_1087F980;
    x_1087F981 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F981,x_1088F975);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1088F975,LITREF(lit_6),x_1087F976);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF977);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF978);
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

FUNCODEDEF(fun_x_1092_9) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_23));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_10) {
  P sets_,inits_;
  P valF982;
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
    valF982 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF982);
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
  P setsF992;
  P loopF991;
  P varF990;
  P x_1091F989;
  P x_1091F988;
  P x_1091F987;
  P prop_initsF986;
  P xF985;
  P x_1091F984;
  P x_1092F983;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1092_9,1);
  x_1092F983 = T1;
  FUNINIT(x_1092F983, 1,return_);
  x_1091F984 = FREEREF(0);
  xF985 = YPfalse;
  xF985 = BOXFAB(xF985);
  prop_initsF986 = YPfalse;
  prop_initsF986 = BOXFAB(prop_initsF986);
  T7 = CALL2(1,VARREF(YisaQ),x_1091F984,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1091F984,LITREF(lit_23),x_1092F983);
    x_1091F987 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1091F987,x_1092F983);
    BOXVAL(xF985) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1091F987);
    x_1091F988 = T12;
    BOXVAL(prop_initsF986) = x_1091F988;
    x_1091F989 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1091F989,x_1092F983);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1092F983,LITREF(lit_6),x_1091F984);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF990 = T17;
  T20 = FUNSHELL(1,fun_loop_10,2);
  loopF991 = T20;
  FUNINIT(loopF991, 2,varF990,loopF991);
  T22 = BOXVAL(prop_initsF986);
  T21 = CALL2(0,loopF991,Ynil,T22);
  T19 = T21;
  setsF992 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF990);
  T31 = BOXVAL(xF985);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF990);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,setsF992,T32,Ynil);
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
  P gF996;
  P g_argsF995;
  P g_declsF994;
  P tup3F993;
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
    tup3F993 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F993,YPint((P)0));
    g_declsF994 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F993,YPint((P)1));
    g_argsF995 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF996 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF996);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF994);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF996,g_argsF995);
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
  P g_argsF1000;
  P g_declsF999;
  P tup4F998;
  P munchF997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF997 = T1;
  FUNINIT(munchF997, 1,munchF997);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF997,T7);
    tup4F998 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F998,YPint((P)0));
    g_declsF999 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F998,YPint((P)1));
    g_argsF1000 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF1000);
    T12 = CALL2(1,VARREF(Ytup),g_declsF999,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1098_15) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_33));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1100_16) {
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
  P x_1099F1004;
  P amountF1003;
  P x_1099F1002;
  P x_1100F1001;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1100_16,1);
  x_1100F1001 = T1;
  FUNINIT(x_1100F1001, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1099F1002 = T3;
  amountF1003 = YPfalse;
  amountF1003 = BOXFAB(amountF1003);
  T6 = CALL2(1,VARREF(YisaQ),x_1099F1002,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1099F1002,x_1100F1001);
    BOXVAL(amountF1003) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1099F1002);
    x_1099F1004 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1099F1004,x_1100F1001);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1100F1001,LITREF(lit_6),x_1099F1002);
  }
  T12 = BOXVAL(amountF1003);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF1015;
  P g_placeF1014;
  P g_declsF1013;
  P tup6F1012;
  P x_1097F1011;
  P x_1097F1010;
  P x_1097F1009;
  P amountF1008;
  P placeF1007;
  P x_1097F1006;
  P x_1098F1005;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1098_15,1);
  x_1098F1005 = T1;
  FUNINIT(x_1098F1005, 1,return_);
  x_1097F1006 = FREEREF(0);
  placeF1007 = YPfalse;
  placeF1007 = BOXFAB(placeF1007);
  amountF1008 = YPfalse;
  amountF1008 = BOXFAB(amountF1008);
  T7 = CALL2(1,VARREF(YisaQ),x_1097F1006,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1097F1006,LITREF(lit_33),x_1098F1005);
    x_1097F1009 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1097F1009,x_1098F1005);
    BOXVAL(placeF1007) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1097F1009);
    x_1097F1010 = T12;
    BOXVAL(amountF1008) = x_1097F1010;
    x_1097F1011 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1097F1011,x_1098F1005);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1098F1005,LITREF(lit_6),x_1097F1006);
  }
  T18 = BOXVAL(placeF1007);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup6F1012 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1012,YPint((P)0));
  g_declsF1013 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1012,YPint((P)1));
  g_placeF1014 = T22;
  T25 = FUNFAB(fun_17,1,amountF1008);
  T24 = with_exit(T25);
  amountF1015 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1013,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF1014);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1014);
  T38 = CALL1(1,VARREF(Ylst),amountF1015);
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

FUNCODEDEF(fun_x_1106_20) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_37));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1108_21) {
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
  P x_1107F1019;
  P amountF1018;
  P x_1107F1017;
  P x_1108F1016;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_21,1);
  x_1108F1016 = T1;
  FUNINIT(x_1108F1016, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1107F1017 = T3;
  amountF1018 = YPfalse;
  amountF1018 = BOXFAB(amountF1018);
  T6 = CALL2(1,VARREF(YisaQ),x_1107F1017,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1017,x_1108F1016);
    BOXVAL(amountF1018) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1107F1017);
    x_1107F1019 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1019,x_1108F1016);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1108F1016,LITREF(lit_6),x_1107F1017);
  }
  T12 = BOXVAL(amountF1018);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF1030;
  P g_placeF1029;
  P g_declsF1028;
  P tup8F1027;
  P x_1105F1026;
  P x_1105F1025;
  P x_1105F1024;
  P amountF1023;
  P placeF1022;
  P x_1105F1021;
  P x_1106F1020;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1106_20,1);
  x_1106F1020 = T1;
  FUNINIT(x_1106F1020, 1,return_);
  x_1105F1021 = FREEREF(0);
  placeF1022 = YPfalse;
  placeF1022 = BOXFAB(placeF1022);
  amountF1023 = YPfalse;
  amountF1023 = BOXFAB(amountF1023);
  T7 = CALL2(1,VARREF(YisaQ),x_1105F1021,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1105F1021,LITREF(lit_37),x_1106F1020);
    x_1105F1024 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1105F1024,x_1106F1020);
    BOXVAL(placeF1022) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1105F1024);
    x_1105F1025 = T12;
    BOXVAL(amountF1023) = x_1105F1025;
    x_1105F1026 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1105F1026,x_1106F1020);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1106F1020,LITREF(lit_6),x_1105F1021);
  }
  T18 = BOXVAL(placeF1022);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup8F1027 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1027,YPint((P)0));
  g_declsF1028 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1027,YPint((P)1));
  g_placeF1029 = T22;
  T25 = FUNFAB(fun_22,1,amountF1023);
  T24 = with_exit(T25);
  amountF1030 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1028,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF1029);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1029);
  T38 = CALL1(1,VARREF(Ylst),amountF1030);
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

FUNCODEDEF(fun_x_1112_25) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_41));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P g_placeF1040;
  P g_declsF1039;
  P tup10F1038;
  P x_1111F1037;
  P x_1111F1036;
  P x_1111F1035;
  P valueF1034;
  P placeF1033;
  P x_1111F1032;
  P x_1112F1031;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_25,1);
  x_1112F1031 = T1;
  FUNINIT(x_1112F1031, 1,return_);
  x_1111F1032 = FREEREF(0);
  placeF1033 = YPfalse;
  placeF1033 = BOXFAB(placeF1033);
  valueF1034 = YPfalse;
  valueF1034 = BOXFAB(valueF1034);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F1032,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F1032,LITREF(lit_41),x_1112F1031);
    x_1111F1035 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1035,x_1112F1031);
    BOXVAL(placeF1033) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F1035);
    x_1111F1036 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1036,x_1112F1031);
    BOXVAL(valueF1034) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F1036);
    x_1111F1037 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1037,x_1112F1031);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1112F1031,LITREF(lit_6),x_1111F1032);
  }
  T20 = BOXVAL(placeF1033);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup10F1038 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1038,YPint((P)0));
  g_declsF1039 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1038,YPint((P)1));
  g_placeF1040 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1039,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T32 = CALL1(1,VARREF(Ylst),g_placeF1040);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1040);
  T38 = BOXVAL(valueF1034);
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

FUNCODEDEF(fun_x_1116_28) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_44));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P return_;
  P tmpF1054;
  P yg_placeF1053;
  P yg_declsF1052;
  P tup14F1051;
  P xg_placeF1050;
  P xg_declsF1049;
  P tup13F1048;
  P x_1115F1047;
  P x_1115F1046;
  P x_1115F1045;
  P yF1044;
  P xF1043;
  P x_1115F1042;
  P x_1116F1041;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_28,1);
  x_1116F1041 = T1;
  FUNINIT(x_1116F1041, 1,return_);
  x_1115F1042 = FREEREF(0);
  xF1043 = YPfalse;
  xF1043 = BOXFAB(xF1043);
  yF1044 = YPfalse;
  yF1044 = BOXFAB(yF1044);
  T7 = CALL2(1,VARREF(YisaQ),x_1115F1042,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F1042,LITREF(lit_44),x_1116F1041);
    x_1115F1045 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1045,x_1116F1041);
    BOXVAL(xF1043) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1115F1045);
    x_1115F1046 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1046,x_1116F1041);
    BOXVAL(yF1044) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1115F1046);
    x_1115F1047 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1047,x_1116F1041);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1116F1041,LITREF(lit_6),x_1115F1042);
  }
  T20 = BOXVAL(xF1043);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup13F1048 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1048,YPint((P)0));
  xg_declsF1049 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1048,YPint((P)1));
  xg_placeF1050 = T24;
  T27 = BOXVAL(yF1044);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup14F1051 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1051,YPint((P)0));
  yg_declsF1052 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1051,YPint((P)1));
  yg_placeF1053 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF1054 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF1054);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF1050);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF1049,yg_declsF1052,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF1050);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF1053);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF1053);
  T51 = CALL1(1,VARREF(Ylst),tmpF1054);
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

FUNCODEDEF(fun_x_1120_31) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_46));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL0(1,VARREF(YgooSmacrosYgensym));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P t_,p_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(p_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),t_);
  T2 = CALL1(1,VARREF(Ylst),p_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P p_,t_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T2 = CALL1(1,VARREF(Ylst),p_);
  T3 = CALL1(1,VARREF(Ylst),t_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P return_;
  P placesF1068;
  P declsF1067;
  P psF1066;
  P tmpsF1065;
  P placesF1064;
  P x_1119F1063;
  P x_1119F1062;
  P x_1119F1061;
  P x_1119F1060;
  P zsF1059;
  P yF1058;
  P xF1057;
  P x_1119F1056;
  P x_1120F1055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_31,1);
  x_1120F1055 = T1;
  FUNINIT(x_1120F1055, 1,return_);
  x_1119F1056 = FREEREF(0);
  xF1057 = YPfalse;
  xF1057 = BOXFAB(xF1057);
  yF1058 = YPfalse;
  yF1058 = BOXFAB(yF1058);
  zsF1059 = YPfalse;
  zsF1059 = BOXFAB(zsF1059);
  T9 = CALL2(1,VARREF(YisaQ),x_1119F1056,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F1056,LITREF(lit_46),x_1120F1055);
    x_1119F1060 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F1060,x_1120F1055);
    BOXVAL(xF1057) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1119F1060);
    x_1119F1061 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F1061,x_1120F1055);
    BOXVAL(yF1058) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1119F1061);
    x_1119F1062 = T17;
    BOXVAL(zsF1059) = x_1119F1062;
    x_1119F1063 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1063,x_1120F1055);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1120F1055,LITREF(lit_6),x_1119F1056);
  }
  T24 = BOXVAL(xF1057);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(yF1058);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T27 = BOXVAL(zsF1059);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T25,T27,Ynil);
  placesF1064 = T22;
  T30 = fun_32;
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),T30,placesF1064);
  tmpsF1065 = T29;
  T32 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF1064);
  psF1066 = T32;
  T34 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF1066);
  declsF1067 = T34;
  T36 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF1066);
  placesF1068 = T36;
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T41 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF1067);
  T43 = fun_33;
  T42 = CALL3(1,VARREF(YgooSmacrosYmap2),T43,tmpsF1065,placesF1068);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = fun_34;
  T46 = CALL1(1,VARREF(Ytail),tmpsF1065);
  T44 = CALL3(1,VARREF(YgooSmacrosYmap2),T45,placesF1068,T46);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T51 = CALL1(1,VARREF(YgooSmacrosYlast),placesF1068);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T53 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF1065);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T52,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T37 = CALL5(1,VARREF(YgooSmacrosYcat),T38,T39,T44,T47,Ynil);
  T35 = T37;
  T33 = T35;
  T31 = T33;
  T28 = T31;
  T21 = T28;
  T7 = T21;
  T5 = T7;
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_51));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P valF1078;
  P new_colF1077;
  P g_placeF1076;
  P g_declsF1075;
  P tup16F1074;
  P x_1123F1073;
  P x_1123F1072;
  P placeF1071;
  P x_1123F1070;
  P x_1124F1069;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_37,1);
  x_1124F1069 = T1;
  FUNINIT(x_1124F1069, 1,return_);
  x_1123F1070 = FREEREF(0);
  placeF1071 = YPfalse;
  placeF1071 = BOXFAB(placeF1071);
  T5 = CALL2(1,VARREF(YisaQ),x_1123F1070,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F1070,LITREF(lit_51),x_1124F1069);
    x_1123F1072 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1072,x_1124F1069);
    BOXVAL(placeF1071) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1123F1072);
    x_1123F1073 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1073,x_1124F1069);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1124F1069,LITREF(lit_6),x_1123F1070);
  }
  T15 = BOXVAL(placeF1071);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup16F1074 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1074,YPint((P)0));
  g_declsF1075 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1074,YPint((P)1));
  g_placeF1076 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF1077 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF1078 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T33 = CALL1(1,VARREF(Ylst),new_colF1077);
  T34 = CALL1(1,VARREF(Ylst),valF1078);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T38 = CALL1(1,VARREF(Ylst),g_placeF1076);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1075,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T42 = CALL1(1,VARREF(Ylst),g_placeF1076);
  T43 = CALL1(1,VARREF(Ylst),new_colF1077);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF1078);
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_55));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P return_;
  P g_placeF1088;
  P g_declsF1087;
  P tup18F1086;
  P x_1127F1085;
  P x_1127F1084;
  P x_1127F1083;
  P callF1082;
  P placeF1081;
  P x_1127F1080;
  P x_1128F1079;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_40,1);
  x_1128F1079 = T1;
  FUNINIT(x_1128F1079, 1,return_);
  x_1127F1080 = FREEREF(0);
  placeF1081 = YPfalse;
  placeF1081 = BOXFAB(placeF1081);
  callF1082 = YPfalse;
  callF1082 = BOXFAB(callF1082);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F1080,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F1080,LITREF(lit_55),x_1128F1079);
    x_1127F1083 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1083,x_1128F1079);
    BOXVAL(placeF1081) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F1083);
    x_1127F1084 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1084,x_1128F1079);
    BOXVAL(callF1082) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1127F1084);
    x_1127F1085 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1085,x_1128F1079);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1128F1079,LITREF(lit_6),x_1127F1080);
  }
  T20 = BOXVAL(placeF1081);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup18F1086 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1086,YPint((P)0));
  g_declsF1087 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1086,YPint((P)1));
  g_placeF1088 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T32 = CALL1(1,VARREF(Ylst),g_placeF1088);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1087,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1088);
  T38 = BOXVAL(callF1082);
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

FUNCODEDEF(fun_x_1132_43) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_58));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P return_;
  P x_1131F1095;
  P x_1131F1094;
  P x_1131F1093;
  P bodyF1092;
  P testF1091;
  P x_1131F1090;
  P x_1132F1089;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1132_43,1);
  x_1132F1089 = T1;
  FUNINIT(x_1132F1089, 1,return_);
  x_1131F1090 = FREEREF(0);
  testF1091 = YPfalse;
  testF1091 = BOXFAB(testF1091);
  bodyF1092 = YPfalse;
  bodyF1092 = BOXFAB(bodyF1092);
  T7 = CALL2(1,VARREF(YisaQ),x_1131F1090,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F1090,LITREF(lit_58),x_1132F1089);
    x_1131F1093 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F1093,x_1132F1089);
    BOXVAL(testF1091) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1131F1093);
    x_1131F1094 = T12;
    BOXVAL(bodyF1092) = x_1131F1094;
    x_1131F1095 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1095,x_1132F1089);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1132F1089,LITREF(lit_6),x_1131F1090);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T22 = BOXVAL(testF1091);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T26 = BOXVAL(bodyF1092);
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

FUNCODEDEF(fun_45) {
  P exp_;
  P T0,T1;
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_62));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1135F1102;
  P x_1135F1101;
  P x_1135F1100;
  P bodyF1099;
  P testF1098;
  P x_1135F1097;
  P x_1136F1096;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1136_46,1);
  x_1136F1096 = T1;
  FUNINIT(x_1136F1096, 1,return_);
  x_1135F1097 = FREEREF(0);
  testF1098 = YPfalse;
  testF1098 = BOXFAB(testF1098);
  bodyF1099 = YPfalse;
  bodyF1099 = BOXFAB(bodyF1099);
  T7 = CALL2(1,VARREF(YisaQ),x_1135F1097,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1135F1097,LITREF(lit_62),x_1136F1096);
    x_1135F1100 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1135F1100,x_1136F1096);
    BOXVAL(testF1098) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1135F1100);
    x_1135F1101 = T12;
    BOXVAL(bodyF1099) = x_1135F1101;
    x_1135F1102 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1135F1102,x_1136F1096);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1136F1096,LITREF(lit_6),x_1135F1097);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF1098);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T23 = BOXVAL(bodyF1099);
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

FUNCODEDEF(fun_48) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_47,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1144_49) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_64));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1146_50) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1148_51) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
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

FUNCODEDEF(fun_52) {
  P return_;
  P x_1147F1104;
  P x_1148F1103;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1148_51,3);
  x_1148F1103 = T1;
  FUNINIT(x_1148F1103, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1147F1104 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1147F1104,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1147F1104,x_1148F1103);
  } else {
    T6 = CALL2(1,x_1148F1103,LITREF(lit_6),x_1147F1104);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1145F1110;
  P x_1145F1109;
  P restF1108;
  P xF1107;
  P x_1145F1106;
  P x_1146F1105;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1146_50,1);
  x_1146F1105 = T1;
  FUNINIT(x_1146F1105, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1145F1106 = T3;
  xF1107 = YPfalse;
  xF1107 = BOXFAB(xF1107);
  restF1108 = YPfalse;
  restF1108 = BOXFAB(restF1108);
  T8 = CALL2(1,VARREF(YisaQ),x_1145F1106,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1145F1106,x_1146F1105);
    BOXVAL(xF1107) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1145F1106);
    x_1145F1109 = T11;
    BOXVAL(restF1108) = x_1145F1109;
    x_1145F1110 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1145F1110,x_1146F1105);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1146F1105,LITREF(lit_6),x_1145F1106);
  }
  T16 = FUNFAB(fun_52,2,xF1107,restF1108);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1143F1115;
  P x_1143F1114;
  P restF1113;
  P x_1143F1112;
  P x_1144F1111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1144_49,1);
  x_1144F1111 = T1;
  FUNINIT(x_1144F1111, 1,return_);
  x_1143F1112 = FREEREF(0);
  restF1113 = YPfalse;
  restF1113 = BOXFAB(restF1113);
  T5 = CALL2(1,VARREF(YisaQ),x_1143F1112,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1143F1112,LITREF(lit_64),x_1144F1111);
    x_1143F1114 = T7;
    BOXVAL(restF1113) = x_1143F1114;
    x_1143F1115 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1115,x_1144F1111);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1144F1111,LITREF(lit_6),x_1143F1112);
  }
  T12 = FUNFAB(fun_53,1,restF1113);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_54,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1156_56) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_69));
  T0 = CALL1(1,FREEREF(0),T1);
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
  T0 = CALL1(1,FREEREF(0),YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1160_58) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
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

FUNCODEDEF(fun_59) {
  P return_;
  P x_1159F1117;
  P x_1160F1116;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1160_58,3);
  x_1160F1116 = T1;
  FUNINIT(x_1160F1116, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1159F1117 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1159F1117,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1159F1117,x_1160F1116);
  } else {
    T6 = CALL2(1,x_1160F1116,LITREF(lit_6),x_1159F1117);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1157F1123;
  P x_1157F1122;
  P restF1121;
  P xF1120;
  P x_1157F1119;
  P x_1158F1118;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1158_57,1);
  x_1158F1118 = T1;
  FUNINIT(x_1158F1118, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1157F1119 = T3;
  xF1120 = YPfalse;
  xF1120 = BOXFAB(xF1120);
  restF1121 = YPfalse;
  restF1121 = BOXFAB(restF1121);
  T8 = CALL2(1,VARREF(YisaQ),x_1157F1119,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1157F1119,x_1158F1118);
    BOXVAL(xF1120) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1157F1119);
    x_1157F1122 = T11;
    BOXVAL(restF1121) = x_1157F1122;
    x_1157F1123 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1157F1123,x_1158F1118);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1158F1118,LITREF(lit_6),x_1157F1119);
  }
  T16 = FUNFAB(fun_59,2,xF1120,restF1121);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1155F1128;
  P x_1155F1127;
  P restF1126;
  P x_1155F1125;
  P x_1156F1124;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1156_56,1);
  x_1156F1124 = T1;
  FUNINIT(x_1156F1124, 1,return_);
  x_1155F1125 = FREEREF(0);
  restF1126 = YPfalse;
  restF1126 = BOXFAB(restF1126);
  T5 = CALL2(1,VARREF(YisaQ),x_1155F1125,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1155F1125,LITREF(lit_69),x_1156F1124);
    x_1155F1127 = T7;
    BOXVAL(restF1126) = x_1155F1127;
    x_1155F1128 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1128,x_1156F1124);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1156F1124,LITREF(lit_6),x_1155F1125);
  }
  T12 = FUNFAB(fun_60,1,restF1126);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_61,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1166_63) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_73));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1168_64) {
  P msg_,args_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_75),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1167F1134;
  P x_1167F1133;
  P bodyF1132;
  P condF1131;
  P x_1167F1130;
  P x_1168F1129;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1168_64,2);
  x_1168F1129 = T1;
  FUNINIT(x_1168F1129, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1167F1130 = T3;
  condF1131 = YPfalse;
  condF1131 = BOXFAB(condF1131);
  bodyF1132 = YPfalse;
  bodyF1132 = BOXFAB(bodyF1132);
  T9 = CALL2(1,VARREF(YisaQ),x_1167F1130,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1167F1130,x_1168F1129);
    BOXVAL(condF1131) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1167F1130);
    x_1167F1133 = T12;
    BOXVAL(bodyF1132) = x_1167F1133;
    x_1167F1134 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1167F1134,x_1168F1129);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1168F1129,LITREF(lit_6),x_1167F1130);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF1131);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T23 = BOXVAL(bodyF1132);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
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

FUNCODEDEF(fun_66) {
  P return_;
  P x_1165F1139;
  P x_1165F1138;
  P casesF1137;
  P x_1165F1136;
  P x_1166F1135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1166_63,1);
  x_1166F1135 = T1;
  FUNINIT(x_1166F1135, 1,return_);
  x_1165F1136 = FREEREF(0);
  casesF1137 = YPfalse;
  casesF1137 = BOXFAB(casesF1137);
  T5 = CALL2(1,VARREF(YisaQ),x_1165F1136,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1165F1136,LITREF(lit_73),x_1166F1135);
    x_1165F1138 = T7;
    BOXVAL(casesF1137) = x_1165F1138;
    x_1165F1139 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1165F1139,x_1166F1135);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1166F1135,LITREF(lit_6),x_1165F1136);
  }
  T13 = BOXVAL(casesF1137);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_65,1,casesF1137);
    T14 = with_exit(T15);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_66,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1174_68) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_81),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1176_69) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_83),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
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

FUNCODEDEF(fun_71) {
  P return_;
  P x_1175F1143;
  P valuesF1142;
  P x_1175F1141;
  P x_1176F1140;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_69,2);
  x_1176F1140 = T1;
  FUNINIT(x_1176F1140, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1175F1141 = T3;
  valuesF1142 = YPfalse;
  valuesF1142 = BOXFAB(valuesF1142);
  T6 = CALL2(1,VARREF(YisaQ),x_1175F1141,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF1142) = x_1175F1141;
    x_1175F1143 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1143,x_1176F1140);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1176F1140,LITREF(lit_6),x_1175F1141);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T16 = FUNFAB(fun_70,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF1142);
  T15 = CALL2(1,VARREF(YgooSmacrosYmap),T16,T17);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,Ynil);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
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

FUNCODEDEF(fun_72) {
  P return_;
  P x_1173F1149;
  P x_1173F1148;
  P bodyF1147;
  P condF1146;
  P x_1173F1145;
  P x_1174F1144;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1174_68,2);
  x_1174F1144 = T1;
  FUNINIT(x_1174F1144, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1173F1145 = T3;
  condF1146 = YPfalse;
  condF1146 = BOXFAB(condF1146);
  bodyF1147 = YPfalse;
  bodyF1147 = BOXFAB(bodyF1147);
  T8 = CALL2(1,VARREF(YisaQ),x_1173F1145,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1173F1145,x_1174F1144);
    BOXVAL(condF1146) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1173F1145);
    x_1173F1148 = T11;
    BOXVAL(bodyF1147) = x_1173F1148;
    x_1173F1149 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1173F1149,x_1174F1144);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1174F1144,LITREF(lit_6),x_1173F1145);
  }
  T17 = BOXVAL(condF1146);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T20 = BOXVAL(bodyF1147);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_71,5,FREEREF(0),condF1146,FREEREF(1),FREEREF(2),bodyF1147);
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
    T3 = FUNFAB(fun_72,3,cases_,tst_,val_);
    T2 = with_exit(T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1180_74) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_85));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P tst_varF1160;
  P val_varF1159;
  P x_1179F1158;
  P x_1179F1157;
  P x_1179F1156;
  P x_1179F1155;
  P casesF1154;
  P tstF1153;
  P valF1152;
  P x_1179F1151;
  P x_1180F1150;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_74,1);
  x_1180F1150 = T1;
  FUNINIT(x_1180F1150, 1,return_);
  x_1179F1151 = FREEREF(0);
  valF1152 = YPfalse;
  valF1152 = BOXFAB(valF1152);
  tstF1153 = YPfalse;
  tstF1153 = BOXFAB(tstF1153);
  casesF1154 = YPfalse;
  casesF1154 = BOXFAB(casesF1154);
  T9 = CALL2(1,VARREF(YisaQ),x_1179F1151,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F1151,LITREF(lit_85),x_1180F1150);
    x_1179F1155 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1155,x_1180F1150);
    BOXVAL(valF1152) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1179F1155);
    x_1179F1156 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1156,x_1180F1150);
    BOXVAL(tstF1153) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1179F1156);
    x_1179F1157 = T17;
    BOXVAL(casesF1154) = x_1179F1157;
    x_1179F1158 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1158,x_1180F1150);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1180F1150,LITREF(lit_6),x_1179F1151);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF1159 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF1160 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF1159);
  T33 = BOXVAL(valF1152);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF1160);
  T38 = BOXVAL(tstF1153);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF1154);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF1159,tst_varF1160,T41);
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

FUNCODEDEF(fun_76) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_75,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1184_77) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_87));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1183F1167;
  P x_1183F1166;
  P x_1183F1165;
  P casesF1164;
  P valF1163;
  P x_1183F1162;
  P x_1184F1161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1184_77,1);
  x_1184F1161 = T1;
  FUNINIT(x_1184F1161, 1,return_);
  x_1183F1162 = FREEREF(0);
  valF1163 = YPfalse;
  valF1163 = BOXFAB(valF1163);
  casesF1164 = YPfalse;
  casesF1164 = BOXFAB(casesF1164);
  T7 = CALL2(1,VARREF(YisaQ),x_1183F1162,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1183F1162,LITREF(lit_87),x_1184F1161);
    x_1183F1165 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F1165,x_1184F1161);
    BOXVAL(valF1163) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1183F1165);
    x_1183F1166 = T12;
    BOXVAL(casesF1164) = x_1183F1166;
    x_1183F1167 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F1167,x_1184F1161);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1184F1161,LITREF(lit_6),x_1183F1162);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T19 = BOXVAL(valF1163);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T21 = BOXVAL(casesF1164);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P exp_;
  P T0,T1;
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_90));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_93));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T5,Ynil);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T8 = CALL1(1,VARREF(Ylst),x_);
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_splice_82) {
  P y_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = fun_81;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rest_opQ_83) {
  P x_;
  P tmpF1169;
  P tmpF1168;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1168 = T2;
  if (tmpF1168 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF1169 = T1;
  if (tmpF1169 != YPfalse) {
    T5 = tmpF1169;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_93));
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_84) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,LITREF(lit_93));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
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

FUNCODEDEF(fun_walk_op_86) {
  P vars_,x_;
  P yF1172;
  P spliceQF1171;
  P varF1170;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(vars_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_56));
  if (T1 != YPfalse) {
    T4 = (P)YOlen(vars_);
    T3 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_101),T4);
    varF1170 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF1170,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF1170;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_84;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF1171 = T10;
      T14 = FUNFAB(fun_85,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF1172 = T13;
      if (spliceQF1171 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF1172);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
        T24 = CALL1(1,VARREF(Ytail),yF1172);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF1172;
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

FUNCODEDEF(fun_87) {
  P return_;
  P argsF1185;
  P exprF1184;
  P varsF1183;
  P walk_opF1182;
  P rest_opQF1181;
  P spliceF1180;
  P x_1187F1179;
  P x_1187F1178;
  P x_1187F1177;
  P argsF1176;
  P fF1175;
  P x_1187F1174;
  P x_1188F1173;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1188_80,1);
  x_1188F1173 = T1;
  FUNINIT(x_1188F1173, 1,return_);
  x_1187F1174 = FREEREF(0);
  fF1175 = YPfalse;
  fF1175 = BOXFAB(fF1175);
  argsF1176 = YPfalse;
  argsF1176 = BOXFAB(argsF1176);
  T7 = CALL2(1,VARREF(YisaQ),x_1187F1174,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1187F1174,LITREF(lit_90),x_1188F1173);
    x_1187F1177 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1187F1177,x_1188F1173);
    BOXVAL(fF1175) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1187F1177);
    x_1187F1178 = T12;
    BOXVAL(argsF1176) = x_1187F1178;
    x_1187F1179 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1187F1179,x_1188F1173);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1188F1173,LITREF(lit_6),x_1187F1174);
  }
  T17 = fun_splice_82;
  spliceF1180 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_83,1);
  rest_opQF1181 = T18;
  T19 = FUNSHELL(1,fun_walk_op_86,2);
  walk_opF1182 = T19;
  FUNINIT(rest_opQF1181, 1,rest_opQF1181);
  FUNINIT(walk_opF1182, 2,walk_opF1182,spliceF1180);
  T22 = BOXVAL(argsF1176);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF1175);
    T24 = CALL2(1,VARREF(YgooSmacrosYEE),T25,LITREF(lit_56));
    if (T24 != YPfalse) {
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T31 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T31,Ynil);
      T23 = T26;
    } else {
      T33 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
      T38 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
      T39 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
      T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T39,Ynil);
      T36 = CALL1(1,VARREF(Ylst),T37);
      T35 = CALL2(1,VARREF(YgooSmacrosYcat),T36,Ynil);
      T34 = CALL1(1,VARREF(Ylst),T35);
      T41 = BOXVAL(fF1175);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF1183 = T43;
    T48 = BOXVAL(fF1175);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF1176);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF1182,varsF1183,T46);
    exprF1184 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF1183);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF1176);
    T55 = CALL1(1,rest_opQF1181,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_104);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF1185 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
    T59 = CALL1(1,VARREF(Ylst),argsF1185);
    T60 = CALL1(1,VARREF(Ylst),exprF1184);
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

FUNCODEDEF(fun_88) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_87,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1196_89) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_106));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1200_90) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_109));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P return_;
  P varF1196;
  P x_1199F1195;
  P x_1199F1194;
  P x_1199F1193;
  P x_1199F1192;
  P x_1199F1191;
  P restF1190;
  P thenF1189;
  P patF1188;
  P x_1199F1187;
  P x_1200F1186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1200_90,1);
  x_1200F1186 = T1;
  FUNINIT(x_1200F1186, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1199F1187 = T3;
  patF1188 = YPfalse;
  patF1188 = BOXFAB(patF1188);
  thenF1189 = YPfalse;
  thenF1189 = BOXFAB(thenF1189);
  restF1190 = YPfalse;
  restF1190 = BOXFAB(restF1190);
  T10 = CALL2(1,VARREF(YisaQ),x_1199F1187,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1199F1187,x_1200F1186);
    x_1199F1191 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F1191,x_1200F1186);
    BOXVAL(patF1188) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1199F1191);
    x_1199F1192 = T15;
    BOXVAL(thenF1189) = x_1199F1192;
    x_1199F1193 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F1193,x_1200F1186);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1199F1187);
    x_1199F1194 = T18;
    BOXVAL(restF1190) = x_1199F1194;
    x_1199F1195 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F1195,x_1200F1186);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1200F1186,LITREF(lit_6),x_1199F1187);
  }
  T24 = BOXVAL(patF1188);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T27 = BOXVAL(thenF1189);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF1196 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF1196);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
    T45 = BOXVAL(patF1188);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF1196);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T50 = BOXVAL(thenF1189);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
    T54 = CALL1(1,VARREF(Ylst),varF1196);
    T55 = BOXVAL(restF1190);
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

FUNCODEDEF(fun_x_1198_92) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_91,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P return_;
  P x_1197F1198;
  P x_1198F1197;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1198_92,3);
  x_1198F1197 = T1;
  FUNINIT(x_1198F1197, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1197F1198 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1197F1198,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1197F1198,x_1198F1197);
  } else {
    T6 = CALL2(1,x_1198F1197,LITREF(lit_6),x_1197F1198);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P x_1195F1205;
  P x_1195F1204;
  P x_1195F1203;
  P casesF1202;
  P expF1201;
  P x_1195F1200;
  P x_1196F1199;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_89,1);
  x_1196F1199 = T1;
  FUNINIT(x_1196F1199, 1,return_);
  x_1195F1200 = FREEREF(0);
  expF1201 = YPfalse;
  expF1201 = BOXFAB(expF1201);
  casesF1202 = YPfalse;
  casesF1202 = BOXFAB(casesF1202);
  T7 = CALL2(1,VARREF(YisaQ),x_1195F1200,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1195F1200,LITREF(lit_106),x_1196F1199);
    x_1195F1203 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1203,x_1196F1199);
    BOXVAL(expF1201) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1195F1203);
    x_1195F1204 = T12;
    BOXVAL(casesF1202) = x_1195F1204;
    x_1195F1205 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1205,x_1196F1199);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1196F1199,LITREF(lit_6),x_1195F1200);
  }
  T17 = FUNFAB(fun_93,2,casesF1202,expF1201);
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
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1204_96) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_113));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P x_1203F1214;
  P x_1203F1213;
  P x_1203F1212;
  P x_1203F1211;
  P argsF1210;
  P messageF1209;
  P condF1208;
  P x_1203F1207;
  P x_1204F1206;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1204_96,1);
  x_1204F1206 = T1;
  FUNINIT(x_1204F1206, 1,return_);
  x_1203F1207 = FREEREF(0);
  condF1208 = YPfalse;
  condF1208 = BOXFAB(condF1208);
  messageF1209 = YPfalse;
  messageF1209 = BOXFAB(messageF1209);
  argsF1210 = YPfalse;
  argsF1210 = BOXFAB(argsF1210);
  T9 = CALL2(1,VARREF(YisaQ),x_1203F1207,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1203F1207,LITREF(lit_113),x_1204F1206);
    x_1203F1211 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1203F1211,x_1204F1206);
    BOXVAL(condF1208) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1203F1211);
    x_1203F1212 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1203F1212,x_1204F1206);
    BOXVAL(messageF1209) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1203F1212);
    x_1203F1213 = T17;
    BOXVAL(argsF1210) = x_1203F1213;
    x_1203F1214 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1203F1214,x_1204F1206);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1204F1206,LITREF(lit_6),x_1203F1207);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T27 = BOXVAL(condF1208);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF1209);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF1210);
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

FUNCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1212_99) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_115));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1214_100) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1216_101) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  P return_;
  P x_1215F1221;
  P x_1215F1220;
  P x_1215F1219;
  P valF1218;
  P keyF1217;
  P x_1215F1216;
  P x_1216F1215;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_101,3);
  x_1216F1215 = T1;
  FUNINIT(x_1216F1215, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1215F1216 = T3;
  keyF1217 = YPfalse;
  keyF1217 = BOXFAB(keyF1217);
  valF1218 = YPfalse;
  valF1218 = BOXFAB(valF1218);
  T8 = CALL2(1,VARREF(YisaQ),x_1215F1216,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F1216,LITREF(lit_52),x_1216F1215);
    x_1215F1219 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F1219,x_1216F1215);
    BOXVAL(keyF1217) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1215F1219);
    x_1215F1220 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F1220,x_1216F1215);
    BOXVAL(valF1218) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1215F1220);
    x_1215F1221 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1221,x_1216F1215);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1216F1215,LITREF(lit_6),x_1215F1216);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T24 = BOXVAL(keyF1217);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF1218);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T25,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T33 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
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

FUNCODEDEF(fun_103) {
  P return_;
  P stateF1228;
  P x_1213F1227;
  P x_1213F1226;
  P expF1225;
  P varF1224;
  P x_1213F1223;
  P x_1214F1222;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1214_100,1);
  x_1214F1222 = T1;
  FUNINIT(x_1214F1222, 1,return_);
  x_1213F1223 = FREEREF(0);
  varF1224 = YPfalse;
  varF1224 = BOXFAB(varF1224);
  expF1225 = YPfalse;
  expF1225 = BOXFAB(expF1225);
  T7 = CALL2(1,VARREF(YisaQ),x_1213F1223,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1213F1223,x_1214F1222);
    BOXVAL(varF1224) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1213F1223);
    x_1213F1226 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1213F1226,x_1214F1222);
    BOXVAL(expF1225) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1213F1226);
    x_1213F1227 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1213F1227,x_1214F1222);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1214F1222,LITREF(lit_6),x_1213F1223);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF1228 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T22 = CALL1(1,VARREF(Ylst),stateF1228);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_123));
  T27 = BOXVAL(expF1225);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(2));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
  T31 = CALL1(1,VARREF(Ylst),stateF1228);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(3));
  T34 = FUNFAB(fun_102,2,varF1224,stateF1228);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(4));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_128));
  T38 = CALL1(1,VARREF(Ylst),stateF1228);
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

FUNCODEDEF(fun_grok_104) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF1230;
  P loopF1229;
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
    loopF1229 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
    T6 = CALL1(1,VARREF(Ylst),loopF1229);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF1229);
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
    clauseF1230 = T23;
    T25 = FUNFAB(fun_103,7,clauseF1230,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P return_;
  P grokF1240;
  P x_1211F1239;
  P x_1211F1238;
  P x_1211F1237;
  P x_1211F1236;
  P x_1211F1235;
  P bodyF1234;
  P clausesF1233;
  P x_1211F1232;
  P x_1212F1231;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_99,1);
  x_1212F1231 = T1;
  FUNINIT(x_1212F1231, 1,return_);
  x_1211F1232 = FREEREF(0);
  clausesF1233 = YPfalse;
  clausesF1233 = BOXFAB(clausesF1233);
  bodyF1234 = YPfalse;
  bodyF1234 = BOXFAB(bodyF1234);
  T7 = CALL2(1,VARREF(YisaQ),x_1211F1232,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F1232,LITREF(lit_115),x_1212F1231);
    x_1211F1235 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F1235,x_1212F1231);
    x_1211F1236 = T11;
    BOXVAL(clausesF1233) = x_1211F1236;
    x_1211F1237 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1237,x_1212F1231);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1211F1235);
    x_1211F1238 = T14;
    BOXVAL(bodyF1234) = x_1211F1238;
    x_1211F1239 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1239,x_1212F1231);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1212F1231,LITREF(lit_6),x_1211F1232);
  }
  T19 = FUNSHELL(1,fun_grok_104,2);
  grokF1240 = T19;
  FUNINIT(grokF1240, 2,bodyF1234,grokF1240);
  T21 = BOXVAL(clausesF1233);
  T20 = CALL5(0,grokF1240,T21,Ynil,Ynil,Ynil,Ynil);
  T18 = T20;
  T5 = T18;
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_130));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P return_;
  P x_1219F1247;
  P x_1219F1246;
  P x_1219F1245;
  P bodyF1244;
  P testF1243;
  P x_1219F1242;
  P x_1220F1241;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1220_107,1);
  x_1220F1241 = T1;
  FUNINIT(x_1220F1241, 1,return_);
  x_1219F1242 = FREEREF(0);
  testF1243 = YPfalse;
  testF1243 = BOXFAB(testF1243);
  bodyF1244 = YPfalse;
  bodyF1244 = BOXFAB(bodyF1244);
  T7 = CALL2(1,VARREF(YisaQ),x_1219F1242,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F1242,LITREF(lit_130),x_1220F1241);
    x_1219F1245 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F1245,x_1220F1241);
    BOXVAL(testF1243) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1219F1245);
    x_1219F1246 = T12;
    BOXVAL(bodyF1244) = x_1219F1246;
    x_1219F1247 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F1247,x_1220F1241);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1220F1241,LITREF(lit_6),x_1219F1242);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T24 = BOXVAL(testF1243);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF1244);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
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

FUNCODEDEF(fun_x_1224_110) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_133));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P return_;
  P x_1223F1254;
  P x_1223F1253;
  P x_1223F1252;
  P bodyF1251;
  P testF1250;
  P x_1223F1249;
  P x_1224F1248;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1224_110,1);
  x_1224F1248 = T1;
  FUNINIT(x_1224F1248, 1,return_);
  x_1223F1249 = FREEREF(0);
  testF1250 = YPfalse;
  testF1250 = BOXFAB(testF1250);
  bodyF1251 = YPfalse;
  bodyF1251 = BOXFAB(bodyF1251);
  T7 = CALL2(1,VARREF(YisaQ),x_1223F1249,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1223F1249,LITREF(lit_133),x_1224F1248);
    x_1223F1252 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1223F1252,x_1224F1248);
    BOXVAL(testF1250) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1223F1252);
    x_1223F1253 = T12;
    BOXVAL(bodyF1251) = x_1223F1253;
    x_1223F1254 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1223F1254,x_1224F1248);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1224F1248,LITREF(lit_6),x_1223F1249);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T24 = BOXVAL(testF1250);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF1251);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
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

FUNCODEDEF(fun_112) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_111,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1232_113) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_135));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_114) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_138),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P return_;
  P old_valueF1266;
  P nameF1265;
  P x_1235F1264;
  P x_1235F1263;
  P x_1235F1262;
  P x_1235F1261;
  P x_1235F1260;
  P restF1259;
  P valueF1258;
  P varF1257;
  P x_1235F1256;
  P x_1236F1255;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_114,2);
  x_1236F1255 = T1;
  FUNINIT(x_1236F1255, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1235F1256 = T3;
  varF1257 = YPfalse;
  varF1257 = BOXFAB(varF1257);
  valueF1258 = YPfalse;
  valueF1258 = BOXFAB(valueF1258);
  restF1259 = YPfalse;
  restF1259 = BOXFAB(restF1259);
  T10 = CALL2(1,VARREF(YisaQ),x_1235F1256,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1235F1256,x_1236F1255);
    x_1235F1260 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1260,x_1236F1255);
    BOXVAL(varF1257) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1235F1260);
    x_1235F1261 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1261,x_1236F1255);
    BOXVAL(valueF1258) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1235F1261);
    x_1235F1262 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1262,x_1236F1255);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1235F1256);
    x_1235F1263 = T20;
    BOXVAL(restF1259) = x_1235F1263;
    x_1235F1264 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1264,x_1236F1255);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1236F1255,LITREF(lit_6),x_1235F1256);
  }
  T26 = BOXVAL(varF1257);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF1265 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF1266 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF1266);
  T36 = CALL1(1,VARREF(Ylst),nameF1265);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_139));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T46 = CALL1(1,VARREF(Ylst),nameF1265);
  T48 = BOXVAL(valueF1258);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_135));
  T54 = BOXVAL(restF1259);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T59 = CALL1(1,VARREF(Ylst),nameF1265);
  T60 = CALL1(1,VARREF(Ylst),old_valueF1266);
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

FUNCODEDEF(fun_x_1234_116) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_115,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_117) {
  P return_;
  P x_1233F1268;
  P x_1234F1267;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1234_116,3);
  x_1234F1267 = T1;
  FUNINIT(x_1234F1267, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1233F1268 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1233F1268,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1233F1268,x_1234F1267);
  } else {
    T6 = CALL2(1,x_1234F1267,LITREF(lit_6),x_1233F1268);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  P return_;
  P x_1231F1275;
  P x_1231F1274;
  P x_1231F1273;
  P bodyF1272;
  P bindingsF1271;
  P x_1231F1270;
  P x_1232F1269;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_113,1);
  x_1232F1269 = T1;
  FUNINIT(x_1232F1269, 1,return_);
  x_1231F1270 = FREEREF(0);
  bindingsF1271 = YPfalse;
  bindingsF1271 = BOXFAB(bindingsF1271);
  bodyF1272 = YPfalse;
  bodyF1272 = BOXFAB(bodyF1272);
  T7 = CALL2(1,VARREF(YisaQ),x_1231F1270,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1231F1270,LITREF(lit_135),x_1232F1269);
    x_1231F1273 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1273,x_1232F1269);
    BOXVAL(bindingsF1271) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1231F1273);
    x_1231F1274 = T12;
    BOXVAL(bodyF1272) = x_1231F1274;
    x_1231F1275 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1275,x_1232F1269);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1232F1269,LITREF(lit_6),x_1231F1270);
  }
  T17 = FUNFAB(fun_117,2,bindingsF1271,bodyF1272);
  T16 = with_exit(T17);
  T5 = T16;
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_141));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P return_;
  P vnamF1285;
  P typF1284;
  P namF1283;
  P x_1239F1282;
  P x_1239F1281;
  P x_1239F1280;
  P valueF1279;
  P varF1278;
  P x_1239F1277;
  P x_1240F1276;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_120,1);
  x_1240F1276 = T1;
  FUNINIT(x_1240F1276, 1,return_);
  x_1239F1277 = FREEREF(0);
  varF1278 = YPfalse;
  varF1278 = BOXFAB(varF1278);
  valueF1279 = YPfalse;
  valueF1279 = BOXFAB(valueF1279);
  T7 = CALL2(1,VARREF(YisaQ),x_1239F1277,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F1277,LITREF(lit_141),x_1240F1276);
    x_1239F1280 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1239F1280,x_1240F1276);
    BOXVAL(varF1278) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1239F1280);
    x_1239F1281 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1239F1281,x_1240F1276);
    BOXVAL(valueF1279) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1239F1281);
    x_1239F1282 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1282,x_1240F1276);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1240F1276,LITREF(lit_6),x_1239F1277);
  }
  T20 = BOXVAL(varF1278);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF1283 = T19;
  T23 = BOXVAL(varF1278);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF1284 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_142),namF1283,LITREF(lit_143));
  vnamF1285 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T31 = CALL1(1,VARREF(Ylst),vnamF1285);
  T33 = BOXVAL(valueF1279);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T37 = CALL1(1,VARREF(Ylst),namF1283);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
  T41 = CALL1(1,VARREF(Ylst),typF1284);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF1285);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF1283);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_147));
  T53 = CALL1(1,VARREF(Ylst),typF1284);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T57 = CALL1(1,VARREF(Ylst),vnamF1285);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_147));
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_149));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P return_;
  P x_1243F1290;
  P x_1243F1289;
  P bodyF1288;
  P x_1243F1287;
  P x_1244F1286;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1244_123,1);
  x_1244F1286 = T1;
  FUNINIT(x_1244F1286, 1,return_);
  x_1243F1287 = FREEREF(0);
  bodyF1288 = YPfalse;
  bodyF1288 = BOXFAB(bodyF1288);
  T5 = CALL2(1,VARREF(YisaQ),x_1243F1287,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F1287,LITREF(lit_149),x_1244F1286);
    x_1243F1289 = T7;
    BOXVAL(bodyF1288) = x_1243F1289;
    x_1243F1290 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F1290,x_1244F1286);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1244F1286,LITREF(lit_6),x_1243F1287);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_135));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF1288);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T19,Ynil);
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

FUNCODEDEF(fun_x_1248_126) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_152));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P return_;
  P x_1247F1295;
  P x_1247F1294;
  P namesF1293;
  P x_1247F1292;
  P x_1248F1291;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1248_126,1);
  x_1248F1291 = T1;
  FUNINIT(x_1248F1291, 1,return_);
  x_1247F1292 = FREEREF(0);
  namesF1293 = YPfalse;
  namesF1293 = BOXFAB(namesF1293);
  T5 = CALL2(1,VARREF(YisaQ),x_1247F1292,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1247F1292,LITREF(lit_152),x_1248F1291);
    x_1247F1294 = T7;
    BOXVAL(namesF1293) = x_1247F1294;
    x_1247F1295 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1247F1295,x_1248F1291);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1248F1291,LITREF(lit_6),x_1247F1292);
  }
  T13 = BOXVAL(namesF1293);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF1293);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
    T28 = BOXVAL(namesF1293);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
    T33 = BOXVAL(namesF1293);
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

FUNCODEDEF(fun_128) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_127,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1270_129) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_155));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1288_130) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_111));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P return_;
  P x_1287F1299;
  P nameF1298;
  P x_1287F1297;
  P x_1288F1296;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1288_130,1);
  x_1288F1296 = T1;
  FUNINIT(x_1288F1296, 1,return_);
  x_1287F1297 = FREEREF(0);
  nameF1298 = YPfalse;
  nameF1298 = BOXFAB(nameF1298);
  T5 = CALL2(1,VARREF(YisaQ),x_1287F1297,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1287F1297,x_1288F1296);
    BOXVAL(nameF1298) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1287F1297);
    x_1287F1299 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1299,x_1288F1296);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1288F1296,LITREF(lit_6),x_1287F1297);
  }
  T13 = BOXVAL(nameF1298);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF1298);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
    T21 = BOXVAL(nameF1298);
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

FUNCODEDEF(fun_x_1285_132) {
  P msg_,args_;
  P x_1286F1300;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1286F1300 = FREEREF(0);
  T3 = FUNFAB(fun_131,1,x_1286F1300);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P x_1284F1307;
  P x_1284F1306;
  P x_1284F1305;
  P restF1304;
  P nameF1303;
  P x_1284F1302;
  P x_1285F1301;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1285_132,2);
  x_1285F1301 = T1;
  FUNINIT(x_1285F1301, 2,FREEREF(0),return_);
  x_1284F1302 = FREEREF(0);
  nameF1303 = YPfalse;
  nameF1303 = BOXFAB(nameF1303);
  restF1304 = YPfalse;
  restF1304 = BOXFAB(restF1304);
  T7 = CALL2(1,VARREF(YisaQ),x_1284F1302,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1284F1302,LITREF(lit_162),x_1285F1301);
    x_1284F1305 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1284F1305,x_1285F1301);
    BOXVAL(nameF1303) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1284F1305);
    x_1284F1306 = T12;
    BOXVAL(restF1304) = x_1284F1306;
    x_1284F1307 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1284F1307,x_1285F1301);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1285F1301,LITREF(lit_6),x_1284F1302);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T23 = BOXVAL(nameF1303);
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

FUNCODEDEF(fun_x_1282_134) {
  P msg_,args_;
  P x_1283F1308;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1283F1308 = FREEREF(0);
  T3 = FUNFAB(fun_133,2,x_1283F1308,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P return_;
  P x_1281F1315;
  P x_1281F1314;
  P x_1281F1313;
  P restF1312;
  P nameF1311;
  P x_1281F1310;
  P x_1282F1309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1282_134,3);
  x_1282F1309 = T1;
  FUNINIT(x_1282F1309, 3,FREEREF(0),FREEREF(1),return_);
  x_1281F1310 = FREEREF(0);
  nameF1311 = YPfalse;
  nameF1311 = BOXFAB(nameF1311);
  restF1312 = YPfalse;
  restF1312 = BOXFAB(restF1312);
  T7 = CALL2(1,VARREF(YisaQ),x_1281F1310,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1281F1310,LITREF(lit_163),x_1282F1309);
    x_1281F1313 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1281F1313,x_1282F1309);
    BOXVAL(nameF1311) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1281F1313);
    x_1281F1314 = T12;
    BOXVAL(restF1312) = x_1281F1314;
    x_1281F1315 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1281F1315,x_1282F1309);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1282F1309,LITREF(lit_6),x_1281F1310);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T23 = BOXVAL(nameF1311);
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

FUNCODEDEF(fun_x_1279_136) {
  P msg_,args_;
  P x_1280F1316;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1280F1316 = FREEREF(0);
  T3 = FUNFAB(fun_135,2,x_1280F1316,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P return_;
  P x_1278F1323;
  P x_1278F1322;
  P x_1278F1321;
  P restF1320;
  P nameF1319;
  P x_1278F1318;
  P x_1279F1317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1279_136,3);
  x_1279F1317 = T1;
  FUNINIT(x_1279F1317, 3,FREEREF(0),FREEREF(1),return_);
  x_1278F1318 = FREEREF(0);
  nameF1319 = YPfalse;
  nameF1319 = BOXFAB(nameF1319);
  restF1320 = YPfalse;
  restF1320 = BOXFAB(restF1320);
  T7 = CALL2(1,VARREF(YisaQ),x_1278F1318,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1278F1318,LITREF(lit_144),x_1279F1317);
    x_1278F1321 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1278F1321,x_1279F1317);
    BOXVAL(nameF1319) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1278F1321);
    x_1278F1322 = T12;
    BOXVAL(restF1320) = x_1278F1322;
    x_1278F1323 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1278F1323,x_1279F1317);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1279F1317,LITREF(lit_6),x_1278F1318);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T23 = BOXVAL(nameF1319);
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

FUNCODEDEF(fun_x_1276_138) {
  P msg_,args_;
  P x_1277F1324;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1277F1324 = FREEREF(0);
  T3 = FUNFAB(fun_137,2,x_1277F1324,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P return_;
  P x_1275F1331;
  P x_1275F1330;
  P x_1275F1329;
  P restF1328;
  P nameF1327;
  P x_1275F1326;
  P x_1276F1325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1276_138,3);
  x_1276F1325 = T1;
  FUNINIT(x_1276F1325, 3,FREEREF(0),FREEREF(1),return_);
  x_1275F1326 = FREEREF(0);
  nameF1327 = YPfalse;
  nameF1327 = BOXFAB(nameF1327);
  restF1328 = YPfalse;
  restF1328 = BOXFAB(restF1328);
  T7 = CALL2(1,VARREF(YisaQ),x_1275F1326,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1275F1326,LITREF(lit_164),x_1276F1325);
    x_1275F1329 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1275F1329,x_1276F1325);
    BOXVAL(nameF1327) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1275F1329);
    x_1275F1330 = T12;
    BOXVAL(restF1328) = x_1275F1330;
    x_1275F1331 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1275F1331,x_1276F1325);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1276F1325,LITREF(lit_6),x_1275F1326);
  }
  T18 = BOXVAL(nameF1327);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T23 = BOXVAL(nameF1327);
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

FUNCODEDEF(fun_x_1273_140) {
  P msg_,args_;
  P x_1274F1332;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1274F1332 = FREEREF(0);
  T3 = FUNFAB(fun_139,2,x_1274F1332,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P return_;
  P x_1272F1339;
  P x_1272F1338;
  P x_1272F1337;
  P restF1336;
  P nameF1335;
  P x_1272F1334;
  P x_1273F1333;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1273_140,3);
  x_1273F1333 = T1;
  FUNINIT(x_1273F1333, 3,FREEREF(0),FREEREF(1),return_);
  x_1272F1334 = FREEREF(0);
  nameF1335 = YPfalse;
  nameF1335 = BOXFAB(nameF1335);
  restF1336 = YPfalse;
  restF1336 = BOXFAB(restF1336);
  T7 = CALL2(1,VARREF(YisaQ),x_1272F1334,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1272F1334,LITREF(lit_165),x_1273F1333);
    x_1272F1337 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1272F1337,x_1273F1333);
    BOXVAL(nameF1335) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1272F1337);
    x_1272F1338 = T12;
    BOXVAL(restF1336) = x_1272F1338;
    x_1272F1339 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1272F1339,x_1273F1333);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1273F1333,LITREF(lit_6),x_1272F1334);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T23 = BOXVAL(nameF1335);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T29 = BOXVAL(nameF1335);
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

FUNCODEDEF(fun_142) {
  P return_;
  P defsF1346;
  P x_1271F1345;
  P x_1269F1344;
  P x_1269F1343;
  P defF1342;
  P x_1269F1341;
  P x_1270F1340;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1270_129,1);
  x_1270F1340 = T1;
  FUNINIT(x_1270F1340, 1,return_);
  x_1269F1341 = FREEREF(0);
  defF1342 = YPfalse;
  defF1342 = BOXFAB(defF1342);
  T5 = CALL2(1,VARREF(YisaQ),x_1269F1341,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1269F1341,LITREF(lit_155),x_1270F1340);
    x_1269F1343 = T7;
    BOXVAL(defF1342) = x_1269F1343;
    x_1269F1344 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1269F1344,x_1270F1340);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1270F1340,LITREF(lit_6),x_1269F1341);
  }
  T13 = BOXVAL(defF1342);
  x_1271F1345 = T13;
  T15 = FUNFAB(fun_141,2,x_1271F1345,defF1342);
  T14 = with_exit(T15);
  T12 = T14;
  defsF1346 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF1346,Ynil);
  T11 = T16;
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_142,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1292_144) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_167));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  P x_;
  P xF1347;
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
  xF1347 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF1347,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_146) {
  P return_;
  P x_1291F1352;
  P x_1291F1351;
  P defsF1350;
  P x_1291F1349;
  P x_1292F1348;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1292_144,1);
  x_1292F1348 = T1;
  FUNINIT(x_1292F1348, 1,return_);
  x_1291F1349 = FREEREF(0);
  defsF1350 = YPfalse;
  defsF1350 = BOXFAB(defsF1350);
  T5 = CALL2(1,VARREF(YisaQ),x_1291F1349,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1291F1349,LITREF(lit_167),x_1292F1348);
    x_1291F1351 = T7;
    BOXVAL(defsF1350) = x_1291F1351;
    x_1291F1352 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1291F1352,x_1292F1348);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1292F1348,LITREF(lit_6),x_1291F1349);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T14 = fun_145;
  T15 = BOXVAL(defsF1350);
  T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_147) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_146,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
  P tmpF1368;
  P tmpF1367;
  P tmpF1366;
  P tmpF1365;
  P tmpF1364;
  P tmpF1363;
  P tmpF1362;
  P tmpF1361;
  P tmpF1360;
  P tmpF1359;
  P tmpF1358;
  P tmpF1357;
  P tmpF1356;
  P tmpF1355;
  P tmpF1354;
  P tmpF1353;
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
  P T192,T193,T194,T195,T196,T197,T198,T199;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"exp");
  lit_1 = YPPsym((P)"return");
  lit_2 = YPPsym((P)"x-1080");
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
  fun_x_1080_0 = YPmet(FUNCODEREF(fun_x_1080_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T3);
  lit_17 = YPPsym((P)"x-1084");
  lit_18 = YPPsym((P)"app-sup");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1084_3 = YPmet(FUNCODEREF(fun_x_1084_3),LITREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T7);
  lit_20 = YPPsym((P)"x-1088");
  lit_21 = YPPsym((P)"app");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1088_6 = YPmet(FUNCODEREF(fun_x_1088_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T11);
  lit_22 = YPPsym((P)"x-1092");
  lit_23 = YPPsym((P)"renew");
  lit_24 = YPPsym((P)"loop");
  lit_25 = YPPsym((P)"sets");
  lit_26 = YPPsym((P)"inits");
  lit_27 = YPPsym((P)"set");
  T15 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1092_9 = YPmet(FUNCODEREF(fun_x_1092_9),LITREF(lit_22),T15,ENVNUL,PNUL,YPfalse);
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
  lit_32 = YPPsym((P)"x-1098");
  lit_33 = YPPsym((P)"incf");
  lit_34 = YPPsym((P)"x-1100");
  lit_35 = YPPsym((P)"+");
  T26 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1098_15 = YPmet(FUNCODEREF(fun_x_1098_15),LITREF(lit_32),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1100_16 = YPmet(FUNCODEREF(fun_x_1100_16),LITREF(lit_34),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T27 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T27);
  lit_36 = YPPsym((P)"x-1106");
  lit_37 = YPPsym((P)"decf");
  lit_38 = YPPsym((P)"x-1108");
  lit_39 = YPPsym((P)"-");
  T32 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1106_20 = YPmet(FUNCODEREF(fun_x_1106_20),LITREF(lit_36),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_21 = YPmet(FUNCODEREF(fun_x_1108_21),LITREF(lit_38),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T33 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T33);
  lit_40 = YPPsym((P)"x-1112");
  lit_41 = YPPsym((P)"pushf");
  lit_42 = YPPsym((P)"push!");
  T36 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_25 = YPmet(FUNCODEREF(fun_x_1112_25),LITREF(lit_40),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T37 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T37);
  lit_43 = YPPsym((P)"x-1116");
  lit_44 = YPPsym((P)"swapf");
  T40 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_28 = YPmet(FUNCODEREF(fun_x_1116_28),LITREF(lit_43),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T41 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T41);
  lit_45 = YPPsym((P)"x-1120");
  lit_46 = YPPsym((P)"rotf");
  lit_47 = YPPsym((P)"x");
  lit_48 = YPPsym((P)"t");
  lit_49 = YPPsym((P)"p");
  T47 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_31 = YPmet(FUNCODEREF(fun_x_1120_31),LITREF(lit_45),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_49)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T48 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"rotf"),T48);
  lit_50 = YPPsym((P)"x-1124");
  lit_51 = YPPsym((P)"popf");
  lit_52 = YPPsym((P)"tup");
  lit_53 = YPPsym((P)"pop!");
  T51 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_37 = YPmet(FUNCODEREF(fun_x_1124_37),LITREF(lit_50),T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T52 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T52);
  lit_54 = YPPsym((P)"x-1128");
  lit_55 = YPPsym((P)"opf");
  lit_56 = YPPsym((P)"_");
  T55 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_40 = YPmet(FUNCODEREF(fun_x_1128_40),LITREF(lit_54),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T56 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T56);
  lit_57 = YPPsym((P)"x-1132");
  lit_58 = YPPsym((P)"unless");
  lit_59 = YPPsym((P)"not");
  lit_60 = YPPsym((P)"seq");
  T59 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_43 = YPmet(FUNCODEREF(fun_x_1132_43),LITREF(lit_57),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T60 = fun_45;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T60);
  lit_61 = YPPsym((P)"x-1136");
  lit_62 = YPPsym((P)"when");
  T63 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1136_46 = YPmet(FUNCODEREF(fun_x_1136_46),LITREF(lit_61),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T64 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T64);
  lit_63 = YPPsym((P)"x-1144");
  lit_64 = YPPsym((P)"or");
  lit_65 = YPPsym((P)"x-1146");
  lit_66 = YPPsym((P)"x-1148");
  lit_67 = YPPsym((P)"tmp");
  T71 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_49 = YPmet(FUNCODEREF(fun_x_1144_49),LITREF(lit_63),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1146_50 = YPmet(FUNCODEREF(fun_x_1146_50),LITREF(lit_65),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_51 = YPmet(FUNCODEREF(fun_x_1148_51),LITREF(lit_66),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T72 = fun_55;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T72);
  lit_68 = YPPsym((P)"x-1156");
  lit_69 = YPPsym((P)"and");
  lit_70 = YPPsym((P)"x-1158");
  lit_71 = YPPsym((P)"x-1160");
  T79 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1156_56 = YPmet(FUNCODEREF(fun_x_1156_56),LITREF(lit_68),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1158_57 = YPmet(FUNCODEREF(fun_x_1158_57),LITREF(lit_70),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_58 = YPmet(FUNCODEREF(fun_x_1160_58),LITREF(lit_71),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T80 = fun_62;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T80);
  lit_72 = YPPsym((P)"x-1166");
  lit_73 = YPPsym((P)"cond");
  lit_74 = YPPsym((P)"x-1168");
  lit_75 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T85 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1166_63 = YPmet(FUNCODEREF(fun_x_1166_63),LITREF(lit_72),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1168_64 = YPmet(FUNCODEREF(fun_x_1168_64),LITREF(lit_74),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T86 = fun_67;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T86);
  lit_76 = YPPsym((P)"do-case-by");
  lit_77 = YPPsym((P)"val");
  lit_78 = YPPsym((P)"tst");
  lit_79 = YPPsym((P)"cases");
  lit_80 = YPPsym((P)"x-1174");
  lit_81 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_82 = YPPsym((P)"x-1176");
  lit_83 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  T92 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1174_68 = YPmet(FUNCODEREF(fun_x_1174_68),LITREF(lit_80),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_69 = YPmet(FUNCODEREF(fun_x_1176_69),LITREF(lit_82),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(3,LITREF(lit_77),LITREF(lit_78),LITREF(lit_79)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_76),T87,ENVNUL,PNUL,YPfalse);
  T93 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T93);
  lit_84 = YPPsym((P)"x-1180");
  lit_85 = YPPsym((P)"case-by");
  T96 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_74 = YPmet(FUNCODEREF(fun_x_1180_74),LITREF(lit_84),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T97 = fun_76;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T97);
  lit_86 = YPPsym((P)"x-1184");
  lit_87 = YPPsym((P)"case");
  lit_88 = YPPsym((P)"==");
  T100 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1184_77 = YPmet(FUNCODEREF(fun_x_1184_77),LITREF(lit_86),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T101 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T101);
  lit_89 = YPPsym((P)"x-1188");
  lit_90 = YPPsym((P)"op");
  lit_91 = YPPsym((P)"splice");
  lit_92 = YPPsym((P)"y");
  lit_93 = YPPsym((P)"...");
  lit_94 = YPPsym((P)"as");
  lit_95 = YPPsym((P)"<lst>");
  lit_96 = YPPsym((P)"_*");
  lit_97 = YPPsym((P)"lst");
  lit_98 = YPPsym((P)"rest-op?");
  lit_99 = YPPsym((P)"walk-op");
  lit_100 = YPPsym((P)"vars");
  lit_101 = YPsb((P)"_");
  lit_102 = YPPsym((P)"cat!");
  lit_103 = YPPsym((P)"fun");
  lit_104 = YPPlist(1,YPPlist(2,YPPsym((P)"_*"),YPPsym((P)"...")));
  T110 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1188_80 = YPmet(FUNCODEREF(fun_x_1188_80),LITREF(lit_89),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_splice_82 = YPmet(FUNCODEREF(fun_splice_82),LITREF(lit_91),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_rest_opQ_83 = YPmet(FUNCODEREF(fun_rest_opQ_83),LITREF(lit_98),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(2,LITREF(lit_100),LITREF(lit_47)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_walk_op_86 = YPmet(FUNCODEREF(fun_walk_op_86),LITREF(lit_99),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T111 = fun_88;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"op"),T111);
  lit_105 = YPPsym((P)"x-1196");
  lit_106 = YPPsym((P)"match");
  lit_107 = YPPsym((P)"x-1198");
  lit_108 = YPPsym((P)"x-1200");
  lit_109 = YPsb((P)"Invalid match syntax.");
  lit_110 = YPPsym((P)"mif");
  lit_111 = YPsb((P)"Failed to match.");
  T118 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_89 = YPmet(FUNCODEREF(fun_x_1196_89),LITREF(lit_105),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1200_90 = YPmet(FUNCODEREF(fun_x_1200_90),LITREF(lit_108),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1198_92 = YPmet(FUNCODEREF(fun_x_1198_92),LITREF(lit_107),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T119 = fun_95;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T119);
  lit_112 = YPPsym((P)"x-1204");
  lit_113 = YPPsym((P)"assert");
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_96 = YPmet(FUNCODEREF(fun_x_1204_96),LITREF(lit_112),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T123 = fun_98;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T123);
  lit_114 = YPPsym((P)"x-1212");
  lit_115 = YPPsym((P)"for");
  lit_116 = YPPsym((P)"grok");
  lit_117 = YPPsym((P)"clauses");
  lit_118 = YPPsym((P)"preds");
  lit_119 = YPPsym((P)"nows");
  lit_120 = YPPsym((P)"nexts");
  lit_121 = YPPsym((P)"rep");
  lit_122 = YPPsym((P)"x-1214");
  lit_123 = YPPsym((P)"enum");
  lit_124 = YPPsym((P)"fin?");
  lit_125 = YPPsym((P)"x-1216");
  lit_126 = YPPsym((P)"now");
  lit_127 = YPPsym((P)"now-key");
  lit_128 = YPPsym((P)"nxt");
  T131 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_99 = YPmet(FUNCODEREF(fun_x_1212_99),LITREF(lit_114),T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1214_100 = YPmet(FUNCODEREF(fun_x_1214_100),LITREF(lit_122),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_101 = YPmet(FUNCODEREF(fun_x_1216_101),LITREF(lit_125),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(5,LITREF(lit_117),LITREF(lit_26),LITREF(lit_118),LITREF(lit_119),LITREF(lit_120)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_104 = YPmet(FUNCODEREF(fun_grok_104),LITREF(lit_116),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T132 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T132);
  lit_129 = YPPsym((P)"x-1220");
  lit_130 = YPPsym((P)"while");
  lit_131 = YPPsym((P)"_loop");
  T135 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1220_107 = YPmet(FUNCODEREF(fun_x_1220_107),LITREF(lit_129),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T136 = fun_109;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T136);
  lit_132 = YPPsym((P)"x-1224");
  lit_133 = YPPsym((P)"until");
  T139 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1224_110 = YPmet(FUNCODEREF(fun_x_1224_110),LITREF(lit_132),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T140 = fun_112;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T140);
  lit_134 = YPPsym((P)"x-1232");
  lit_135 = YPPsym((P)"dlet");
  lit_136 = YPPsym((P)"x-1234");
  lit_137 = YPPsym((P)"x-1236");
  lit_138 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_139 = YPPsym((P)"fin");
  T147 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_113 = YPmet(FUNCODEREF(fun_x_1232_113),LITREF(lit_134),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_114 = YPmet(FUNCODEREF(fun_x_1236_114),LITREF(lit_137),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1234_116 = YPmet(FUNCODEREF(fun_x_1234_116),LITREF(lit_136),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T148 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T148);
  lit_140 = YPPsym((P)"x-1240");
  lit_141 = YPPsym((P)"def-fun-var");
  lit_142 = YPsb((P)"*");
  lit_143 = YPsb((P)"*");
  lit_144 = YPPsym((P)"dv");
  lit_145 = YPPsym((P)"dm");
  lit_146 = YPPsym((P)"=>");
  lit_147 = YPPsym((P)"z");
  T151 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_120 = YPmet(FUNCODEREF(fun_x_1240_120),LITREF(lit_140),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T152 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T152);
  lit_148 = YPPsym((P)"x-1244");
  lit_149 = YPPsym((P)"without-prop-unbound-errors");
  lit_150 = YPPsym((P)"*report-prop-unbound-errors?*");
  T155 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1244_123 = YPmet(FUNCODEREF(fun_x_1244_123),LITREF(lit_148),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T156 = fun_125;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T156);
  lit_151 = YPPsym((P)"x-1248");
  lit_152 = YPPsym((P)"need-implementation");
  lit_153 = YPPsym((P)"export");
  T159 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1248_126 = YPmet(FUNCODEREF(fun_x_1248_126),LITREF(lit_151),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T160 = fun_128;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T160);
  lit_154 = YPPsym((P)"x-1270");
  lit_155 = YPPsym((P)"pub");
  lit_156 = YPPsym((P)"x-1273");
  lit_157 = YPPsym((P)"x-1276");
  lit_158 = YPPsym((P)"x-1279");
  lit_159 = YPPsym((P)"x-1282");
  lit_160 = YPPsym((P)"x-1285");
  lit_161 = YPPsym((P)"x-1288");
  lit_162 = YPPsym((P)"dc");
  lit_163 = YPPsym((P)"dg");
  lit_164 = YPPsym((P)"df");
  lit_165 = YPPsym((P)"dp");
  T175 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1270_129 = YPmet(FUNCODEREF(fun_x_1270_129),LITREF(lit_154),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1288_130 = YPmet(FUNCODEREF(fun_x_1288_130),LITREF(lit_161),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1285_132 = YPmet(FUNCODEREF(fun_x_1285_132),LITREF(lit_160),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1282_134 = YPmet(FUNCODEREF(fun_x_1282_134),LITREF(lit_159),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1279_136 = YPmet(FUNCODEREF(fun_x_1279_136),LITREF(lit_158),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1276_138 = YPmet(FUNCODEREF(fun_x_1276_138),LITREF(lit_157),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1273_140 = YPmet(FUNCODEREF(fun_x_1273_140),LITREF(lit_156),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T176 = fun_143;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T176);
  lit_166 = YPPsym((P)"x-1292");
  lit_167 = YPPsym((P)"exported");
  T180 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1292_144 = YPmet(FUNCODEREF(fun_x_1292_144),LITREF(lit_166),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPmet(FUNCODEREF(fun_145),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T181 = fun_147;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T181);
  tmpF1353 = YPfalse;
  if (tmpF1353 != YPfalse) {
    T182 = VARREF(YgooSmacrosYEE);
  } else {
    T182 = YPfalse;
  }
  tmpF1354 = YPfalse;
  if (tmpF1354 != YPfalse) {
    T183 = VARREF(YgooSmacrosYdo);
  } else {
    T183 = YPfalse;
  }
  tmpF1355 = YPfalse;
  if (tmpF1355 != YPfalse) {
    T184 = VARREF(YgooSmacrosYrevX);
  } else {
    T184 = YPfalse;
  }
  tmpF1356 = YPfalse;
  if (tmpF1356 != YPfalse) {
    T185 = VARREF(YgooSmacrosYcat);
  } else {
    T185 = YPfalse;
  }
  tmpF1357 = YPfalse;
  if (tmpF1357 != YPfalse) {
    T186 = VARREF(YgooSmacrosYelt);
  } else {
    T186 = YPfalse;
  }
  tmpF1358 = YPfalse;
  if (tmpF1358 != YPfalse) {
    T187 = VARREF(YgooSmacrosY1st);
  } else {
    T187 = YPfalse;
  }
  tmpF1359 = YPfalse;
  if (tmpF1359 != YPfalse) {
    T188 = VARREF(YgooSmacrosY2nd);
  } else {
    T188 = YPfalse;
  }
  tmpF1360 = YPfalse;
  if (tmpF1360 != YPfalse) {
    T189 = VARREF(YgooSmacrosYlast);
  } else {
    T189 = YPfalse;
  }
  tmpF1361 = YPfalse;
  if (tmpF1361 != YPfalse) {
    T190 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T190 = YPfalse;
  }
  tmpF1362 = YPfalse;
  if (tmpF1362 != YPfalse) {
    T191 = VARREF(Yerror);
  } else {
    T191 = YPfalse;
  }
  tmpF1363 = YPfalse;
  if (tmpF1363 != YPfalse) {
    T192 = VARREF(YgooSmacrosYgensym);
  } else {
    T192 = YPfalse;
  }
  tmpF1364 = YPfalse;
  if (tmpF1364 != YPfalse) {
    T193 = VARREF(Ylst);
  } else {
    T193 = YPfalse;
  }
  tmpF1365 = YPfalse;
  if (tmpF1365 != YPfalse) {
    T194 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T194 = YPfalse;
  }
  tmpF1366 = YPfalse;
  if (tmpF1366 != YPfalse) {
    T195 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T195 = YPfalse;
  }
  tmpF1367 = YPfalse;
  if (tmpF1367 != YPfalse) {
    T196 = VARREF(YgooSmacrosYmap);
  } else {
    T196 = YPfalse;
  }
  tmpF1368 = YPfalse;
  if (tmpF1368 != YPfalse) {
    T199 = VARREF(YgooSmacrosYmap2);
  } else {
    T199 = YPfalse;
  }
  T198 = T199;
  T197 = T198;
  return T197;
}

P YgooSmacrosY___main_1___() {
  P tmpF1378;
  P tmpF1377;
  P tmpF1376;
  P tmpF1375;
  P tmpF1374;
  P tmpF1373;
  P tmpF1372;
  P tmpF1371;
  P tmpF1370;
  P tmpF1369;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
loop:
  tmpF1369 = YPfalse;
  if (tmpF1369 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T0 = YPfalse;
  }
  tmpF1370 = YPfalse;
  if (tmpF1370 != YPfalse) {
    T1 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T1 = YPfalse;
  }
  tmpF1371 = YPfalse;
  if (tmpF1371 != YPfalse) {
    T2 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T2 = YPfalse;
  }
  tmpF1372 = YPfalse;
  if (tmpF1372 != YPfalse) {
    T3 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T3 = YPfalse;
  }
  tmpF1373 = YPfalse;
  if (tmpF1373 != YPfalse) {
    T4 = VARREF(YgooSmacrosYpair);
  } else {
    T4 = YPfalse;
  }
  tmpF1374 = YPfalse;
  if (tmpF1374 != YPfalse) {
    T5 = VARREF(Ytup);
  } else {
    T5 = YPfalse;
  }
  tmpF1375 = YPfalse;
  if (tmpF1375 != YPfalse) {
    T6 = VARREF(YgooSmacrosYvar_name);
  } else {
    T6 = YPfalse;
  }
  tmpF1376 = YPfalse;
  if (tmpF1376 != YPfalse) {
    T7 = VARREF(YgooSmacrosYvar_type);
  } else {
    T7 = YPfalse;
  }
  tmpF1377 = YPfalse;
  if (tmpF1377 != YPfalse) {
    T8 = VARREF(YgooSmacrosYnapp);
  } else {
    T8 = YPfalse;
  }
  tmpF1378 = YPfalse;
  if (tmpF1378 != YPfalse) {
    T9 = VARREF(YgooSmacrosYmacro_error);
  } else {
    T9 = YPfalse;
  }
  T10 = YPfalse;
  return T10;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"new", &module_info_gooSboot, "new"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"tail", &module_info_gooSboot, "tail"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"use", &module_info_gooSboot, "use"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"not", &module_info_gooSboot, "not"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"dc", &module_info_gooSboot, "dc"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%get", &module_info_gooSboot, "%get"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"without-prop-unbound-errors", PVAR, NULL},
  {"until", PVAR, NULL},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"do", CVAR, &YgooSmacrosYdo},
  {"case-by", PVAR, NULL},
  {"app", PVAR, NULL},
  {"rotf", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"for", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"while", PVAR, NULL},
  {"and", PVAR, NULL},
  {"incf", PVAR, NULL},
  {"app-sup", PVAR, NULL},
  {"def-fun-var", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"assert", PVAR, NULL},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"opf", PVAR, NULL},
  {"pub", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"pushf", PVAR, NULL},
  {"op", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"---main-0---", PVAR, NULL},
  {"need-implementation", PVAR, NULL},
  {"or", PVAR, NULL},
  {"popf", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"sup", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"last", CVAR, &YgooSmacrosYlast},
  {"dlet", PVAR, NULL},
  {"==", CVAR, &YgooSmacrosYEE},
  {"match-empty-list", CVAR, &YgooSmacrosYmatch_empty_list},
  {"cond", PVAR, NULL},
  {"case", PVAR, NULL},
  {"renew", PVAR, NULL},
  {"map", CVAR, &YgooSmacrosYmap},
  {"match", PVAR, NULL},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"decf", PVAR, NULL},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"when", PVAR, NULL},
  {"pair", CVAR, &YgooSmacrosYpair},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"until", "until"},
  {"var-name", "var-name"},
  {"do", "do"},
  {"case-by", "case-by"},
  {"app", "app"},
  {"rotf", "rotf"},
  {"map2", "map2"},
  {"fab-setter-name", "fab-setter-name"},
  {"for", "for"},
  {"unless", "unless"},
  {"macro-error", "macro-error"},
  {"gensym", "gensym"},
  {"while", "while"},
  {"and", "and"},
  {"incf", "incf"},
  {"app-sup", "app-sup"},
  {"def-fun-var", "def-fun-var"},
  {"swapf", "swapf"},
  {"empty?", "empty?"},
  {"cat-sym", "cat-sym"},
  {"assert", "assert"},
  {"lst", "lst"},
  {"match-sublist", "match-sublist"},
  {"opf", "opf"},
  {"pub", "pub"},
  {"exported", "exported"},
  {"lift-place-subforms", "lift-place-subforms"},
  {"error", "error"},
  {"pushf", "pushf"},
  {"op", "op"},
  {"match-atom", "match-atom"},
  {"napp", "napp"},
  {"rev!", "rev!"},
  {"match-unquote", "match-unquote"},
  {"tup", "tup"},
  {"cat", "cat"},
  {"need-implementation", "need-implementation"},
  {"or", "or"},
  {"popf", "popf"},
  {"var-type", "var-type"},
  {"sup", "sup"},
  {"last", "last"},
  {"dlet", "dlet"},
  {"==", "=="},
  {"match-empty-list", "match-empty-list"},
  {"cond", "cond"},
  {"case", "case"},
  {"renew", "renew"},
  {"map", "map"},
  {"match", "match"},
  {"2nd", "2nd"},
  {"elt", "elt"},
  {"decf", "decf"},
  {"1st", "1st"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"when", "when"},
  {"pair", "pair"},
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
