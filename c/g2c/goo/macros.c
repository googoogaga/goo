/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: macros */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(Yprop_getter,"boot","prop-getter");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
EXT(Yclass_direct_props,"boot","class-direct-props");
DEF(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
DEF(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLmetG,"boot","<met>");
EXT(Yprop_init,"boot","prop-init");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yfun_naryQ,"boot","fun-nary?");
DEF(YmacrosYvar_name,"macros","var-name");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YLflatG,"boot","<flat>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YLtupG,"boot","<tup>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
EXT(YLfunG,"boot","<fun>");
DEF(YmacrosYmap,"macros","map");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ysig_val,"boot","sig-val");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YLlstG,"boot","<lst>");
EXT(YLlogG,"boot","<log>");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ysym_name,"boot","sym-name");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Yfun_name,"boot","fun-name");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(Yobject_class,"boot","object-class");
EXT(Yclass_parents,"boot","class-parents");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(Yprop_value,"boot","prop-value");
DEF(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YmacrosYdo_case_by,"macros","do-case-by");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
DEF(YmacrosYvar_type,"macros","var-type");
EXT(Yclass_props,"boot","class-props");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yerror,"boot","error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YPsymbols,"boot","%symbols");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfun_names,"boot","fun-names");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
DEF(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YLmagG,"boot","<mag>");
DEF(YmacrosYlift_place_subforms,"macros","lift-place-subforms");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YmacrosYcat,"macros","cat");
EXT(Yadd_prop,"boot","add-prop");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLoptsG,"boot","<opts>");
EXT(Ytail,"boot","tail");
EXT(YLtypeG,"boot","<type>");
DEF(YmacrosYnapp,"macros","napp");
EXT(YLlocG,"boot","<loc>");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(Ytype_elts,"boot","type-elts");
EXT(Yclass_name,"boot","class-name");
EXT(YPPmacro,"boot","%%macro");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
DEF(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yfun_val,"boot","fun-val");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YDmin_int,"boot","$min-int");
DEF(YmacrosYpair,"macros","pair");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(Ymet_appQ,"boot","met-app?");
DEF(YmacrosYelt,"macros","elt");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
DEF(YmacrosYdo,"macros","do");
EXT(YOisaQ,"boot","@isa?");
EXT(YLpropG,"boot","<prop>");
DEF(YmacrosYemptyQ,"macros","empty?");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
EXT(Yobject_props,"boot","object-props");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLintG,"boot","<int>");
EXT(YLstrG,"boot","<str>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YmacrosYcat_sym,"macros","cat-sym");
DEF(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
DEF(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
EXT(YPprop,"boot","%prop");
EXT(YPisa,"boot","%isa");
EXT(Yhead,"boot","head");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_108);
DEFLIT(lit_94);
DEFLIT(lit_48);
DEFLIT(lit_12);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_90);
DEFLIT(lit_81);
DEFLIT(lit_104);
DEFLIT(lit_102);
DEFLIT(lit_111);
DEFLIT(lit_116);
DEFLIT(lit_137);
DEFLIT(lit_85);
DEFLIT(lit_19);
DEFLIT(lit_65);
DEFLIT(lit_37);
DEFLIT(lit_100);
DEFLIT(lit_25);
DEFLIT(lit_92);
DEFLIT(lit_69);
DEFLIT(lit_121);
DEFLIT(lit_140);
DEFLIT(lit_2);
DEFLIT(lit_113);
DEFLIT(lit_119);
DEFLIT(lit_89);
DEFLIT(lit_151);
DEFLIT(lit_155);
DEFLIT(lit_130);
DEFLIT(lit_9);
DEFLIT(lit_22);
DEFLIT(lit_106);
DEFLIT(lit_109);
DEFLIT(lit_27);
DEFLIT(lit_125);
DEFLIT(lit_115);
DEFLIT(lit_84);
DEFLIT(lit_13);
DEFLIT(lit_97);
DEFLIT(lit_107);
DEFLIT(lit_120);
DEFLIT(lit_62);
DEFLIT(lit_60);
DEFLIT(lit_148);
DEFLIT(lit_156);
DEFLIT(lit_24);
DEFLIT(lit_61);
DEFLIT(lit_40);
DEFLIT(lit_80);
DEFLIT(lit_114);
DEFLIT(lit_41);
DEFLIT(lit_74);
DEFLIT(lit_79);
DEFLIT(lit_132);
DEFLIT(lit_147);
DEFLIT(lit_86);
DEFLIT(lit_55);
DEFLIT(lit_53);
DEFLIT(lit_51);
DEFLIT(lit_138);
DEFLIT(lit_20);
DEFLIT(lit_35);
DEFLIT(lit_146);
DEFLIT(lit_49);
DEFLIT(lit_131);
DEFLIT(lit_8);
DEFLIT(lit_142);
DEFLIT(lit_34);
DEFLIT(lit_134);
DEFLIT(lit_87);
DEFLIT(lit_126);
DEFLIT(lit_110);
DEFLIT(lit_150);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_42);
DEFLIT(lit_83);
DEFLIT(lit_32);
DEFLIT(lit_118);
DEFLIT(lit_78);
DEFLIT(lit_98);
DEFLIT(lit_76);
DEFLIT(lit_36);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_39);
DEFLIT(lit_3);
DEFLIT(lit_72);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_43);
DEFLIT(lit_46);
DEFLIT(lit_59);
DEFLIT(lit_57);
DEFLIT(lit_145);
DEFLIT(lit_1);
DEFLIT(lit_103);
DEFLIT(lit_77);
DEFLIT(lit_91);
DEFLIT(lit_7);
DEFLIT(lit_153);
DEFLIT(lit_11);
DEFLIT(lit_30);
DEFLIT(lit_50);
DEFLIT(lit_139);
DEFLIT(lit_29);
DEFLIT(lit_45);
DEFLIT(lit_141);
DEFLIT(lit_135);
DEFLIT(lit_136);
DEFLIT(lit_54);
DEFLIT(lit_6);
DEFLIT(lit_96);
DEFLIT(lit_47);
DEFLIT(lit_31);
DEFLIT(lit_154);
DEFLIT(lit_122);
DEFLIT(lit_82);
DEFLIT(lit_105);
DEFLIT(lit_75);
DEFLIT(lit_101);
DEFLIT(lit_128);
DEFLIT(lit_71);
DEFLIT(lit_15);
DEFLIT(lit_33);
DEFLIT(lit_16);
DEFLIT(lit_152);
DEFLIT(lit_95);
DEFLIT(lit_93);
DEFLIT(lit_18);
DEFLIT(lit_58);
DEFLIT(lit_129);
DEFLIT(lit_123);
DEFLIT(lit_63);
DEFLIT(lit_56);
DEFLIT(lit_70);
DEFLIT(lit_66);
DEFLIT(lit_64);
DEFLIT(lit_112);
DEFLIT(lit_149);
DEFLIT(lit_127);
DEFLIT(lit_5);
DEFLIT(lit_124);
DEFLIT(lit_68);
DEFLIT(lit_44);
DEFLIT(lit_117);
DEFLIT(lit_133);
DEFLIT(lit_73);
DEFLIT(lit_28);
DEFLIT(lit_67);
DEFLIT(lit_143);
DEFLIT(lit_38);
DEFLIT(lit_144);
DEFLIT(lit_99);
DEFLIT(lit_52);
DEFLIT(lit_88);

/* FUNCTIONS: */

LOCFOR(fun_x_2163_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_2167_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_2171_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_2175_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_x_2179_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_x_2183_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_x_2187_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_munch_22);
FUNFOR(YmacrosYlift_place_subforms);
LOCFOR(fun_x_2193_24);
LOCFOR(fun_x_2195_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_2201_29);
LOCFOR(fun_x_2203_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_2207_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_2211_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_2215_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_2219_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_2223_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_x_2227_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_2235_52);
LOCFOR(fun_x_2237_53);
LOCFOR(fun_x_2239_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_2247_59);
LOCFOR(fun_x_2249_60);
LOCFOR(fun_x_2251_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_2257_66);
LOCFOR(fun_x_2259_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_2265_71);
LOCFOR(fun_x_2267_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YmacrosYdo_case_by);
LOCFOR(fun_x_2271_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_2275_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_2283_83);
LOCFOR(fun_x_2287_84);
LOCFOR(fun_85);
LOCFOR(fun_x_2285_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_2291_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_2299_93);
LOCFOR(fun_x_2301_94);
LOCFOR(fun_x_2303_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_2307_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_2311_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_2315_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_2323_110);
LOCFOR(fun_x_2327_111);
LOCFOR(fun_112);
LOCFOR(fun_x_2325_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_2331_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_2335_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_2339_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_2353_126);
LOCFOR(fun_x_2355_127);
LOCFOR(fun_128);
LOCFOR(fun_x_2357_129);
LOCFOR(fun_130);
LOCFOR(fun_x_2359_131);
LOCFOR(fun_132);
LOCFOR(fun_x_2361_133);
LOCFOR(fun_134);
LOCFOR(fun_x_2363_135);
LOCFOR(fun_136);
LOCFOR(fun_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
extern P YmacrosY___main_0___ ();
extern P YmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_2163_0) {
  P msg_,args_;
  P T0;
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
  P x_2162F4821;
  P x_2162F4820;
  P argsF4819;
  P x_2162F4818;
  P x_2163F4817;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2163_0,1);
  x_2163F4817 = T1;
  FUNINIT(x_2163F4817, 1,return_);
  x_2162F4818 = FREEREF(0);
  argsF4819 = YPfalse;
  argsF4819 = BOXFAB(argsF4819);
  T5 = CALL2(1,VARREF(YisaQ),x_2162F4818,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2162F4818,LITREF(lit_5),x_2163F4817);
    x_2162F4820 = T7;
    BOXVAL(argsF4819) = x_2162F4820;
    x_2162F4821 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2162F4821,x_2163F4817);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_2163F4817,LITREF(lit_6),x_2162F4818);
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
  T36 = BOXVAL(argsF4819);
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

FUNCODEDEF(fun_x_2167_3) {
  P msg_,args_;
  P T0;
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
  P x_2166F4826;
  P x_2166F4825;
  P argsF4824;
  P x_2166F4823;
  P x_2167F4822;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2167_3,1);
  x_2167F4822 = T1;
  FUNINIT(x_2167F4822, 1,return_);
  x_2166F4823 = FREEREF(0);
  argsF4824 = YPfalse;
  argsF4824 = BOXFAB(argsF4824);
  T5 = CALL2(1,VARREF(YisaQ),x_2166F4823,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2166F4823,LITREF(lit_18),x_2167F4822);
    x_2166F4825 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2166F4825,x_2167F4822);
    BOXVAL(argsF4824) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2166F4825);
    x_2166F4826 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2166F4826,x_2167F4822);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_2167F4822,LITREF(lit_6),x_2166F4823);
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
  T39 = BOXVAL(argsF4824);
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

FUNCODEDEF(fun_x_2171_6) {
  P msg_,args_;
  P T0;
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
  P x_2170F4833;
  P x_2170F4832;
  P x_2170F4831;
  P argsF4830;
  P fF4829;
  P x_2170F4828;
  P x_2171F4827;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2171_6,1);
  x_2171F4827 = T1;
  FUNINIT(x_2171F4827, 1,return_);
  x_2170F4828 = FREEREF(0);
  fF4829 = YPfalse;
  fF4829 = BOXFAB(fF4829);
  argsF4830 = YPfalse;
  argsF4830 = BOXFAB(argsF4830);
  T7 = CALL2(1,VARREF(YisaQ),x_2170F4828,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2170F4828,LITREF(lit_21),x_2171F4827);
    x_2170F4831 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2170F4831,x_2171F4827);
    BOXVAL(fF4829) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2170F4831);
    x_2170F4832 = T12;
    BOXVAL(argsF4830) = x_2170F4832;
    x_2170F4833 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2170F4833,x_2171F4827);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2171F4827,LITREF(lit_6),x_2170F4828);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = BOXVAL(fF4829);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF4830);
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

