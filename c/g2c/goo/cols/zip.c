/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/zip */

EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooScolsSzipYLzip_enumG,"goo/cols/zip","<zip-enum>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooStypesYtL,"goo/types","t<");
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
DEF(YgooScolsSzipYLzip_stateG,"goo/cols/zip","<zip-state>");
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
DEF(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YgooScolsSzipYzip_states_setter,"goo/cols/zip","zip-states-setter");
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
DEF(YgooScolsSzipYzip_dat_setter,"goo/cols/zip","zip-dat-setter");
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
DEF(YgooScolsSzipYzip_states,"goo/cols/zip","zip-states");
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
DEF(YgooScolsSzipYzip_dat,"goo/cols/zip","zip-dat");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
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
DEF(YgooScolsSzipYPenums_setter,"goo/cols/zip","%enums-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYS,"goo/math","/");
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
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooScolsSzipYPenums,"goo/cols/zip","%enums");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");
DEF(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
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

DEFLIT(lit_6);
DEFLIT(lit_17);
DEFLIT(lit_25);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_10);
DEFLIT(lit_7);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_26);
DEFLIT(lit_1);
DEFLIT(lit_15);
DEFLIT(lit_4);
DEFLIT(lit_18);
DEFLIT(lit_3);
DEFLIT(lit_11);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_12);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_22);
DEFLIT(lit_2);
DEFLIT(lit_20);
DEFLIT(lit_23);
DEFLIT(lit_19);
DEFLIT(lit_21);

/* FUNCTIONS: */

LOCFOR(fun_zip_dat_0);
LOCFOR(fun_zip_dat_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_zip_3);
LOCFOR(fun_unzip_4);
LOCFOR(fun_zip_states_5);
LOCFOR(fun_zip_states_setter_6);
LOCFOR(fun_Penums_7);
LOCFOR(fun_Penums_setter_8);
LOCFOR(fun_enum_9);
LOCFOR(fun_finQ_10);
LOCFOR(fun_nxt_11);
LOCFOR(fun_now_12);
LOCFOR(fun_x_1333_13);
LOCFOR(fun_now_setter_14);
LOCFOR(fun_now_key_15);
extern P YgooScolsSzipY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_zip_dat_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSzipYzip_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zip_dat_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSzipYzip_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_10));
}

