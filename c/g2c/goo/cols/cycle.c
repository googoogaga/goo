/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/cycle */

EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ynil,"goo/boot","nil");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooScolsScycleYPkey,"goo/cols/cycle","%key");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yvec,"goo/boot","vec");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooScolsScycleYcycle_elts_setter,"goo/cols/cycle","cycle-elts-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YgooScolsScycleYcycle_elts,"goo/cols/cycle","cycle-elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
DEF(YgooScolsScycleYPlen,"goo/cols/cycle","%len");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Ytup,"goo/boot","tup");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
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
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynul,"goo/boot","nul");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsScycleYPdat_setter,"goo/cols/cycle","%dat-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooScolsScycleYLcycle_enumG,"goo/cols/cycle","<cycle-enum>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooScolsScycleYPkey_setter,"goo/cols/cycle","%key-setter");
DEF(YgooScolsScycleYPlen_setter,"goo/cols/cycle","%len-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooScolsScycleYPdat,"goo/cols/cycle","%dat");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_17);
DEFLIT(lit_2);
DEFLIT(lit_12);

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
  {"odd?", &module_info_gooSmath, "odd?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"1+", &module_info_gooSmath, "1+"},
  {"nil", &module_info_gooSboot, "nil"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"t<", &module_info_gooStypes, "t<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"dp", &module_info_gooSboot, "dp"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"$e", &module_info_gooSmath, "$e"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"or", &module_info_gooSmacros, "or"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"items", &module_info_gooScolsScol, "items"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"any?", &module_info_gooStypes, "any?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"|", &module_info_gooSmath, "|"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"def", &module_info_gooSboot, "def"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"do", &module_info_gooSmacros, "do"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now", &module_info_gooScolsScol, "now"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"+", &module_info_gooSmath, "+"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"max", &module_info_gooSmag, "max"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fin", &module_info_gooSboot, "fin"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"log", &module_info_gooSmath, "log"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"vec", &module_info_gooSboot, "vec"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"ct", &module_info_gooSboot, "ct"},
  {"@len", &module_info_gooSboot, "@len"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"round", &module_info_gooSmath, "round"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"tan", &module_info_gooSmath, "tan"},
  {"set", &module_info_gooSboot, "set"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"dss", &module_info_gooSboot, "dss"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"@<", &module_info_gooSboot, "@<"},
  {"not", &module_info_gooSboot, "not"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%im", &module_info_gooSboot, "%im"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"tup", &module_info_gooSboot, "tup"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"use", &module_info_gooSboot, "use"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"head", &module_info_gooSboot, "head"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fill!", &module_info_gooScolsScol, "fill!"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"map", &module_info_gooSmacros, "map"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"as", &module_info_gooStypes, "as"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"find", &module_info_gooScolsScol, "find"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"dl", &module_info_gooSboot, "dl"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {">", &module_info_gooSmag, ">"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"~=", &module_info_gooSmath, "~="},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"asin", &module_info_gooSmath, "asin"},
  {"/", &module_info_gooSmath, "/"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@+", &module_info_gooSboot, "@+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"~", &module_info_gooSmath, "~"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"=", &module_info_gooSmath, "="},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"for", &module_info_gooSmacros, "for"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"export", &module_info_gooSboot, "export"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"esc", &module_info_gooSboot, "esc"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"dg", &module_info_gooSboot, "dg"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"try", &module_info_gooSboot, "try"},
  {"quote", &module_info_gooSboot, "quote"},
  {"isa", &module_info_gooSboot, "isa"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%key", &YgooScolsScycleYPkey},
  {"cycle-elts-setter", &YgooScolsScycleYcycle_elts_setter},
  {"cycle-elts", &YgooScolsScycleYcycle_elts},
  {"---main-0---", NULL},
  {"<cycle>", &YgooScolsScycleYLcycleG},
  {"%len", &YgooScolsScycleYPlen},
  {"cycle", &YgooScolsScycleYcycle},
  {"%dat-setter", &YgooScolsScycleYPdat_setter},
  {"<cycle-enum>", &YgooScolsScycleYLcycle_enumG},
  {"%key-setter", &YgooScolsScycleYPkey_setter},
  {"%len-setter", &YgooScolsScycleYPlen_setter},
  {"%dat", &YgooScolsScycleYPdat},
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
