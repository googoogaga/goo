/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/collections/zip */

EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YPisa,"runtime/boot","%isa");
DEF(YgooScollectionsSzipYPenums_setter,"goo/collections/zip","%enums-setter");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
DEF(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yfun_specs,"runtime/boot","fun-specs");
DEF(YgooScollectionsSzipYzip_dat,"goo/collections/zip","zip-dat");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
DEF(YgooScollectionsSzipYzip_states_setter,"goo/collections/zip","zip-states-setter");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
DEF(YgooScollectionsSzipYLzip_enumG,"goo/collections/zip","<zip-enum>");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
DEF(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
DEF(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
DEF(YgooScollectionsSzipYPenums,"goo/collections/zip","%enums");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooScollectionsSzipYLzip_stateG,"goo/collections/zip","<zip-state>");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
DEF(YgooScollectionsSzipYzip_dat_setter,"goo/collections/zip","zip-dat-setter");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooScollectionsSzipYzip_states,"goo/collections/zip","zip-states");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_7);
DEFLIT(lit_15);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_22);
DEFLIT(lit_13);
DEFLIT(lit_20);
DEFLIT(lit_21);
DEFLIT(lit_0);
DEFLIT(lit_23);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_25);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_16);
DEFLIT(lit_17);

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
LOCFOR(fun_x_1303_13);
LOCFOR(fun_now_setter_14);
LOCFOR(fun_now_key_15);
extern P YgooScollectionsSzipY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_zip_dat_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSzipYzip_dat));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSzipYzip_dat));
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
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScollectionsSzipYLzipG),VARREF(YgooScollectionsSzipYzip_dat),T1);
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
  T0 = CALL1(1,VARREF(YgooScollectionsSzipYzip_dat),z_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSzipYzip_states));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSzipYzip_states));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSzipYPenums));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSzipYPenums));
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScollectionsScollectionYenum),x_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScollectionsSzipYLzip_enumG),VARREF(YgooScollectionsSzipYPenums),T1);
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
  T1 = CALL1(1,VARREF(YgooScollectionsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_11) {
  P e_;
  P x_1300F1249;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1300F1249 = e_;
  T2 = CALL1(1,VARREF(YgooScollectionsSzipYPenums),e_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScollectionsScollectionYnxt),T2);
  CALL2(1,VARREF(YgooScollectionsSzipYPenums_setter),T1,x_1300F1249);
  T0 = x_1300F1249;
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
  T1 = CALL1(1,VARREF(YgooScollectionsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScollectionsScollectionYnow),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1303_13) {
  P x_1302_,x_1301_;
  P veF1252;
  P eeF1251;
  P tmpF1250;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1302_, 0);
  ARG(x_1301_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1302_);
  tmpF1250 = T3;
  if (tmpF1250 != YPfalse) {
    T4 = tmpF1250;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1301_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1302_);
    eeF1251 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1301_);
    veF1252 = T9;
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),veF1252);
    CALL2(1,VARREF(YgooScollectionsScollectionYnow_setter),T10,eeF1251);
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1302_);
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1301_);
    a1 = T12;
    a2 = T13;
    x_1302_ = a1;
    x_1301_ = a2;
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
  P x_1303F1253;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1303_13,1);
  x_1303F1253 = T1;
  FUNINIT(x_1303F1253, 1,x_1303F1253);
  T4 = CALL1(1,VARREF(YgooScollectionsSzipYPenums),e_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T4);
  T5 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),v_);
  T2 = CALL2(0,x_1303F1253,T3,T5);
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
  T1 = CALL1(1,VARREF(YgooScollectionsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScollectionsScollectionYnow_key),T1);
UNLINK_STACK();
  RET(T0);
}

