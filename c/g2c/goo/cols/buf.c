/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/buffer */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(YprotoScollectionsScollectionYkey_type,"proto/collections/collection","key-type");
EXT(Yprop_getter,"boot","prop-getter");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(YprotoScollectionsScollectionYfinQ,"proto/collections/collection","fin?");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
EXT(YprotoSmathYA,"proto/math","+");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YprotoScollectionsSsequenceYbelow,"proto/collections/sequence","below");
EXT(YLmetG,"boot","<met>");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(Yprop_init,"boot","prop-init");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoSmathYsin,"proto/math","sin");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoScollectionsScollectionYenum,"proto/collections/collection","enum");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(YprotoScollectionsScollectionYelt_default,"proto/collections/collection","elt-default");
DEF(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YLchrG,"boot","<chr>");
EXT(YprotoSmathYrem,"proto/math","rem");
EXT(YLflatG,"boot","<flat>");
EXT(YprotoScollectionsSsequenceYdel_vals,"proto/collections/sequence","del-vals");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YprotoSmathYlog,"proto/math","log");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
EXT(YprotoScollectionsScollectionYdup,"proto/collections/collection","dup");
EXT(YprotoScollectionsScollectionYelt_type,"proto/collections/collection","elt-type");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoSmathYtanh,"proto/math","tanh");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsScollectionYfold,"proto/collections/collection","fold");
EXT(YprotoSmathYB,"proto/math","&");
EXT(YprotoScollectionsScollectionYelts,"proto/collections/collection","elts");
EXT(YLtupG,"boot","<tup>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYtruncS,"proto/math","trunc/");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoStypesYtQ,"proto/types","t?");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(YprotoScollectionsSsequenceYreject,"proto/collections/sequence","reject");
EXT(Ysig_val,"boot","sig-val");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YLlstG,"boot","<lst>");
EXT(YLlogG,"boot","<log>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YprotoSmathYK,"proto/math","|");
EXT(YprotoSmathYsqrt,"proto/math","sqrt");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YprotoSmathYround,"proto/math","round");
EXT(YprotoSmathYlogn,"proto/math","logn");
EXT(Ysym_name,"boot","sym-name");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoSmathY1A,"proto/math","1+");
EXT(YprotoSmathYpow,"proto/math","pow");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YprotoScollectionsScollectionYfind,"proto/collections/collection","find");
EXT(Yfun_name,"boot","fun-name");
EXT(YprotoSmathYdigitQ,"proto/math","digit?");
EXT(Yprop_owner,"boot","prop-owner");
DEF(YprotoScollectionsSbufferYbuf_dat_setter,"proto/collections/buffer","buf-dat-setter");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(Yobject_class,"boot","object-class");
DEF(YprotoScollectionsSbufferYbuf_len,"proto/collections/buffer","buf-len");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoSmathYatan,"proto/math","atan");
EXT(Yclass_parents,"boot","class-parents");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(Yprop_value,"boot","prop-value");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YprotoSmathYto_upper,"proto/math","to-upper");
EXT(YprotoStypesYanyQ,"proto/types","any?");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(Yclass_props,"boot","class-props");
EXT(YprotoScollectionsScollectionYzap,"proto/collections/collection","zap");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYGGG,"proto/math",">>>");
EXT(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yfun_names,"boot","fun-names");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYtrunc,"proto/math","trunc");
EXT(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYalphaQ,"proto/math","alpha?");
EXT(YprotoSmathYceil,"proto/math","ceil");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYaddX,"proto/collections/collection","add!");
EXT(YprotoScollectionsSsequenceYfinds,"proto/collections/sequence","finds");
EXT(YLmagG,"boot","<mag>");
EXT(YprotoSmathYto_lower,"proto/math","to-lower");
EXT(YDmax_int,"boot","$max-int");
EXT(YprotoScollectionsScollectionYfind_or,"proto/collections/collection","find-or");
EXT(Yfind_setter,"boot","find-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoScollectionsScollectionYLtabG,"proto/collections/collection","<tab>");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YprotoStypesYLproductG,"proto/types","<product>");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathYbitQ,"proto/math","bit?");
EXT(YprotoSmathYcosh,"proto/math","cosh");
EXT(YprotoScollectionsScollectionYdel,"proto/collections/collection","del");
EXT(Yadd_prop,"boot","add-prop");
EXT(YprotoStypesYlen,"proto/types","len");
EXT(YprotoStypesYtype_elts_setter,"proto/types","type-elts-setter");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLoptsG,"boot","<opts>");
EXT(YprotoScollectionsScollectionYLenumG,"proto/collections/collection","<enum>");
EXT(YprotoSmathYmod,"proto/math","mod");
EXT(Ytail,"boot","tail");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoSmagnitudesYmax,"proto/magnitudes","max");
EXT(YprotoSmathYacos,"proto/math","acos");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");
EXT(YLtypeG,"boot","<type>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YLlocG,"boot","<loc>");
DEF(YprotoScollectionsSbufferYbuf_len_setter,"proto/collections/buffer","buf-len-setter");
EXT(Yord_app_mets,"boot","ord-app-mets");
DEF(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYLL,"proto/math","<<");
EXT(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(YprotoScollectionsSsequenceYins,"proto/collections/sequence","ins");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoSmathYsinh,"proto/math","sinh");
EXT(YPPmacro,"boot","%%macro");
EXT(Yfind_getter,"boot","find-getter");
EXT(YprotoSmathYupperQ,"proto/math","upper?");
EXT(YprotoSmathYisqrt,"proto/math","isqrt");
EXT(YprotoSmathY1_,"proto/math","1-");
EXT(YprotoSmathYDe,"proto/math","$e");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YprotoScollectionsScollectionYitems,"proto/collections/collection","items");
EXT(YprotoScollectionsScollectionYnow,"proto/collections/collection","now");
DEF(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(Yfun_val,"boot","fun-val");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YprotoSmathYatan2,"proto/math","atan2");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YmacrosYpair,"macros","pair");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoSmathYDpi,"proto/math","$pi");
EXT(YprotoScollectionsSsequenceYinsX,"proto/collections/sequence","ins!");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YprotoSmathYasin,"proto/math","asin");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsScollectionYnow_setter,"proto/collections/collection","now-setter");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YprotoSmathYN,"proto/math","~");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YprotoScollectionsSbufferYbuf_dat,"proto/collections/buffer","buf-dat");
EXT(YprotoScollectionsScollectionYnxt,"proto/collections/collection","nxt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YmacrosYdo,"macros","do");
EXT(YOisaQ,"boot","@isa?");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
DEF(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(YprotoScollectionsScollectionYrange_error,"proto/collections/collection","range-error");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSmathYC,"proto/math","^");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSmathYlowerQ,"proto/math","lower?");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YprotoSmathYtan,"proto/math","tan");
EXT(Yobject_props,"boot","object-props");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLintG,"boot","<int>");
EXT(YLstrG,"boot","<str>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoSmathYGG,"proto/math",">>");
EXT(YmacrosYcat_sym,"macros","cat-sym");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YprotoScollectionsScollectionYkey_test,"proto/collections/collection","key-test");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
EXT(YPprop,"boot","%prop");
EXT(YprotoSmathYcos,"proto/math","cos");
EXT(YprotoStypesYtT,"proto/types","t*");
EXT(YPisa,"boot","%isa");
EXT(YprotoScollectionsScollectionYfoldA,"proto/collections/collection","fold+");
DEF(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(Yhead,"boot","head");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_37);
DEFLIT(lit_21);
DEFLIT(lit_5);
DEFLIT(lit_38);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_24);
DEFLIT(lit_33);
DEFLIT(lit_22);
DEFLIT(lit_23);
DEFLIT(lit_7);
DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_18);
DEFLIT(lit_16);
DEFLIT(lit_36);
DEFLIT(lit_28);
DEFLIT(lit_9);
DEFLIT(lit_11);
DEFLIT(lit_25);
DEFLIT(lit_13);
DEFLIT(lit_14);
DEFLIT(lit_26);
DEFLIT(lit_20);
DEFLIT(lit_35);
DEFLIT(lit_4);
DEFLIT(lit_27);
DEFLIT(lit_10);
DEFLIT(lit_2);
DEFLIT(lit_31);
DEFLIT(lit_12);
DEFLIT(lit_30);
DEFLIT(lit_29);
DEFLIT(lit_19);
DEFLIT(lit_17);
DEFLIT(lit_32);
DEFLIT(lit_34);

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
LOCFOR(fun_x_2381_11);
LOCFOR(fun_x_2379_12);
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
extern P YprotoScollectionsSbufferY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_buf_len_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YprotoScollectionsSbufferYbuf_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_buf_len_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSbufferYbuf_len));
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
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_buf_dat_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YprotoScollectionsSbufferYbuf_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_buf_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YprotoScollectionsSbufferYbuf_dat));
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
  QRET(LITREF(lit_17));
}

