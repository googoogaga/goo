/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: goo/collections/buffer */

EXT(Ylst,"runtime/boot","lst");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLunionG,"runtime/boot","<union>");
DEF(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
DEF(YgooScollectionsSbufferYbuf_len_setter,"goo/collections/buffer","buf-len-setter");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypeY2nd,"goo/type","2nd");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYS,"goo/math","/");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypeYtQ,"goo/type","t?");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
DEF(YgooScollectionsSbufferYbuf_len,"goo/collections/buffer","buf-len");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooStypeYlen,"goo/type","len");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynil,"runtime/boot","nil");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooStypeYtL,"goo/type","t<");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name,"runtime/boot","fun-name");
DEF(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooStypeYtE,"goo/type","t=");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooStypeYas,"goo/type","as");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooStypeYanyQ,"goo/type","any?");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YgooStypeYLproductG,"goo/type","<product>");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
DEF(YgooScollectionsSbufferYbuf_dat_setter,"goo/collections/buffer","buf-dat-setter");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypeYtype_elts_setter,"goo/type","type-elts-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooStypeYtT,"goo/type","t*");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
DEF(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooStypeYtA,"goo/type","t+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
DEF(YgooScollectionsSbufferYbuf_dat,"goo/collections/buffer","buf-dat");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooStypeYall2Q,"goo/type","all2?");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(Yadd_prop,"runtime/boot","add-prop");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_28);
DEFLIT(lit_16);
DEFLIT(lit_10);
DEFLIT(lit_22);
DEFLIT(lit_38);
DEFLIT(lit_32);
DEFLIT(lit_33);
DEFLIT(lit_21);
DEFLIT(lit_37);
DEFLIT(lit_29);
DEFLIT(lit_0);
DEFLIT(lit_12);
DEFLIT(lit_18);
DEFLIT(lit_26);
DEFLIT(lit_23);
DEFLIT(lit_6);
DEFLIT(lit_14);
DEFLIT(lit_3);
DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_20);
DEFLIT(lit_9);
DEFLIT(lit_15);
DEFLIT(lit_36);
DEFLIT(lit_4);
DEFLIT(lit_13);
DEFLIT(lit_24);
DEFLIT(lit_25);
DEFLIT(lit_35);
DEFLIT(lit_31);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_30);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_34);
DEFLIT(lit_11);

/* FUNCTIONS: */

LOCFOR(fun_buf_len_0);
LOCFOR(fun_buf_len_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_buf_dat_3);
LOCFOR(fun_buf_dat_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_len_6);
LOCFOR(fun_elt_or_7);
LOCFOR(fun_elt_setter_8);
LOCFOR(fun_empty_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_x_1286_11);
LOCFOR(fun_x_1284_12);
LOCFOR(fun_catX_13);
LOCFOR(fun_buf_14);
LOCFOR(fun_push_lastX_15);
LOCFOR(fun_pop_lastX_16);
LOCFOR(fun_to_str_17);
LOCFOR(fun_addX_18);
LOCFOR(fun_fill_19);
LOCFOR(fun_lenSfill_setter_20);
LOCFOR(fun_len_setter_21);
LOCFOR(fun_low_elt_22);
LOCFOR(fun_low_elt_setter_23);
extern P YgooScollectionsSbufferY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_buf_len_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSbufferYbuf_len));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_buf_len_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSbufferYbuf_len));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPint((P)0));
}

FUNCODEDEF(fun_buf_dat_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScollectionsSbufferYbuf_dat));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_buf_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScollectionsSbufferYbuf_dat));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_17));
}

