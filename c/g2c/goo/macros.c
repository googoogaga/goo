/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yerror,"goo/boot","error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ynul,"goo/boot","nul");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yhead,"goo/boot","head");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YisaQ,"goo/boot","isa?");
EXT(Ynot,"goo/boot","not");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YtT,"goo/boot","t*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ynil,"goo/boot","nil");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_128);
DEFLIT(lit_155);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_134);
DEFLIT(lit_61);
DEFLIT(lit_150);
DEFLIT(lit_40);
DEFLIT(lit_64);
DEFLIT(lit_59);
DEFLIT(lit_112);
DEFLIT(lit_94);
DEFLIT(lit_82);
DEFLIT(lit_165);
DEFLIT(lit_145);
DEFLIT(lit_140);
DEFLIT(lit_28);
DEFLIT(lit_158);
DEFLIT(lit_42);
DEFLIT(lit_111);
DEFLIT(lit_9);
DEFLIT(lit_156);
DEFLIT(lit_108);
DEFLIT(lit_102);
DEFLIT(lit_50);
DEFLIT(lit_65);
DEFLIT(lit_19);
DEFLIT(lit_52);
DEFLIT(lit_46);
DEFLIT(lit_36);
DEFLIT(lit_121);
DEFLIT(lit_18);
DEFLIT(lit_16);
DEFLIT(lit_141);
DEFLIT(lit_39);
DEFLIT(lit_62);
DEFLIT(lit_113);
DEFLIT(lit_98);
DEFLIT(lit_53);
DEFLIT(lit_71);
DEFLIT(lit_55);
DEFLIT(lit_3);
DEFLIT(lit_78);
DEFLIT(lit_157);
DEFLIT(lit_66);
DEFLIT(lit_93);
DEFLIT(lit_160);
DEFLIT(lit_76);
DEFLIT(lit_115);
DEFLIT(lit_56);
DEFLIT(lit_63);
DEFLIT(lit_80);
DEFLIT(lit_75);
DEFLIT(lit_31);
DEFLIT(lit_23);
DEFLIT(lit_122);
DEFLIT(lit_8);
DEFLIT(lit_159);
DEFLIT(lit_91);
DEFLIT(lit_117);
DEFLIT(lit_133);
DEFLIT(lit_153);
DEFLIT(lit_148);
DEFLIT(lit_136);
DEFLIT(lit_107);
DEFLIT(lit_161);
DEFLIT(lit_49);
DEFLIT(lit_88);
DEFLIT(lit_41);
DEFLIT(lit_97);
DEFLIT(lit_32);
DEFLIT(lit_152);
DEFLIT(lit_84);
DEFLIT(lit_17);
DEFLIT(lit_72);
DEFLIT(lit_130);
DEFLIT(lit_67);
DEFLIT(lit_85);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_33);
DEFLIT(lit_43);
DEFLIT(lit_114);
DEFLIT(lit_144);
DEFLIT(lit_45);
DEFLIT(lit_57);
DEFLIT(lit_164);
DEFLIT(lit_30);
DEFLIT(lit_74);
DEFLIT(lit_116);
DEFLIT(lit_7);
DEFLIT(lit_92);
DEFLIT(lit_34);
DEFLIT(lit_123);
DEFLIT(lit_60);
DEFLIT(lit_12);
DEFLIT(lit_96);
DEFLIT(lit_147);
DEFLIT(lit_27);
DEFLIT(lit_126);
DEFLIT(lit_137);
DEFLIT(lit_77);
DEFLIT(lit_149);
DEFLIT(lit_129);
DEFLIT(lit_35);
DEFLIT(lit_131);
DEFLIT(lit_48);
DEFLIT(lit_154);
DEFLIT(lit_106);
DEFLIT(lit_138);
DEFLIT(lit_44);
DEFLIT(lit_162);
DEFLIT(lit_143);
DEFLIT(lit_87);
DEFLIT(lit_105);
DEFLIT(lit_125);
DEFLIT(lit_83);
DEFLIT(lit_127);
DEFLIT(lit_38);
DEFLIT(lit_100);
DEFLIT(lit_15);
DEFLIT(lit_104);
DEFLIT(lit_132);
DEFLIT(lit_151);
DEFLIT(lit_26);
DEFLIT(lit_37);
DEFLIT(lit_110);
DEFLIT(lit_101);
DEFLIT(lit_54);
DEFLIT(lit_79);
DEFLIT(lit_146);
DEFLIT(lit_21);
DEFLIT(lit_109);
DEFLIT(lit_29);
DEFLIT(lit_73);
DEFLIT(lit_13);
DEFLIT(lit_5);
DEFLIT(lit_124);
DEFLIT(lit_10);
DEFLIT(lit_95);
DEFLIT(lit_24);
DEFLIT(lit_118);
DEFLIT(lit_120);
DEFLIT(lit_51);
DEFLIT(lit_81);
DEFLIT(lit_103);
DEFLIT(lit_139);
DEFLIT(lit_47);
DEFLIT(lit_25);
DEFLIT(lit_89);
DEFLIT(lit_70);
DEFLIT(lit_58);
DEFLIT(lit_119);
DEFLIT(lit_22);
DEFLIT(lit_163);
DEFLIT(lit_0);
DEFLIT(lit_86);
DEFLIT(lit_142);
DEFLIT(lit_135);
DEFLIT(lit_1);
DEFLIT(lit_90);
DEFLIT(lit_69);
DEFLIT(lit_99);
DEFLIT(lit_68);
DEFLIT(lit_6);
DEFLIT(lit_2);

/* FUNCTIONS: */

LOCFOR(fun_x_1717_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1721_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1725_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1729_9);
LOCFOR(fun_loop_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_munch_13);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1735_15);
LOCFOR(fun_x_1737_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1743_20);
LOCFOR(fun_x_1745_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1749_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1753_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1757_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_1761_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1765_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1769_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1777_43);
LOCFOR(fun_x_1779_44);
LOCFOR(fun_x_1781_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1789_50);
LOCFOR(fun_x_1791_51);
LOCFOR(fun_x_1793_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_x_1799_57);
LOCFOR(fun_x_1801_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1807_62);
LOCFOR(fun_x_1809_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1813_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1817_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1821_74);
LOCFOR(fun_75);
LOCFOR(fun_splice_76);
LOCFOR(fun_rest_opQ_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_walk_op_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1829_83);
LOCFOR(fun_x_1833_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1831_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1837_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_1845_93);
LOCFOR(fun_x_1847_94);
LOCFOR(fun_x_1849_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_1853_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_1857_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1861_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1869_110);
LOCFOR(fun_x_1873_111);
LOCFOR(fun_112);
LOCFOR(fun_x_1871_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_1877_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1881_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1885_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1907_126);
LOCFOR(fun_x_1925_127);
LOCFOR(fun_128);
LOCFOR(fun_x_1922_129);
LOCFOR(fun_130);
LOCFOR(fun_x_1919_131);
LOCFOR(fun_132);
LOCFOR(fun_x_1916_133);
LOCFOR(fun_134);
LOCFOR(fun_x_1913_135);
LOCFOR(fun_136);
LOCFOR(fun_x_1910_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_x_1929_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1717_0) {
  P msg_,args_;
  P T0;
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
  P x_1716F2559;
  P x_1716F2558;
  P argsF2557;
  P x_1716F2556;
  P x_1717F2555;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1717_0,1);
  x_1717F2555 = T1;
  FUNINIT(x_1717F2555, 1,return_);
  x_1716F2556 = FREEREF(0);
  argsF2557 = YPfalse;
  argsF2557 = BOXFAB(argsF2557);
  T5 = CALL2(1,VARREF(YisaQ),x_1716F2556,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1716F2556,LITREF(lit_5),x_1717F2555);
    x_1716F2558 = T7;
    BOXVAL(argsF2557) = x_1716F2558;
    x_1716F2559 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1716F2559,x_1717F2555);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1717F2555,LITREF(lit_6),x_1716F2556);
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
  T36 = BOXVAL(argsF2557);
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

FUNCODEDEF(fun_x_1721_3) {
  P msg_,args_;
  P T0;
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
  P x_1720F2564;
  P x_1720F2563;
  P argsF2562;
  P x_1720F2561;
  P x_1721F2560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1721_3,1);
  x_1721F2560 = T1;
  FUNINIT(x_1721F2560, 1,return_);
  x_1720F2561 = FREEREF(0);
  argsF2562 = YPfalse;
  argsF2562 = BOXFAB(argsF2562);
  T5 = CALL2(1,VARREF(YisaQ),x_1720F2561,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1720F2561,LITREF(lit_18),x_1721F2560);
    x_1720F2563 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1720F2563,x_1721F2560);
    BOXVAL(argsF2562) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1720F2563);
    x_1720F2564 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1720F2564,x_1721F2560);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1721F2560,LITREF(lit_6),x_1720F2561);
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
  T39 = BOXVAL(argsF2562);
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

FUNCODEDEF(fun_x_1725_6) {
  P msg_,args_;
  P T0;
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
  P x_1724F2571;
  P x_1724F2570;
  P x_1724F2569;
  P argsF2568;
  P fF2567;
  P x_1724F2566;
  P x_1725F2565;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1725_6,1);
  x_1725F2565 = T1;
  FUNINIT(x_1725F2565, 1,return_);
  x_1724F2566 = FREEREF(0);
  fF2567 = YPfalse;
  fF2567 = BOXFAB(fF2567);
  argsF2568 = YPfalse;
  argsF2568 = BOXFAB(argsF2568);
  T7 = CALL2(1,VARREF(YisaQ),x_1724F2566,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1724F2566,LITREF(lit_21),x_1725F2565);
    x_1724F2569 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1724F2569,x_1725F2565);
    BOXVAL(fF2567) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1724F2569);
    x_1724F2570 = T12;
    BOXVAL(argsF2568) = x_1724F2570;
    x_1724F2571 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1724F2571,x_1725F2565);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1725F2565,LITREF(lit_6),x_1724F2566);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF2567);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF2568);
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

