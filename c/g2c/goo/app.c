/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/app */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ylst,"goo/boot","lst");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunexec,"goo/boot","unexec");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_2);
DEFLIT(lit_4);
DEFLIT(lit_5);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YgooSmacrosYnapp);
extern P YgooSappY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P xF1625;
  P xF1624;
  P xF1623;
  P xF1622;
  P xF1621;
  P xF1620;
  P iF1619;
  P xF1618;
  P xF1617;
  P xF1616;
  P xF1615;
  P xF1614;
  P yF1613;
  P xF1612;
  P topF1611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF1611 = T1;
  xF1612 = i_;
  yF1613 = FREEREF(1);
  xF1614 = xF1612;
  xF1615 = xF1614;
  T8 = (P)YPiGG(xF1615,(P)2);
  T7 = T8;
  T6 = T7;
  xF1616 = yF1613;
  xF1617 = xF1616;
  T11 = (P)YPiGG(xF1617,(P)2);
  T10 = T11;
  T9 = T10;
  T5 = (P)YPiL(T6,T9);
  T4 = (P)YPbb(T5);
  T3 = T4;
  if (T3 != YPfalse) {
    xF1618 = FREEREF(2);
    iF1619 = i_;
    T14 = (P)YPopts_location(xF1618);
    xF1620 = iF1619;
    xF1621 = xF1620;
    T18 = (P)YPiGG(xF1621,(P)2);
    T17 = T18;
    T16 = T17;
    T15 = (P)YPi_((P)0,T16);
    T13 = (P)YPloc_off(T14,T15);
    T12 = T13;
    xF1622 = topF1611;
    xF1623 = xF1622;
    T22 = (P)YPiGG(xF1623,(P)2);
    T21 = T22;
    T20 = T21;
    xF1624 = i_;
    xF1625 = xF1624;
    T25 = (P)YPiGG(xF1625,(P)2);
    T24 = T25;
    T23 = T24;
    T19 = (P)YPi_(T20,T23);
    (P)YPloc_off_setter(T12,FREEREF(3),T19);
    T27 = (P)YOA(i_,YPint((P)1));
    a1 = T27;
    i_ = a1;
    goto loop;
    T2 = T26;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop2_1) {
  P s_,i_;
  P xF1629;
  P xF1628;
  P xF1627;
  P xF1626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    xF1626 = FREEREF(1);
    xF1627 = xF1626;
    T7 = (P)YPiGG(xF1627,(P)2);
    T6 = T7;
    T5 = T6;
    xF1628 = i_;
    xF1629 = xF1628;
    T10 = (P)YPiGG(xF1629,(P)2);
    T9 = T10;
    T8 = T9;
    T4 = (P)YPi_(T5,T8);
    (P)YPloc_off_setter(T3,FREEREF(0),T4);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    T13 = (P)YOA(i_,YPint((P)1));
    a1 = T12;
    a2 = T13;
    s_ = a1;
    i_ = a2;
    goto loop;
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYnapp) {
  P proc_,nexts_,args_;
  P xF1650;
  P xF1649;
  P xF1648;
  P xF1647;
  P xF1646;
  P xF1645;
  P loop2F1644;
  P loop1F1643;
  P argendF1642;
  P stackspaceF1641;
  P xF1640;
  P xF1639;
  P xF1638;
  P tlenF1637;
  P leltF1636;
  P xF1635;
  P xF1634;
  P iF1633;
  P xF1632;
  P ilenF1631;
  P xF1630;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1,a2,a3;
LINK_STACK();
  ARG(proc_, 0);
  ARG(nexts_, 1);
  NARGS(args_, 2);
loop:
  xF1630 = args_;
  T3 = (P)YPopts_count(xF1630);
  T2 = T3;
  T1 = (P)YOA(T2,YPint((P)-1));
  ilenF1631 = T1;
  xF1632 = args_;
  iF1633 = ilenF1631;
  T7 = (P)YPopts_location(xF1632);
  xF1634 = iF1633;
  xF1635 = xF1634;
  T11 = (P)YPiGG(xF1635,(P)2);
  T10 = T11;
  T9 = T10;
  T8 = (P)YPi_((P)0,T9);
  T6 = (P)YPloc_off(T7,T8);
  T5 = T6;
  leltF1636 = T5;
  T14 = CALL1(1,VARREF(YgooStypesYlen),leltF1636);
  T13 = (P)YOA(ilenF1631,T14);
  tlenF1637 = T13;
  xF1638 = tlenF1637;
  xF1639 = xF1638;
  T21 = (P)YPiGG(xF1639,(P)2);
  T20 = T21;
  T19 = T20;
  T18 = (P)YPiA((P)2,T19);
  T17 = (P)YPallocate_stack(T18);
  xF1640 = T17;
  T22 = (P)YPtag_into(xF1640,(P)3);
  T16 = T22;
  stackspaceF1641 = T16;
  T24 = (P)YPsp_reg();
  argendF1642 = T24;
  T25 = FUNSHELL(1,fun_loop1_0,5);
  loop1F1643 = T25;
  FUNINIT(loop1F1643, 5,tlenF1637,ilenF1631,args_,stackspaceF1641,loop1F1643);
  T26 = CALL1(0,loop1F1643,YPint((P)0));
  T27 = FUNSHELL(1,fun_loop2_1,3);
  loop2F1644 = T27;
  FUNINIT(loop2F1644, 3,stackspaceF1641,tlenF1637,loop2F1644);
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),leltF1636);
  T30 = (P)YOA(YPint((P)1),ilenF1631);
  T28 = CALL2(0,loop2F1644,T29,T30);
  xF1645 = tlenF1637;
  xF1646 = xF1645;
  T33 = (P)YPiGG(xF1646,(P)2);
  T32 = T33;
  T31 = T32;
  xF1647 = tlenF1637;
  xF1648 = xF1647;
  T36 = (P)YPiGG(xF1648,(P)2);
  T35 = T36;
  T34 = T35;
  (P)YPloc_off_setter(T31,stackspaceF1641,T34);
  xF1649 = tlenF1637;
  xF1650 = xF1649;
  T40 = (P)YPiGG(xF1650,(P)2);
  T39 = T40;
  T38 = T39;
  T37 = (P)YPiA((P)1,T38);
  (P)YPloc_off_setter(proc_,stackspaceF1641,T37);
  (P)YPsp_reg_setter(argendF1642);
  (P)YPcheck_call_types();
  T41 = (P)YPraw_call(proc_,nexts_);
  T23 = T41;
  T15 = T23;
  T12 = T15;
  T4 = T12;
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

