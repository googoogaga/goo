/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/tup */

EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ynul,"goo/boot","nul");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooScolsStupYto_str,"goo/cols/tup","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ynil,"goo/boot","nil");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_parents,"goo/boot","class-parents");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_9);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_0);
DEFLIT(lit_12);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_8);
DEFLIT(lit_13);
DEFLIT(lit_11);

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
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"@<", &module_info_gooSboot, "@<"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"def", &module_info_gooSboot, "def"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"df", &module_info_gooSboot, "df"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"t=", &module_info_gooStypes, "t="},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"t+", &module_info_gooStypes, "t+"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%put", &module_info_gooSboot, "%put"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"try", &module_info_gooSboot, "try"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"as", &module_info_gooStypes, "as"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"use", &module_info_gooSboot, "use"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%su", &module_info_gooSboot, "%su"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"tup", &module_info_gooSboot, "tup"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"@+", &module_info_gooSboot, "@+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"to-str", CVAR, &YgooScolsStupYto_str},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<tup>", "<tup>"},
  {"tup", "tup"},
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