FUNCODEDEF(fun_x_2175_9) {
  P msg_,args_;
  P T0;
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
  P nameF4841;
  P x_2174F4840;
  P x_2174F4839;
  P x_2174F4838;
  P x_2174F4837;
  P bodyF4836;
  P x_2174F4835;
  P x_2175F4834;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2175_9,1);
  x_2175F4834 = T1;
  FUNINIT(x_2175F4834, 1,return_);
  x_2174F4835 = FREEREF(0);
  bodyF4836 = YPfalse;
  bodyF4836 = BOXFAB(bodyF4836);
  T5 = CALL2(1,VARREF(YisaQ),x_2174F4835,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2174F4835,LITREF(lit_23),x_2175F4834);
    x_2174F4837 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2174F4837,x_2175F4834);
    x_2174F4838 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2174F4838,x_2175F4834);
    T11 = CALL1(1,VARREF(Ytail),x_2174F4837);
    x_2174F4839 = T11;
    BOXVAL(bodyF4836) = x_2174F4839;
    x_2174F4840 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2174F4840,x_2175F4834);
    T12 = T13;
    T8 = T12;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_2175F4834,LITREF(lit_6),x_2174F4835);
  }
  nameF4841 = LITREF(lit_24);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T22 = CALL1(1,VARREF(Ylst),nameF4841);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T26 = CALL1(1,VARREF(Ylst),Ynil);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T27 = BOXVAL(bodyF4836);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T31 = CALL1(1,VARREF(Ylst),nameF4841);
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

FUNCODEDEF(fun_x_2179_12) {
  P msg_,args_;
  P T0;
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
  P nameF4847;
  P x_2178F4846;
  P x_2178F4845;
  P valueF4844;
  P x_2178F4843;
  P x_2179F4842;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2179_12,1);
  x_2179F4842 = T1;
  FUNINIT(x_2179F4842, 1,return_);
  x_2178F4843 = FREEREF(0);
  valueF4844 = YPfalse;
  valueF4844 = BOXFAB(valueF4844);
  T5 = CALL2(1,VARREF(YisaQ),x_2178F4843,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2178F4843,LITREF(lit_27),x_2179F4842);
    x_2178F4845 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2178F4845,x_2179F4842);
    BOXVAL(valueF4844) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2178F4845);
    x_2178F4846 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2178F4846,x_2179F4842);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_2179F4842,LITREF(lit_6),x_2178F4843);
  }
  nameF4847 = LITREF(lit_24);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T16 = CALL1(1,VARREF(Ylst),nameF4847);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T21 = BOXVAL(valueF4844);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),nameF4847);
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

FUNCODEDEF(fun_x_2183_15) {
  P msg_,args_;
  P T0;
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
  P x_2182F4852;
  P x_2182F4851;
  P nameF4850;
  P x_2182F4849;
  P x_2183F4848;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2183_15,1);
  x_2183F4848 = T1;
  FUNINIT(x_2183F4848, 1,return_);
  x_2182F4849 = FREEREF(0);
  nameF4850 = YPfalse;
  nameF4850 = BOXFAB(nameF4850);
  T5 = CALL2(1,VARREF(YisaQ),x_2182F4849,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2182F4849,LITREF(lit_25),x_2183F4848);
    x_2182F4851 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2182F4851,x_2183F4848);
    BOXVAL(nameF4850) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2182F4851);
    x_2182F4852 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2182F4852,x_2183F4848);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_2183F4848,LITREF(lit_6),x_2182F4849);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T16 = BOXVAL(nameF4850);
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

FUNCODEDEF(fun_x_2187_18) {
  P msg_,args_;
  P T0;
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
  P valF4853;
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
    valF4853 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(1));
    T11 = CALL3(1,VARREF(YmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF4853);
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
  P setsF4863;
  P loopF4862;
  P varF4861;
  P x_2186F4860;
  P x_2186F4859;
  P x_2186F4858;
  P prop_initsF4857;
  P xF4856;
  P x_2186F4855;
  P x_2187F4854;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2187_18,1);
  x_2187F4854 = T1;
  FUNINIT(x_2187F4854, 1,return_);
  x_2186F4855 = FREEREF(0);
  xF4856 = YPfalse;
  xF4856 = BOXFAB(xF4856);
  prop_initsF4857 = YPfalse;
  prop_initsF4857 = BOXFAB(prop_initsF4857);
  T7 = CALL2(1,VARREF(YisaQ),x_2186F4855,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2186F4855,LITREF(lit_33),x_2187F4854);
    x_2186F4858 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2186F4858,x_2187F4854);
    BOXVAL(xF4856) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2186F4858);
    x_2186F4859 = T12;
    BOXVAL(prop_initsF4857) = x_2186F4859;
    x_2186F4860 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2186F4860,x_2187F4854);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2187F4854,LITREF(lit_6),x_2186F4855);
  }
  T17 = CALL0(1,VARREF(YmacrosYgensym));
  varF4861 = T17;
  T20 = FUNSHELL(1,fun_loop_19,2);
  loopF4862 = T20;
  FUNINIT(loopF4862, 2,loopF4862,varF4861);
  T22 = BOXVAL(prop_initsF4857);
  T21 = CALL2(0,loopF4862,Ynil,T22);
  T19 = T21;
  setsF4863 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL1(1,VARREF(Ylst),varF4861);
  T31 = BOXVAL(xF4856);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF4861);
  T23 = CALLN(1,VARREF(YmacrosYcat),5,T24,T25,setsF4863,T32,Ynil);
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
  P gF4867;
  P g_argsF4866;
  P g_declsF4865;
  P tup112F4864;
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
    tup112F4864 = T4;
    T7 = CALL2(1,VARREF(YmacrosYelt),tup112F4864,YPint((P)0));
    g_declsF4865 = T7;
    T9 = CALL2(1,VARREF(YmacrosYelt),tup112F4864,YPint((P)1));
    g_argsF4866 = T9;
    T11 = CALL0(1,VARREF(YmacrosYgensym));
    gF4867 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF4867);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YmacrosYpair),T14,g_declsF4865);
    T18 = CALL2(1,VARREF(YmacrosYpair),gF4867,g_argsF4866);
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
  P g_argsF4871;
  P g_declsF4870;
  P tup113F4869;
  P munchF4868;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_22,1);
  munchF4868 = T1;
  FUNINIT(munchF4868, 1,munchF4868);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF4868,T7);
    tup113F4869 = T6;
    T9 = CALL2(1,VARREF(YmacrosYelt),tup113F4869,YPint((P)0));
    g_declsF4870 = T9;
    T11 = CALL2(1,VARREF(YmacrosYelt),tup113F4869,YPint((P)1));
    g_argsF4871 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YmacrosYpair),T14,g_argsF4871);
    T12 = CALL2(1,VARREF(Ytup),g_declsF4870,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2193_24) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2195_25) {
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
  P x_2194F4875;
  P amountF4874;
  P x_2194F4873;
  P x_2195F4872;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2195_25,1);
  x_2195F4872 = T1;
  FUNINIT(x_2195F4872, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_2194F4873 = T3;
  amountF4874 = YPfalse;
  amountF4874 = BOXFAB(amountF4874);
  T6 = CALL2(1,VARREF(YisaQ),x_2194F4873,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2194F4873,x_2195F4872);
    BOXVAL(amountF4874) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_2194F4873);
    x_2194F4875 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2194F4875,x_2195F4872);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_2195F4872,LITREF(lit_6),x_2194F4873);
  }
  T12 = BOXVAL(amountF4874);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P amountF4886;
  P g_placeF4885;
  P g_declsF4884;
  P tup115F4883;
  P x_2192F4882;
  P x_2192F4881;
  P x_2192F4880;
  P amountF4879;
  P placeF4878;
  P x_2192F4877;
  P x_2193F4876;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2193_24,1);
  x_2193F4876 = T1;
  FUNINIT(x_2193F4876, 1,return_);
  x_2192F4877 = FREEREF(0);
  placeF4878 = YPfalse;
  placeF4878 = BOXFAB(placeF4878);
  amountF4879 = YPfalse;
  amountF4879 = BOXFAB(amountF4879);
  T7 = CALL2(1,VARREF(YisaQ),x_2192F4877,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2192F4877,LITREF(lit_42),x_2193F4876);
    x_2192F4880 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2192F4880,x_2193F4876);
    BOXVAL(placeF4878) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2192F4880);
    x_2192F4881 = T12;
    BOXVAL(amountF4879) = x_2192F4881;
    x_2192F4882 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2192F4882,x_2193F4876);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2193F4876,LITREF(lit_6),x_2192F4877);
  }
  T18 = BOXVAL(placeF4878);
  T17 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T18);
  tup115F4883 = T17;
  T20 = CALL2(1,VARREF(YmacrosYelt),tup115F4883,YPint((P)0));
  g_declsF4884 = T20;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup115F4883,YPint((P)1));
  g_placeF4885 = T22;
  T25 = FUNFAB(fun_26,1,amountF4879);
  T24 = with_exit(T25);
  amountF4886 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YmacrosYcat),g_declsF4884,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF4885);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T37 = CALL1(1,VARREF(Ylst),g_placeF4885);
  T38 = CALL1(1,VARREF(Ylst),amountF4886);
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

FUNCODEDEF(fun_x_2201_29) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2203_30) {
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
  P x_2202F4890;
  P amountF4889;
  P x_2202F4888;
  P x_2203F4887;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2203_30,1);
  x_2203F4887 = T1;
  FUNINIT(x_2203F4887, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_2202F4888 = T3;
  amountF4889 = YPfalse;
  amountF4889 = BOXFAB(amountF4889);
  T6 = CALL2(1,VARREF(YisaQ),x_2202F4888,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2202F4888,x_2203F4887);
    BOXVAL(amountF4889) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_2202F4888);
    x_2202F4890 = T9;
    T10 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2202F4890,x_2203F4887);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_2203F4887,LITREF(lit_6),x_2202F4888);
  }
  T12 = BOXVAL(amountF4889);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P amountF4901;
  P g_placeF4900;
  P g_declsF4899;
  P tup117F4898;
  P x_2200F4897;
  P x_2200F4896;
  P x_2200F4895;
  P amountF4894;
  P placeF4893;
  P x_2200F4892;
  P x_2201F4891;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2201_29,1);
  x_2201F4891 = T1;
  FUNINIT(x_2201F4891, 1,return_);
  x_2200F4892 = FREEREF(0);
  placeF4893 = YPfalse;
  placeF4893 = BOXFAB(placeF4893);
  amountF4894 = YPfalse;
  amountF4894 = BOXFAB(amountF4894);
  T7 = CALL2(1,VARREF(YisaQ),x_2200F4892,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2200F4892,LITREF(lit_46),x_2201F4891);
    x_2200F4895 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2200F4895,x_2201F4891);
    BOXVAL(placeF4893) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2200F4895);
    x_2200F4896 = T12;
    BOXVAL(amountF4894) = x_2200F4896;
    x_2200F4897 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2200F4897,x_2201F4891);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2201F4891,LITREF(lit_6),x_2200F4892);
  }
  T18 = BOXVAL(placeF4893);
  T17 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T18);
  tup117F4898 = T17;
  T20 = CALL2(1,VARREF(YmacrosYelt),tup117F4898,YPint((P)0));
  g_declsF4899 = T20;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup117F4898,YPint((P)1));
  g_placeF4900 = T22;
  T25 = FUNFAB(fun_31,1,amountF4894);
  T24 = with_exit(T25);
  amountF4901 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T29 = CALL2(1,VARREF(YmacrosYcat),g_declsF4899,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T33 = CALL1(1,VARREF(Ylst),g_placeF4900);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T37 = CALL1(1,VARREF(Ylst),g_placeF4900);
  T38 = CALL1(1,VARREF(Ylst),amountF4901);
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

FUNCODEDEF(fun_x_2207_34) {
  P msg_,args_;
  P T0;
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
  P g_placeF4911;
  P g_declsF4910;
  P tup119F4909;
  P x_2206F4908;
  P x_2206F4907;
  P x_2206F4906;
  P valueF4905;
  P placeF4904;
  P x_2206F4903;
  P x_2207F4902;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2207_34,1);
  x_2207F4902 = T1;
  FUNINIT(x_2207F4902, 1,return_);
  x_2206F4903 = FREEREF(0);
  placeF4904 = YPfalse;
  placeF4904 = BOXFAB(placeF4904);
  valueF4905 = YPfalse;
  valueF4905 = BOXFAB(valueF4905);
  T7 = CALL2(1,VARREF(YisaQ),x_2206F4903,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2206F4903,LITREF(lit_50),x_2207F4902);
    x_2206F4906 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2206F4906,x_2207F4902);
    BOXVAL(placeF4904) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2206F4906);
    x_2206F4907 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2206F4907,x_2207F4902);
    BOXVAL(valueF4905) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2206F4907);
    x_2206F4908 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2206F4908,x_2207F4902);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_2207F4902,LITREF(lit_6),x_2206F4903);
  }
  T20 = BOXVAL(placeF4904);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup119F4909 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup119F4909,YPint((P)0));
  g_declsF4910 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup119F4909,YPint((P)1));
  g_placeF4911 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL2(1,VARREF(YmacrosYcat),g_declsF4910,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T32 = CALL1(1,VARREF(Ylst),g_placeF4911);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T36 = CALL1(1,VARREF(Ylst),g_placeF4911);
  T38 = BOXVAL(valueF4905);
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

FUNCODEDEF(fun_x_2211_37) {
  P msg_,args_;
  P T0;
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
  P tmpF4925;
  P yg_placeF4924;
  P yg_declsF4923;
  P tup123F4922;
  P xg_placeF4921;
  P xg_declsF4920;
  P tup122F4919;
  P x_2210F4918;
  P x_2210F4917;
  P x_2210F4916;
  P yF4915;
  P xF4914;
  P x_2210F4913;
  P x_2211F4912;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2211_37,1);
  x_2211F4912 = T1;
  FUNINIT(x_2211F4912, 1,return_);
  x_2210F4913 = FREEREF(0);
  xF4914 = YPfalse;
  xF4914 = BOXFAB(xF4914);
  yF4915 = YPfalse;
  yF4915 = BOXFAB(yF4915);
  T7 = CALL2(1,VARREF(YisaQ),x_2210F4913,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2210F4913,LITREF(lit_53),x_2211F4912);
    x_2210F4916 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2210F4916,x_2211F4912);
    BOXVAL(xF4914) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2210F4916);
    x_2210F4917 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2210F4917,x_2211F4912);
    BOXVAL(yF4915) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2210F4917);
    x_2210F4918 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2210F4918,x_2211F4912);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_2211F4912,LITREF(lit_6),x_2210F4913);
  }
  T20 = BOXVAL(xF4914);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup122F4919 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup122F4919,YPint((P)0));
  xg_declsF4920 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup122F4919,YPint((P)1));
  xg_placeF4921 = T24;
  T27 = BOXVAL(yF4915);
  T26 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T27);
  tup123F4922 = T26;
  T29 = CALL2(1,VARREF(YmacrosYelt),tup123F4922,YPint((P)0));
  yg_declsF4923 = T29;
  T31 = CALL2(1,VARREF(YmacrosYelt),tup123F4922,YPint((P)1));
  yg_placeF4924 = T31;
  T33 = CALL0(1,VARREF(YmacrosYgensym));
  tmpF4925 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T40 = CALL1(1,VARREF(Ylst),tmpF4925);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF4921);
  T39 = CALL3(1,VARREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALLN(1,VARREF(YmacrosYcat),4,xg_declsF4920,yg_declsF4923,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF4921);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF4924);
  T43 = CALLN(1,VARREF(YmacrosYcat),4,T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF4924);
  T51 = CALL1(1,VARREF(Ylst),tmpF4925);
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