FUNCODEDEF(fun_x_1729_9) {
  P msg_,args_;
  P T0;
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
  P valF2572;
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
    valF2572 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF2572);
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
  P setsF2582;
  P loopF2581;
  P varF2580;
  P x_1728F2579;
  P x_1728F2578;
  P x_1728F2577;
  P prop_initsF2576;
  P xF2575;
  P x_1728F2574;
  P x_1729F2573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1729_9,1);
  x_1729F2573 = T1;
  FUNINIT(x_1729F2573, 1,return_);
  x_1728F2574 = FREEREF(0);
  xF2575 = YPfalse;
  xF2575 = BOXFAB(xF2575);
  prop_initsF2576 = YPfalse;
  prop_initsF2576 = BOXFAB(prop_initsF2576);
  T7 = CALL2(1,VARREF(YisaQ),x_1728F2574,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1728F2574,LITREF(lit_23),x_1729F2573);
    x_1728F2577 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1728F2577,x_1729F2573);
    BOXVAL(xF2575) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1728F2577);
    x_1728F2578 = T12;
    BOXVAL(prop_initsF2576) = x_1728F2578;
    x_1728F2579 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1728F2579,x_1729F2573);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1729F2573,LITREF(lit_6),x_1728F2574);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2580 = T17;
  T20 = FUNSHELL(1,fun_loop_10,2);
  loopF2581 = T20;
  FUNINIT(loopF2581, 2,varF2580,loopF2581);
  T22 = BOXVAL(prop_initsF2576);
  T21 = CALL2(0,loopF2581,Ynil,T22);
  T19 = T21;
  setsF2582 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF2580);
  T31 = BOXVAL(xF2575);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF2580);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,setsF2582,T32,Ynil);
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
  P gF2586;
  P g_argsF2585;
  P g_declsF2584;
  P tup36F2583;
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
    tup36F2583 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F2583,YPint((P)0));
    g_declsF2584 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F2583,YPint((P)1));
    g_argsF2585 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF2586 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF2586);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF2584);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF2586,g_argsF2585);
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
  P g_argsF2590;
  P g_declsF2589;
  P tup37F2588;
  P munchF2587;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF2587 = T1;
  FUNINIT(munchF2587, 1,munchF2587);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF2587,T7);
    tup37F2588 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F2588,YPint((P)0));
    g_declsF2589 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F2588,YPint((P)1));
    g_argsF2590 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF2590);
    T12 = CALL2(1,VARREF(Ytup),g_declsF2589,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1735_15) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1737_16) {
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
  P x_1736F2594;
  P amountF2593;
  P x_1736F2592;
  P x_1737F2591;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1737_16,1);
  x_1737F2591 = T1;
  FUNINIT(x_1737F2591, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1736F2592 = T3;
  amountF2593 = YPfalse;
  amountF2593 = BOXFAB(amountF2593);
  T6 = CALL2(1,VARREF(YisaQ),x_1736F2592,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1736F2592,x_1737F2591);
    BOXVAL(amountF2593) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1736F2592);
    x_1736F2594 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1736F2594,x_1737F2591);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1737F2591,LITREF(lit_6),x_1736F2592);
  }
  T12 = BOXVAL(amountF2593);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF2605;
  P g_placeF2604;
  P g_declsF2603;
  P tup39F2602;
  P x_1734F2601;
  P x_1734F2600;
  P x_1734F2599;
  P amountF2598;
  P placeF2597;
  P x_1734F2596;
  P x_1735F2595;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1735_15,1);
  x_1735F2595 = T1;
  FUNINIT(x_1735F2595, 1,return_);
  x_1734F2596 = FREEREF(0);
  placeF2597 = YPfalse;
  placeF2597 = BOXFAB(placeF2597);
  amountF2598 = YPfalse;
  amountF2598 = BOXFAB(amountF2598);
  T7 = CALL2(1,VARREF(YisaQ),x_1734F2596,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1734F2596,LITREF(lit_33),x_1735F2595);
    x_1734F2599 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1734F2599,x_1735F2595);
    BOXVAL(placeF2597) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1734F2599);
    x_1734F2600 = T12;
    BOXVAL(amountF2598) = x_1734F2600;
    x_1734F2601 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1734F2601,x_1735F2595);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1735F2595,LITREF(lit_6),x_1734F2596);
  }
  T18 = BOXVAL(placeF2597);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup39F2602 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F2602,YPint((P)0));
  g_declsF2603 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F2602,YPint((P)1));
  g_placeF2604 = T22;
  T25 = FUNFAB(fun_17,1,amountF2598);
  T24 = with_exit(T25);
  amountF2605 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2603,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF2604);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T37 = CALL1(1,VARREF(Ylst),g_placeF2604);
  T38 = CALL1(1,VARREF(Ylst),amountF2605);
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

FUNCODEDEF(fun_x_1743_20) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1745_21) {
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
  P x_1744F2609;
  P amountF2608;
  P x_1744F2607;
  P x_1745F2606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1745_21,1);
  x_1745F2606 = T1;
  FUNINIT(x_1745F2606, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1744F2607 = T3;
  amountF2608 = YPfalse;
  amountF2608 = BOXFAB(amountF2608);
  T6 = CALL2(1,VARREF(YisaQ),x_1744F2607,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1744F2607,x_1745F2606);
    BOXVAL(amountF2608) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1744F2607);
    x_1744F2609 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1744F2609,x_1745F2606);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1745F2606,LITREF(lit_6),x_1744F2607);
  }
  T12 = BOXVAL(amountF2608);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF2620;
  P g_placeF2619;
  P g_declsF2618;
  P tup41F2617;
  P x_1742F2616;
  P x_1742F2615;
  P x_1742F2614;
  P amountF2613;
  P placeF2612;
  P x_1742F2611;
  P x_1743F2610;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1743_20,1);
  x_1743F2610 = T1;
  FUNINIT(x_1743F2610, 1,return_);
  x_1742F2611 = FREEREF(0);
  placeF2612 = YPfalse;
  placeF2612 = BOXFAB(placeF2612);
  amountF2613 = YPfalse;
  amountF2613 = BOXFAB(amountF2613);
  T7 = CALL2(1,VARREF(YisaQ),x_1742F2611,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1742F2611,LITREF(lit_37),x_1743F2610);
    x_1742F2614 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1742F2614,x_1743F2610);
    BOXVAL(placeF2612) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1742F2614);
    x_1742F2615 = T12;
    BOXVAL(amountF2613) = x_1742F2615;
    x_1742F2616 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1742F2616,x_1743F2610);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1743F2610,LITREF(lit_6),x_1742F2611);
  }
  T18 = BOXVAL(placeF2612);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup41F2617 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F2617,YPint((P)0));
  g_declsF2618 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F2617,YPint((P)1));
  g_placeF2619 = T22;
  T25 = FUNFAB(fun_22,1,amountF2613);
  T24 = with_exit(T25);
  amountF2620 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2618,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T33 = CALL1(1,VARREF(Ylst),g_placeF2619);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T37 = CALL1(1,VARREF(Ylst),g_placeF2619);
  T38 = CALL1(1,VARREF(Ylst),amountF2620);
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

FUNCODEDEF(fun_x_1749_25) {
  P msg_,args_;
  P T0;
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
  P g_placeF2630;
  P g_declsF2629;
  P tup43F2628;
  P x_1748F2627;
  P x_1748F2626;
  P x_1748F2625;
  P valueF2624;
  P placeF2623;
  P x_1748F2622;
  P x_1749F2621;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1749_25,1);
  x_1749F2621 = T1;
  FUNINIT(x_1749F2621, 1,return_);
  x_1748F2622 = FREEREF(0);
  placeF2623 = YPfalse;
  placeF2623 = BOXFAB(placeF2623);
  valueF2624 = YPfalse;
  valueF2624 = BOXFAB(valueF2624);
  T7 = CALL2(1,VARREF(YisaQ),x_1748F2622,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1748F2622,LITREF(lit_41),x_1749F2621);
    x_1748F2625 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1748F2625,x_1749F2621);
    BOXVAL(placeF2623) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1748F2625);
    x_1748F2626 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1748F2626,x_1749F2621);
    BOXVAL(valueF2624) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1748F2626);
    x_1748F2627 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1748F2627,x_1749F2621);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1749F2621,LITREF(lit_6),x_1748F2622);
  }
  T20 = BOXVAL(placeF2623);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup43F2628 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup43F2628,YPint((P)0));
  g_declsF2629 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup43F2628,YPint((P)1));
  g_placeF2630 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2629,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T32 = CALL1(1,VARREF(Ylst),g_placeF2630);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T36 = CALL1(1,VARREF(Ylst),g_placeF2630);
  T38 = BOXVAL(valueF2624);
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

FUNCODEDEF(fun_x_1753_28) {
  P msg_,args_;
  P T0;
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
  P tmpF2644;
  P yg_placeF2643;
  P yg_declsF2642;
  P tup47F2641;
  P xg_placeF2640;
  P xg_declsF2639;
  P tup46F2638;
  P x_1752F2637;
  P x_1752F2636;
  P x_1752F2635;
  P yF2634;
  P xF2633;
  P x_1752F2632;
  P x_1753F2631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1753_28,1);
  x_1753F2631 = T1;
  FUNINIT(x_1753F2631, 1,return_);
  x_1752F2632 = FREEREF(0);
  xF2633 = YPfalse;
  xF2633 = BOXFAB(xF2633);
  yF2634 = YPfalse;
  yF2634 = BOXFAB(yF2634);
  T7 = CALL2(1,VARREF(YisaQ),x_1752F2632,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1752F2632,LITREF(lit_44),x_1753F2631);
    x_1752F2635 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1752F2635,x_1753F2631);
    BOXVAL(xF2633) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1752F2635);
    x_1752F2636 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1752F2636,x_1753F2631);
    BOXVAL(yF2634) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1752F2636);
    x_1752F2637 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1752F2637,x_1753F2631);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1753F2631,LITREF(lit_6),x_1752F2632);
  }
  T20 = BOXVAL(xF2633);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup46F2638 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup46F2638,YPint((P)0));
  xg_declsF2639 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup46F2638,YPint((P)1));
  xg_placeF2640 = T24;
  T27 = BOXVAL(yF2634);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup47F2641 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup47F2641,YPint((P)0));
  yg_declsF2642 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup47F2641,YPint((P)1));
  yg_placeF2643 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF2644 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF2644);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF2640);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF2639,yg_declsF2642,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF2640);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF2643);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF2643);
  T51 = CALL1(1,VARREF(Ylst),tmpF2644);
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

FUNCODEDEF(fun_x_1757_31) {
  P msg_,args_;
  P T0;
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
  P valF2654;
  P new_colF2653;
  P g_placeF2652;
  P g_declsF2651;
  P tup49F2650;
  P x_1756F2649;
  P x_1756F2648;
  P placeF2647;
  P x_1756F2646;
  P x_1757F2645;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1757_31,1);
  x_1757F2645 = T1;
  FUNINIT(x_1757F2645, 1,return_);
  x_1756F2646 = FREEREF(0);
  placeF2647 = YPfalse;
  placeF2647 = BOXFAB(placeF2647);
  T5 = CALL2(1,VARREF(YisaQ),x_1756F2646,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1756F2646,LITREF(lit_46),x_1757F2645);
    x_1756F2648 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1756F2648,x_1757F2645);
    BOXVAL(placeF2647) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1756F2648);
    x_1756F2649 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1756F2649,x_1757F2645);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1757F2645,LITREF(lit_6),x_1756F2646);
  }
  T15 = BOXVAL(placeF2647);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup49F2650 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup49F2650,YPint((P)0));
  g_declsF2651 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup49F2650,YPint((P)1));
  g_placeF2652 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF2653 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF2654 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T33 = CALL1(1,VARREF(Ylst),new_colF2653);
  T34 = CALL1(1,VARREF(Ylst),valF2654);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T38 = CALL1(1,VARREF(Ylst),g_placeF2652);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2651,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T42 = CALL1(1,VARREF(Ylst),g_placeF2652);
  T43 = CALL1(1,VARREF(Ylst),new_colF2653);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF2654);
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

