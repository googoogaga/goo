/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(Yclass_props,"goo/boot","class-props");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Ynew,"goo/boot","new");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ynot,"goo/boot","not");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yerror,"goo/boot","error");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ynil,"goo/boot","nil");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yhead,"goo/boot","head");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ynul,"goo/boot","nul");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_119);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_162);
DEFLIT(lit_58);
DEFLIT(lit_34);
DEFLIT(lit_7);
DEFLIT(lit_39);
DEFLIT(lit_100);
DEFLIT(lit_11);
DEFLIT(lit_96);
DEFLIT(lit_71);
DEFLIT(lit_80);
DEFLIT(lit_44);
DEFLIT(lit_16);
DEFLIT(lit_132);
DEFLIT(lit_90);
DEFLIT(lit_12);
DEFLIT(lit_48);
DEFLIT(lit_115);
DEFLIT(lit_125);
DEFLIT(lit_75);
DEFLIT(lit_60);
DEFLIT(lit_87);
DEFLIT(lit_122);
DEFLIT(lit_91);
DEFLIT(lit_113);
DEFLIT(lit_139);
DEFLIT(lit_82);
DEFLIT(lit_131);
DEFLIT(lit_156);
DEFLIT(lit_107);
DEFLIT(lit_160);
DEFLIT(lit_19);
DEFLIT(lit_78);
DEFLIT(lit_15);
DEFLIT(lit_41);
DEFLIT(lit_56);
DEFLIT(lit_143);
DEFLIT(lit_61);
DEFLIT(lit_121);
DEFLIT(lit_110);
DEFLIT(lit_142);
DEFLIT(lit_164);
DEFLIT(lit_63);
DEFLIT(lit_54);
DEFLIT(lit_36);
DEFLIT(lit_21);
DEFLIT(lit_163);
DEFLIT(lit_154);
DEFLIT(lit_29);
DEFLIT(lit_153);
DEFLIT(lit_148);
DEFLIT(lit_5);
DEFLIT(lit_83);
DEFLIT(lit_86);
DEFLIT(lit_43);
DEFLIT(lit_66);
DEFLIT(lit_95);
DEFLIT(lit_92);
DEFLIT(lit_13);
DEFLIT(lit_51);
DEFLIT(lit_74);
DEFLIT(lit_133);
DEFLIT(lit_103);
DEFLIT(lit_135);
DEFLIT(lit_47);
DEFLIT(lit_24);
DEFLIT(lit_25);
DEFLIT(lit_130);
DEFLIT(lit_137);
DEFLIT(lit_101);
DEFLIT(lit_35);
DEFLIT(lit_105);
DEFLIT(lit_114);
DEFLIT(lit_28);
DEFLIT(lit_157);
DEFLIT(lit_111);
DEFLIT(lit_67);
DEFLIT(lit_20);
DEFLIT(lit_136);
DEFLIT(lit_26);
DEFLIT(lit_88);
DEFLIT(lit_77);
DEFLIT(lit_146);
DEFLIT(lit_144);
DEFLIT(lit_14);
DEFLIT(lit_149);
DEFLIT(lit_147);
DEFLIT(lit_141);
DEFLIT(lit_64);
DEFLIT(lit_59);
DEFLIT(lit_4);
DEFLIT(lit_94);
DEFLIT(lit_117);
DEFLIT(lit_46);
DEFLIT(lit_106);
DEFLIT(lit_81);
DEFLIT(lit_38);
DEFLIT(lit_158);
DEFLIT(lit_37);
DEFLIT(lit_52);
DEFLIT(lit_145);
DEFLIT(lit_9);
DEFLIT(lit_134);
DEFLIT(lit_109);
DEFLIT(lit_102);
DEFLIT(lit_50);
DEFLIT(lit_73);
DEFLIT(lit_55);
DEFLIT(lit_69);
DEFLIT(lit_57);
DEFLIT(lit_124);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_140);
DEFLIT(lit_72);
DEFLIT(lit_97);
DEFLIT(lit_62);
DEFLIT(lit_1);
DEFLIT(lit_65);
DEFLIT(lit_79);
DEFLIT(lit_120);
DEFLIT(lit_68);
DEFLIT(lit_3);
DEFLIT(lit_89);
DEFLIT(lit_126);
DEFLIT(lit_93);
DEFLIT(lit_0);
DEFLIT(lit_138);
DEFLIT(lit_161);
DEFLIT(lit_152);
DEFLIT(lit_99);
DEFLIT(lit_85);
DEFLIT(lit_31);
DEFLIT(lit_23);
DEFLIT(lit_159);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_129);
DEFLIT(lit_116);
DEFLIT(lit_165);
DEFLIT(lit_49);
DEFLIT(lit_127);
DEFLIT(lit_112);
DEFLIT(lit_32);
DEFLIT(lit_53);
DEFLIT(lit_17);
DEFLIT(lit_84);
DEFLIT(lit_155);
DEFLIT(lit_104);
DEFLIT(lit_118);
DEFLIT(lit_70);
DEFLIT(lit_45);
DEFLIT(lit_10);
DEFLIT(lit_42);
DEFLIT(lit_123);
DEFLIT(lit_151);
DEFLIT(lit_128);
DEFLIT(lit_40);
DEFLIT(lit_33);
DEFLIT(lit_27);
DEFLIT(lit_150);
DEFLIT(lit_108);
DEFLIT(lit_76);
DEFLIT(lit_98);

/* FUNCTIONS: */

LOCFOR(fun_x_7277_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_7281_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_7285_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_7289_9);
LOCFOR(fun_loop_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_munch_13);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_7295_15);
LOCFOR(fun_x_7297_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_7303_20);
LOCFOR(fun_x_7305_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_7309_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_7313_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_7317_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_7321_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_7325_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_7329_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_7337_43);
LOCFOR(fun_x_7339_44);
LOCFOR(fun_x_7341_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_x_7349_50);
LOCFOR(fun_x_7351_51);
LOCFOR(fun_x_7353_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_x_7359_57);
LOCFOR(fun_x_7361_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_x_7367_62);
LOCFOR(fun_x_7369_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_7373_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_7377_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_x_7381_74);
LOCFOR(fun_75);
LOCFOR(fun_splice_76);
LOCFOR(fun_rest_opQ_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_walk_op_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_7389_83);
LOCFOR(fun_x_7393_84);
LOCFOR(fun_85);
LOCFOR(fun_x_7391_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_7397_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_7405_93);
LOCFOR(fun_x_7407_94);
LOCFOR(fun_x_7409_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_7413_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_7417_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_7421_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_7429_110);
LOCFOR(fun_x_7433_111);
LOCFOR(fun_112);
LOCFOR(fun_x_7431_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_7437_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_7441_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_7445_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_7467_126);
LOCFOR(fun_x_7485_127);
LOCFOR(fun_128);
LOCFOR(fun_x_7482_129);
LOCFOR(fun_130);
LOCFOR(fun_x_7479_131);
LOCFOR(fun_132);
LOCFOR(fun_x_7476_133);
LOCFOR(fun_134);
LOCFOR(fun_x_7473_135);
LOCFOR(fun_136);
LOCFOR(fun_x_7470_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_x_7489_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_7277_0) {
  P msg_,args_;
  P T0;
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
  P x_7276F22914;
  P x_7276F22913;
  P argsF22912;
  P x_7276F22911;
  P x_7277F22910;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7277_0,1);
  x_7277F22910 = T1;
  FUNINIT(x_7277F22910, 1,return_);
  x_7276F22911 = FREEREF(0);
  argsF22912 = YPfalse;
  argsF22912 = BOXFAB(argsF22912);
  T5 = CALL2(1,VARREF(YisaQ),x_7276F22911,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7276F22911,LITREF(lit_5),x_7277F22910);
    x_7276F22913 = T7;
    BOXVAL(argsF22912) = x_7276F22913;
    x_7276F22914 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7276F22914,x_7277F22910);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7277F22910,LITREF(lit_6),x_7276F22911);
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
  T36 = BOXVAL(argsF22912);
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

FUNCODEDEF(fun_x_7281_3) {
  P msg_,args_;
  P T0;
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
  P x_7280F22919;
  P x_7280F22918;
  P argsF22917;
  P x_7280F22916;
  P x_7281F22915;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7281_3,1);
  x_7281F22915 = T1;
  FUNINIT(x_7281F22915, 1,return_);
  x_7280F22916 = FREEREF(0);
  argsF22917 = YPfalse;
  argsF22917 = BOXFAB(argsF22917);
  T5 = CALL2(1,VARREF(YisaQ),x_7280F22916,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7280F22916,LITREF(lit_18),x_7281F22915);
    x_7280F22918 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7280F22918,x_7281F22915);
    BOXVAL(argsF22917) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_7280F22918);
    x_7280F22919 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7280F22919,x_7281F22915);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_7281F22915,LITREF(lit_6),x_7280F22916);
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
  T39 = BOXVAL(argsF22917);
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

FUNCODEDEF(fun_x_7285_6) {
  P msg_,args_;
  P T0;
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
  P x_7284F22926;
  P x_7284F22925;
  P x_7284F22924;
  P argsF22923;
  P fF22922;
  P x_7284F22921;
  P x_7285F22920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7285_6,1);
  x_7285F22920 = T1;
  FUNINIT(x_7285F22920, 1,return_);
  x_7284F22921 = FREEREF(0);
  fF22922 = YPfalse;
  fF22922 = BOXFAB(fF22922);
  argsF22923 = YPfalse;
  argsF22923 = BOXFAB(argsF22923);
  T7 = CALL2(1,VARREF(YisaQ),x_7284F22921,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7284F22921,LITREF(lit_21),x_7285F22920);
    x_7284F22924 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7284F22924,x_7285F22920);
    BOXVAL(fF22922) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7284F22924);
    x_7284F22925 = T12;
    BOXVAL(argsF22923) = x_7284F22925;
    x_7284F22926 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7284F22926,x_7285F22920);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7285F22920,LITREF(lit_6),x_7284F22921);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF22922);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF22923);
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

