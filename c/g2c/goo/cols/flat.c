/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/collections/flat */

EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
DEF(YgooScollectionsSflatYPdat_setter,"goo/collections/flat","%dat-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yadd_prop,"runtime/boot","add-prop");
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
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ynul,"runtime/boot","nul");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YLanyG,"runtime/boot","<any>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynil,"runtime/boot","nil");
EXT(YLcolG,"runtime/boot","<col>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooScollectionsSflatYPkey,"goo/collections/flat","%key");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooScollectionsSflatYPdat,"goo/collections/flat","%dat");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLlocG,"runtime/boot","<loc>");
DEF(YgooScollectionsSflatYPkey_setter,"goo/collections/flat","%key-setter");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YgooSmathYround,"goo/math","round");
DEF(YgooScollectionsSflatYLflat_enumG,"goo/collections/flat","<flat-enum>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_2);
DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_13);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_8);
DEFLIT(lit_12);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_4);
DEFLIT(lit_10);

/* FUNCTIONS: */

LOCFOR(fun_Pdat_0);
LOCFOR(fun_Pdat_setter_1);
LOCFOR(fun_Pkey_2);
LOCFOR(fun_Pkey_setter_3);
LOCFOR(fun_4);
LOCFOR(fun_enum_5);
LOCFOR(fun_finQ_6);
LOCFOR(fun_nxt_7);
LOCFOR(fun_now_8);
LOCFOR(fun_now_setter_9);
LOCFOR(fun_now_key_10);
extern P YgooScollectionsSflatY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_Pdat_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSflatYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSflatYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSflatYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSflatYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_enum_5) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScollectionsSflatYLflat_enumG),VARREF(YgooScollectionsSflatYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_6) {
  P e_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSflatYPkey),e_);
  T3 = CALL1(1,VARREF(YgooScollectionsSflatYPdat),e_);
  T2 = CALL1(1,VARREF(YgooStypesYlen),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_7) {
  P e_;
  P x_1279F984;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1279F984 = e_;
  T2 = CALL1(1,VARREF(YgooScollectionsSflatYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScollectionsSflatYPkey_setter),T1,x_1279F984);
  T0 = x_1279F984;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_8) {
  P e_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSflatYPdat),e_);
  T2 = CALL1(1,VARREF(YgooScollectionsSflatYPkey),e_);
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYlow_elt),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_9) {
  P v_,e_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSflatYPdat),e_);
  T2 = CALL1(1,VARREF(YgooScollectionsSflatYPkey),e_);
  T0 = CALL3(1,VARREF(YgooScollectionsScollectionYlow_elt_setter),v_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_10) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSflatYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

