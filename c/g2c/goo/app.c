/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/app");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/app */

EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ynul,"goo/boot","nul");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yerror,"goo/boot","error");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLintG,"goo/boot","<int>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ylst,"goo/boot","lst");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yclone,"goo/boot","clone");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_4);
DEFLIT(lit_0);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_5);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YgooSmacrosYnapp);
extern P YgooSappY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P xF1744;
  P xF1743;
  P xF1742;
  P xF1741;
  P xF1740;
  P xF1739;
  P iF1738;
  P xF1737;
  P xF1736;
  P xF1735;
  P xF1734;
  P xF1733;
  P yF1732;
  P xF1731;
  P topF1730;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF1730 = T1;
  xF1731 = i_;
  yF1732 = FREEREF(1);
  xF1733 = xF1731;
  xF1734 = xF1733;
  T8 = (P)YPiGG(xF1734,(P)2);
  T7 = T8;
  T6 = T7;
  xF1735 = yF1732;
  xF1736 = xF1735;
  T11 = (P)YPiGG(xF1736,(P)2);
  T10 = T11;
  T9 = T10;
  T5 = (P)YPiL(T6,T9);
  T4 = (P)YPbb(T5);
  T3 = T4;
  if (T3 != YPfalse) {
    xF1737 = FREEREF(2);
    iF1738 = i_;
    T14 = (P)YPopts_location(xF1737);
    xF1739 = iF1738;
    xF1740 = xF1739;
    T18 = (P)YPiGG(xF1740,(P)2);
    T17 = T18;
    T16 = T17;
    T15 = (P)YPi_((P)0,T16);
    T13 = (P)YPloc_off(T14,T15);
    T12 = T13;
    xF1741 = topF1730;
    xF1742 = xF1741;
    T22 = (P)YPiGG(xF1742,(P)2);
    T21 = T22;
    T20 = T21;
    xF1743 = i_;
    xF1744 = xF1743;
    T25 = (P)YPiGG(xF1744,(P)2);
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
  P xF1748;
  P xF1747;
  P xF1746;
  P xF1745;
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
    xF1745 = FREEREF(1);
    xF1746 = xF1745;
    T7 = (P)YPiGG(xF1746,(P)2);
    T6 = T7;
    T5 = T6;
    xF1747 = i_;
    xF1748 = xF1747;
    T10 = (P)YPiGG(xF1748,(P)2);
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
  P xF1769;
  P xF1768;
  P xF1767;
  P xF1766;
  P xF1765;
  P xF1764;
  P loop2F1763;
  P loop1F1762;
  P argendF1761;
  P stackspaceF1760;
  P xF1759;
  P xF1758;
  P xF1757;
  P tlenF1756;
  P leltF1755;
  P xF1754;
  P xF1753;
  P iF1752;
  P xF1751;
  P ilenF1750;
  P xF1749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1,a2,a3;
LINK_STACK();
  ARG(proc_, 0);
  ARG(nexts_, 1);
  NARGS(args_, 2);
loop:
  xF1749 = args_;
  T3 = (P)YPopts_count(xF1749);
  T2 = T3;
  T1 = (P)YOA(T2,YPint((P)-1));
  ilenF1750 = T1;
  xF1751 = args_;
  iF1752 = ilenF1750;
  T7 = (P)YPopts_location(xF1751);
  xF1753 = iF1752;
  xF1754 = xF1753;
  T11 = (P)YPiGG(xF1754,(P)2);
  T10 = T11;
  T9 = T10;
  T8 = (P)YPi_((P)0,T9);
  T6 = (P)YPloc_off(T7,T8);
  T5 = T6;
  leltF1755 = T5;
  T14 = CALL1(1,VARREF(YgooStypesYlen),leltF1755);
  T13 = (P)YOA(ilenF1750,T14);
  tlenF1756 = T13;
  xF1757 = tlenF1756;
  xF1758 = xF1757;
  T21 = (P)YPiGG(xF1758,(P)2);
  T20 = T21;
  T19 = T20;
  T18 = (P)YPiA((P)2,T19);
  T17 = (P)YPallocate_stack(T18);
  xF1759 = T17;
  T22 = (P)YPtag_into(xF1759,(P)3);
  T16 = T22;
  stackspaceF1760 = T16;
  T24 = (P)YPsp_reg();
  argendF1761 = T24;
  T25 = FUNSHELL(1,fun_loop1_0,5);
  loop1F1762 = T25;
  FUNINIT(loop1F1762, 5,tlenF1756,ilenF1750,args_,stackspaceF1760,loop1F1762);
  T26 = CALL1(0,loop1F1762,YPint((P)0));
  T27 = FUNSHELL(1,fun_loop2_1,3);
  loop2F1763 = T27;
  FUNINIT(loop2F1763, 3,stackspaceF1760,tlenF1756,loop2F1763);
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),leltF1755);
  T30 = (P)YOA(YPint((P)1),ilenF1750);
  T28 = CALL2(0,loop2F1763,T29,T30);
  xF1764 = tlenF1756;
  xF1765 = xF1764;
  T33 = (P)YPiGG(xF1765,(P)2);
  T32 = T33;
  T31 = T32;
  xF1766 = tlenF1756;
  xF1767 = xF1766;
  T36 = (P)YPiGG(xF1767,(P)2);
  T35 = T36;
  T34 = T35;
  (P)YPloc_off_setter(T31,stackspaceF1760,T34);
  xF1768 = tlenF1756;
  xF1769 = xF1768;
  T40 = (P)YPiGG(xF1769,(P)2);
  T39 = T40;
  T38 = T39;
  T37 = (P)YPiA((P)1,T38);
  (P)YPloc_off_setter(proc_,stackspaceF1760,T37);
  (P)YPsp_reg_setter(argendF1761);
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
  T5 = fun_loop1_0 = YPmet(FUNCODEREF(fun_loop1_0),LITREF(lit_2),T6,ENVNUL,PNUL,sloc(13));
  T4 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T3 = fun_loop2_1 = YPmet(FUNCODEREF(fun_loop2_1),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(18));
  T2 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  T1 = YgooSmacrosYnapp = YPmet(FUNCODEREF(YgooSmacrosYnapp),LITREF(lit_0),T2,ENVNUL,PNUL,sloc(7));
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
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"if", &module_info_gooSboot, "if"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"len", &module_info_gooStypes, "len"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"dl", &module_info_gooSboot, "dl"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"case", &module_info_gooSmacros, "case"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%met", &module_info_gooSboot, "%met"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match", &module_info_gooSmacros, "match"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%im", &module_info_gooSboot, "%im"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"dg", &module_info_gooSboot, "dg"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"when", &module_info_gooSmacros, "when"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"loc", &module_info_gooSboot, "loc"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"do", &module_info_gooSmacros, "do"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dm", &module_info_gooSboot, "dm"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"while", &module_info_gooSmacros, "while"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"def", &module_info_gooSboot, "def"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"new", &module_info_gooSboot, "new"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"ds", &module_info_gooSboot, "ds"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%get", &module_info_gooSboot, "%get"},
  {"@<", &module_info_gooSboot, "@<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"op", &module_info_gooSmacros, "op"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tup", &module_info_gooSboot, "tup"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
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
