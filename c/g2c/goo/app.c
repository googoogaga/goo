/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: runtime/apply */

EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YPprop,"runtime/boot","%prop");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YPvnul,"runtime/boot","%vnul");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_6);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YgooSmacrosYnapp);
extern P YruntimeSapplyY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P topF943;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF943 = T1;
  T3 = (P)YOL(i_,FREEREF(1));
  if (T3 != YPfalse) {
    T4 = (P)YOoelt(FREEREF(2),i_);
    T6 = (P)YPiu(topF943);
    T7 = (P)YPiu(i_);
    T5 = (P)YPi_(T6,T7);
    (P)YPloc_off_setter(T4,FREEREF(3),T5);
    T9 = (P)YOA(i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T2 = T8;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop2_1) {
  P s_,i_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),s_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),s_);
    T5 = (P)YPiu(FREEREF(1));
    T6 = (P)YPiu(i_);
    T4 = (P)YPi_(T5,T6);
    (P)YPloc_off_setter(T3,FREEREF(0),T4);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),s_);
    T9 = (P)YOA(i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    s_ = a1;
    i_ = a2;
    goto loop;
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYnapp) {
  P proc_,nexts_,args_;
  P loop2F950;
  P loop1F949;
  P argendF948;
  P stackspaceF947;
  P tlenF946;
  P leltF945;
  P ilenF944;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(proc_, 0);
  ARG(nexts_, 1);
  NARGS(args_, 2);
loop:
  T2 = (P)YOolen(args_);
  T1 = (P)YOA(T2,YPint((P)-1));
  ilenF944 = T1;
  T4 = (P)YOoelt(args_,ilenF944);
  leltF945 = T4;
  T7 = CALL1(1,VARREF(YgooStypesYlen),leltF945);
  T6 = (P)YOA(ilenF944,T7);
  tlenF946 = T6;
  T12 = (P)YPiu(tlenF946);
  T11 = (P)YPiA((P)2,T12);
  T10 = (P)YPallocate_stack(T11);
  T9 = (P)YPlb(T10);
  stackspaceF947 = T9;
  T14 = (P)YPsp_reg();
  argendF948 = T14;
  T15 = FUNSHELL(1,fun_loop1_0,5);
  loop1F949 = T15;
  FUNINIT(loop1F949, 5,tlenF946,ilenF944,args_,stackspaceF947,loop1F949);
  T16 = CALL1(0,loop1F949,YPint((P)0));
  T17 = FUNSHELL(1,fun_loop2_1,3);
  loop2F950 = T17;
  FUNINIT(loop2F950, 3,stackspaceF947,tlenF946,loop2F950);
  T19 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),leltF945);
  T20 = (P)YOA(YPint((P)1),ilenF944);
  T18 = CALL2(0,loop2F950,T19,T20);
  T21 = (P)YPiu(tlenF946);
  T22 = (P)YPiu(tlenF946);
  (P)YPloc_off_setter(T21,stackspaceF947,T22);
  T24 = (P)YPiu(tlenF946);
  T23 = (P)YPiA((P)1,T24);
  (P)YPloc_off_setter(proc_,stackspaceF947,T23);
  (P)YPsp_reg_setter(argendF948);
  (P)YPcheck_call_types();
  T25 = (P)YPraw_call(proc_,nexts_);
  T13 = T25;
  T8 = T13;
  T5 = T8;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

P YruntimeSapplyY___main_0___() {
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"napp");
  lit_1 = YPPsym((P)"proc");
  lit_2 = YPPsym((P)"nexts");
  lit_3 = YPPsym((P)"args");
  lit_4 = YPPsym((P)"loop1");
  lit_5 = YPPsym((P)"i");
  lit_6 = YPPsym((P)"loop2");
  lit_7 = YPPsym((P)"s");
  T6 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = fun_loop1_0 = YPmet(FUNCODEREF(fun_loop1_0),LITREF(lit_4),T6,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T3 = fun_loop2_1 = YPmet(FUNCODEREF(fun_loop2_1),LITREF(lit_6),T4,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  T1 = YgooSmacrosYnapp = YPmet(FUNCODEREF(YgooSmacrosYnapp),LITREF(lit_0),T2,ENVNUL,PNUL,YPfalse);
  T8 = YgooSmacrosYnapp;
  T7 = VARSET(YgooSmacrosYnapp,T8);
  T0 = T7;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScollectionsScollection},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"head", &module_info_runtimeSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"error", &module_info_runtimeSboot, "error"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"def", &module_info_runtimeSboot, "def"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"and", &module_info_gooSmacros, "and"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"case", &module_info_gooSmacros, "case"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_runtimeSapply;
MODULE_INFO module_info_runtimeSapply = {
  "runtime/apply",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooScollectionsScollection (void);

/* EXPRESSION: */

extern void load_module_runtimeSapply (void);

void load_module_runtimeSapply (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooScollectionsScollection();

  (P)YruntimeSapplyY___main_0___();

}

/* END OF GENERATED CODE. */