FUNCODEDEF(fun_len_6) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_len),c_);
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
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYrange_checkQ),c_,i_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYlow_elt),c_,i_);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
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
  T0 = CALL2(1,VARREF(YprotoSmagnitudesYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),z_,c_,i_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_empty_9) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YprotoScollectionsSbufferYLbufG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF5383;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YprotoSmathYpower_of_two_ceiling),s_);
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YLvecG),T2);
  datF5383 = T1;
  T3 = CALLN(1,VARREF(Ynew),5,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YprotoScollectionsSbufferYbuf_len),s_,VARREF(YprotoScollectionsSbufferYbuf_dat),datF5383);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2381_11) {
  P x_2380_;
  P eF5384;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_2380_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYfinQ),x_2380_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYnow),x_2380_);
    eF5384 = T4;
    CALL2(1,VARREF(YprotoScollectionsScollectionYaddX),FREEREF(0),eF5384);
    T6 = CALL1(1,VARREF(YprotoScollectionsScollectionYnxt),x_2380_);
    a1 = T6;
    x_2380_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2379_12) {
  P x_2378_;
  P x_2381F5386;
  P sF5385;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_2378_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYfinQ),x_2378_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYnow),x_2378_);
    sF5385 = T4;
    T5 = FUNSHELL(1,fun_x_2381_11,2);
    x_2381F5386 = T5;
    FUNINIT(x_2381F5386, 2,FREEREF(0),x_2381F5386);
    T7 = CALL1(1,VARREF(YprotoScollectionsScollectionYenum),sF5385);
    T6 = CALL1(0,x_2381F5386,T7);
    T9 = CALL1(1,VARREF(YprotoScollectionsScollectionYnxt),x_2378_);
    a1 = T9;
    x_2378_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_13) {
  P x_,more_;
  P x_2379F5387;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_2379_12,2);
  x_2379F5387 = T0;
  FUNINIT(x_2379F5387, 2,x_,x_2379F5387);
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYenum),more_);
  T1 = CALL1(0,x_2379F5387,T2);
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
  T0 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YprotoScollectionsSbufferYLbufG),elts_);
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_lastX_16) {
  P c_;
  P xF5389;
  P new_lenF5388;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoStypesYlen),c_);
  T1 = CALL2(1,VARREF(YprotoSmathY_),T2,YPint((P)1));
  new_lenF5388 = T1;
  T4 = CALL2(1,VARREF(YprotoScollectionsScollectionYlow_elt),c_,new_lenF5388);
  xF5389 = T4;
  CALL2(1,VARREF(YprotoScollectionsSbufferYlen_setter),new_lenF5388,c_);
  T3 = xF5389;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_17) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YmacrosYcat),LITREF(lit_33),T1,LITREF(lit_34));
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
  T0 = CALL1(1,VARREF(YprotoStypesYlen),c_);
  CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fill_19) {
  P i_;
  P tmpF5391;
  P tmpF5390;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmagnitudesYL),i_,FREEREF(0));
  tmpF5390 = T1;
  if (tmpF5390 != YPfalse) {
    T4 = CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),FREEREF(1),FREEREF(2),i_);
    tmpF5391 = T4;
    if (tmpF5391 != YPfalse) {
      T7 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  QRET(T0);
}

