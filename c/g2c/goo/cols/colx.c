/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/colx */

EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ylst,"goo/boot","lst");
DEF(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYB,"goo/math","&");
DEF(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Ytup,"goo/boot","tup");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ynew,"goo/boot","new");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYA,"goo/math","+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_12);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_23);
DEFLIT(lit_20);
DEFLIT(lit_0);
DEFLIT(lit_22);
DEFLIT(lit_9);
DEFLIT(lit_1);
DEFLIT(lit_21);
DEFLIT(lit_19);
DEFLIT(lit_8);
DEFLIT(lit_24);
DEFLIT(lit_16);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_18);

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
  P inF975;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_5,3);
  inF975 = T1;
  FUNINIT(inF975, 3,dst_,val_,inF975);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T2 = CALL1(0,inF975,T3);
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
  P inF976;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_7,2);
  inF976 = T1;
  FUNINIT(inF976, 2,dst_,inF976);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL1(0,inF976,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooScolsScolxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
DEFCREGS();
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
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
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
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
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
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
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
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
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
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
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
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
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
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
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
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {">", &module_info_gooSmag, ">"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {">=", &module_info_gooSmag, ">="},
  {"/", &module_info_gooSmath, "/"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"~=", &module_info_gooSmath, "~="},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%su", &module_info_gooSboot, "%su"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<", &module_info_gooSmag, "<"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"add", &module_info_gooScolsScol, "add"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<=", &module_info_gooSmag, "<="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"tail", &module_info_gooSboot, "tail"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"|", &module_info_gooSmath, "|"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"not", &module_info_gooSboot, "not"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"def", &module_info_gooSboot, "def"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"*", &module_info_gooSmath, "*"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"for", &module_info_gooSmacros, "for"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"log", &module_info_gooSmath, "log"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"df", &module_info_gooSboot, "df"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"col", &module_info_gooScolsScol, "col"},
  {"t=", &module_info_gooStypes, "t="},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"~", &module_info_gooSmath, "~"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"head", &module_info_gooSboot, "head"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"round", &module_info_gooSmath, "round"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"try", &module_info_gooSboot, "try"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"~==", &module_info_gooSmath, "~=="},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"use", &module_info_gooSboot, "use"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"rem", &module_info_gooSmath, "rem"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"&", &module_info_gooSmath, "&"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%get", &module_info_gooSboot, "%get"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"op", &module_info_gooSmacros, "op"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {">>", &module_info_gooSmath, ">>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"min", &module_info_gooSmag, "min"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"^", &module_info_gooSmath, "^"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"nil", &module_info_gooSboot, "nil"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"+", &module_info_gooSmath, "+"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"elt-setter", CVAR, &YgooScolsScolxYelt_setter},
  {"low-elt-setter", CVAR, &YgooScolsScolxYlow_elt_setter},
  {"fill!", CVAR, &YgooScolsScolxYfillX},
  {"len/fill-setter", CVAR, &YgooScolsScolxYlenSfill_setter},
  {"len-setter", CVAR, &YgooScolsScolxYlen_setter},
  {"zap!", CVAR, &YgooScolsScolxYzapX},
  {"del!", CVAR, &YgooScolsScolxYdelX},
  {"add!", CVAR, &YgooScolsScolxYaddX},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"elt-setter", "elt-setter"},
  {"low-elt-setter", "low-elt-setter"},
  {"into", "into"},
  {"fill!", "fill!"},
  {"len/fill-setter", "len/fill-setter"},
  {"len-setter", "len-setter"},
  {"zap!", "zap!"},
  {"del!", "del!"},
  {"add!", "add!"},
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