FUNCODEDEF(fun_zip_3) {
  P e_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(e_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),e_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYzip_dat),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unzip_4) {
  P z_;
  P T0;
  P a1;
LINK_STACK();
  ARG(z_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSzipYzip_dat),z_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zip_states_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSzipYzip_states));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zip_states_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSzipYzip_states));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Penums_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSzipYPenums));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Penums_setter_8) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSzipYPenums));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_enum_9) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYenum),x_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSzipYLzip_enumG),VARREF(YgooScolsSzipYPenums),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_10) {
  P e_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_11) {
  P e_;
  P x_1330F1285;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1330F1285 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnxt),T2);
  CALL2(1,VARREF(YgooScolsSzipYPenums_setter),T1,x_1330F1285);
  T0 = x_1330F1285;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_12) {
  P e_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnow),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1333_13) {
  P x_1332_,x_1331_;
  P veF1288;
  P eeF1287;
  P tmpF1286;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1332_, 0);
  ARG(x_1331_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1332_);
  tmpF1286 = T3;
  if (tmpF1286 != YPfalse) {
    T4 = tmpF1286;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1331_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1332_);
    eeF1287 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1331_);
    veF1288 = T9;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),veF1288);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T10,eeF1287);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1332_);
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1331_);
    a1 = T12;
    a2 = T13;
    x_1332_ = a1;
    x_1331_ = a2;
    goto loop;
    T8 = T11;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_14) {
  P v_,e_;
  P x_1333F1289;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1333_13,1);
  x_1333F1289 = T1;
  FUNINIT(x_1333F1289, 1,x_1333F1289);
  T4 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),v_);
  T2 = CALL2(0,x_1333F1289,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_15) {
  P e_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnow_key),T1);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSzipY___main_0___() {
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<zip>");
  T1 = (P)YPpair(VARREF(YLseqG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSzipYLzipG,T0);
  lit_1 = YPPsym((P)"zip");
  lit_2 = YPPsym((P)"e");
  T3 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSzipYLzipG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSzipYzip,T2);
  lit_3 = YPPsym((P)"unzip");
  lit_4 = YPPsym((P)"z");
  T5 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSzipYunzip,T4);
  lit_5 = YPPsym((P)"zip-dat");
  lit_6 = YPPsym((P)"_x");
  T6 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zip_dat_0 = YPmet(FUNCODEREF(fun_zip_dat_0),LITREF(lit_5),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YgooScolsSzipYzip_dat);
  if (T9 != YPfalse) {
    T8 = VARREF(YgooScolsSzipYzip_dat);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_zip_dat_0;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YgooScolsSzipYzip_dat,T7);
  lit_7 = YPPsym((P)"zip-dat-setter");
  lit_8 = YPPsym((P)"_z");
  T11 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YLvecG),VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_zip_dat_setter_1 = YPmet(FUNCODEREF(fun_zip_dat_setter_1),LITREF(lit_7),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YgooScolsSzipYzip_dat_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooScolsSzipYzip_dat_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_zip_dat_setter_1;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooScolsSzipYzip_dat_setter,T12);
  lit_9 = YPPsym((P)"x");
  lit_10 = CALLN(1, Yvec, 0);
  T16 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYzip_dat),VARREF(YgooScolsSzipYzip_dat_setter),VARREF(YLvecG),T17);
  T18 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSzipYLzipG),Ynil);
  fun_zip_3 = YPmet(FUNCODEREF(fun_zip_3),LITREF(lit_1),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScolsSzipYzip);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScolsSzipYzip);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_zip_3;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScolsSzipYzip,T19);
  T23 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_unzip_4 = YPmet(FUNCODEREF(fun_unzip_4),LITREF(lit_3),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooScolsSzipYunzip);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooScolsSzipYunzip);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_unzip_4;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooScolsSzipYunzip,T24);
  lit_11 = YPPsym((P)"<zip-state>");
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  T28 = CALL2(1,VARREF(Yfab_class),LITREF(lit_11),T29);
  VARSET(YgooScolsSzipYLzip_stateG,T28);
  lit_12 = YPPsym((P)"zip-states");
  T30 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScolsSzipYLzip_stateG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zip_states_5 = YPmet(FUNCODEREF(fun_zip_states_5),LITREF(lit_12),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooScolsSzipYzip_states);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScolsSzipYzip_states);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_zip_states_5;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScolsSzipYzip_states,T31);
  lit_13 = YPPsym((P)"zip-states-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YLtupG),VARREF(YgooScolsSzipYLzip_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_zip_states_setter_6 = YPmet(FUNCODEREF(fun_zip_states_setter_6),LITREF(lit_13),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsSzipYzip_states_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsSzipYzip_states_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_zip_states_setter_6;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsSzipYzip_states_setter,T36);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSzipYLzip_stateG),VARREF(YgooScolsSzipYzip_states),VARREF(YgooScolsSzipYzip_states_setter),VARREF(YLtupG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"<zip-enum>");
  T41 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T40 = CALL2(1,VARREF(Yfab_class),LITREF(lit_14),T41);
  VARSET(YgooScolsSzipYLzip_enumG,T40);
  lit_15 = YPPsym((P)"%enums");
  T42 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Penums_7 = YPmet(FUNCODEREF(fun_Penums_7),LITREF(lit_15),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooScolsSzipYPenums);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooScolsSzipYPenums);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_Penums_7;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooScolsSzipYPenums,T43);
  lit_16 = YPPsym((P)"%enums-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Penums_setter_8 = YPmet(FUNCODEREF(fun_Penums_setter_8),LITREF(lit_16),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YgooScolsSzipYPenums_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YgooScolsSzipYPenums_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_Penums_setter_8;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YgooScolsSzipYPenums_setter,T48);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSzipYLzip_enumG),VARREF(YgooScolsSzipYPenums),VARREF(YgooScolsSzipYPenums_setter),VARREF(YgooScolsSzipYLzipG),VARREF(YPprop_unbound_error));
  lit_17 = YPPsym((P)"enum");
  T52 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YgooScolsSzipYLzip_enumG),Ynil);
  fun_enum_9 = YPmet(FUNCODEREF(fun_enum_9),LITREF(lit_17),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YgooScolsScolYenum);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooScolsScolYenum);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_enum_9;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YgooScolsScolYenum,T53);
  lit_18 = YPPsym((P)"fin?");
  T57 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_10 = YPmet(FUNCODEREF(fun_finQ_10),LITREF(lit_18),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YgooScolsScolYfinQ);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooScolsScolYfinQ);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_finQ_10;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooScolsScolYfinQ,T58);
  lit_19 = YPPsym((P)"nxt");
  T62 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSzipYLzip_enumG),Ynil);
  fun_nxt_11 = YPmet(FUNCODEREF(fun_nxt_11),LITREF(lit_19),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YgooScolsScolYnxt);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooScolsScolYnxt);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_nxt_11;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooScolsScolYnxt,T63);
  lit_20 = YPPsym((P)"now");
  T67 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_12 = YPmet(FUNCODEREF(fun_now_12),LITREF(lit_20),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YgooScolsScolYnow);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooScolsScolYnow);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_now_12;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooScolsScolYnow,T68);
  lit_21 = YPPsym((P)"now-setter");
  lit_22 = YPPsym((P)"v");
  lit_23 = YPPsym((P)"x-1333");
  lit_24 = YPPsym((P)"x-1332");
  lit_25 = YPPsym((P)"x-1331");
  T73 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1333_13 = YPmet(FUNCODEREF(fun_x_1333_13),LITREF(lit_23),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_2)),YPPlist(2,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_14 = YPmet(FUNCODEREF(fun_now_setter_14),LITREF(lit_21),T72,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YgooScolsScolYnow_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooScolsScolYnow_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_now_setter_14;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YgooScolsScolYnow_setter,T74);
  lit_26 = YPPsym((P)"now-key");
  T80 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSzipYLzipG),Ynil);
  T79 = fun_now_key_15 = YPmet(FUNCODEREF(fun_now_key_15),LITREF(lit_26),T80,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooScolsScolYnow_key);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooScolsScolYnow_key);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_now_key_15;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  T81 = VARSET(YgooScolsScolYnow_key,T82);
  T78 = T81;
  return T78;
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
  {"<zip-enum>", &YgooScolsSzipYLzip_enumG},
  {"<zip-state>", &YgooScolsSzipYLzip_stateG},
  {"---main-0---", NULL},
  {"zip", &YgooScolsSzipYzip},
  {"zip-states-setter", &YgooScolsSzipYzip_states_setter},
  {"zip-dat-setter", &YgooScolsSzipYzip_dat_setter},
  {"zip-states", &YgooScolsSzipYzip_states},
  {"zip-dat", &YgooScolsSzipYzip_dat},
  {"%enums-setter", &YgooScolsSzipYPenums_setter},
  {"<zip>", &YgooScolsSzipYLzipG},
  {"%enums", &YgooScolsSzipYPenums},
  {"unzip", &YgooScolsSzipYunzip},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"zip", "zip"},
  {"<zip>", "<zip>"},
  {"unzip", "unzip"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSzip;
MODULE_INFO module_info_gooScolsSzip = {
  "goo/cols/zip",
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

extern void load_module_gooScolsSzip (void);

void load_module_gooScolsSzip (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooScolsSzipY___main_0___();

}

/* END OF GENERATED CODE. */