FUNCODEDEF(fun_x_2215_40) {
  P msg_,args_;
  P T0;
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
  P valF4935;
  P new_colF4934;
  P g_placeF4933;
  P g_declsF4932;
  P tup125F4931;
  P x_2214F4930;
  P x_2214F4929;
  P placeF4928;
  P x_2214F4927;
  P x_2215F4926;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2215_40,1);
  x_2215F4926 = T1;
  FUNINIT(x_2215F4926, 1,return_);
  x_2214F4927 = FREEREF(0);
  placeF4928 = YPfalse;
  placeF4928 = BOXFAB(placeF4928);
  T5 = CALL2(1,VARREF(YisaQ),x_2214F4927,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2214F4927,LITREF(lit_55),x_2215F4926);
    x_2214F4929 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2214F4929,x_2215F4926);
    BOXVAL(placeF4928) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2214F4929);
    x_2214F4930 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2214F4930,x_2215F4926);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_2215F4926,LITREF(lit_6),x_2214F4927);
  }
  T15 = BOXVAL(placeF4928);
  T14 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T15);
  tup125F4931 = T14;
  T17 = CALL2(1,VARREF(YmacrosYelt),tup125F4931,YPint((P)0));
  g_declsF4932 = T17;
  T19 = CALL2(1,VARREF(YmacrosYelt),tup125F4931,YPint((P)1));
  g_placeF4933 = T19;
  T21 = CALL0(1,VARREF(YmacrosYgensym));
  new_colF4934 = T21;
  T23 = CALL0(1,VARREF(YmacrosYgensym));
  valF4935 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T33 = CALL1(1,VARREF(Ylst),new_colF4934);
  T34 = CALL1(1,VARREF(Ylst),valF4935);
  T31 = CALLN(1,VARREF(YmacrosYcat),4,T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T38 = CALL1(1,VARREF(Ylst),g_placeF4933);
  T36 = CALL3(1,VARREF(YmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YmacrosYcat),g_declsF4932,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T42 = CALL1(1,VARREF(Ylst),g_placeF4933);
  T43 = CALL1(1,VARREF(Ylst),new_colF4934);
  T40 = CALLN(1,VARREF(YmacrosYcat),4,T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF4935);
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

FUNCODEDEF(fun_x_2219_43) {
  P msg_,args_;
  P T0;
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
  P g_placeF4945;
  P g_declsF4944;
  P tup127F4943;
  P x_2218F4942;
  P x_2218F4941;
  P x_2218F4940;
  P callF4939;
  P placeF4938;
  P x_2218F4937;
  P x_2219F4936;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2219_43,1);
  x_2219F4936 = T1;
  FUNINIT(x_2219F4936, 1,return_);
  x_2218F4937 = FREEREF(0);
  placeF4938 = YPfalse;
  placeF4938 = BOXFAB(placeF4938);
  callF4939 = YPfalse;
  callF4939 = BOXFAB(callF4939);
  T7 = CALL2(1,VARREF(YisaQ),x_2218F4937,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2218F4937,LITREF(lit_59),x_2219F4936);
    x_2218F4940 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2218F4940,x_2219F4936);
    BOXVAL(placeF4938) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2218F4940);
    x_2218F4941 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2218F4941,x_2219F4936);
    BOXVAL(callF4939) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2218F4941);
    x_2218F4942 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2218F4942,x_2219F4936);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_2219F4936,LITREF(lit_6),x_2218F4937);
  }
  T20 = BOXVAL(placeF4938);
  T19 = CALL1(1,VARREF(YmacrosYlift_place_subforms),T20);
  tup127F4943 = T19;
  T22 = CALL2(1,VARREF(YmacrosYelt),tup127F4943,YPint((P)0));
  g_declsF4944 = T22;
  T24 = CALL2(1,VARREF(YmacrosYelt),tup127F4943,YPint((P)1));
  g_placeF4945 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T32 = CALL1(1,VARREF(Ylst),g_placeF4945);
  T30 = CALL3(1,VARREF(YmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YmacrosYcat),g_declsF4944,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T36 = CALL1(1,VARREF(Ylst),g_placeF4945);
  T38 = BOXVAL(callF4939);
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

FUNCODEDEF(fun_x_2223_46) {
  P msg_,args_;
  P T0;
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
  P x_2222F4952;
  P x_2222F4951;
  P x_2222F4950;
  P bodyF4949;
  P testF4948;
  P x_2222F4947;
  P x_2223F4946;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2223_46,1);
  x_2223F4946 = T1;
  FUNINIT(x_2223F4946, 1,return_);
  x_2222F4947 = FREEREF(0);
  testF4948 = YPfalse;
  testF4948 = BOXFAB(testF4948);
  bodyF4949 = YPfalse;
  bodyF4949 = BOXFAB(bodyF4949);
  T7 = CALL2(1,VARREF(YisaQ),x_2222F4947,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2222F4947,LITREF(lit_62),x_2223F4946);
    x_2222F4950 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2222F4950,x_2223F4946);
    BOXVAL(testF4948) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2222F4950);
    x_2222F4951 = T12;
    BOXVAL(bodyF4949) = x_2222F4951;
    x_2222F4952 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2222F4952,x_2223F4946);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2223F4946,LITREF(lit_6),x_2222F4947);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T22 = BOXVAL(testF4948);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T26 = BOXVAL(bodyF4949);
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

FUNCODEDEF(fun_x_2227_49) {
  P msg_,args_;
  P T0;
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
  P x_2226F4959;
  P x_2226F4958;
  P x_2226F4957;
  P bodyF4956;
  P testF4955;
  P x_2226F4954;
  P x_2227F4953;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2227_49,1);
  x_2227F4953 = T1;
  FUNINIT(x_2227F4953, 1,return_);
  x_2226F4954 = FREEREF(0);
  testF4955 = YPfalse;
  testF4955 = BOXFAB(testF4955);
  bodyF4956 = YPfalse;
  bodyF4956 = BOXFAB(bodyF4956);
  T7 = CALL2(1,VARREF(YisaQ),x_2226F4954,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2226F4954,LITREF(lit_66),x_2227F4953);
    x_2226F4957 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2226F4957,x_2227F4953);
    BOXVAL(testF4955) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2226F4957);
    x_2226F4958 = T12;
    BOXVAL(bodyF4956) = x_2226F4958;
    x_2226F4959 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2226F4959,x_2227F4953);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2227F4953,LITREF(lit_6),x_2226F4954);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(testF4955);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF4956);
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

FUNCODEDEF(fun_x_2235_52) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2237_53) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2239_54) {
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
  P x_2238F4961;
  P x_2239F4960;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2239_54,3);
  x_2239F4960 = T1;
  FUNINIT(x_2239F4960, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_2238F4961 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_2238F4961,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2238F4961,x_2239F4960);
  } else {
    T6 = CALL2(1,x_2239F4960,LITREF(lit_6),x_2238F4961);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_2236F4967;
  P x_2236F4966;
  P restF4965;
  P xF4964;
  P x_2236F4963;
  P x_2237F4962;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2237_53,1);
  x_2237F4962 = T1;
  FUNINIT(x_2237F4962, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_2236F4963 = T3;
  xF4964 = YPfalse;
  xF4964 = BOXFAB(xF4964);
  restF4965 = YPfalse;
  restF4965 = BOXFAB(restF4965);
  T8 = CALL2(1,VARREF(YisaQ),x_2236F4963,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2236F4963,x_2237F4962);
    BOXVAL(xF4964) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2236F4963);
    x_2236F4966 = T11;
    BOXVAL(restF4965) = x_2236F4966;
    x_2236F4967 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2236F4967,x_2237F4962);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_2237F4962,LITREF(lit_6),x_2236F4963);
  }
  T16 = FUNFAB(fun_55,2,xF4964,restF4965);
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
  P x_2234F4972;
  P x_2234F4971;
  P restF4970;
  P x_2234F4969;
  P x_2235F4968;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2235_52,1);
  x_2235F4968 = T1;
  FUNINIT(x_2235F4968, 1,return_);
  x_2234F4969 = FREEREF(0);
  restF4970 = YPfalse;
  restF4970 = BOXFAB(restF4970);
  T5 = CALL2(1,VARREF(YisaQ),x_2234F4969,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2234F4969,LITREF(lit_68),x_2235F4968);
    x_2234F4971 = T7;
    BOXVAL(restF4970) = x_2234F4971;
    x_2234F4972 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2234F4972,x_2235F4968);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_2235F4968,LITREF(lit_6),x_2234F4969);
  }
  T12 = FUNFAB(fun_56,1,restF4970);
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

