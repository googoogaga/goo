/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/rep */

EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynul,"goo/boot","nul");
DEF(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ylst,"goo/boot","lst");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYT,"goo/math","*");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYLproductG,"goo/types","<product>");
DEF(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfab_class,"goo/boot","fab-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_14);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_12);
DEFLIT(lit_3);
DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_13);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_2);

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
  P fillF1031;
  P sF1030;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),x_);
  sF1030 = T1;
  T2 = FUNSHELL(1,fun_fill_2,4);
  fillF1031 = T2;
  FUNINIT(fillF1031, 4,sF1030,val_,x_,fillF1031);
  T3 = CALL1(0,fillF1031,YPint((P)0));
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
  P intoF1033;
  P lF1032;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),d_);
  lF1032 = T1;
  T2 = FUNSHELL(1,fun_into_4,4);
  intoF1033 = T2;
  FUNINIT(intoF1033, 4,lF1032,s_,d_,intoF1033);
  T3 = CALL1(0,intoF1033,YPint((P)0));
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
  P intoF1035;
  P lF1034;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),d_);
  lF1034 = T1;
  T2 = FUNSHELL(1,fun_into_6,3);
  intoF1035 = T2;
  FUNINIT(intoF1035, 3,lF1034,d_,intoF1035);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),s_);
  T3 = CALL2(0,intoF1035,YPint((P)0),T4);
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
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
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
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
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
  {"dss", &module_info_gooSboot, "dss"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"~", &module_info_gooSmath, "~"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"now", &module_info_gooScolsScol, "now"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"t=", &module_info_gooStypes, "t="},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"/", &module_info_gooSmath, "/"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"try", &module_info_gooSboot, "try"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"use", &module_info_gooSboot, "use"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"map", &module_info_gooSmacros, "map"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"esc", &module_info_gooSboot, "esc"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"while", &module_info_gooSmacros, "while"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"add", &module_info_gooScolsScol, "add"},
  {"round", &module_info_gooSmath, "round"},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"&", &module_info_gooSmath, "&"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"round/", &module_info_gooSmath, "round/"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"=", &module_info_gooSmath, "="},
  {"and", &module_info_gooSmacros, "and"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"when", &module_info_gooSmacros, "when"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"ct", &module_info_gooSboot, "ct"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"head", &module_info_gooSboot, "head"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"def", &module_info_gooSboot, "def"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"cos", &module_info_gooSmath, "cos"},
  {"t?", &module_info_gooStypes, "t?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"if", &module_info_gooSboot, "if"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"any?", &module_info_gooStypes, "any?"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"len", &module_info_gooStypes, "len"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"tup", &module_info_gooSboot, "tup"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"app", &module_info_gooSmacros, "app"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%get", &module_info_gooSboot, "%get"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"*", &module_info_gooSmath, "*"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"dp", &module_info_gooSboot, "dp"},
  {"-", &module_info_gooSmath, "-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<<", &module_info_gooSmath, "<<"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"pow", &module_info_gooSmath, "pow"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"as", &module_info_gooStypes, "as"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<", &module_info_gooSmag, "<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {">=", &module_info_gooSmag, ">="},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"new", &module_info_gooSboot, "new"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"~=", &module_info_gooSmath, "~="},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"rep-elt-setter", &YgooScolsSrepYrep_elt_setter},
  {"rep-elt", &YgooScolsSrepYrep_elt},
  {"rep-fill!", &YgooScolsSrepYrep_fillX},
  {"rep-fab", &YgooScolsSrepYrep_fab},
  {"rep-len", &YgooScolsSrepYrep_len},
  {"rep-nul", &YgooScolsSrepYrep_nul},
  {"rep-into!", &YgooScolsSrepYrep_intoX},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"rep-elt-setter", "rep-elt-setter"},
  {"rep-elt", "rep-elt"},
  {"rep-fill!", "rep-fill!"},
  {"rep-fab", "rep-fab"},
  {"rep-len", "rep-len"},
  {"rep-nul", "rep-nul"},
  {"rep-into!", "rep-into!"},
  {"<rep>", "<rep>"},
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