FUNCODEDEF(fun_x_7289_9) {
  P msg_,args_;
  P T0;
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
  P valF22927;
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
    valF22927 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF22927);
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
  P setsF22937;
  P loopF22936;
  P varF22935;
  P x_7288F22934;
  P x_7288F22933;
  P x_7288F22932;
  P prop_initsF22931;
  P xF22930;
  P x_7288F22929;
  P x_7289F22928;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7289_9,1);
  x_7289F22928 = T1;
  FUNINIT(x_7289F22928, 1,return_);
  x_7288F22929 = FREEREF(0);
  xF22930 = YPfalse;
  xF22930 = BOXFAB(xF22930);
  prop_initsF22931 = YPfalse;
  prop_initsF22931 = BOXFAB(prop_initsF22931);
  T7 = CALL2(1,VARREF(YisaQ),x_7288F22929,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7288F22929,LITREF(lit_23),x_7289F22928);
    x_7288F22932 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7288F22932,x_7289F22928);
    BOXVAL(xF22930) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7288F22932);
    x_7288F22933 = T12;
    BOXVAL(prop_initsF22931) = x_7288F22933;
    x_7288F22934 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7288F22934,x_7289F22928);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7289F22928,LITREF(lit_6),x_7288F22929);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF22935 = T17;
  T20 = FUNSHELL(1,fun_loop_10,2);
  loopF22936 = T20;
  FUNINIT(loopF22936, 2,varF22935,loopF22936);
  T22 = BOXVAL(prop_initsF22931);
  T21 = CALL2(0,loopF22936,Ynil,T22);
  T19 = T21;
  setsF22937 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF22935);
  T31 = BOXVAL(xF22930);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF22935);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,setsF22937,T32,Ynil);
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
  P gF22941;
  P g_argsF22940;
  P g_declsF22939;
  P tup289F22938;
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
    tup289F22938 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup289F22938,YPint((P)0));
    g_declsF22939 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup289F22938,YPint((P)1));
    g_argsF22940 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF22941 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF22941);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF22939);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF22941,g_argsF22940);
    T12 = CALL2(1,VARREF(Ytup),T13,T18);
    T10 = T12;
    T8 = T10;
    T6 = T8;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF22945;
  P g_declsF22944;
  P tup290F22943;
  P munchF22942;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF22942 = T1;
  FUNINIT(munchF22942, 1,munchF22942);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF22942,T7);
    tup290F22943 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup290F22943,YPint((P)0));
    g_declsF22944 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup290F22943,YPint((P)1));
    g_argsF22945 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF22945);
    T12 = CALL2(1,VARREF(Ytup),g_declsF22944,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7295_15) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7297_16) {
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
  P x_7296F22949;
  P amountF22948;
  P x_7296F22947;
  P x_7297F22946;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7297_16,1);
  x_7297F22946 = T1;
  FUNINIT(x_7297F22946, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_7296F22947 = T3;
  amountF22948 = YPfalse;
  amountF22948 = BOXFAB(amountF22948);
  T6 = CALL2(1,VARREF(YisaQ),x_7296F22947,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7296F22947,x_7297F22946);
    BOXVAL(amountF22948) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_7296F22947);
    x_7296F22949 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7296F22949,x_7297F22946);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_7297F22946,LITREF(lit_6),x_7296F22947);
  }
  T12 = BOXVAL(amountF22948);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF22960;
  P g_placeF22959;
  P g_declsF22958;
  P tup292F22957;
  P x_7294F22956;
  P x_7294F22955;
  P x_7294F22954;
  P amountF22953;
  P placeF22952;
  P x_7294F22951;
  P x_7295F22950;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7295_15,1);
  x_7295F22950 = T1;
  FUNINIT(x_7295F22950, 1,return_);
  x_7294F22951 = FREEREF(0);
  placeF22952 = YPfalse;
  placeF22952 = BOXFAB(placeF22952);
  amountF22953 = YPfalse;
  amountF22953 = BOXFAB(amountF22953);
  T7 = CALL2(1,VARREF(YisaQ),x_7294F22951,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7294F22951,LITREF(lit_33),x_7295F22950);
    x_7294F22954 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7294F22954,x_7295F22950);
    BOXVAL(placeF22952) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7294F22954);
    x_7294F22955 = T12;
    BOXVAL(amountF22953) = x_7294F22955;
    x_7294F22956 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7294F22956,x_7295F22950);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7295F22950,LITREF(lit_6),x_7294F22951);
  }
  T18 = BOXVAL(placeF22952);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup292F22957 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup292F22957,YPint((P)0));
  g_declsF22958 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup292F22957,YPint((P)1));
  g_placeF22959 = T22;
  T25 = FUNFAB(fun_17,1,amountF22953);
  T24 = with_exit(T25);
  amountF22960 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF22958,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF22959);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T37 = CALL1(1,VARREF(Ylst),g_placeF22959);
  T38 = CALL1(1,VARREF(Ylst),amountF22960);
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

FUNCODEDEF(fun_x_7303_20) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7305_21) {
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
  P x_7304F22964;
  P amountF22963;
  P x_7304F22962;
  P x_7305F22961;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7305_21,1);
  x_7305F22961 = T1;
  FUNINIT(x_7305F22961, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_7304F22962 = T3;
  amountF22963 = YPfalse;
  amountF22963 = BOXFAB(amountF22963);
  T6 = CALL2(1,VARREF(YisaQ),x_7304F22962,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7304F22962,x_7305F22961);
    BOXVAL(amountF22963) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_7304F22962);
    x_7304F22964 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7304F22964,x_7305F22961);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_7305F22961,LITREF(lit_6),x_7304F22962);
  }
  T12 = BOXVAL(amountF22963);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF22975;
  P g_placeF22974;
  P g_declsF22973;
  P tup294F22972;
  P x_7302F22971;
  P x_7302F22970;
  P x_7302F22969;
  P amountF22968;
  P placeF22967;
  P x_7302F22966;
  P x_7303F22965;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7303_20,1);
  x_7303F22965 = T1;
  FUNINIT(x_7303F22965, 1,return_);
  x_7302F22966 = FREEREF(0);
  placeF22967 = YPfalse;
  placeF22967 = BOXFAB(placeF22967);
  amountF22968 = YPfalse;
  amountF22968 = BOXFAB(amountF22968);
  T7 = CALL2(1,VARREF(YisaQ),x_7302F22966,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7302F22966,LITREF(lit_37),x_7303F22965);
    x_7302F22969 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7302F22969,x_7303F22965);
    BOXVAL(placeF22967) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7302F22969);
    x_7302F22970 = T12;
    BOXVAL(amountF22968) = x_7302F22970;
    x_7302F22971 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7302F22971,x_7303F22965);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7303F22965,LITREF(lit_6),x_7302F22966);
  }
  T18 = BOXVAL(placeF22967);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup294F22972 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup294F22972,YPint((P)0));
  g_declsF22973 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup294F22972,YPint((P)1));
  g_placeF22974 = T22;
  T25 = FUNFAB(fun_22,1,amountF22968);
  T24 = with_exit(T25);
  amountF22975 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF22973,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF22974);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T37 = CALL1(1,VARREF(Ylst),g_placeF22974);
  T38 = CALL1(1,VARREF(Ylst),amountF22975);
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

FUNCODEDEF(fun_x_7309_25) {
  P msg_,args_;
  P T0;
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
  P g_placeF22985;
  P g_declsF22984;
  P tup296F22983;
  P x_7308F22982;
  P x_7308F22981;
  P x_7308F22980;
  P valueF22979;
  P placeF22978;
  P x_7308F22977;
  P x_7309F22976;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7309_25,1);
  x_7309F22976 = T1;
  FUNINIT(x_7309F22976, 1,return_);
  x_7308F22977 = FREEREF(0);
  placeF22978 = YPfalse;
  placeF22978 = BOXFAB(placeF22978);
  valueF22979 = YPfalse;
  valueF22979 = BOXFAB(valueF22979);
  T7 = CALL2(1,VARREF(YisaQ),x_7308F22977,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7308F22977,LITREF(lit_41),x_7309F22976);
    x_7308F22980 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7308F22980,x_7309F22976);
    BOXVAL(placeF22978) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7308F22980);
    x_7308F22981 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7308F22981,x_7309F22976);
    BOXVAL(valueF22979) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_7308F22981);
    x_7308F22982 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7308F22982,x_7309F22976);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_7309F22976,LITREF(lit_6),x_7308F22977);
  }
  T20 = BOXVAL(placeF22978);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup296F22983 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup296F22983,YPint((P)0));
  g_declsF22984 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup296F22983,YPint((P)1));
  g_placeF22985 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF22984,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T32 = CALL1(1,VARREF(Ylst),g_placeF22985);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T36 = CALL1(1,VARREF(Ylst),g_placeF22985);
  T38 = BOXVAL(valueF22979);
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

FUNCODEDEF(fun_x_7313_28) {
  P msg_,args_;
  P T0;
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
  P tmpF22999;
  P yg_placeF22998;
  P yg_declsF22997;
  P tup300F22996;
  P xg_placeF22995;
  P xg_declsF22994;
  P tup299F22993;
  P x_7312F22992;
  P x_7312F22991;
  P x_7312F22990;
  P yF22989;
  P xF22988;
  P x_7312F22987;
  P x_7313F22986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7313_28,1);
  x_7313F22986 = T1;
  FUNINIT(x_7313F22986, 1,return_);
  x_7312F22987 = FREEREF(0);
  xF22988 = YPfalse;
  xF22988 = BOXFAB(xF22988);
  yF22989 = YPfalse;
  yF22989 = BOXFAB(yF22989);
  T7 = CALL2(1,VARREF(YisaQ),x_7312F22987,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7312F22987,LITREF(lit_44),x_7313F22986);
    x_7312F22990 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7312F22990,x_7313F22986);
    BOXVAL(xF22988) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7312F22990);
    x_7312F22991 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7312F22991,x_7313F22986);
    BOXVAL(yF22989) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_7312F22991);
    x_7312F22992 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7312F22992,x_7313F22986);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_7313F22986,LITREF(lit_6),x_7312F22987);
  }
  T20 = BOXVAL(xF22988);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup299F22993 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup299F22993,YPint((P)0));
  xg_declsF22994 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup299F22993,YPint((P)1));
  xg_placeF22995 = T24;
  T27 = BOXVAL(yF22989);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup300F22996 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup300F22996,YPint((P)0));
  yg_declsF22997 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup300F22996,YPint((P)1));
  yg_placeF22998 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF22999 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF22999);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF22995);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF22994,yg_declsF22997,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF22995);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF22998);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF22998);
  T51 = CALL1(1,VARREF(Ylst),tmpF22999);
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

FUNCODEDEF(fun_x_7317_31) {
  P msg_,args_;
  P T0;
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
  P valF23009;
  P new_colF23008;
  P g_placeF23007;
  P g_declsF23006;
  P tup302F23005;
  P x_7316F23004;
  P x_7316F23003;
  P placeF23002;
  P x_7316F23001;
  P x_7317F23000;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7317_31,1);
  x_7317F23000 = T1;
  FUNINIT(x_7317F23000, 1,return_);
  x_7316F23001 = FREEREF(0);
  placeF23002 = YPfalse;
  placeF23002 = BOXFAB(placeF23002);
  T5 = CALL2(1,VARREF(YisaQ),x_7316F23001,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7316F23001,LITREF(lit_46),x_7317F23000);
    x_7316F23003 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7316F23003,x_7317F23000);
    BOXVAL(placeF23002) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_7316F23003);
    x_7316F23004 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7316F23004,x_7317F23000);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_7317F23000,LITREF(lit_6),x_7316F23001);
  }
  T15 = BOXVAL(placeF23002);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup302F23005 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup302F23005,YPint((P)0));
  g_declsF23006 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup302F23005,YPint((P)1));
  g_placeF23007 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF23008 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF23009 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T33 = CALL1(1,VARREF(Ylst),new_colF23008);
  T34 = CALL1(1,VARREF(Ylst),valF23009);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T38 = CALL1(1,VARREF(Ylst),g_placeF23007);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF23006,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T42 = CALL1(1,VARREF(Ylst),g_placeF23007);
  T43 = CALL1(1,VARREF(Ylst),new_colF23008);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF23009);
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