FUNCODEDEF(fun_x_2247_59) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2249_60) {
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

FUNCODEDEF(fun_x_2251_61) {
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
  P x_2250F4974;
  P x_2251F4973;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2251_61,3);
  x_2251F4973 = T1;
  FUNINIT(x_2251F4973, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(1));
  x_2250F4974 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_2250F4974,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2250F4974,x_2251F4973);
  } else {
    T6 = CALL2(1,x_2251F4973,LITREF(lit_6),x_2250F4974);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_2248F4980;
  P x_2248F4979;
  P restF4978;
  P xF4977;
  P x_2248F4976;
  P x_2249F4975;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2249_60,1);
  x_2249F4975 = T1;
  FUNINIT(x_2249F4975, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_2248F4976 = T3;
  xF4977 = YPfalse;
  xF4977 = BOXFAB(xF4977);
  restF4978 = YPfalse;
  restF4978 = BOXFAB(restF4978);
  T8 = CALL2(1,VARREF(YisaQ),x_2248F4976,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2248F4976,x_2249F4975);
    BOXVAL(xF4977) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2248F4976);
    x_2248F4979 = T11;
    BOXVAL(restF4978) = x_2248F4979;
    x_2248F4980 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2248F4980,x_2249F4975);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_2249F4975,LITREF(lit_6),x_2248F4976);
  }
  T16 = FUNFAB(fun_62,2,xF4977,restF4978);
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
  P x_2246F4985;
  P x_2246F4984;
  P restF4983;
  P x_2246F4982;
  P x_2247F4981;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2247_59,1);
  x_2247F4981 = T1;
  FUNINIT(x_2247F4981, 1,return_);
  x_2246F4982 = FREEREF(0);
  restF4983 = YPfalse;
  restF4983 = BOXFAB(restF4983);
  T5 = CALL2(1,VARREF(YisaQ),x_2246F4982,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2246F4982,LITREF(lit_73),x_2247F4981);
    x_2246F4984 = T7;
    BOXVAL(restF4983) = x_2246F4984;
    x_2246F4985 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2246F4985,x_2247F4981);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_2247F4981,LITREF(lit_6),x_2246F4982);
  }
  T12 = FUNFAB(fun_63,1,restF4983);
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

FUNCODEDEF(fun_x_2257_66) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2259_67) {
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
  P x_2258F4991;
  P x_2258F4990;
  P bodyF4989;
  P condF4988;
  P x_2258F4987;
  P x_2259F4986;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2259_67,2);
  x_2259F4986 = T1;
  FUNINIT(x_2259F4986, 2,return_,FREEREF(0));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_2258F4987 = T3;
  condF4988 = YPfalse;
  condF4988 = BOXFAB(condF4988);
  bodyF4989 = YPfalse;
  bodyF4989 = BOXFAB(bodyF4989);
  T9 = CALL2(1,VARREF(YisaQ),x_2258F4987,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2258F4987,x_2259F4986);
    BOXVAL(condF4988) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2258F4987);
    x_2258F4990 = T12;
    BOXVAL(bodyF4989) = x_2258F4990;
    x_2258F4991 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2258F4991,x_2259F4986);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_2259F4986,LITREF(lit_6),x_2258F4987);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = BOXVAL(condF4988);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = BOXVAL(bodyF4989);
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
  P x_2256F4996;
  P x_2256F4995;
  P casesF4994;
  P x_2256F4993;
  P x_2257F4992;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2257_66,1);
  x_2257F4992 = T1;
  FUNINIT(x_2257F4992, 1,return_);
  x_2256F4993 = FREEREF(0);
  casesF4994 = YPfalse;
  casesF4994 = BOXFAB(casesF4994);
  T5 = CALL2(1,VARREF(YisaQ),x_2256F4993,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2256F4993,LITREF(lit_77),x_2257F4992);
    x_2256F4995 = T7;
    BOXVAL(casesF4994) = x_2256F4995;
    x_2256F4996 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2256F4996,x_2257F4992);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_2257F4992,LITREF(lit_6),x_2256F4993);
  }
  T13 = BOXVAL(casesF4994);
  T12 = CALL1(1,VARREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_68,1,casesF4994);
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

FUNCODEDEF(fun_x_2265_71) {
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

FUNCODEDEF(fun_x_2267_72) {
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
  P x_2266F5000;
  P valuesF4999;
  P x_2266F4998;
  P x_2267F4997;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2267_72,2);
  x_2267F4997 = T1;
  FUNINIT(x_2267F4997, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(1));
  x_2266F4998 = T3;
  valuesF4999 = YPfalse;
  valuesF4999 = BOXFAB(valuesF4999);
  T6 = CALL2(1,VARREF(YisaQ),x_2266F4998,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF4999) = x_2266F4998;
    x_2266F5000 = Ynil;
    T8 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2266F5000,x_2267F4997);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_2267F4997,LITREF(lit_6),x_2266F4998);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T16 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF4999);
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
  P x_2264F5006;
  P x_2264F5005;
  P bodyF5004;
  P condF5003;
  P x_2264F5002;
  P x_2265F5001;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2265_71,2);
  x_2265F5001 = T1;
  FUNINIT(x_2265F5001, 2,return_,FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_2264F5002 = T3;
  condF5003 = YPfalse;
  condF5003 = BOXFAB(condF5003);
  bodyF5004 = YPfalse;
  bodyF5004 = BOXFAB(bodyF5004);
  T8 = CALL2(1,VARREF(YisaQ),x_2264F5002,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2264F5002,x_2265F5001);
    BOXVAL(condF5003) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2264F5002);
    x_2264F5005 = T11;
    BOXVAL(bodyF5004) = x_2264F5005;
    x_2264F5006 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2264F5006,x_2265F5001);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_2265F5001,LITREF(lit_6),x_2264F5002);
  }
  T17 = BOXVAL(condF5003);
  T16 = CALL2(1,VARREF(YmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T20 = BOXVAL(bodyF5004);
    T18 = CALL3(1,VARREF(YmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_74,5,FREEREF(0),condF5003,FREEREF(1),FREEREF(2),bodyF5004);
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

FUNCODEDEF(fun_x_2271_77) {
  P msg_,args_;
  P T0;
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
  P tst_varF5017;
  P val_varF5016;
  P x_2270F5015;
  P x_2270F5014;
  P x_2270F5013;
  P x_2270F5012;
  P casesF5011;
  P tstF5010;
  P valF5009;
  P x_2270F5008;
  P x_2271F5007;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2271_77,1);
  x_2271F5007 = T1;
  FUNINIT(x_2271F5007, 1,return_);
  x_2270F5008 = FREEREF(0);
  valF5009 = YPfalse;
  valF5009 = BOXFAB(valF5009);
  tstF5010 = YPfalse;
  tstF5010 = BOXFAB(tstF5010);
  casesF5011 = YPfalse;
  casesF5011 = BOXFAB(casesF5011);
  T9 = CALL2(1,VARREF(YisaQ),x_2270F5008,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2270F5008,LITREF(lit_90),x_2271F5007);
    x_2270F5012 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2270F5012,x_2271F5007);
    BOXVAL(valF5009) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2270F5012);
    x_2270F5013 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2270F5013,x_2271F5007);
    BOXVAL(tstF5010) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_2270F5013);
    x_2270F5014 = T17;
    BOXVAL(casesF5011) = x_2270F5014;
    x_2270F5015 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2270F5015,x_2271F5007);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_2271F5007,LITREF(lit_6),x_2270F5008);
  }
  T22 = CALL0(1,VARREF(YmacrosYgensym));
  val_varF5016 = T22;
  T24 = CALL0(1,VARREF(YmacrosYgensym));
  tst_varF5017 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T31 = CALL1(1,VARREF(Ylst),val_varF5016);
  T33 = BOXVAL(valF5009);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF5017);
  T38 = BOXVAL(tstF5010);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF5011);
  T40 = CALL3(1,VARREF(YmacrosYdo_case_by),val_varF5016,tst_varF5017,T41);
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

FUNCODEDEF(fun_x_2275_80) {
  P msg_,args_;
  P T0;
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
  P x_2274F5024;
  P x_2274F5023;
  P x_2274F5022;
  P casesF5021;
  P valF5020;
  P x_2274F5019;
  P x_2275F5018;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2275_80,1);
  x_2275F5018 = T1;
  FUNINIT(x_2275F5018, 1,return_);
  x_2274F5019 = FREEREF(0);
  valF5020 = YPfalse;
  valF5020 = BOXFAB(valF5020);
  casesF5021 = YPfalse;
  casesF5021 = BOXFAB(casesF5021);
  T7 = CALL2(1,VARREF(YisaQ),x_2274F5019,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2274F5019,LITREF(lit_92),x_2275F5018);
    x_2274F5022 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2274F5022,x_2275F5018);
    BOXVAL(valF5020) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2274F5022);
    x_2274F5023 = T12;
    BOXVAL(casesF5021) = x_2274F5023;
    x_2274F5024 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2274F5024,x_2275F5018);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2275F5018,LITREF(lit_6),x_2274F5019);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T19 = BOXVAL(valF5020);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T21 = BOXVAL(casesF5021);
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

FUNCODEDEF(fun_x_2283_83) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2287_84) {
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
  P varF5035;
  P x_2286F5034;
  P x_2286F5033;
  P x_2286F5032;
  P x_2286F5031;
  P x_2286F5030;
  P restF5029;
  P thenF5028;
  P patF5027;
  P x_2286F5026;
  P x_2287F5025;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2287_84,1);
  x_2287F5025 = T1;
  FUNINIT(x_2287F5025, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_2286F5026 = T3;
  patF5027 = YPfalse;
  patF5027 = BOXFAB(patF5027);
  thenF5028 = YPfalse;
  thenF5028 = BOXFAB(thenF5028);
  restF5029 = YPfalse;
  restF5029 = BOXFAB(restF5029);
  T10 = CALL2(1,VARREF(YisaQ),x_2286F5026,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2286F5026,x_2287F5025);
    x_2286F5030 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2286F5030,x_2287F5025);
    BOXVAL(patF5027) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2286F5030);
    x_2286F5031 = T15;
    BOXVAL(thenF5028) = x_2286F5031;
    x_2286F5032 = Ynil;
    T17 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2286F5032,x_2287F5025);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_2286F5026);
    x_2286F5033 = T18;
    BOXVAL(restF5029) = x_2286F5033;
    x_2286F5034 = Ynil;
    T20 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2286F5034,x_2287F5025);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_2287F5025,LITREF(lit_6),x_2286F5026);
  }
  T24 = BOXVAL(patF5027);
  T23 = CALL2(1,VARREF(YmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T27 = BOXVAL(thenF5028);
    T25 = CALL3(1,VARREF(YmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YmacrosYgensym));
    varF5035 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T36 = CALL1(1,VARREF(Ylst),varF5035);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T45 = BOXVAL(patF5027);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF5035);
    T43 = CALL3(1,VARREF(YmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T50 = BOXVAL(thenF5028);
    T48 = CALL3(1,VARREF(YmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
    T54 = CALL1(1,VARREF(Ylst),varF5035);
    T55 = BOXVAL(restF5029);
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

FUNCODEDEF(fun_x_2285_86) {
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
  P x_2284F5037;
  P x_2285F5036;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2285_86,3);
  x_2285F5036 = T1;
  FUNINIT(x_2285F5036, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_2284F5037 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_2284F5037,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2284F5037,x_2285F5036);
  } else {
    T6 = CALL2(1,x_2285F5036,LITREF(lit_6),x_2284F5037);
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
  P x_2282F5044;
  P x_2282F5043;
  P x_2282F5042;
  P casesF5041;
  P expF5040;
  P x_2282F5039;
  P x_2283F5038;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2283_83,1);
  x_2283F5038 = T1;
  FUNINIT(x_2283F5038, 1,return_);
  x_2282F5039 = FREEREF(0);
  expF5040 = YPfalse;
  expF5040 = BOXFAB(expF5040);
  casesF5041 = YPfalse;
  casesF5041 = BOXFAB(casesF5041);
  T7 = CALL2(1,VARREF(YisaQ),x_2282F5039,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2282F5039,LITREF(lit_95),x_2283F5038);
    x_2282F5042 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2282F5042,x_2283F5038);
    BOXVAL(expF5040) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2282F5042);
    x_2282F5043 = T12;
    BOXVAL(casesF5041) = x_2282F5043;
    x_2282F5044 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2282F5044,x_2283F5038);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2283F5038,LITREF(lit_6),x_2282F5039);
  }
  T17 = FUNFAB(fun_87,2,casesF5041,expF5040);
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

