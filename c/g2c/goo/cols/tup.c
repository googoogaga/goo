/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/tup");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/tup */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YgooScolsStupYto_str,"goo/cols/tup","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOdo,"goo/boot","@do");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YOpick,"goo/boot","@pick");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_2);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_12);
DEFLIT(lit_6);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_13);
DEFLIT(lit_0);
DEFLIT(lit_8);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_14);
DEFLIT(lit_7);

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
  P tF8261;
  P xF8260;
  P xF8259;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPtlen(x_);
  xF8259 = T2;
  xF8260 = xF8259;
  tF8261 = (P)1;
  T1 = (P)YPiLL(xF8260,(P)2);
  T0 = (P)YPiv(T1,tF8261);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_1) {
  P x_,i_,default_;
  P xF8263;
  P xF8262;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    xF8262 = i_;
    xF8263 = xF8262;
    T3 = (P)YPiGG(xF8263,(P)2);
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
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(VARREF(YPtnul));
}

FUNCODEDEF(fun_fab_3) {
  P x_,s_;
  P xF8265;
  P xF8264;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  xF8264 = s_;
  xF8265 = xF8264;
  T1 = (P)YPiGG(xF8265,(P)2);
  T0 = (P)YPtup(T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_4) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_10),T1,LITREF(lit_11));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_5) {
  P x_,i_;
  P xF8267;
  P xF8266;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  xF8266 = i_;
  xF8267 = xF8266;
  T1 = (P)YPiGG(xF8267,(P)2);
  T0 = (P)YPtelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_6) {
  P z_,x_,i_;
  P xF8269;
  P xF8268;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
  xF8268 = i_;
  xF8269 = xF8268;
  T1 = (P)YPiGG(xF8269,(P)2);
  T0 = (P)YPtelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsStupY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
DEFCREGS();
  lit_0 = YPPsym((P)"len");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_0 = YPmet(FUNCODEREF(fun_len_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(24));
  T2 = VARREF_OR(YgooStypesYlen,YPfalse);
  T3 = fun_len_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooStypesYlen,T1);
  lit_2 = YPPsym((P)"elt-or");
  lit_3 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"i"),YPPsym((P)"default"));
  T4 = YPsig(LITREF(lit_3),YPPlist(3,VARREF(YLtupG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_1 = YPmet(FUNCODEREF(fun_elt_or_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(27));
  T6 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T7 = fun_elt_or_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsScolYelt_or,T5);
  lit_4 = YPPsym((P)"empty");
  lit_5 = YPPlist(1,YPPsym((P)"c"));
  T9 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLtupG));
  T8 = YPsig(LITREF(lit_5),YPPlist(1,T9),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_empty_2 = YPmet(FUNCODEREF(fun_empty_2),LITREF(lit_4),T8,ENVNUL,PNUL,sloc(36));
  T11 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T12 = fun_empty_2;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooScolsScolYempty,T10);
  lit_6 = YPPsym((P)"fab");
  lit_7 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T14 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLtupG));
  T13 = YPsig(LITREF(lit_7),YPPlist(2,T14,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_6),T13,ENVNUL,PNUL,sloc(39));
  T16 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T17 = fun_fab_3;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsScolYfab,T15);
  lit_8 = YPPsym((P)"to-str");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  lit_10 = YPsb((P)"#(");
  lit_11 = YPsb((P)")");
  T18 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_4 = YPmet(FUNCODEREF(fun_to_str_4),LITREF(lit_8),T18,ENVNUL,PNUL,sloc(45));
  T20 = VARREF_OR(YgooScolsStupYto_str,YPfalse);
  T21 = fun_to_str_4;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooScolsStupYto_str,T19);
  lit_12 = YPPsym((P)"low-elt");
  lit_13 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T22 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLtupG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_5 = YPmet(FUNCODEREF(fun_low_elt_5),LITREF(lit_12),T22,ENVNUL,PNUL,sloc(49));
  T24 = VARREF_OR(YgooScolsScolYlow_elt,YPfalse);
  T25 = fun_low_elt_5;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooScolsScolYlow_elt,T23);
  lit_14 = YPPsym((P)"fab-elt-setter");
  lit_15 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T28 = YPsig(LITREF(lit_15),YPPlist(3,VARREF(YLanyG),VARREF(YLtupG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T27 = fun_fab_elt_setter_6 = YPmet(FUNCODEREF(fun_fab_elt_setter_6),LITREF(lit_14),T28,ENVNUL,PNUL,sloc(52));
  T31 = VARREF_OR(YgooScolsScolYfab_elt_setter,YPfalse);
  T32 = fun_fab_elt_setter_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  T29 = VARSET(YgooScolsScolYfab_elt_setter,T30);
  T26 = T29;
  return T26;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSflat},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSclass, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"to-str", CVAR, &YgooScolsStupYto_str},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<tup>", NULL},
  {"tup", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();
  load_module_gooScolsSflat();

  (P)YgooScolsStupY___main_0___();

}

/* END OF GENERATED CODE. */
