/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/cycle */

EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YgooScolsScycleYPkey,"goo/cols/cycle","%key");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YPvnul,"goo/boot","%vnul");
DEF(YgooScolsScycleYPlen,"goo/cols/cycle","%len");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooScolsScycleYcycle_elts,"goo/cols/cycle","cycle-elts");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yvec,"goo/boot","vec");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
DEF(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYfillX,"goo/cols/col","fill!");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooScolsScycleYcycle_elts_setter,"goo/cols/cycle","cycle-elts-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsScycleYPdat_setter,"goo/cols/cycle","%dat-setter");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooScolsScycleYPkey_setter,"goo/cols/cycle","%key-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooScolsScycleYPdat,"goo/cols/cycle","%dat");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooScolsScycleYLcycle_enumG,"goo/cols/cycle","<cycle-enum>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooScolsScycleYPlen_setter,"goo/cols/cycle","%len-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_13);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_15);
DEFLIT(lit_16);
DEFLIT(lit_18);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_6);
DEFLIT(lit_12);
DEFLIT(lit_2);
DEFLIT(lit_0);
DEFLIT(lit_17);

/* FUNCTIONS: */

LOCFOR(fun_cycle_elts_0);
LOCFOR(fun_cycle_elts_setter_1);
LOCFOR(fun_cycle_2);
LOCFOR(fun_Pkey_3);
LOCFOR(fun_Pkey_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_Plen_6);
LOCFOR(fun_Plen_setter_7);
LOCFOR(fun_Pdat_8);
LOCFOR(fun_Pdat_setter_9);
LOCFOR(fun_enum_10);
LOCFOR(fun_finQ_11);
LOCFOR(fun_nxt_12);
LOCFOR(fun_now_13);
extern P YgooScolsScycleY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_cycle_elts_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsScycleYcycle_elts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cycle_elts_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsScycleYcycle_elts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cycle_2) {
  P e_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(e_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLvecG),e_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsScycleYLcycleG),VARREF(YgooScolsScycleYcycle_elts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pkey_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsScycleYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsScycleYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Plen_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsScycleYPlen));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Plen_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsScycleYPlen));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsScycleYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsScycleYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_enum_10) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YgooScolsScycleYLcycle_enumG),VARREF(YgooScolsScycleYPdat),x_,VARREF(YgooScolsScycleYPlen),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_11) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_nxt_12) {
  P e_;
  P x_1334F1290;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1334F1290 = e_;
  T3 = CALL1(1,VARREF(YgooScolsScycleYPkey),e_);
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  T4 = CALL1(1,VARREF(YgooScolsScycleYPlen),e_);
  T1 = CALL2(1,VARREF(YgooSmathYmod),T2,T4);
  CALL2(1,VARREF(YgooScolsScycleYPkey_setter),T1,x_1334F1290);
  T0 = x_1334F1290;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_13) {
  P e_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScycleYPdat),e_);
  T1 = CALL1(1,VARREF(YgooScolsScycleYcycle_elts),T2);
  T3 = CALL1(1,VARREF(YgooScolsScycleYPkey),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,T3);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsScycleY___main_0___() {
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<cycle>");
  T1 = (P)YPpair(VARREF(YLseqG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsScycleYLcycleG,T0);
  lit_1 = YPPsym((P)"cycle");
  lit_2 = YPPsym((P)"e");
  T3 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsScycleYLcycleG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScycleYcycle,T2);
  lit_3 = YPPsym((P)"cycle-elts");
  lit_4 = YPPsym((P)"_x");
  T4 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsScycleYLcycleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_cycle_elts_0 = YPmet(FUNCODEREF(fun_cycle_elts_0),LITREF(lit_3),T4,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(YgooScolsScycleYcycle_elts);
  if (T7 != YPfalse) {
    T6 = VARREF(YgooScolsScycleYcycle_elts);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_cycle_elts_0;
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YgooScolsScycleYcycle_elts,T5);
  lit_5 = YPPsym((P)"cycle-elts-setter");
  lit_6 = YPPsym((P)"_z");
  T9 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YLvecG),VARREF(YgooScolsScycleYLcycleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_cycle_elts_setter_1 = YPmet(FUNCODEREF(fun_cycle_elts_setter_1),LITREF(lit_5),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooScolsScycleYcycle_elts_setter);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooScolsScycleYcycle_elts_setter);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_cycle_elts_setter_1;
  T10 = CALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooScolsScycleYcycle_elts_setter,T10);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsScycleYLcycleG),VARREF(YgooScolsScycleYcycle_elts),VARREF(YgooScolsScycleYcycle_elts_setter),VARREF(YLvecG),VARREF(YPprop_unbound_error));
  T14 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsScycleYLcycleG),Ynil);
  fun_cycle_2 = YPmet(FUNCODEREF(fun_cycle_2),LITREF(lit_1),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YgooScolsScycleYcycle);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooScolsScycleYcycle);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_cycle_2;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooScolsScycleYcycle,T15);
  lit_7 = YPPsym((P)"<cycle-enum>");
  T20 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T19 = CALL2(1,VARREF(Yfab_class),LITREF(lit_7),T20);
  VARSET(YgooScolsScycleYLcycle_enumG,T19);
  lit_8 = YPPsym((P)"%key");
  T21 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_3 = YPmet(FUNCODEREF(fun_Pkey_3),LITREF(lit_8),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooScolsScycleYPkey);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooScolsScycleYPkey);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_Pkey_3;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooScolsScycleYPkey,T22);
  lit_9 = YPPsym((P)"%key-setter");
  T26 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_4 = YPmet(FUNCODEREF(fun_Pkey_setter_4),LITREF(lit_9),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YgooScolsScycleYPkey_setter);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooScolsScycleYPkey_setter);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_Pkey_setter_4;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooScolsScycleYPkey_setter,T27);
  lit_10 = YPPsym((P)"x");
  T31 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T31,ENVNUL,PNUL,YPfalse);
  T32 = fun_5;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsScycleYLcycle_enumG),VARREF(YgooScolsScycleYPkey),VARREF(YgooScolsScycleYPkey_setter),VARREF(YLintG),T32);
  lit_11 = YPPsym((P)"%len");
  T33 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Plen_6 = YPmet(FUNCODEREF(fun_Plen_6),LITREF(lit_11),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooScolsScycleYPlen);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooScolsScycleYPlen);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_Plen_6;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScolsScycleYPlen,T34);
  lit_12 = YPPsym((P)"%len-setter");
  T38 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Plen_setter_7 = YPmet(FUNCODEREF(fun_Plen_setter_7),LITREF(lit_12),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooScolsScycleYPlen_setter);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooScolsScycleYPlen_setter);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_Plen_setter_7;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooScolsScycleYPlen_setter,T39);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsScycleYLcycle_enumG),VARREF(YgooScolsScycleYPlen),VARREF(YgooScolsScycleYPlen_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_13 = YPPsym((P)"%dat");
  T43 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_8 = YPmet(FUNCODEREF(fun_Pdat_8),LITREF(lit_13),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScolsScycleYPdat);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScycleYPdat);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_Pdat_8;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsScycleYPdat,T44);
  lit_14 = YPPsym((P)"%dat-setter");
  T48 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YgooScolsScycleYLcycleG),VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_9 = YPmet(FUNCODEREF(fun_Pdat_setter_9),LITREF(lit_14),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsScycleYPdat_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsScycleYPdat_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_Pdat_setter_9;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsScycleYPdat_setter,T49);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsScycleYLcycle_enumG),VARREF(YgooScolsScycleYPdat),VARREF(YgooScolsScycleYPdat_setter),VARREF(YgooScolsScycleYLcycleG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"enum");
  T53 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScolsScycleYLcycleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScycleYLcycle_enumG),Ynil);
  fun_enum_10 = YPmet(FUNCODEREF(fun_enum_10),LITREF(lit_15),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsScolYenum);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsScolYenum);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_enum_10;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsScolYenum,T54);
  lit_16 = YPPsym((P)"fin?");
  T58 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_11 = YPmet(FUNCODEREF(fun_finQ_11),LITREF(lit_16),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScolsScolYfinQ);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsScolYfinQ);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_finQ_11;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsScolYfinQ,T59);
  lit_17 = YPPsym((P)"nxt");
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsScycleYLcycle_enumG),Ynil);
  fun_nxt_12 = YPmet(FUNCODEREF(fun_nxt_12),LITREF(lit_17),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooScolsScolYnxt);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsScolYnxt);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_nxt_12;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsScolYnxt,T64);
  lit_18 = YPPsym((P)"now");
  T70 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScolsScycleYLcycle_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T69 = fun_now_13 = YPmet(FUNCODEREF(fun_now_13),LITREF(lit_18),T70,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooScolsScolYnow);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooScolsScolYnow);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_now_13;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  T71 = VARSET(YgooScolsScolYnow,T72);
  T68 = T71;
  return T68;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"1+", &module_info_gooSmath, "1+"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"@<", &module_info_gooSboot, "@<"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"nul", &module_info_gooSboot, "nul"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"or", &module_info_gooSmacros, "or"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"items", &module_info_gooScolsScol, "items"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"any?", &module_info_gooStypes, "any?"},
  {"|", &module_info_gooSmath, "|"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"even?", &module_info_gooSmath, "even?"},
  {"max", &module_info_gooSmag, "max"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fin", &module_info_gooSboot, "fin"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"log", &module_info_gooSmath, "log"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"ds", &module_info_gooSboot, "ds"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"vec", &module_info_gooSboot, "vec"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"round", &module_info_gooSmath, "round"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"ct", &module_info_gooSboot, "ct"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%str", &module_info_gooSboot, "%str"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"tan", &module_info_gooSmath, "tan"},
  {"set", &module_info_gooSboot, "set"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"def", &module_info_gooSboot, "def"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"isa", &module_info_gooSboot, "isa"},
  {"head", &module_info_gooSboot, "head"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fill!", &module_info_gooScolsScol, "fill!"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"map", &module_info_gooSmacros, "map"},
  {"<=", &module_info_gooSmag, "<="},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"$e", &module_info_gooSmath, "$e"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"del", &module_info_gooScolsScol, "del"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"as", &module_info_gooStypes, "as"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"esc", &module_info_gooSboot, "esc"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%su", &module_info_gooSboot, "%su"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"dl", &module_info_gooSboot, "dl"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {">", &module_info_gooSmag, ">"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_gooSboot, "loc"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"try", &module_info_gooSboot, "try"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"mod", &module_info_gooSmath, "mod"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"use", &module_info_gooSboot, "use"},
  {"asin", &module_info_gooSmath, "asin"},
  {"/", &module_info_gooSmath, "/"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"~", &module_info_gooSmath, "~"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"=", &module_info_gooSmath, "="},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"for", &module_info_gooSmacros, "for"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"export", &module_info_gooSboot, "export"},
  {"%im", &module_info_gooSboot, "%im"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dg", &module_info_gooSboot, "dg"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"while", &module_info_gooSmacros, "while"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"last", &module_info_gooScolsSseq, "last"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%key", &YgooScolsScycleYPkey},
  {"%len", &YgooScolsScycleYPlen},
  {"cycle-elts", &YgooScolsScycleYcycle_elts},
  {"<cycle>", &YgooScolsScycleYLcycleG},
  {"---main-0---", NULL},
  {"cycle", &YgooScolsScycleYcycle},
  {"cycle-elts-setter", &YgooScolsScycleYcycle_elts_setter},
  {"%dat-setter", &YgooScolsScycleYPdat_setter},
  {"%key-setter", &YgooScolsScycleYPkey_setter},
  {"%dat", &YgooScolsScycleYPdat},
  {"<cycle-enum>", &YgooScolsScycleYLcycle_enumG},
  {"%len-setter", &YgooScolsScycleYPlen_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<cycle>", "<cycle>"},
  {"cycle", "cycle"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsScycle;
MODULE_INFO module_info_gooScolsScycle = {
  "goo/cols/cycle",
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

/* EXPRESSION: */

extern void load_module_gooScolsScycle (void);

void load_module_gooScolsScycle (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooScolsScycleY___main_0___();

}

/* END OF GENERATED CODE. */