FUNCODEDEF(fun_x_2291_90) {
  P msg_,args_;
  P T0;
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
  P x_2290F5053;
  P x_2290F5052;
  P x_2290F5051;
  P x_2290F5050;
  P argsF5049;
  P messageF5048;
  P condF5047;
  P x_2290F5046;
  P x_2291F5045;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2291_90,1);
  x_2291F5045 = T1;
  FUNINIT(x_2291F5045, 1,return_);
  x_2290F5046 = FREEREF(0);
  condF5047 = YPfalse;
  condF5047 = BOXFAB(condF5047);
  messageF5048 = YPfalse;
  messageF5048 = BOXFAB(messageF5048);
  argsF5049 = YPfalse;
  argsF5049 = BOXFAB(argsF5049);
  T9 = CALL2(1,VARREF(YisaQ),x_2290F5046,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2290F5046,LITREF(lit_102),x_2291F5045);
    x_2290F5050 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2290F5050,x_2291F5045);
    BOXVAL(condF5047) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2290F5050);
    x_2290F5051 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2290F5051,x_2291F5045);
    BOXVAL(messageF5048) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_2290F5051);
    x_2290F5052 = T17;
    BOXVAL(argsF5049) = x_2290F5052;
    x_2290F5053 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2290F5053,x_2291F5045);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_2291F5045,LITREF(lit_6),x_2290F5046);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T27 = BOXVAL(condF5047);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = BOXVAL(messageF5048);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF5049);
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

FUNCODEDEF(fun_x_2299_93) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2301_94) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2303_95) {
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
  P x_2302F5060;
  P x_2302F5059;
  P x_2302F5058;
  P valF5057;
  P keyF5056;
  P x_2302F5055;
  P x_2303F5054;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2303_95,3);
  x_2303F5054 = T1;
  FUNINIT(x_2303F5054, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_2302F5055 = T3;
  keyF5056 = YPfalse;
  keyF5056 = BOXFAB(keyF5056);
  valF5057 = YPfalse;
  valF5057 = BOXFAB(valF5057);
  T8 = CALL2(1,VARREF(YisaQ),x_2302F5055,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2302F5055,LITREF(lit_56),x_2303F5054);
    x_2302F5058 = T10;
    T12 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2302F5058,x_2303F5054);
    BOXVAL(keyF5056) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2302F5058);
    x_2302F5059 = T13;
    T15 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2302F5059,x_2303F5054);
    BOXVAL(valF5057) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2302F5059);
    x_2302F5060 = T16;
    T17 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2302F5060,x_2303F5054);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_2303F5054,LITREF(lit_6),x_2302F5055);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T24 = BOXVAL(keyF5056);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF5057);
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
  P stateF5067;
  P x_2300F5066;
  P x_2300F5065;
  P expF5064;
  P varF5063;
  P x_2300F5062;
  P x_2301F5061;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2301_94,1);
  x_2301F5061 = T1;
  FUNINIT(x_2301F5061, 1,return_);
  x_2300F5062 = FREEREF(0);
  varF5063 = YPfalse;
  varF5063 = BOXFAB(varF5063);
  expF5064 = YPfalse;
  expF5064 = BOXFAB(expF5064);
  T7 = CALL2(1,VARREF(YisaQ),x_2300F5062,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2300F5062,x_2301F5061);
    BOXVAL(varF5063) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2300F5062);
    x_2300F5065 = T10;
    T12 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2300F5065,x_2301F5061);
    BOXVAL(expF5064) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2300F5065);
    x_2300F5066 = T13;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2300F5066,x_2301F5061);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_2301F5061,LITREF(lit_6),x_2300F5062);
  }
  T17 = CALL0(1,VARREF(YmacrosYgensym));
  stateF5067 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(2));
  T22 = CALL1(1,VARREF(Ylst),stateF5067);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_112));
  T27 = BOXVAL(expF5064);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YmacrosYpair),T21,FREEREF(3));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
  T31 = CALL1(1,VARREF(Ylst),stateF5067);
  T29 = CALL3(1,VARREF(YmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YmacrosYpair),T29,FREEREF(4));
  T34 = FUNFAB(fun_96,2,varF5063,stateF5067);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YmacrosYpair),T33,FREEREF(5));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T38 = CALL1(1,VARREF(Ylst),stateF5067);
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
  P clauseF5069;
  P loopF5068;
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
    loopF5068 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
    T6 = CALL1(1,VARREF(Ylst),loopF5068);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
    T12 = CALL3(1,VARREF(YmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF5068);
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
    clauseF5069 = T23;
    T25 = FUNFAB(fun_97,7,clauseF5069,FREEREF(1),clauses_,inits_,preds_,nows_,nexts_);
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  P return_;
  P grokF5079;
  P x_2298F5078;
  P x_2298F5077;
  P x_2298F5076;
  P x_2298F5075;
  P x_2298F5074;
  P bodyF5073;
  P clausesF5072;
  P x_2298F5071;
  P x_2299F5070;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2299_93,1);
  x_2299F5070 = T1;
  FUNINIT(x_2299F5070, 1,return_);
  x_2298F5071 = FREEREF(0);
  clausesF5072 = YPfalse;
  clausesF5072 = BOXFAB(clausesF5072);
  bodyF5073 = YPfalse;
  bodyF5073 = BOXFAB(bodyF5073);
  T7 = CALL2(1,VARREF(YisaQ),x_2298F5071,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2298F5071,LITREF(lit_104),x_2299F5070);
    x_2298F5074 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2298F5074,x_2299F5070);
    x_2298F5075 = T11;
    BOXVAL(clausesF5072) = x_2298F5075;
    x_2298F5076 = Ynil;
    T13 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2298F5076,x_2299F5070);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2298F5074);
    x_2298F5077 = T14;
    BOXVAL(bodyF5073) = x_2298F5077;
    x_2298F5078 = Ynil;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2298F5078,x_2299F5070);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_2299F5070,LITREF(lit_6),x_2298F5071);
  }
  T19 = FUNSHELL(1,fun_grok_98,2);
  grokF5079 = T19;
  FUNINIT(grokF5079, 2,bodyF5073,grokF5079);
  T21 = BOXVAL(clausesF5072);
  T20 = CALLN(0,grokF5079,5,T21,Ynil,Ynil,Ynil,Ynil);
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

FUNCODEDEF(fun_x_2307_101) {
  P msg_,args_;
  P T0;
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
  P x_2306F5086;
  P x_2306F5085;
  P x_2306F5084;
  P bodyF5083;
  P testF5082;
  P x_2306F5081;
  P x_2307F5080;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2307_101,1);
  x_2307F5080 = T1;
  FUNINIT(x_2307F5080, 1,return_);
  x_2306F5081 = FREEREF(0);
  testF5082 = YPfalse;
  testF5082 = BOXFAB(testF5082);
  bodyF5083 = YPfalse;
  bodyF5083 = BOXFAB(bodyF5083);
  T7 = CALL2(1,VARREF(YisaQ),x_2306F5081,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2306F5081,LITREF(lit_119),x_2307F5080);
    x_2306F5084 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2306F5084,x_2307F5080);
    BOXVAL(testF5082) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2306F5084);
    x_2306F5085 = T12;
    BOXVAL(bodyF5083) = x_2306F5085;
    x_2306F5086 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2306F5086,x_2307F5080);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2307F5080,LITREF(lit_6),x_2306F5081);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T24 = BOXVAL(testF5082);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF5083);
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

FUNCODEDEF(fun_x_2311_104) {
  P msg_,args_;
  P T0;
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
  P x_2310F5093;
  P x_2310F5092;
  P x_2310F5091;
  P bodyF5090;
  P testF5089;
  P x_2310F5088;
  P x_2311F5087;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2311_104,1);
  x_2311F5087 = T1;
  FUNINIT(x_2311F5087, 1,return_);
  x_2310F5088 = FREEREF(0);
  testF5089 = YPfalse;
  testF5089 = BOXFAB(testF5089);
  bodyF5090 = YPfalse;
  bodyF5090 = BOXFAB(bodyF5090);
  T7 = CALL2(1,VARREF(YisaQ),x_2310F5088,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2310F5088,LITREF(lit_122),x_2311F5087);
    x_2310F5091 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2310F5091,x_2311F5087);
    BOXVAL(testF5089) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2310F5091);
    x_2310F5092 = T12;
    BOXVAL(bodyF5090) = x_2310F5092;
    x_2310F5093 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2310F5093,x_2311F5087);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2311F5087,LITREF(lit_6),x_2310F5088);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_120));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T24 = BOXVAL(testF5089);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF5090);
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

FUNCODEDEF(fun_x_2315_107) {
  P msg_,args_;
  P T0;
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
  P x_2314F5100;
  P x_2314F5099;
  P x_2314F5098;
  P expF5097;
  P bindingF5096;
  P x_2314F5095;
  P x_2315F5094;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2315_107,1);
  x_2315F5094 = T1;
  FUNINIT(x_2315F5094, 1,return_);
  x_2314F5095 = FREEREF(0);
  bindingF5096 = YPfalse;
  bindingF5096 = BOXFAB(bindingF5096);
  expF5097 = YPfalse;
  expF5097 = BOXFAB(expF5097);
  T7 = CALL2(1,VARREF(YisaQ),x_2314F5095,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2314F5095,LITREF(lit_124),x_2315F5094);
    x_2314F5098 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2314F5098,x_2315F5094);
    BOXVAL(bindingF5096) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2314F5098);
    x_2314F5099 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2314F5099,x_2315F5094);
    BOXVAL(expF5097) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2314F5099);
    x_2314F5100 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2314F5100,x_2315F5094);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_2315F5094,LITREF(lit_6),x_2314F5095);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_125));
  T21 = BOXVAL(bindingF5096);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T23 = BOXVAL(expF5097);
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