FUNCODEDEF(fun_x_1761_34) {
  P msg_,args_;
  P T0;
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
  P g_placeF2664;
  P g_declsF2663;
  P tup51F2662;
  P x_1760F2661;
  P x_1760F2660;
  P x_1760F2659;
  P callF2658;
  P placeF2657;
  P x_1760F2656;
  P x_1761F2655;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1761_34,1);
  x_1761F2655 = T1;
  FUNINIT(x_1761F2655, 1,return_);
  x_1760F2656 = FREEREF(0);
  placeF2657 = YPfalse;
  placeF2657 = BOXFAB(placeF2657);
  callF2658 = YPfalse;
  callF2658 = BOXFAB(callF2658);
  T7 = CALL2(1,VARREF(YisaQ),x_1760F2656,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1760F2656,LITREF(lit_50),x_1761F2655);
    x_1760F2659 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1760F2659,x_1761F2655);
    BOXVAL(placeF2657) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1760F2659);
    x_1760F2660 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1760F2660,x_1761F2655);
    BOXVAL(callF2658) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1760F2660);
    x_1760F2661 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1760F2661,x_1761F2655);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1761F2655,LITREF(lit_6),x_1760F2656);
  }
  T20 = BOXVAL(placeF2657);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup51F2662 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup51F2662,YPint((P)0));
  g_declsF2663 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup51F2662,YPint((P)1));
  g_placeF2664 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),g_placeF2664);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2663,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T36 = CALL1(1,VARREF(Ylst),g_placeF2664);
  T38 = BOXVAL(callF2658);
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

FUNCODEDEF(fun_x_1765_37) {
  P msg_,args_;
  P T0;
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
  P x_1764F2671;
  P x_1764F2670;
  P x_1764F2669;
  P bodyF2668;
  P testF2667;
  P x_1764F2666;
  P x_1765F2665;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1765_37,1);
  x_1765F2665 = T1;
  FUNINIT(x_1765F2665, 1,return_);
  x_1764F2666 = FREEREF(0);
  testF2667 = YPfalse;
  testF2667 = BOXFAB(testF2667);
  bodyF2668 = YPfalse;
  bodyF2668 = BOXFAB(bodyF2668);
  T7 = CALL2(1,VARREF(YisaQ),x_1764F2666,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1764F2666,LITREF(lit_53),x_1765F2665);
    x_1764F2669 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1764F2669,x_1765F2665);
    BOXVAL(testF2667) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1764F2669);
    x_1764F2670 = T12;
    BOXVAL(bodyF2668) = x_1764F2670;
    x_1764F2671 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1764F2671,x_1765F2665);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1765F2665,LITREF(lit_6),x_1764F2666);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = BOXVAL(testF2667);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T26 = BOXVAL(bodyF2668);
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

FUNCODEDEF(fun_x_1769_40) {
  P msg_,args_;
  P T0;
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
  P x_1768F2678;
  P x_1768F2677;
  P x_1768F2676;
  P bodyF2675;
  P testF2674;
  P x_1768F2673;
  P x_1769F2672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1769_40,1);
  x_1769F2672 = T1;
  FUNINIT(x_1769F2672, 1,return_);
  x_1768F2673 = FREEREF(0);
  testF2674 = YPfalse;
  testF2674 = BOXFAB(testF2674);
  bodyF2675 = YPfalse;
  bodyF2675 = BOXFAB(bodyF2675);
  T7 = CALL2(1,VARREF(YisaQ),x_1768F2673,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1768F2673,LITREF(lit_57),x_1769F2672);
    x_1768F2676 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1768F2676,x_1769F2672);
    BOXVAL(testF2674) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1768F2676);
    x_1768F2677 = T12;
    BOXVAL(bodyF2675) = x_1768F2677;
    x_1768F2678 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1768F2678,x_1769F2672);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1769F2672,LITREF(lit_6),x_1768F2673);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF2674);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF2675);
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

FUNCODEDEF(fun_x_1777_43) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1779_44) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1781_45) {
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
  P x_1780F2680;
  P x_1781F2679;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1781_45,3);
  x_1781F2679 = T1;
  FUNINIT(x_1781F2679, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1780F2680 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1780F2680,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1780F2680,x_1781F2679);
  } else {
    T6 = CALL2(1,x_1781F2679,LITREF(lit_6),x_1780F2680);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1778F2686;
  P x_1778F2685;
  P restF2684;
  P xF2683;
  P x_1778F2682;
  P x_1779F2681;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1779_44,1);
  x_1779F2681 = T1;
  FUNINIT(x_1779F2681, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1778F2682 = T3;
  xF2683 = YPfalse;
  xF2683 = BOXFAB(xF2683);
  restF2684 = YPfalse;
  restF2684 = BOXFAB(restF2684);
  T8 = CALL2(1,VARREF(YisaQ),x_1778F2682,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1778F2682,x_1779F2681);
    BOXVAL(xF2683) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1778F2682);
    x_1778F2685 = T11;
    BOXVAL(restF2684) = x_1778F2685;
    x_1778F2686 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1778F2686,x_1779F2681);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1779F2681,LITREF(lit_6),x_1778F2682);
  }
  T16 = FUNFAB(fun_46,2,xF2683,restF2684);
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
  P x_1776F2691;
  P x_1776F2690;
  P restF2689;
  P x_1776F2688;
  P x_1777F2687;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1777_43,1);
  x_1777F2687 = T1;
  FUNINIT(x_1777F2687, 1,return_);
  x_1776F2688 = FREEREF(0);
  restF2689 = YPfalse;
  restF2689 = BOXFAB(restF2689);
  T5 = CALL2(1,VARREF(YisaQ),x_1776F2688,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1776F2688,LITREF(lit_59),x_1777F2687);
    x_1776F2690 = T7;
    BOXVAL(restF2689) = x_1776F2690;
    x_1776F2691 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1776F2691,x_1777F2687);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1777F2687,LITREF(lit_6),x_1776F2688);
  }
  T12 = FUNFAB(fun_47,1,restF2689);
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

FUNCODEDEF(fun_x_1789_50) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1791_51) {
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

FUNCODEDEF(fun_x_1793_52) {
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
  P x_1792F2693;
  P x_1793F2692;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1793_52,3);
  x_1793F2692 = T1;
  FUNINIT(x_1793F2692, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1792F2693 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1792F2693,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1792F2693,x_1793F2692);
  } else {
    T6 = CALL2(1,x_1793F2692,LITREF(lit_6),x_1792F2693);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1790F2699;
  P x_1790F2698;
  P restF2697;
  P xF2696;
  P x_1790F2695;
  P x_1791F2694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1791_51,1);
  x_1791F2694 = T1;
  FUNINIT(x_1791F2694, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1790F2695 = T3;
  xF2696 = YPfalse;
  xF2696 = BOXFAB(xF2696);
  restF2697 = YPfalse;
  restF2697 = BOXFAB(restF2697);
  T8 = CALL2(1,VARREF(YisaQ),x_1790F2695,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1790F2695,x_1791F2694);
    BOXVAL(xF2696) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1790F2695);
    x_1790F2698 = T11;
    BOXVAL(restF2697) = x_1790F2698;
    x_1790F2699 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1790F2699,x_1791F2694);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1791F2694,LITREF(lit_6),x_1790F2695);
  }
  T16 = FUNFAB(fun_53,2,xF2696,restF2697);
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
  P x_1788F2704;
  P x_1788F2703;
  P restF2702;
  P x_1788F2701;
  P x_1789F2700;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1789_50,1);
  x_1789F2700 = T1;
  FUNINIT(x_1789F2700, 1,return_);
  x_1788F2701 = FREEREF(0);
  restF2702 = YPfalse;
  restF2702 = BOXFAB(restF2702);
  T5 = CALL2(1,VARREF(YisaQ),x_1788F2701,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1788F2701,LITREF(lit_64),x_1789F2700);
    x_1788F2703 = T7;
    BOXVAL(restF2702) = x_1788F2703;
    x_1788F2704 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1788F2704,x_1789F2700);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1789F2700,LITREF(lit_6),x_1788F2701);
  }
  T12 = FUNFAB(fun_54,1,restF2702);
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

FUNCODEDEF(fun_x_1799_57) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1801_58) {
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
  P x_1800F2710;
  P x_1800F2709;
  P bodyF2708;
  P condF2707;
  P x_1800F2706;
  P x_1801F2705;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1801_58,2);
  x_1801F2705 = T1;
  FUNINIT(x_1801F2705, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1800F2706 = T3;
  condF2707 = YPfalse;
  condF2707 = BOXFAB(condF2707);
  bodyF2708 = YPfalse;
  bodyF2708 = BOXFAB(bodyF2708);
  T9 = CALL2(1,VARREF(YisaQ),x_1800F2706,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1800F2706,x_1801F2705);
    BOXVAL(condF2707) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1800F2706);
    x_1800F2709 = T12;
    BOXVAL(bodyF2708) = x_1800F2709;
    x_1800F2710 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1800F2710,x_1801F2705);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1801F2705,LITREF(lit_6),x_1800F2706);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF2707);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T23 = BOXVAL(bodyF2708);
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
  P x_1798F2715;
  P x_1798F2714;
  P casesF2713;
  P x_1798F2712;
  P x_1799F2711;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1799_57,1);
  x_1799F2711 = T1;
  FUNINIT(x_1799F2711, 1,return_);
  x_1798F2712 = FREEREF(0);
  casesF2713 = YPfalse;
  casesF2713 = BOXFAB(casesF2713);
  T5 = CALL2(1,VARREF(YisaQ),x_1798F2712,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1798F2712,LITREF(lit_68),x_1799F2711);
    x_1798F2714 = T7;
    BOXVAL(casesF2713) = x_1798F2714;
    x_1798F2715 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1798F2715,x_1799F2711);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1799F2711,LITREF(lit_6),x_1798F2712);
  }
  T13 = BOXVAL(casesF2713);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_59,1,casesF2713);
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

FUNCODEDEF(fun_x_1807_62) {
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

FUNCODEDEF(fun_x_1809_63) {
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
  P x_1808F2719;
  P valuesF2718;
  P x_1808F2717;
  P x_1809F2716;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1809_63,2);
  x_1809F2716 = T1;
  FUNINIT(x_1809F2716, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1808F2717 = T3;
  valuesF2718 = YPfalse;
  valuesF2718 = BOXFAB(valuesF2718);
  T6 = CALL2(1,VARREF(YisaQ),x_1808F2717,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF2718) = x_1808F2717;
    x_1808F2719 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1808F2719,x_1809F2716);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1809F2716,LITREF(lit_6),x_1808F2717);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T16 = FUNFAB(fun_64,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF2718);
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
  P x_1806F2725;
  P x_1806F2724;
  P bodyF2723;
  P condF2722;
  P x_1806F2721;
  P x_1807F2720;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1807_62,2);
  x_1807F2720 = T1;
  FUNINIT(x_1807F2720, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1806F2721 = T3;
  condF2722 = YPfalse;
  condF2722 = BOXFAB(condF2722);
  bodyF2723 = YPfalse;
  bodyF2723 = BOXFAB(bodyF2723);
  T8 = CALL2(1,VARREF(YisaQ),x_1806F2721,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1806F2721,x_1807F2720);
    BOXVAL(condF2722) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1806F2721);
    x_1806F2724 = T11;
    BOXVAL(bodyF2723) = x_1806F2724;
    x_1806F2725 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1806F2725,x_1807F2720);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1807F2720,LITREF(lit_6),x_1806F2721);
  }
  T17 = BOXVAL(condF2722);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T20 = BOXVAL(bodyF2723);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_65,5,FREEREF(0),condF2722,FREEREF(1),FREEREF(2),bodyF2723);
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

