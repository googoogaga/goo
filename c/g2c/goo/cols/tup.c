/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/tup */

EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Ynil,"goo/boot","nil");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ynul,"goo/boot","nul");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YgooScolsStupYto_str,"goo/cols/tup","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Ynew,"goo/boot","new");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yhead,"goo/boot","head");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_12);
DEFLIT(lit_6);
DEFLIT(lit_9);
DEFLIT(lit_13);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_4);

/* FUNCTIONS: */

LOCFOR(fun_len_0);
LOCFOR(fun_elt_or_1);
LOCFOR(fun_empty_2);
LOCFOR(fun_fab_3);
LOCFOR(fun_to_str_4);
LOCFOR(fun_low_elt_5);
LOCFOR(fun_fab_elt_setter_6);
extern P YgooScolsStupY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_len_0) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPtlen(x_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_1) {
  P x_,i_,default_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    T3 = (P)YPiu(i_);
    T2 = (P)YPtelt(x_,T3);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_2) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YPtnul));
}

FUNCODEDEF(fun_fab_3) {
  P x_,s_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPtup(T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_4) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_10),T1,LITREF(lit_11));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_5) {
  P x_,i_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_6) {
  P z_,x_,i_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsStupY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"len");
  lit_1 = YPPsym((P)"x");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_0 = YPmet(FUNCODEREF(fun_len_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooStypesYlen);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooStypesYlen);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_len_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooStypesYlen,T1);
  lit_2 = YPPsym((P)"elt-or");
  lit_3 = YPPsym((P)"i");
  lit_4 = YPPsym((P)"default");
  T5 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_3),LITREF(lit_4)),YPPlist(3,VARREF(YLtupG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_1 = YPmet(FUNCODEREF(fun_elt_or_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooScolsScolYelt_or);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScolsScolYelt_or);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_elt_or_1;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScolsScolYelt_or,T6);
  lit_5 = YPPsym((P)"empty");
  lit_6 = YPPsym((P)"c");
  T11 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLtupG));
  T10 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,T11),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_empty_2 = YPmet(FUNCODEREF(fun_empty_2),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YgooScolsScolYempty);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooScolsScolYempty);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_empty_2;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooScolsScolYempty,T12);
  lit_7 = YPPsym((P)"fab");
  lit_8 = YPPsym((P)"s");
  T17 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLtupG));
  T16 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_8)),YPPlist(2,T17,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_7),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScolsScolYfab);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsScolYfab);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_fab_3;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsScolYfab,T18);
  lit_9 = YPPsym((P)"to-str");
  lit_10 = YPsb((P)"#(");
  lit_11 = YPsb((P)")");
  T22 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_4 = YPmet(FUNCODEREF(fun_to_str_4),LITREF(lit_9),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsStupYto_str);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsStupYto_str);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_to_str_4;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsStupYto_str,T23);
  lit_12 = YPPsym((P)"low-elt");
  T27 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(2,VARREF(YLtupG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_5 = YPmet(FUNCODEREF(fun_low_elt_5),LITREF(lit_12),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YgooScolsScolYlow_elt);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_low_elt_5;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooScolsScolYlow_elt,T28);
  lit_13 = YPPsym((P)"fab-elt-setter");
  lit_14 = YPPsym((P)"z");
  T34 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_1),LITREF(lit_3)),YPPlist(3,VARREF(YLanyG),VARREF(YLtupG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T33 = fun_fab_elt_setter_6 = YPmet(FUNCODEREF(fun_fab_elt_setter_6),LITREF(lit_13),T34,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsScolYfab_elt_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsScolYfab_elt_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_fab_elt_setter_6;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  T35 = VARSET(YgooScolsScolYfab_elt_setter,T36);
  T32 = T35;
  return T32;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSflat},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"use", &module_info_gooSboot, "use"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%put", &module_info_gooSboot, "%put"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"op", &module_info_gooSmacros, "op"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"export", &module_info_gooSboot, "export"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"del", &module_info_gooScolsScol, "del"},
  {"match", &module_info_gooSmacros, "match"},
  {"do", &module_info_gooSmacros, "do"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"case", &module_info_gooSmacros, "case"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%str", &module_info_gooSboot, "%str"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"rep", &module_info_gooSboot, "rep"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"def", &module_info_gooSboot, "def"},
  {"t?", &module_info_gooStypes, "t?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"error", &module_info_gooSboot, "error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"df", &module_info_gooSboot, "df"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"t=", &module_info_gooStypes, "t="},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"ds", &module_info_gooSboot, "ds"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"head", &module_info_gooSboot, "head"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"t*", &module_info_gooSboot, "t*"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"to-str", CVAR, &YgooScolsStupYto_str},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"tup", "tup"},
  {"<tup>", "<tup>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsStup;
MODULE_INFO module_info_gooScolsStup = {
  "goo/cols/tup",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSflat (void);

/* EXPRESSION: */

extern void load_module_gooScolsStup (void);

void load_module_gooScolsStup (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();
  load_module_gooScolsSflat();

  (P)YgooScolsStupY___main_0___();

}

/* END OF GENERATED CODE. */