FUNCODEDEF(fun_x_2323_110) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2327_111) {
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
  P old_valueF5112;
  P nameF5111;
  P x_2326F5110;
  P x_2326F5109;
  P x_2326F5108;
  P x_2326F5107;
  P x_2326F5106;
  P restF5105;
  P valueF5104;
  P varF5103;
  P x_2326F5102;
  P x_2327F5101;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2327_111,2);
  x_2327F5101 = T1;
  FUNINIT(x_2327F5101, 2,return_,FREEREF(0));
  T3 = BOXVAL(FREEREF(0));
  x_2326F5102 = T3;
  varF5103 = YPfalse;
  varF5103 = BOXFAB(varF5103);
  valueF5104 = YPfalse;
  valueF5104 = BOXFAB(valueF5104);
  restF5105 = YPfalse;
  restF5105 = BOXFAB(restF5105);
  T10 = CALL2(1,VARREF(YisaQ),x_2326F5102,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2326F5102,x_2327F5101);
    x_2326F5106 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2326F5106,x_2327F5101);
    BOXVAL(varF5103) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2326F5106);
    x_2326F5107 = T15;
    T17 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2326F5107,x_2327F5101);
    BOXVAL(valueF5104) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2326F5107);
    x_2326F5108 = T18;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2326F5108,x_2327F5101);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_2326F5102);
    x_2326F5109 = T20;
    BOXVAL(restF5105) = x_2326F5109;
    x_2326F5110 = Ynil;
    T22 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2326F5110,x_2327F5101);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_2327F5101,LITREF(lit_6),x_2326F5102);
  }
  T26 = BOXVAL(varF5103);
  T25 = CALL1(1,VARREF(YmacrosYvar_name),T26);
  nameF5111 = T25;
  T28 = CALL0(1,VARREF(YmacrosYgensym));
  old_valueF5112 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T35 = CALL1(1,VARREF(Ylst),old_valueF5112);
  T36 = CALL1(1,VARREF(Ylst),nameF5111);
  T34 = CALL3(1,VARREF(YmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T46 = CALL1(1,VARREF(Ylst),nameF5111);
  T48 = BOXVAL(valueF5104);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALLN(1,VARREF(YmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T54 = BOXVAL(restF5105);
  T53 = CALL2(1,VARREF(YmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALLN(1,VARREF(YmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALLN(1,VARREF(YmacrosYcat),4,T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T59 = CALL1(1,VARREF(Ylst),nameF5111);
  T60 = CALL1(1,VARREF(Ylst),old_valueF5112);
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

FUNCODEDEF(fun_x_2325_113) {
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
  P x_2324F5114;
  P x_2325F5113;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2325_113,3);
  x_2325F5113 = T1;
  FUNINIT(x_2325F5113, 3,return_,FREEREF(0),FREEREF(1));
  T3 = BOXVAL(FREEREF(0));
  x_2324F5114 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_2324F5114,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2324F5114,x_2325F5113);
  } else {
    T6 = CALL2(1,x_2325F5113,LITREF(lit_6),x_2324F5114);
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
  P x_2322F5121;
  P x_2322F5120;
  P x_2322F5119;
  P bodyF5118;
  P bindingsF5117;
  P x_2322F5116;
  P x_2323F5115;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2323_110,1);
  x_2323F5115 = T1;
  FUNINIT(x_2323F5115, 1,return_);
  x_2322F5116 = FREEREF(0);
  bindingsF5117 = YPfalse;
  bindingsF5117 = BOXFAB(bindingsF5117);
  bodyF5118 = YPfalse;
  bodyF5118 = BOXFAB(bodyF5118);
  T7 = CALL2(1,VARREF(YisaQ),x_2322F5116,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2322F5116,LITREF(lit_127),x_2323F5115);
    x_2322F5119 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2322F5119,x_2323F5115);
    BOXVAL(bindingsF5117) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2322F5119);
    x_2322F5120 = T12;
    BOXVAL(bodyF5118) = x_2322F5120;
    x_2322F5121 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2322F5121,x_2323F5115);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2323F5115,LITREF(lit_6),x_2322F5116);
  }
  T17 = FUNFAB(fun_114,2,bindingsF5117,bodyF5118);
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

FUNCODEDEF(fun_x_2331_117) {
  P msg_,args_;
  P T0;
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
  P vnamF5131;
  P typF5130;
  P namF5129;
  P x_2330F5128;
  P x_2330F5127;
  P x_2330F5126;
  P valueF5125;
  P varF5124;
  P x_2330F5123;
  P x_2331F5122;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2331_117,1);
  x_2331F5122 = T1;
  FUNINIT(x_2331F5122, 1,return_);
  x_2330F5123 = FREEREF(0);
  varF5124 = YPfalse;
  varF5124 = BOXFAB(varF5124);
  valueF5125 = YPfalse;
  valueF5125 = BOXFAB(valueF5125);
  T7 = CALL2(1,VARREF(YisaQ),x_2330F5123,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2330F5123,LITREF(lit_133),x_2331F5122);
    x_2330F5126 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2330F5126,x_2331F5122);
    BOXVAL(varF5124) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2330F5126);
    x_2330F5127 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2330F5127,x_2331F5122);
    BOXVAL(valueF5125) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2330F5127);
    x_2330F5128 = T15;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2330F5128,x_2331F5122);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_2331F5122,LITREF(lit_6),x_2330F5123);
  }
  T20 = BOXVAL(varF5124);
  T19 = CALL1(1,VARREF(YmacrosYvar_name),T20);
  namF5129 = T19;
  T23 = BOXVAL(varF5124);
  T22 = CALL1(1,VARREF(YmacrosYvar_type),T23);
  typF5130 = T22;
  T25 = CALL3(1,VARREF(YmacrosYcat_sym),LITREF(lit_134),namF5129,LITREF(lit_135));
  vnamF5131 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_125));
  T31 = CALL1(1,VARREF(Ylst),vnamF5131);
  T33 = BOXVAL(valueF5125);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALLN(1,VARREF(YmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T37 = CALL1(1,VARREF(Ylst),namF5129);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_137));
  T41 = CALL1(1,VARREF(Ylst),typF5130);
  T39 = CALL3(1,VARREF(YmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF5131);
  T35 = CALLN(1,VARREF(YmacrosYcat),5,T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T47 = CALL1(1,VARREF(YmacrosYfab_setter_name),namF5129);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T53 = CALL1(1,VARREF(Ylst),typF5130);
  T51 = CALL3(1,VARREF(YmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T57 = CALL1(1,VARREF(Ylst),vnamF5131);
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

FUNCODEDEF(fun_x_2335_120) {
  P msg_,args_;
  P T0;
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
  P x_2334F5136;
  P x_2334F5135;
  P bodyF5134;
  P x_2334F5133;
  P x_2335F5132;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2335_120,1);
  x_2335F5132 = T1;
  FUNINIT(x_2335F5132, 1,return_);
  x_2334F5133 = FREEREF(0);
  bodyF5134 = YPfalse;
  bodyF5134 = BOXFAB(bodyF5134);
  T5 = CALL2(1,VARREF(YisaQ),x_2334F5133,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2334F5133,LITREF(lit_140),x_2335F5132);
    x_2334F5135 = T7;
    BOXVAL(bodyF5134) = x_2334F5135;
    x_2334F5136 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2334F5136,x_2335F5132);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_2335F5132,LITREF(lit_6),x_2334F5133);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_127));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF5134);
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

FUNCODEDEF(fun_x_2339_123) {
  P msg_,args_;
  P T0;
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
  P x_2338F5141;
  P x_2338F5140;
  P namesF5139;
  P x_2338F5138;
  P x_2339F5137;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2339_123,1);
  x_2339F5137 = T1;
  FUNINIT(x_2339F5137, 1,return_);
  x_2338F5138 = FREEREF(0);
  namesF5139 = YPfalse;
  namesF5139 = BOXFAB(namesF5139);
  T5 = CALL2(1,VARREF(YisaQ),x_2338F5138,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2338F5138,LITREF(lit_143),x_2339F5137);
    x_2338F5140 = T7;
    BOXVAL(namesF5139) = x_2338F5140;
    x_2338F5141 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2338F5141,x_2339F5137);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_2339F5137,LITREF(lit_6),x_2338F5138);
  }
  T13 = BOXVAL(namesF5139);
  T12 = CALL1(1,VARREF(YmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF5139);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALLN(1,VARREF(YmacrosYcat),4,T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
    T28 = BOXVAL(namesF5139);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
    T33 = BOXVAL(namesF5139);
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

FUNCODEDEF(fun_x_2353_126) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2355_127) {
  P msg_,args_;
  P T0;
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
  P x_2354F5148;
  P x_2354F5147;
  P x_2354F5146;
  P restF5145;
  P nameF5144;
  P x_2354F5143;
  P x_2355F5142;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2355_127,1);
  x_2355F5142 = T1;
  FUNINIT(x_2355F5142, 1,return_);
  x_2354F5143 = FREEREF(0);
  nameF5144 = YPfalse;
  nameF5144 = BOXFAB(nameF5144);
  restF5145 = YPfalse;
  restF5145 = BOXFAB(restF5145);
  T7 = CALL2(1,VARREF(YisaQ),x_2354F5143,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2354F5143,LITREF(lit_149),x_2355F5142);
    x_2354F5146 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2354F5146,x_2355F5142);
    BOXVAL(nameF5144) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2354F5146);
    x_2354F5147 = T12;
    BOXVAL(restF5145) = x_2354F5147;
    x_2354F5148 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2354F5148,x_2355F5142);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2355F5142,LITREF(lit_6),x_2354F5143);
  }
  T17 = BOXVAL(nameF5144);
  T18 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),T17,T18);
  BOXVAL(FREEREF(1)) = T16;
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T24 = BOXVAL(nameF5144);
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

FUNCODEDEF(fun_x_2357_129) {
  P msg_,args_;
  P T0;
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
  P x_2356F5155;
  P x_2356F5154;
  P x_2356F5153;
  P restF5152;
  P nameF5151;
  P x_2356F5150;
  P x_2357F5149;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2357_129,1);
  x_2357F5149 = T1;
  FUNINIT(x_2357F5149, 1,return_);
  x_2356F5150 = FREEREF(0);
  nameF5151 = YPfalse;
  nameF5151 = BOXFAB(nameF5151);
  restF5152 = YPfalse;
  restF5152 = BOXFAB(restF5152);
  T7 = CALL2(1,VARREF(YisaQ),x_2356F5150,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2356F5150,LITREF(lit_151),x_2357F5149);
    x_2356F5153 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2356F5153,x_2357F5149);
    BOXVAL(nameF5151) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2356F5153);
    x_2356F5154 = T12;
    BOXVAL(restF5152) = x_2356F5154;
    x_2356F5155 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2356F5155,x_2357F5149);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2357F5149,LITREF(lit_6),x_2356F5150);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF5151);
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

FUNCODEDEF(fun_x_2359_131) {
  P msg_,args_;
  P T0;
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
  P x_2358F5162;
  P x_2358F5161;
  P x_2358F5160;
  P restF5159;
  P nameF5158;
  P x_2358F5157;
  P x_2359F5156;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2359_131,1);
  x_2359F5156 = T1;
  FUNINIT(x_2359F5156, 1,return_);
  x_2358F5157 = FREEREF(0);
  nameF5158 = YPfalse;
  nameF5158 = BOXFAB(nameF5158);
  restF5159 = YPfalse;
  restF5159 = BOXFAB(restF5159);
  T7 = CALL2(1,VARREF(YisaQ),x_2358F5157,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2358F5157,LITREF(lit_153),x_2359F5156);
    x_2358F5160 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2358F5160,x_2359F5156);
    BOXVAL(nameF5158) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2358F5160);
    x_2358F5161 = T12;
    BOXVAL(restF5159) = x_2358F5161;
    x_2358F5162 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2358F5162,x_2359F5156);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2359F5156,LITREF(lit_6),x_2358F5157);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF5158);
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

FUNCODEDEF(fun_x_2361_133) {
  P msg_,args_;
  P T0;
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
  P x_2360F5169;
  P x_2360F5168;
  P x_2360F5167;
  P restF5166;
  P nameF5165;
  P x_2360F5164;
  P x_2361F5163;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2361_133,1);
  x_2361F5163 = T1;
  FUNINIT(x_2361F5163, 1,return_);
  x_2360F5164 = FREEREF(0);
  nameF5165 = YPfalse;
  nameF5165 = BOXFAB(nameF5165);
  restF5166 = YPfalse;
  restF5166 = BOXFAB(restF5166);
  T7 = CALL2(1,VARREF(YisaQ),x_2360F5164,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2360F5164,LITREF(lit_125),x_2361F5163);
    x_2360F5167 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2360F5167,x_2361F5163);
    BOXVAL(nameF5165) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2360F5167);
    x_2360F5168 = T12;
    BOXVAL(restF5166) = x_2360F5168;
    x_2360F5169 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2360F5169,x_2361F5163);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2361F5163,LITREF(lit_6),x_2360F5164);
  }
  T17 = BOXVAL(FREEREF(1));
  T16 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T17);
  BOXVAL(FREEREF(1)) = T16;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T23 = BOXVAL(nameF5165);
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