FUNCODEDEF(fun_x_1813_68) {
  P msg_,args_;
  P T0;
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
  P tst_varF2736;
  P val_varF2735;
  P x_1812F2734;
  P x_1812F2733;
  P x_1812F2732;
  P x_1812F2731;
  P casesF2730;
  P tstF2729;
  P valF2728;
  P x_1812F2727;
  P x_1813F2726;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1813_68,1);
  x_1813F2726 = T1;
  FUNINIT(x_1813F2726, 1,return_);
  x_1812F2727 = FREEREF(0);
  valF2728 = YPfalse;
  valF2728 = BOXFAB(valF2728);
  tstF2729 = YPfalse;
  tstF2729 = BOXFAB(tstF2729);
  casesF2730 = YPfalse;
  casesF2730 = BOXFAB(casesF2730);
  T9 = CALL2(1,VARREF(YisaQ),x_1812F2727,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1812F2727,LITREF(lit_81),x_1813F2726);
    x_1812F2731 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1812F2731,x_1813F2726);
    BOXVAL(valF2728) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1812F2731);
    x_1812F2732 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1812F2732,x_1813F2726);
    BOXVAL(tstF2729) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1812F2732);
    x_1812F2733 = T17;
    BOXVAL(casesF2730) = x_1812F2733;
    x_1812F2734 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1812F2734,x_1813F2726);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1813F2726,LITREF(lit_6),x_1812F2727);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF2735 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF2736 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF2735);
  T33 = BOXVAL(valF2728);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF2736);
  T38 = BOXVAL(tstF2729);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF2730);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF2735,tst_varF2736,T41);
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

FUNCODEDEF(fun_x_1817_71) {
  P msg_,args_;
  P T0;
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
  P x_1816F2743;
  P x_1816F2742;
  P x_1816F2741;
  P casesF2740;
  P valF2739;
  P x_1816F2738;
  P x_1817F2737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1817_71,1);
  x_1817F2737 = T1;
  FUNINIT(x_1817F2737, 1,return_);
  x_1816F2738 = FREEREF(0);
  valF2739 = YPfalse;
  valF2739 = BOXFAB(valF2739);
  casesF2740 = YPfalse;
  casesF2740 = BOXFAB(casesF2740);
  T7 = CALL2(1,VARREF(YisaQ),x_1816F2738,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1816F2738,LITREF(lit_83),x_1817F2737);
    x_1816F2741 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1816F2741,x_1817F2737);
    BOXVAL(valF2739) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1816F2741);
    x_1816F2742 = T12;
    BOXVAL(casesF2740) = x_1816F2742;
    x_1816F2743 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1816F2743,x_1817F2737);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1817F2737,LITREF(lit_6),x_1816F2738);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T19 = BOXVAL(valF2739);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T21 = BOXVAL(casesF2740);
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

FUNCODEDEF(fun_x_1821_74) {
  P msg_,args_;
  P T0;
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
  P tmpF2745;
  P tmpF2744;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF2744 = T2;
  if (tmpF2744 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF2745 = T1;
  if (tmpF2745 != YPfalse) {
    T5 = tmpF2745;
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
  P yF2748;
  P spliceQF2747;
  P varF2746;
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
    varF2746 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF2746,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF2746;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_78;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF2747 = T10;
      T14 = FUNFAB(fun_79,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF2748 = T13;
      if (spliceQF2747 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
        T19 = CALL1(1,VARREF(Yhead),yF2748);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
        T24 = CALL1(1,VARREF(Ytail),yF2748);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF2748;
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
  P argsF2761;
  P exprF2760;
  P varsF2759;
  P walk_opF2758;
  P rest_opQF2757;
  P spliceF2756;
  P x_1820F2755;
  P x_1820F2754;
  P x_1820F2753;
  P argsF2752;
  P fF2751;
  P x_1820F2750;
  P x_1821F2749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1821_74,1);
  x_1821F2749 = T1;
  FUNINIT(x_1821F2749, 1,return_);
  x_1820F2750 = FREEREF(0);
  fF2751 = YPfalse;
  fF2751 = BOXFAB(fF2751);
  argsF2752 = YPfalse;
  argsF2752 = BOXFAB(argsF2752);
  T7 = CALL2(1,VARREF(YisaQ),x_1820F2750,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1820F2750,LITREF(lit_86),x_1821F2749);
    x_1820F2753 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1820F2753,x_1821F2749);
    BOXVAL(fF2751) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1820F2753);
    x_1820F2754 = T12;
    BOXVAL(argsF2752) = x_1820F2754;
    x_1820F2755 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1820F2755,x_1821F2749);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1821F2749,LITREF(lit_6),x_1820F2750);
  }
  T17 = fun_splice_76;
  spliceF2756 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_77,1);
  rest_opQF2757 = T18;
  T19 = FUNSHELL(1,fun_walk_op_80,2);
  walk_opF2758 = T19;
  FUNINIT(rest_opQF2757, 1,rest_opQF2757);
  FUNINIT(walk_opF2758, 2,walk_opF2758,spliceF2756);
  T22 = BOXVAL(argsF2752);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF2751);
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
      T41 = BOXVAL(fF2751);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF2759 = T43;
    T48 = BOXVAL(fF2751);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF2752);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF2758,varsF2759,T46);
    exprF2760 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF2759);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF2752);
    T55 = CALL1(1,rest_opQF2757,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_100);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF2761 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T59 = CALL1(1,VARREF(Ylst),argsF2761);
    T60 = CALL1(1,VARREF(Ylst),exprF2760);
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

FUNCODEDEF(fun_x_1829_83) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1833_84) {
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
  P varF2772;
  P x_1832F2771;
  P x_1832F2770;
  P x_1832F2769;
  P x_1832F2768;
  P x_1832F2767;
  P restF2766;
  P thenF2765;
  P patF2764;
  P x_1832F2763;
  P x_1833F2762;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1833_84,1);
  x_1833F2762 = T1;
  FUNINIT(x_1833F2762, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1832F2763 = T3;
  patF2764 = YPfalse;
  patF2764 = BOXFAB(patF2764);
  thenF2765 = YPfalse;
  thenF2765 = BOXFAB(thenF2765);
  restF2766 = YPfalse;
  restF2766 = BOXFAB(restF2766);
  T10 = CALL2(1,VARREF(YisaQ),x_1832F2763,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1832F2763,x_1833F2762);
    x_1832F2767 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1832F2767,x_1833F2762);
    BOXVAL(patF2764) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1832F2767);
    x_1832F2768 = T15;
    BOXVAL(thenF2765) = x_1832F2768;
    x_1832F2769 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1832F2769,x_1833F2762);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1832F2763);
    x_1832F2770 = T18;
    BOXVAL(restF2766) = x_1832F2770;
    x_1832F2771 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1832F2771,x_1833F2762);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1833F2762,LITREF(lit_6),x_1832F2763);
  }
  T24 = BOXVAL(patF2764);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T27 = BOXVAL(thenF2765);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF2772 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF2772);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
    T45 = BOXVAL(patF2764);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF2772);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T50 = BOXVAL(thenF2765);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
    T54 = CALL1(1,VARREF(Ylst),varF2772);
    T55 = BOXVAL(restF2766);
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

FUNCODEDEF(fun_x_1831_86) {
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
  P x_1830F2774;
  P x_1831F2773;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1831_86,3);
  x_1831F2773 = T1;
  FUNINIT(x_1831F2773, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1830F2774 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1830F2774,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1830F2774,x_1831F2773);
  } else {
    T6 = CALL2(1,x_1831F2773,LITREF(lit_6),x_1830F2774);
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
  P x_1828F2781;
  P x_1828F2780;
  P x_1828F2779;
  P casesF2778;
  P expF2777;
  P x_1828F2776;
  P x_1829F2775;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1829_83,1);
  x_1829F2775 = T1;
  FUNINIT(x_1829F2775, 1,return_);
  x_1828F2776 = FREEREF(0);
  expF2777 = YPfalse;
  expF2777 = BOXFAB(expF2777);
  casesF2778 = YPfalse;
  casesF2778 = BOXFAB(casesF2778);
  T7 = CALL2(1,VARREF(YisaQ),x_1828F2776,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1828F2776,LITREF(lit_102),x_1829F2775);
    x_1828F2779 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1828F2779,x_1829F2775);
    BOXVAL(expF2777) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1828F2779);
    x_1828F2780 = T12;
    BOXVAL(casesF2778) = x_1828F2780;
    x_1828F2781 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1828F2781,x_1829F2775);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1829F2775,LITREF(lit_6),x_1828F2776);
  }
  T17 = FUNFAB(fun_87,2,casesF2778,expF2777);
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

FUNCODEDEF(fun_x_1837_90) {
  P msg_,args_;
  P T0;
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
  P x_1836F2790;
  P x_1836F2789;
  P x_1836F2788;
  P x_1836F2787;
  P argsF2786;
  P messageF2785;
  P condF2784;
  P x_1836F2783;
  P x_1837F2782;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1837_90,1);
  x_1837F2782 = T1;
  FUNINIT(x_1837F2782, 1,return_);
  x_1836F2783 = FREEREF(0);
  condF2784 = YPfalse;
  condF2784 = BOXFAB(condF2784);
  messageF2785 = YPfalse;
  messageF2785 = BOXFAB(messageF2785);
  argsF2786 = YPfalse;
  argsF2786 = BOXFAB(argsF2786);
  T9 = CALL2(1,VARREF(YisaQ),x_1836F2783,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1836F2783,LITREF(lit_109),x_1837F2782);
    x_1836F2787 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1836F2787,x_1837F2782);
    BOXVAL(condF2784) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1836F2787);
    x_1836F2788 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1836F2788,x_1837F2782);
    BOXVAL(messageF2785) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1836F2788);
    x_1836F2789 = T17;
    BOXVAL(argsF2786) = x_1836F2789;
    x_1836F2790 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1836F2790,x_1837F2782);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1837F2782,LITREF(lit_6),x_1836F2783);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T27 = BOXVAL(condF2784);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF2785);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF2786);
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

