/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/rep */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOlst,"goo/boot","@lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathY1A,"goo/math","1+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_5);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_7);
DEFLIT(lit_13);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_12);
DEFLIT(lit_15);
DEFLIT(lit_11);

/* FUNCTIONS: */

FUNFOR(YgooScolsSrepYrep_nul);
FUNFOR(YgooScolsSrepYrep_len);
LOCFOR(fun_fill_2);
FUNFOR(YgooScolsSrepYrep_fillX);
LOCFOR(fun_into_4);
LOCFOR(fun_rep_intoX_5);
LOCFOR(fun_into_6);
LOCFOR(fun_rep_intoX_7);
FUNFOR(YgooScolsSrepYrep_fab);
FUNFOR(YgooScolsSrepYrep_elt);
FUNFOR(YgooScolsSrepYrep_elt_setter);
extern P YgooScolsSrepY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScolsSrepYrep_nul) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YPrnul));
}

FUNCODEDEF(YgooScolsSrepYrep_len) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPrlen(x_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fill_2) {
  P i_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(1),FREEREF(2),i_);
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T3;
    i_ = a1;
    goto loop;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_fillX) {
  P x_,val_;
  P fillF1053;
  P sF1052;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),x_);
  sF1052 = T1;
  T2 = FUNSHELL(1,fun_fill_2,4);
  fillF1053 = T2;
  FUNINIT(fillF1053, 4,sF1052,val_,x_,fillF1053);
  T3 = CALL1(0,fillF1053,YPint((P)0));
  T0 = x_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_4) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),FREEREF(1),i_);
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),T2,FREEREF(2),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rep_intoX_5) {
  P d_,s_;
  P intoF1055;
  P lF1054;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),d_);
  lF1054 = T1;
  T2 = FUNSHELL(1,fun_into_4,4);
  intoF1055 = T2;
  FUNINIT(intoF1055, 4,lF1054,s_,d_,intoF1055);
  T3 = CALL1(0,intoF1055,YPint((P)0));
  T0 = d_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_6) {
  P i_,e_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),T2,FREEREF(1),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T4;
    a2 = T5;
    i_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rep_intoX_7) {
  P d_,s_;
  P intoF1057;
  P lF1056;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),d_);
  lF1056 = T1;
  T2 = FUNSHELL(1,fun_into_6,3);
  intoF1057 = T2;
  FUNINIT(intoF1057, 3,lF1056,d_,intoF1057);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),s_);
  T3 = CALL2(0,intoF1057,YPint((P)0),T4);
  T0 = d_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_fab) {
  P s_,fill_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(fill_, 1);
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPrep(T1,fill_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_elt) {
  P x_,i_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPrelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_elt_setter) {
  P z_,x_,i_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPrelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsSrepY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"rep-into!");
  lit_1 = YPPsym((P)"d");
  lit_2 = YPPsym((P)"s");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLrepG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSrepYrep_intoX,T0);
  lit_3 = YPPsym((P)"rep-nul");
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooScolsSrepYrep_nul = YPmet(FUNCODEREF(YgooScolsSrepYrep_nul),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T3 = YgooScolsSrepYrep_nul;
  VARSET(YgooScolsSrepYrep_nul,T3);
  lit_4 = YPPsym((P)"rep-len");
  lit_5 = YPPsym((P)"x");
  T4 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLrepG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsSrepYrep_len = YPmet(FUNCODEREF(YgooScolsSrepYrep_len),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = YgooScolsSrepYrep_len;
  VARSET(YgooScolsSrepYrep_len,T5);
  lit_6 = YPPsym((P)"rep-fill!");
  lit_7 = YPPsym((P)"val");
  lit_8 = YPPsym((P)"fill");
  lit_9 = YPPsym((P)"i");
  T7 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_2 = YPmet(FUNCODEREF(fun_fill_2),LITREF(lit_8),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_7)),YPPlist(2,VARREF(YLrepG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  YgooScolsSrepYrep_fillX = YPmet(FUNCODEREF(YgooScolsSrepYrep_fillX),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T8 = YgooScolsSrepYrep_fillX;
  VARSET(YgooScolsSrepYrep_fillX,T8);
  lit_10 = YPPsym((P)"into");
  T10 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_4 = YPmet(FUNCODEREF(fun_into_4),LITREF(lit_10),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLrepG),VARREF(YLrepG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  fun_rep_intoX_5 = YPmet(FUNCODEREF(fun_rep_intoX_5),LITREF(lit_0),T9,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsSrepYrep_intoX);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsSrepYrep_intoX);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_rep_intoX_5;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsSrepYrep_intoX,T11);
  lit_11 = YPPsym((P)"e");
  T16 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_into_6 = YPmet(FUNCODEREF(fun_into_6),LITREF(lit_10),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLrepG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  fun_rep_intoX_7 = YPmet(FUNCODEREF(fun_rep_intoX_7),LITREF(lit_0),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YgooScolsSrepYrep_intoX);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooScolsSrepYrep_intoX);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_rep_intoX_7;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooScolsSrepYrep_intoX,T17);
  lit_12 = YPPsym((P)"rep-fab");
  T21 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  YgooScolsSrepYrep_fab = YPmet(FUNCODEREF(YgooScolsSrepYrep_fab),LITREF(lit_12),T21,ENVNUL,PNUL,YPfalse);
  T22 = YgooScolsSrepYrep_fab;
  VARSET(YgooScolsSrepYrep_fab,T22);
  lit_13 = YPPsym((P)"rep-elt");
  T23 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_9)),YPPlist(2,VARREF(YLrepG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSrepYrep_elt = YPmet(FUNCODEREF(YgooScolsSrepYrep_elt),LITREF(lit_13),T23,ENVNUL,PNUL,YPfalse);
  T24 = YgooScolsSrepYrep_elt;
  VARSET(YgooScolsSrepYrep_elt,T24);
  lit_14 = YPPsym((P)"rep-elt-setter");
  lit_15 = YPPsym((P)"z");
  T27 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_5),LITREF(lit_9)),YPPlist(3,VARREF(YLanyG),VARREF(YLrepG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T26 = YgooScolsSrepYrep_elt_setter = YPmet(FUNCODEREF(YgooScolsSrepYrep_elt_setter),LITREF(lit_14),T27,ENVNUL,PNUL,YPfalse);
  T29 = YgooScolsSrepYrep_elt_setter;
  T28 = VARSET(YgooScolsSrepYrep_elt_setter,T29);
  T25 = T28;
  return T25;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSflat},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {">", &module_info_gooSmag, ">"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<", &module_info_gooSmag, "<"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"use", &module_info_gooSboot, "use"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any?", &module_info_gooStypes, "any?"},
  {"col", &module_info_gooScolsScol, "col"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"df", &module_info_gooSboot, "df"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"while", &module_info_gooSmacros, "while"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"t+", &module_info_gooStypes, "t+"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"into", &module_info_gooScolsScol, "into"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"and", &module_info_gooSmacros, "and"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"when", &module_info_gooSmacros, "when"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {">>", &module_info_gooSmath, ">>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"try", &module_info_gooSboot, "try"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"export", &module_info_gooSboot, "export"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"==", &module_info_gooSmacros, "=="},
  {"1+", &module_info_gooSmath, "1+"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"rep-len", CVAR, &YgooScolsSrepYrep_len},
  {"rep-nul", CVAR, &YgooScolsSrepYrep_nul},
  {"rep-into!", CVAR, &YgooScolsSrepYrep_intoX},
  {"rep-fill!", CVAR, &YgooScolsSrepYrep_fillX},
  {"rep-elt-setter", CVAR, &YgooScolsSrepYrep_elt_setter},
  {"rep-elt", CVAR, &YgooScolsSrepYrep_elt},
  {"---main-0---", PVAR, NULL},
  {"rep-fab", CVAR, &YgooScolsSrepYrep_fab},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<rep>", "<rep>"},
  {"rep-fill!", "rep-fill!"},
  {"rep-len", "rep-len"},
  {"rep-nul", "rep-nul"},
  {"rep-into!", "rep-into!"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"rep-elt", "rep-elt"},
  {"rep-fab", "rep-fab"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSrep;
MODULE_INFO module_info_gooScolsSrep = {
  "goo/cols/rep",
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
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSflat (void);

/* EXPRESSION: */

extern void load_module_gooScolsSrep (void);

void load_module_gooScolsSrep (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();
  load_module_gooScolsSflat();

  (P)YgooScolsSrepY___main_0___();

}

/* END OF GENERATED CODE. */