P YgooSappY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"napp");
  lit_1 = YPPlist(3,YPPsym((P)"proc"),YPPsym((P)"nexts"),YPPsym((P)"args"));
  lit_2 = YPPsym((P)"loop1");
  lit_3 = YPPlist(1,YPPsym((P)"i"));
  lit_4 = YPPsym((P)"loop2");
  lit_5 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"i"));
  T6 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = fun_loop1_0 = YPmet(FUNCODEREF(fun_loop1_0),LITREF(lit_2),T6,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T3 = fun_loop2_1 = YPmet(FUNCODEREF(fun_loop2_1),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  T1 = YgooSmacrosYnapp = YPmet(FUNCODEREF(YgooSmacrosYnapp),LITREF(lit_0),T2,ENVNUL,PNUL,YPfalse);
  T8 = YgooSmacrosYnapp;
  T7 = VARSET(YgooSmacrosYnapp,T8);
  T0 = T7;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScolsScol},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"ds", &module_info_gooSboot, "ds"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"op", &module_info_gooSmacros, "op"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"set", &module_info_gooSboot, "set"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"now", &module_info_gooScolsScol, "now"},
  {"ct", &module_info_gooSboot, "ct"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"case", &module_info_gooSmacros, "case"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%met", &module_info_gooSboot, "%met"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%time", &module_info_gooSboot, "%time"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"for", &module_info_gooSmacros, "for"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"df", &module_info_gooSboot, "df"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSapp;
MODULE_INFO module_info_gooSapp = {
  "goo/app",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooScolsScol (void);

/* EXPRESSION: */

extern void load_module_gooSapp (void);

void load_module_gooSapp (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooScolsScol();

  (P)YgooSappY___main_0___();

}

/* END OF GENERATED CODE. */