FUNCODEDEF(fun_x_7321_34) {
  P msg_,args_;
  P T0;
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
  P g_placeF23019;
  P g_declsF23018;
  P tup304F23017;
  P x_7320F23016;
  P x_7320F23015;
  P x_7320F23014;
  P callF23013;
  P placeF23012;
  P x_7320F23011;
  P x_7321F23010;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7321_34,1);
  x_7321F23010 = T1;
  FUNINIT(x_7321F23010, 1,return_);
  x_7320F23011 = FREEREF(0);
  placeF23012 = YPfalse;
  placeF23012 = BOXFAB(placeF23012);
  callF23013 = YPfalse;
  callF23013 = BOXFAB(callF23013);
  T7 = CALL2(1,VARREF(YisaQ),x_7320F23011,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7320F23011,LITREF(lit_50),x_7321F23010);
    x_7320F23014 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7320F23014,x_7321F23010);
    BOXVAL(placeF23012) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7320F23014);
    x_7320F23015 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7320F23015,x_7321F23010);
    BOXVAL(callF23013) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_7320F23015);
    x_7320F23016 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7320F23016,x_7321F23010);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_7321F23010,LITREF(lit_6),x_7320F23011);
  }
  T20 = BOXVAL(placeF23012);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup304F23017 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup304F23017,YPint((P)0));
  g_declsF23018 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup304F23017,YPint((P)1));
  g_placeF23019 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),g_placeF23019);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF23018,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T36 = CALL1(1,VARREF(Ylst),g_placeF23019);
  T38 = BOXVAL(callF23013);
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

FUNCODEDEF(fun_x_7325_37) {
  P msg_,args_;
  P T0;
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
  P x_7324F23026;
  P x_7324F23025;
  P x_7324F23024;
  P bodyF23023;
  P testF23022;
  P x_7324F23021;
  P x_7325F23020;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7325_37,1);
  x_7325F23020 = T1;
  FUNINIT(x_7325F23020, 1,return_);
  x_7324F23021 = FREEREF(0);
  testF23022 = YPfalse;
  testF23022 = BOXFAB(testF23022);
  bodyF23023 = YPfalse;
  bodyF23023 = BOXFAB(bodyF23023);
  T7 = CALL2(1,VARREF(YisaQ),x_7324F23021,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7324F23021,LITREF(lit_53),x_7325F23020);
    x_7324F23024 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7324F23024,x_7325F23020);
    BOXVAL(testF23022) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7324F23024);
    x_7324F23025 = T12;
    BOXVAL(bodyF23023) = x_7324F23025;
    x_7324F23026 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7324F23026,x_7325F23020);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7325F23020,LITREF(lit_6),x_7324F23021);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = BOXVAL(testF23022);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T26 = BOXVAL(bodyF23023);
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

FUNCODEDEF(fun_x_7329_40) {
  P msg_,args_;
  P T0;
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
  P x_7328F23033;
  P x_7328F23032;
  P x_7328F23031;
  P bodyF23030;
  P testF23029;
  P x_7328F23028;
  P x_7329F23027;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7329_40,1);
  x_7329F23027 = T1;
  FUNINIT(x_7329F23027, 1,return_);
  x_7328F23028 = FREEREF(0);
  testF23029 = YPfalse;
  testF23029 = BOXFAB(testF23029);
  bodyF23030 = YPfalse;
  bodyF23030 = BOXFAB(bodyF23030);
  T7 = CALL2(1,VARREF(YisaQ),x_7328F23028,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7328F23028,LITREF(lit_57),x_7329F23027);
    x_7328F23031 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7328F23031,x_7329F23027);
    BOXVAL(testF23029) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7328F23031);
    x_7328F23032 = T12;
    BOXVAL(bodyF23030) = x_7328F23032;
    x_7328F23033 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7328F23033,x_7329F23027);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7329F23027,LITREF(lit_6),x_7328F23028);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF23029);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF23030);
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

FUNCODEDEF(fun_x_7337_43) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7339_44) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7341_45) {
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
  P x_7340F23035;
  P x_7341F23034;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7341_45,3);
  x_7341F23034 = T1;
  FUNINIT(x_7341F23034, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_7340F23035 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_7340F23035,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7340F23035,x_7341F23034);
  } else {
    T6 = CALL2(1,x_7341F23034,LITREF(lit_6),x_7340F23035);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_7338F23041;
  P x_7338F23040;
  P restF23039;
  P xF23038;
  P x_7338F23037;
  P x_7339F23036;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7339_44,1);
  x_7339F23036 = T1;
  FUNINIT(x_7339F23036, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_7338F23037 = T3;
  xF23038 = YPfalse;
  xF23038 = BOXFAB(xF23038);
  restF23039 = YPfalse;
  restF23039 = BOXFAB(restF23039);
  T8 = CALL2(1,VARREF(YisaQ),x_7338F23037,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7338F23037,x_7339F23036);
    BOXVAL(xF23038) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_7338F23037);
    x_7338F23040 = T11;
    BOXVAL(restF23039) = x_7338F23040;
    x_7338F23041 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7338F23041,x_7339F23036);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_7339F23036,LITREF(lit_6),x_7338F23037);
  }
  T16 = FUNFAB(fun_46,2,xF23038,restF23039);
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
  P x_7336F23046;
  P x_7336F23045;
  P restF23044;
  P x_7336F23043;
  P x_7337F23042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7337_43,1);
  x_7337F23042 = T1;
  FUNINIT(x_7337F23042, 1,return_);
  x_7336F23043 = FREEREF(0);
  restF23044 = YPfalse;
  restF23044 = BOXFAB(restF23044);
  T5 = CALL2(1,VARREF(YisaQ),x_7336F23043,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7336F23043,LITREF(lit_59),x_7337F23042);
    x_7336F23045 = T7;
    BOXVAL(restF23044) = x_7336F23045;
    x_7336F23046 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7336F23046,x_7337F23042);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7337F23042,LITREF(lit_6),x_7336F23043);
  }
  T12 = FUNFAB(fun_47,1,restF23044);
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

FUNCODEDEF(fun_x_7349_50) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7351_51) {
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

FUNCODEDEF(fun_x_7353_52) {
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
  P x_7352F23048;
  P x_7353F23047;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7353_52,3);
  x_7353F23047 = T1;
  FUNINIT(x_7353F23047, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_7352F23048 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_7352F23048,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7352F23048,x_7353F23047);
  } else {
    T6 = CALL2(1,x_7353F23047,LITREF(lit_6),x_7352F23048);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_7350F23054;
  P x_7350F23053;
  P restF23052;
  P xF23051;
  P x_7350F23050;
  P x_7351F23049;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7351_51,1);
  x_7351F23049 = T1;
  FUNINIT(x_7351F23049, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_7350F23050 = T3;
  xF23051 = YPfalse;
  xF23051 = BOXFAB(xF23051);
  restF23052 = YPfalse;
  restF23052 = BOXFAB(restF23052);
  T8 = CALL2(1,VARREF(YisaQ),x_7350F23050,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7350F23050,x_7351F23049);
    BOXVAL(xF23051) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_7350F23050);
    x_7350F23053 = T11;
    BOXVAL(restF23052) = x_7350F23053;
    x_7350F23054 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7350F23054,x_7351F23049);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_7351F23049,LITREF(lit_6),x_7350F23050);
  }
  T16 = FUNFAB(fun_53,2,xF23051,restF23052);
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
  P x_7348F23059;
  P x_7348F23058;
  P restF23057;
  P x_7348F23056;
  P x_7349F23055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7349_50,1);
  x_7349F23055 = T1;
  FUNINIT(x_7349F23055, 1,return_);
  x_7348F23056 = FREEREF(0);
  restF23057 = YPfalse;
  restF23057 = BOXFAB(restF23057);
  T5 = CALL2(1,VARREF(YisaQ),x_7348F23056,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7348F23056,LITREF(lit_64),x_7349F23055);
    x_7348F23058 = T7;
    BOXVAL(restF23057) = x_7348F23058;
    x_7348F23059 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7348F23059,x_7349F23055);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7349F23055,LITREF(lit_6),x_7348F23056);
  }
  T12 = FUNFAB(fun_54,1,restF23057);
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

FUNCODEDEF(fun_x_7359_57) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7361_58) {
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
  P x_7360F23065;
  P x_7360F23064;
  P bodyF23063;
  P condF23062;
  P x_7360F23061;
  P x_7361F23060;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7361_58,2);
  x_7361F23060 = T1;
  FUNINIT(x_7361F23060, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_7360F23061 = T3;
  condF23062 = YPfalse;
  condF23062 = BOXFAB(condF23062);
  bodyF23063 = YPfalse;
  bodyF23063 = BOXFAB(bodyF23063);
  T9 = CALL2(1,VARREF(YisaQ),x_7360F23061,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7360F23061,x_7361F23060);
    BOXVAL(condF23062) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7360F23061);
    x_7360F23064 = T12;
    BOXVAL(bodyF23063) = x_7360F23064;
    x_7360F23065 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7360F23065,x_7361F23060);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_7361F23060,LITREF(lit_6),x_7360F23061);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF23062);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF23063);
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
  P x_7358F23070;
  P x_7358F23069;
  P casesF23068;
  P x_7358F23067;
  P x_7359F23066;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7359_57,1);
  x_7359F23066 = T1;
  FUNINIT(x_7359F23066, 1,return_);
  x_7358F23067 = FREEREF(0);
  casesF23068 = YPfalse;
  casesF23068 = BOXFAB(casesF23068);
  T5 = CALL2(1,VARREF(YisaQ),x_7358F23067,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7358F23067,LITREF(lit_68),x_7359F23066);
    x_7358F23069 = T7;
    BOXVAL(casesF23068) = x_7358F23069;
    x_7358F23070 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7358F23070,x_7359F23066);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7359F23066,LITREF(lit_6),x_7358F23067);
  }
  T13 = BOXVAL(casesF23068);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_59,1,casesF23068);
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

FUNCODEDEF(fun_x_7367_62) {
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

FUNCODEDEF(fun_x_7369_63) {
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
  P x_7368F23074;
  P valuesF23073;
  P x_7368F23072;
  P x_7369F23071;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7369_63,2);
  x_7369F23071 = T1;
  FUNINIT(x_7369F23071, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_7368F23072 = T3;
  valuesF23073 = YPfalse;
  valuesF23073 = BOXFAB(valuesF23073);
  T6 = CALL2(1,VARREF(YisaQ),x_7368F23072,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF23073) = x_7368F23072;
    x_7368F23074 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7368F23074,x_7369F23071);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_7369F23071,LITREF(lit_6),x_7368F23072);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T16 = FUNFAB(fun_64,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF23073);
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
  P x_7366F23080;
  P x_7366F23079;
  P bodyF23078;
  P condF23077;
  P x_7366F23076;
  P x_7367F23075;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7367_62,2);
  x_7367F23075 = T1;
  FUNINIT(x_7367F23075, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_7366F23076 = T3;
  condF23077 = YPfalse;
  condF23077 = BOXFAB(condF23077);
  bodyF23078 = YPfalse;
  bodyF23078 = BOXFAB(bodyF23078);
  T8 = CALL2(1,VARREF(YisaQ),x_7366F23076,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7366F23076,x_7367F23075);
    BOXVAL(condF23077) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_7366F23076);
    x_7366F23079 = T11;
    BOXVAL(bodyF23078) = x_7366F23079;
    x_7366F23080 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7366F23080,x_7367F23075);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_7367F23075,LITREF(lit_6),x_7366F23076);
  }
  T17 = BOXVAL(condF23077);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T20 = BOXVAL(bodyF23078);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_65,5,FREEREF(0),condF23077,FREEREF(1),FREEREF(2),bodyF23078);
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