P YgooScollectionsSflatY___main_0___() {
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<flat-enum>");
  T1 = (P)YPpair(VARREF(YgooScollectionsScollectionYLenumG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScollectionsSflatYLflat_enumG,T0);
  lit_1 = YPPsym((P)"%dat");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_0 = YPmet(FUNCODEREF(fun_Pdat_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YgooScollectionsSflatYPdat);
  if (T5 != YPfalse) {
    T4 = VARREF(YgooScollectionsSflatYPdat);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_Pdat_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YgooScollectionsSflatYPdat,T3);
  lit_3 = YPPsym((P)"%dat-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLflatG),VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_1 = YPmet(FUNCODEREF(fun_Pdat_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YgooScollectionsSflatYPdat_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooScollectionsSflatYPdat_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_Pdat_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooScollectionsSflatYPdat_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSflatYLflat_enumG),VARREF(YgooScollectionsSflatYPdat),VARREF(YgooScollectionsSflatYPdat_setter),VARREF(YLflatG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"%key");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_2 = YPmet(FUNCODEREF(fun_Pkey_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooScollectionsSflatYPkey);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScollectionsSflatYPkey);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_Pkey_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooScollectionsSflatYPkey,T13);
  lit_6 = YPPsym((P)"%key-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLintG),VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_3 = YPmet(FUNCODEREF(fun_Pkey_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScollectionsSflatYPkey_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScollectionsSflatYPkey_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_Pkey_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScollectionsSflatYPkey_setter,T18);
  lit_7 = YPPsym((P)"x");
  T22 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T23 = fun_4;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSflatYLflat_enumG),VARREF(YgooScollectionsSflatYPkey),VARREF(YgooScollectionsSflatYPkey_setter),VARREF(YLintG),T23);
  lit_8 = YPPsym((P)"enum");
  T24 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLflatG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsSflatYLflat_enumG),Ynil);
  fun_enum_5 = YPmet(FUNCODEREF(fun_enum_5),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YgooScollectionsScollectionYenum);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooScollectionsScollectionYenum);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_enum_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooScollectionsScollectionYenum,T25);
  lit_9 = YPPsym((P)"fin?");
  lit_10 = YPPsym((P)"e");
  T29 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_6 = YPmet(FUNCODEREF(fun_finQ_6),LITREF(lit_9),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooScollectionsScollectionYfinQ);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooScollectionsScollectionYfinQ);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_finQ_6;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooScollectionsScollectionYfinQ,T30);
  lit_11 = YPPsym((P)"nxt");
  T34 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)1),VARREF(YgooScollectionsSflatYLflat_enumG),Ynil);
  fun_nxt_7 = YPmet(FUNCODEREF(fun_nxt_7),LITREF(lit_11),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooScollectionsScollectionYnxt);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooScollectionsScollectionYnxt);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_nxt_7;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooScollectionsScollectionYnxt,T35);
  lit_12 = YPPsym((P)"now");
  T39 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_8 = YPmet(FUNCODEREF(fun_now_8),LITREF(lit_12),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooScollectionsScollectionYnow);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooScollectionsScollectionYnow);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_now_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooScollectionsScollectionYnow,T40);
  lit_13 = YPPsym((P)"now-setter");
  lit_14 = YPPsym((P)"v");
  T44 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_9 = YPmet(FUNCODEREF(fun_now_setter_9),LITREF(lit_13),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooScollectionsScollectionYnow_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooScollectionsScollectionYnow_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_now_setter_9;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooScollectionsScollectionYnow_setter,T45);
  lit_15 = YPPsym((P)"now-key");
  T51 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScollectionsSflatYLflat_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T50 = fun_now_key_10 = YPmet(FUNCODEREF(fun_now_key_10),LITREF(lit_15),T51,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YgooScollectionsScollectionYnow_key);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooScollectionsScollectionYnow_key);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_now_key_10;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  T52 = VARSET(YgooScollectionsScollectionYnow_key,T53);
  T49 = T52;
  return T49;
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
  {"loc", &module_info_runtimeSboot, "loc"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"def", &module_info_runtimeSboot, "def"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"do", &module_info_gooSmacros, "do"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"t=", &module_info_gooStypes, "t="},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"logn", &module_info_gooSmath, "logn"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"as", &module_info_gooStypes, "as"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"head", &module_info_runtimeSboot, "head"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"t+", &module_info_gooStypes, "t+"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"app", &module_info_gooSmacros, "app"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"map", &module_info_gooSmacros, "map"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {">>", &module_info_gooSmath, ">>"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"match", &module_info_gooSmacros, "match"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"&", &module_info_gooSmath, "&"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"log", &module_info_gooSmath, "log"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"and", &module_info_gooSmacros, "and"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"round", &module_info_gooSmath, "round"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"pow", &module_info_gooSmath, "pow"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%dat-setter", &YgooScollectionsSflatYPdat_setter},
  {"%key", &YgooScollectionsSflatYPkey},
  {"%dat", &YgooScollectionsSflatYPdat},
  {"%key-setter", &YgooScollectionsSflatYPkey_setter},
  {"---main-0---", NULL},
  {"<flat-enum>", &YgooScollectionsSflatYLflat_enumG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<flat>", "<flat>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsSflat;
MODULE_INFO module_info_gooScollectionsSflat = {
  "goo/collections/flat",
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

extern void load_module_gooScollectionsSflat (void);

void load_module_gooScollectionsSflat (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();

  (P)YgooScollectionsSflatY___main_0___();

}

/* END OF GENERATED CODE. */