FUNCODEDEF(fun_x_2363_135) {
  P msg_,args_;
  P T0;
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
  P x_2362F5180;
  P x_2362F5179;
  P x_2362F5178;
  P x_2362F5177;
  P x_2362F5176;
  P x_2362F5175;
  P defaultF5174;
  P paramsF5173;
  P nameF5172;
  P x_2362F5171;
  P x_2363F5170;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2363_135,1);
  x_2363F5170 = T1;
  FUNINIT(x_2363F5170, 1,return_);
  x_2362F5171 = FREEREF(0);
  nameF5172 = YPfalse;
  nameF5172 = BOXFAB(nameF5172);
  paramsF5173 = YPfalse;
  paramsF5173 = BOXFAB(paramsF5173);
  defaultF5174 = YPfalse;
  defaultF5174 = BOXFAB(defaultF5174);
  T9 = CALL2(1,VARREF(YisaQ),x_2362F5171,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2362F5171,LITREF(lit_156),x_2363F5170);
    x_2362F5175 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2362F5175,x_2363F5170);
    BOXVAL(nameF5172) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2362F5175);
    x_2362F5176 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2362F5176,x_2363F5170);
    x_2362F5177 = T16;
    BOXVAL(paramsF5173) = x_2362F5177;
    x_2362F5178 = Ynil;
    T18 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2362F5178,x_2363F5170);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_2362F5176);
    x_2362F5179 = T19;
    BOXVAL(defaultF5174) = x_2362F5179;
    x_2362F5180 = Ynil;
    T21 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2362F5180,x_2363F5170);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_2363F5170,LITREF(lit_6),x_2362F5171);
  }
  T24 = BOXVAL(FREEREF(1));
  T23 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),T24);
  BOXVAL(FREEREF(1)) = T23;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T29 = BOXVAL(nameF5172);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YmacrosYcat),T27,T28,Ynil);
  T30 = BOXVAL(FREEREF(1));
  T25 = CALL2(1,VARREF(YmacrosYpair),T26,T30);
  BOXVAL(FREEREF(1)) = T25;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_144));
  T37 = BOXVAL(nameF5172);
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
  P collector_F5186;
  P x_2352F5185;
  P x_2352F5184;
  P defsF5183;
  P x_2352F5182;
  P x_2353F5181;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2353_126,1);
  x_2353F5181 = T1;
  FUNINIT(x_2353F5181, 1,return_);
  x_2352F5182 = FREEREF(0);
  defsF5183 = YPfalse;
  defsF5183 = BOXFAB(defsF5183);
  T5 = CALL2(1,VARREF(YisaQ),x_2352F5182,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2352F5182,LITREF(lit_146),x_2353F5181);
    x_2352F5184 = T7;
    BOXVAL(defsF5183) = x_2352F5184;
    x_2352F5185 = Ynil;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2352F5185,x_2353F5181);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_2353F5181,LITREF(lit_6),x_2352F5182);
  }
  collector_F5186 = Ynil;
  collector_F5186 = BOXFAB(collector_F5186);
  T14 = FUNFAB(fun_137,1,collector_F5186);
  T15 = BOXVAL(defsF5183);
  CALL2(1,VARREF(YmacrosYdo),T14,T15);
  T17 = BOXVAL(collector_F5186);
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
  P tmpF5201;
  P tmpF5200;
  P tmpF5199;
  P tmpF5198;
  P tmpF5197;
  P tmpF5196;
  P tmpF5195;
  P tmpF5194;
  P tmpF5193;
  P tmpF5192;
  P tmpF5191;
  P tmpF5190;
  P tmpF5189;
  P tmpF5188;
  P tmpF5187;
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
  lit_2 = YPPsym((P)"x-2163");
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
  fun_x_2163_0 = YPmet(FUNCODEREF(fun_x_2163_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"sup"),T3);
  lit_17 = YPPsym((P)"x-2167");
  lit_18 = YPPsym((P)"app-sup");
  lit_19 = YPsb((P)"No next methods");
  T6 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2167_3 = YPmet(FUNCODEREF(fun_x_2167_3),LITREF(lit_17),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"app-sup"),T7);
  lit_20 = YPPsym((P)"x-2171");
  lit_21 = YPPsym((P)"app");
  T10 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2171_6 = YPmet(FUNCODEREF(fun_x_2171_6),LITREF(lit_20),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"app"),T11);
  lit_22 = YPPsym((P)"x-2175");
  lit_23 = YPPsym((P)"collecting");
  lit_24 = YPPsym((P)"collector-");
  lit_25 = YPPsym((P)"collected");
  T14 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2175_9 = YPmet(FUNCODEREF(fun_x_2175_9),LITREF(lit_22),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T15 = fun_11;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collecting"),T15);
  lit_26 = YPPsym((P)"x-2179");
  lit_27 = YPPsym((P)"collect");
  lit_28 = YPPsym((P)"set");
  lit_29 = YPPsym((P)"pair");
  T18 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2179_12 = YPmet(FUNCODEREF(fun_x_2179_12),LITREF(lit_26),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T19 = fun_14;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collect"),T19);
  lit_30 = YPPsym((P)"x-2183");
  lit_31 = YPPsym((P)"rev!");
  T22 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2183_15 = YPmet(FUNCODEREF(fun_x_2183_15),LITREF(lit_30),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T23 = fun_17;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"collected"),T23);
  lit_32 = YPPsym((P)"x-2187");
  lit_33 = YPPsym((P)"renew");
  lit_34 = YPPsym((P)"loop");
  lit_35 = YPPsym((P)"sets");
  lit_36 = YPPsym((P)"inits");
  T27 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2187_18 = YPmet(FUNCODEREF(fun_x_2187_18),LITREF(lit_32),T27,ENVNUL,PNUL,YPfalse);
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
  lit_41 = YPPsym((P)"x-2193");
  lit_42 = YPPsym((P)"incf");
  lit_43 = YPPsym((P)"x-2195");
  lit_44 = YPPsym((P)"+");
  T36 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2193_24 = YPmet(FUNCODEREF(fun_x_2193_24),LITREF(lit_41),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2195_25 = YPmet(FUNCODEREF(fun_x_2195_25),LITREF(lit_43),T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T37 = fun_28;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"incf"),T37);
  lit_45 = YPPsym((P)"x-2201");
  lit_46 = YPPsym((P)"decf");
  lit_47 = YPPsym((P)"x-2203");
  lit_48 = YPPsym((P)"-");
  T42 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2201_29 = YPmet(FUNCODEREF(fun_x_2201_29),LITREF(lit_45),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2203_30 = YPmet(FUNCODEREF(fun_x_2203_30),LITREF(lit_47),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T43 = fun_33;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"decf"),T43);
  lit_49 = YPPsym((P)"x-2207");
  lit_50 = YPPsym((P)"pushf");
  lit_51 = YPPsym((P)"push");
  T46 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2207_34 = YPmet(FUNCODEREF(fun_x_2207_34),LITREF(lit_49),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T47 = fun_36;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"pushf"),T47);
  lit_52 = YPPsym((P)"x-2211");
  lit_53 = YPPsym((P)"swapf");
  T50 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2211_37 = YPmet(FUNCODEREF(fun_x_2211_37),LITREF(lit_52),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_39;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"swapf"),T51);
  lit_54 = YPPsym((P)"x-2215");
  lit_55 = YPPsym((P)"popf");
  lit_56 = YPPsym((P)"tup");
  lit_57 = YPPsym((P)"pop");
  T54 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2215_40 = YPmet(FUNCODEREF(fun_x_2215_40),LITREF(lit_54),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T55 = fun_42;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"popf"),T55);
  lit_58 = YPPsym((P)"x-2219");
  lit_59 = YPPsym((P)"opf");
  lit_60 = YPPsym((P)"_");
  T58 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2219_43 = YPmet(FUNCODEREF(fun_x_2219_43),LITREF(lit_58),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T59 = fun_45;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"opf"),T59);
  lit_61 = YPPsym((P)"x-2223");
  lit_62 = YPPsym((P)"unless");
  lit_63 = YPPsym((P)"not");
  lit_64 = YPPsym((P)"seq");
  T62 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2223_46 = YPmet(FUNCODEREF(fun_x_2223_46),LITREF(lit_61),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T63 = fun_48;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"unless"),T63);
  lit_65 = YPPsym((P)"x-2227");
  lit_66 = YPPsym((P)"when");
  T66 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2227_49 = YPmet(FUNCODEREF(fun_x_2227_49),LITREF(lit_65),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T67 = fun_51;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"when"),T67);
  lit_67 = YPPsym((P)"x-2235");
  lit_68 = YPPsym((P)"or");
  lit_69 = YPPsym((P)"x-2237");
  lit_70 = YPPsym((P)"x-2239");
  lit_71 = YPPsym((P)"tmp");
  T74 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2235_52 = YPmet(FUNCODEREF(fun_x_2235_52),LITREF(lit_67),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2237_53 = YPmet(FUNCODEREF(fun_x_2237_53),LITREF(lit_69),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2239_54 = YPmet(FUNCODEREF(fun_x_2239_54),LITREF(lit_70),T72,ENVNUL,PNUL,YPfalse);
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
  lit_72 = YPPsym((P)"x-2247");
  lit_73 = YPPsym((P)"and");
  lit_74 = YPPsym((P)"x-2249");
  lit_75 = YPPsym((P)"x-2251");
  T82 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2247_59 = YPmet(FUNCODEREF(fun_x_2247_59),LITREF(lit_72),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2249_60 = YPmet(FUNCODEREF(fun_x_2249_60),LITREF(lit_74),T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2251_61 = YPmet(FUNCODEREF(fun_x_2251_61),LITREF(lit_75),T80,ENVNUL,PNUL,YPfalse);
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
  lit_76 = YPPsym((P)"x-2257");
  lit_77 = YPPsym((P)"cond");
  lit_78 = YPPsym((P)"x-2259");
  lit_79 = YPsb((P)"COND: SYNTAX ERROR BAD CASE");
  T88 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2257_66 = YPmet(FUNCODEREF(fun_x_2257_66),LITREF(lit_76),T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2259_67 = YPmet(FUNCODEREF(fun_x_2259_67),LITREF(lit_78),T87,ENVNUL,PNUL,YPfalse);
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
  lit_84 = YPPsym((P)"x-2265");
  lit_85 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_86 = YPPsym((P)"x-2267");
  lit_87 = YPsb((P)"CASE: SYNTAX ERROR BAD CASE");
  lit_88 = YPPsym((P)"x");
  T95 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2265_71 = YPmet(FUNCODEREF(fun_x_2265_71),LITREF(lit_84),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2267_72 = YPmet(FUNCODEREF(fun_x_2267_72),LITREF(lit_86),T94,ENVNUL,PNUL,YPfalse);
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
  lit_89 = YPPsym((P)"x-2271");
  lit_90 = YPPsym((P)"case-by");
  T99 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2271_77 = YPmet(FUNCODEREF(fun_x_2271_77),LITREF(lit_89),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T100 = fun_79;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case-by"),T100);
  lit_91 = YPPsym((P)"x-2275");
  lit_92 = YPPsym((P)"case");
  lit_93 = YPPsym((P)"==");
  T103 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2275_80 = YPmet(FUNCODEREF(fun_x_2275_80),LITREF(lit_91),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T104 = fun_82;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"case"),T104);
  lit_94 = YPPsym((P)"x-2283");
  lit_95 = YPPsym((P)"match");
  lit_96 = YPPsym((P)"x-2285");
  lit_97 = YPPsym((P)"x-2287");
  lit_98 = YPsb((P)"Invalid match syntax.");
  lit_99 = YPPsym((P)"mif");
  lit_100 = YPsb((P)"Failed to match.");
  T111 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2283_83 = YPmet(FUNCODEREF(fun_x_2283_83),LITREF(lit_94),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2287_84 = YPmet(FUNCODEREF(fun_x_2287_84),LITREF(lit_97),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2285_86 = YPmet(FUNCODEREF(fun_x_2285_86),LITREF(lit_96),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T112 = fun_89;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"match"),T112);
  lit_101 = YPPsym((P)"x-2291");
  lit_102 = YPPsym((P)"assert");
  T115 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2291_90 = YPmet(FUNCODEREF(fun_x_2291_90),LITREF(lit_101),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T116 = fun_92;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"assert"),T116);
  lit_103 = YPPsym((P)"x-2299");
  lit_104 = YPPsym((P)"for");
  lit_105 = YPPsym((P)"grok");
  lit_106 = YPPsym((P)"clauses");
  lit_107 = YPPsym((P)"preds");
  lit_108 = YPPsym((P)"nows");
  lit_109 = YPPsym((P)"nexts");
  lit_110 = YPPsym((P)"rep");
  lit_111 = YPPsym((P)"x-2301");
  lit_112 = YPPsym((P)"enum");
  lit_113 = YPPsym((P)"fin?");
  lit_114 = YPPsym((P)"x-2303");
  lit_115 = YPPsym((P)"now");
  lit_116 = YPPsym((P)"now-key");
  lit_117 = YPPsym((P)"nxt");
  T124 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2299_93 = YPmet(FUNCODEREF(fun_x_2299_93),LITREF(lit_103),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2301_94 = YPmet(FUNCODEREF(fun_x_2301_94),LITREF(lit_111),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2303_95 = YPmet(FUNCODEREF(fun_x_2303_95),LITREF(lit_114),T122,ENVNUL,PNUL,YPfalse);
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
  lit_118 = YPPsym((P)"x-2307");
  lit_119 = YPPsym((P)"while");
  lit_120 = YPPsym((P)"_loop");
  T128 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2307_101 = YPmet(FUNCODEREF(fun_x_2307_101),LITREF(lit_118),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T129 = fun_103;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"while"),T129);
  lit_121 = YPPsym((P)"x-2311");
  lit_122 = YPPsym((P)"until");
  T132 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2311_104 = YPmet(FUNCODEREF(fun_x_2311_104),LITREF(lit_121),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_106;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"until"),T133);
  lit_123 = YPPsym((P)"x-2315");
  lit_124 = YPPsym((P)"ddv");
  lit_125 = YPPsym((P)"dv");
  T136 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2315_107 = YPmet(FUNCODEREF(fun_x_2315_107),LITREF(lit_123),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_109;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"ddv"),T137);
  lit_126 = YPPsym((P)"x-2323");
  lit_127 = YPPsym((P)"dlet");
  lit_128 = YPPsym((P)"x-2325");
  lit_129 = YPPsym((P)"x-2327");
  lit_130 = YPsb((P)"DLET: SYNTAX ERROR BAD BINDINGS");
  lit_131 = YPPsym((P)"fin");
  T144 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2323_110 = YPmet(FUNCODEREF(fun_x_2323_110),LITREF(lit_126),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2327_111 = YPmet(FUNCODEREF(fun_x_2327_111),LITREF(lit_129),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2325_113 = YPmet(FUNCODEREF(fun_x_2325_113),LITREF(lit_128),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T145 = fun_116;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"dlet"),T145);
  lit_132 = YPPsym((P)"x-2331");
  lit_133 = YPPsym((P)"def-fun-var");
  lit_134 = YPsb((P)"*");
  lit_135 = YPsb((P)"*");
  lit_136 = YPPsym((P)"dm");
  lit_137 = YPPsym((P)"=>");
  lit_138 = YPPsym((P)"z");
  T148 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2331_117 = YPmet(FUNCODEREF(fun_x_2331_117),LITREF(lit_132),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T149 = fun_119;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"def-fun-var"),T149);
  lit_139 = YPPsym((P)"x-2335");
  lit_140 = YPPsym((P)"without-prop-unbound-errors");
  lit_141 = YPPsym((P)"*report-prop-unbound-errors?*");
  T152 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2335_120 = YPmet(FUNCODEREF(fun_x_2335_120),LITREF(lit_139),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T153 = fun_122;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"without-prop-unbound-errors"),T153);
  lit_142 = YPPsym((P)"x-2339");
  lit_143 = YPPsym((P)"need-implementation");
  lit_144 = YPPsym((P)"export");
  T156 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2339_123 = YPmet(FUNCODEREF(fun_x_2339_123),LITREF(lit_142),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_0)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T157 = fun_125;
  YPmacro(YPPsym((P)"macros"),YPPsym((P)"need-implementation"),T157);
  lit_145 = YPPsym((P)"x-2353");
  lit_146 = YPPsym((P)"exported");
  lit_147 = YPPsym((P)"d");
  lit_148 = YPPsym((P)"x-2355");
  lit_149 = YPPsym((P)"df");
  lit_150 = YPPsym((P)"x-2357");
  lit_151 = YPPsym((P)"dg");
  lit_152 = YPPsym((P)"x-2359");
  lit_153 = YPPsym((P)"dc");
  lit_154 = YPPsym((P)"x-2361");
  lit_155 = YPPsym((P)"x-2363");
  lit_156 = YPPsym((P)"dp");
  T171 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2353_126 = YPmet(FUNCODEREF(fun_x_2353_126),LITREF(lit_145),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2355_127 = YPmet(FUNCODEREF(fun_x_2355_127),LITREF(lit_148),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2357_129 = YPmet(FUNCODEREF(fun_x_2357_129),LITREF(lit_150),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2359_131 = YPmet(FUNCODEREF(fun_x_2359_131),LITREF(lit_152),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2361_133 = YPmet(FUNCODEREF(fun_x_2361_133),LITREF(lit_154),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2363_135 = YPmet(FUNCODEREF(fun_x_2363_135),LITREF(lit_155),T162,ENVNUL,PNUL,YPfalse);
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
  tmpF5187 = YPfalse;
  if (tmpF5187 != YPfalse) {
    T173 = VARREF(YmacrosYEE);
  } else {
    T173 = YPfalse;
  }
  tmpF5188 = YPfalse;
  if (tmpF5188 != YPfalse) {
    T174 = VARREF(YmacrosYdo);
  } else {
    T174 = YPfalse;
  }
  tmpF5189 = YPfalse;
  if (tmpF5189 != YPfalse) {
    T175 = VARREF(YmacrosYrevX);
  } else {
    T175 = YPfalse;
  }
  tmpF5190 = YPfalse;
  if (tmpF5190 != YPfalse) {
    T176 = VARREF(YmacrosYcat);
  } else {
    T176 = YPfalse;
  }
  tmpF5191 = YPfalse;
  if (tmpF5191 != YPfalse) {
    T177 = VARREF(YmacrosYelt);
  } else {
    T177 = YPfalse;
  }
  tmpF5192 = YPfalse;
  if (tmpF5192 != YPfalse) {
    T178 = VARREF(YmacrosYemptyQ);
  } else {
    T178 = YPfalse;
  }
  tmpF5193 = YPfalse;
  if (tmpF5193 != YPfalse) {
    T179 = VARREF(Yerror);
  } else {
    T179 = YPfalse;
  }
  tmpF5194 = YPfalse;
  if (tmpF5194 != YPfalse) {
    T180 = VARREF(YmacrosYgensym);
  } else {
    T180 = YPfalse;
  }
  tmpF5195 = YPfalse;
  if (tmpF5195 != YPfalse) {
    T181 = VARREF(Ylst);
  } else {
    T181 = YPfalse;
  }
  tmpF5196 = YPfalse;
  if (tmpF5196 != YPfalse) {
    T182 = VARREF(YmacrosYfab_setter_name);
  } else {
    T182 = YPfalse;
  }
  tmpF5197 = YPfalse;
  if (tmpF5197 != YPfalse) {
    T183 = VARREF(YmacrosYcat_sym);
  } else {
    T183 = YPfalse;
  }
  tmpF5198 = YPfalse;
  if (tmpF5198 != YPfalse) {
    T184 = VARREF(YmacrosYmap);
  } else {
    T184 = YPfalse;
  }
  tmpF5199 = YPfalse;
  if (tmpF5199 != YPfalse) {
    T185 = VARREF(YmacrosYmatch_atom);
  } else {
    T185 = YPfalse;
  }
  tmpF5200 = YPfalse;
  if (tmpF5200 != YPfalse) {
    T186 = VARREF(YmacrosYmatch_empty_list);
  } else {
    T186 = YPfalse;
  }
  tmpF5201 = YPfalse;
  if (tmpF5201 != YPfalse) {
    T187 = VARREF(YmacrosYmatch_sublist);
  } else {
    T187 = YPfalse;
  }
  T188 = YPfalse;
  return T188;
}

P YmacrosY___main_1___() {
  P tmpF5207;
  P tmpF5206;
  P tmpF5205;
  P tmpF5204;
  P tmpF5203;
  P tmpF5202;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  tmpF5202 = YPfalse;
  if (tmpF5202 != YPfalse) {
    T0 = VARREF(YmacrosYmatch_unquote);
  } else {
    T0 = YPfalse;
  }
  tmpF5203 = YPfalse;
  if (tmpF5203 != YPfalse) {
    T1 = VARREF(YmacrosYpair);
  } else {
    T1 = YPfalse;
  }
  tmpF5204 = YPfalse;
  if (tmpF5204 != YPfalse) {
    T2 = VARREF(Ytup);
  } else {
    T2 = YPfalse;
  }
  tmpF5205 = YPfalse;
  if (tmpF5205 != YPfalse) {
    T3 = VARREF(YmacrosYvar_name);
  } else {
    T3 = YPfalse;
  }
  tmpF5206 = YPfalse;
  if (tmpF5206 != YPfalse) {
    T4 = VARREF(YmacrosYvar_type);
  } else {
    T4 = YPfalse;
  }
  tmpF5207 = YPfalse;
  if (tmpF5207 != YPfalse) {
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
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"vec", &module_info_boot, "vec"},
  {"<met>", &module_info_boot, "<met>"},
  {"mif", &module_info_boot, "mif"},
  {"use/export", &module_info_boot, "use/export"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"isa", &module_info_boot, "isa"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"not", &module_info_boot, "not"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"%f*", &module_info_boot, "%f*"},
  {"%iu", &module_info_boot, "%iu"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%im", &module_info_boot, "%im"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"rep", &module_info_boot, "rep"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<log>", &module_info_boot, "<log>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"%raw", &module_info_boot, "%raw"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"%ft", &module_info_boot, "%ft"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"seq", &module_info_boot, "seq"},
  {"%i<", &module_info_boot, "%i<"},
  {"%selt", &module_info_boot, "%selt"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"class-props", &module_info_boot, "class-props"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"error", &module_info_boot, "error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%cb", &module_info_boot, "%cb"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"quote", &module_info_boot, "quote"},
  {"%str", &module_info_boot, "%str"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"%put", &module_info_boot, "%put"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"tail", &module_info_boot, "tail"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"%i&", &module_info_boot, "%i&"},
  {"class-name", &module_info_boot, "class-name"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"if", &module_info_boot, "if"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"%it/", &module_info_boot, "%it/"},
  {"%pair", &module_info_boot, "%pair"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"%c=", &module_info_boot, "%c="},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%f=", &module_info_boot, "%f="},
  {"dc", &module_info_boot, "dc"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"dl", &module_info_boot, "dl"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"dg", &module_info_boot, "dg"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<int>", &module_info_boot, "<int>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"%fu", &module_info_boot, "%fu"},
  {"%sb", &module_info_boot, "%sb"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"%velt", &module_info_boot, "%velt"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"%prop", &module_info_boot, "%prop"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"%f-", &module_info_boot, "%f-"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%isa", &module_info_boot, "%isa"},
  {"head", &module_info_boot, "head"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"and", NULL},
  {"gensym", &YmacrosYgensym},
  {"or", NULL},
  {"match-sublist", &YmacrosYmatch_sublist},
  {"until", NULL},
  {"var-name", &YmacrosYvar_name},
  {"cond", NULL},
  {"app", NULL},
  {"exported", NULL},
  {"incf", NULL},
  {"opf", NULL},
  {"map", &YmacrosYmap},
  {"match", NULL},
  {"assert", NULL},
  {"renew", NULL},
  {"decf", NULL},
  {"fab-setter-name", &YmacrosYfab_setter_name},
  {"collected", NULL},
  {"match-atom", &YmacrosYmatch_atom},
  {"do-case-by", &YmacrosYdo_case_by},
  {"var-type", &YmacrosYvar_type},
  {"pushf", NULL},
  {"ddv", NULL},
  {"collecting", NULL},
  {"match-unquote", &YmacrosYmatch_unquote},
  {"lift-place-subforms", &YmacrosYlift_place_subforms},
  {"---main-1---", NULL},
  {"cat", &YmacrosYcat},
  {"for", NULL},
  {"napp", &YmacrosYnapp},
  {"case-by", NULL},
  {"swapf", NULL},
  {"def-fun-var", NULL},
  {"dlet", NULL},
  {"match-empty-list", &YmacrosYmatch_empty_list},
  {"when", NULL},
  {"collect", NULL},
  {"unless", NULL},
  {"pair", &YmacrosYpair},
  {"app-sup", NULL},
  {"elt", &YmacrosYelt},
  {"do", &YmacrosYdo},
  {"while", NULL},
  {"empty?", &YmacrosYemptyQ},
  {"need-implementation", NULL},
  {"sup", NULL},
  {"cat-sym", &YmacrosYcat_sym},
  {"---main-0---", NULL},
  {"==", &YmacrosYEE},
  {"rev!", &YmacrosYrevX},
  {"without-prop-unbound-errors", NULL},
  {"case", NULL},
  {"popf", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"and", "and"},
  {"gensym", "gensym"},
  {"or", "or"},
  {"match-sublist", "match-sublist"},
  {"until", "until"},
  {"var-name", "var-name"},
  {"cond", "cond"},
  {"app", "app"},
  {"exported", "exported"},
  {"incf", "incf"},
  {"opf", "opf"},
  {"map", "map"},
  {"match", "match"},
  {"assert", "assert"},
  {"renew", "renew"},
  {"decf", "decf"},
  {"fab-setter-name", "fab-setter-name"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"collected", "collected"},
  {"match-atom", "match-atom"},
  {"var-type", "var-type"},
  {"pushf", "pushf"},
  {"error", "error"},
  {"ddv", "ddv"},
  {"collecting", "collecting"},
  {"unless", "unless"},
  {"match-unquote", "match-unquote"},
  {"cat", "cat"},
  {"pair", "pair"},
  {"napp", "napp"},
  {"case-by", "case-by"},
  {"swapf", "swapf"},
  {"def-fun-var", "def-fun-var"},
  {"dlet", "dlet"},
  {"match-empty-list", "match-empty-list"},
  {"for", "for"},
  {"when", "when"},
  {"collect", "collect"},
  {"app-sup", "app-sup"},
  {"elt", "elt"},
  {"do", "do"},
  {"while", "while"},
  {"empty?", "empty?"},
  {"need-implementation", "need-implementation"},
  {"sup", "sup"},
  {"cat-sym", "cat-sym"},
  {"==", "=="},
  {"rev!", "rev!"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"lst", "lst"},
  {"tup", "tup"},
  {"case", "case"},
  {"popf", "popf"},
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