FUNCODEDEF(fun_x_7373_68) {
  P msg_,args_;
  P T0;
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
  P tst_varF23091;
  P val_varF23090;
  P x_7372F23089;
  P x_7372F23088;
  P x_7372F23087;
  P x_7372F23086;
  P casesF23085;
  P tstF23084;
  P valF23083;
  P x_7372F23082;
  P x_7373F23081;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7373_68,1);
  x_7373F23081 = T1;
  FUNINIT(x_7373F23081, 1,return_);
  x_7372F23082 = FREEREF(0);
  valF23083 = YPfalse;
  valF23083 = BOXFAB(valF23083);
  tstF23084 = YPfalse;
  tstF23084 = BOXFAB(tstF23084);
  casesF23085 = YPfalse;
  casesF23085 = BOXFAB(casesF23085);
  T9 = CALL2(1,VARREF(YisaQ),x_7372F23082,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7372F23082,LITREF(lit_81),x_7373F23081);
    x_7372F23086 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7372F23086,x_7373F23081);
    BOXVAL(valF23083) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_7372F23086);
    x_7372F23087 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7372F23087,x_7373F23081);
    BOXVAL(tstF23084) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_7372F23087);
    x_7372F23088 = T17;
    BOXVAL(casesF23085) = x_7372F23088;
    x_7372F23089 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7372F23089,x_7373F23081);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_7373F23081,LITREF(lit_6),x_7372F23082);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF23090 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF23091 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF23090);
  T33 = BOXVAL(valF23083);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF23091);
  T38 = BOXVAL(tstF23084);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF23085);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF23090,tst_varF23091,T41);
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

FUNCODEDEF(fun_x_7377_71) {
  P msg_,args_;
  P T0;
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
  P x_7376F23098;
  P x_7376F23097;
  P x_7376F23096;
  P casesF23095;
  P valF23094;
  P x_7376F23093;
  P x_7377F23092;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7377_71,1);
  x_7377F23092 = T1;
  FUNINIT(x_7377F23092, 1,return_);
  x_7376F23093 = FREEREF(0);
  valF23094 = YPfalse;
  valF23094 = BOXFAB(valF23094);
  casesF23095 = YPfalse;
  casesF23095 = BOXFAB(casesF23095);
  T7 = CALL2(1,VARREF(YisaQ),x_7376F23093,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7376F23093,LITREF(lit_83),x_7377F23092);
    x_7376F23096 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7376F23096,x_7377F23092);
    BOXVAL(valF23094) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7376F23096);
    x_7376F23097 = T12;
    BOXVAL(casesF23095) = x_7376F23097;
    x_7376F23098 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7376F23098,x_7377F23092);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7377F23092,LITREF(lit_6),x_7376F23093);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T19 = BOXVAL(valF23094);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T21 = BOXVAL(casesF23095);
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

FUNCODEDEF(fun_x_7381_74) {
  P msg_,args_;
  P T0;
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
  P tmpF23100;
  P tmpF23099;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF23099 = T2;
  if (tmpF23099 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF23100 = T1;
  if (tmpF23100 != YPfalse) {
    T5 = tmpF23100;
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
  P yF23103;
  P spliceQF23102;
  P varF23101;
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
    varF23101 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF23101,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF23101;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_78;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF23102 = T10;
      T14 = FUNFAB(fun_79,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF23103 = T13;
      if (spliceQF23102 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF23103);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
        T24 = CALL1(1,VARREF(Ytail),yF23103);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF23103;
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
  P argsF23116;
  P exprF23115;
  P varsF23114;
  P walk_opF23113;
  P rest_opQF23112;
  P spliceF23111;
  P x_7380F23110;
  P x_7380F23109;
  P x_7380F23108;
  P argsF23107;
  P fF23106;
  P x_7380F23105;
  P x_7381F23104;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7381_74,1);
  x_7381F23104 = T1;
  FUNINIT(x_7381F23104, 1,return_);
  x_7380F23105 = FREEREF(0);
  fF23106 = YPfalse;
  fF23106 = BOXFAB(fF23106);
  argsF23107 = YPfalse;
  argsF23107 = BOXFAB(argsF23107);
  T7 = CALL2(1,VARREF(YisaQ),x_7380F23105,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7380F23105,LITREF(lit_86),x_7381F23104);
    x_7380F23108 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7380F23108,x_7381F23104);
    BOXVAL(fF23106) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7380F23108);
    x_7380F23109 = T12;
    BOXVAL(argsF23107) = x_7380F23109;
    x_7380F23110 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7380F23110,x_7381F23104);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7381F23104,LITREF(lit_6),x_7380F23105);
  }
  T17 = fun_splice_76;
  spliceF23111 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_77,1);
  rest_opQF23112 = T18;
  T19 = FUNSHELL(1,fun_walk_op_80,2);
  walk_opF23113 = T19;
  FUNINIT(rest_opQF23112, 1,rest_opQF23112);
  FUNINIT(walk_opF23113, 2,walk_opF23113,spliceF23111);
  T22 = BOXVAL(argsF23107);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF23106);
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
      T41 = BOXVAL(fF23106);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF23114 = T43;
    T48 = BOXVAL(fF23106);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF23107);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF23113,varsF23114,T46);
    exprF23115 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF23114);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF23107);
    T55 = CALL1(1,rest_opQF23112,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_100);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF23116 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T59 = CALL1(1,VARREF(Ylst),argsF23116);
    T60 = CALL1(1,VARREF(Ylst),exprF23115);
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

FUNCODEDEF(fun_x_7389_83) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7393_84) {
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
  P varF23127;
  P x_7392F23126;
  P x_7392F23125;
  P x_7392F23124;
  P x_7392F23123;
  P x_7392F23122;
  P restF23121;
  P thenF23120;
  P patF23119;
  P x_7392F23118;
  P x_7393F23117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7393_84,1);
  x_7393F23117 = T1;
  FUNINIT(x_7393F23117, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_7392F23118 = T3;
  patF23119 = YPfalse;
  patF23119 = BOXFAB(patF23119);
  thenF23120 = YPfalse;
  thenF23120 = BOXFAB(thenF23120);
  restF23121 = YPfalse;
  restF23121 = BOXFAB(restF23121);
  T10 = CALL2(1,VARREF(YisaQ),x_7392F23118,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_7392F23118,x_7393F23117);
    x_7392F23122 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7392F23122,x_7393F23117);
    BOXVAL(patF23119) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_7392F23122);
    x_7392F23123 = T15;
    BOXVAL(thenF23120) = x_7392F23123;
    x_7392F23124 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7392F23124,x_7393F23117);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_7392F23118);
    x_7392F23125 = T18;
    BOXVAL(restF23121) = x_7392F23125;
    x_7392F23126 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7392F23126,x_7393F23117);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_7393F23117,LITREF(lit_6),x_7392F23118);
  }
  T24 = BOXVAL(patF23119);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T27 = BOXVAL(thenF23120);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF23127 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF23127);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
    T45 = BOXVAL(patF23119);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF23127);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T50 = BOXVAL(thenF23120);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
    T54 = CALL1(1,VARREF(Ylst),varF23127);
    T55 = BOXVAL(restF23121);
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

FUNCODEDEF(fun_x_7391_86) {
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
  P x_7390F23129;
  P x_7391F23128;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7391_86,3);
  x_7391F23128 = T1;
  FUNINIT(x_7391F23128, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_7390F23129 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_7390F23129,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7390F23129,x_7391F23128);
  } else {
    T6 = CALL2(1,x_7391F23128,LITREF(lit_6),x_7390F23129);
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
  P x_7388F23136;
  P x_7388F23135;
  P x_7388F23134;
  P casesF23133;
  P expF23132;
  P x_7388F23131;
  P x_7389F23130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7389_83,1);
  x_7389F23130 = T1;
  FUNINIT(x_7389F23130, 1,return_);
  x_7388F23131 = FREEREF(0);
  expF23132 = YPfalse;
  expF23132 = BOXFAB(expF23132);
  casesF23133 = YPfalse;
  casesF23133 = BOXFAB(casesF23133);
  T7 = CALL2(1,VARREF(YisaQ),x_7388F23131,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7388F23131,LITREF(lit_102),x_7389F23130);
    x_7388F23134 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7388F23134,x_7389F23130);
    BOXVAL(expF23132) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7388F23134);
    x_7388F23135 = T12;
    BOXVAL(casesF23133) = x_7388F23135;
    x_7388F23136 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7388F23136,x_7389F23130);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7389F23130,LITREF(lit_6),x_7388F23131);
  }
  T17 = FUNFAB(fun_87,2,casesF23133,expF23132);
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

FUNCODEDEF(fun_x_7397_90) {
  P msg_,args_;
  P T0;
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
  P x_7396F23145;
  P x_7396F23144;
  P x_7396F23143;
  P x_7396F23142;
  P argsF23141;
  P messageF23140;
  P condF23139;
  P x_7396F23138;
  P x_7397F23137;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7397_90,1);
  x_7397F23137 = T1;
  FUNINIT(x_7397F23137, 1,return_);
  x_7396F23138 = FREEREF(0);
  condF23139 = YPfalse;
  condF23139 = BOXFAB(condF23139);
  messageF23140 = YPfalse;
  messageF23140 = BOXFAB(messageF23140);
  argsF23141 = YPfalse;
  argsF23141 = BOXFAB(argsF23141);
  T9 = CALL2(1,VARREF(YisaQ),x_7396F23138,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7396F23138,LITREF(lit_109),x_7397F23137);
    x_7396F23142 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7396F23142,x_7397F23137);
    BOXVAL(condF23139) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_7396F23142);
    x_7396F23143 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7396F23143,x_7397F23137);
    BOXVAL(messageF23140) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_7396F23143);
    x_7396F23144 = T17;
    BOXVAL(argsF23141) = x_7396F23144;
    x_7396F23145 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7396F23145,x_7397F23137);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_7397F23137,LITREF(lit_6),x_7396F23138);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T27 = BOXVAL(condF23139);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF23140);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF23141);
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

