/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/zip */

EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YgooScolsSzipYzip_states_setter,"goo/cols/zip","zip-states-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsSzipYzip_states,"goo/cols/zip","zip-states");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooScolsSzipYPenums_setter,"goo/cols/zip","%enums-setter");
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
DEF(YgooScolsSzipYzip,"goo/cols/zip","zip");
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
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooScolsSzipYzip_dat_setter,"goo/cols/zip","zip-dat-setter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Ynul,"goo/boot","nul");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YgooScolsSzipYLzip_enumG,"goo/cols/zip","<zip-enum>");
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
DEF(YgooScolsSzipYLzip_stateG,"goo/cols/zip","<zip-state>");
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
DEF(YgooScolsSzipYPenums,"goo/cols/zip","%enums");
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
DEF(YgooScolsSzipYzip_dat,"goo/cols/zip","zip-dat");
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
DEF(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
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
DEF(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
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

DEFLIT(lit_4);
DEFLIT(lit_22);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_9);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_24);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_20);
DEFLIT(lit_2);
DEFLIT(lit_16);
DEFLIT(lit_17);
DEFLIT(lit_13);
DEFLIT(lit_21);
DEFLIT(lit_25);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_19);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_14);

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
  P x_1330F1291;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1330F1291 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnxt),T2);
  CALL2(1,VARREF(YgooScolsSzipYPenums_setter),T1,x_1330F1291);
  T0 = x_1330F1291;
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
  P veF1294;
  P eeF1293;
  P tmpF1292;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1332_, 0);
  ARG(x_1331_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1332_);
  tmpF1292 = T3;
  if (tmpF1292 != YPfalse) {
    T4 = tmpF1292;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1331_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1332_);
    eeF1293 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1331_);
    veF1294 = T9;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),veF1294);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T10,eeF1293);
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
  P x_1333F1295;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1333_13,1);
  x_1333F1295 = T1;
  FUNINIT(x_1333F1295, 1,x_1333F1295);
  T4 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),v_);
  T2 = CALL2(0,x_1333F1295,T3,T5);
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
  T11 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YLtupG),VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  lit_10 = CALLN(1, Ytup, 0);
  T16 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYzip_dat),VARREF(YgooScolsSzipYzip_dat_setter),VARREF(YLtupG),T17);
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
  {"zip-states-setter", &YgooScolsSzipYzip_states_setter},
  {"zip-states", &YgooScolsSzipYzip_states},
  {"%enums-setter", &YgooScolsSzipYPenums_setter},
  {"zip", &YgooScolsSzipYzip},
  {"zip-dat-setter", &YgooScolsSzipYzip_dat_setter},
  {"<zip-enum>", &YgooScolsSzipYLzip_enumG},
  {"<zip-state>", &YgooScolsSzipYLzip_stateG},
  {"%enums", &YgooScolsSzipYPenums},
  {"---main-0---", NULL},
  {"zip-dat", &YgooScolsSzipYzip_dat},
  {"<zip>", &YgooScolsSzipYLzipG},
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