FUNCODEDEF(fun_x_1845_93) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1847_94) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1849_95) {
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
  P x_1848F2797;
  P x_1848F2796;
  P x_1848F2795;
  P valF2794;
  P keyF2793;
  P x_1848F2792;
  P x_1849F2791;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1849_95,3);
  x_1849F2791 = T1;
  FUNINIT(x_1849F2791, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1848F2792 = T3;
  keyF2793 = YPfalse;
  keyF2793 = BOXFAB(keyF2793);
  valF2794 = YPfalse;
  valF2794 = BOXFAB(valF2794);
  T8 = CALL2(1,VARREF(YisaQ),x_1848F2792,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1848F2792,LITREF(lit_47),x_1849F2791);
    x_1848F2795 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1848F2795,x_1849F2791);
    BOXVAL(keyF2793) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1848F2795);
    x_1848F2796 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1848F2796,x_1849F2791);
    BOXVAL(valF2794) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1848F2796);
    x_1848F2797 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1848F2797,x_1849F2791);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1849F2791,LITREF(lit_6),x_1848F2792);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T24 = BOXVAL(keyF2793);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF2794);
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
  P stateF2804;
  P x_1846F2803;
  P x_1846F2802;
  P expF2801;
  P varF2800;
  P x_1846F2799;
  P x_1847F2798;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1847_94,1);
  x_1847F2798 = T1;
  FUNINIT(x_1847F2798, 1,return_);
  x_1846F2799 = FREEREF(0);
  varF2800 = YPfalse;
  varF2800 = BOXFAB(varF2800);
  expF2801 = YPfalse;
  expF2801 = BOXFAB(expF2801);
  T7 = CALL2(1,VARREF(YisaQ),x_1846F2799,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1846F2799,x_1847F2798);
    BOXVAL(varF2800) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1846F2799);
    x_1846F2802 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1846F2802,x_1847F2798);
    BOXVAL(expF2801) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1846F2802);
    x_1846F2803 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1846F2803,x_1847F2798);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1847F2798,LITREF(lit_6),x_1846F2799);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF2804 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T22 = CALL1(1,VARREF(Ylst),stateF2804);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_119));
  T27 = BOXVAL(expF2801);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(2));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T31 = CALL1(1,VARREF(Ylst),stateF2804);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(3));
  T34 = FUNFAB(fun_96,2,varF2800,stateF2804);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(4));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
  T38 = CALL1(1,VARREF(Ylst),stateF2804);
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
  P clauseF2806;
  P loopF2805;
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
    loopF2805 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
    T6 = CALL1(1,VARREF(Ylst),loopF2805);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF2805);
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
    clauseF2806 = T23;
    T25 = FUNFAB(fun_97,7,clauseF2806,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF2816;
  P x_1844F2815;
  P x_1844F2814;
  P x_1844F2813;
  P x_1844F2812;
  P x_1844F2811;
  P bodyF2810;
  P clausesF2809;
  P x_1844F2808;
  P x_1845F2807;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1845_93,1);
  x_1845F2807 = T1;
  FUNINIT(x_1845F2807, 1,return_);
  x_1844F2808 = FREEREF(0);
  clausesF2809 = YPfalse;
  clausesF2809 = BOXFAB(clausesF2809);
  bodyF2810 = YPfalse;
  bodyF2810 = BOXFAB(bodyF2810);
  T7 = CALL2(1,VARREF(YisaQ),x_1844F2808,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1844F2808,LITREF(lit_111),x_1845F2807);
    x_1844F2811 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1844F2811,x_1845F2807);
    x_1844F2812 = T11;
    BOXVAL(clausesF2809) = x_1844F2812;
    x_1844F2813 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1844F2813,x_1845F2807);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1844F2811);
    x_1844F2814 = T14;
    BOXVAL(bodyF2810) = x_1844F2814;
    x_1844F2815 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1844F2815,x_1845F2807);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1845F2807,LITREF(lit_6),x_1844F2808);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF2816 = T19;
  FUNINIT(grokF2816, 2,bodyF2810,grokF2816);
  T21 = BOXVAL(clausesF2809);
  T20 = CALL5(0,grokF2816,T21,Ynil,Ynil,Ynil,Ynil);
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

FUNCODEDEF(fun_x_1853_101) {
  P msg_,args_;
  P T0;
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
  P x_1852F2823;
  P x_1852F2822;
  P x_1852F2821;
  P bodyF2820;
  P testF2819;
  P x_1852F2818;
  P x_1853F2817;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1853_101,1);
  x_1853F2817 = T1;
  FUNINIT(x_1853F2817, 1,return_);
  x_1852F2818 = FREEREF(0);
  testF2819 = YPfalse;
  testF2819 = BOXFAB(testF2819);
  bodyF2820 = YPfalse;
  bodyF2820 = BOXFAB(bodyF2820);
  T7 = CALL2(1,VARREF(YisaQ),x_1852F2818,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1852F2818,LITREF(lit_126),x_1853F2817);
    x_1852F2821 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1852F2821,x_1853F2817);
    BOXVAL(testF2819) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1852F2821);
    x_1852F2822 = T12;
    BOXVAL(bodyF2820) = x_1852F2822;
    x_1852F2823 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1852F2823,x_1853F2817);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1853F2817,LITREF(lit_6),x_1852F2818);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T24 = BOXVAL(testF2819);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF2820);
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

FUNCODEDEF(fun_x_1857_104) {
  P msg_,args_;
  P T0;
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
  P x_1856F2830;
  P x_1856F2829;
  P x_1856F2828;
  P bodyF2827;
  P testF2826;
  P x_1856F2825;
  P x_1857F2824;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1857_104,1);
  x_1857F2824 = T1;
  FUNINIT(x_1857F2824, 1,return_);
  x_1856F2825 = FREEREF(0);
  testF2826 = YPfalse;
  testF2826 = BOXFAB(testF2826);
  bodyF2827 = YPfalse;
  bodyF2827 = BOXFAB(bodyF2827);
  T7 = CALL2(1,VARREF(YisaQ),x_1856F2825,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1856F2825,LITREF(lit_129),x_1857F2824);
    x_1856F2828 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1856F2828,x_1857F2824);
    BOXVAL(testF2826) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1856F2828);
    x_1856F2829 = T12;
    BOXVAL(bodyF2827) = x_1856F2829;
    x_1856F2830 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1856F2830,x_1857F2824);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1857F2824,LITREF(lit_6),x_1856F2825);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T24 = BOXVAL(testF2826);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF2827);
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

FUNCODEDEF(fun_x_1861_107) {
  P msg_,args_;
  P T0;
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
  P x_1860F2837;
  P x_1860F2836;
  P x_1860F2835;
  P expF2834;
  P bindingF2833;
  P x_1860F2832;
  P x_1861F2831;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1861_107,1);
  x_1861F2831 = T1;
  FUNINIT(x_1861F2831, 1,return_);
  x_1860F2832 = FREEREF(0);
  bindingF2833 = YPfalse;
  bindingF2833 = BOXFAB(bindingF2833);
  expF2834 = YPfalse;
  expF2834 = BOXFAB(expF2834);
  T7 = CALL2(1,VARREF(YisaQ),x_1860F2832,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1860F2832,LITREF(lit_131),x_1861F2831);
    x_1860F2835 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1860F2835,x_1861F2831);
    BOXVAL(bindingF2833) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1860F2835);
    x_1860F2836 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1860F2836,x_1861F2831);
    BOXVAL(expF2834) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1860F2836);
    x_1860F2837 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1860F2837,x_1861F2831);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1861F2831,LITREF(lit_6),x_1860F2832);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T21 = BOXVAL(bindingF2833);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF2834);
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

FUNCODEDEF(fun_x_1869_110) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1873_111) {
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
  P old_valueF2849;
  P nameF2848;
  P x_1872F2847;
  P x_1872F2846;
  P x_1872F2845;
  P x_1872F2844;
  P x_1872F2843;
  P restF2842;
  P valueF2841;
  P varF2840;
  P x_1872F2839;
  P x_1873F2838;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1873_111,2);
  x_1873F2838 = T1;
  FUNINIT(x_1873F2838, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1872F2839 = T3;
  varF2840 = YPfalse;
  varF2840 = BOXFAB(varF2840);
  valueF2841 = YPfalse;
  valueF2841 = BOXFAB(valueF2841);
  restF2842 = YPfalse;
  restF2842 = BOXFAB(restF2842);
  T10 = CALL2(1,VARREF(YisaQ),x_1872F2839,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1872F2839,x_1873F2838);
    x_1872F2843 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1872F2843,x_1873F2838);
    BOXVAL(varF2840) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1872F2843);
    x_1872F2844 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1872F2844,x_1873F2838);
    BOXVAL(valueF2841) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1872F2844);
    x_1872F2845 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1872F2845,x_1873F2838);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1872F2839);
    x_1872F2846 = T20;
    BOXVAL(restF2842) = x_1872F2846;
    x_1872F2847 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1872F2847,x_1873F2838);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1873F2838,LITREF(lit_6),x_1872F2839);
  }
  T26 = BOXVAL(varF2840);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF2848 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF2849 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF2849);
  T36 = CALL1(1,VARREF(Ylst),nameF2848);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T46 = CALL1(1,VARREF(Ylst),nameF2848);
  T48 = BOXVAL(valueF2841);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T54 = BOXVAL(restF2842);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T59 = CALL1(1,VARREF(Ylst),nameF2848);
  T60 = CALL1(1,VARREF(Ylst),old_valueF2849);
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

FUNCODEDEF(fun_x_1871_113) {
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
  P x_1870F2851;
  P x_1871F2850;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1871_113,3);
  x_1871F2850 = T1;
  FUNINIT(x_1871F2850, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1870F2851 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1870F2851,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1870F2851,x_1871F2850);
  } else {
    T6 = CALL2(1,x_1871F2850,LITREF(lit_6),x_1870F2851);
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
  P x_1868F2858;
  P x_1868F2857;
  P x_1868F2856;
  P bodyF2855;
  P bindingsF2854;
  P x_1868F2853;
  P x_1869F2852;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1869_110,1);
  x_1869F2852 = T1;
  FUNINIT(x_1869F2852, 1,return_);
  x_1868F2853 = FREEREF(0);
  bindingsF2854 = YPfalse;
  bindingsF2854 = BOXFAB(bindingsF2854);
  bodyF2855 = YPfalse;
  bodyF2855 = BOXFAB(bodyF2855);
  T7 = CALL2(1,VARREF(YisaQ),x_1868F2853,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1868F2853,LITREF(lit_134),x_1869F2852);
    x_1868F2856 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1868F2856,x_1869F2852);
    BOXVAL(bindingsF2854) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1868F2856);
    x_1868F2857 = T12;
    BOXVAL(bodyF2855) = x_1868F2857;
    x_1868F2858 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1868F2858,x_1869F2852);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1869F2852,LITREF(lit_6),x_1868F2853);
  }
  T17 = FUNFAB(fun_114,2,bindingsF2854,bodyF2855);
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

FUNCODEDEF(fun_x_1877_117) {
  P msg_,args_;
  P T0;
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
  P vnamF2868;
  P typF2867;
  P namF2866;
  P x_1876F2865;
  P x_1876F2864;
  P x_1876F2863;
  P valueF2862;
  P varF2861;
  P x_1876F2860;
  P x_1877F2859;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1877_117,1);
  x_1877F2859 = T1;
  FUNINIT(x_1877F2859, 1,return_);
  x_1876F2860 = FREEREF(0);
  varF2861 = YPfalse;
  varF2861 = BOXFAB(varF2861);
  valueF2862 = YPfalse;
  valueF2862 = BOXFAB(valueF2862);
  T7 = CALL2(1,VARREF(YisaQ),x_1876F2860,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1876F2860,LITREF(lit_140),x_1877F2859);
    x_1876F2863 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1876F2863,x_1877F2859);
    BOXVAL(varF2861) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1876F2863);
    x_1876F2864 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1876F2864,x_1877F2859);
    BOXVAL(valueF2862) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1876F2864);
    x_1876F2865 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1876F2865,x_1877F2859);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1877F2859,LITREF(lit_6),x_1876F2860);
  }
  T20 = BOXVAL(varF2861);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF2866 = T19;
  T23 = BOXVAL(varF2861);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF2867 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_141),namF2866,LITREF(lit_142));
  vnamF2868 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T31 = CALL1(1,VARREF(Ylst),vnamF2868);
  T33 = BOXVAL(valueF2862);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T37 = CALL1(1,VARREF(Ylst),namF2866);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T41 = CALL1(1,VARREF(Ylst),typF2867);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF2868);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF2866);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T53 = CALL1(1,VARREF(Ylst),typF2867);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T57 = CALL1(1,VARREF(Ylst),vnamF2868);
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