FUNCODEDEF(fun_x_7405_93) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7407_94) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7409_95) {
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
  P x_7408F23152;
  P x_7408F23151;
  P x_7408F23150;
  P valF23149;
  P keyF23148;
  P x_7408F23147;
  P x_7409F23146;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7409_95,3);
  x_7409F23146 = T1;
  FUNINIT(x_7409F23146, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_7408F23147 = T3;
  keyF23148 = YPfalse;
  keyF23148 = BOXFAB(keyF23148);
  valF23149 = YPfalse;
  valF23149 = BOXFAB(valF23149);
  T8 = CALL2(1,VARREF(YisaQ),x_7408F23147,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7408F23147,LITREF(lit_47),x_7409F23146);
    x_7408F23150 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7408F23150,x_7409F23146);
    BOXVAL(keyF23148) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_7408F23150);
    x_7408F23151 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7408F23151,x_7409F23146);
    BOXVAL(valF23149) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_7408F23151);
    x_7408F23152 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7408F23152,x_7409F23146);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_7409F23146,LITREF(lit_6),x_7408F23147);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T24 = BOXVAL(keyF23148);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF23149);
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
  P stateF23159;
  P x_7406F23158;
  P x_7406F23157;
  P expF23156;
  P varF23155;
  P x_7406F23154;
  P x_7407F23153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7407_94,1);
  x_7407F23153 = T1;
  FUNINIT(x_7407F23153, 1,return_);
  x_7406F23154 = FREEREF(0);
  varF23155 = YPfalse;
  varF23155 = BOXFAB(varF23155);
  expF23156 = YPfalse;
  expF23156 = BOXFAB(expF23156);
  T7 = CALL2(1,VARREF(YisaQ),x_7406F23154,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7406F23154,x_7407F23153);
    BOXVAL(varF23155) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_7406F23154);
    x_7406F23157 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7406F23157,x_7407F23153);
    BOXVAL(expF23156) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_7406F23157);
    x_7406F23158 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7406F23158,x_7407F23153);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_7407F23153,LITREF(lit_6),x_7406F23154);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF23159 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T22 = CALL1(1,VARREF(Ylst),stateF23159);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_119));
  T27 = BOXVAL(expF23156);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(2));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T31 = CALL1(1,VARREF(Ylst),stateF23159);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(3));
  T34 = FUNFAB(fun_96,2,varF23155,stateF23159);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(4));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
  T38 = CALL1(1,VARREF(Ylst),stateF23159);
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
  P clauseF23161;
  P loopF23160;
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
    loopF23160 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
    T6 = CALL1(1,VARREF(Ylst),loopF23160);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF23160);
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
    clauseF23161 = T23;
    T25 = FUNFAB(fun_97,7,clauseF23161,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF23171;
  P x_7404F23170;
  P x_7404F23169;
  P x_7404F23168;
  P x_7404F23167;
  P x_7404F23166;
  P bodyF23165;
  P clausesF23164;
  P x_7404F23163;
  P x_7405F23162;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7405_93,1);
  x_7405F23162 = T1;
  FUNINIT(x_7405F23162, 1,return_);
  x_7404F23163 = FREEREF(0);
  clausesF23164 = YPfalse;
  clausesF23164 = BOXFAB(clausesF23164);
  bodyF23165 = YPfalse;
  bodyF23165 = BOXFAB(bodyF23165);
  T7 = CALL2(1,VARREF(YisaQ),x_7404F23163,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7404F23163,LITREF(lit_111),x_7405F23162);
    x_7404F23166 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_7404F23166,x_7405F23162);
    x_7404F23167 = T11;
    BOXVAL(clausesF23164) = x_7404F23167;
    x_7404F23168 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7404F23168,x_7405F23162);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_7404F23166);
    x_7404F23169 = T14;
    BOXVAL(bodyF23165) = x_7404F23169;
    x_7404F23170 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7404F23170,x_7405F23162);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_7405F23162,LITREF(lit_6),x_7404F23163);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF23171 = T19;
  FUNINIT(grokF23171, 2,bodyF23165,grokF23171);
  T21 = BOXVAL(clausesF23164);
  T20 = CALL5(0,grokF23171,T21,Ynil,Ynil,Ynil,Ynil);
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

FUNCODEDEF(fun_x_7413_101) {
  P msg_,args_;
  P T0;
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
  P x_7412F23178;
  P x_7412F23177;
  P x_7412F23176;
  P bodyF23175;
  P testF23174;
  P x_7412F23173;
  P x_7413F23172;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7413_101,1);
  x_7413F23172 = T1;
  FUNINIT(x_7413F23172, 1,return_);
  x_7412F23173 = FREEREF(0);
  testF23174 = YPfalse;
  testF23174 = BOXFAB(testF23174);
  bodyF23175 = YPfalse;
  bodyF23175 = BOXFAB(bodyF23175);
  T7 = CALL2(1,VARREF(YisaQ),x_7412F23173,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7412F23173,LITREF(lit_126),x_7413F23172);
    x_7412F23176 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7412F23176,x_7413F23172);
    BOXVAL(testF23174) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7412F23176);
    x_7412F23177 = T12;
    BOXVAL(bodyF23175) = x_7412F23177;
    x_7412F23178 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7412F23178,x_7413F23172);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7413F23172,LITREF(lit_6),x_7412F23173);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T24 = BOXVAL(testF23174);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF23175);
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

FUNCODEDEF(fun_x_7417_104) {
  P msg_,args_;
  P T0;
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
  P x_7416F23185;
  P x_7416F23184;
  P x_7416F23183;
  P bodyF23182;
  P testF23181;
  P x_7416F23180;
  P x_7417F23179;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7417_104,1);
  x_7417F23179 = T1;
  FUNINIT(x_7417F23179, 1,return_);
  x_7416F23180 = FREEREF(0);
  testF23181 = YPfalse;
  testF23181 = BOXFAB(testF23181);
  bodyF23182 = YPfalse;
  bodyF23182 = BOXFAB(bodyF23182);
  T7 = CALL2(1,VARREF(YisaQ),x_7416F23180,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7416F23180,LITREF(lit_129),x_7417F23179);
    x_7416F23183 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7416F23183,x_7417F23179);
    BOXVAL(testF23181) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7416F23183);
    x_7416F23184 = T12;
    BOXVAL(bodyF23182) = x_7416F23184;
    x_7416F23185 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7416F23185,x_7417F23179);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7417F23179,LITREF(lit_6),x_7416F23180);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T24 = BOXVAL(testF23181);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF23182);
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

FUNCODEDEF(fun_x_7421_107) {
  P msg_,args_;
  P T0;
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
  P x_7420F23192;
  P x_7420F23191;
  P x_7420F23190;
  P expF23189;
  P bindingF23188;
  P x_7420F23187;
  P x_7421F23186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7421_107,1);
  x_7421F23186 = T1;
  FUNINIT(x_7421F23186, 1,return_);
  x_7420F23187 = FREEREF(0);
  bindingF23188 = YPfalse;
  bindingF23188 = BOXFAB(bindingF23188);
  expF23189 = YPfalse;
  expF23189 = BOXFAB(expF23189);
  T7 = CALL2(1,VARREF(YisaQ),x_7420F23187,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7420F23187,LITREF(lit_131),x_7421F23186);
    x_7420F23190 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7420F23190,x_7421F23186);
    BOXVAL(bindingF23188) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7420F23190);
    x_7420F23191 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7420F23191,x_7421F23186);
    BOXVAL(expF23189) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_7420F23191);
    x_7420F23192 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7420F23192,x_7421F23186);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_7421F23186,LITREF(lit_6),x_7420F23187);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T21 = BOXVAL(bindingF23188);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF23189);
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

FUNCODEDEF(fun_x_7429_110) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7433_111) {
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
  P old_valueF23204;
  P nameF23203;
  P x_7432F23202;
  P x_7432F23201;
  P x_7432F23200;
  P x_7432F23199;
  P x_7432F23198;
  P restF23197;
  P valueF23196;
  P varF23195;
  P x_7432F23194;
  P x_7433F23193;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7433_111,2);
  x_7433F23193 = T1;
  FUNINIT(x_7433F23193, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_7432F23194 = T3;
  varF23195 = YPfalse;
  varF23195 = BOXFAB(varF23195);
  valueF23196 = YPfalse;
  valueF23196 = BOXFAB(valueF23196);
  restF23197 = YPfalse;
  restF23197 = BOXFAB(restF23197);
  T10 = CALL2(1,VARREF(YisaQ),x_7432F23194,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_7432F23194,x_7433F23193);
    x_7432F23198 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7432F23198,x_7433F23193);
    BOXVAL(varF23195) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_7432F23198);
    x_7432F23199 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7432F23199,x_7433F23193);
    BOXVAL(valueF23196) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_7432F23199);
    x_7432F23200 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7432F23200,x_7433F23193);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_7432F23194);
    x_7432F23201 = T20;
    BOXVAL(restF23197) = x_7432F23201;
    x_7432F23202 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7432F23202,x_7433F23193);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_7433F23193,LITREF(lit_6),x_7432F23194);
  }
  T26 = BOXVAL(varF23195);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF23203 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF23204 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF23204);
  T36 = CALL1(1,VARREF(Ylst),nameF23203);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T46 = CALL1(1,VARREF(Ylst),nameF23203);
  T48 = BOXVAL(valueF23196);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T54 = BOXVAL(restF23197);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T59 = CALL1(1,VARREF(Ylst),nameF23203);
  T60 = CALL1(1,VARREF(Ylst),old_valueF23204);
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

FUNCODEDEF(fun_x_7431_113) {
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
  P x_7430F23206;
  P x_7431F23205;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7431_113,3);
  x_7431F23205 = T1;
  FUNINIT(x_7431F23205, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_7430F23206 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_7430F23206,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7430F23206,x_7431F23205);
  } else {
    T6 = CALL2(1,x_7431F23205,LITREF(lit_6),x_7430F23206);
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
  P x_7428F23213;
  P x_7428F23212;
  P x_7428F23211;
  P bodyF23210;
  P bindingsF23209;
  P x_7428F23208;
  P x_7429F23207;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7429_110,1);
  x_7429F23207 = T1;
  FUNINIT(x_7429F23207, 1,return_);
  x_7428F23208 = FREEREF(0);
  bindingsF23209 = YPfalse;
  bindingsF23209 = BOXFAB(bindingsF23209);
  bodyF23210 = YPfalse;
  bodyF23210 = BOXFAB(bodyF23210);
  T7 = CALL2(1,VARREF(YisaQ),x_7428F23208,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7428F23208,LITREF(lit_134),x_7429F23207);
    x_7428F23211 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7428F23211,x_7429F23207);
    BOXVAL(bindingsF23209) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7428F23211);
    x_7428F23212 = T12;
    BOXVAL(bodyF23210) = x_7428F23212;
    x_7428F23213 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7428F23213,x_7429F23207);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7429F23207,LITREF(lit_6),x_7428F23208);
  }
  T17 = FUNFAB(fun_114,2,bindingsF23209,bodyF23210);
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