P YgooScollectionsSzipY___main_0___() {
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
  VARSET(YgooScollectionsSzipYLzipG,T0);
  lit_1 = YPPsym((P)"zip");
  lit_2 = YPPsym((P)"e");
  T3 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScollectionsSzipYLzipG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSzipYzip,T2);
  lit_3 = YPPsym((P)"unzip");
  lit_4 = YPPsym((P)"z");
  T5 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScollectionsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSzipYunzip,T4);
  lit_5 = YPPsym((P)"zip-dat");
  lit_6 = YPPsym((P)"_x");
  T6 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScollectionsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zip_dat_0 = YPmet(FUNCODEREF(fun_zip_dat_0),LITREF(lit_5),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YgooScollectionsSzipYzip_dat);
  if (T9 != YPfalse) {
    T8 = VARREF(YgooScollectionsSzipYzip_dat);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_zip_dat_0;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YgooScollectionsSzipYzip_dat,T7);
  lit_7 = YPPsym((P)"zip-dat-setter");
  lit_8 = YPPsym((P)"_z");
  T11 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YLvecG),VARREF(YgooScollectionsSzipYLzipG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_zip_dat_setter_1 = YPmet(FUNCODEREF(fun_zip_dat_setter_1),LITREF(lit_7),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YgooScollectionsSzipYzip_dat_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooScollectionsSzipYzip_dat_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_zip_dat_setter_1;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooScollectionsSzipYzip_dat_setter,T12);
  lit_9 = YPPsym((P)"x");
  lit_10 = CALLN(1, Yvec, 0);
  T16 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSzipYLzipG),VARREF(YgooScollectionsSzipYzip_dat),VARREF(YgooScollectionsSzipYzip_dat_setter),VARREF(YLvecG),T17);
  T18 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScollectionsSzipYLzipG),Ynil);
  fun_zip_3 = YPmet(FUNCODEREF(fun_zip_3),LITREF(lit_1),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScollectionsSzipYzip);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScollectionsSzipYzip);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_zip_3;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScollectionsSzipYzip,T19);
  T23 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScollectionsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_unzip_4 = YPmet(FUNCODEREF(fun_unzip_4),LITREF(lit_3),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooScollectionsSzipYunzip);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooScollectionsSzipYunzip);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_unzip_4;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooScollectionsSzipYunzip,T24);
  lit_11 = YPPsym((P)"<zip-state>");
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  T28 = CALL2(1,VARREF(Yfab_class),LITREF(lit_11),T29);
  VARSET(YgooScollectionsSzipYLzip_stateG,T28);
  lit_12 = YPPsym((P)"zip-states");
  T30 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScollectionsSzipYLzip_stateG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zip_states_5 = YPmet(FUNCODEREF(fun_zip_states_5),LITREF(lit_12),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooScollectionsSzipYzip_states);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScollectionsSzipYzip_states);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_zip_states_5;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScollectionsSzipYzip_states,T31);
  lit_13 = YPPsym((P)"zip-states-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YLtupG),VARREF(YgooScollectionsSzipYLzip_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_zip_states_setter_6 = YPmet(FUNCODEREF(fun_zip_states_setter_6),LITREF(lit_13),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScollectionsSzipYzip_states_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScollectionsSzipYzip_states_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_zip_states_setter_6;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScollectionsSzipYzip_states_setter,T36);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSzipYLzip_stateG),VARREF(YgooScollectionsSzipYzip_states),VARREF(YgooScollectionsSzipYzip_states_setter),VARREF(YLtupG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"<zip-enum>");
  T41 = (P)YPpair(VARREF(YgooScollectionsScollectionYLenumG),Ynil);
  T40 = CALL2(1,VARREF(Yfab_class),LITREF(lit_14),T41);
  VARSET(YgooScollectionsSzipYLzip_enumG,T40);
  lit_15 = YPPsym((P)"%enums");
  T42 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScollectionsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Penums_7 = YPmet(FUNCODEREF(fun_Penums_7),LITREF(lit_15),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooScollectionsSzipYPenums);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooScollectionsSzipYPenums);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_Penums_7;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooScollectionsSzipYPenums,T43);
  lit_16 = YPPsym((P)"%enums-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YgooScollectionsSzipYLzipG),VARREF(YgooScollectionsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Penums_setter_8 = YPmet(FUNCODEREF(fun_Penums_setter_8),LITREF(lit_16),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YgooScollectionsSzipYPenums_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YgooScollectionsSzipYPenums_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_Penums_setter_8;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YgooScollectionsSzipYPenums_setter,T48);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSzipYLzip_enumG),VARREF(YgooScollectionsSzipYPenums),VARREF(YgooScollectionsSzipYPenums_setter),VARREF(YgooScollectionsSzipYLzipG),VARREF(YPprop_unbound_error));
  lit_17 = YPPsym((P)"enum");
  T52 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScollectionsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsSzipYLzip_enumG),Ynil);
  fun_enum_9 = YPmet(FUNCODEREF(fun_enum_9),LITREF(lit_17),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YgooScollectionsScollectionYenum);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooScollectionsScollectionYenum);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_enum_9;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YgooScollectionsScollectionYenum,T53);
  lit_18 = YPPsym((P)"fin?");
  T57 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScollectionsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_10 = YPmet(FUNCODEREF(fun_finQ_10),LITREF(lit_18),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YgooScollectionsScollectionYfinQ);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooScollectionsScollectionYfinQ);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_finQ_10;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooScollectionsScollectionYfinQ,T58);
  lit_19 = YPPsym((P)"nxt");
  T62 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScollectionsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsSzipYLzip_enumG),Ynil);
  fun_nxt_11 = YPmet(FUNCODEREF(fun_nxt_11),LITREF(lit_19),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YgooScollectionsScollectionYnxt);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooScollectionsScollectionYnxt);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_nxt_11;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooScollectionsScollectionYnxt,T63);
  lit_20 = YPPsym((P)"now");
  T67 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScollectionsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_12 = YPmet(FUNCODEREF(fun_now_12),LITREF(lit_20),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YgooScollectionsScollectionYnow);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooScollectionsScollectionYnow);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_now_12;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooScollectionsScollectionYnow,T68);
  lit_21 = YPPsym((P)"now-setter");
  lit_22 = YPPsym((P)"v");
  lit_23 = YPPsym((P)"x-1303");
  lit_24 = YPPsym((P)"x-1302");
  lit_25 = YPPsym((P)"x-1301");
  T73 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1303_13 = YPmet(FUNCODEREF(fun_x_1303_13),LITREF(lit_23),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_2)),YPPlist(2,VARREF(YgooScollectionsSzipYLzipG),VARREF(YgooScollectionsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_14 = YPmet(FUNCODEREF(fun_now_setter_14),LITREF(lit_21),T72,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YgooScollectionsScollectionYnow_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooScollectionsScollectionYnow_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_now_setter_14;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YgooScollectionsScollectionYnow_setter,T74);
  lit_26 = YPPsym((P)"now-key");
  T80 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScollectionsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsSzipYLzipG),Ynil);
  T79 = fun_now_key_15 = YPmet(FUNCODEREF(fun_now_key_15),LITREF(lit_26),T80,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooScollectionsScollectionYnow_key);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooScollectionsScollectionYnow_key);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_now_key_15;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  T81 = VARSET(YgooScollectionsScollectionYnow_key,T82);
  T78 = T81;
  return T78;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSsequence},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"as", &module_info_gooStypes, "as"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"head", &module_info_runtimeSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"error", &module_info_runtimeSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"1+", &module_info_gooSmath, "1+"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {">", &module_info_gooSmagnitude, ">"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"max", &module_info_gooSmagnitude, "max"},
  {"&", &module_info_gooSmath, "&"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"log", &module_info_gooSmath, "log"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"<", &module_info_gooSmagnitude, "<"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"use", &module_info_runtimeSboot, "use"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"$e", &module_info_gooSmath, "$e"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"def", &module_info_runtimeSboot, "def"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"+", &module_info_gooSmath, "+"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"and", &module_info_gooSmacros, "and"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"round", &module_info_gooSmath, "round"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"pow", &module_info_gooSmath, "pow"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"t=", &module_info_gooStypes, "t="},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"logn", &module_info_gooSmath, "logn"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%enums-setter", &YgooScollectionsSzipYPenums_setter},
  {"<zip>", &YgooScollectionsSzipYLzipG},
  {"---main-0---", NULL},
  {"zip-dat", &YgooScollectionsSzipYzip_dat},
  {"zip-states-setter", &YgooScollectionsSzipYzip_states_setter},
  {"<zip-enum>", &YgooScollectionsSzipYLzip_enumG},
  {"zip", &YgooScollectionsSzipYzip},
  {"unzip", &YgooScollectionsSzipYunzip},
  {"%enums", &YgooScollectionsSzipYPenums},
  {"<zip-state>", &YgooScollectionsSzipYLzip_stateG},
  {"zip-dat-setter", &YgooScollectionsSzipYzip_dat_setter},
  {"zip-states", &YgooScollectionsSzipYzip_states},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<zip>", "<zip>"},
  {"zip", "zip"},
  {"unzip", "unzip"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsSzip;
MODULE_INFO module_info_gooScollectionsSzip = {
  "goo/collections/zip",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSsequence (void);

/* EXPRESSION: */

extern void load_module_gooScollectionsSzip (void);

void load_module_gooScollectionsSzip (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();

  (P)YgooScollectionsSzipY___main_0___();

}

/* END OF GENERATED CODE. */
