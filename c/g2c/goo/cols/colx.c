/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/colx */

EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynot,"goo/boot","not");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYoddQ,"goo/math","odd?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_20);
DEFLIT(lit_19);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_7);
DEFLIT(lit_8);
DEFLIT(lit_15);
DEFLIT(lit_1);
DEFLIT(lit_23);
DEFLIT(lit_6);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_18);
DEFLIT(lit_13);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_22);
DEFLIT(lit_24);
DEFLIT(lit_0);
DEFLIT(lit_9);
DEFLIT(lit_16);
DEFLIT(lit_12);
DEFLIT(lit_21);
DEFLIT(lit_14);
DEFLIT(lit_3);

/* FUNCTIONS: */

LOCFOR(fun_fab_elt_setter_0);
LOCFOR(fun_low_elt_setter_1);
LOCFOR(fun_addX_2);
LOCFOR(fun_delX_3);
LOCFOR(fun_zapX_4);
LOCFOR(fun_in_5);
LOCFOR(fun_fillX_6);
LOCFOR(fun_in_7);
LOCFOR(fun_into_8);
extern P YgooScolsScolxY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_fab_elt_setter_0) {
  P value_,c_,key_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(value_, 0);
  ARG(c_, 1);
  ARG(key_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),value_,c_,key_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_1) {
  P value_,c_,key_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(value_, 0);
  ARG(c_, 1);
  ARG(key_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),value_,c_,key_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_addX_2) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYadd),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_delX_3) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYdel),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zapX_4) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsScolYzap),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_5) {
  P ds_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(ds_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ds_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    CALL2(1,VARREF(YgooScolsScolYnow_setter),FREEREF(1),ds_);
    T3 = CALL1(1,VARREF(YgooScolsScolYnxt),ds_);
    a1 = T3;
    ds_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fillX_6) {
  P dst_,val_;
  P inF6828;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_5,3);
  inF6828 = T1;
  FUNINIT(inF6828, 3,dst_,val_,inF6828);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T2 = CALL1(0,inF6828,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_7) {
  P ss_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(ss_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ss_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),ss_);
    T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),ss_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T2,FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),ss_);
    a1 = T5;
    ss_ = a1;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_into_8) {
  P dst_,src_;
  P inF6829;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_7,2);
  inF6829 = T1;
  FUNINIT(inF6829, 2,dst_,inF6829);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL1(0,inF6829,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooScolsScolxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
loop:
  lit_0 = YPPsym((P)"elt-setter");
  lit_1 = YPPsym((P)"v");
  lit_2 = YPPsym((P)"x");
  lit_3 = YPPsym((P)"k");
  T1 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYelt_setter,T0);
  lit_4 = YPPsym((P)"into");
  lit_5 = YPPsym((P)"y");
  T3 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_5)),YPPlist(2,VARREF(YLcolXG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYinto,T2);
  lit_6 = YPPsym((P)"add!");
  lit_7 = YPPsym((P)"c");
  T5 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_2)),YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYaddX,T4);
  lit_8 = YPPsym((P)"del!");
  T7 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_2)),YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYdelX,T6);
  lit_9 = YPPsym((P)"zap!");
  T9 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLcolXG)),YPfalse,YPint((P)1),VARREF(YLcolXG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYzapX,T8);
  lit_10 = YPPsym((P)"len-setter");
  lit_11 = YPPsym((P)"new-len");
  T11 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_7)),YPPlist(2,VARREF(YLintG),VARREF(YLcolXG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYlen_setter,T10);
  lit_12 = YPPsym((P)"len/fill-setter");
  lit_13 = YPPsym((P)"default");
  T13 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_7),LITREF(lit_13)),YPPlist(3,VARREF(YLintG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYlenSfill_setter,T12);
  lit_14 = YPPsym((P)"fill!");
  T15 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_2)),YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYfillX,T14);
  lit_15 = YPPsym((P)"low-elt-setter");
  T17 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolxYlow_elt_setter,T16);
  lit_16 = YPPsym((P)"fab-elt-setter");
  lit_17 = YPPsym((P)"value");
  lit_18 = YPPsym((P)"key");
  T18 = YPsig(YPPlist(3,LITREF(lit_17),LITREF(lit_7),LITREF(lit_18)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_0 = YPmet(FUNCODEREF(fun_fab_elt_setter_0),LITREF(lit_16),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScolsScolYfab_elt_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScolsScolYfab_elt_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_fab_elt_setter_0;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScolsScolYfab_elt_setter,T19);
  T23 = YPsig(YPPlist(3,LITREF(lit_17),LITREF(lit_7),LITREF(lit_18)),YPPlist(3,VARREF(YLanyG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_1 = YPmet(FUNCODEREF(fun_low_elt_setter_1),LITREF(lit_15),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooScolsScolxYlow_elt_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooScolsScolxYlow_elt_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_low_elt_setter_1;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooScolsScolxYlow_elt_setter,T24);
  T28 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_2)),YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  fun_addX_2 = YPmet(FUNCODEREF(fun_addX_2),LITREF(lit_6),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsScolxYaddX);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsScolxYaddX);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_addX_2;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsScolxYaddX,T29);
  T33 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_2)),YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  fun_delX_3 = YPmet(FUNCODEREF(fun_delX_3),LITREF(lit_8),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooScolsScolxYdelX);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooScolsScolxYdelX);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_delX_3;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScolsScolxYdelX,T34);
  T38 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLcolXG)),YPfalse,YPint((P)1),VARREF(YLcolXG),Ynil);
  fun_zapX_4 = YPmet(FUNCODEREF(fun_zapX_4),LITREF(lit_9),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooScolsScolxYzapX);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooScolsScolxYzapX);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_zapX_4;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooScolsScolxYzapX,T39);
  lit_19 = YPPsym((P)"dst");
  lit_20 = YPPsym((P)"val");
  lit_21 = YPPsym((P)"in");
  lit_22 = YPPsym((P)"ds");
  T44 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_in_5 = YPmet(FUNCODEREF(fun_in_5),LITREF(lit_21),T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_20)),YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  fun_fillX_6 = YPmet(FUNCODEREF(fun_fillX_6),LITREF(lit_14),T43,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooScolsScolxYfillX);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooScolsScolxYfillX);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_fillX_6;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooScolsScolxYfillX,T45);
  lit_23 = YPPsym((P)"src");
  lit_24 = YPPsym((P)"ss");
  T53 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T52 = fun_in_7 = YPmet(FUNCODEREF(fun_in_7),LITREF(lit_21),T53,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_23)),YPPlist(2,VARREF(YLcolXG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T50 = fun_into_8 = YPmet(FUNCODEREF(fun_into_8),LITREF(lit_4),T51,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooScolsScolYinto);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooScolsScolYinto);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_into_8;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  T54 = VARSET(YgooScolsScolYinto,T55);
  T49 = T54;
  return T49;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {">", &module_info_gooSmag, ">"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"set", &module_info_gooSboot, "set"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"tan", &module_info_gooSmath, "tan"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"error", &module_info_gooSboot, "error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"+", &module_info_gooSmath, "+"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"=", &module_info_gooSmath, "="},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%str", &module_info_gooSboot, "%str"},
  {"rem", &module_info_gooSmath, "rem"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"|", &module_info_gooSmath, "|"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"~", &module_info_gooSmath, "~"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"if", &module_info_gooSboot, "if"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dv", &module_info_gooSboot, "dv"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"~=", &module_info_gooSmath, "~="},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"nul", &module_info_gooSboot, "nul"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"t=", &module_info_gooStypes, "t="},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"round", &module_info_gooSmath, "round"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"max", &module_info_gooSmag, "max"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"lst", &module_info_gooSboot, "lst"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"log", &module_info_gooSmath, "log"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"logn", &module_info_gooSmath, "logn"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"for", &module_info_gooSmacros, "for"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"-", &module_info_gooSmath, "-"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"df", &module_info_gooSboot, "df"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {">>", &module_info_gooSmath, ">>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len", &module_info_gooStypes, "len"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"del", &module_info_gooScolsScol, "del"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"op", &module_info_gooSmacros, "op"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"do", &module_info_gooSmacros, "do"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"^", &module_info_gooSmath, "^"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"fill!", &YgooScolsScolxYfillX},
  {"add!", &YgooScolsScolxYaddX},
  {"low-elt-setter", &YgooScolsScolxYlow_elt_setter},
  {"len/fill-setter", &YgooScolsScolxYlenSfill_setter},
  {"elt-setter", &YgooScolsScolxYelt_setter},
  {"len-setter", &YgooScolsScolxYlen_setter},
  {"zap!", &YgooScolsScolxYzapX},
  {"---main-0---", NULL},
  {"del!", &YgooScolsScolxYdelX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"add!", "add!"},
  {"low-elt-setter", "low-elt-setter"},
  {"fill!", "fill!"},
  {"into", "into"},
  {"len/fill-setter", "len/fill-setter"},
  {"elt-setter", "elt-setter"},
  {"len-setter", "len-setter"},
  {"zap!", "zap!"},
  {"del!", "del!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsScolx;
MODULE_INFO module_info_gooScolsScolx = {
  "goo/cols/colx",
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

/* EXPRESSION: */

extern void load_module_gooScolsScolx (void);

void load_module_gooScolsScolx (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();

  (P)YgooScolsScolxY___main_0___();

}

/* END OF GENERATED CODE. */