FUNCODEDEF(fun_x_7437_117) {
  P msg_,args_;
  P T0;
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
  P vnamF23223;
  P typF23222;
  P namF23221;
  P x_7436F23220;
  P x_7436F23219;
  P x_7436F23218;
  P valueF23217;
  P varF23216;
  P x_7436F23215;
  P x_7437F23214;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7437_117,1);
  x_7437F23214 = T1;
  FUNINIT(x_7437F23214, 1,return_);
  x_7436F23215 = FREEREF(0);
  varF23216 = YPfalse;
  varF23216 = BOXFAB(varF23216);
  valueF23217 = YPfalse;
  valueF23217 = BOXFAB(valueF23217);
  T7 = CALL2(1,VARREF(YisaQ),x_7436F23215,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7436F23215,LITREF(lit_140),x_7437F23214);
    x_7436F23218 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7436F23218,x_7437F23214);
    BOXVAL(varF23216) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7436F23218);
    x_7436F23219 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7436F23219,x_7437F23214);
    BOXVAL(valueF23217) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_7436F23219);
    x_7436F23220 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7436F23220,x_7437F23214);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_7437F23214,LITREF(lit_6),x_7436F23215);
  }
  T20 = BOXVAL(varF23216);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF23221 = T19;
  T23 = BOXVAL(varF23216);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF23222 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_141),namF23221,LITREF(lit_142));
  vnamF23223 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T31 = CALL1(1,VARREF(Ylst),vnamF23223);
  T33 = BOXVAL(valueF23217);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T37 = CALL1(1,VARREF(Ylst),namF23221);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T41 = CALL1(1,VARREF(Ylst),typF23222);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF23223);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF23221);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T53 = CALL1(1,VARREF(Ylst),typF23222);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T57 = CALL1(1,VARREF(Ylst),vnamF23223);
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

FUNCODEDEF(fun_x_7441_120) {
  P msg_,args_;
  P T0;
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
  P x_7440F23228;
  P x_7440F23227;
  P bodyF23226;
  P x_7440F23225;
  P x_7441F23224;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7441_120,1);
  x_7441F23224 = T1;
  FUNINIT(x_7441F23224, 1,return_);
  x_7440F23225 = FREEREF(0);
  bodyF23226 = YPfalse;
  bodyF23226 = BOXFAB(bodyF23226);
  T5 = CALL2(1,VARREF(YisaQ),x_7440F23225,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7440F23225,LITREF(lit_147),x_7441F23224);
    x_7440F23227 = T7;
    BOXVAL(bodyF23226) = x_7440F23227;
    x_7440F23228 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7440F23228,x_7441F23224);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7441F23224,LITREF(lit_6),x_7440F23225);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF23226);
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

FUNCODEDEF(fun_x_7445_123) {
  P msg_,args_;
  P T0;
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
  P x_7444F23233;
  P x_7444F23232;
  P namesF23231;
  P x_7444F23230;
  P x_7445F23229;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7445_123,1);
  x_7445F23229 = T1;
  FUNINIT(x_7445F23229, 1,return_);
  x_7444F23230 = FREEREF(0);
  namesF23231 = YPfalse;
  namesF23231 = BOXFAB(namesF23231);
  T5 = CALL2(1,VARREF(YisaQ),x_7444F23230,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7444F23230,LITREF(lit_150),x_7445F23229);
    x_7444F23232 = T7;
    BOXVAL(namesF23231) = x_7444F23232;
    x_7444F23233 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7444F23233,x_7445F23229);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7445F23229,LITREF(lit_6),x_7444F23230);
  }
  T13 = BOXVAL(namesF23231);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF23231);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T28 = BOXVAL(namesF23231);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
    T33 = BOXVAL(namesF23231);
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

FUNCODEDEF(fun_x_7467_126) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_7485_127) {
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
  P x_7484F23237;
  P nameF23236;
  P x_7484F23235;
  P x_7485F23234;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7485_127,1);
  x_7485F23234 = T1;
  FUNINIT(x_7485F23234, 1,return_);
  x_7484F23235 = FREEREF(0);
  nameF23236 = YPfalse;
  nameF23236 = BOXFAB(nameF23236);
  T5 = CALL2(1,VARREF(YisaQ),x_7484F23235,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7484F23235,x_7485F23234);
    BOXVAL(nameF23236) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_7484F23235);
    x_7484F23237 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7484F23237,x_7485F23234);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_7485F23234,LITREF(lit_6),x_7484F23235);
  }
  T13 = BOXVAL(nameF23236);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF23236);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T21 = BOXVAL(nameF23236);
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

FUNCODEDEF(fun_x_7482_129) {
  P msg_,args_;
  P x_7483F23238;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_7483F23238 = FREEREF(0);
  T3 = FUNFAB(fun_128,1,x_7483F23238);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  P return_;
  P x_7481F23245;
  P x_7481F23244;
  P x_7481F23243;
  P restF23242;
  P nameF23241;
  P x_7481F23240;
  P x_7482F23239;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7482_129,2);
  x_7482F23239 = T1;
  FUNINIT(x_7482F23239, 2,FREEREF(0),return_);
  x_7481F23240 = FREEREF(0);
  nameF23241 = YPfalse;
  nameF23241 = BOXFAB(nameF23241);
  restF23242 = YPfalse;
  restF23242 = BOXFAB(restF23242);
  T7 = CALL2(1,VARREF(YisaQ),x_7481F23240,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7481F23240,LITREF(lit_160),x_7482F23239);
    x_7481F23243 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7481F23243,x_7482F23239);
    BOXVAL(nameF23241) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7481F23243);
    x_7481F23244 = T12;
    BOXVAL(restF23242) = x_7481F23244;
    x_7481F23245 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7481F23245,x_7482F23239);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7482F23239,LITREF(lit_6),x_7481F23240);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF23241);
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

FUNCODEDEF(fun_x_7479_131) {
  P msg_,args_;
  P x_7480F23246;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_7480F23246 = FREEREF(0);
  T3 = FUNFAB(fun_130,2,x_7480F23246,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_132) {
  P return_;
  P x_7478F23253;
  P x_7478F23252;
  P x_7478F23251;
  P restF23250;
  P nameF23249;
  P x_7478F23248;
  P x_7479F23247;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7479_131,3);
  x_7479F23247 = T1;
  FUNINIT(x_7479F23247, 3,FREEREF(0),FREEREF(1),return_);
  x_7478F23248 = FREEREF(0);
  nameF23249 = YPfalse;
  nameF23249 = BOXFAB(nameF23249);
  restF23250 = YPfalse;
  restF23250 = BOXFAB(restF23250);
  T7 = CALL2(1,VARREF(YisaQ),x_7478F23248,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7478F23248,LITREF(lit_161),x_7479F23247);
    x_7478F23251 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7478F23251,x_7479F23247);
    BOXVAL(nameF23249) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7478F23251);
    x_7478F23252 = T12;
    BOXVAL(restF23250) = x_7478F23252;
    x_7478F23253 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7478F23253,x_7479F23247);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7479F23247,LITREF(lit_6),x_7478F23248);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF23249);
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

FUNCODEDEF(fun_x_7476_133) {
  P msg_,args_;
  P x_7477F23254;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_7477F23254 = FREEREF(0);
  T3 = FUNFAB(fun_132,2,x_7477F23254,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  P return_;
  P x_7475F23261;
  P x_7475F23260;
  P x_7475F23259;
  P restF23258;
  P nameF23257;
  P x_7475F23256;
  P x_7476F23255;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7476_133,3);
  x_7476F23255 = T1;
  FUNINIT(x_7476F23255, 3,FREEREF(0),FREEREF(1),return_);
  x_7475F23256 = FREEREF(0);
  nameF23257 = YPfalse;
  nameF23257 = BOXFAB(nameF23257);
  restF23258 = YPfalse;
  restF23258 = BOXFAB(restF23258);
  T7 = CALL2(1,VARREF(YisaQ),x_7475F23256,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7475F23256,LITREF(lit_132),x_7476F23255);
    x_7475F23259 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7475F23259,x_7476F23255);
    BOXVAL(nameF23257) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7475F23259);
    x_7475F23260 = T12;
    BOXVAL(restF23258) = x_7475F23260;
    x_7475F23261 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7475F23261,x_7476F23255);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7476F23255,LITREF(lit_6),x_7475F23256);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF23257);
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

FUNCODEDEF(fun_x_7473_135) {
  P msg_,args_;
  P x_7474F23262;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_7474F23262 = FREEREF(0);
  T3 = FUNFAB(fun_134,2,x_7474F23262,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  P return_;
  P x_7472F23269;
  P x_7472F23268;
  P x_7472F23267;
  P restF23266;
  P nameF23265;
  P x_7472F23264;
  P x_7473F23263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7473_135,3);
  x_7473F23263 = T1;
  FUNINIT(x_7473F23263, 3,FREEREF(0),FREEREF(1),return_);
  x_7472F23264 = FREEREF(0);
  nameF23265 = YPfalse;
  nameF23265 = BOXFAB(nameF23265);
  restF23266 = YPfalse;
  restF23266 = BOXFAB(restF23266);
  T7 = CALL2(1,VARREF(YisaQ),x_7472F23264,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7472F23264,LITREF(lit_162),x_7473F23263);
    x_7472F23267 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7472F23267,x_7473F23263);
    BOXVAL(nameF23265) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7472F23267);
    x_7472F23268 = T12;
    BOXVAL(restF23266) = x_7472F23268;
    x_7472F23269 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7472F23269,x_7473F23263);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7473F23263,LITREF(lit_6),x_7472F23264);
  }
  T18 = BOXVAL(nameF23265);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF23265);
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

FUNCODEDEF(fun_x_7470_137) {
  P msg_,args_;
  P x_7471F23270;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_7471F23270 = FREEREF(0);
  T3 = FUNFAB(fun_136,2,x_7471F23270,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P x_7469F23277;
  P x_7469F23276;
  P x_7469F23275;
  P restF23274;
  P nameF23273;
  P x_7469F23272;
  P x_7470F23271;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7470_137,3);
  x_7470F23271 = T1;
  FUNINIT(x_7470F23271, 3,FREEREF(0),FREEREF(1),return_);
  x_7469F23272 = FREEREF(0);
  nameF23273 = YPfalse;
  nameF23273 = BOXFAB(nameF23273);
  restF23274 = YPfalse;
  restF23274 = BOXFAB(restF23274);
  T7 = CALL2(1,VARREF(YisaQ),x_7469F23272,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7469F23272,LITREF(lit_163),x_7470F23271);
    x_7469F23275 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7469F23275,x_7470F23271);
    BOXVAL(nameF23273) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_7469F23275);
    x_7469F23276 = T12;
    BOXVAL(restF23274) = x_7469F23276;
    x_7469F23277 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7469F23277,x_7470F23271);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_7470F23271,LITREF(lit_6),x_7469F23272);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF23273);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T29 = BOXVAL(nameF23273);
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
  P defsF23284;
  P x_7468F23283;
  P x_7466F23282;
  P x_7466F23281;
  P defF23280;
  P x_7466F23279;
  P x_7467F23278;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7467_126,1);
  x_7467F23278 = T1;
  FUNINIT(x_7467F23278, 1,return_);
  x_7466F23279 = FREEREF(0);
  defF23280 = YPfalse;
  defF23280 = BOXFAB(defF23280);
  T5 = CALL2(1,VARREF(YisaQ),x_7466F23279,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7466F23279,LITREF(lit_153),x_7467F23278);
    x_7466F23281 = T7;
    BOXVAL(defF23280) = x_7466F23281;
    x_7466F23282 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7466F23282,x_7467F23278);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7467F23278,LITREF(lit_6),x_7466F23279);
  }
  T13 = BOXVAL(defF23280);
  x_7468F23283 = T13;
  T15 = FUNFAB(fun_138,2,x_7468F23283,defF23280);
  T14 = with_exit(T15);
  T12 = T14;
  defsF23284 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF23284,Ynil);
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

