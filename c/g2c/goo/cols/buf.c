/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/buf */

EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooScolsSbufYbuf_dat_setter,"goo/cols/buf","buf-dat-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooScolsSbufYlen_setter,"goo/cols/buf","len-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YgooScolsSbufYbuf_len_setter,"goo/cols/buf","buf-len-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ytail,"goo/boot","tail");
DEF(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yvec,"goo/boot","vec");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ynil,"goo/boot","nil");
EXT(YPisa,"goo/boot","%isa");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooScolsSbufYlenSfill_setter,"goo/cols/buf","len/fill-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
DEF(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooScolsSbufYbuf,"goo/cols/buf","buf");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooScolsSbufYbuf_len,"goo/cols/buf","buf-len");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooScolsSbufYbuf_dat,"goo/cols/buf","buf-dat");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYtL,"goo/types","t<");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_29);
DEFLIT(lit_38);
DEFLIT(lit_13);
DEFLIT(lit_10);
DEFLIT(lit_32);
DEFLIT(lit_37);
DEFLIT(lit_22);
DEFLIT(lit_19);
DEFLIT(lit_5);
DEFLIT(lit_24);
DEFLIT(lit_6);
DEFLIT(lit_17);
DEFLIT(lit_27);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_21);
DEFLIT(lit_4);
DEFLIT(lit_25);
DEFLIT(lit_7);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_35);
DEFLIT(lit_33);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_14);
DEFLIT(lit_23);
DEFLIT(lit_1);
DEFLIT(lit_12);
DEFLIT(lit_34);
DEFLIT(lit_9);
DEFLIT(lit_31);
DEFLIT(lit_20);
DEFLIT(lit_15);
DEFLIT(lit_11);
DEFLIT(lit_36);
DEFLIT(lit_8);
DEFLIT(lit_28);

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
LOCFOR(fun_x_1312_11);
LOCFOR(fun_x_1310_12);
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
extern P YgooScolsSbufY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_buf_len_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSbufYbuf_len));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSbufYbuf_len));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSbufYbuf_dat));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSbufYbuf_dat));
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
  T0 = CALL1(1,VARREF(YgooScolsSbufYbuf_len),c_);
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
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),c_,i_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,i_);
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
  T0 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsScolYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YgooScolsScolYlow_elt_setter),z_,c_,i_);
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
  T0 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSbufYLbufG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF1027;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceiling),s_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLvecG),T2);
  datF1027 = T1;
  T3 = CALLN(1,VARREF(Ynew),5,VARREF(YgooScolsSbufYLbufG),VARREF(YgooScolsSbufYbuf_len),s_,VARREF(YgooScolsSbufYbuf_dat),datF1027);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1312_11) {
  P x_1311_;
  P eF1028;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1311_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1311_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1311_);
    eF1028 = T4;
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),eF1028);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1311_);
    a1 = T6;
    x_1311_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1310_12) {
  P x_1309_;
  P x_1312F1030;
  P sF1029;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1309_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1309_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1309_);
    sF1029 = T4;
    T5 = FUNSHELL(1,fun_x_1312_11,2);
    x_1312F1030 = T5;
    FUNINIT(x_1312F1030, 2,FREEREF(0),x_1312F1030);
    T7 = CALL1(1,VARREF(YgooScolsScolYenum),sF1029);
    T6 = CALL1(0,x_1312F1030,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1309_);
    a1 = T9;
    x_1309_ = a1;
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
  P x_1310F1031;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1310_12,2);
  x_1310F1031 = T0;
  FUNINIT(x_1310F1031, 2,x_,x_1310F1031);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T1 = CALL1(0,x_1310F1031,T2);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(YgooScolsSbufYLbufG),elts_);
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
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_lastX_16) {
  P c_;
  P xF1033;
  P new_lenF1032;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  new_lenF1032 = T1;
  T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,new_lenF1032);
  xF1033 = T4;
  CALL2(1,VARREF(YgooScolsSbufYlen_setter),new_lenF1032,c_);
  T3 = xF1033;
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
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
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
  T0 = CALL1(1,VARREF(YgooStypesYlen),c_);
  CALL3(1,VARREF(YgooScolsScolYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fill_19) {
  P i_;
  P tmpF1035;
  P tmpF1034;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  tmpF1034 = T1;
  if (tmpF1034 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooScolsScolYlow_elt_setter),FREEREF(1),FREEREF(2),i_);
    tmpF1035 = T4;
    if (tmpF1035 != YPfalse) {
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
  QRET(T0);
}

FUNCODEDEF(fun_lenSfill_setter_20) {
  P new_len_,c_,default_;
  P fillF1039;
  P old_lenF1038;
  P new_dataF1037;
  P datF1036;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSbufYbuf_dat),c_);
  datF1036 = T1;
  T4 = CALL1(1,VARREF(YgooStypesYlen),datF1036);
  T3 = CALL2(1,VARREF(YgooSmagYG),new_len_,T4);
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceiling),new_len_);
    T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLvecG),T8);
    T6 = CALL2(1,VARREF(YgooScolsScolYfill),T7,default_);
    new_dataF1037 = T6;
    CALL2(1,VARREF(YgooScolsScolYinto),new_dataF1037,datF1036);
    CALL2(1,VARREF(YgooScolsSbufYbuf_len_setter),new_len_,c_);
    T9 = CALL2(1,VARREF(YgooScolsSbufYbuf_dat_setter),new_dataF1037,c_);
    T5 = T9;
    T2 = T5;
  } else {
    T12 = CALL1(1,VARREF(YgooStypesYlen),c_);
    T11 = CALL2(1,VARREF(YgooSmagYL),new_len_,T12);
    if (T11 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooStypesYlen),c_);
      old_lenF1038 = T14;
      CALL2(1,VARREF(YgooScolsSbufYbuf_len_setter),new_len_,c_);
      T16 = FUNSHELL(1,fun_fill_19,4);
      fillF1039 = T16;
      FUNINIT(fillF1039, 4,old_lenF1038,default_,datF1036,fillF1039);
      T17 = CALL1(1,fillF1039,new_len_);
      T15 = T17;
      T13 = T15;
      T10 = T13;
    } else {
      T18 = CALL2(1,VARREF(YgooScolsSbufYbuf_len_setter),new_len_,c_);
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
  T1 = CALL1(1,VARREF(YgooScolsScolYelt_default),c_);
  T0 = CALL3(1,VARREF(YgooScolsSbufYlenSfill_setter),new_len_,c_,T1);
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
  T1 = CALL1(1,VARREF(YgooScolsSbufYbuf_dat),x_);
  T0 = CALL2(1,VARREF(YgooScolsScolYlow_elt),T1,i_);
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
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL2(1,VARREF(YgooSmagYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T2 = CALL2(1,VARREF(YgooScolsSbufYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,VARREF(YgooScolsSbufYbuf_dat),x_);
  T4 = CALL3(1,VARREF(YgooScolsScolYlow_elt_setter),z_,T5,i_);
UNLINK_STACK();
  QRET(T4);
}

P YgooScolsSbufY___main_0___() {
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<buf>");
  T2 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T1 = (P)YPpair(VARREF(YLflatG),T2);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSbufYLbufG,T0);
  lit_1 = YPPsym((P)"buf");
  lit_2 = YPPsym((P)"elts");
  T4 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSbufYLbufG),Ynil);
  T3 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSbufYbuf,T3);
  lit_3 = YPPsym((P)"push-last!");
  lit_4 = YPPsym((P)"c");
  lit_5 = YPPsym((P)"x");
  T6 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YgooScolsSbufYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSbufYLbufG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSbufYpush_lastX,T5);
  lit_6 = YPPsym((P)"pop-last!");
  T8 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T7 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T8,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSbufYpop_lastX,T7);
  lit_7 = YPPsym((P)"len/fill-setter");
  lit_8 = YPPsym((P)"new-len");
  lit_9 = YPPsym((P)"default");
  T10 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YgooScolsSbufYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSbufYlenSfill_setter,T9);
  lit_10 = YPPsym((P)"len-setter");
  T12 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T11 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T12,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSbufYlen_setter,T11);
  lit_11 = YPPsym((P)"buf-len");
  lit_12 = YPPsym((P)"_x");
  T13 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_len_0 = YPmet(FUNCODEREF(fun_buf_len_0),LITREF(lit_11),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooScolsSbufYbuf_len);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooScolsSbufYbuf_len);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_buf_len_0;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooScolsSbufYbuf_len,T14);
  lit_13 = YPPsym((P)"buf-len-setter");
  lit_14 = YPPsym((P)"_z");
  T18 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_len_setter_1 = YPmet(FUNCODEREF(fun_buf_len_setter_1),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScolsSbufYbuf_len_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScolsSbufYbuf_len_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_buf_len_setter_1;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScolsSbufYbuf_len_setter,T19);
  T23 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSbufYLbufG),VARREF(YgooScolsSbufYbuf_len),VARREF(YgooScolsSbufYbuf_len_setter),VARREF(YLintG),T24);
  lit_15 = YPPsym((P)"buf-dat");
  T25 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_buf_dat_3 = YPmet(FUNCODEREF(fun_buf_dat_3),LITREF(lit_15),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YgooScolsSbufYbuf_dat);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooScolsSbufYbuf_dat);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_buf_dat_3;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooScolsSbufYbuf_dat,T26);
  lit_16 = YPPsym((P)"buf-dat-setter");
  T30 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLvecG),VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_buf_dat_setter_4 = YPmet(FUNCODEREF(fun_buf_dat_setter_4),LITREF(lit_16),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooScolsSbufYbuf_dat_setter);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScolsSbufYbuf_dat_setter);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_buf_dat_setter_4;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScolsSbufYbuf_dat_setter,T31);
  lit_17 = CALLN(1, Yvec, 0);
  T35 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T36 = fun_5;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSbufYLbufG),VARREF(YgooScolsSbufYbuf_dat),VARREF(YgooScolsSbufYbuf_dat_setter),VARREF(YLvecG),T36);
  lit_18 = YPPsym((P)"len");
  T37 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_18),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YgooStypesYlen);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooStypesYlen);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_len_6;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooStypesYlen,T38);
  lit_19 = YPPsym((P)"elt-or");
  lit_20 = YPPsym((P)"i");
  T42 = YPsig(YPPlist(3,LITREF(lit_4),LITREF(lit_20),LITREF(lit_9)),YPPlist(3,VARREF(YgooScolsSbufYLbufG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPmet(FUNCODEREF(fun_elt_or_7),LITREF(lit_19),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooScolsScolYelt_or);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooScolsScolYelt_or);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_elt_or_7;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooScolsScolYelt_or,T43);
  lit_21 = YPPsym((P)"elt-setter");
  lit_22 = YPPsym((P)"z");
  T47 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_4),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSbufYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_21),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YgooScolsScolYelt_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YgooScolsScolYelt_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_elt_setter_8;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YgooScolsScolYelt_setter,T48);
  lit_23 = YPPsym((P)"empty");
  T53 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSbufYLbufG));
  T52 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,T53),YPfalse,YPint((P)1),VARREF(YgooScolsSbufYLbufG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_23),T52,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsScolYempty);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsScolYempty);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_empty_9;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsScolYempty,T54);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPsym((P)"s");
  T59 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSbufYLbufG));
  T58 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_25)),YPPlist(2,T59,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSbufYLbufG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_24),T58,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooScolsScolYfab);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooScolsScolYfab);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_fab_10;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooScolsScolYfab,T60);
  lit_26 = YPPsym((P)"cat!");
  lit_27 = YPPsym((P)"more");
  lit_28 = YPPsym((P)"x-1310");
  lit_29 = YPPsym((P)"x-1309");
  lit_30 = YPPsym((P)"x-1312");
  lit_31 = YPPsym((P)"x-1311");
  T66 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1312_11 = YPmet(FUNCODEREF(fun_x_1312_11),LITREF(lit_30),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1310_12 = YPmet(FUNCODEREF(fun_x_1310_12),LITREF(lit_28),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_27)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPtrue,YPint((P)1),VARREF(YgooScolsSbufYLbufG),Ynil);
  fun_catX_13 = YPmet(FUNCODEREF(fun_catX_13),LITREF(lit_26),T64,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooScolsSseqxYcatX);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_catX_13;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooScolsSseqxYcatX,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSbufYLbufG),Ynil);
  fun_buf_14 = YPmet(FUNCODEREF(fun_buf_14),LITREF(lit_1),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooScolsSbufYbuf);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooScolsSbufYbuf);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_buf_14;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooScolsSbufYbuf,T72);
  T76 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YgooScolsSbufYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSbufYLbufG),Ynil);
  fun_push_lastX_15 = YPmet(FUNCODEREF(fun_push_lastX_15),LITREF(lit_3),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooScolsSbufYpush_lastX);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooScolsSbufYpush_lastX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_push_lastX_15;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooScolsSbufYpush_lastX,T77);
  T81 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pop_lastX_16 = YPmet(FUNCODEREF(fun_pop_lastX_16),LITREF(lit_6),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooScolsSbufYpop_lastX);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooScolsSbufYpop_lastX);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_pop_lastX_16;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooScolsSbufYpop_lastX,T82);
  lit_32 = YPPsym((P)"to-str");
  lit_33 = YPsb((P)"#[");
  lit_34 = YPsb((P)"]");
  T86 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_17 = YPmet(FUNCODEREF(fun_to_str_17),LITREF(lit_32),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooSmathYto_str);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooSmathYto_str);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_to_str_17;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooSmathYto_str,T87);
  lit_35 = YPPsym((P)"add!");
  T91 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YgooScolsSbufYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSbufYLbufG),Ynil);
  fun_addX_18 = YPmet(FUNCODEREF(fun_addX_18),LITREF(lit_35),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YgooScolsScolxYaddX);
  if (T94 != YPfalse) {
    T93 = VARREF(YgooScolsScolxYaddX);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_addX_18;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YgooScolsScolxYaddX,T92);
  lit_36 = YPPsym((P)"fill");
  T97 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_19 = YPmet(FUNCODEREF(fun_fill_19),LITREF(lit_36),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(3,LITREF(lit_8),LITREF(lit_4),LITREF(lit_9)),YPPlist(3,VARREF(YLintG),VARREF(YgooScolsSbufYLbufG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_20 = YPmet(FUNCODEREF(fun_lenSfill_setter_20),LITREF(lit_7),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YgooScolsSbufYlenSfill_setter);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooScolsSbufYlenSfill_setter);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_lenSfill_setter_20;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooScolsSbufYlenSfill_setter,T98);
  T102 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_21 = YPmet(FUNCODEREF(fun_len_setter_21),LITREF(lit_10),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YgooScolsSbufYlen_setter);
  if (T105 != YPfalse) {
    T104 = VARREF(YgooScolsSbufYlen_setter);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_len_setter_21;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YgooScolsSbufYlen_setter,T103);
  lit_37 = YPPsym((P)"low-elt");
  T107 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSbufYLbufG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_22 = YPmet(FUNCODEREF(fun_low_elt_22),LITREF(lit_37),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YgooScolsScolYlow_elt);
  if (T110 != YPfalse) {
    T109 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_low_elt_22;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YgooScolsScolYlow_elt,T108);
  lit_38 = YPPsym((P)"low-elt-setter");
  T114 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_5),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSbufYLbufG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T113 = fun_low_elt_setter_23 = YPmet(FUNCODEREF(fun_low_elt_setter_23),LITREF(lit_38),T114,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YgooScolsScolYlow_elt_setter);
  if (T118 != YPfalse) {
    T117 = VARREF(YgooScolsScolYlow_elt_setter);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_low_elt_setter_23;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  T115 = VARSET(YgooScolsScolYlow_elt_setter,T116);
  T112 = T115;
  return T112;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSflat},
  {&module_info_gooScolsSvec},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$e", &module_info_gooSmath, "$e"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"or", &module_info_gooSmacros, "or"},
  {"%put", &module_info_gooSboot, "%put"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"round/", &module_info_gooSmath, "round/"},
  {"any?", &module_info_gooStypes, "any?"},
  {"|", &module_info_gooSmath, "|"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@<", &module_info_gooSboot, "@<"},
  {"now", &module_info_gooScolsScol, "now"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"max", &module_info_gooSmag, "max"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"log", &module_info_gooSmath, "log"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%get", &module_info_gooSboot, "%get"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fin", &module_info_gooSboot, "fin"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%im", &module_info_gooSboot, "%im"},
  {"round", &module_info_gooSmath, "round"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"def", &module_info_gooSboot, "def"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"tan", &module_info_gooSmath, "tan"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"set", &module_info_gooSboot, "set"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"ct", &module_info_gooSboot, "ct"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"try", &module_info_gooSboot, "try"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"as", &module_info_gooStypes, "as"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {">", &module_info_gooSmag, ">"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"~=", &module_info_gooSmath, "~="},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"asin", &module_info_gooSmath, "asin"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"/", &module_info_gooSmath, "/"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"map", &module_info_gooSmacros, "map"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"~", &module_info_gooSmath, "~"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"=", &module_info_gooSmath, "="},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"for", &module_info_gooSmacros, "for"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"use", &module_info_gooSboot, "use"},
  {"@len", &module_info_gooSboot, "@len"},
  {"quote", &module_info_gooSboot, "quote"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@+", &module_info_gooSboot, "@+"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"items", &module_info_gooScolsScol, "items"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"1+", &module_info_gooSmath, "1+"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"loc", &module_info_gooSboot, "loc"},
  {"atan", &module_info_gooSmath, "atan"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"into", &module_info_gooScolsScol, "into"},
  {"isa", &module_info_gooSboot, "isa"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"buf-dat-setter", &YgooScolsSbufYbuf_dat_setter},
  {"len-setter", &YgooScolsSbufYlen_setter},
  {"buf-len-setter", &YgooScolsSbufYbuf_len_setter},
  {"pop-last!", &YgooScolsSbufYpop_lastX},
  {"len/fill-setter", &YgooScolsSbufYlenSfill_setter},
  {"---main-0---", NULL},
  {"<buf>", &YgooScolsSbufYLbufG},
  {"push-last!", &YgooScolsSbufYpush_lastX},
  {"buf", &YgooScolsSbufYbuf},
  {"buf-len", &YgooScolsSbufYbuf_len},
  {"buf-dat", &YgooScolsSbufYbuf_dat},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"len-setter", "len-setter"},
  {"len/fill-setter", "len/fill-setter"},
  {"pop-last!", "pop-last!"},
  {"<buf>", "<buf>"},
  {"push-last!", "push-last!"},
  {"buf", "buf"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSbuf;
MODULE_INFO module_info_gooScolsSbuf = {
  "goo/cols/buf",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSflat (void);
extern void load_module_gooScolsSvec (void);

/* EXPRESSION: */

extern void load_module_gooScolsSbuf (void);

void load_module_gooScolsSbuf (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSlst();
  load_module_gooScolsSflat();
  load_module_gooScolsSvec();

  (P)YgooScolsSbufY___main_0___();

}

/* END OF GENERATED CODE. */
