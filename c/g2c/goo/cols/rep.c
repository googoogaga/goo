/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/rep */

DEF(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ylst,"goo/boot","lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhead,"goo/boot","head");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
DEF(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ynot,"goo/boot","not");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ynil,"goo/boot","nil");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YPprop,"goo/boot","%prop");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYdigitQ,"goo/math","digit?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_14);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_13);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_11);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_8);
DEFLIT(lit_12);
DEFLIT(lit_10);

/* FUNCTIONS: */

FUNFOR(YgooScolsSrepYrep_nul);
FUNFOR(YgooScolsSrepYrep_len);
LOCFOR(fun_fill_2);
FUNFOR(YgooScolsSrepYrep_fillX);
LOCFOR(fun_into_4);
FUNFOR(YgooScolsSrepYrep_intoX);
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
  P T1,T0;
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
  P T3,T2,T1,T0;
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
  P fillF1030;
  P sF1029;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),x_);
  sF1029 = T1;
  T2 = FUNSHELL(1,fun_fill_2,4);
  fillF1030 = T2;
  FUNINIT(fillF1030, 4,sF1029,val_,x_,fillF1030);
  T3 = CALL1(0,fillF1030,YPint((P)0));
  T0 = x_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_4) {
  P i_;
  P T4,T3,T2,T1,T0;
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

FUNCODEDEF(YgooScolsSrepYrep_intoX) {
  P d_,s_;
  P intoF1032;
  P lF1031;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),d_);
  lF1031 = T1;
  T2 = FUNSHELL(1,fun_into_4,4);
  intoF1032 = T2;
  FUNINIT(intoF1032, 4,lF1031,s_,d_,intoF1032);
  T3 = CALL1(0,intoF1032,YPint((P)0));
  T0 = d_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_fab) {
  P s_,fill_;
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"rep-nul");
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooScolsSrepYrep_nul = YPmet(FUNCODEREF(YgooScolsSrepYrep_nul),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YgooScolsSrepYrep_nul;
  VARSET(YgooScolsSrepYrep_nul,T1);
  lit_1 = YPPsym((P)"rep-len");
  lit_2 = YPPsym((P)"x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLrepG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsSrepYrep_len = YPmet(FUNCODEREF(YgooScolsSrepYrep_len),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T3 = YgooScolsSrepYrep_len;
  VARSET(YgooScolsSrepYrep_len,T3);
  lit_3 = YPPsym((P)"rep-fill!");
  lit_4 = YPPsym((P)"val");
  lit_5 = YPPsym((P)"fill");
  lit_6 = YPPsym((P)"i");
  T5 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_2 = YPmet(FUNCODEREF(fun_fill_2),LITREF(lit_5),T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_4)),YPPlist(2,VARREF(YLrepG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  YgooScolsSrepYrep_fillX = YPmet(FUNCODEREF(YgooScolsSrepYrep_fillX),LITREF(lit_3),T4,ENVNUL,PNUL,YPfalse);
  T6 = YgooScolsSrepYrep_fillX;
  VARSET(YgooScolsSrepYrep_fillX,T6);
  lit_7 = YPPsym((P)"rep-into!");
  lit_8 = YPPsym((P)"d");
  lit_9 = YPPsym((P)"s");
  lit_10 = YPPsym((P)"into");
  T8 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_4 = YPmet(FUNCODEREF(fun_into_4),LITREF(lit_10),T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YLrepG),VARREF(YLrepG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  YgooScolsSrepYrep_intoX = YPmet(FUNCODEREF(YgooScolsSrepYrep_intoX),LITREF(lit_7),T7,ENVNUL,PNUL,YPfalse);
  T9 = YgooScolsSrepYrep_intoX;
  VARSET(YgooScolsSrepYrep_intoX,T9);
  lit_11 = YPPsym((P)"rep-fab");
  T10 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_5)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  YgooScolsSrepYrep_fab = YPmet(FUNCODEREF(YgooScolsSrepYrep_fab),LITREF(lit_11),T10,ENVNUL,PNUL,YPfalse);
  T11 = YgooScolsSrepYrep_fab;
  VARSET(YgooScolsSrepYrep_fab,T11);
  lit_12 = YPPsym((P)"rep-elt");
  T12 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_6)),YPPlist(2,VARREF(YLrepG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSrepYrep_elt = YPmet(FUNCODEREF(YgooScolsSrepYrep_elt),LITREF(lit_12),T12,ENVNUL,PNUL,YPfalse);
  T13 = YgooScolsSrepYrep_elt;
  VARSET(YgooScolsSrepYrep_elt,T13);
  lit_13 = YPPsym((P)"rep-elt-setter");
  lit_14 = YPPsym((P)"z");
  T16 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_2),LITREF(lit_6)),YPPlist(3,VARREF(YLanyG),VARREF(YLrepG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T15 = YgooScolsSrepYrep_elt_setter = YPmet(FUNCODEREF(YgooScolsSrepYrep_elt_setter),LITREF(lit_13),T16,ENVNUL,PNUL,YPfalse);
  T18 = YgooScolsSrepYrep_elt_setter;
  T17 = VARSET(YgooScolsSrepYrep_elt_setter,T18);
  T14 = T17;
  return T14;
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
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"while", &module_info_gooSmacros, "while"},
  {"~=", &module_info_gooSmath, "~="},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"rem", &module_info_gooSmath, "rem"},
  {"now", &module_info_gooScolsScol, "now"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"t+", &module_info_gooStypes, "t+"},
  {"$e", &module_info_gooSmath, "$e"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"/", &module_info_gooSmath, "/"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"ct", &module_info_gooSboot, "ct"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"app", &module_info_gooSmacros, "app"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"1-", &module_info_gooSmath, "1-"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"pow", &module_info_gooSmath, "pow"},
  {"t?", &module_info_gooStypes, "t?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"and", &module_info_gooSmacros, "and"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"match", &module_info_gooSmacros, "match"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"use", &module_info_gooSboot, "use"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"when", &module_info_gooSmacros, "when"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"*", &module_info_gooSmath, "*"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"t<", &module_info_gooStypes, "t<"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"seq", &module_info_gooSboot, "seq"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"until", &module_info_gooSmacros, "until"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"==", &module_info_gooSmacros, "=="},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"any?", &module_info_gooStypes, "any?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"t=", &module_info_gooStypes, "t="},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"items", &module_info_gooScolsScol, "items"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"find", &module_info_gooScolsScol, "find"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"t*", &module_info_gooStypes, "t*"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"round/", &module_info_gooSmath, "round/"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"@==", &module_info_gooSboot, "@=="},
  {"case", &module_info_gooSmacros, "case"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"@<", &module_info_gooSboot, "@<"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"max", &module_info_gooSmag, "max"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"head", &module_info_gooSboot, "head"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"def", &module_info_gooSboot, "def"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {">", &module_info_gooSmag, ">"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"len", &module_info_gooStypes, "len"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"if", &module_info_gooSboot, "if"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"round", &module_info_gooSmath, "round"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"<", &module_info_gooSmag, "<"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"min", &module_info_gooSmag, "min"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"as", &module_info_gooStypes, "as"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"not", &module_info_gooSboot, "not"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"try", &module_info_gooSboot, "try"},
  {"dp", &module_info_gooSboot, "dp"},
  {"abs", &module_info_gooSmath, "abs"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"=", &module_info_gooSmath, "="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"asin", &module_info_gooSmath, "asin"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"+", &module_info_gooSmath, "+"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%str", &module_info_gooSboot, "%str"},
  {"~", &module_info_gooSmath, "~"},
  {"df", &module_info_gooSboot, "df"},
  {"let", &module_info_gooSboot, "let"},
  {"for", &module_info_gooSmacros, "for"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"isa", &module_info_gooSboot, "isa"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"dv", &module_info_gooSboot, "dv"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {">=", &module_info_gooSmag, ">="},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"dg", &module_info_gooSboot, "dg"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"&", &module_info_gooSmath, "&"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ds", &module_info_gooSboot, "ds"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"op", &module_info_gooSmacros, "op"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"dc", &module_info_gooSboot, "dc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"export", &module_info_gooSboot, "export"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"new", &module_info_gooSboot, "new"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<=", &module_info_gooSmag, "<="},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"opf", &module_info_gooSmacros, "opf"},
  {">>", &module_info_gooSmath, ">>"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"^", &module_info_gooSmath, "^"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fin", &module_info_gooSboot, "fin"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"cos", &module_info_gooSmath, "cos"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"or", &module_info_gooSmacros, "or"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"rep-into!", &YgooScolsSrepYrep_intoX},
  {"rep-fill!", &YgooScolsSrepYrep_fillX},
  {"rep-len", &YgooScolsSrepYrep_len},
  {"rep-elt-setter", &YgooScolsSrepYrep_elt_setter},
  {"rep-nul", &YgooScolsSrepYrep_nul},
  {"---main-0---", NULL},
  {"rep-elt", &YgooScolsSrepYrep_elt},
  {"rep-fab", &YgooScolsSrepYrep_fab},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"rep-into!", "rep-into!"},
  {"<rep>", "<rep>"},
  {"rep-fill!", "rep-fill!"},
  {"rep-len", "rep-len"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"rep-nul", "rep-nul"},
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