FUNCODEDEF(fun_x_7489_141) {
  P msg_,args_;
  P T0;
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
  P xF23285;
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
  xF23285 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF23285,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P return_;
  P x_7488F23290;
  P x_7488F23289;
  P defsF23288;
  P x_7488F23287;
  P x_7489F23286;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7489_141,1);
  x_7489F23286 = T1;
  FUNINIT(x_7489F23286, 1,return_);
  x_7488F23287 = FREEREF(0);
  defsF23288 = YPfalse;
  defsF23288 = BOXFAB(defsF23288);
  T5 = CALL2(1,VARREF(YisaQ),x_7488F23287,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7488F23287,LITREF(lit_165),x_7489F23286);
    x_7488F23289 = T7;
    BOXVAL(defsF23288) = x_7488F23289;
    x_7488F23290 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7488F23290,x_7489F23286);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_7489F23286,LITREF(lit_6),x_7488F23287);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T14 = fun_142;
  T15 = BOXVAL(defsF23288);
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
  P tmpF23306;
  P tmpF23305;
  P tmpF23304;
  P tmpF23303;
  P tmpF23302;
  P tmpF23301;
  P tmpF23300;
  P tmpF23299;
  P tmpF23298;
  P tmpF23297;
  P tmpF23296;
  P tmpF23295;
  P tmpF23294;
  P tmpF23293;
  P tmpF23292;
  P tmpF23291;
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
  lit_2 = YPPsym((P)"x-7277");
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
  fun_x_7277_0 = YPmet(FUNCODEREF(fun_x_7277_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T3);
  lit_17 = YPPsym((P)"x-7281");
  lit_18 = YPPsym((P)"app-sup");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7281_3 = YPmet(FUNCODEREF(fun_x_7281_3),LITREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T7);
  lit_20 = YPPsym((P)"x-7285");
  lit_21 = YPPsym((P)"app");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7285_6 = YPmet(FUNCODEREF(fun_x_7285_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T11);
  lit_22 = YPPsym((P)"x-7289");
  lit_23 = YPPsym((P)"renew");
  lit_24 = YPPsym((P)"loop");
  lit_25 = YPPsym((P)"sets");
  lit_26 = YPPsym((P)"inits");
  lit_27 = YPPsym((P)"set");
  T15 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7289_9 = YPmet(FUNCODEREF(fun_x_7289_9),LITREF(lit_22),T15,ENVNUL,PNUL,YPfalse);
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
  T18 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_munch_13 = YPmet(FUNCODEREF(fun_munch_13),LITREF(lit_30),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_28),T17,ENVNUL,PNUL,YPfalse);
  T19 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T19);
  lit_32 = YPPsym((P)"x-7295");
  lit_33 = YPPsym((P)"incf");
  lit_34 = YPPsym((P)"x-7297");
  lit_35 = YPPsym((P)"+");
  T24 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7295_15 = YPmet(FUNCODEREF(fun_x_7295_15),LITREF(lit_32),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7297_16 = YPmet(FUNCODEREF(fun_x_7297_16),LITREF(lit_34),T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T25 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T25);
  lit_36 = YPPsym((P)"x-7303");
  lit_37 = YPPsym((P)"decf");
  lit_38 = YPPsym((P)"x-7305");
  lit_39 = YPPsym((P)"-");
  T30 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7303_20 = YPmet(FUNCODEREF(fun_x_7303_20),LITREF(lit_36),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7305_21 = YPmet(FUNCODEREF(fun_x_7305_21),LITREF(lit_38),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T31 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T31);
  lit_40 = YPPsym((P)"x-7309");
  lit_41 = YPPsym((P)"pushf");
  lit_42 = YPPsym((P)"push!");
  T34 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7309_25 = YPmet(FUNCODEREF(fun_x_7309_25),LITREF(lit_40),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T35 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T35);
  lit_43 = YPPsym((P)"x-7313");
  lit_44 = YPPsym((P)"swapf");
  T38 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7313_28 = YPmet(FUNCODEREF(fun_x_7313_28),LITREF(lit_43),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T39 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T39);
  lit_45 = YPPsym((P)"x-7317");
  lit_46 = YPPsym((P)"popf");
  lit_47 = YPPsym((P)"tup");
  lit_48 = YPPsym((P)"pop!");
  T42 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7317_31 = YPmet(FUNCODEREF(fun_x_7317_31),LITREF(lit_45),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T43 = fun_33;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T43);
  lit_49 = YPPsym((P)"x-7321");
  lit_50 = YPPsym((P)"opf");
  lit_51 = YPPsym((P)"_");
  T46 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7321_34 = YPmet(FUNCODEREF(fun_x_7321_34),LITREF(lit_49),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T47 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T47);
  lit_52 = YPPsym((P)"x-7325");
  lit_53 = YPPsym((P)"unless");
  lit_54 = YPPsym((P)"not");
  lit_55 = YPPsym((P)"seq");
  T50 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7325_37 = YPmet(FUNCODEREF(fun_x_7325_37),LITREF(lit_52),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T51);
  lit_56 = YPPsym((P)"x-7329");
  lit_57 = YPPsym((P)"when");
  T54 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7329_40 = YPmet(FUNCODEREF(fun_x_7329_40),LITREF(lit_56),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T55 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T55);
  lit_58 = YPPsym((P)"x-7337");
  lit_59 = YPPsym((P)"or");
  lit_60 = YPPsym((P)"x-7339");
  lit_61 = YPPsym((P)"x-7341");
  lit_62 = YPPsym((P)"tmp");
  T62 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7337_43 = YPmet(FUNCODEREF(fun_x_7337_43),LITREF(lit_58),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7339_44 = YPmet(FUNCODEREF(fun_x_7339_44),LITREF(lit_60),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7341_45 = YPmet(FUNCODEREF(fun_x_7341_45),LITREF(lit_61),T60,ENVNUL,PNUL,YPfalse);
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
  lit_63 = YPPsym((P)"x-7349");
  lit_64 = YPPsym((P)"and");
  lit_65 = YPPsym((P)"x-7351");
  lit_66 = YPPsym((P)"x-7353");
  T70 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7349_50 = YPmet(FUNCODEREF(fun_x_7349_50),LITREF(lit_63),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7351_51 = YPmet(FUNCODEREF(fun_x_7351_51),LITREF(lit_65),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7353_52 = YPmet(FUNCODEREF(fun_x_7353_52),LITREF(lit_66),T68,ENVNUL,PNUL,YPfalse);
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
  lit_67 = YPPsym((P)"x-7359");
  lit_68 = YPPsym((P)"cond");
  lit_69 = YPPsym((P)"x-7361");
  lit_70 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T76 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7359_57 = YPmet(FUNCODEREF(fun_x_7359_57),LITREF(lit_67),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7361_58 = YPmet(FUNCODEREF(fun_x_7361_58),LITREF(lit_69),T75,ENVNUL,PNUL,YPfalse);
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
  lit_75 = YPPsym((P)"x-7367");
  lit_76 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_77 = YPPsym((P)"x-7369");
  lit_78 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_79 = YPPsym((P)"x");
  T83 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7367_62 = YPmet(FUNCODEREF(fun_x_7367_62),LITREF(lit_75),T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7369_63 = YPmet(FUNCODEREF(fun_x_7369_63),LITREF(lit_77),T82,ENVNUL,PNUL,YPfalse);
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
  lit_80 = YPPsym((P)"x-7373");
  lit_81 = YPPsym((P)"case-by");
  T87 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7373_68 = YPmet(FUNCODEREF(fun_x_7373_68),LITREF(lit_80),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T88 = fun_70;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T88);
  lit_82 = YPPsym((P)"x-7377");
  lit_83 = YPPsym((P)"case");
  lit_84 = YPPsym((P)"==");
  T91 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7377_71 = YPmet(FUNCODEREF(fun_x_7377_71),LITREF(lit_82),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_73;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T92);
  lit_85 = YPPsym((P)"x-7381");
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
  fun_x_7381_74 = YPmet(FUNCODEREF(fun_x_7381_74),LITREF(lit_85),T101,ENVNUL,PNUL,YPfalse);
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
  lit_101 = YPPsym((P)"x-7389");
  lit_102 = YPPsym((P)"match");
  lit_103 = YPPsym((P)"x-7391");
  lit_104 = YPPsym((P)"x-7393");
  lit_105 = YPsb((P)"Invalid match syntax.");
  lit_106 = YPPsym((P)"mif");
  lit_107 = YPsb((P)"Failed to match.");
  T109 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7389_83 = YPmet(FUNCODEREF(fun_x_7389_83),LITREF(lit_101),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7393_84 = YPmet(FUNCODEREF(fun_x_7393_84),LITREF(lit_104),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7391_86 = YPmet(FUNCODEREF(fun_x_7391_86),LITREF(lit_103),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T110 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T110);
  lit_108 = YPPsym((P)"x-7397");
  lit_109 = YPPsym((P)"assert");
  T113 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7397_90 = YPmet(FUNCODEREF(fun_x_7397_90),LITREF(lit_108),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T114 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T114);
  lit_110 = YPPsym((P)"x-7405");
  lit_111 = YPPsym((P)"for");
  lit_112 = YPPsym((P)"grok");
  lit_113 = YPPsym((P)"clauses");
  lit_114 = YPPsym((P)"preds");
  lit_115 = YPPsym((P)"nows");
  lit_116 = YPPsym((P)"nexts");
  lit_117 = YPPsym((P)"rep");
  lit_118 = YPPsym((P)"x-7407");
  lit_119 = YPPsym((P)"enum");
  lit_120 = YPPsym((P)"fin?");
  lit_121 = YPPsym((P)"x-7409");
  lit_122 = YPPsym((P)"now");
  lit_123 = YPPsym((P)"now-key");
  lit_124 = YPPsym((P)"nxt");
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7405_93 = YPmet(FUNCODEREF(fun_x_7405_93),LITREF(lit_110),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7407_94 = YPmet(FUNCODEREF(fun_x_7407_94),LITREF(lit_118),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7409_95 = YPmet(FUNCODEREF(fun_x_7409_95),LITREF(lit_121),T120,ENVNUL,PNUL,YPfalse);
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
  lit_125 = YPPsym((P)"x-7413");
  lit_126 = YPPsym((P)"while");
  lit_127 = YPPsym((P)"_loop");
  T126 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7413_101 = YPmet(FUNCODEREF(fun_x_7413_101),LITREF(lit_125),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T127 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T127);
  lit_128 = YPPsym((P)"x-7417");
  lit_129 = YPPsym((P)"until");
  T130 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7417_104 = YPmet(FUNCODEREF(fun_x_7417_104),LITREF(lit_128),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T131 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T131);
  lit_130 = YPPsym((P)"x-7421");
  lit_131 = YPPsym((P)"ddv");
  lit_132 = YPPsym((P)"dv");
  T134 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7421_107 = YPmet(FUNCODEREF(fun_x_7421_107),LITREF(lit_130),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_109;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"ddv"),T135);
  lit_133 = YPPsym((P)"x-7429");
  lit_134 = YPPsym((P)"dlet");
  lit_135 = YPPsym((P)"x-7431");
  lit_136 = YPPsym((P)"x-7433");
  lit_137 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_138 = YPPsym((P)"fin");
  T142 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7429_110 = YPmet(FUNCODEREF(fun_x_7429_110),LITREF(lit_133),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7433_111 = YPmet(FUNCODEREF(fun_x_7433_111),LITREF(lit_136),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7431_113 = YPmet(FUNCODEREF(fun_x_7431_113),LITREF(lit_135),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T143 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T143);
  lit_139 = YPPsym((P)"x-7437");
  lit_140 = YPPsym((P)"def-fun-var");
  lit_141 = YPsb((P)"*");
  lit_142 = YPsb((P)"*");
  lit_143 = YPPsym((P)"dm");
  lit_144 = YPPsym((P)"=>");
  lit_145 = YPPsym((P)"z");
  T146 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7437_117 = YPmet(FUNCODEREF(fun_x_7437_117),LITREF(lit_139),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T147 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T147);
  lit_146 = YPPsym((P)"x-7441");
  lit_147 = YPPsym((P)"without-prop-unbound-errors");
  lit_148 = YPPsym((P)"*report-prop-unbound-errors?*");
  T150 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7441_120 = YPmet(FUNCODEREF(fun_x_7441_120),LITREF(lit_146),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T151 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T151);
  lit_149 = YPPsym((P)"x-7445");
  lit_150 = YPPsym((P)"need-implementation");
  lit_151 = YPPsym((P)"export");
  T154 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7445_123 = YPmet(FUNCODEREF(fun_x_7445_123),LITREF(lit_149),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T155 = fun_125;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T155);
  lit_152 = YPPsym((P)"x-7467");
  lit_153 = YPPsym((P)"pub");
  lit_154 = YPPsym((P)"x-7470");
  lit_155 = YPPsym((P)"x-7473");
  lit_156 = YPPsym((P)"x-7476");
  lit_157 = YPPsym((P)"x-7479");
  lit_158 = YPPsym((P)"x-7482");
  lit_159 = YPPsym((P)"x-7485");
  lit_160 = YPPsym((P)"dc");
  lit_161 = YPPsym((P)"dg");
  lit_162 = YPPsym((P)"df");
  lit_163 = YPPsym((P)"dp");
  T170 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7467_126 = YPmet(FUNCODEREF(fun_x_7467_126),LITREF(lit_152),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7485_127 = YPmet(FUNCODEREF(fun_x_7485_127),LITREF(lit_159),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7482_129 = YPmet(FUNCODEREF(fun_x_7482_129),LITREF(lit_158),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7479_131 = YPmet(FUNCODEREF(fun_x_7479_131),LITREF(lit_157),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7476_133 = YPmet(FUNCODEREF(fun_x_7476_133),LITREF(lit_156),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7473_135 = YPmet(FUNCODEREF(fun_x_7473_135),LITREF(lit_155),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7470_137 = YPmet(FUNCODEREF(fun_x_7470_137),LITREF(lit_154),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T171 = fun_140;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T171);
  lit_164 = YPPsym((P)"x-7489");
  lit_165 = YPPsym((P)"exported");
  T175 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7489_141 = YPmet(FUNCODEREF(fun_x_7489_141),LITREF(lit_164),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T176 = fun_144;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T176);
  tmpF23291 = YPfalse;
  if (tmpF23291 != YPfalse) {
    T177 = VARREF(YgooSmacrosYEE);
  } else {
    T177 = YPfalse;
  }
  tmpF23292 = YPfalse;
  if (tmpF23292 != YPfalse) {
    T178 = VARREF(YgooSmacrosYdo);
  } else {
    T178 = YPfalse;
  }
  tmpF23293 = YPfalse;
  if (tmpF23293 != YPfalse) {
    T179 = VARREF(YgooSmacrosYrevX);
  } else {
    T179 = YPfalse;
  }
  tmpF23294 = YPfalse;
  if (tmpF23294 != YPfalse) {
    T180 = VARREF(YgooSmacrosYcat);
  } else {
    T180 = YPfalse;
  }
  tmpF23295 = YPfalse;
  if (tmpF23295 != YPfalse) {
    T181 = VARREF(YgooSmacrosYelt);
  } else {
    T181 = YPfalse;
  }
  tmpF23296 = YPfalse;
  if (tmpF23296 != YPfalse) {
    T182 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T182 = YPfalse;
  }
  tmpF23297 = YPfalse;
  if (tmpF23297 != YPfalse) {
    T183 = VARREF(Yerror);
  } else {
    T183 = YPfalse;
  }
  tmpF23298 = YPfalse;
  if (tmpF23298 != YPfalse) {
    T184 = VARREF(YgooSmacrosYgensym);
  } else {
    T184 = YPfalse;
  }
  tmpF23299 = YPfalse;
  if (tmpF23299 != YPfalse) {
    T185 = VARREF(Ylst);
  } else {
    T185 = YPfalse;
  }
  tmpF23300 = YPfalse;
  if (tmpF23300 != YPfalse) {
    T186 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T186 = YPfalse;
  }
  tmpF23301 = YPfalse;
  if (tmpF23301 != YPfalse) {
    T187 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T187 = YPfalse;
  }
  tmpF23302 = YPfalse;
  if (tmpF23302 != YPfalse) {
    T188 = VARREF(YgooSmacrosYmap);
  } else {
    T188 = YPfalse;
  }
  tmpF23303 = YPfalse;
  if (tmpF23303 != YPfalse) {
    T189 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T189 = YPfalse;
  }
  tmpF23304 = YPfalse;
  if (tmpF23304 != YPfalse) {
    T190 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T190 = YPfalse;
  }
  tmpF23305 = YPfalse;
  if (tmpF23305 != YPfalse) {
    T191 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T191 = YPfalse;
  }
  tmpF23306 = YPfalse;
  if (tmpF23306 != YPfalse) {
    T194 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T194 = YPfalse;
  }
  T193 = T194;
  T192 = T193;
  return T192;
}

P YgooSmacrosY___main_1___() {
  P tmpF23311;
  P tmpF23310;
  P tmpF23309;
  P tmpF23308;
  P tmpF23307;
  P T0,T1,T2,T3,T4,T5;
loop:
  tmpF23307 = YPfalse;
  if (tmpF23307 != YPfalse) {
    T0 = VARREF(YgooSmacrosYpair);
  } else {
    T0 = YPfalse;
  }
  tmpF23308 = YPfalse;
  if (tmpF23308 != YPfalse) {
    T1 = VARREF(Ytup);
  } else {
    T1 = YPfalse;
  }
  tmpF23309 = YPfalse;
  if (tmpF23309 != YPfalse) {
    T2 = VARREF(YgooSmacrosYvar_name);
  } else {
    T2 = YPfalse;
  }
  tmpF23310 = YPfalse;
  if (tmpF23310 != YPfalse) {
    T3 = VARREF(YgooSmacrosYvar_type);
  } else {
    T3 = YPfalse;
  }
  tmpF23311 = YPfalse;
  if (tmpF23311 != YPfalse) {
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
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"new", &module_info_gooSboot, "new"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"try", &module_info_gooSboot, "try"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"def", &module_info_gooSboot, "def"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"error", &module_info_gooSboot, "error"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"head", &module_info_gooSboot, "head"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"if", &module_info_gooSboot, "if"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%im", &module_info_gooSboot, "%im"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"use", &module_info_gooSboot, "use"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"@len", &module_info_gooSboot, "@len"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"df", &module_info_gooSboot, "df"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"decf", NULL},
  {"fab-setter-name", &YgooSmacrosYfab_setter_name},
  {"until", NULL},
  {"pushf", NULL},
  {"app-sup", NULL},
  {"cat", &YgooSmacrosYcat},
  {"swapf", NULL},
  {"exported", NULL},
  {"pair", &YgooSmacrosYpair},
  {"match-atom", &YgooSmacrosYmatch_atom},
  {"op", NULL},
  {"assert", NULL},
  {"without-prop-unbound-errors", NULL},
  {"or", NULL},
  {"rev!", &YgooSmacrosYrevX},
  {"gensym", &YgooSmacrosYgensym},
  {"var-type", &YgooSmacrosYvar_type},
  {"dlet", NULL},
  {"do", &YgooSmacrosYdo},
  {"opf", NULL},
  {"map", &YgooSmacrosYmap},
  {"renew", NULL},
  {"match-empty-list", &YgooSmacrosYmatch_empty_list},
  {"pub", NULL},
  {"==", &YgooSmacrosYEE},
  {"do-case-by", &YgooSmacrosYdo_case_by},
  {"and", NULL},
  {"when", NULL},
  {"match-unquote", &YgooSmacrosYmatch_unquote},
  {"case", NULL},
  {"incf", NULL},
  {"---main-0---", NULL},
  {"elt", &YgooSmacrosYelt},
  {"napp", &YgooSmacrosYnapp},
  {"def-fun-var", NULL},
  {"empty?", &YgooSmacrosYemptyQ},
  {"ddv", NULL},
  {"app", NULL},
  {"var-name", &YgooSmacrosYvar_name},
  {"popf", NULL},
  {"cat-sym", &YgooSmacrosYcat_sym},
  {"---main-1---", NULL},
  {"need-implementation", NULL},
  {"for", NULL},
  {"match", NULL},
  {"case-by", NULL},
  {"sup", NULL},
  {"lift-place-subforms", &YgooSmacrosYlift_place_subforms},
  {"cond", NULL},
  {"match-sublist", &YgooSmacrosYmatch_sublist},
  {"unless", NULL},
  {"while", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"decf", "decf"},
  {"fab-setter-name", "fab-setter-name"},
  {"until", "until"},
  {"app-sup", "app-sup"},
  {"cat", "cat"},
  {"swapf", "swapf"},
  {"exported", "exported"},
  {"pair", "pair"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"match-atom", "match-atom"},
  {"op", "op"},
  {"assert", "assert"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"or", "or"},
  {"rev!", "rev!"},
  {"match-unquote", "match-unquote"},
  {"gensym", "gensym"},
  {"var-type", "var-type"},
  {"dlet", "dlet"},
  {"do", "do"},
  {"opf", "opf"},
  {"error", "error"},
  {"map", "map"},
  {"renew", "renew"},
  {"while", "while"},
  {"match-empty-list", "match-empty-list"},
  {"pub", "pub"},
  {"==", "=="},
  {"pushf", "pushf"},
  {"and", "and"},
  {"when", "when"},
  {"case", "case"},
  {"incf", "incf"},
  {"elt", "elt"},
  {"napp", "napp"},
  {"def-fun-var", "def-fun-var"},
  {"empty?", "empty?"},
  {"ddv", "ddv"},
  {"tup", "tup"},
  {"app", "app"},
  {"lst", "lst"},
  {"var-name", "var-name"},
  {"popf", "popf"},
  {"cat-sym", "cat-sym"},
  {"need-implementation", "need-implementation"},
  {"for", "for"},
  {"match", "match"},
  {"case-by", "case-by"},
  {"sup", "sup"},
  {"cond", "cond"},
  {"match-sublist", "match-sublist"},
  {"unless", "unless"},
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