FUNCODEDEF(fun_x_1881_120) {
  P msg_,args_;
  P T0;
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
  P x_1880F2873;
  P x_1880F2872;
  P bodyF2871;
  P x_1880F2870;
  P x_1881F2869;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1881_120,1);
  x_1881F2869 = T1;
  FUNINIT(x_1881F2869, 1,return_);
  x_1880F2870 = FREEREF(0);
  bodyF2871 = YPfalse;
  bodyF2871 = BOXFAB(bodyF2871);
  T5 = CALL2(1,VARREF(YisaQ),x_1880F2870,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1880F2870,LITREF(lit_147),x_1881F2869);
    x_1880F2872 = T7;
    BOXVAL(bodyF2871) = x_1880F2872;
    x_1880F2873 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1880F2873,x_1881F2869);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1881F2869,LITREF(lit_6),x_1880F2870);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF2871);
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

FUNCODEDEF(fun_x_1885_123) {
  P msg_,args_;
  P T0;
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
  P x_1884F2878;
  P x_1884F2877;
  P namesF2876;
  P x_1884F2875;
  P x_1885F2874;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1885_123,1);
  x_1885F2874 = T1;
  FUNINIT(x_1885F2874, 1,return_);
  x_1884F2875 = FREEREF(0);
  namesF2876 = YPfalse;
  namesF2876 = BOXFAB(namesF2876);
  T5 = CALL2(1,VARREF(YisaQ),x_1884F2875,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1884F2875,LITREF(lit_150),x_1885F2874);
    x_1884F2877 = T7;
    BOXVAL(namesF2876) = x_1884F2877;
    x_1884F2878 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1884F2878,x_1885F2874);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1885F2874,LITREF(lit_6),x_1884F2875);
  }
  T13 = BOXVAL(namesF2876);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF2876);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T28 = BOXVAL(namesF2876);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
    T33 = BOXVAL(namesF2876);
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

FUNCODEDEF(fun_x_1907_126) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1925_127) {
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
  P x_1924F2882;
  P nameF2881;
  P x_1924F2880;
  P x_1925F2879;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1925_127,1);
  x_1925F2879 = T1;
  FUNINIT(x_1925F2879, 1,return_);
  x_1924F2880 = FREEREF(0);
  nameF2881 = YPfalse;
  nameF2881 = BOXFAB(nameF2881);
  T5 = CALL2(1,VARREF(YisaQ),x_1924F2880,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1924F2880,x_1925F2879);
    BOXVAL(nameF2881) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1924F2880);
    x_1924F2882 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1924F2882,x_1925F2879);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1925F2879,LITREF(lit_6),x_1924F2880);
  }
  T13 = BOXVAL(nameF2881);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF2881);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
    T21 = BOXVAL(nameF2881);
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

FUNCODEDEF(fun_x_1922_129) {
  P msg_,args_;
  P x_1923F2883;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1923F2883 = FREEREF(0);
  T3 = FUNFAB(fun_128,1,x_1923F2883);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  P return_;
  P x_1921F2890;
  P x_1921F2889;
  P x_1921F2888;
  P restF2887;
  P nameF2886;
  P x_1921F2885;
  P x_1922F2884;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1922_129,2);
  x_1922F2884 = T1;
  FUNINIT(x_1922F2884, 2,FREEREF(0),return_);
  x_1921F2885 = FREEREF(0);
  nameF2886 = YPfalse;
  nameF2886 = BOXFAB(nameF2886);
  restF2887 = YPfalse;
  restF2887 = BOXFAB(restF2887);
  T7 = CALL2(1,VARREF(YisaQ),x_1921F2885,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1921F2885,LITREF(lit_160),x_1922F2884);
    x_1921F2888 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1921F2888,x_1922F2884);
    BOXVAL(nameF2886) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1921F2888);
    x_1921F2889 = T12;
    BOXVAL(restF2887) = x_1921F2889;
    x_1921F2890 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1921F2890,x_1922F2884);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1922F2884,LITREF(lit_6),x_1921F2885);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF2886);
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

FUNCODEDEF(fun_x_1919_131) {
  P msg_,args_;
  P x_1920F2891;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1920F2891 = FREEREF(0);
  T3 = FUNFAB(fun_130,2,x_1920F2891,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_132) {
  P return_;
  P x_1918F2898;
  P x_1918F2897;
  P x_1918F2896;
  P restF2895;
  P nameF2894;
  P x_1918F2893;
  P x_1919F2892;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1919_131,3);
  x_1919F2892 = T1;
  FUNINIT(x_1919F2892, 3,FREEREF(0),FREEREF(1),return_);
  x_1918F2893 = FREEREF(0);
  nameF2894 = YPfalse;
  nameF2894 = BOXFAB(nameF2894);
  restF2895 = YPfalse;
  restF2895 = BOXFAB(restF2895);
  T7 = CALL2(1,VARREF(YisaQ),x_1918F2893,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1918F2893,LITREF(lit_161),x_1919F2892);
    x_1918F2896 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1918F2896,x_1919F2892);
    BOXVAL(nameF2894) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1918F2896);
    x_1918F2897 = T12;
    BOXVAL(restF2895) = x_1918F2897;
    x_1918F2898 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1918F2898,x_1919F2892);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1919F2892,LITREF(lit_6),x_1918F2893);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF2894);
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

FUNCODEDEF(fun_x_1916_133) {
  P msg_,args_;
  P x_1917F2899;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1917F2899 = FREEREF(0);
  T3 = FUNFAB(fun_132,2,x_1917F2899,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  P return_;
  P x_1915F2906;
  P x_1915F2905;
  P x_1915F2904;
  P restF2903;
  P nameF2902;
  P x_1915F2901;
  P x_1916F2900;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1916_133,3);
  x_1916F2900 = T1;
  FUNINIT(x_1916F2900, 3,FREEREF(0),FREEREF(1),return_);
  x_1915F2901 = FREEREF(0);
  nameF2902 = YPfalse;
  nameF2902 = BOXFAB(nameF2902);
  restF2903 = YPfalse;
  restF2903 = BOXFAB(restF2903);
  T7 = CALL2(1,VARREF(YisaQ),x_1915F2901,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1915F2901,LITREF(lit_132),x_1916F2900);
    x_1915F2904 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1915F2904,x_1916F2900);
    BOXVAL(nameF2902) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1915F2904);
    x_1915F2905 = T12;
    BOXVAL(restF2903) = x_1915F2905;
    x_1915F2906 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1915F2906,x_1916F2900);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1916F2900,LITREF(lit_6),x_1915F2901);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF2902);
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

FUNCODEDEF(fun_x_1913_135) {
  P msg_,args_;
  P x_1914F2907;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1914F2907 = FREEREF(0);
  T3 = FUNFAB(fun_134,2,x_1914F2907,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  P return_;
  P x_1912F2914;
  P x_1912F2913;
  P x_1912F2912;
  P restF2911;
  P nameF2910;
  P x_1912F2909;
  P x_1913F2908;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1913_135,3);
  x_1913F2908 = T1;
  FUNINIT(x_1913F2908, 3,FREEREF(0),FREEREF(1),return_);
  x_1912F2909 = FREEREF(0);
  nameF2910 = YPfalse;
  nameF2910 = BOXFAB(nameF2910);
  restF2911 = YPfalse;
  restF2911 = BOXFAB(restF2911);
  T7 = CALL2(1,VARREF(YisaQ),x_1912F2909,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1912F2909,LITREF(lit_162),x_1913F2908);
    x_1912F2912 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1912F2912,x_1913F2908);
    BOXVAL(nameF2910) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1912F2912);
    x_1912F2913 = T12;
    BOXVAL(restF2911) = x_1912F2913;
    x_1912F2914 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1912F2914,x_1913F2908);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1913F2908,LITREF(lit_6),x_1912F2909);
  }
  T18 = BOXVAL(nameF2910);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF2910);
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

FUNCODEDEF(fun_x_1910_137) {
  P msg_,args_;
  P x_1911F2915;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1911F2915 = FREEREF(0);
  T3 = FUNFAB(fun_136,2,x_1911F2915,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P x_1909F2922;
  P x_1909F2921;
  P x_1909F2920;
  P restF2919;
  P nameF2918;
  P x_1909F2917;
  P x_1910F2916;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1910_137,3);
  x_1910F2916 = T1;
  FUNINIT(x_1910F2916, 3,FREEREF(0),FREEREF(1),return_);
  x_1909F2917 = FREEREF(0);
  nameF2918 = YPfalse;
  nameF2918 = BOXFAB(nameF2918);
  restF2919 = YPfalse;
  restF2919 = BOXFAB(restF2919);
  T7 = CALL2(1,VARREF(YisaQ),x_1909F2917,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1909F2917,LITREF(lit_163),x_1910F2916);
    x_1909F2920 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1909F2920,x_1910F2916);
    BOXVAL(nameF2918) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1909F2920);
    x_1909F2921 = T12;
    BOXVAL(restF2919) = x_1909F2921;
    x_1909F2922 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1909F2922,x_1910F2916);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1910F2916,LITREF(lit_6),x_1909F2917);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T23 = BOXVAL(nameF2918);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T29 = BOXVAL(nameF2918);
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
  P defsF2929;
  P x_1908F2928;
  P x_1906F2927;
  P x_1906F2926;
  P defF2925;
  P x_1906F2924;
  P x_1907F2923;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1907_126,1);
  x_1907F2923 = T1;
  FUNINIT(x_1907F2923, 1,return_);
  x_1906F2924 = FREEREF(0);
  defF2925 = YPfalse;
  defF2925 = BOXFAB(defF2925);
  T5 = CALL2(1,VARREF(YisaQ),x_1906F2924,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1906F2924,LITREF(lit_153),x_1907F2923);
    x_1906F2926 = T7;
    BOXVAL(defF2925) = x_1906F2926;
    x_1906F2927 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1906F2927,x_1907F2923);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1907F2923,LITREF(lit_6),x_1906F2924);
  }
  T13 = BOXVAL(defF2925);
  x_1908F2928 = T13;
  T15 = FUNFAB(fun_138,2,x_1908F2928,defF2925);
  T14 = with_exit(T15);
  T12 = T14;
  defsF2929 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF2929,Ynil);
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