FUNCODEDEF(fun_len_6) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSbufferYbuf_len),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_7) {
  P c_,i_,default_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScollectionsSsequenceYrange_checkQ),c_,i_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScollectionsScollectionYlow_elt),c_,i_);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_setter_8) {
  P z_,c_,i_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(i_, 2);
loop:
  T0 = CALL2(1,VARREF(YgooSmagnitudeYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScollectionsScollectionYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YgooScollectionsScollectionYlow_elt_setter),z_,c_,i_);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_empty_9) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YgooScollectionsSbufferYLbufG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF1000;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceiling),s_);
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLvecG),T2);
  check_type(T1,VARREF(YLanyG));
  datF1000 = T1;
  T3 = CALLN(1,VARREF(Ynew),5,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YgooScollectionsSbufferYbuf_len),s_,VARREF(YgooScollectionsSbufferYbuf_dat),datF1000);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1286_11) {
  P x_1285_;
  P eF1001;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1285_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1285_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1285_);
    check_type(T4,VARREF(YLanyG));
    eF1001 = T4;
    CALL2(1,VARREF(YgooScollectionsScollectionYaddX),FREEREF(0),eF1001);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1285_);
    a1 = T6;
    x_1285_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1284_12) {
  P x_1283_;
  P x_1286F1003;
  P sF1002;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1283_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1283_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1283_);
    check_type(T4,VARREF(YLanyG));
    sF1002 = T4;
    T5 = FUNSHELL(1,fun_x_1286_11,2);
    x_1286F1003 = T5;
    FUNINIT(x_1286F1003, 2,FREEREF(0),x_1286F1003);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),sF1002);
    T6 = CALL1(1,x_1286F1003,T7);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1283_);
    a1 = T9;
    x_1283_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_13) {
  P x_,more_;
  P x_1284F1004;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1284_12,2);
  x_1284F1004 = T0;
  FUNINIT(x_1284F1004, 2,x_,x_1284F1004);
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),more_);
  T1 = CALL1(1,x_1284F1004,T2);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_buf_14) {
  P elts_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(elts_, 0);
loop:
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(YgooScollectionsSbufferYLbufG),elts_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_push_lastX_15) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_lastX_16) {
  P c_;
  P xF1006;
  P new_lenF1005;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypeYlen),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  check_type(T1,VARREF(YLanyG));
  new_lenF1005 = T1;
  T4 = CALL2(1,VARREF(YgooScollectionsScollectionYlow_elt),c_,new_lenF1005);
  check_type(T4,VARREF(YLanyG));
  xF1006 = T4;
  CALL2(1,VARREF(YgooScollectionsSbufferYlen_setter),new_lenF1005,c_);
  T3 = xF1006;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_17) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_33),T1,LITREF(lit_34));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_addX_18) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooStypeYlen),c_);
  CALL3(1,VARREF(YgooScollectionsScollectionYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fill_19) {
  P i_;
  P tmpF1008;
  P tmpF1007;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYL),i_,FREEREF(0));
  check_type(T1,VARREF(YLanyG));
  tmpF1007 = T1;
  if (tmpF1007 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooScollectionsScollectionYlow_elt_setter),FREEREF(1),FREEREF(2),i_);
    check_type(T4,VARREF(YLanyG));
    tmpF1008 = T4;
    if (tmpF1008 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lenSfill_setter_20) {
  P new_len_,c_,default_;
  P fillF1012;
  P old_lenF1011;
  P new_dataF1010;
  P datF1009;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSbufferYbuf_dat),c_);
  check_type(T1,VARREF(YLanyG));
  datF1009 = T1;
  T4 = CALL1(1,VARREF(YgooStypeYlen),datF1009);
  T3 = CALL2(1,VARREF(YgooSmagnitudeYG),new_len_,T4);
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceiling),new_len_);
    T7 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLvecG),T8);
    T6 = CALL2(1,VARREF(YgooScollectionsScollectionYfill),T7,default_);
    check_type(T6,VARREF(YLanyG));
    new_dataF1010 = T6;
    CALL2(1,VARREF(YgooScollectionsScollectionYinto),new_dataF1010,datF1009);
    CALL2(1,VARREF(YgooScollectionsSbufferYbuf_len_setter),new_len_,c_);
    T9 = CALL2(1,VARREF(YgooScollectionsSbufferYbuf_dat_setter),new_dataF1010,c_);
    T5 = T9;
    T2 = T5;
  } else {
    T12 = CALL1(1,VARREF(YgooStypeYlen),c_);
    T11 = CALL2(1,VARREF(YgooSmagnitudeYL),new_len_,T12);
    if (T11 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooStypeYlen),c_);
      check_type(T14,VARREF(YLanyG));
      old_lenF1011 = T14;
      CALL2(1,VARREF(YgooScollectionsSbufferYbuf_len_setter),new_len_,c_);
      T16 = FUNSHELL(1,fun_fill_19,4);
      fillF1012 = T16;
      FUNINIT(fillF1012, 4,old_lenF1011,default_,datF1009,fillF1012);
      T17 = CALL1(1,fillF1012,new_len_);
      T15 = T17;
      T13 = T15;
      T10 = T13;
    } else {
      T18 = CALL2(1,VARREF(YgooScollectionsSbufferYbuf_len_setter),new_len_,c_);
      T10 = T18;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_len_setter_21) {
  P new_len_,c_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsScollectionYelt_default),c_);
  T0 = CALL3(1,VARREF(YgooScollectionsSbufferYlenSfill_setter),new_len_,c_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_22) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSbufferYbuf_dat),x_);
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYlow_elt),T1,i_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_setter_23) {
  P z_,x_,i_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypeYlen),x_);
  T0 = CALL2(1,VARREF(YgooSmagnitudeYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T2 = CALL2(1,VARREF(YgooScollectionsSbufferYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,VARREF(YgooScollectionsSbufferYbuf_dat),x_);
  T4 = CALL3(1,VARREF(YgooScollectionsScollectionYlow_elt_setter),z_,T5,i_);
UNLINK_STACK();
  RET(T4);
}

P YgooScollectionsSbufferY___main_0___() {
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<buf>");
  T1 = (P)YPpair(VARREF(YLflatG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScollectionsSbufferYLbufG,T0);
  lit_1 = YPPsym((P)"buf");
  lit_2 = YPPsym((P)"elts");
  T3 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSbufferYbuf,T2);
  lit_3 = YPPsym((P)"push-last!");
  lit_4 = YPPsym((P)"c");
  lit_5 = YPPsym((P)"x");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSbufferYpush_lastX,T4);
  lit_6 = YPPsym((P)"pop-last!");
  T7 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSbufferYpop_lastX,T6);
  lit_7 = YPPsym((P)"len/fill-setter");
  lit_8 = YPPsym((P)"new-len");
  lit_9 = YPPsym((P)"default");
  T9 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSbufferYlenSfill_setter,T8);
  lit_10 = YPPsym((P)"len-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScollectionsSbufferYlen_setter,T10);
  lit_11 = YPPsym((P)"buf-len");
  lit_12 = YPPsym((P)"_x");
  T12 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_len_0 = YPmet(FUNCODEREF(fun_buf_len_0),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooScollectionsSbufferYbuf_len);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScollectionsSbufferYbuf_len);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_buf_len_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooScollectionsSbufferYbuf_len,T13);
  lit_13 = YPPsym((P)"buf-len-setter");
  lit_14 = YPPsym((P)"_z");
  T17 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLintG),VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_len_setter_1 = YPmet(FUNCODEREF(fun_buf_len_setter_1),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScollectionsSbufferYbuf_len_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScollectionsSbufferYbuf_len_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_buf_len_setter_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScollectionsSbufferYbuf_len_setter,T18);
  T22 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T23 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YgooScollectionsSbufferYbuf_len),VARREF(YgooScollectionsSbufferYbuf_len_setter),VARREF(YLintG),T23);
  lit_15 = YPPsym((P)"buf-dat");
  T24 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_dat_3 = YPmet(FUNCODEREF(fun_buf_dat_3),LITREF(lit_15),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YgooScollectionsSbufferYbuf_dat);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooScollectionsSbufferYbuf_dat);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_buf_dat_3;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooScollectionsSbufferYbuf_dat,T25);
  lit_16 = YPPsym((P)"buf-dat-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLvecG),VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_dat_setter_4 = YPmet(FUNCODEREF(fun_buf_dat_setter_4),LITREF(lit_16),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooScollectionsSbufferYbuf_dat_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooScollectionsSbufferYbuf_dat_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_buf_dat_setter_4;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooScollectionsSbufferYbuf_dat_setter,T30);
  lit_17 = CALLN(1, Yvec, 0);
  T34 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T35 = fun_5;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YgooScollectionsSbufferYbuf_dat),VARREF(YgooScollectionsSbufferYbuf_dat_setter),VARREF(YLvecG),T35);
  lit_18 = YPPsym((P)"len");
  T36 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_18),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YgooStypeYlen);
  if (T39 != YPfalse) {
    T38 = VARREF(YgooStypeYlen);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_len_6;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YgooStypeYlen,T37);
  lit_19 = YPPsym((P)"elt-or");
  lit_20 = YPPsym((P)"i");
  T41 = YPsig(YPPlist(3,LITREF(lit_4),LITREF(lit_20),LITREF(lit_9)),YPPlist(3,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPmet(FUNCODEREF(fun_elt_or_7),LITREF(lit_19),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YgooScollectionsScollectionYelt_or);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooScollectionsScollectionYelt_or);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_elt_or_7;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooScollectionsScollectionYelt_or,T42);
  lit_21 = YPPsym((P)"elt-setter");
  lit_22 = YPPsym((P)"z");
  T46 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_4),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_21),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YgooScollectionsScollectionYelt_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooScollectionsScollectionYelt_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_elt_setter_8;
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooScollectionsScollectionYelt_setter,T47);
  lit_23 = YPPsym((P)"empty");
  T52 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YgooScollectionsSbufferYLbufG));
  T51 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,T52),YPfalse,YPint((P)1),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_23),T51,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YgooScollectionsScollectionYempty);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooScollectionsScollectionYempty);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_empty_9;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YgooScollectionsScollectionYempty,T53);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPsym((P)"s");
  T58 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YgooScollectionsSbufferYLbufG));
  T57 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_25)),YPPlist(2,T58,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_24),T57,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScollectionsScollectionYfab);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScollectionsScollectionYfab);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_fab_10;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScollectionsScollectionYfab,T59);
  lit_26 = YPPsym((P)"cat!");
  lit_27 = YPPsym((P)"more");
  lit_28 = YPPsym((P)"x-1284");
  lit_29 = YPPsym((P)"x-1283");
  lit_30 = YPPsym((P)"x-1286");
  lit_31 = YPPsym((P)"x-1285");
  T65 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1286_11 = YPmet(FUNCODEREF(fun_x_1286_11),LITREF(lit_30),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_12 = YPmet(FUNCODEREF(fun_x_1284_12),LITREF(lit_28),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_27)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPtrue,YPint((P)1),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  fun_catX_13 = YPmet(FUNCODEREF(fun_catX_13),LITREF(lit_26),T63,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YgooScollectionsSsequenceYcatX);
  if (T68 != YPfalse) {
    T67 = VARREF(YgooScollectionsSsequenceYcatX);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_catX_13;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YgooScollectionsSsequenceYcatX,T66);
  T70 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  fun_buf_14 = YPmet(FUNCODEREF(fun_buf_14),LITREF(lit_1),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YgooScollectionsSbufferYbuf);
  if (T73 != YPfalse) {
    T72 = VARREF(YgooScollectionsSbufferYbuf);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_buf_14;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YgooScollectionsSbufferYbuf,T71);
  T75 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  fun_push_lastX_15 = YPmet(FUNCODEREF(fun_push_lastX_15),LITREF(lit_3),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScollectionsSbufferYpush_lastX);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScollectionsSbufferYpush_lastX);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_push_lastX_15;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScollectionsSbufferYpush_lastX,T76);
  T80 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pop_lastX_16 = YPmet(FUNCODEREF(fun_pop_lastX_16),LITREF(lit_6),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScollectionsSbufferYpop_lastX);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScollectionsSbufferYpop_lastX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_pop_lastX_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScollectionsSbufferYpop_lastX,T81);
  lit_32 = YPPsym((P)"to-str");
  lit_33 = YPsb((P)"#[");
  lit_34 = YPsb((P)"]");
  T85 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_17 = YPmet(FUNCODEREF(fun_to_str_17),LITREF(lit_32),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooSmathYto_str);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooSmathYto_str);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_to_str_17;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooSmathYto_str,T86);
  lit_35 = YPPsym((P)"add!");
  T90 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  fun_addX_18 = YPmet(FUNCODEREF(fun_addX_18),LITREF(lit_35),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScollectionsScollectionYaddX);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScollectionsScollectionYaddX);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_addX_18;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScollectionsScollectionYaddX,T91);
  lit_36 = YPPsym((P)"fill");
  T96 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_19 = YPmet(FUNCODEREF(fun_fill_19),LITREF(lit_36),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_20 = YPmet(FUNCODEREF(fun_lenSfill_setter_20),LITREF(lit_7),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YgooScollectionsSbufferYlenSfill_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(YgooScollectionsSbufferYlenSfill_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_lenSfill_setter_20;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YgooScollectionsSbufferYlenSfill_setter,T97);
  T101 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_21 = YPmet(FUNCODEREF(fun_len_setter_21),LITREF(lit_10),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YgooScollectionsSbufferYlen_setter);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooScollectionsSbufferYlen_setter);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_len_setter_21;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YgooScollectionsSbufferYlen_setter,T102);
  lit_37 = YPPsym((P)"low-elt");
  T106 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_20)),YPPlist(2,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_22 = YPmet(FUNCODEREF(fun_low_elt_22),LITREF(lit_37),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YgooScollectionsScollectionYlow_elt);
  if (T109 != YPfalse) {
    T108 = VARREF(YgooScollectionsScollectionYlow_elt);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_low_elt_22;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YgooScollectionsScollectionYlow_elt,T107);
  lit_38 = YPPsym((P)"low-elt-setter");
  T113 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_5),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T112 = fun_low_elt_setter_23 = YPmet(FUNCODEREF(fun_low_elt_setter_23),LITREF(lit_38),T113,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YgooScollectionsScollectionYlow_elt_setter);
  if (T117 != YPfalse) {
    T116 = VARREF(YgooScollectionsScollectionYlow_elt_setter);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_low_elt_setter_23;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  T114 = VARSET(YgooScollectionsScollectionYlow_elt_setter,T115);
  T111 = T114;
  return T111;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStype;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSflat;
extern MODULE_INFO module_info_gooScollectionsSvector;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStype},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSsequence},
  {&module_info_gooScollectionsSlist},
  {&module_info_gooScollectionsSflat},
  {&module_info_gooScollectionsSvector},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"df", &module_info_runtimeSboot, "df"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan", &module_info_gooSmath, "atan"},
  {"rem", &module_info_gooSmath, "rem"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"log", &module_info_gooSmath, "log"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"try", &module_info_runtimeSboot, "try"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"<<", &module_info_gooSmath, "<<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"2nd", &module_info_gooStype, "2nd"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"round", &module_info_gooSmath, "round"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"/", &module_info_gooSmath, "/"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"t?", &module_info_gooStype, "t?"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"len", &module_info_gooStype, "len"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"t<", &module_info_gooStype, "t<"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"or", &module_info_gooSmacros, "or"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"t=", &module_info_gooStype, "t="},
  {"and", &module_info_gooSmacros, "and"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"as", &module_info_gooStype, "as"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"for", &module_info_gooSmacros, "for"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"+", &module_info_gooSmath, "+"},
  {"def", &module_info_runtimeSboot, "def"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"any?", &module_info_gooStype, "any?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"&", &module_info_gooSmath, "&"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"neg", &module_info_gooSmath, "neg"},
  {"=", &module_info_gooSmath, "="},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"~=", &module_info_gooSmath, "~="},
  {"==", &module_info_gooSmacros, "=="},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"*", &module_info_gooSmath, "*"},
  {"~", &module_info_gooSmath, "~"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {">>", &module_info_gooSmath, ">>"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"<product>", &module_info_gooStype, "<product>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"case", &module_info_gooSmacros, "case"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"type-elts-setter", &module_info_gooStype, "type-elts-setter"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"t*", &module_info_gooStype, "t*"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"^", &module_info_gooSmath, "^"},
  {"round/", &module_info_gooSmath, "round/"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"map", &module_info_gooSmacros, "map"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"-", &module_info_gooSmath, "-"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"t+", &module_info_gooStype, "t+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"|", &module_info_gooSmath, "|"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"do", &module_info_gooSmacros, "do"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"when", &module_info_gooSmacros, "when"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"acos", &module_info_gooSmath, "acos"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"all2?", &module_info_gooStype, "all2?"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"push-last!", &YgooScollectionsSbufferYpush_lastX},
  {"<buf>", &YgooScollectionsSbufferYLbufG},
  {"buf", &YgooScollectionsSbufferYbuf},
  {"buf-len-setter", &YgooScollectionsSbufferYbuf_len_setter},
  {"buf-len", &YgooScollectionsSbufferYbuf_len},
  {"len-setter", &YgooScollectionsSbufferYlen_setter},
  {"buf-dat-setter", &YgooScollectionsSbufferYbuf_dat_setter},
  {"len/fill-setter", &YgooScollectionsSbufferYlenSfill_setter},
  {"---main-0---", NULL},
  {"buf-dat", &YgooScollectionsSbufferYbuf_dat},
  {"pop-last!", &YgooScollectionsSbufferYpop_lastX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"push-last!", "push-last!"},
  {"<buf>", "<buf>"},
  {"buf", "buf"},
  {"len-setter", "len-setter"},
  {"len/fill-setter", "len/fill-setter"},
  {"pop-last!", "pop-last!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsSbuffer;
MODULE_INFO module_info_gooScollectionsSbuffer = {
  "goo/collections/buffer",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStype (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSsequence (void);
extern void load_module_gooScollectionsSlist (void);
extern void load_module_gooScollectionsSflat (void);
extern void load_module_gooScollectionsSvector (void);

/* EXPRESSION: */

extern void load_module_gooScollectionsSbuffer (void);

void load_module_gooScollectionsSbuffer (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStype();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();
  load_module_gooScollectionsSlist();
  load_module_gooScollectionsSflat();
  load_module_gooScollectionsSvector();

  (P)YgooScollectionsSbufferY___main_0___();

}

/* END OF GENERATED CODE. */