FUNCODEDEF(fun_lenSfill_setter_20) {
  P new_len_,c_,default_;
  P fillF5395;
  P old_lenF5394;
  P new_dataF5393;
  P datF5392;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_dat),c_);
  datF5392 = T1;
  T4 = CALL1(1,VARREF(YprotoStypesYlen),datF5392);
  T3 = CALL2(1,VARREF(YprotoSmagnitudesYG),new_len_,T4);
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YprotoSmathYpower_of_two_ceiling),new_len_);
    T7 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YLvecG),T8);
    T6 = CALL2(1,VARREF(YprotoScollectionsScollectionYfill),T7,default_);
    new_dataF5393 = T6;
    CALL2(1,VARREF(YprotoScollectionsScollectionYinto),new_dataF5393,datF5392);
    CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_len_setter),new_len_,c_);
    T9 = CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_dat_setter),new_dataF5393,c_);
    T5 = T9;
    T2 = T5;
  } else {
    T12 = CALL1(1,VARREF(YprotoStypesYlen),c_);
    T11 = CALL2(1,VARREF(YprotoSmagnitudesYL),new_len_,T12);
    if (T11 != YPfalse) {
      T14 = CALL1(1,VARREF(YprotoStypesYlen),c_);
      old_lenF5394 = T14;
      CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_len_setter),new_len_,c_);
      T16 = FUNSHELL(1,fun_fill_19,4);
      fillF5395 = T16;
      FUNINIT(fillF5395, 4,old_lenF5394,default_,datF5392,fillF5395);
      T17 = CALL1(1,fillF5395,new_len_);
      T15 = T17;
      T13 = T15;
      T10 = T13;
    } else {
      T18 = CALL2(1,VARREF(YprotoScollectionsSbufferYbuf_len_setter),new_len_,c_);
      T10 = T18;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_21) {
  P new_len_,c_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYelt_default),c_);
  T0 = CALL3(1,VARREF(YprotoScollectionsSbufferYlenSfill_setter),new_len_,c_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_22) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_dat),x_);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYlow_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
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
  T1 = CALL1(1,VARREF(YprotoStypesYlen),x_);
  T0 = CALL2(1,VARREF(YprotoSmagnitudesYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    T2 = CALL2(1,VARREF(YprotoScollectionsSbufferYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,VARREF(YprotoScollectionsSbufferYbuf_dat),x_);
  T4 = CALL3(1,VARREF(YprotoScollectionsScollectionYlow_elt_setter),z_,T5,i_);
UNLINK_STACK();
  QRET(T4);
}

P YprotoScollectionsSbufferY___main_0___() {
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
  VARSET(YprotoScollectionsSbufferYLbufG,T0);
  lit_1 = YPPsym((P)"buf");
  lit_2 = YPPsym((P)"elts");
  T3 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoScollectionsSbufferYbuf,T2);
  lit_3 = YPPsym((P)"push-last!");
  lit_4 = YPPsym((P)"c");
  lit_5 = YPPsym((P)"x");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoScollectionsSbufferYpush_lastX,T4);
  lit_6 = YPPsym((P)"pop-last!");
  T7 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoScollectionsSbufferYpop_lastX,T6);
  lit_7 = YPPsym((P)"len/fill-setter");
  lit_8 = YPPsym((P)"new-len");
  lit_9 = YPPsym((P)"default");
  T9 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoScollectionsSbufferYlenSfill_setter,T8);
  lit_10 = YPPsym((P)"len-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoScollectionsSbufferYlen_setter,T10);
  lit_11 = YPPsym((P)"buf-len");
  lit_12 = YPPsym((P)"_x");
  T12 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_len_0 = YPmet(FUNCODEREF(fun_buf_len_0),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YprotoScollectionsSbufferYbuf_len);
  if (T15 != YPfalse) {
    T14 = VARREF(YprotoScollectionsSbufferYbuf_len);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_buf_len_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YprotoScollectionsSbufferYbuf_len,T13);
  lit_13 = YPPsym((P)"buf-len-setter");
  lit_14 = YPPsym((P)"_z");
  T17 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_len_setter_1 = YPmet(FUNCODEREF(fun_buf_len_setter_1),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YprotoScollectionsSbufferYbuf_len_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YprotoScollectionsSbufferYbuf_len_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_buf_len_setter_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YprotoScollectionsSbufferYbuf_len_setter,T18);
  T22 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T23 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YprotoScollectionsSbufferYbuf_len),VARREF(YprotoScollectionsSbufferYbuf_len_setter),VARREF(YLintG),T23);
  lit_15 = YPPsym((P)"buf-dat");
  T24 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_dat_3 = YPmet(FUNCODEREF(fun_buf_dat_3),LITREF(lit_15),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YprotoScollectionsSbufferYbuf_dat);
  if (T27 != YPfalse) {
    T26 = VARREF(YprotoScollectionsSbufferYbuf_dat);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_buf_dat_3;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YprotoScollectionsSbufferYbuf_dat,T25);
  lit_16 = YPPsym((P)"buf-dat-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLvecG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_dat_setter_4 = YPmet(FUNCODEREF(fun_buf_dat_setter_4),LITREF(lit_16),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YprotoScollectionsSbufferYbuf_dat_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YprotoScollectionsSbufferYbuf_dat_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_buf_dat_setter_4;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YprotoScollectionsSbufferYbuf_dat_setter,T30);
  lit_17 = CALLN(1, Yvec, 0);
  T34 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T35 = fun_5;
  CALLN(1,VARREF(YPprop),5,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YprotoScollectionsSbufferYbuf_dat),VARREF(YprotoScollectionsSbufferYbuf_dat_setter),VARREF(YLvecG),T35);
  lit_18 = YPPsym((P)"len");
  T36 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_18),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YprotoStypesYlen);
  if (T39 != YPfalse) {
    T38 = VARREF(YprotoStypesYlen);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_len_6;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YprotoStypesYlen,T37);
  lit_19 = YPPsym((P)"elt-or");
  lit_20 = YPPsym((P)"i");
  T41 = YPsig(YPPlist(3,LITREF(lit_4),LITREF(lit_20),LITREF(lit_9)),YPPlist(3,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPmet(FUNCODEREF(fun_elt_or_7),LITREF(lit_19),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YprotoScollectionsScollectionYelt_or);
  if (T44 != YPfalse) {
    T43 = VARREF(YprotoScollectionsScollectionYelt_or);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_elt_or_7;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YprotoScollectionsScollectionYelt_or,T42);
  lit_21 = YPPsym((P)"elt-setter");
  lit_22 = YPPsym((P)"z");
  T46 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_4),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_21),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YprotoScollectionsScollectionYelt_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YprotoScollectionsScollectionYelt_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_elt_setter_8;
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YprotoScollectionsScollectionYelt_setter,T47);
  lit_23 = YPPsym((P)"empty");
  T52 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YprotoScollectionsSbufferYLbufG));
  T51 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,T52),YPfalse,YPint((P)1),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_23),T51,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T55 != YPfalse) {
    T54 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_empty_9;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YprotoScollectionsScollectionYempty,T53);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPsym((P)"s");
  T58 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YprotoScollectionsSbufferYLbufG));
  T57 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_25)),YPPlist(2,T58,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_24),T57,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YprotoScollectionsScollectionYfab);
  if (T61 != YPfalse) {
    T60 = VARREF(YprotoScollectionsScollectionYfab);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_fab_10;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YprotoScollectionsScollectionYfab,T59);
  lit_26 = YPPsym((P)"cat!");
  lit_27 = YPPsym((P)"more");
  lit_28 = YPPsym((P)"x-2379");
  lit_29 = YPPsym((P)"x-2378");
  lit_30 = YPPsym((P)"x-2381");
  lit_31 = YPPsym((P)"x-2380");
  T65 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2381_11 = YPmet(FUNCODEREF(fun_x_2381_11),LITREF(lit_30),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2379_12 = YPmet(FUNCODEREF(fun_x_2379_12),LITREF(lit_28),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_27)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPtrue,YPint((P)1),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_catX_13 = YPmet(FUNCODEREF(fun_catX_13),LITREF(lit_26),T63,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YprotoScollectionsSsequenceYcatX);
  if (T68 != YPfalse) {
    T67 = VARREF(YprotoScollectionsSsequenceYcatX);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_catX_13;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YprotoScollectionsSsequenceYcatX,T66);
  T70 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_buf_14 = YPmet(FUNCODEREF(fun_buf_14),LITREF(lit_1),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YprotoScollectionsSbufferYbuf);
  if (T73 != YPfalse) {
    T72 = VARREF(YprotoScollectionsSbufferYbuf);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_buf_14;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YprotoScollectionsSbufferYbuf,T71);
  T75 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_push_lastX_15 = YPmet(FUNCODEREF(fun_push_lastX_15),LITREF(lit_3),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YprotoScollectionsSbufferYpush_lastX);
  if (T78 != YPfalse) {
    T77 = VARREF(YprotoScollectionsSbufferYpush_lastX);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_push_lastX_15;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YprotoScollectionsSbufferYpush_lastX,T76);
  T80 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pop_lastX_16 = YPmet(FUNCODEREF(fun_pop_lastX_16),LITREF(lit_6),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YprotoScollectionsSbufferYpop_lastX);
  if (T83 != YPfalse) {
    T82 = VARREF(YprotoScollectionsSbufferYpop_lastX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_pop_lastX_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YprotoScollectionsSbufferYpop_lastX,T81);
  lit_32 = YPPsym((P)"to-str");
  lit_33 = YPsb((P)"#[");
  lit_34 = YPsb((P)"]");
  T85 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_17 = YPmet(FUNCODEREF(fun_to_str_17),LITREF(lit_32),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YprotoSmathYto_str);
  if (T88 != YPfalse) {
    T87 = VARREF(YprotoSmathYto_str);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_to_str_17;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YprotoSmathYto_str,T86);
  lit_35 = YPPsym((P)"add!");
  T90 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YprotoScollectionsSbufferYLbufG),Ynil);
  fun_addX_18 = YPmet(FUNCODEREF(fun_addX_18),LITREF(lit_35),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YprotoScollectionsScollectionYaddX);
  if (T93 != YPfalse) {
    T92 = VARREF(YprotoScollectionsScollectionYaddX);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_addX_18;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YprotoScollectionsScollectionYaddX,T91);
  lit_36 = YPPsym((P)"fill");
  T96 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_19 = YPmet(FUNCODEREF(fun_fill_19),LITREF(lit_36),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_20 = YPmet(FUNCODEREF(fun_lenSfill_setter_20),LITREF(lit_7),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YprotoScollectionsSbufferYlenSfill_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(YprotoScollectionsSbufferYlenSfill_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_lenSfill_setter_20;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YprotoScollectionsSbufferYlenSfill_setter,T97);
  T101 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YprotoScollectionsSbufferYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_21 = YPmet(FUNCODEREF(fun_len_setter_21),LITREF(lit_10),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YprotoScollectionsSbufferYlen_setter);
  if (T104 != YPfalse) {
    T103 = VARREF(YprotoScollectionsSbufferYlen_setter);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_len_setter_21;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YprotoScollectionsSbufferYlen_setter,T102);
  lit_37 = YPPsym((P)"low-elt");
  T106 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_22 = YPmet(FUNCODEREF(fun_low_elt_22),LITREF(lit_37),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YprotoScollectionsScollectionYlow_elt);
  if (T109 != YPfalse) {
    T108 = VARREF(YprotoScollectionsScollectionYlow_elt);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_low_elt_22;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YprotoScollectionsScollectionYlow_elt,T107);
  lit_38 = YPPsym((P)"low-elt-setter");
  T113 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_5),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T112 = fun_low_elt_setter_23 = YPmet(FUNCODEREF(fun_low_elt_setter_23),LITREF(lit_38),T113,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YprotoScollectionsScollectionYlow_elt_setter);
  if (T117 != YPfalse) {
    T116 = VARREF(YprotoScollectionsScollectionYlow_elt_setter);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_low_elt_setter_23;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  T114 = VARSET(YprotoScollectionsScollectionYlow_elt_setter,T115);
  T111 = T114;
  return T111;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsSflat;
extern MODULE_INFO module_info_protoScollectionsSvector;
extern MODULE_INFO module_info_protoSmagnitudes;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoSmath},
  {&module_info_protoStypes},
  {&module_info_protoScollectionsScollection},
  {&module_info_protoScollectionsSsequence},
  {&module_info_protoScollectionsSlist},
  {&module_info_protoScollectionsSflat},
  {&module_info_protoScollectionsSvector},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"key-type", &module_info_protoScollectionsScollection, "key-type"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"and", &module_info_macros, "and"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"fin?", &module_info_protoScollectionsScollection, "fin?"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"+", &module_info_protoSmath, "+"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"below", &module_info_protoScollectionsSsequence, "below"},
  {"<met>", &module_info_boot, "<met>"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"mif", &module_info_boot, "mif"},
  {"use/export", &module_info_boot, "use/export"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"round/", &module_info_protoSmath, "round/"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sin", &module_info_protoSmath, "sin"},
  {"t+", &module_info_protoStypes, "t+"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"enum", &module_info_protoScollectionsScollection, "enum"},
  {"var-name", &module_info_macros, "var-name"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"elt-default", &module_info_protoScollectionsScollection, "elt-default"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"even?", &module_info_protoSmath, "even?"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"isa", &module_info_boot, "isa"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"rem", &module_info_protoSmath, "rem"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"del-vals", &module_info_protoScollectionsSsequence, "del-vals"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"log", &module_info_protoSmath, "log"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"-", &module_info_protoSmath, "-"},
  {"incf", &module_info_macros, "incf"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%f*", &module_info_boot, "%f*"},
  {"dup", &module_info_protoScollectionsScollection, "dup"},
  {"%iu", &module_info_boot, "%iu"},
  {"elt-type", &module_info_protoScollectionsScollection, "elt-type"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"tanh", &module_info_protoSmath, "tanh"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"fold", &module_info_protoScollectionsScollection, "fold"},
  {"&", &module_info_protoSmath, "&"},
  {"%im", &module_info_boot, "%im"},
  {"elts", &module_info_protoScollectionsScollection, "elts"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"rep", &module_info_boot, "rep"},
  {"opf", &module_info_macros, "opf"},
  {"~==", &module_info_protoSmath, "~=="},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"map", &module_info_macros, "map"},
  {"trunc/", &module_info_protoSmath, "trunc/"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"~=", &module_info_protoSmath, "~="},
  {"t?", &module_info_protoStypes, "t?"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"reject", &module_info_protoScollectionsSsequence, "reject"},
  {"match", &module_info_macros, "match"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<log>", &module_info_boot, "<log>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"|", &module_info_protoSmath, "|"},
  {"sqrt", &module_info_protoSmath, "sqrt"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"*", &module_info_protoSmath, "*"},
  {"renew", &module_info_macros, "renew"},
  {"round", &module_info_protoSmath, "round"},
  {"decf", &module_info_macros, "decf"},
  {"%raw", &module_info_boot, "%raw"},
  {"logn", &module_info_protoSmath, "logn"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"1+", &module_info_protoSmath, "1+"},
  {"pow", &module_info_protoSmath, "pow"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"find", &module_info_protoScollectionsScollection, "find"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"digit?", &module_info_protoSmath, "digit?"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"t<", &module_info_protoStypes, "t<"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"atan", &module_info_protoSmath, "atan"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"collected", &module_info_macros, "collected"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {">", &module_info_protoSmagnitudes, ">"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"seq", &module_info_boot, "seq"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i<", &module_info_boot, "%i<"},
  {"to-upper", &module_info_protoSmath, "to-upper"},
  {"%selt", &module_info_boot, "%selt"},
  {"any?", &module_info_protoStypes, "any?"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"pushf", &module_info_macros, "pushf"},
  {"class-props", &module_info_boot, "class-props"},
  {"zap", &module_info_protoScollectionsScollection, "zap"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"t=", &module_info_protoStypes, "t="},
  {"error", &module_info_boot, "error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"ddv", &module_info_macros, "ddv"},
  {">>>", &module_info_protoSmath, ">>>"},
  {"%cb", &module_info_boot, "%cb"},
  {"<", &module_info_protoSmagnitudes, "<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"collecting", &module_info_macros, "collecting"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"quote", &module_info_boot, "quote"},
  {"trunc", &module_info_protoSmath, "trunc"},
  {"%str", &module_info_boot, "%str"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"=", &module_info_protoSmath, "="},
  {"alpha?", &module_info_protoSmath, "alpha?"},
  {"ceil", &module_info_protoSmath, "ceil"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"add!", &module_info_protoScollectionsScollection, "add!"},
  {"finds", &module_info_protoScollectionsSsequence, "finds"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"to-lower", &module_info_protoSmath, "to-lower"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-or", &module_info_protoScollectionsScollection, "find-or"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"<tab>", &module_info_protoScollectionsScollection, "<tab>"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"<product>", &module_info_protoStypes, "<product>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"elt-or", &module_info_protoScollectionsScollection, "elt-or"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"bit?", &module_info_protoSmath, "bit?"},
  {"cosh", &module_info_protoSmath, "cosh"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"del", &module_info_protoScollectionsScollection, "del"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"len", &module_info_protoStypes, "len"},
  {"type-elts-setter", &module_info_protoStypes, "type-elts-setter"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"<enum>", &module_info_protoScollectionsScollection, "<enum>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"mod", &module_info_protoSmath, "mod"},
  {"tail", &module_info_boot, "tail"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"max", &module_info_protoSmagnitudes, "max"},
  {"acos", &module_info_protoSmath, "acos"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<<", &module_info_protoSmath, "<<"},
  {"case-by", &module_info_macros, "case-by"},
  {"min", &module_info_protoSmagnitudes, "min"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"ins", &module_info_protoScollectionsSsequence, "ins"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"%i&", &module_info_boot, "%i&"},
  {"class-name", &module_info_boot, "class-name"},
  {"swapf", &module_info_macros, "swapf"},
  {"sinh", &module_info_protoSmath, "sinh"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"upper?", &module_info_protoSmath, "upper?"},
  {"if", &module_info_boot, "if"},
  {"isqrt", &module_info_protoSmath, "isqrt"},
  {"1-", &module_info_protoSmath, "1-"},
  {"$e", &module_info_protoSmath, "$e"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"dlet", &module_info_macros, "dlet"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"items", &module_info_protoScollectionsScollection, "items"},
  {"now", &module_info_protoScollectionsScollection, "now"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"atan2", &module_info_protoSmath, "atan2"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%c=", &module_info_boot, "%c="},
  {"unless", &module_info_macros, "unless"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%f=", &module_info_boot, "%f="},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"dc", &module_info_boot, "dc"},
  {"abs", &module_info_protoSmath, "abs"},
  {"floor", &module_info_protoSmath, "floor"},
  {"pair", &module_info_macros, "pair"},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"$pi", &module_info_protoSmath, "$pi"},
  {"ins!", &module_info_protoScollectionsSsequence, "ins!"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {">=", &module_info_protoSmagnitudes, ">="},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"asin", &module_info_protoSmath, "asin"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"as", &module_info_protoStypes, "as"},
  {"now-setter", &module_info_protoScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"~", &module_info_protoSmath, "~"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"nxt", &module_info_protoScollectionsScollection, "nxt"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"while", &module_info_macros, "while"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"range-error", &module_info_protoScollectionsScollection, "range-error"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"^", &module_info_protoSmath, "^"},
  {"dl", &module_info_boot, "dl"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i!", &module_info_boot, "%i!"},
  {"lower?", &module_info_protoSmath, "lower?"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"tan", &module_info_protoSmath, "tan"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"dg", &module_info_boot, "dg"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<int>", &module_info_boot, "<int>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"%fu", &module_info_boot, "%fu"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"<=", &module_info_protoSmagnitudes, "<="},
  {"sup", &module_info_macros, "sup"},
  {"%sb", &module_info_boot, "%sb"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {">>", &module_info_protoSmath, ">>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"%velt", &module_info_boot, "%velt"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"==", &module_info_macros, "=="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"key-test", &module_info_protoScollectionsScollection, "key-test"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"/", &module_info_protoSmath, "/"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"%prop", &module_info_boot, "%prop"},
  {"cos", &module_info_protoSmath, "cos"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"t*", &module_info_protoStypes, "t*"},
  {"%f-", &module_info_boot, "%f-"},
  {"case", &module_info_macros, "case"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%isa", &module_info_boot, "%isa"},
  {"fold+", &module_info_protoScollectionsScollection, "fold+"},
  {"popf", &module_info_macros, "popf"},
  {"head", &module_info_boot, "head"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"buf", &YprotoScollectionsSbufferYbuf},
  {"buf-dat-setter", &YprotoScollectionsSbufferYbuf_dat_setter},
  {"buf-len", &YprotoScollectionsSbufferYbuf_len},
  {"len-setter", &YprotoScollectionsSbufferYlen_setter},
  {"buf-len-setter", &YprotoScollectionsSbufferYbuf_len_setter},
  {"<buf>", &YprotoScollectionsSbufferYLbufG},
  {"len/fill-setter", &YprotoScollectionsSbufferYlenSfill_setter},
  {"buf-dat", &YprotoScollectionsSbufferYbuf_dat},
  {"pop-last!", &YprotoScollectionsSbufferYpop_lastX},
  {"---main-0---", NULL},
  {"push-last!", &YprotoScollectionsSbufferYpush_lastX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"buf", "buf"},
  {"len-setter", "len-setter"},
  {"<buf>", "<buf>"},
  {"len/fill-setter", "len/fill-setter"},
  {"pop-last!", "pop-last!"},
  {"push-last!", "push-last!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsSbuffer;
MODULE_INFO module_info_protoScollectionsSbuffer = {
  "proto/collections/buffer",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_protoSmath (void);
extern void load_module_protoStypes (void);
extern void load_module_protoScollectionsScollection (void);
extern void load_module_protoScollectionsSsequence (void);
extern void load_module_protoScollectionsSlist (void);
extern void load_module_protoScollectionsSflat (void);
extern void load_module_protoScollectionsSvector (void);

/* EXPRESSION: */

extern void load_module_protoScollectionsSbuffer (void);

void load_module_protoScollectionsSbuffer (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoSmath();
  load_module_protoStypes();
  load_module_protoScollectionsScollection();
  load_module_protoScollectionsSsequence();
  load_module_protoScollectionsSlist();
  load_module_protoScollectionsSflat();
  load_module_protoScollectionsSvector();

  (P)YprotoScollectionsSbufferY___main_0___();

}

/* END OF GENERATED CODE. */