FUNCODEDEF(fun_x_1929_141) {
  P msg_,args_;
  P T0;
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
  P xF2930;
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
  xF2930 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF2930,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P return_;
  P x_1928F2935;
  P x_1928F2934;
  P defsF2933;
  P x_1928F2932;
  P x_1929F2931;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1929_141,1);
  x_1929F2931 = T1;
  FUNINIT(x_1929F2931, 1,return_);
  x_1928F2932 = FREEREF(0);
  defsF2933 = YPfalse;
  defsF2933 = BOXFAB(defsF2933);
  T5 = CALL2(1,VARREF(YisaQ),x_1928F2932,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1928F2932,LITREF(lit_165),x_1929F2931);
    x_1928F2934 = T7;
    BOXVAL(defsF2933) = x_1928F2934;
    x_1928F2935 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1928F2935,x_1929F2931);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1929F2931,LITREF(lit_6),x_1928F2932);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T14 = fun_142;
  T15 = BOXVAL(defsF2933);
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
  P tmpF2951;
  P tmpF2950;
  P tmpF2949;
  P tmpF2948;
  P tmpF2947;
  P tmpF2946;
  P tmpF2945;
  P tmpF2944;
  P tmpF2943;
  P tmpF2942;
  P tmpF2941;
  P tmpF2940;
  P tmpF2939;
  P tmpF2938;
  P tmpF2937;
  P tmpF2936;
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
  P T192,T193,T194,T195,T196;
loop:
  lit_0 = YPPsym((P)"exp");
  lit_1 = YPPsym((P)"return");
  lit_2 = YPPsym((P)"x-1717");
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
  fun_x_1717_0 = YPmet(FUNCODEREF(fun_x_1717_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T3);
  lit_17 = YPPsym((P)"x-1721");
  lit_18 = YPPsym((P)"app-sup");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1721_3 = YPmet(FUNCODEREF(fun_x_1721_3),LITREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T7);
  lit_20 = YPPsym((P)"x-1725");
  lit_21 = YPPsym((P)"app");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1725_6 = YPmet(FUNCODEREF(fun_x_1725_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T11);
  lit_22 = YPPsym((P)"x-1729");
  lit_23 = YPPsym((P)"renew");
  lit_24 = YPPsym((P)"loop");
  lit_25 = YPPsym((P)"sets");
  lit_26 = YPPsym((P)"inits");
  lit_27 = YPPsym((P)"set");
  T15 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1729_9 = YPmet(FUNCODEREF(fun_x_1729_9),LITREF(lit_22),T15,ENVNUL,PNUL,YPfalse);
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
  T20 = CALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T19 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T20,Ynil);
  fun_munch_13 = YPmet(FUNCODEREF(fun_munch_13),LITREF(lit_30),T19,ENVNUL,PNUL,YPfalse);
  T18 = CALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T17 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T18,Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_28),T17,ENVNUL,PNUL,YPfalse);
  T21 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T21);
  lit_32 = YPPsym((P)"x-1735");
  lit_33 = YPPsym((P)"incf");
  lit_34 = YPPsym((P)"x-1737");
  lit_35 = YPPsym((P)"+");
  T26 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1735_15 = YPmet(FUNCODEREF(fun_x_1735_15),LITREF(lit_32),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1737_16 = YPmet(FUNCODEREF(fun_x_1737_16),LITREF(lit_34),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T27 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T27);
  lit_36 = YPPsym((P)"x-1743");
  lit_37 = YPPsym((P)"decf");
  lit_38 = YPPsym((P)"x-1745");
  lit_39 = YPPsym((P)"-");
  T32 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1743_20 = YPmet(FUNCODEREF(fun_x_1743_20),LITREF(lit_36),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1745_21 = YPmet(FUNCODEREF(fun_x_1745_21),LITREF(lit_38),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T33 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T33);
  lit_40 = YPPsym((P)"x-1749");
  lit_41 = YPPsym((P)"pushf");
  lit_42 = YPPsym((P)"push!");
  T36 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1749_25 = YPmet(FUNCODEREF(fun_x_1749_25),LITREF(lit_40),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T37 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T37);
  lit_43 = YPPsym((P)"x-1753");
  lit_44 = YPPsym((P)"swapf");
  T40 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1753_28 = YPmet(FUNCODEREF(fun_x_1753_28),LITREF(lit_43),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T41 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T41);
  lit_45 = YPPsym((P)"x-1757");
  lit_46 = YPPsym((P)"popf");
  lit_47 = YPPsym((P)"tup");
  lit_48 = YPPsym((P)"pop!");
  T44 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1757_31 = YPmet(FUNCODEREF(fun_x_1757_31),LITREF(lit_45),T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T45 = fun_33;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T45);
  lit_49 = YPPsym((P)"x-1761");
  lit_50 = YPPsym((P)"opf");
  lit_51 = YPPsym((P)"_");
  T48 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1761_34 = YPmet(FUNCODEREF(fun_x_1761_34),LITREF(lit_49),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T49 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T49);
  lit_52 = YPPsym((P)"x-1765");
  lit_53 = YPPsym((P)"unless");
  lit_54 = YPPsym((P)"not");
  lit_55 = YPPsym((P)"seq");
  T52 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1765_37 = YPmet(FUNCODEREF(fun_x_1765_37),LITREF(lit_52),T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T53 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T53);
  lit_56 = YPPsym((P)"x-1769");
  lit_57 = YPPsym((P)"when");
  T56 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1769_40 = YPmet(FUNCODEREF(fun_x_1769_40),LITREF(lit_56),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T57 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T57);
  lit_58 = YPPsym((P)"x-1777");
  lit_59 = YPPsym((P)"or");
  lit_60 = YPPsym((P)"x-1779");
  lit_61 = YPPsym((P)"x-1781");
  lit_62 = YPPsym((P)"tmp");
  T64 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1777_43 = YPmet(FUNCODEREF(fun_x_1777_43),LITREF(lit_58),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1779_44 = YPmet(FUNCODEREF(fun_x_1779_44),LITREF(lit_60),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1781_45 = YPmet(FUNCODEREF(fun_x_1781_45),LITREF(lit_61),T62,ENVNUL,PNUL,YPfalse);
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
  lit_63 = YPPsym((P)"x-1789");
  lit_64 = YPPsym((P)"and");
  lit_65 = YPPsym((P)"x-1791");
  lit_66 = YPPsym((P)"x-1793");
  T72 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1789_50 = YPmet(FUNCODEREF(fun_x_1789_50),LITREF(lit_63),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1791_51 = YPmet(FUNCODEREF(fun_x_1791_51),LITREF(lit_65),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1793_52 = YPmet(FUNCODEREF(fun_x_1793_52),LITREF(lit_66),T70,ENVNUL,PNUL,YPfalse);
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
  lit_67 = YPPsym((P)"x-1799");
  lit_68 = YPPsym((P)"cond");
  lit_69 = YPPsym((P)"x-1801");
  lit_70 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T78 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1799_57 = YPmet(FUNCODEREF(fun_x_1799_57),LITREF(lit_67),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1801_58 = YPmet(FUNCODEREF(fun_x_1801_58),LITREF(lit_69),T77,ENVNUL,PNUL,YPfalse);
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
  lit_75 = YPPsym((P)"x-1807");
  lit_76 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_77 = YPPsym((P)"x-1809");
  lit_78 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_79 = YPPsym((P)"x");
  T85 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1807_62 = YPmet(FUNCODEREF(fun_x_1807_62),LITREF(lit_75),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1809_63 = YPmet(FUNCODEREF(fun_x_1809_63),LITREF(lit_77),T84,ENVNUL,PNUL,YPfalse);
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
  lit_80 = YPPsym((P)"x-1813");
  lit_81 = YPPsym((P)"case-by");
  T89 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1813_68 = YPmet(FUNCODEREF(fun_x_1813_68),LITREF(lit_80),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T90 = fun_70;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T90);
  lit_82 = YPPsym((P)"x-1817");
  lit_83 = YPPsym((P)"case");
  lit_84 = YPPsym((P)"==");
  T93 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1817_71 = YPmet(FUNCODEREF(fun_x_1817_71),LITREF(lit_82),T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T94 = fun_73;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T94);
  lit_85 = YPPsym((P)"x-1821");
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
  fun_x_1821_74 = YPmet(FUNCODEREF(fun_x_1821_74),LITREF(lit_85),T103,ENVNUL,PNUL,YPfalse);
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
  lit_101 = YPPsym((P)"x-1829");
  lit_102 = YPPsym((P)"match");
  lit_103 = YPPsym((P)"x-1831");
  lit_104 = YPPsym((P)"x-1833");
  lit_105 = YPsb((P)"Invalid match syntax.");
  lit_106 = YPPsym((P)"mif");
  lit_107 = YPsb((P)"Failed to match.");
  T111 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1829_83 = YPmet(FUNCODEREF(fun_x_1829_83),LITREF(lit_101),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1833_84 = YPmet(FUNCODEREF(fun_x_1833_84),LITREF(lit_104),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1831_86 = YPmet(FUNCODEREF(fun_x_1831_86),LITREF(lit_103),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T112 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T112);
  lit_108 = YPPsym((P)"x-1837");
  lit_109 = YPPsym((P)"assert");
  T115 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1837_90 = YPmet(FUNCODEREF(fun_x_1837_90),LITREF(lit_108),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T116 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T116);
  lit_110 = YPPsym((P)"x-1845");
  lit_111 = YPPsym((P)"for");
  lit_112 = YPPsym((P)"grok");
  lit_113 = YPPsym((P)"clauses");
  lit_114 = YPPsym((P)"preds");
  lit_115 = YPPsym((P)"nows");
  lit_116 = YPPsym((P)"nexts");
  lit_117 = YPPsym((P)"rep");
  lit_118 = YPPsym((P)"x-1847");
  lit_119 = YPPsym((P)"enum");
  lit_120 = YPPsym((P)"fin?");
  lit_121 = YPPsym((P)"x-1849");
  lit_122 = YPPsym((P)"now");
  lit_123 = YPPsym((P)"now-key");
  lit_124 = YPPsym((P)"nxt");
  T124 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1845_93 = YPmet(FUNCODEREF(fun_x_1845_93),LITREF(lit_110),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1847_94 = YPmet(FUNCODEREF(fun_x_1847_94),LITREF(lit_118),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1849_95 = YPmet(FUNCODEREF(fun_x_1849_95),LITREF(lit_121),T122,ENVNUL,PNUL,YPfalse);
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
  lit_125 = YPPsym((P)"x-1853");
  lit_126 = YPPsym((P)"while");
  lit_127 = YPPsym((P)"_loop");
  T128 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1853_101 = YPmet(FUNCODEREF(fun_x_1853_101),LITREF(lit_125),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T129 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T129);
  lit_128 = YPPsym((P)"x-1857");
  lit_129 = YPPsym((P)"until");
  T132 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1857_104 = YPmet(FUNCODEREF(fun_x_1857_104),LITREF(lit_128),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T133);
  lit_130 = YPPsym((P)"x-1861");
  lit_131 = YPPsym((P)"ddv");
  lit_132 = YPPsym((P)"dv");
  T136 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1861_107 = YPmet(FUNCODEREF(fun_x_1861_107),LITREF(lit_130),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_109;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"ddv"),T137);
  lit_133 = YPPsym((P)"x-1869");
  lit_134 = YPPsym((P)"dlet");
  lit_135 = YPPsym((P)"x-1871");
  lit_136 = YPPsym((P)"x-1873");
  lit_137 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_138 = YPPsym((P)"fin");
  T144 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1869_110 = YPmet(FUNCODEREF(fun_x_1869_110),LITREF(lit_133),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1873_111 = YPmet(FUNCODEREF(fun_x_1873_111),LITREF(lit_136),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1871_113 = YPmet(FUNCODEREF(fun_x_1871_113),LITREF(lit_135),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T145 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T145);
  lit_139 = YPPsym((P)"x-1877");
  lit_140 = YPPsym((P)"def-fun-var");
  lit_141 = YPsb((P)"*");
  lit_142 = YPsb((P)"*");
  lit_143 = YPPsym((P)"dm");
  lit_144 = YPPsym((P)"=>");
  lit_145 = YPPsym((P)"z");
  T148 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1877_117 = YPmet(FUNCODEREF(fun_x_1877_117),LITREF(lit_139),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T149 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T149);
  lit_146 = YPPsym((P)"x-1881");
  lit_147 = YPPsym((P)"without-prop-unbound-errors");
  lit_148 = YPPsym((P)"*report-prop-unbound-errors?*");
  T152 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1881_120 = YPmet(FUNCODEREF(fun_x_1881_120),LITREF(lit_146),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T153 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T153);
  lit_149 = YPPsym((P)"x-1885");
  lit_150 = YPPsym((P)"need-implementation");
  lit_151 = YPPsym((P)"export");
  T156 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1885_123 = YPmet(FUNCODEREF(fun_x_1885_123),LITREF(lit_149),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T157 = fun_125;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T157);
  lit_152 = YPPsym((P)"x-1907");
  lit_153 = YPPsym((P)"pub");
  lit_154 = YPPsym((P)"x-1910");
  lit_155 = YPPsym((P)"x-1913");
  lit_156 = YPPsym((P)"x-1916");
  lit_157 = YPPsym((P)"x-1919");
  lit_158 = YPPsym((P)"x-1922");
  lit_159 = YPPsym((P)"x-1925");
  lit_160 = YPPsym((P)"dc");
  lit_161 = YPPsym((P)"dg");
  lit_162 = YPPsym((P)"df");
  lit_163 = YPPsym((P)"dp");
  T172 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1907_126 = YPmet(FUNCODEREF(fun_x_1907_126),LITREF(lit_152),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1925_127 = YPmet(FUNCODEREF(fun_x_1925_127),LITREF(lit_159),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1922_129 = YPmet(FUNCODEREF(fun_x_1922_129),LITREF(lit_158),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1919_131 = YPmet(FUNCODEREF(fun_x_1919_131),LITREF(lit_157),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1916_133 = YPmet(FUNCODEREF(fun_x_1916_133),LITREF(lit_156),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1913_135 = YPmet(FUNCODEREF(fun_x_1913_135),LITREF(lit_155),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1910_137 = YPmet(FUNCODEREF(fun_x_1910_137),LITREF(lit_154),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T173 = fun_140;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T173);
  lit_164 = YPPsym((P)"x-1929");
  lit_165 = YPPsym((P)"exported");
  T177 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1929_141 = YPmet(FUNCODEREF(fun_x_1929_141),LITREF(lit_164),T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(YPPlist(1,LITREF(lit_79)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T178 = fun_144;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T178);
  tmpF2936 = YPfalse;
  if (tmpF2936 != YPfalse) {
    T179 = VARREF(YgooSmacrosYEE);
  } else {
    T179 = YPfalse;
  }
  tmpF2937 = YPfalse;
  if (tmpF2937 != YPfalse) {
    T180 = VARREF(YgooSmacrosYdo);
  } else {
    T180 = YPfalse;
  }
  tmpF2938 = YPfalse;
  if (tmpF2938 != YPfalse) {
    T181 = VARREF(YgooSmacrosYrevX);
  } else {
    T181 = YPfalse;
  }
  tmpF2939 = YPfalse;
  if (tmpF2939 != YPfalse) {
    T182 = VARREF(YgooSmacrosYcat);
  } else {
    T182 = YPfalse;
  }
  tmpF2940 = YPfalse;
  if (tmpF2940 != YPfalse) {
    T183 = VARREF(YgooSmacrosYelt);
  } else {
    T183 = YPfalse;
  }
  tmpF2941 = YPfalse;
  if (tmpF2941 != YPfalse) {
    T184 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T184 = YPfalse;
  }
  tmpF2942 = YPfalse;
  if (tmpF2942 != YPfalse) {
    T185 = VARREF(Yerror);
  } else {
    T185 = YPfalse;
  }
  tmpF2943 = YPfalse;
  if (tmpF2943 != YPfalse) {
    T186 = VARREF(YgooSmacrosYgensym);
  } else {
    T186 = YPfalse;
  }
  tmpF2944 = YPfalse;
  if (tmpF2944 != YPfalse) {
    T187 = VARREF(Ylst);
  } else {
    T187 = YPfalse;
  }
  tmpF2945 = YPfalse;
  if (tmpF2945 != YPfalse) {
    T188 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T188 = YPfalse;
  }
  tmpF2946 = YPfalse;
  if (tmpF2946 != YPfalse) {
    T189 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T189 = YPfalse;
  }
  tmpF2947 = YPfalse;
  if (tmpF2947 != YPfalse) {
    T190 = VARREF(YgooSmacrosYmap);
  } else {
    T190 = YPfalse;
  }
  tmpF2948 = YPfalse;
  if (tmpF2948 != YPfalse) {
    T191 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T191 = YPfalse;
  }
  tmpF2949 = YPfalse;
  if (tmpF2949 != YPfalse) {
    T192 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T192 = YPfalse;
  }
  tmpF2950 = YPfalse;
  if (tmpF2950 != YPfalse) {
    T193 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T193 = YPfalse;
  }
  tmpF2951 = YPfalse;
  if (tmpF2951 != YPfalse) {
    T196 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T196 = YPfalse;
  }
  T195 = T196;
  T194 = T195;
  return T194;
}

P YgooSmacrosY___main_1___() {
  P tmpF2956;
  P tmpF2955;
  P tmpF2954;
  P tmpF2953;
  P tmpF2952;
  P T0,T1,T2,T3,T4,T5;
loop:
  tmpF2952 = YPfalse;
  if (tmpF2952 != YPfalse) {
    T0 = VARREF(YgooSmacrosYpair);
  } else {
    T0 = YPfalse;
  }
  tmpF2953 = YPfalse;
  if (tmpF2953 != YPfalse) {
    T1 = VARREF(Ytup);
  } else {
    T1 = YPfalse;
  }
  tmpF2954 = YPfalse;
  if (tmpF2954 != YPfalse) {
    T2 = VARREF(YgooSmacrosYvar_name);
  } else {
    T2 = YPfalse;
  }
  tmpF2955 = YPfalse;
  if (tmpF2955 != YPfalse) {
    T3 = VARREF(YgooSmacrosYvar_type);
  } else {
    T3 = YPfalse;
  }
  tmpF2956 = YPfalse;
  if (tmpF2956 != YPfalse) {
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
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"set", &module_info_gooSboot, "set"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"rep", &module_info_gooSboot, "rep"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"if", &module_info_gooSboot, "if"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dv", &module_info_gooSboot, "dv"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"use", &module_info_gooSboot, "use"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"loc", &module_info_gooSboot, "loc"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"lst", &module_info_gooSboot, "lst"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"df", &module_info_gooSboot, "df"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%get", &module_info_gooSboot, "%get"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"napp", &YgooSmacrosYnapp},
  {"var-type", &YgooSmacrosYvar_type},
  {"renew", NULL},
  {"while", NULL},
  {"==", &YgooSmacrosYEE},
  {"pub", NULL},
  {"pushf", NULL},
  {"and", NULL},
  {"when", NULL},
  {"case", NULL},
  {"incf", NULL},
  {"do-case-by", &YgooSmacrosYdo_case_by},
  {"cat-sym", &YgooSmacrosYcat_sym},
  {"pair", &YgooSmacrosYpair},
  {"def-fun-var", NULL},
  {"match-sublist", &YgooSmacrosYmatch_sublist},
  {"ddv", NULL},
  {"app", NULL},
  {"rev!", &YgooSmacrosYrevX},
  {"popf", NULL},
  {"var-name", &YgooSmacrosYvar_name},
  {"---main-1---", NULL},
  {"match", NULL},
  {"map", &YgooSmacrosYmap},
  {"case-by", NULL},
  {"sup", NULL},
  {"for", NULL},
  {"need-implementation", NULL},
  {"elt", &YgooSmacrosYelt},
  {"lift-place-subforms", &YgooSmacrosYlift_place_subforms},
  {"match-atom", &YgooSmacrosYmatch_atom},
  {"cond", NULL},
  {"unless", NULL},
  {"empty?", &YgooSmacrosYemptyQ},
  {"match-unquote", &YgooSmacrosYmatch_unquote},
  {"decf", NULL},
  {"app-sup", NULL},
  {"until", NULL},
  {"cat", &YgooSmacrosYcat},
  {"exported", NULL},
  {"fab-setter-name", &YgooSmacrosYfab_setter_name},
  {"swapf", NULL},
  {"op", NULL},
  {"do", &YgooSmacrosYdo},
  {"or", NULL},
  {"---main-0---", NULL},
  {"without-prop-unbound-errors", NULL},
  {"match-empty-list", &YgooSmacrosYmatch_empty_list},
  {"gensym", &YgooSmacrosYgensym},
  {"assert", NULL},
  {"dlet", NULL},
  {"opf", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"var-type", "var-type"},
  {"error", "error"},
  {"renew", "renew"},
  {"while", "while"},
  {"==", "=="},
  {"pub", "pub"},
  {"pushf", "pushf"},
  {"and", "and"},
  {"when", "when"},
  {"case", "case"},
  {"incf", "incf"},
  {"napp", "napp"},
  {"cat-sym", "cat-sym"},
  {"pair", "pair"},
  {"def-fun-var", "def-fun-var"},
  {"match-sublist", "match-sublist"},
  {"ddv", "ddv"},
  {"tup", "tup"},
  {"app", "app"},
  {"lst", "lst"},
  {"rev!", "rev!"},
  {"popf", "popf"},
  {"var-name", "var-name"},
  {"match", "match"},
  {"map", "map"},
  {"sup", "sup"},
  {"for", "for"},
  {"need-implementation", "need-implementation"},
  {"elt", "elt"},
  {"match-atom", "match-atom"},
  {"cond", "cond"},
  {"unless", "unless"},
  {"empty?", "empty?"},
  {"match-unquote", "match-unquote"},
  {"decf", "decf"},
  {"app-sup", "app-sup"},
  {"until", "until"},
  {"cat", "cat"},
  {"exported", "exported"},
  {"fab-setter-name", "fab-setter-name"},
  {"swapf", "swapf"},
  {"op", "op"},
  {"do", "do"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"or", "or"},
  {"assert", "assert"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"match-empty-list", "match-empty-list"},
  {"gensym", "gensym"},
  {"case-by", "case-by"},
  {"dlet", "dlet"},
  {"opf", "opf"},
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
